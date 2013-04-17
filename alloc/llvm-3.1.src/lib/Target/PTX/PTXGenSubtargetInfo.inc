//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Subtarget Enumeration Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM
namespace llvm {
namespace PTX {
enum {
  FeatureCOMPUTE10 =  1ULL << 0,
  FeatureCOMPUTE11 =  1ULL << 1,
  FeatureCOMPUTE12 =  1ULL << 2,
  FeatureCOMPUTE13 =  1ULL << 3,
  FeatureCOMPUTE20 =  1ULL << 4,
  FeatureDouble =  1ULL << 5,
  FeatureNoFMA =  1ULL << 6,
  FeaturePTX20 =  1ULL << 7,
  FeaturePTX21 =  1ULL << 8,
  FeaturePTX22 =  1ULL << 9,
  FeaturePTX23 =  1ULL << 10,
  FeatureSM10 =  1ULL << 11,
  FeatureSM11 =  1ULL << 12,
  FeatureSM12 =  1ULL << 13,
  FeatureSM13 =  1ULL << 14,
  FeatureSM20 =  1ULL << 15,
  FeatureSM21 =  1ULL << 16,
  FeatureSM22 =  1ULL << 17,
  FeatureSM23 =  1ULL << 18
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV PTXFeatureKV[] = {
  { "compute10", "Use Compute Compatibility 1.0", PTX::FeatureCOMPUTE10, 0ULL },
  { "compute11", "Use Compute Compatibility 1.1", PTX::FeatureCOMPUTE11, 0ULL },
  { "compute12", "Use Compute Compatibility 1.2", PTX::FeatureCOMPUTE12, 0ULL },
  { "compute13", "Use Compute Compatibility 1.3", PTX::FeatureCOMPUTE13, 0ULL },
  { "compute20", "Use Compute Compatibility 2.0", PTX::FeatureCOMPUTE20, PTX::FeatureDouble },
  { "double", "Do not demote .f64 to .f32", PTX::FeatureDouble, 0ULL },
  { "no-fma", "Disable Fused-Multiply Add", PTX::FeatureNoFMA, 0ULL },
  { "ptx20", "Use PTX Language Version 2.0", PTX::FeaturePTX20, 0ULL },
  { "ptx21", "Use PTX Language Version 2.1", PTX::FeaturePTX21, 0ULL },
  { "ptx22", "Use PTX Language Version 2.2", PTX::FeaturePTX22, 0ULL },
  { "ptx23", "Use PTX Language Version 2.3", PTX::FeaturePTX23, 0ULL },
  { "sm10", "Use Shader Model 1.0", PTX::FeatureSM10, 0ULL },
  { "sm11", "Use Shader Model 1.1", PTX::FeatureSM11, 0ULL },
  { "sm12", "Use Shader Model 1.2", PTX::FeatureSM12, 0ULL },
  { "sm13", "Use Shader Model 1.3", PTX::FeatureSM13, 0ULL },
  { "sm20", "Use Shader Model 2.0", PTX::FeatureSM20, PTX::FeatureDouble },
  { "sm21", "Use Shader Model 2.1", PTX::FeatureSM21, PTX::FeatureDouble },
  { "sm22", "Use Shader Model 2.2", PTX::FeatureSM22, PTX::FeatureDouble },
  { "sm23", "Use Shader Model 2.3", PTX::FeatureSM23, PTX::FeatureDouble }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV PTXSubTypeKV[] = {
  { "compute_10", "Select the compute_10 processor", PTX::FeatureCOMPUTE10, 0ULL },
  { "compute_11", "Select the compute_11 processor", PTX::FeatureCOMPUTE11, 0ULL },
  { "compute_12", "Select the compute_12 processor", PTX::FeatureCOMPUTE12, 0ULL },
  { "compute_13", "Select the compute_13 processor", PTX::FeatureCOMPUTE13, 0ULL },
  { "compute_20", "Select the compute_20 processor", PTX::FeatureCOMPUTE20, 0ULL },
  { "fermi", "Select the fermi processor", PTX::FeatureSM20 | PTX::FeatureDouble, 0ULL },
  { "g80", "Select the g80 processor", PTX::FeatureSM10, 0ULL },
  { "generic", "Select the generic processor", 0ULL, 0ULL },
  { "gf100", "Select the gf100 processor", PTX::FeatureSM20 | PTX::FeatureDouble, 0ULL },
  { "gt200", "Select the gt200 processor", PTX::FeatureSM13, 0ULL },
  { "sm_10", "Select the sm_10 processor", PTX::FeatureSM10, 0ULL },
  { "sm_11", "Select the sm_11 processor", PTX::FeatureSM11, 0ULL },
  { "sm_12", "Select the sm_12 processor", PTX::FeatureSM12, 0ULL },
  { "sm_13", "Select the sm_13 processor", PTX::FeatureSM13, 0ULL },
  { "sm_20", "Select the sm_20 processor", PTX::FeatureSM20, 0ULL },
  { "sm_21", "Select the sm_21 processor", PTX::FeatureSM21, 0ULL },
  { "sm_22", "Select the sm_22 processor", PTX::FeatureSM22, 0ULL },
  { "sm_23", "Select the sm_23 processor", PTX::FeatureSM23, 0ULL }
};


static inline void InitPTXMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, PTXFeatureKV, PTXSubTypeKV, 0, 0, 0, 0, 19, 18);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::PTXSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU);
  uint64_t Bits = ReInitMCSubtargetInfo(CPU, FS);
  if ((Bits & PTX::FeatureCOMPUTE10) != 0 && PTXTarget < PTX_COMPUTE_1_0) PTXTarget = PTX_COMPUTE_1_0;
  if ((Bits & PTX::FeatureCOMPUTE11) != 0 && PTXTarget < PTX_COMPUTE_1_1) PTXTarget = PTX_COMPUTE_1_1;
  if ((Bits & PTX::FeatureCOMPUTE12) != 0 && PTXTarget < PTX_COMPUTE_1_2) PTXTarget = PTX_COMPUTE_1_2;
  if ((Bits & PTX::FeatureCOMPUTE13) != 0 && PTXTarget < PTX_COMPUTE_1_3) PTXTarget = PTX_COMPUTE_1_3;
  if ((Bits & PTX::FeatureCOMPUTE20) != 0 && PTXTarget < PTX_COMPUTE_2_0) PTXTarget = PTX_COMPUTE_2_0;
  if ((Bits & PTX::FeatureDouble) != 0) SupportsDouble = true;
  if ((Bits & PTX::FeatureNoFMA) != 0) SupportsFMA = false;
  if ((Bits & PTX::FeaturePTX20) != 0 && PTXVersion < PTX_VERSION_2_0) PTXVersion = PTX_VERSION_2_0;
  if ((Bits & PTX::FeaturePTX21) != 0 && PTXVersion < PTX_VERSION_2_1) PTXVersion = PTX_VERSION_2_1;
  if ((Bits & PTX::FeaturePTX22) != 0 && PTXVersion < PTX_VERSION_2_2) PTXVersion = PTX_VERSION_2_2;
  if ((Bits & PTX::FeaturePTX23) != 0 && PTXVersion < PTX_VERSION_2_3) PTXVersion = PTX_VERSION_2_3;
  if ((Bits & PTX::FeatureSM10) != 0 && PTXTarget < PTX_SM_1_0) PTXTarget = PTX_SM_1_0;
  if ((Bits & PTX::FeatureSM11) != 0 && PTXTarget < PTX_SM_1_1) PTXTarget = PTX_SM_1_1;
  if ((Bits & PTX::FeatureSM12) != 0 && PTXTarget < PTX_SM_1_2) PTXTarget = PTX_SM_1_2;
  if ((Bits & PTX::FeatureSM13) != 0 && PTXTarget < PTX_SM_1_3) PTXTarget = PTX_SM_1_3;
  if ((Bits & PTX::FeatureSM20) != 0 && PTXTarget < PTX_SM_2_0) PTXTarget = PTX_SM_2_0;
  if ((Bits & PTX::FeatureSM21) != 0 && PTXTarget < PTX_SM_2_1) PTXTarget = PTX_SM_2_1;
  if ((Bits & PTX::FeatureSM22) != 0 && PTXTarget < PTX_SM_2_2) PTXTarget = PTX_SM_2_2;
  if ((Bits & PTX::FeatureSM23) != 0 && PTXTarget < PTX_SM_2_3) PTXTarget = PTX_SM_2_3;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct PTXGenSubtargetInfo : public TargetSubtargetInfo {
  explicit PTXGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
public:
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR
namespace llvm {
extern const llvm::SubtargetFeatureKV PTXFeatureKV[];
extern const llvm::SubtargetFeatureKV PTXSubTypeKV[];
PTXGenSubtargetInfo::PTXGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, PTXFeatureKV, PTXSubTypeKV, 0, 0, 0, 0, 19, 18);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR
