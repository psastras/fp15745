#include <sstream>

#include "llvm/Pass.h"
#include "llvm/InitializePasses.h"
#include "llvm/Module.h"
#include "llvm/Function.h"
#include "llvm/Analysis/Passes.h"

using namespace llvm;

namespace{
struct NameBlocks: public ModulePass {
  static char ID;
  NameBlocks() :
      ModulePass(ID) {
  }

  virtual bool runOnModule(Module& M) {
    int i = 0;
    for (Module::iterator FI = M.begin(), FE = M.end(); FI != FE; ++FI) {
      if (FI->isDeclaration()) continue;
      for (Function::iterator BB = FI->begin(), BBE = FI->end(); 
           BB != BBE; ++BB) {
        std::stringstream ss;
        ss << 'b' << i++;
        BB->setName(Twine(ss.str()));
      }
    }
    return false;
  }

};
}

char NameBlocks::ID = 0;
INITIALIZE_PASS(NameBlocks, "name-bb", "Assign ID to basic blocks", false, true)

ModulePass *llvm::createNameBlocksPass () {
  return new NameBlocks();
}

