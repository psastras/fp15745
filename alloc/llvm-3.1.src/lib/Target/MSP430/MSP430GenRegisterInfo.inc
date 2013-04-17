//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Target Register Enum Values
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//


#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM
namespace llvm {

class MCRegisterClass;
extern const MCRegisterClass MSP430MCRegisterClasses[];

namespace MSP430 {
enum {
  NoRegister,
  CGB = 1,
  CGW = 2,
  FPB = 3,
  FPW = 4,
  PCB = 5,
  PCW = 6,
  R5B = 7,
  R5W = 8,
  R6B = 9,
  R6W = 10,
  R7B = 11,
  R7W = 12,
  R8B = 13,
  R8W = 14,
  R9B = 15,
  R9W = 16,
  R10B = 17,
  R10W = 18,
  R11B = 19,
  R11W = 20,
  R12B = 21,
  R12W = 22,
  R13B = 23,
  R13W = 24,
  R14B = 25,
  R14W = 26,
  R15B = 27,
  R15W = 28,
  SPB = 29,
  SPW = 30,
  SRB = 31,
  SRW = 32,
  NUM_TARGET_REGS 	// 33
};
}

// Register classes
namespace MSP430 {
enum {
  GR8RegClassID = 0,
  GR16RegClassID = 1
  };
}

// Subregister indices
namespace MSP430 {
enum {
  NoSubRegister,
  subreg_8bit,	// 1
  NUM_TARGET_NAMED_SUBREGS
};
}
} // End llvm namespace 
#endif // GET_REGINFO_ENUM

//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// MC Register Information
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//


#ifdef GET_REGINFO_MC_DESC
#undef GET_REGINFO_MC_DESC
namespace llvm {

extern const uint16_t MSP430RegLists[] = {
  /* 0 */ MSP430::CGW, MSP430::CGB, 0,
  /* 3 */ MSP430::CGB, MSP430::CGW, 0,
  /* 6 */ MSP430::FPW, MSP430::FPB, 0,
  /* 9 */ MSP430::FPB, MSP430::FPW, 0,
  /* 12 */ MSP430::PCW, MSP430::PCB, 0,
  /* 15 */ MSP430::PCB, MSP430::PCW, 0,
  /* 18 */ MSP430::R5W, MSP430::R5B, 0,
  /* 21 */ MSP430::R5B, MSP430::R5W, 0,
  /* 24 */ MSP430::R6W, MSP430::R6B, 0,
  /* 27 */ MSP430::R6B, MSP430::R6W, 0,
  /* 30 */ MSP430::R7W, MSP430::R7B, 0,
  /* 33 */ MSP430::R7B, MSP430::R7W, 0,
  /* 36 */ MSP430::R8W, MSP430::R8B, 0,
  /* 39 */ MSP430::R8B, MSP430::R8W, 0,
  /* 42 */ MSP430::R9W, MSP430::R9B, 0,
  /* 45 */ MSP430::R9B, MSP430::R9W, 0,
  /* 48 */ MSP430::R10W, MSP430::R10B, 0,
  /* 51 */ MSP430::R10B, MSP430::R10W, 0,
  /* 54 */ MSP430::R11W, MSP430::R11B, 0,
  /* 57 */ MSP430::R11B, MSP430::R11W, 0,
  /* 60 */ MSP430::R12W, MSP430::R12B, 0,
  /* 63 */ MSP430::R12B, MSP430::R12W, 0,
  /* 66 */ MSP430::R13W, MSP430::R13B, 0,
  /* 69 */ MSP430::R13B, MSP430::R13W, 0,
  /* 72 */ MSP430::R14W, MSP430::R14B, 0,
  /* 75 */ MSP430::R14B, MSP430::R14W, 0,
  /* 78 */ MSP430::R15W, MSP430::R15B, 0,
  /* 81 */ MSP430::R15B, MSP430::R15W, 0,
  /* 84 */ MSP430::SPW, MSP430::SPB, 0,
  /* 87 */ MSP430::SPB, MSP430::SPW, 0,
  /* 90 */ MSP430::SRW, MSP430::SRB, 0,
  /* 93 */ MSP430::SRB, MSP430::SRW, 0,
};

extern const MCRegisterDesc MSP430RegDesc[] = { // Descriptors
  { "NOREG", 0, 0, 0 },
  { "CGB", 3, 2, 4 },
  { "CGW", 0, 1, 2 },
  { "FPB", 9, 2, 10 },
  { "FPW", 6, 7, 2 },
  { "PCB", 15, 2, 16 },
  { "PCW", 12, 13, 2 },
  { "R5B", 21, 2, 22 },
  { "R5W", 18, 19, 2 },
  { "R6B", 27, 2, 28 },
  { "R6W", 24, 25, 2 },
  { "R7B", 33, 2, 34 },
  { "R7W", 30, 31, 2 },
  { "R8B", 39, 2, 40 },
  { "R8W", 36, 37, 2 },
  { "R9B", 45, 2, 46 },
  { "R9W", 42, 43, 2 },
  { "R10B", 51, 2, 52 },
  { "R10W", 48, 49, 2 },
  { "R11B", 57, 2, 58 },
  { "R11W", 54, 55, 2 },
  { "R12B", 63, 2, 64 },
  { "R12W", 60, 61, 2 },
  { "R13B", 69, 2, 70 },
  { "R13W", 66, 67, 2 },
  { "R14B", 75, 2, 76 },
  { "R14W", 72, 73, 2 },
  { "R15B", 81, 2, 82 },
  { "R15W", 78, 79, 2 },
  { "SPB", 87, 2, 88 },
  { "SPW", 84, 85, 2 },
  { "SRB", 93, 2, 94 },
  { "SRW", 90, 91, 2 },
};

namespace {     // Register classes...
  // GR8 Register Class...
  const uint16_t GR8[] = {
    MSP430::R12B, MSP430::R13B, MSP430::R14B, MSP430::R15B, MSP430::R11B, MSP430::R10B, MSP430::R9B, MSP430::R8B, MSP430::R7B, MSP430::R6B, MSP430::R5B, MSP430::FPB, MSP430::PCB, MSP430::SPB, MSP430::SRB, MSP430::CGB, 
  };

  // GR8 Bit set.
  const uint8_t GR8Bits[] = {
    0xaa, 0xaa, 0xaa, 0xaa, 
  };

  // GR16 Register Class...
  const uint16_t GR16[] = {
    MSP430::R12W, MSP430::R13W, MSP430::R14W, MSP430::R15W, MSP430::R11W, MSP430::R10W, MSP430::R9W, MSP430::R8W, MSP430::R7W, MSP430::R6W, MSP430::R5W, MSP430::FPW, MSP430::PCW, MSP430::SPW, MSP430::SRW, MSP430::CGW, 
  };

  // GR16 Bit set.
  const uint8_t GR16Bits[] = {
    0x54, 0x55, 0x55, 0x55, 0x01, 
  };

}

extern const MCRegisterClass MSP430MCRegisterClasses[] = {
  { "GR8", GR8, GR8Bits, 16, sizeof(GR8Bits), MSP430::GR8RegClassID, 1, 1, 1, 1 },
  { "GR16", GR16, GR16Bits, 16, sizeof(GR16Bits), MSP430::GR16RegClassID, 2, 2, 1, 1 },
};

const uint16_t MSP430SubRegTable[][1] = {
  /* CGB */
  {0},
  /* CGW */
  {MSP430::CGB},
  /* FPB */
  {0},
  /* FPW */
  {MSP430::FPB},
  /* PCB */
  {0},
  /* PCW */
  {MSP430::PCB},
  /* R5B */
  {0},
  /* R5W */
  {MSP430::R5B},
  /* R6B */
  {0},
  /* R6W */
  {MSP430::R6B},
  /* R7B */
  {0},
  /* R7W */
  {MSP430::R7B},
  /* R8B */
  {0},
  /* R8W */
  {MSP430::R8B},
  /* R9B */
  {0},
  /* R9W */
  {MSP430::R9B},
  /* R10B */
  {0},
  /* R10W */
  {MSP430::R10B},
  /* R11B */
  {0},
  /* R11W */
  {MSP430::R11B},
  /* R12B */
  {0},
  /* R12W */
  {MSP430::R12B},
  /* R13B */
  {0},
  /* R13W */
  {MSP430::R13B},
  /* R14B */
  {0},
  /* R14W */
  {MSP430::R14B},
  /* R15B */
  {0},
  /* R15W */
  {MSP430::R15B},
  /* SPB */
  {0},
  /* SPW */
  {MSP430::SPB},
  /* SRB */
  {0},
  /* SRW */
  {MSP430::SRB},
};

const uint16_t *getMSP430SubRegTable() {
  return (const uint16_t *)MSP430SubRegTable;
}

static inline void InitMSP430MCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0) {
  RI->InitMCRegisterInfo(MSP430RegDesc, 33, RA, MSP430MCRegisterClasses, 2, MSP430RegLists, (uint16_t*)MSP430SubRegTable, 1);

}

} // End llvm namespace 
#endif // GET_REGINFO_MC_DESC

//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Register Information Header Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//


#ifdef GET_REGINFO_HEADER
#undef GET_REGINFO_HEADER
#include "llvm/Target/TargetRegisterInfo.h"

namespace llvm {

struct MSP430GenRegisterInfo : public TargetRegisterInfo {
  explicit MSP430GenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0);
  virtual bool needsStackRealignment(const MachineFunction &) const
     { return false; }
  unsigned composeSubRegIndices(unsigned, unsigned) const;
  const TargetRegisterClass *getSubClassWithSubReg(const TargetRegisterClass*, unsigned) const;
  const TargetRegisterClass *getMatchingSuperRegClass(const TargetRegisterClass*, const TargetRegisterClass*, unsigned) const;
  const RegClassWeight &getRegClassWeight(const TargetRegisterClass *RC) const;
  unsigned getNumRegPressureSets() const;
  unsigned getRegPressureSetLimit(unsigned Idx) const;
  const int *getRegClassPressureSets(const TargetRegisterClass *RC) const;
};

namespace MSP430 { // Register classes
  extern const TargetRegisterClass GR8RegClass;
  static const TargetRegisterClass * const GR8RegisterClass = &GR8RegClass;
  extern const TargetRegisterClass GR16RegClass;
  static const TargetRegisterClass * const GR16RegisterClass = &GR16RegClass;
} // end of namespace MSP430

} // End llvm namespace 
#endif // GET_REGINFO_HEADER

//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Target Register and Register Classes Information
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//


#ifdef GET_REGINFO_TARGET_DESC
#undef GET_REGINFO_TARGET_DESC
namespace llvm {

extern const MCRegisterClass MSP430MCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i8, MVT::Other,
  /* 2 */ MVT::i16, MVT::Other,
};

static const TargetRegisterClass *const NullRegClasses[] = { NULL };

// GR8 Super-register Classes...
static const TargetRegisterClass *const GR8SuperRegClasses[] = {
  &MSP430::GR16RegClass, NULL
};

// GR16 Super-register Classes...
static const TargetRegisterClass *const GR16SuperRegClasses[] = {
  NULL
};

static const uint32_t GR8SubclassMask[] = {
  0x00000001, 
};

static const uint32_t GR16SubclassMask[] = {
  0x00000002, 
};

namespace MSP430 {   // Register class instances
  extern const TargetRegisterClass GR8RegClass = {
    &MSP430MCRegisterClasses[GR8RegClassID],
    VTLists + 0,
    GR8SubclassMask,
    NullRegClasses,
    GR8SuperRegClasses,
    0
  };

  extern const TargetRegisterClass GR16RegClass = {
    &MSP430MCRegisterClasses[GR16RegClassID],
    VTLists + 2,
    GR16SubclassMask,
    NullRegClasses,
    GR16SuperRegClasses,
    0
  };

}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &MSP430::GR8RegClass,
    &MSP430::GR16RegClass,
  };
}

static const TargetRegisterInfoDesc MSP430RegInfoDesc[] = { // Extra Descriptors
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
};

static const char *const MSP430SubRegIndexTable[] = { "subreg_8bit" };


unsigned MSP430GenRegisterInfo::composeSubRegIndices(unsigned IdxA, unsigned IdxB) const {
  switch (IdxA) {
  default:
    return IdxB;
  }
}

const TargetRegisterClass *MSP430GenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[2][1] = {
    {	// GR8
      0,	// subreg_8bit
    },
    {	// GR16
      2,	// subreg_8bit -> GR16
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 1 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : 0;
}

const TargetRegisterClass *MSP430GenRegisterInfo::getMatchingSuperRegClass(const TargetRegisterClass *A, const TargetRegisterClass *B, unsigned Idx) const {
  static const uint32_t Table[2][1][1] = {
    {	// GR8
      { 0x00000002, },	// subreg_8bit
    },
    {	// GR16
      { 0x00000000, },	// subreg_8bit
    },
  };
  assert(A && B && "Missing regclass");
  --Idx;
  assert(Idx < 1 && "Bad subreg");
  const uint32_t *TV = Table[B->getID()][Idx];
  const uint32_t *SC = A->getSubClassMask();
  for (unsigned i = 0; i != 1; ++i)
    if (unsigned Common = TV[i] & SC[i])
      return getRegClass(32*i + CountTrailingZeros_32(Common));
  return 0;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &MSP430GenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 16},  	// GR8
    {1, 16},  	// GR16
    {0, 0} };
  return RCWeightTable[RC->getID()];
}


// Get the number of dimensions of register pressure.
unsigned MSP430GenRegisterInfo::getNumRegPressureSets() const {
  return 1;
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned MSP430GenRegisterInfo::
getRegPressureSetLimit(unsigned Idx) const {
  static const unsigned PressureLimitTable[] = {
    16,  	// 0: GR8
    0 };
  return PressureLimitTable[Idx];
}

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* MSP430GenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const int RCSetsTable[] = {
    0,  -1,  	// GR8
    0,  -1,  	// GR16
    -1 };
  static const unsigned RCSetStartTable[] = {
    0,2,0 };
  unsigned SetListStart = RCSetStartTable[RC->getID()];
  return &RCSetsTable[SetListStart];
}

extern const MCRegisterDesc MSP430RegDesc[];
extern const uint16_t MSP430RegLists[];
extern const uint16_t *getMSP430SubRegTable();
MSP430GenRegisterInfo::
MSP430GenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour)
  : TargetRegisterInfo(MSP430RegInfoDesc, RegisterClasses, RegisterClasses+2,
             MSP430SubRegIndexTable) {
  InitMCRegisterInfo(MSP430RegDesc, 33, RA,
                     MSP430MCRegisterClasses, 2,
                     MSP430RegLists,
                     getMSP430SubRegTable(), 1);

}



} // End llvm namespace 
#endif // GET_REGINFO_TARGET_DESC

