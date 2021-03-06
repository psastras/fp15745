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
namespace Sparc {
enum {
  FeatureV8Deprecated =  1ULL << 0,
  FeatureV9 =  1ULL << 1,
  FeatureVIS =  1ULL << 2
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV SparcFeatureKV[] = {
  { "deprecated-v8", "Enable deprecated V8 instructions in V9 mode", Sparc::FeatureV8Deprecated, 0ULL },
  { "v9", "Enable SPARC-V9 instructions", Sparc::FeatureV9, 0ULL },
  { "vis", "Enable UltraSPARC Visual Instruction Set extensions", Sparc::FeatureVIS, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV SparcSubTypeKV[] = {
  { "f934", "Select the f934 processor", 0ULL, 0ULL },
  { "generic", "Select the generic processor", 0ULL, 0ULL },
  { "hypersparc", "Select the hypersparc processor", 0ULL, 0ULL },
  { "sparclet", "Select the sparclet processor", 0ULL, 0ULL },
  { "sparclite", "Select the sparclite processor", 0ULL, 0ULL },
  { "sparclite86x", "Select the sparclite86x processor", 0ULL, 0ULL },
  { "supersparc", "Select the supersparc processor", 0ULL, 0ULL },
  { "tsc701", "Select the tsc701 processor", 0ULL, 0ULL },
  { "ultrasparc", "Select the ultrasparc processor", Sparc::FeatureV9 | Sparc::FeatureV8Deprecated, 0ULL },
  { "ultrasparc3", "Select the ultrasparc3 processor", Sparc::FeatureV9 | Sparc::FeatureV8Deprecated, 0ULL },
  { "ultrasparc3-vis", "Select the ultrasparc3-vis processor", Sparc::FeatureV9 | Sparc::FeatureV8Deprecated | Sparc::FeatureVIS, 0ULL },
  { "v8", "Select the v8 processor", 0ULL, 0ULL },
  { "v9", "Select the v9 processor", Sparc::FeatureV9, 0ULL }
};


static inline void InitSparcMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, SparcFeatureKV, SparcSubTypeKV, 0, 0, 0, 0, 3, 13);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::SparcSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU);
  uint64_t Bits = ReInitMCSubtargetInfo(CPU, FS);
  if ((Bits & Sparc::FeatureV8Deprecated) != 0) V8DeprecatedInsts = true;
  if ((Bits & Sparc::FeatureV9) != 0) IsV9 = true;
  if ((Bits & Sparc::FeatureVIS) != 0) IsVIS = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct SparcGenSubtargetInfo : public TargetSubtargetInfo {
  explicit SparcGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
public:
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR
namespace llvm {
extern const llvm::SubtargetFeatureKV SparcFeatureKV[];
extern const llvm::SubtargetFeatureKV SparcSubTypeKV[];
SparcGenSubtargetInfo::SparcGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, SparcFeatureKV, SparcSubTypeKV, 0, 0, 0, 0, 3, 13);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

