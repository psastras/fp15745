//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Target DFA Packetizer Tables
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {

const int HexagonDFAStateInputTable[][2] = {
{1, 3},    {2, 1},    {3, 6},    {4, 2},    {8, 4},    {12, 7},    {15, 5},    
{1, 21},    {3, 21},    {4, 41},    {8, 38},    {12, 8},    {15, 29},    
{1, 40},    {2, 41},    {3, 22},    {8, 9},    {12, 9},    {15, 30},    
{2, 21},    {3, 21},    {4, 40},    {8, 39},    {12, 10},    {15, 31},    
{1, 39},    {2, 38},    {3, 23},    {4, 9},    {12, 9},    {15, 32},    
{1, 31},    {2, 29},    {3, 24},    {4, 30},    {8, 32},    {12, 11},    {15, 33},    
{1, 21},    {2, 21},    {3, 21},    {4, 22},    {8, 23},    {12, 12},    {15, 24},    
{1, 10},    {2, 8},    {3, 12},    {4, 9},    {8, 9},    {12, 9},    {15, 11},    
{1, 13},    {3, 13},    {4, 20},    {8, 20},    {12, 20},    {15, 17},    
{1, 19},    {2, 20},    {3, 14},    {15, 14},    
{2, 13},    {3, 13},    {4, 19},    {8, 19},    {12, 19},    {15, 18},    
{1, 18},    {2, 17},    {3, 15},    {4, 14},    {8, 14},    {12, 14},    {15, 15},    
{1, 13},    {2, 13},    {3, 13},    {4, 14},    {8, 14},    {12, 14},    {15, 15},    
{4, 16},    {8, 16},    {12, 16},    {15, 16},    
{1, 16},    {2, 16},    {3, 16},    {15, 16},    
{1, 16},    {2, 16},    {3, 16},    {4, 16},    {8, 16},    {12, 16},    {15, 16},    
{-1, -1},
{1, 16},    {3, 16},    {4, 16},    {8, 16},    {12, 16},    {15, 16},    
{2, 16},    {3, 16},    {4, 16},    {8, 16},    {12, 16},    {15, 16},    
{2, 16},    {3, 16},    {15, 16},    
{1, 16},    {3, 16},    {15, 16},    
{4, 28},    {8, 27},    {12, 13},    {15, 13},    
{1, 28},    {2, 28},    {3, 28},    {8, 14},    {12, 14},    {15, 25},    
{1, 27},    {2, 27},    {3, 27},    {4, 14},    {12, 14},    {15, 26},    
{1, 13},    {2, 13},    {3, 13},    {4, 25},    {8, 26},    {12, 15},    {15, 15},    
{1, 16},    {2, 16},    {3, 16},    {8, 16},    {12, 16},    {15, 16},    
{1, 16},    {2, 16},    {3, 16},    {4, 16},    {12, 16},    {15, 16},    
{4, 16},    {12, 16},    {15, 16},    
{8, 16},    {12, 16},    {15, 16},    
{1, 13},    {3, 13},    {4, 37},    {8, 34},    {12, 17},    {15, 17},    
{1, 36},    {2, 37},    {3, 25},    {8, 14},    {12, 14},    {15, 25},    
{2, 13},    {3, 13},    {4, 36},    {8, 35},    {12, 18},    {15, 18},    
{1, 35},    {2, 34},    {3, 26},    {4, 14},    {12, 14},    {15, 26},    
{1, 18},    {2, 17},    {3, 15},    {4, 25},    {8, 26},    {12, 15},    {15, 15},    
{1, 16},    {3, 16},    {4, 16},    {12, 16},    {15, 16},    
{2, 16},    {3, 16},    {4, 16},    {12, 16},    {15, 16},    
{2, 16},    {3, 16},    {8, 16},    {12, 16},    {15, 16},    
{1, 16},    {3, 16},    {8, 16},    {12, 16},    {15, 16},    
{1, 27},    {3, 27},    {4, 20},    {12, 20},    {15, 34},    
{2, 27},    {3, 27},    {4, 19},    {12, 19},    {15, 35},    
{2, 28},    {3, 28},    {8, 19},    {12, 19},    {15, 36},    
{1, 28},    {3, 28},    {8, 20},    {12, 20},    {15, 37},    
};

const unsigned int HexagonDFAStateEntryTable[] = {
0, 7, 13, 19, 25, 31, 38, 45, 52, 58, 62, 68, 75, 82, 86, 90, 97, 98, 104, 110, 113, 116, 120, 126, 132, 139, 145, 151, 154, 157, 163, 169, 175, 181, 188, 193, 198, 203, 208, 213, 218, 223, 
};
} // namespace

#include "llvm/CodeGen/DFAPacketizer.h"
namespace llvm {
DFAPacketizer *HexagonGenSubtargetInfo::createDFAPacketizer(const InstrItineraryData *IID) const {
   return new DFAPacketizer(IID, HexagonDFAStateInputTable, HexagonDFAStateEntryTable);
}

} // End llvm namespace 