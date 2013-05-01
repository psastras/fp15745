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
extern const MCRegisterClass PTXMCRegisterClasses[];

namespace PTX {
enum {
  NoRegister,
  DUMMY_REG = 1,
  NUM_TARGET_REGS 	// 2
};
}

// Register classes
namespace PTX {
enum {
  RegPredRegClassID = 0,
  RegI16RegClassID = 1,
  RegF32RegClassID = 2,
  RegI32RegClassID = 3,
  RegF64RegClassID = 4,
  RegI64RegClassID = 5
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

extern const uint16_t PTXRegLists[] = {
  /* 0 */ PTX::DUMMY_REG, 0,
};

extern const MCRegisterDesc PTXRegDesc[] = { // Descriptors
  { "NOREG", 0, 0, 0 },
  { "DUMMY_REG", 0, 1, 1 },
};

namespace {     // Register classes...
  // RegPred Register Class...
  const uint16_t RegPred[] = {
    PTX::DUMMY_REG, 
  };

  // RegPred Bit set.
  const uint8_t RegPredBits[] = {
    0x02, 
  };

  // RegI16 Register Class...
  const uint16_t RegI16[] = {
    PTX::DUMMY_REG, 
  };

  // RegI16 Bit set.
  const uint8_t RegI16Bits[] = {
    0x02, 
  };

  // RegF32 Register Class...
  const uint16_t RegF32[] = {
    PTX::DUMMY_REG, 
  };

  // RegF32 Bit set.
  const uint8_t RegF32Bits[] = {
    0x02, 
  };

  // RegI32 Register Class...
  const uint16_t RegI32[] = {
    PTX::DUMMY_REG, 
  };

  // RegI32 Bit set.
  const uint8_t RegI32Bits[] = {
    0x02, 
  };

  // RegF64 Register Class...
  const uint16_t RegF64[] = {
    PTX::DUMMY_REG, 
  };

  // RegF64 Bit set.
  const uint8_t RegF64Bits[] = {
    0x02, 
  };

  // RegI64 Register Class...
  const uint16_t RegI64[] = {
    PTX::DUMMY_REG, 
  };

  // RegI64 Bit set.
  const uint8_t RegI64Bits[] = {
    0x02, 
  };

}

extern const MCRegisterClass PTXMCRegisterClasses[] = {
  { "RegPred", RegPred, RegPredBits, 1, sizeof(RegPredBits), PTX::RegPredRegClassID, 0, 1, 1, 1 },
  { "RegI16", RegI16, RegI16Bits, 1, sizeof(RegI16Bits), PTX::RegI16RegClassID, 2, 2, 1, 1 },
  { "RegF32", RegF32, RegF32Bits, 1, sizeof(RegF32Bits), PTX::RegF32RegClassID, 4, 4, 1, 1 },
  { "RegI32", RegI32, RegI32Bits, 1, sizeof(RegI32Bits), PTX::RegI32RegClassID, 4, 4, 1, 1 },
  { "RegF64", RegF64, RegF64Bits, 1, sizeof(RegF64Bits), PTX::RegF64RegClassID, 8, 8, 1, 1 },
  { "RegI64", RegI64, RegI64Bits, 1, sizeof(RegI64Bits), PTX::RegI64RegClassID, 8, 8, 1, 1 },
};

static inline void InitPTXMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0) {
  RI->InitMCRegisterInfo(PTXRegDesc, 2, RA, PTXMCRegisterClasses, 6, PTXRegLists, NULL, 0);

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

struct PTXGenRegisterInfo : public TargetRegisterInfo {
  explicit PTXGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0);
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

namespace PTX { // Register classes
  extern const TargetRegisterClass RegPredRegClass;
  static const TargetRegisterClass * const RegPredRegisterClass = &RegPredRegClass;
  extern const TargetRegisterClass RegI16RegClass;
  static const TargetRegisterClass * const RegI16RegisterClass = &RegI16RegClass;
  extern const TargetRegisterClass RegF32RegClass;
  static const TargetRegisterClass * const RegF32RegisterClass = &RegF32RegClass;
  extern const TargetRegisterClass RegI32RegClass;
  static const TargetRegisterClass * const RegI32RegisterClass = &RegI32RegClass;
  extern const TargetRegisterClass RegF64RegClass;
  static const TargetRegisterClass * const RegF64RegisterClass = &RegF64RegClass;
  extern const TargetRegisterClass RegI64RegClass;
  static const TargetRegisterClass * const RegI64RegisterClass = &RegI64RegClass;
} // end of namespace PTX

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

extern const MCRegisterClass PTXMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i1, MVT::Other,
  /* 2 */ MVT::i16, MVT::Other,
  /* 4 */ MVT::i32, MVT::Other,
  /* 6 */ MVT::i64, MVT::Other,
  /* 8 */ MVT::f32, MVT::Other,
  /* 10 */ MVT::f64, MVT::Other,
};

static const TargetRegisterClass *const NullRegClasses[] = { NULL };

static const uint32_t RegPredSubclassMask[] = {
  0x0000003f, 
};

static const uint32_t RegI16SubclassMask[] = {
  0x0000003e, 
};

static const uint32_t RegF32SubclassMask[] = {
  0x0000003c, 
};

static const uint32_t RegI32SubclassMask[] = {
  0x0000003c, 
};

static const uint32_t RegF64SubclassMask[] = {
  0x00000030, 
};

static const uint32_t RegI64SubclassMask[] = {
  0x00000030, 
};

static const TargetRegisterClass *const RegI16Superclasses[] = {
  &PTX::RegPredRegClass,
  NULL
};

static const TargetRegisterClass *const RegF32Superclasses[] = {
  &PTX::RegPredRegClass,
  &PTX::RegI16RegClass,
  &PTX::RegI32RegClass,
  NULL
};

static const TargetRegisterClass *const RegI32Superclasses[] = {
  &PTX::RegPredRegClass,
  &PTX::RegI16RegClass,
  &PTX::RegF32RegClass,
  NULL
};

static const TargetRegisterClass *const RegF64Superclasses[] = {
  &PTX::RegPredRegClass,
  &PTX::RegI16RegClass,
  &PTX::RegF32RegClass,
  &PTX::RegI32RegClass,
  &PTX::RegI64RegClass,
  NULL
};

static const TargetRegisterClass *const RegI64Superclasses[] = {
  &PTX::RegPredRegClass,
  &PTX::RegI16RegClass,
  &PTX::RegF32RegClass,
  &PTX::RegI32RegClass,
  &PTX::RegF64RegClass,
  NULL
};

namespace PTX {   // Register class instances
  extern const TargetRegisterClass RegPredRegClass = {
    &PTXMCRegisterClasses[RegPredRegClassID],
    VTLists + 0,
    RegPredSubclassMask,
    NullRegClasses,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass RegI16RegClass = {
    &PTXMCRegisterClasses[RegI16RegClassID],
    VTLists + 2,
    RegI16SubclassMask,
    RegI16Superclasses,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass RegF32RegClass = {
    &PTXMCRegisterClasses[RegF32RegClassID],
    VTLists + 8,
    RegF32SubclassMask,
    RegF32Superclasses,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass RegI32RegClass = {
    &PTXMCRegisterClasses[RegI32RegClassID],
    VTLists + 4,
    RegI32SubclassMask,
    RegI32Superclasses,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass RegF64RegClass = {
    &PTXMCRegisterClasses[RegF64RegClassID],
    VTLists + 10,
    RegF64SubclassMask,
    RegF64Superclasses,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass RegI64RegClass = {
    &PTXMCRegisterClasses[RegI64RegClassID],
    VTLists + 6,
    RegI64SubclassMask,
    RegI64Superclasses,
    NullRegClasses,
    0
  };

}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &PTX::RegPredRegClass,
    &PTX::RegI16RegClass,
    &PTX::RegF32RegClass,
    &PTX::RegI32RegClass,
    &PTX::RegF64RegClass,
    &PTX::RegI64RegClass,
  };
}

static const TargetRegisterInfoDesc PTXRegInfoDesc[] = { // Extra Descriptors
  { 0, 0 },
  { 0, 1 },
};

static const char *const PTXSubRegIndexTable[] = { "" };


unsigned PTXGenRegisterInfo::composeSubRegIndices(unsigned IdxA, unsigned IdxB) const {
  switch (IdxA) {
  default:
    return IdxB;
  }
}

const TargetRegisterClass *PTXGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  assert(Idx == 0 && "Target has no sub-registers");
  return RC;
}

const TargetRegisterClass *PTXGenRegisterInfo::getMatchingSuperRegClass(const TargetRegisterClass *A, const TargetRegisterClass *B, unsigned Idx) const {
  llvm_unreachable("Target has no sub-registers");
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &PTXGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 1},  	// RegPred
    {1, 1},  	// RegI16
    {1, 1},  	// RegF32
    {1, 1},  	// RegI32
    {1, 1},  	// RegF64
    {1, 1},  	// RegI64
    {0, 0} };
  return RCWeightTable[RC->getID()];
}


// Get the number of dimensions of register pressure.
unsigned PTXGenRegisterInfo::getNumRegPressureSets() const {
  return 1;
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned PTXGenRegisterInfo::
getRegPressureSetLimit(unsigned Idx) const {
  static const unsigned PressureLimitTable[] = {
    1,  	// 0: RegPred
    0 };
  return PressureLimitTable[Idx];
}

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* PTXGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const int RCSetsTable[] = {
    0,  -1,  	// RegPred
    0,  -1,  	// RegI16
    0,  -1,  	// RegF32
    0,  -1,  	// RegI32
    0,  -1,  	// RegF64
    0,  -1,  	// RegI64
    -1 };
  static const unsigned RCSetStartTable[] = {
    0,2,4,6,8,10,0 };
  unsigned SetListStart = RCSetStartTable[RC->getID()];
  return &RCSetsTable[SetListStart];
}

extern const MCRegisterDesc PTXRegDesc[];
extern const uint16_t PTXRegLists[];
PTXGenRegisterInfo::
PTXGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour)
  : TargetRegisterInfo(PTXRegInfoDesc, RegisterClasses, RegisterClasses+6,
             PTXSubRegIndexTable) {
  InitMCRegisterInfo(PTXRegDesc, 2, RA,
                     PTXMCRegisterClasses, 6,
                     PTXRegLists,
                     NULL, 0);

}



} // End llvm namespace 
#endif // GET_REGINFO_TARGET_DESC

