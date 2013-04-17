//===-- Gcra.cpp - Graph-coloring Register Allocator --------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===--------------------------------------------------------------------===//
//
// This file does Graph-coloring Register Allocation, for CS 701 Project 4.
//
//===--------------------------------------------------------------------===//

#define DEBUG_TYPE "gcra"
#include <map>
#include "llvm/CodeGen/Passes.h"
#include "llvm/CodeGen/MachineFunctionPass.h"
#include "llvm/CodeGen/MachineInstr.h"
#include "llvm/CodeGen/MachineLoopInfo.h"
#include "llvm/CodeGen/MachineFrameInfo.h"
#include "llvm/CodeGen/MachineRegisterInfo.h"
#include "llvm/CodeGen/RegAllocRegistry.h"
#include "llvm/Target/TargetInstrInfo.h"
#include "llvm/Target/TargetMachine.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/Compiler.h"
#include "llvm/ADT/Statistic.h"
#include <stack>
#include <queue>
#include <iostream>

using namespace std;
using namespace llvm;


using namespace llvm;

 

 namespace {

                struct MyRegisterAllocator : public MachineFunctionPass {

                                

static char ID; // Pass identification, replacement for typeid

                MyRegisterAllocator() : MachineFunctionPass(ID) {}

virtual bool runOnMachineFunction(MachineFunction &MF) {}

   

                };

char MyRegisterAllocator::ID = 0;

}

static  RegisterPass<MyRegisterAllocator>X("myregalloc",

   "  my register allocator help string");

 

FunctionPass* createMyRegisterAllocator() {

    return new MyRegisterAllocator();

  }

 

static RegisterRegAlloc MyRegAlloc("myregalloc",

    "  my register allocator help string",

    createMyRegisterAllocator);
