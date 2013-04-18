/*
 * prof.cpp
 *
 *  Created on: Apr 17, 2013
 *      Author: robertshih
 */
#include "llvm/LLVMContext.h"
#include "llvm/Module.h"
#include "llvm/Support/MemoryBuffer.h"
#include "llvm/Bitcode/ReaderWriter.h"
#include "llvm/Support/system_error.h"

#include "RegAllocProfileInfo.h"
using namespace llvm;
int main() {
  LLVMContext &Context = getGlobalContext();

  OwningPtr<MemoryBuffer> buffer;
  error_code err = MemoryBuffer::getFile("test/blocksort/blocksort.bc", buffer);
  Module *M = ParseBitcodeFile(buffer.get(), Context);

  Function* F = M->begin();
  std::string prof("llvmprof.out");
  RegAllocProfileInfo PL(F,prof);
  //M->dump();
  PL.dump();
}
