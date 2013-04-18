//===- ProfileInfoLoaderPass.cpp - LLVM Pass to load profile info ---------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file implements a concrete implementation of profiling information that
// loads the information from a profile dump file.
//
//===----------------------------------------------------------------------===//
#define DEBUG_TYPE "profile-loader"
#include "llvm/Analysis/ProfileInfo.h"
#include "llvm/Analysis/ProfileInfoLoader.h"
#include "llvm/LLVMContext.h"
#include "llvm/Module.h"
#include "llvm/Function.h"
#include "llvm/BasicBlock.h"
#include "llvm/InstrTypes.h"
#include "llvm/Support/raw_ostream.h"

#include <set>
#include <iostream>
#include "RegAllocProfileInfo.h"

using namespace llvm;

void RegAllocProfileInfo::readEdge(ProfileInfo::Edge e, std::vector<unsigned> &ECs,
    unsigned& ReadCount) {
  if (ReadCount < ECs.size()) {
    double weight = ECs[ReadCount++];
    if (weight != ProfileInfoLoader::Uncounted) {
      // Here the data realm changes from the unsigned of the file to the
      // double of the ProfileInfo. This conversion is save because we know
      // that everything thats representable in unsinged is also representable
      // in double.
      EdgeInformation[getFunction(e)][e] += (double) weight;

      DEBUG(
          dbgs() << "--Read Edge Counter for " << e << " (# "<< (ReadCount-1) << "): " << (unsigned)getEdgeWeight(e) << "\n");
    }
  }
}

RegAllocProfileInfo::RegAllocProfileInfo
  (Function* F, const std::string &filename)
  :Filename(filename){
  M = F->getParent();

  /* initialize directly in the ctor */
  ProfileInfoLoader PIL("profile-loader", Filename, *M);

  EdgeInformation.clear();
  std::vector<unsigned> Counters = PIL.getRawEdgeCounts();
  if (Counters.size() > 0) {
    unsigned ReadCount = 0;
    for (Module::iterator F = M->begin(), E = M->end(); F != E; ++F) {
      if (F->isDeclaration())
        continue;

      DEBUG(dbgs() << "Working on " << F->getName() << "\n");
      readEdge(getEdge(0, &F->getEntryBlock()), Counters, ReadCount);
      for (Function::iterator BB = F->begin(), E = F->end(); BB != E; ++BB) {
        TerminatorInst *TI = BB->getTerminator();
        for (unsigned s = 0, e = TI->getNumSuccessors(); s != e; ++s) {
          readEdge(getEdge(BB, TI->getSuccessor(s)), Counters, ReadCount);
        }
      }
    }

    if (ReadCount != Counters.size()) {
      errs() << "WARNING: profile information is inconsistent with "
          << "the current program!\n";
    }
  }
}

void RegAllocProfileInfo::dump() {
  std::map<const Function*, ProfileInfo::EdgeWeights>::iterator ei;
  for(ei= EdgeInformation.begin();ei!=EdgeInformation.end();++ei){
    outs() << ei->first->getName() << "\n";
    std::map<Edge,double>::iterator e=ei->second.begin();
    for(e=ei->second.begin();e!=ei->second.end();++e)
      outs() << getEdgeWeight(e->first) << "\n";
    outs()<<"===\n";
  }
}
