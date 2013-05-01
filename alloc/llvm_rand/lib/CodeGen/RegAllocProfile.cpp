//===-- RegAllocBasic.cpp - Basic Register Allocator ----------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file defines the RAProfile function pass, which provides a minimal
// implementation of the basic register allocator.
//
//===----------------------------------------------------------------------===//

#define DEBUG_TYPE "regalloc"
#include "RegAllocBase.h"
#include "llvm/BasicBlock.h"
#include "llvm/InstrTypes.h"
#include "llvm/Module.h"
#include "LiveDebugVariables.h"
#include "llvm/PassManager.h"
#include "RenderMachineFunction.h"
#include "Spiller.h"
#include "VirtRegMap.h"
#include "llvm/Analysis/AliasAnalysis.h"
#include "llvm/Function.h"
#include "llvm/InitializePasses.h"
#include "llvm/PassAnalysisSupport.h"
#include "llvm/CodeGen/CalcSpillWeights.h"
#include "llvm/CodeGen/LiveIntervalAnalysis.h"
#include "llvm/CodeGen/LiveRangeEdit.h"
#include "llvm/CodeGen/LiveStackAnalysis.h"
#include "llvm/CodeGen/MachineFunctionPass.h"
#include "llvm/CodeGen/MachineInstr.h"
#include "llvm/CodeGen/MachineLoopInfo.h"
#include "llvm/CodeGen/MachineRegisterInfo.h"
#include "llvm/CodeGen/Passes.h"
#include "llvm/CodeGen/RegAllocRegistry.h"
#include "llvm/Target/TargetMachine.h"
#include "llvm/Target/TargetOptions.h"
#include "llvm/Target/TargetRegisterInfo.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Analysis/Passes.h"
#include "llvm/Analysis/ProfileInfo.h"
#include "llvm/Analysis/ProfileInfoLoader.h"
#include <cstdlib>
#include <queue>

using namespace llvm;

static RegisterRegAlloc profileRegAlloc("profile", "profile register allocator",
                                      createProfileRegisterAllocator);

namespace {
  struct CompSpillWeight {
    bool operator()(LiveInterval *A, LiveInterval *B) const {
      return A->weight < B->weight;
    }
  };
}

namespace {
/// RAProfile provides a minimal implementation of the basic register allocation
/// algorithm. It prioritizes live virtual registers by spill weight and spills
/// whenever a register is unavailable. This is not practical in production but
/// provides a useful baseline both for measuring other allocators and comparing
/// the speed of the basic algorithm against other styles of allocators.
class RAProfile : public MachineFunctionPass, public RegAllocBase
{
  // context
  MachineFunction *MF;

  // analyses
  LiveStacks *LS;
  RenderMachineFunction *RMF;

  // state
  std::auto_ptr<Spiller> SpillerInstance;
  std::priority_queue<LiveInterval*, std::vector<LiveInterval*>,
                      CompSpillWeight> Queue;

  // Scratch space.  Allocated here to avoid repeated malloc calls in
  // selectOrSplit().
  BitVector UsableRegs;

public:
  RAProfile();

  /// Return the pass name.
  virtual const char* getPassName() const {
    return "Basic Register Allocator";
  }

  /// RAProfile analysis usage.
  virtual void getAnalysisUsage(AnalysisUsage &AU) const;

  virtual void releaseMemory();

  virtual Spiller &spiller() { return *SpillerInstance; }

  virtual float getPriority(LiveInterval *LI) { return LI->weight; }

  virtual void enqueue(LiveInterval *LI) {
    Queue.push(LI);
  }

  virtual LiveInterval *dequeue() {
    if (Queue.empty())
      return 0;
    LiveInterval *LI = Queue.top();
    Queue.pop();
    return LI;
  }

  virtual unsigned selectOrSplit(LiveInterval &VirtReg,
                                 SmallVectorImpl<LiveInterval*> &SplitVRegs);

  /// Perform register allocation.
  virtual bool runOnMachineFunction(MachineFunction &mf);

  // Helper for spilling all live virtual registers currently unified under preg
  // that interfere with the most recently queried lvr.  Return true if spilling
  // was successful, and append any new spilled/split intervals to splitLVRs.
  bool spillInterferences(LiveInterval &VirtReg, unsigned PhysReg,
                          SmallVectorImpl<LiveInterval*> &SplitVRegs);

  void spillReg(LiveInterval &VirtReg, unsigned PhysReg,
                SmallVectorImpl<LiveInterval*> &SplitVRegs);

  static char ID;
};

char RAProfile::ID = 0;
} // end anonymous namespace

RAProfile::RAProfile(): MachineFunctionPass(ID) {
  initializeLiveDebugVariablesPass(*PassRegistry::getPassRegistry());
  initializeLiveIntervalsPass(*PassRegistry::getPassRegistry());
  initializeSlotIndexesPass(*PassRegistry::getPassRegistry());
  initializeRegisterCoalescerPass(*PassRegistry::getPassRegistry());
  initializeMachineSchedulerPass(*PassRegistry::getPassRegistry());
  initializeCalculateSpillWeightsPass(*PassRegistry::getPassRegistry());
  initializeLiveStacksPass(*PassRegistry::getPassRegistry());
  initializeMachineDominatorTreePass(*PassRegistry::getPassRegistry());
  initializeMachineLoopInfoPass(*PassRegistry::getPassRegistry());
  initializeVirtRegMapPass(*PassRegistry::getPassRegistry());
  initializeRenderMachineFunctionPass(*PassRegistry::getPassRegistry());
}

void RAProfile::getAnalysisUsage(AnalysisUsage &AU) const {
  AU.setPreservesCFG();
  AU.addRequired<AliasAnalysis>();
  AU.addPreserved<AliasAnalysis>();
  AU.addRequired<LiveIntervals>();
  AU.addPreserved<SlotIndexes>();
  AU.addRequired<LiveDebugVariables>();
  AU.addPreserved<LiveDebugVariables>();
  AU.addRequired<CalculateSpillWeights>();
  AU.addRequired<LiveStacks>();
  AU.addPreserved<LiveStacks>();
  AU.addRequiredID(MachineDominatorsID);
  AU.addPreservedID(MachineDominatorsID);
  AU.addRequired<MachineLoopInfo>();
  AU.addPreserved<MachineLoopInfo>();
  AU.addRequired<VirtRegMap>();
  AU.addPreserved<VirtRegMap>();
  DEBUG(AU.addRequired<RenderMachineFunction>());
  MachineFunctionPass::getAnalysisUsage(AU);
}

void RAProfile::releaseMemory() {
  SpillerInstance.reset(0);
  RegAllocBase::releaseMemory();
}

// Helper for spillInterferences() that spills all interfering vregs currently
// assigned to this physical register.
void RAProfile::spillReg(LiveInterval& VirtReg, unsigned PhysReg,
                       SmallVectorImpl<LiveInterval*> &SplitVRegs) {
  LiveIntervalUnion::Query &Q = query(VirtReg, PhysReg);
  assert(Q.seenAllInterferences() && "need collectInterferences()");
  const SmallVectorImpl<LiveInterval*> &PendingSpills = Q.interferingVRegs();

  for (SmallVectorImpl<LiveInterval*>::const_iterator I = PendingSpills.begin(),
         E = PendingSpills.end(); I != E; ++I) {
    LiveInterval &SpilledVReg = **I;
    errs() << "extracting from " <<
          TRI->getName(PhysReg) << " " << SpilledVReg << '\n';

    // Deallocate the interfering vreg by removing it from the union.
    // A LiveInterval instance may not be in a union during modification!
    unassign(SpilledVReg, PhysReg);

    // Spill the extracted interval.
    LiveRangeEdit LRE(SpilledVReg, SplitVRegs, *MF, *LIS, VRM);
    spiller().spill(LRE);
  }
  // After extracting segments, the query's results are invalid. But keep the
  // contents valid until we're done accessing pendingSpills.
  Q.clear();
}

// Spill or split all live virtual registers currently unified under PhysReg
// that interfere with VirtReg. The newly spilled or split live intervals are
// returned by appending them to SplitVRegs.
bool RAProfile::spillInterferences(LiveInterval &VirtReg, unsigned PhysReg,
                                 SmallVectorImpl<LiveInterval*> &SplitVRegs) {
  // Record each interference and determine if all are spillable before mutating
  // either the union or live intervals.
  unsigned NumInterferences = 0;
  // Collect interferences assigned to any alias of the physical register.
  for (const uint16_t *asI = TRI->getOverlaps(PhysReg); *asI; ++asI) {
    LiveIntervalUnion::Query &QAlias = query(VirtReg, *asI);
    NumInterferences += QAlias.collectInterferingVRegs();
    if (QAlias.seenUnspillableVReg()) {
      return false;
    }
  }
  errs() << "spilling " << TRI->getName(PhysReg) <<
        " interferences with " << VirtReg << "\n";
  assert(NumInterferences > 0 && "expect interference");

  // Spill each interfering vreg allocated to PhysReg or an alias.
  for (const uint16_t *AliasI = TRI->getOverlaps(PhysReg); *AliasI; ++AliasI)
    spillReg(VirtReg, *AliasI, SplitVRegs);
  return true;
}

// Driver for the register assignment and splitting heuristics.
// Manages iteration over the LiveIntervalUnions.
//
// This is a minimal implementation of register assignment and splitting that
// spills whenever we run out of registers.
//
// selectOrSplit can only be called once per live virtual register. We then do a
// single interference test for each register the correct class until we find an
// available register. So, the number of interference tests in the worst case is
// |vregs| * |machineregs|. And since the number of interference tests is
// minimal, there is no value in caching them outside the scope of
// selectOrSplit().
unsigned RAProfile::selectOrSplit(LiveInterval &VirtReg,
                                SmallVectorImpl<LiveInterval*> &SplitVRegs) {
  // Check for register mask interference.  When live ranges cross calls, the
  // set of usable registers is reduced to the callee-saved ones.
  bool CrossRegMasks = LIS->checkRegMaskInterference(VirtReg, UsableRegs);

  // Populate a list of physical register spill candidates.
  SmallVector<unsigned, 8> PhysRegSpillCands;

  // Check for an available register in this class.
  ArrayRef<unsigned> Order =
    RegClassInfo.getOrder(MRI->getRegClass(VirtReg.reg));
  for (ArrayRef<unsigned>::iterator I = Order.begin(), E = Order.end(); I != E;
       ++I) {
    unsigned PhysReg = *I;

    // If PhysReg is clobbered by a register mask, it isn't useful for
    // allocation or spilling.
    if (CrossRegMasks && !UsableRegs.test(PhysReg))
      continue;

    // Check interference and as a side effect, intialize queries for this
    // VirtReg and its aliases.
    unsigned interfReg = checkPhysRegInterference(VirtReg, PhysReg);
    if (interfReg == 0) {
      // Found an available register.
      return PhysReg;
    }
    LiveIntervalUnion::Query &IntfQ = query(VirtReg, interfReg);
    IntfQ.collectInterferingVRegs(1);
    LiveInterval *interferingVirtReg = IntfQ.interferingVRegs().front();

    // The current VirtReg must either be spillable, or one of its interferences
    // must have less spill weight.
    // @todo: estimate interfering virtreg weight, higher weight is not spillable Limit is HUGE_VALF
    if (interferingVirtReg->weight < VirtReg.weight ) {
      PhysRegSpillCands.push_back(PhysReg);
    }
  }
  // Try to spill another interfering reg with less spill weight.
  for (SmallVectorImpl<unsigned>::iterator PhysRegI = PhysRegSpillCands.begin(),
         PhysRegE = PhysRegSpillCands.end(); PhysRegI != PhysRegE; ++PhysRegI) {

    if (!spillInterferences(VirtReg, *PhysRegI, SplitVRegs)) continue;

    assert(checkPhysRegInterference(VirtReg, *PhysRegI) == 0 &&
           "Interference after spill.");
    // Tell the caller to allocate to this newly freed physical register.
    return *PhysRegI;
  }

  // No other spill candidates were found, so spill the current VirtReg.
  errs() << "spilling: " << VirtReg << '\n';
  if (!VirtReg.isSpillable())
    return ~0u;
  LiveRangeEdit LRE(VirtReg, SplitVRegs, *MF, *LIS, VRM);
  spiller().spill(LRE);

  // The live virtual register requesting allocation was spilled, so tell
  // the caller not to allocate anything during this round.
  return 0;
}



// PairSecondSort - A sorting predicate to sort by the second element of a pair.
template<class T>
struct PairSecondSortReverse
  : public std::binary_function<std::pair<T, double>,
                                std::pair<T, double>, bool> {
  bool operator()(const std::pair<T, double> &LHS,
                  const std::pair<T, double> &RHS) const {
    return LHS.second > RHS.second;
  }
};

static double ignoreMissing(double w) {
  if (w == ProfileInfo::MissingValue) return 0;
  return w;
}


namespace {
  /// ProfileInfoPrinterPass - Helper pass to dump the profile information for
  /// a module.
  //
  // FIXME: This should move elsewhere.
  class ProfileInfoPrinterPass : public ModulePass {
    ProfileInfoLoader &PIL;
  public:
    static char ID; // Class identification, replacement for typeinfo.
    explicit ProfileInfoPrinterPass(ProfileInfoLoader &_PIL) 
      : ModulePass(ID), PIL(_PIL) {}

    virtual void getAnalysisUsage(AnalysisUsage &AU) const {
      AU.setPreservesAll();
      AU.addRequired<ProfileInfo>();
    }

    bool runOnModule(Module &M);

    std::map<const Function  *, unsigned> FuncFreqs;
    std::map<const BasicBlock*, unsigned> BlockFreqs;
    std::map<ProfileInfo::Edge, unsigned> EdgeFreqs;
  };
}

char ProfileInfoPrinterPass::ID = 0;

bool ProfileInfoPrinterPass::runOnModule(Module &M) {
  errs() << "Running\n";
  ProfileInfo &PI = getAnalysis<ProfileInfo>();

  // Output a report. Eventually, there will be multiple reports selectable on
  // the command line, for now, just keep things simple.

  // Emit the most frequent function table...
  std::vector<std::pair<Function*, double> > FunctionCounts;
  std::vector<std::pair<BasicBlock*, double> > Counts;
  for (Module::iterator FI = M.begin(), FE = M.end(); FI != FE; ++FI) {
    if (FI->isDeclaration()) continue;
    double w = ignoreMissing(PI.getExecutionCount(FI));
    FunctionCounts.push_back(std::make_pair(FI, w));
    for (Function::iterator BB = FI->begin(), BBE = FI->end(); 
         BB != BBE; ++BB) {
      double w = ignoreMissing(PI.getExecutionCount(BB));
      Counts.push_back(std::make_pair(BB, w));
      if(BlockFreqs.find(BB) == BlockFreqs.end())
        BlockFreqs[BB] = w;
      else
        BlockFreqs[BB] += w;
    }
  }


  return false;
}

bool RAProfile::runOnMachineFunction(MachineFunction &mf) {
  errs() << "********** PROFILE BASED REGISTER ALLOCATION **********\n"
               << "********** Function: "
               << ((Value*)mf.getFunction())->getName() << '\n';

  MF = &mf;
  DEBUG(RMF = &getAnalysis<RenderMachineFunction>());

  RegAllocBase::init(getAnalysis<VirtRegMap>(), getAnalysis<LiveIntervals>());
  SpillerInstance.reset(createInlineSpiller(*this, *MF, *VRM));

  allocatePhysRegs();
  
  const Module *M = mf.getFunction()->getParent();
  std::string prof_file = "llvmprof.out";
  ProfileInfoLoader PIL("profile-loader-regalloc", prof_file, *(Module *)M);
  PassManager PassMgr;
  PassMgr.add(createProfileLoaderPass(prof_file));
  PassMgr.add(new ProfileInfoPrinterPass(PIL));
  PassMgr.run(*(Module *)M);
  // errs() << "Num called:" <<  PIL.getRawBlockCounts().size() << "\n";
  addMBBLiveIns(MF);

  // Diagnostic output before rewriting
// errs() << "Post alloc VirtRegMap:\n" << *VRM << "\n";

  // optional HTML output
  //RMF->renderMachineFunction("After basic register allocation.", VRM);

  // FIXME: Verification currently must run before VirtRegRewriter. We should
  // make the rewriter a separate pass and override verifyAnalysis instead. When
  // that happens, verification naturally falls under VerifyMachineCode.
#ifndef NDEBUG
  if (VerifyEnabled) {
    // Verify accuracy of LiveIntervals. The standard machine code verifier
    // ensures that each LiveIntervals covers all uses of the virtual reg.

    // FIXME: MachineVerifier is badly broken when using the standard
    // spiller. Always use -spiller=inline with -verify-regalloc. Even with the
    // inline spiller, some tests fail to verify because the coalescer does not
    // always generate verifiable code.
    MF->verify(this, "In RAProfile::verify");

    // Verify that LiveIntervals are partitioned into unions and disjoint within
    // the unions.
    verify();
  }
#endif // !NDEBUG

  // Run rewriter
  VRM->rewrite(LIS->getSlotIndexes());

  // Write out new DBG_VALUE instructions.
  getAnalysis<LiveDebugVariables>().emitDebugValues(VRM);

  // All machine operands and other references to virtual registers have been
  // replaced. Remove the virtual registers and release all the transient data.
  VRM->clearAllVirt();
  MRI->clearVirtRegs();
  releaseMemory();

  return true;
}

FunctionPass* llvm::createProfileRegisterAllocator()
{
  std::string prof_file = "llvmprof.out";
  
  return new RAProfile();
}


