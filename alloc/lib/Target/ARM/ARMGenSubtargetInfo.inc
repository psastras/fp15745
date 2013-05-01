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
namespace ARM {
enum {
  FeatureAvoidPartialCPSR =  1ULL << 0,
  FeatureD16 =  1ULL << 1,
  FeatureDB =  1ULL << 2,
  FeatureDSPThumb2 =  1ULL << 3,
  FeatureFP16 =  1ULL << 4,
  FeatureHWDiv =  1ULL << 5,
  FeatureHasRAS =  1ULL << 6,
  FeatureHasSlowFPVMLx =  1ULL << 7,
  FeatureMClass =  1ULL << 8,
  FeatureMP =  1ULL << 9,
  FeatureNEON =  1ULL << 10,
  FeatureNEONForFP =  1ULL << 11,
  FeatureNoARM =  1ULL << 12,
  FeaturePref32BitThumb =  1ULL << 13,
  FeatureSlowFPBrcc =  1ULL << 14,
  FeatureT2XtPk =  1ULL << 15,
  FeatureThumb2 =  1ULL << 16,
  FeatureVFP2 =  1ULL << 17,
  FeatureVFP3 =  1ULL << 18,
  FeatureVFP4 =  1ULL << 19,
  FeatureVFPOnlySP =  1ULL << 20,
  FeatureVMLxForwarding =  1ULL << 21,
  HasV4TOps =  1ULL << 22,
  HasV5TEOps =  1ULL << 23,
  HasV5TOps =  1ULL << 24,
  HasV6Ops =  1ULL << 25,
  HasV6T2Ops =  1ULL << 26,
  HasV7Ops =  1ULL << 27,
  ModeThumb =  1ULL << 28,
  ProcA8 =  1ULL << 29,
  ProcA9 =  1ULL << 30
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV ARMFeatureKV[] = {
  { "32bit", "Prefer 32-bit Thumb instrs", ARM::FeaturePref32BitThumb, 0ULL },
  { "a8", "Cortex-A8 ARM processors", ARM::ProcA8, ARM::FeatureSlowFPBrcc | ARM::FeatureNEONForFP | ARM::FeatureHasSlowFPVMLx | ARM::FeatureVMLxForwarding | ARM::FeatureT2XtPk },
  { "a9", "Cortex-A9 ARM processors", ARM::ProcA9, ARM::FeatureVMLxForwarding | ARM::FeatureT2XtPk | ARM::FeatureFP16 | ARM::FeatureAvoidPartialCPSR },
  { "avoid-partial-cpsr", "Avoid CPSR partial update for OOO execution", ARM::FeatureAvoidPartialCPSR, 0ULL },
  { "d16", "Restrict VFP3 to 16 double registers", ARM::FeatureD16, 0ULL },
  { "db", "Has data barrier (dmb / dsb) instructions", ARM::FeatureDB, 0ULL },
  { "fp-only-sp", "Floating point unit supports single precision only", ARM::FeatureVFPOnlySP, 0ULL },
  { "fp16", "Enable half-precision floating point", ARM::FeatureFP16, 0ULL },
  { "hwdiv", "Enable divide instructions", ARM::FeatureHWDiv, 0ULL },
  { "mclass", "Is microcontroller profile ('M' series)", ARM::FeatureMClass, 0ULL },
  { "mp", "Supports Multiprocessing extension", ARM::FeatureMP, 0ULL },
  { "neon", "Enable NEON instructions", ARM::FeatureNEON, ARM::FeatureVFP3 },
  { "neonfp", "Use NEON for single precision FP", ARM::FeatureNEONForFP, 0ULL },
  { "noarm", "Does not support ARM mode execution", ARM::FeatureNoARM, 0ULL },
  { "ras", "Has return address stack", ARM::FeatureHasRAS, 0ULL },
  { "slow-fp-brcc", "FP compare + branch is slow", ARM::FeatureSlowFPBrcc, 0ULL },
  { "slowfpvmlx", "Disable VFP / NEON MAC instructions", ARM::FeatureHasSlowFPVMLx, 0ULL },
  { "t2dsp", "Supports v7 DSP instructions in Thumb2", ARM::FeatureDSPThumb2, 0ULL },
  { "t2xtpk", "Enable Thumb2 extract and pack instructions", ARM::FeatureT2XtPk, 0ULL },
  { "thumb-mode", "Thumb mode", ARM::ModeThumb, 0ULL },
  { "thumb2", "Enable Thumb2 instructions", ARM::FeatureThumb2, 0ULL },
  { "v4t", "Support ARM v4T instructions", ARM::HasV4TOps, 0ULL },
  { "v5t", "Support ARM v5T instructions", ARM::HasV5TOps, ARM::HasV4TOps },
  { "v5te", "Support ARM v5TE, v5TEj, and v5TExp instructions", ARM::HasV5TEOps, ARM::HasV5TOps },
  { "v6", "Support ARM v6 instructions", ARM::HasV6Ops, ARM::HasV5TEOps },
  { "v6t2", "Support ARM v6t2 instructions", ARM::HasV6T2Ops, ARM::HasV6Ops | ARM::FeatureThumb2 },
  { "v7", "Support ARM v7 instructions", ARM::HasV7Ops, ARM::HasV6T2Ops },
  { "vfp2", "Enable VFP2 instructions", ARM::FeatureVFP2, 0ULL },
  { "vfp3", "Enable VFP3 instructions", ARM::FeatureVFP3, ARM::FeatureVFP2 },
  { "vfp4", "Enable VFP4 instructions", ARM::FeatureVFP4, ARM::FeatureVFP3 },
  { "vmlx-forwarding", "Has multiplier accumulator forwarding", ARM::FeatureVMLxForwarding, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV ARMSubTypeKV[] = {
  { "arm1020e", "Select the arm1020e processor", ARM::HasV5TEOps, 0ULL },
  { "arm1020t", "Select the arm1020t processor", ARM::HasV5TOps, 0ULL },
  { "arm1022e", "Select the arm1022e processor", ARM::HasV5TEOps, 0ULL },
  { "arm10e", "Select the arm10e processor", ARM::HasV5TEOps, 0ULL },
  { "arm10tdmi", "Select the arm10tdmi processor", ARM::HasV5TOps, 0ULL },
  { "arm1136j-s", "Select the arm1136j-s processor", ARM::HasV6Ops, 0ULL },
  { "arm1136jf-s", "Select the arm1136jf-s processor", ARM::HasV6Ops | ARM::FeatureVFP2 | ARM::FeatureHasSlowFPVMLx, 0ULL },
  { "arm1156t2-s", "Select the arm1156t2-s processor", ARM::HasV6T2Ops | ARM::FeatureDSPThumb2, 0ULL },
  { "arm1156t2f-s", "Select the arm1156t2f-s processor", ARM::HasV6T2Ops | ARM::FeatureVFP2 | ARM::FeatureHasSlowFPVMLx | ARM::FeatureDSPThumb2, 0ULL },
  { "arm1176jz-s", "Select the arm1176jz-s processor", ARM::HasV6Ops, 0ULL },
  { "arm1176jzf-s", "Select the arm1176jzf-s processor", ARM::HasV6Ops | ARM::FeatureVFP2 | ARM::FeatureHasSlowFPVMLx, 0ULL },
  { "arm710t", "Select the arm710t processor", ARM::HasV4TOps, 0ULL },
  { "arm720t", "Select the arm720t processor", ARM::HasV4TOps, 0ULL },
  { "arm7tdmi", "Select the arm7tdmi processor", ARM::HasV4TOps, 0ULL },
  { "arm7tdmi-s", "Select the arm7tdmi-s processor", ARM::HasV4TOps, 0ULL },
  { "arm8", "Select the arm8 processor", 0ULL, 0ULL },
  { "arm810", "Select the arm810 processor", 0ULL, 0ULL },
  { "arm9", "Select the arm9 processor", ARM::HasV4TOps, 0ULL },
  { "arm920", "Select the arm920 processor", ARM::HasV4TOps, 0ULL },
  { "arm920t", "Select the arm920t processor", ARM::HasV4TOps, 0ULL },
  { "arm922t", "Select the arm922t processor", ARM::HasV4TOps, 0ULL },
  { "arm926ej-s", "Select the arm926ej-s processor", ARM::HasV5TEOps, 0ULL },
  { "arm940t", "Select the arm940t processor", ARM::HasV4TOps, 0ULL },
  { "arm946e-s", "Select the arm946e-s processor", ARM::HasV5TEOps, 0ULL },
  { "arm966e-s", "Select the arm966e-s processor", ARM::HasV5TEOps, 0ULL },
  { "arm968e-s", "Select the arm968e-s processor", ARM::HasV5TEOps, 0ULL },
  { "arm9e", "Select the arm9e processor", ARM::HasV5TEOps, 0ULL },
  { "arm9tdmi", "Select the arm9tdmi processor", ARM::HasV4TOps, 0ULL },
  { "cortex-a8", "Select the cortex-a8 processor", ARM::ProcA8 | ARM::HasV7Ops | ARM::FeatureNEON | ARM::FeatureDB | ARM::FeatureDSPThumb2 | ARM::FeatureHasRAS, 0ULL },
  { "cortex-a9", "Select the cortex-a9 processor", ARM::ProcA9 | ARM::HasV7Ops | ARM::FeatureNEON | ARM::FeatureDB | ARM::FeatureDSPThumb2 | ARM::FeatureHasRAS, 0ULL },
  { "cortex-a9-mp", "Select the cortex-a9-mp processor", ARM::ProcA9 | ARM::HasV7Ops | ARM::FeatureNEON | ARM::FeatureDB | ARM::FeatureDSPThumb2 | ARM::FeatureMP | ARM::FeatureHasRAS, 0ULL },
  { "cortex-m0", "Select the cortex-m0 processor", ARM::HasV6Ops | ARM::FeatureNoARM | ARM::FeatureDB | ARM::FeatureMClass, 0ULL },
  { "cortex-m3", "Select the cortex-m3 processor", ARM::HasV7Ops | ARM::FeatureThumb2 | ARM::FeatureNoARM | ARM::FeatureDB | ARM::FeatureHWDiv | ARM::FeatureMClass, 0ULL },
  { "cortex-m4", "Select the cortex-m4 processor", ARM::HasV7Ops | ARM::FeatureThumb2 | ARM::FeatureNoARM | ARM::FeatureDB | ARM::FeatureHWDiv | ARM::FeatureDSPThumb2 | ARM::FeatureT2XtPk | ARM::FeatureVFP2 | ARM::FeatureVFPOnlySP | ARM::FeatureMClass, 0ULL },
  { "ep9312", "Select the ep9312 processor", ARM::HasV4TOps, 0ULL },
  { "generic", "Select the generic processor", 0ULL, 0ULL },
  { "iwmmxt", "Select the iwmmxt processor", ARM::HasV5TEOps, 0ULL },
  { "mpcore", "Select the mpcore processor", ARM::HasV6Ops | ARM::FeatureVFP2 | ARM::FeatureHasSlowFPVMLx, 0ULL },
  { "mpcorenovfp", "Select the mpcorenovfp processor", ARM::HasV6Ops, 0ULL },
  { "strongarm", "Select the strongarm processor", 0ULL, 0ULL },
  { "strongarm110", "Select the strongarm110 processor", 0ULL, 0ULL },
  { "strongarm1100", "Select the strongarm1100 processor", 0ULL, 0ULL },
  { "strongarm1110", "Select the strongarm1110 processor", 0ULL, 0ULL },
  { "xscale", "Select the xscale processor", ARM::HasV5TEOps, 0ULL }
};


// Functional units for itineraries "ARMV6Itineraries"
namespace ARMV6ItinerariesFU {
  const unsigned V6_Pipe = 1 << 0;
}

// Functional units for itineraries "CortexA8Itineraries"
namespace CortexA8ItinerariesFU {
  const unsigned A8_Pipe0 = 1 << 0;
  const unsigned A8_Pipe1 = 1 << 1;
  const unsigned A8_LSPipe = 1 << 2;
  const unsigned A8_NPipe = 1 << 3;
  const unsigned A8_NLSPipe = 1 << 4;
}

// Functional units for itineraries "CortexA9Itineraries"
namespace CortexA9ItinerariesFU {
  const unsigned A9_Issue0 = 1 << 0;
  const unsigned A9_Issue1 = 1 << 1;
  const unsigned A9_Branch = 1 << 2;
  const unsigned A9_ALU0 = 1 << 3;
  const unsigned A9_ALU1 = 1 << 4;
  const unsigned A9_AGU = 1 << 5;
  const unsigned A9_NPipe = 1 << 6;
  const unsigned A9_MUX0 = 1 << 7;
  const unsigned A9_LSUnit = 1 << 8;
  const unsigned A9_DRegsVFP = 1 << 9;
  const unsigned A9_DRegsN = 1 << 10;
}

// Pipeline forwarding pathes for itineraries "CortexA9Itineraries"
namespace CortexA9ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned A9_LdBypass = 1 << 0;
}

extern const llvm::InstrStage ARMStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 2, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3-4
  { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5-7
  { 3, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8
  { 3, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 9-10
  { 15, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11
  { 29, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 12
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 13
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 14-15
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 16-18
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 19-21
  { 1, CortexA8ItinerariesFU::A8_Pipe0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 22
  { 2, CortexA8ItinerariesFU::A8_Pipe0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 23
  { 3, CortexA8ItinerariesFU::A8_Pipe0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 24
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 25-26
  { 2, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 27-28
  { 2, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 29-30
  { 2, CortexA8ItinerariesFU::A8_Pipe0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 31-32
  { 3, CortexA8ItinerariesFU::A8_Pipe0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 33-34
  { 3, CortexA8ItinerariesFU::A8_Pipe0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 35-37
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 38-40
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 41-42
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 43-44
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 45-47
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 48-50
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 51-53
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 54-56
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 57-59
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 11, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 11, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 60-62
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 19, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 19, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 63-65
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 20, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 20, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 66-68
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 29, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 29, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 69-71
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 72-74
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 75-79
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 80-82
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 83-85
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 86-88
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 89-91
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 92-94
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 95-97
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 98-99
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 100-101
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 102-105
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 106-109
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 110-111
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 112-113
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 114-116
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 117-120
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 121-126
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 127-128
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 129-132
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_ALU0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 133-134
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_ALU0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 135-136
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 137-140
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 141-144
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, 0, (llvm::InstrStage::ReservationKinds)0 }, // 145-148
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_AGU, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 149-152
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Branch, -1, (llvm::InstrStage::ReservationKinds)0 }, // 153-157
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_AGU, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Branch, -1, (llvm::InstrStage::ReservationKinds)0 }, // 158-162
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 163-167
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_AGU, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 168-171
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 172-175
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 176
  { 1, CortexA9ItinerariesFU::A9_Issue0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Branch, -1, (llvm::InstrStage::ReservationKinds)0 }, // 177-179
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 180-184
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 185-189
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 190-194
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 195-199
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 200-204
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 205-209
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 10, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 210-214
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 16, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 10, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 215-219
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 26, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 20, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 220-224
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 18, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 13, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 225-229
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 33, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 28, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 230-234
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 }, // 235-236
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 237-242
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 243-248
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 249-254
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 255-260
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 3, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 261-266
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 11, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 5, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 267-272
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 10, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 4, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 273-278
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 279-284
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 285-290
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 3, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 291-296
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 297-301
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 302-306
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 307-311
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 10, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 4, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 312-316
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 317-321
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 322-326
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 327-331
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 332-336
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 11, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 337-341
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 12, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 342-346
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 3, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 347-351
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 352-356
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 3, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 357-361
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 362-366
  { 0, 0, 0, llvm::InstrStage::Required } // End itinerary
};
extern const unsigned ARMOperandCycles[] = {
  0, // No itinerary
  2,   2, // 1-2
  2,   2,   2, // 3-5
  2,   2,   1, // 6-8
  3,   3,   2,   1, // 9-12
  2,   2, // 13-14
  2,   2,   2, // 15-17
  2,   2,   1, // 18-20
  3,   3,   2,   1, // 21-24
  2,   2, // 25-26
  2,   1, // 27-28
  1,   1, // 29-30
  2,   2,   1, // 31-33
  3,   3,   2,   1, // 34-37
  2, // 38
  2,   2, // 39-40
  2,   1, // 41-42
  3,   2,   1, // 43-45
  2, // 46
  2,   2, // 47-48
  2,   1, // 49-50
  3,   2,   1, // 51-53
  2, // 54
  2,   2, // 55-56
  2,   1, // 57-58
  3,   2,   1, // 59-61
  2, // 62
  3, // 63
  5, // 64
  3, // 65
  3,   2, // 66-67
  3,   1, // 68-69
  4,   2,   1, // 70-72
  4, // 73
  2, // 74
  2,   2, // 75-76
  2,   1, // 77-78
  3,   2,   1, // 79-81
  4,   1,   1, // 82-84
  4,   1,   1,   2, // 85-88
  5,   1,   1, // 89-91
  5,   1,   1,   2, // 92-95
  6,   1,   1, // 96-98
  6,   1,   1,   2, // 99-102
  4,   1, // 103-104
  4,   1, // 105-106
  4,   1, // 107-108
  4,   1,   1, // 109-111
  4,   1,   1, // 112-114
  4,   1,   1, // 115-117
  5,   2,   1, // 118-120
  5,   2,   1, // 121-123
  4,   2,   1, // 124-126
  4,   2,   1, // 127-129
  4,   2,   1,   1, // 130-133
  4,   2,   1,   1, // 134-137
  4,   2,   1,   1, // 138-141
  5,   2,   2,   1, // 142-145
  5,   2,   2,   1, // 146-149
  1,   1,   1,   1,   4, // 150-154
  2,   1,   1,   1,   4, // 155-159
  1,   2,   1,   1,   4, // 160-164
  3,   1, // 165-166
  1,   1,   4, // 167-169
  1,   2,   4, // 170-172
  2,   1, // 173-174
  2,   1, // 175-176
  2,   1, // 177-178
  2,   1,   1, // 179-181
  2,   1,   1, // 182-184
  2,   1,   1, // 185-187
  2,   2,   1, // 188-190
  2,   2,   1, // 191-193
  2,   2,   1, // 194-196
  2,   2,   1, // 197-199
  2,   2,   1,   1, // 200-203
  2,   2,   1,   1, // 204-207
  2,   2,   1,   1, // 208-211
  2,   2,   2,   1, // 212-215
  2,   2,   2,   1, // 216-219
  2, // 220
  3, // 221
  5,   2, // 222-223
  5,   2, // 224-225
  2,   2, // 226-227
  2,   2, // 228-229
  5,   2, // 230-231
  5,   2, // 232-233
  9,   2, // 234-235
  9,   2, // 236-237
  9,   2, // 238-239
  9,   2, // 240-241
  9,   2,   2, // 242-244
  9,   2,   2, // 245-247
  9,   2,   2, // 248-250
  9,   2,   2, // 251-253
  9,   2,   2,   2, // 254-257
  9,   2,   2,   2, // 258-261
  9,   2,   2,   2, // 262-265
  9,   2,   2,   2, // 266-269
  20,   2,   2, // 270-272
  34,   2,   2, // 273-275
  20,   2,   2, // 276-278
  34,   2,   2, // 279-281
  10,   1, // 282-283
  10,   1,   1, // 284-286
  10,   1, // 287-288
  10,   10,   1, // 289-291
  5,   2,   2, // 292-294
  5,   2,   2, // 295-297
  2,   1,   1,   5, // 298-301
  3,   2,   1,   1,   5, // 302-306
  2,   2,   2, // 307-309
  2,   2,   2, // 310-312
  2,   2,   2,   2, // 313-316
  3,   2,   2,   2,   2, // 317-321
  2,   2, // 322-323
  2,   2,   2, // 324-326
  2,   2,   1, // 327-329
  2,   1,   2, // 330-332
  2,   2,   1,   1, // 333-336
  2,   2, // 337-338
  2,   2,   2, // 339-341
  2,   2,   1, // 342-344
  2,   2,   1,   1, // 345-348
  2,   2, // 349-350
  2,   1, // 351-352
  1,   1, // 353-354
  2,   2,   1, // 355-357
  2,   2,   1,   1, // 358-361
  2, // 362
  2,   2, // 363-364
  2,   1, // 365-366
  2,   1,   1, // 367-369
  2, // 370
  2,   2, // 371-372
  2,   1, // 373-374
  2,   1,   1, // 375-377
  1, // 378
  1,   1, // 379-380
  1,   1, // 381-382
  1,   1,   1, // 383-385
  2, // 386
  3, // 387
  5, // 388
  2, // 389
  2,   1, // 390-391
  2,   1, // 392-393
  2,   1,   1, // 394-396
  3,   1, // 397-398
  1, // 399
  1,   1, // 400-401
  1,   1, // 402-403
  1,   1,   1, // 404-406
  5,   1,   1, // 407-409
  6,   1,   1,   4, // 410-413
  6,   1,   1, // 414-416
  6,   1,   1,   4, // 417-420
  6,   6,   1,   1, // 421-424
  6,   6,   1,   1, // 425-428
  3,   1, // 429-430
  3,   1, // 431-432
  3,   1, // 433-434
  3,   1,   1, // 435-437
  3,   1,   1, // 438-440
  3,   1,   1, // 441-443
  4,   1,   1, // 444-446
  4,   1,   1, // 447-449
  3,   2,   1, // 450-452
  3,   2,   1, // 453-455
  3,   2,   1,   1, // 456-459
  3,   2,   1,   1, // 460-463
  3,   2,   1,   1, // 464-467
  4,   3,   1,   1, // 468-471
  4,   3,   1,   1, // 472-475
  1,   1,   1,   1,   3, // 476-480
  2,   1,   1,   1,   3, // 481-485
  1,   2,   1,   1,   3, // 486-490
  1,   1,   3, // 491-493
  1,   1,   3, // 494-496
  4,   1, // 497-498
  3,   1, // 499-500
  3,   1, // 501-502
  3,   1, // 503-504
  3,   1,   1, // 505-507
  3,   1,   1, // 508-510
  3,   1,   1, // 511-513
  3,   1,   1, // 514-516
  3,   1,   1, // 517-519
  2,   3,   1, // 520-522
  2,   3,   1, // 523-525
  2,   3,   1,   1, // 526-529
  2,   3,   1,   1, // 530-533
  2,   3,   1,   1, // 534-537
  3,   3,   1,   1, // 538-541
  3,   3,   1,   1, // 542-545
  2, // 546
  2,   2, // 547-548
  20, // 549
  7,   1, // 550-551
  4,   1, // 552-553
  1,   1, // 554-555
  4,   1, // 556-557
  7,   1, // 558-559
  5,   1, // 560-561
  7,   1, // 562-563
  8,   1, // 564-565
  7,   1, // 566-567
  8,   1, // 568-569
  7,   1,   1, // 570-572
  9,   1,   1, // 573-575
  7,   1,   1, // 576-578
  11,   1,   1, // 579-581
  7,   2,   1,   1, // 582-585
  19,   2,   1,   1, // 586-589
  7,   2,   1,   1, // 590-593
  19,   2,   1,   1, // 594-597
  20,   1,   1, // 598-600
  29,   1,   1, // 601-603
  19,   1, // 604-605
  29,   1, // 606-607
  2,   1, // 608-609
  2,   1,   1, // 610-612
  20,   1, // 613-614
  20,   20,   1, // 615-617
  2,   1, // 618-619
  2,   1, // 620-621
  1,   1,   1,   2, // 622-625
  2,   1,   1,   1,   2, // 626-630
  1,   1, // 631-632
  1,   1, // 633-634
  1,   1,   1,   1, // 635-638
  2,   1,   1,   1,   1, // 639-643
  2,   1, // 644-645
  2,   2,   1, // 646-648
  2,   2,   3,   1, // 649-652
  2,   2,   3,   3,   1, // 653-657
  2,   2,   1, // 658-660
  2,   2,   2,   1, // 661-664
  2,   2,   3,   2,   1, // 665-669
  2,   2,   3,   3,   2,   1, // 670-675
  3,   1,   1,   1, // 676-679
  3,   2,   1,   1,   1,   1, // 680-685
  2,   1, // 686-687
  2,   2,   1,   1, // 688-691
  2,   2,   1, // 692-694
  2,   2,   3,   3,   1, // 695-699
  3,   3,   1,   1,   1,   1, // 700-705
  2,   2,   2,   1,   1,   1, // 706-711
  2,   2,   3,   3,   2,   1, // 712-717
  3,   3,   2,   1,   1,   1,   1,   1, // 718-725
  2,   2,   1, // 726-728
  2,   2,   2,   1,   1, // 729-733
  3,   3,   4,   1, // 734-737
  4,   4,   5,   1,   1,   1,   1,   2, // 738-745
  3,   3,   4,   2,   1, // 746-750
  4,   4,   5,   2,   1,   1,   1,   1,   1,   2, // 751-760
  2,   2,   3,   1, // 761-764
  2,   2,   3,   2,   1,   1, // 765-770
  3,   3,   4,   4,   1, // 771-775
  4,   4,   5,   5,   1,   1,   1,   1,   2,   2, // 776-785
  3,   3,   4,   4,   2,   1, // 786-791
  4,   4,   5,   5,   2,   1,   1,   1,   1,   1,   2,   2, // 792-803
  2,   2,   3,   3,   1, // 804-808
  2,   2,   3,   3,   2,   1,   1, // 809-815
  1,   1,   1, // 816-818
  1,   1,   1,   1, // 819-822
  1,   1,   1,   1,   2, // 823-827
  1,   1,   1,   1,   2,   2, // 828-833
  2,   1,   1,   1,   1, // 834-838
  2,   1,   1,   1,   1,   1, // 839-844
  2,   1,   1,   1,   1,   1,   2, // 845-851
  2,   1,   1,   1,   1,   1,   2,   2, // 852-859
  1,   1,   1, // 860-862
  2,   1,   1,   1,   1, // 863-867
  1,   1,   1,   1, // 868-871
  1,   1,   1,   1,   2,   2, // 872-877
  2,   1,   1,   1,   1,   1, // 878-883
  2,   1,   1,   1,   1,   1,   2,   2, // 884-891
  1,   1,   1,   1, // 892-895
  2,   1,   1,   1,   1,   1, // 896-901
  1,   1,   1,   1,   2, // 902-906
  2,   1,   1,   1,   1,   1,   2, // 907-913
  1,   1,   1,   1,   2, // 914-918
  2,   1,   1,   1,   1,   1,   2, // 919-925
  1,   1,   1,   1,   2,   2, // 926-931
  2,   1,   1,   1,   1,   1,   2,   2, // 932-939
  1,   1,   1,   1,   2,   2, // 940-945
  2,   1,   1,   1,   1,   1,   2,   2, // 946-953
  5,   2, // 954-955
  6,   2, // 956-957
  5,   2,   2, // 958-960
  5,   2,   2, // 961-963
  5,   2,   1, // 964-966
  6,   2,   2, // 967-969
  6,   2,   1, // 970-972
  1,   1, // 973-974
  3, // 975
  2,   1, // 976-977
  3,   1, // 978-979
  2,   1, // 980-981
  2,   1,   1, // 982-984
  20,   1, // 985-986
  20,   20,   1, // 987-989
  3,   1,   1, // 990-992
  2,   1, // 993-994
  2,   2,   1,   1, // 995-998
  3,   3,   1,   1, // 999-1002
  4,   4,   1,   1, // 1003-1006
  9,   3,   2,   2, // 1007-1010
  10,   3,   2,   2, // 1011-1014
  9,   3,   2,   2, // 1015-1018
  10,   3,   2,   2, // 1019-1022
  9,   2,   2, // 1023-1025
  10,   2,   2, // 1026-1028
  3,   2,   2, // 1029-1031
  4,   2,   2, // 1032-1034
  4,   2, // 1035-1036
  4,   2, // 1037-1038
  4,   1, // 1039-1040
  4,   1, // 1041-1042
  3,   2,   2, // 1043-1045
  3,   2,   2, // 1046-1048
  4,   2,   1, // 1049-1051
  4,   2,   1, // 1052-1054
  3,   2,   1, // 1055-1057
  3,   2,   1, // 1058-1060
  4,   2,   1, // 1061-1063
  4,   2,   1, // 1064-1066
  3,   1,   1, // 1067-1069
  4,   1,   1, // 1070-1072
  4,   1,   1, // 1073-1075
  5,   1,   1, // 1076-1078
  6,   3,   1, // 1079-1081
  7,   3,   1, // 1082-1084
  6,   3,   2,   1, // 1085-1088
  6,   3,   2,   1, // 1089-1092
  6,   2,   2, // 1093-1095
  7,   2,   1, // 1096-1098
  7,   2,   2, // 1099-1101
  9,   2,   1, // 1102-1104
  6,   3,   2,   2, // 1105-1108
  7,   3,   2,   1, // 1109-1112
  7,   3,   2,   2, // 1113-1116
  9,   3,   2,   1, // 1117-1120
  2,   1,   1, // 1121-1123
  3,   1,   1, // 1124-1126
  3,   2,   1, // 1127-1129
  3,   2,   2,   1, // 1130-1133
  4,   2,   2,   3,   1, // 1134-1138
  4,   2,   2,   3,   3,   1, // 1139-1144
  3,   1,   2,   1, // 1145-1148
  3,   1,   2,   2,   1, // 1149-1153
  4,   1,   2,   2,   3,   1, // 1154-1159
  4,   1,   2,   2,   3,   3,   1, // 1160-1166
  1, // 1167
  1,   1, // 1168-1169
  1,   1, // 1170-1171
  2,   1,   1, // 1172-1174
  2, // 1175
  3, // 1176
  5, // 1177
  1, // 1178
  1,   1, // 1179-1180
  2,   1, // 1181-1182
  3,   1,   1, // 1183-1185
  1,   1, // 1186-1187
  1,   1,   1, // 1188-1190
  2,   1,   1, // 1191-1193
  2,   1,   1, // 1194-1196
  3,   1,   1,   1, // 1197-1200
  1,   1, // 1201-1202
  1,   1,   1, // 1203-1205
  2,   1,   1, // 1206-1208
  3,   1,   1,   1, // 1209-1212
  1,   1, // 1213-1214
  2,   1, // 1215-1216
  2,   1, // 1217-1218
  3,   1,   1, // 1219-1221
  3,   1,   1,   1, // 1222-1225
  1, // 1226
  1,   1, // 1227-1228
  1,   1, // 1229-1230
  1,   1,   1, // 1231-1233
  1, // 1234
  1,   1, // 1235-1236
  1,   1, // 1237-1238
  1,   1,   1, // 1239-1241
  1, // 1242
  1,   1, // 1243-1244
  1,   1, // 1245-1246
  2,   1,   1, // 1247-1249
  2, // 1250
  3,   1,   1, // 1251-1253
  3,   1,   1,   1, // 1254-1257
  4,   1,   1, // 1258-1260
  4,   1,   1,   1, // 1261-1264
  4,   5,   1,   1, // 1265-1268
  4,   5,   1,   1, // 1269-1272
  3,   1, // 1273-1274
  4,   1, // 1275-1276
  3,   3,   1, // 1277-1279
  3,   1,   1, // 1280-1282
  4,   1,   1, // 1283-1285
  3,   3,   1,   1, // 1286-1289
  4,   1,   1, // 1290-1292
  5,   1,   1, // 1293-1295
  3,   2,   1, // 1296-1298
  4,   3,   1, // 1299-1301
  3,   2,   1,   1, // 1302-1305
  4,   3,   1,   1, // 1306-1309
  3,   3,   1,   1, // 1310-1313
  4,   3,   1,   1, // 1314-1317
  5,   4,   1,   1, // 1318-1321
  1,   1,   1,   1,   3, // 1322-1326
  2,   1,   1,   1,   3, // 1327-1331
  1,   2,   1,   1,   3, // 1332-1336
  1,   1,   3, // 1337-1339
  1,   1,   3, // 1340-1342
  2,   1, // 1343-1344
  1,   1, // 1345-1346
  1,   1, // 1347-1348
  1,   1, // 1349-1350
  1,   1,   1, // 1351-1353
  1,   1,   1, // 1354-1356
  1,   1,   1, // 1357-1359
  1,   1,   1, // 1360-1362
  1,   1,   1, // 1363-1365
  2,   1,   1, // 1366-1368
  3,   1,   1, // 1369-1371
  2,   1,   1,   1, // 1372-1375
  3,   1,   1,   1, // 1376-1379
  3,   1,   1,   1, // 1380-1383
  2,   1,   1,   1, // 1384-1387
  3,   1,   1,   1, // 1388-1391
  2, // 1392
  1,   1, // 1393-1394
  1, // 1395
  1,   1, // 1396-1397
  1,   1, // 1398-1399
  1,   1, // 1400-1401
  1,   1, // 1402-1403
  4,   1, // 1404-1405
  4,   1, // 1406-1407
  4,   1, // 1408-1409
  2,   1, // 1410-1411
  4,   1, // 1412-1413
  4,   1, // 1414-1415
  4,   1, // 1416-1417
  4,   1, // 1418-1419
  4,   1,   1, // 1420-1422
  4,   1,   1, // 1423-1425
  5,   1,   1, // 1426-1428
  6,   1,   1, // 1429-1431
  8,   1,   1,   1, // 1432-1435
  9,   1,   1,   1, // 1436-1439
  8,   1,   1,   1, // 1440-1443
  9,   1,   1,   1, // 1444-1447
  15,   1,   1, // 1448-1450
  25,   1,   1, // 1451-1453
  17,   1, // 1454-1455
  32,   1, // 1456-1457
  1,   1, // 1458-1459
  1,   1,   1, // 1460-1462
  2,   1, // 1463-1464
  2,   1,   1, // 1465-1467
  1,   1, // 1468-1469
  2,   1, // 1470-1471
  1,   1,   1,   1, // 1472-1475
  2,   1,   1,   1, // 1476-1479
  1,   1, // 1480-1481
  1,   1, // 1482-1483
  1,   1,   1,   1, // 1484-1487
  2,   1,   1,   1, // 1488-1491
  1,   1, // 1492-1493
  1,   1,   1, // 1494-1496
  1,   1,   2,   1, // 1497-1500
  1,   1,   2,   2,   1, // 1501-1505
  1,   2,   1, // 1506-1508
  1,   1,   2,   1, // 1509-1512
  1,   1,   2,   2,   1, // 1513-1517
  1,   1,   2,   2,   2,   1, // 1518-1523
  3,   1,   1,   1, // 1524-1527
  3,   2,   1,   1,   1,   1, // 1528-1533
  2,   1, // 1534-1535
  2,   2,   1,   1, // 1536-1539
  2,   2,   1, // 1540-1542
  2,   3,   2,   3,   1, // 1543-1547
  3,   3,   1,   1,   1,   1, // 1548-1553
  2,   2,   2,   1,   1,   1, // 1554-1559
  2,   3,   2,   3,   2,   1, // 1560-1565
  3,   3,   2,   1,   1,   1,   1,   1, // 1566-1573
  2,   2,   1, // 1574-1576
  2,   2,   2,   1,   1, // 1577-1581
  3,   3,   4,   1, // 1582-1585
  5,   5,   6,   1,   1,   1,   1,   2, // 1586-1593
  3,   3,   4,   2,   1, // 1594-1598
  5,   5,   6,   2,   1,   1,   1,   1,   1,   2, // 1599-1608
  3,   3,   4,   1, // 1609-1612
  3,   3,   4,   2,   1,   1, // 1613-1618
  3,   3,   4,   4,   1, // 1619-1623
  4,   4,   5,   5,   1,   1,   1,   1,   2,   2, // 1624-1633
  3,   3,   4,   4,   2,   1, // 1634-1639
  4,   4,   5,   5,   2,   1,   1,   1,   1,   1,   2,   2, // 1640-1651
  2,   2,   3,   3,   1, // 1652-1656
  2,   2,   3,   3,   2,   1,   1, // 1657-1663
  1,   1,   1, // 1664-1666
  1,   1,   1,   1, // 1667-1670
  1,   1,   1,   1,   2, // 1671-1675
  1,   1,   1,   1,   2,   2, // 1676-1681
  2,   1,   1,   1,   1, // 1682-1686
  2,   1,   1,   1,   1,   1, // 1687-1692
  2,   1,   1,   1,   1,   1,   2, // 1693-1699
  2,   1,   1,   1,   1,   1,   2,   2, // 1700-1707
  1,   1,   1, // 1708-1710
  2,   1,   1,   1,   1, // 1711-1715
  1,   1,   1,   1, // 1716-1719
  1,   1,   1,   1,   2,   2, // 1720-1725
  2,   1,   1,   1,   1,   1, // 1726-1731
  2,   1,   1,   1,   1,   1,   2,   2, // 1732-1739
  1,   1,   1,   1, // 1740-1743
  2,   1,   1,   1,   1,   1, // 1744-1749
  1,   1,   1,   1,   2, // 1750-1754
  2,   1,   1,   1,   1,   1,   2, // 1755-1761
  1,   1,   1,   1,   2, // 1762-1766
  2,   1,   1,   1,   1,   1,   2, // 1767-1773
  1,   1,   1,   1,   2,   2, // 1774-1779
  2,   1,   1,   1,   1,   1,   2,   2, // 1780-1787
  1,   1,   1,   1,   2,   2, // 1788-1793
  2,   1,   1,   1,   1,   1,   2,   2, // 1794-1801
  4,   2, // 1802-1803
  4,   2, // 1804-1805
  4,   1, // 1806-1807
  4,   1, // 1808-1809
  3,   2,   2, // 1810-1812
  3,   2,   2, // 1813-1815
  3,   2,   1, // 1816-1818
  3,   2,   1, // 1819-1821
  3,   1,   1, // 1822-1824
  3,   1,   1, // 1825-1827
  4,   1,   1, // 1828-1830
  4,   1,   1, // 1831-1833
  4,   2,   2, // 1834-1836
  4,   2,   2, // 1837-1839
  4,   2,   1, // 1840-1842
  4,   2,   1, // 1843-1845
  3,   2,   2, // 1846-1848
  4,   2,   2, // 1849-1851
  6,   3,   2,   1, // 1852-1855
  6,   3,   2,   1, // 1856-1859
  6,   3,   1, // 1860-1862
  6,   3,   1, // 1863-1865
  6,   2,   2, // 1866-1868
  7,   2,   2, // 1869-1871
  7,   2,   1, // 1872-1874
  9,   2,   1, // 1875-1877
  6,   3,   2,   2, // 1878-1881
  7,   3,   2,   1, // 1882-1885
  7,   3,   2,   2, // 1886-1889
  9,   3,   2,   1, // 1890-1893
  1,   1, // 1894-1895
  3, // 1896
  2,   1, // 1897-1898
  2,   1, // 1899-1900
  1,   1, // 1901-1902
  1,   1,   1, // 1903-1905
  2,   1, // 1906-1907
  2,   2,   1, // 1908-1910
  3,   1,   1, // 1911-1913
  3,   1, // 1914-1915
  5,   2, // 1916-1917
  6,   2, // 1918-1919
  5,   2,   2, // 1920-1922
  5,   1,   1, // 1923-1925
  5,   2,   1, // 1926-1928
  6,   2,   2, // 1929-1931
  6,   2,   1, // 1932-1934
  6,   3,   2,   1, // 1935-1938
  8,   4,   2,   1, // 1939-1942
  6,   3,   2,   1, // 1943-1946
  8,   4,   2,   1, // 1947-1950
  9,   2,   2, // 1951-1953
  10,   2,   2, // 1954-1956
  2,   2,   1,   1, // 1957-1960
  3,   3,   1,   1, // 1961-1964
  4,   4,   1,   1, // 1965-1968
  2,   1,   1, // 1969-1971
  3,   1,   2, // 1972-1974
  3,   2,   1, // 1975-1977
  3,   2,   2,   1, // 1978-1981
  4,   2,   2,   3,   1, // 1982-1986
  4,   2,   2,   3,   3,   1, // 1987-1992
  3,   1,   2,   1, // 1993-1996
  3,   1,   2,   2,   1, // 1997-2001
  4,   1,   2,   2,   3,   1, // 2002-2007
  4,   1,   2,   2,   3,   3,   1, // 2008-2014
  0 // End itinerary
};
extern const unsigned ARMForwardingPathes[] = {
  0, // No itinerary
 0,  0, // 1-2
 0,  0,  0, // 3-5
 0,  0,  0, // 6-8
 0,  0,  0,  0, // 9-12
 0,  0, // 13-14
 0,  0,  0, // 15-17
 0,  0,  0, // 18-20
 0,  0,  0,  0, // 21-24
 0,  0, // 25-26
 0,  0, // 27-28
 0,  0, // 29-30
 0,  0,  0, // 31-33
 0,  0,  0,  0, // 34-37
 0, // 38
 0,  0, // 39-40
 0,  0, // 41-42
 0,  0,  0, // 43-45
 0, // 46
 0,  0, // 47-48
 0,  0, // 49-50
 0,  0,  0, // 51-53
 0, // 54
 0,  0, // 55-56
 0,  0, // 57-58
 0,  0,  0, // 59-61
 0, // 62
 0, // 63
 0, // 64
 0, // 65
 0,  0, // 66-67
 0,  0, // 68-69
 0,  0,  0, // 70-72
 0, // 73
 0, // 74
 0,  0, // 75-76
 0,  0, // 77-78
 0,  0,  0, // 79-81
 0,  0,  0, // 82-84
 0,  0,  0,  0, // 85-88
 0,  0,  0, // 89-91
 0,  0,  0,  0, // 92-95
 0,  0,  0, // 96-98
 0,  0,  0,  0, // 99-102
 0,  0, // 103-104
 0,  0, // 105-106
 0,  0, // 107-108
 0,  0,  0, // 109-111
 0,  0,  0, // 112-114
 0,  0,  0, // 115-117
 0,  0,  0, // 118-120
 0,  0,  0, // 121-123
 0,  0,  0, // 124-126
 0,  0,  0, // 127-129
 0,  0,  0,  0, // 130-133
 0,  0,  0,  0, // 134-137
 0,  0,  0,  0, // 138-141
 0,  0,  0,  0, // 142-145
 0,  0,  0,  0, // 146-149
 0,  0,  0,  0,  0, // 150-154
 0,  0,  0,  0,  0, // 155-159
 0,  0,  0,  0,  0, // 160-164
 0,  0, // 165-166
 0,  0,  0, // 167-169
 0,  0,  0, // 170-172
 0,  0, // 173-174
 0,  0, // 175-176
 0,  0, // 177-178
 0,  0,  0, // 179-181
 0,  0,  0, // 182-184
 0,  0,  0, // 185-187
 0,  0,  0, // 188-190
 0,  0,  0, // 191-193
 0,  0,  0, // 194-196
 0,  0,  0, // 197-199
 0,  0,  0,  0, // 200-203
 0,  0,  0,  0, // 204-207
 0,  0,  0,  0, // 208-211
 0,  0,  0,  0, // 212-215
 0,  0,  0,  0, // 216-219
 0, // 220
 0, // 221
 0,  0, // 222-223
 0,  0, // 224-225
 0,  0, // 226-227
 0,  0, // 228-229
 0,  0, // 230-231
 0,  0, // 232-233
 0,  0, // 234-235
 0,  0, // 236-237
 0,  0, // 238-239
 0,  0, // 240-241
 0,  0,  0, // 242-244
 0,  0,  0, // 245-247
 0,  0,  0, // 248-250
 0,  0,  0, // 251-253
 0,  0,  0,  0, // 254-257
 0,  0,  0,  0, // 258-261
 0,  0,  0,  0, // 262-265
 0,  0,  0,  0, // 266-269
 0,  0,  0, // 270-272
 0,  0,  0, // 273-275
 0,  0,  0, // 276-278
 0,  0,  0, // 279-281
 0,  0, // 282-283
 0,  0,  0, // 284-286
 0,  0, // 287-288
 0,  0,  0, // 289-291
 0,  0,  0, // 292-294
 0,  0,  0, // 295-297
 0,  0,  0,  0, // 298-301
 0,  0,  0,  0,  0, // 302-306
 0,  0,  0, // 307-309
 0,  0,  0, // 310-312
 0,  0,  0,  0, // 313-316
 0,  0,  0,  0,  0, // 317-321
 0,  0, // 322-323
 0,  0,  0, // 324-326
 0,  0,  0, // 327-329
 0,  0,  0, // 330-332
 0,  0,  0,  0, // 333-336
 0,  0, // 337-338
 0,  0,  0, // 339-341
 0,  0,  0, // 342-344
 0,  0,  0,  0, // 345-348
 0,  0, // 349-350
 0,  0, // 351-352
 0,  0, // 353-354
 0,  0,  0, // 355-357
 0,  0,  0,  0, // 358-361
 0, // 362
 0,  0, // 363-364
 0,  0, // 365-366
 0,  0,  0, // 367-369
 0, // 370
 0,  0, // 371-372
 0,  0, // 373-374
 0,  0,  0, // 375-377
 0, // 378
 0,  0, // 379-380
 0,  0, // 381-382
 0,  0,  0, // 383-385
 0, // 386
 0, // 387
 0, // 388
 0, // 389
 0,  0, // 390-391
 0,  0, // 392-393
 0,  0,  0, // 394-396
 0,  0, // 397-398
 0, // 399
 0,  0, // 400-401
 0,  0, // 402-403
 0,  0,  0, // 404-406
 0,  0,  0, // 407-409
 0,  0,  0,  0, // 410-413
 0,  0,  0, // 414-416
 0,  0,  0,  0, // 417-420
 0,  0,  0,  0, // 421-424
 0,  0,  0,  0, // 425-428
 0,  0, // 429-430
 0,  0, // 431-432
 0,  0, // 433-434
 0,  0,  0, // 435-437
 0,  0,  0, // 438-440
 0,  0,  0, // 441-443
 0,  0,  0, // 444-446
 0,  0,  0, // 447-449
 0,  0,  0, // 450-452
 0,  0,  0, // 453-455
 0,  0,  0,  0, // 456-459
 0,  0,  0,  0, // 460-463
 0,  0,  0,  0, // 464-467
 0,  0,  0,  0, // 468-471
 0,  0,  0,  0, // 472-475
 0,  0,  0,  0,  0, // 476-480
 0,  0,  0,  0,  0, // 481-485
 0,  0,  0,  0,  0, // 486-490
 0,  0,  0, // 491-493
 0,  0,  0, // 494-496
 0,  0, // 497-498
 0,  0, // 499-500
 0,  0, // 501-502
 0,  0, // 503-504
 0,  0,  0, // 505-507
 0,  0,  0, // 508-510
 0,  0,  0, // 511-513
 0,  0,  0, // 514-516
 0,  0,  0, // 517-519
 0,  0,  0, // 520-522
 0,  0,  0, // 523-525
 0,  0,  0,  0, // 526-529
 0,  0,  0,  0, // 530-533
 0,  0,  0,  0, // 534-537
 0,  0,  0,  0, // 538-541
 0,  0,  0,  0, // 542-545
 0, // 546
 0,  0, // 547-548
 0, // 549
 0,  0, // 550-551
 0,  0, // 552-553
 0,  0, // 554-555
 0,  0, // 556-557
 0,  0, // 558-559
 0,  0, // 560-561
 0,  0, // 562-563
 0,  0, // 564-565
 0,  0, // 566-567
 0,  0, // 568-569
 0,  0,  0, // 570-572
 0,  0,  0, // 573-575
 0,  0,  0, // 576-578
 0,  0,  0, // 579-581
 0,  0,  0,  0, // 582-585
 0,  0,  0,  0, // 586-589
 0,  0,  0,  0, // 590-593
 0,  0,  0,  0, // 594-597
 0,  0,  0, // 598-600
 0,  0,  0, // 601-603
 0,  0, // 604-605
 0,  0, // 606-607
 0,  0, // 608-609
 0,  0,  0, // 610-612
 0,  0, // 613-614
 0,  0,  0, // 615-617
 0,  0, // 618-619
 0,  0, // 620-621
 0,  0,  0,  0, // 622-625
 0,  0,  0,  0,  0, // 626-630
 0,  0, // 631-632
 0,  0, // 633-634
 0,  0,  0,  0, // 635-638
 0,  0,  0,  0,  0, // 639-643
 0,  0, // 644-645
 0,  0,  0, // 646-648
 0,  0,  0,  0, // 649-652
 0,  0,  0,  0,  0, // 653-657
 0,  0,  0, // 658-660
 0,  0,  0,  0, // 661-664
 0,  0,  0,  0,  0, // 665-669
 0,  0,  0,  0,  0,  0, // 670-675
 0,  0,  0,  0, // 676-679
 0,  0,  0,  0,  0,  0, // 680-685
 0,  0, // 686-687
 0,  0,  0,  0, // 688-691
 0,  0,  0, // 692-694
 0,  0,  0,  0,  0, // 695-699
 0,  0,  0,  0,  0,  0, // 700-705
 0,  0,  0,  0,  0,  0, // 706-711
 0,  0,  0,  0,  0,  0, // 712-717
 0,  0,  0,  0,  0,  0,  0,  0, // 718-725
 0,  0,  0, // 726-728
 0,  0,  0,  0,  0, // 729-733
 0,  0,  0,  0, // 734-737
 0,  0,  0,  0,  0,  0,  0,  0, // 738-745
 0,  0,  0,  0,  0, // 746-750
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 751-760
 0,  0,  0,  0, // 761-764
 0,  0,  0,  0,  0,  0, // 765-770
 0,  0,  0,  0,  0, // 771-775
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 776-785
 0,  0,  0,  0,  0,  0, // 786-791
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 792-803
 0,  0,  0,  0,  0, // 804-808
 0,  0,  0,  0,  0,  0,  0, // 809-815
 0,  0,  0, // 816-818
 0,  0,  0,  0, // 819-822
 0,  0,  0,  0,  0, // 823-827
 0,  0,  0,  0,  0,  0, // 828-833
 0,  0,  0,  0,  0, // 834-838
 0,  0,  0,  0,  0,  0, // 839-844
 0,  0,  0,  0,  0,  0,  0, // 845-851
 0,  0,  0,  0,  0,  0,  0,  0, // 852-859
 0,  0,  0, // 860-862
 0,  0,  0,  0,  0, // 863-867
 0,  0,  0,  0, // 868-871
 0,  0,  0,  0,  0,  0, // 872-877
 0,  0,  0,  0,  0,  0, // 878-883
 0,  0,  0,  0,  0,  0,  0,  0, // 884-891
 0,  0,  0,  0, // 892-895
 0,  0,  0,  0,  0,  0, // 896-901
 0,  0,  0,  0,  0, // 902-906
 0,  0,  0,  0,  0,  0,  0, // 907-913
 0,  0,  0,  0,  0, // 914-918
 0,  0,  0,  0,  0,  0,  0, // 919-925
 0,  0,  0,  0,  0,  0, // 926-931
 0,  0,  0,  0,  0,  0,  0,  0, // 932-939
 0,  0,  0,  0,  0,  0, // 940-945
 0,  0,  0,  0,  0,  0,  0,  0, // 946-953
 0,  0, // 954-955
 0,  0, // 956-957
 0,  0,  0, // 958-960
 0,  0,  0, // 961-963
 0,  0,  0, // 964-966
 0,  0,  0, // 967-969
 0,  0,  0, // 970-972
 0,  0, // 973-974
 0, // 975
 0,  0, // 976-977
 0,  0, // 978-979
 0,  0, // 980-981
 0,  0,  0, // 982-984
 0,  0, // 985-986
 0,  0,  0, // 987-989
 0,  0,  0, // 990-992
 0,  0, // 993-994
 0,  0,  0,  0, // 995-998
 0,  0,  0,  0, // 999-1002
 0,  0,  0,  0, // 1003-1006
 0,  0,  0,  0, // 1007-1010
 0,  0,  0,  0, // 1011-1014
 0,  0,  0,  0, // 1015-1018
 0,  0,  0,  0, // 1019-1022
 0,  0,  0, // 1023-1025
 0,  0,  0, // 1026-1028
 0,  0,  0, // 1029-1031
 0,  0,  0, // 1032-1034
 0,  0, // 1035-1036
 0,  0, // 1037-1038
 0,  0, // 1039-1040
 0,  0, // 1041-1042
 0,  0,  0, // 1043-1045
 0,  0,  0, // 1046-1048
 0,  0,  0, // 1049-1051
 0,  0,  0, // 1052-1054
 0,  0,  0, // 1055-1057
 0,  0,  0, // 1058-1060
 0,  0,  0, // 1061-1063
 0,  0,  0, // 1064-1066
 0,  0,  0, // 1067-1069
 0,  0,  0, // 1070-1072
 0,  0,  0, // 1073-1075
 0,  0,  0, // 1076-1078
 0,  0,  0, // 1079-1081
 0,  0,  0, // 1082-1084
 0,  0,  0,  0, // 1085-1088
 0,  0,  0,  0, // 1089-1092
 0,  0,  0, // 1093-1095
 0,  0,  0, // 1096-1098
 0,  0,  0, // 1099-1101
 0,  0,  0, // 1102-1104
 0,  0,  0,  0, // 1105-1108
 0,  0,  0,  0, // 1109-1112
 0,  0,  0,  0, // 1113-1116
 0,  0,  0,  0, // 1117-1120
 0,  0,  0, // 1121-1123
 0,  0,  0, // 1124-1126
 0,  0,  0, // 1127-1129
 0,  0,  0,  0, // 1130-1133
 0,  0,  0,  0,  0, // 1134-1138
 0,  0,  0,  0,  0,  0, // 1139-1144
 0,  0,  0,  0, // 1145-1148
 0,  0,  0,  0,  0, // 1149-1153
 0,  0,  0,  0,  0,  0, // 1154-1159
 0,  0,  0,  0,  0,  0,  0, // 1160-1166
 0, // 1167
 0,  0, // 1168-1169
 0,  0, // 1170-1171
 0,  0,  0, // 1172-1174
 0, // 1175
 0, // 1176
 0, // 1177
 0, // 1178
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1179-1180
 0,  0, // 1181-1182
 0,  0,  0, // 1183-1185
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1186-1187
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1188-1190
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, // 1191-1193
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1194-1196
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, // 1197-1200
 0,  0, // 1201-1202
 0,  0,  0, // 1203-1205
 0,  0,  0, // 1206-1208
 0,  0,  0,  0, // 1209-1212
 0,  0, // 1213-1214
 0,  0, // 1215-1216
 0,  0, // 1217-1218
 0,  0,  0, // 1219-1221
 0,  0,  0,  0, // 1222-1225
CortexA9ItinerariesBypass::A9_LdBypass, // 1226
CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1227-1228
CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, // 1229-1230
CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, // 1231-1233
 0, // 1234
 0,  0, // 1235-1236
 0,  0, // 1237-1238
 0,  0,  0, // 1239-1241
 0, // 1242
 0,  0, // 1243-1244
 0,  0, // 1245-1246
 0,  0,  0, // 1247-1249
 0, // 1250
 0,  0,  0, // 1251-1253
 0,  0,  0,  0, // 1254-1257
 0,  0,  0, // 1258-1260
 0,  0,  0,  0, // 1261-1264
 0,  0,  0,  0, // 1265-1268
 0,  0,  0,  0, // 1269-1272
CortexA9ItinerariesBypass::A9_LdBypass,  0, // 1273-1274
CortexA9ItinerariesBypass::A9_LdBypass,  0, // 1275-1276
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1277-1279
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1280-1282
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1283-1285
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 1286-1289
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1290-1292
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1293-1295
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1296-1298
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 1299-1301
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 1302-1305
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 1306-1309
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 1310-1313
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 1314-1317
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 1318-1321
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1322-1326
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1327-1331
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1332-1336
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1337-1339
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1340-1342
 0,  0, // 1343-1344
 0,  0, // 1345-1346
 0,  0, // 1347-1348
 0,  0, // 1349-1350
 0,  0,  0, // 1351-1353
 0,  0,  0, // 1354-1356
 0,  0,  0, // 1357-1359
 0,  0,  0, // 1360-1362
 0,  0,  0, // 1363-1365
 0,  0,  0, // 1366-1368
 0,  0,  0, // 1369-1371
 0,  0,  0,  0, // 1372-1375
 0,  0,  0,  0, // 1376-1379
 0,  0,  0,  0, // 1380-1383
 0,  0,  0,  0, // 1384-1387
 0,  0,  0,  0, // 1388-1391
 0, // 1392
 0,  0, // 1393-1394
 0, // 1395
 0,  0, // 1396-1397
 0,  0, // 1398-1399
 0,  0, // 1400-1401
 0,  0, // 1402-1403
 0,  0, // 1404-1405
 0,  0, // 1406-1407
 0,  0, // 1408-1409
 0,  0, // 1410-1411
 0,  0, // 1412-1413
 0,  0, // 1414-1415
 0,  0, // 1416-1417
 0,  0, // 1418-1419
 0,  0,  0, // 1420-1422
 0,  0,  0, // 1423-1425
 0,  0,  0, // 1426-1428
 0,  0,  0, // 1429-1431
 0,  0,  0,  0, // 1432-1435
 0,  0,  0,  0, // 1436-1439
 0,  0,  0,  0, // 1440-1443
 0,  0,  0,  0, // 1444-1447
 0,  0,  0, // 1448-1450
 0,  0,  0, // 1451-1453
 0,  0, // 1454-1455
 0,  0, // 1456-1457
 0,  0, // 1458-1459
 0,  0,  0, // 1460-1462
 0,  0, // 1463-1464
 0,  0,  0, // 1465-1467
 0,  0, // 1468-1469
 0,  0, // 1470-1471
 0,  0,  0,  0, // 1472-1475
 0,  0,  0,  0, // 1476-1479
 0,  0, // 1480-1481
 0,  0, // 1482-1483
 0,  0,  0,  0, // 1484-1487
 0,  0,  0,  0, // 1488-1491
 0,  0, // 1492-1493
 0,  0,  0, // 1494-1496
 0,  0,  0,  0, // 1497-1500
 0,  0,  0,  0,  0, // 1501-1505
 0,  0,  0, // 1506-1508
 0,  0,  0,  0, // 1509-1512
 0,  0,  0,  0,  0, // 1513-1517
 0,  0,  0,  0,  0,  0, // 1518-1523
 0,  0,  0,  0, // 1524-1527
 0,  0,  0,  0,  0,  0, // 1528-1533
 0,  0, // 1534-1535
 0,  0,  0,  0, // 1536-1539
 0,  0,  0, // 1540-1542
 0,  0,  0,  0,  0, // 1543-1547
 0,  0,  0,  0,  0,  0, // 1548-1553
 0,  0,  0,  0,  0,  0, // 1554-1559
 0,  0,  0,  0,  0,  0, // 1560-1565
 0,  0,  0,  0,  0,  0,  0,  0, // 1566-1573
 0,  0,  0, // 1574-1576
 0,  0,  0,  0,  0, // 1577-1581
 0,  0,  0,  0, // 1582-1585
 0,  0,  0,  0,  0,  0,  0,  0, // 1586-1593
 0,  0,  0,  0,  0, // 1594-1598
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 1599-1608
 0,  0,  0,  0, // 1609-1612
 0,  0,  0,  0,  0,  0, // 1613-1618
 0,  0,  0,  0,  0, // 1619-1623
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 1624-1633
 0,  0,  0,  0,  0,  0, // 1634-1639
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 1640-1651
 0,  0,  0,  0,  0, // 1652-1656
 0,  0,  0,  0,  0,  0,  0, // 1657-1663
 0,  0,  0, // 1664-1666
 0,  0,  0,  0, // 1667-1670
 0,  0,  0,  0,  0, // 1671-1675
 0,  0,  0,  0,  0,  0, // 1676-1681
 0,  0,  0,  0,  0, // 1682-1686
 0,  0,  0,  0,  0,  0, // 1687-1692
 0,  0,  0,  0,  0,  0,  0, // 1693-1699
 0,  0,  0,  0,  0,  0,  0,  0, // 1700-1707
 0,  0,  0, // 1708-1710
 0,  0,  0,  0,  0, // 1711-1715
 0,  0,  0,  0, // 1716-1719
 0,  0,  0,  0,  0,  0, // 1720-1725
 0,  0,  0,  0,  0,  0, // 1726-1731
 0,  0,  0,  0,  0,  0,  0,  0, // 1732-1739
 0,  0,  0,  0, // 1740-1743
 0,  0,  0,  0,  0,  0, // 1744-1749
 0,  0,  0,  0,  0, // 1750-1754
 0,  0,  0,  0,  0,  0,  0, // 1755-1761
 0,  0,  0,  0,  0, // 1762-1766
 0,  0,  0,  0,  0,  0,  0, // 1767-1773
 0,  0,  0,  0,  0,  0, // 1774-1779
 0,  0,  0,  0,  0,  0,  0,  0, // 1780-1787
 0,  0,  0,  0,  0,  0, // 1788-1793
 0,  0,  0,  0,  0,  0,  0,  0, // 1794-1801
 0,  0, // 1802-1803
 0,  0, // 1804-1805
 0,  0, // 1806-1807
 0,  0, // 1808-1809
 0,  0,  0, // 1810-1812
 0,  0,  0, // 1813-1815
 0,  0,  0, // 1816-1818
 0,  0,  0, // 1819-1821
 0,  0,  0, // 1822-1824
 0,  0,  0, // 1825-1827
 0,  0,  0, // 1828-1830
 0,  0,  0, // 1831-1833
 0,  0,  0, // 1834-1836
 0,  0,  0, // 1837-1839
 0,  0,  0, // 1840-1842
 0,  0,  0, // 1843-1845
 0,  0,  0, // 1846-1848
 0,  0,  0, // 1849-1851
 0,  0,  0,  0, // 1852-1855
 0,  0,  0,  0, // 1856-1859
 0,  0,  0, // 1860-1862
 0,  0,  0, // 1863-1865
 0,  0,  0, // 1866-1868
 0,  0,  0, // 1869-1871
 0,  0,  0, // 1872-1874
 0,  0,  0, // 1875-1877
 0,  0,  0,  0, // 1878-1881
 0,  0,  0,  0, // 1882-1885
 0,  0,  0,  0, // 1886-1889
 0,  0,  0,  0, // 1890-1893
 0,  0, // 1894-1895
 0, // 1896
 0,  0, // 1897-1898
 0,  0, // 1899-1900
 0,  0, // 1901-1902
 0,  0,  0, // 1903-1905
 0,  0, // 1906-1907
 0,  0,  0, // 1908-1910
 0,  0,  0, // 1911-1913
 0,  0, // 1914-1915
 0,  0, // 1916-1917
 0,  0, // 1918-1919
 0,  0,  0, // 1920-1922
 0,  0,  0, // 1923-1925
 0,  0,  0, // 1926-1928
 0,  0,  0, // 1929-1931
 0,  0,  0, // 1932-1934
 0,  0,  0,  0, // 1935-1938
 0,  0,  0,  0, // 1939-1942
 0,  0,  0,  0, // 1943-1946
 0,  0,  0,  0, // 1947-1950
 0,  0,  0, // 1951-1953
 0,  0,  0, // 1954-1956
 0,  0,  0,  0, // 1957-1960
 0,  0,  0,  0, // 1961-1964
 0,  0,  0,  0, // 1965-1968
 0,  0,  0, // 1969-1971
 0,  0,  0, // 1972-1974
 0,  0,  0, // 1975-1977
 0,  0,  0,  0, // 1978-1981
 0,  0,  0,  0,  0, // 1982-1986
 0,  0,  0,  0,  0,  0, // 1987-1992
 0,  0,  0,  0, // 1993-1996
 0,  0,  0,  0,  0, // 1997-2001
 0,  0,  0,  0,  0,  0, // 2002-2007
 0,  0,  0,  0,  0,  0,  0, // 2008-2014
  0 // End itinerary
};

static const llvm::InstrItinerary ARMV6Itineraries[] = {
  { 1, 1, 2, 0, 0 }, // 0 IIC_Br
  { 1, 0, 0, 0, 0 }, // 1 IIC_Preload
  { 1, 0, 0, 0, 0 }, // 2 IIC_VABAD
  { 1, 0, 0, 0, 0 }, // 3 IIC_VABAQ
  { 1, 0, 0, 0, 0 }, // 4 IIC_VBIND
  { 1, 0, 0, 0, 0 }, // 5 IIC_VBINQ
  { 1, 0, 0, 0, 0 }, // 6 IIC_VBINi4D
  { 1, 0, 0, 0, 0 }, // 7 IIC_VBINi4Q
  { 1, 0, 0, 0, 0 }, // 8 IIC_VBINiD
  { 1, 0, 0, 0, 0 }, // 9 IIC_VBINiQ
  { 1, 0, 0, 0, 0 }, // 10 IIC_VCNTiD
  { 1, 0, 0, 0, 0 }, // 11 IIC_VCNTiQ
  { 1, 0, 0, 0, 0 }, // 12 IIC_VEXTD
  { 1, 0, 0, 0, 0 }, // 13 IIC_VEXTQ
  { 1, 0, 0, 0, 0 }, // 14 IIC_VFMACD
  { 1, 0, 0, 0, 0 }, // 15 IIC_VFMACQ
  { 1, 0, 0, 0, 0 }, // 16 IIC_VFMULD
  { 1, 0, 0, 0, 0 }, // 17 IIC_VFMULQ
  { 1, 0, 0, 0, 0 }, // 18 IIC_VLD1
  { 1, 0, 0, 0, 0 }, // 19 IIC_VLD1dup
  { 1, 0, 0, 0, 0 }, // 20 IIC_VLD1dupu
  { 1, 0, 0, 0, 0 }, // 21 IIC_VLD1ln
  { 1, 0, 0, 0, 0 }, // 22 IIC_VLD1lnu
  { 1, 0, 0, 0, 0 }, // 23 IIC_VLD1u
  { 1, 0, 0, 0, 0 }, // 24 IIC_VLD1x2
  { 1, 0, 0, 0, 0 }, // 25 IIC_VLD1x2u
  { 1, 0, 0, 0, 0 }, // 26 IIC_VLD1x3
  { 1, 0, 0, 0, 0 }, // 27 IIC_VLD1x3u
  { 1, 0, 0, 0, 0 }, // 28 IIC_VLD1x4
  { 1, 0, 0, 0, 0 }, // 29 IIC_VLD1x4u
  { 1, 0, 0, 0, 0 }, // 30 IIC_VLD2
  { 1, 0, 0, 0, 0 }, // 31 IIC_VLD2dup
  { 1, 0, 0, 0, 0 }, // 32 IIC_VLD2dupu
  { 1, 0, 0, 0, 0 }, // 33 IIC_VLD2ln
  { 1, 0, 0, 0, 0 }, // 34 IIC_VLD2lnu
  { 1, 0, 0, 0, 0 }, // 35 IIC_VLD2u
  { 1, 0, 0, 0, 0 }, // 36 IIC_VLD2x2
  { 1, 0, 0, 0, 0 }, // 37 IIC_VLD2x2u
  { 1, 0, 0, 0, 0 }, // 38 IIC_VLD3
  { 1, 0, 0, 0, 0 }, // 39 IIC_VLD3dup
  { 1, 0, 0, 0, 0 }, // 40 IIC_VLD3dupu
  { 1, 0, 0, 0, 0 }, // 41 IIC_VLD3ln
  { 1, 0, 0, 0, 0 }, // 42 IIC_VLD3lnu
  { 1, 0, 0, 0, 0 }, // 43 IIC_VLD3u
  { 1, 0, 0, 0, 0 }, // 44 IIC_VLD4
  { 1, 0, 0, 0, 0 }, // 45 IIC_VLD4dup
  { 1, 0, 0, 0, 0 }, // 46 IIC_VLD4dupu
  { 1, 0, 0, 0, 0 }, // 47 IIC_VLD4ln
  { 1, 0, 0, 0, 0 }, // 48 IIC_VLD4lnu
  { 1, 0, 0, 0, 0 }, // 49 IIC_VLD4u
  { 1, 0, 0, 0, 0 }, // 50 IIC_VMACD
  { 1, 0, 0, 0, 0 }, // 51 IIC_VMACQ
  { 1, 0, 0, 0, 0 }, // 52 IIC_VMACi16D
  { 1, 0, 0, 0, 0 }, // 53 IIC_VMACi16Q
  { 1, 0, 0, 0, 0 }, // 54 IIC_VMACi32D
  { 1, 0, 0, 0, 0 }, // 55 IIC_VMACi32Q
  { 1, 0, 0, 0, 0 }, // 56 IIC_VMOV
  { 1, 0, 0, 0, 0 }, // 57 IIC_VMOVD
  { 1, 0, 0, 0, 0 }, // 58 IIC_VMOVDI
  { 1, 0, 0, 0, 0 }, // 59 IIC_VMOVID
  { 1, 0, 0, 0, 0 }, // 60 IIC_VMOVIS
  { 1, 0, 0, 0, 0 }, // 61 IIC_VMOVISL
  { 1, 0, 0, 0, 0 }, // 62 IIC_VMOVImm
  { 1, 0, 0, 0, 0 }, // 63 IIC_VMOVN
  { 1, 0, 0, 0, 0 }, // 64 IIC_VMOVQ
  { 1, 0, 0, 0, 0 }, // 65 IIC_VMOVSI
  { 1, 0, 0, 0, 0 }, // 66 IIC_VMULi16D
  { 1, 0, 0, 0, 0 }, // 67 IIC_VMULi16Q
  { 1, 0, 0, 0, 0 }, // 68 IIC_VMULi32D
  { 1, 0, 0, 0, 0 }, // 69 IIC_VMULi32Q
  { 1, 0, 0, 0, 0 }, // 70 IIC_VPALiD
  { 1, 0, 0, 0, 0 }, // 71 IIC_VPALiQ
  { 1, 0, 0, 0, 0 }, // 72 IIC_VPBIND
  { 1, 0, 0, 0, 0 }, // 73 IIC_VPERMD
  { 1, 0, 0, 0, 0 }, // 74 IIC_VPERMQ
  { 1, 0, 0, 0, 0 }, // 75 IIC_VPERMQ3
  { 1, 0, 0, 0, 0 }, // 76 IIC_VQUNAiD
  { 1, 0, 0, 0, 0 }, // 77 IIC_VQUNAiQ
  { 1, 0, 0, 0, 0 }, // 78 IIC_VRECSD
  { 1, 0, 0, 0, 0 }, // 79 IIC_VRECSQ
  { 1, 0, 0, 0, 0 }, // 80 IIC_VSHLi4D
  { 1, 0, 0, 0, 0 }, // 81 IIC_VSHLi4Q
  { 1, 0, 0, 0, 0 }, // 82 IIC_VSHLiD
  { 1, 0, 0, 0, 0 }, // 83 IIC_VSHLiQ
  { 1, 0, 0, 0, 0 }, // 84 IIC_VST1
  { 1, 0, 0, 0, 0 }, // 85 IIC_VST1ln
  { 1, 0, 0, 0, 0 }, // 86 IIC_VST1lnu
  { 1, 0, 0, 0, 0 }, // 87 IIC_VST1u
  { 1, 0, 0, 0, 0 }, // 88 IIC_VST1x2
  { 1, 0, 0, 0, 0 }, // 89 IIC_VST1x2u
  { 1, 0, 0, 0, 0 }, // 90 IIC_VST1x3
  { 1, 0, 0, 0, 0 }, // 91 IIC_VST1x3u
  { 1, 0, 0, 0, 0 }, // 92 IIC_VST1x4
  { 1, 0, 0, 0, 0 }, // 93 IIC_VST1x4u
  { 1, 0, 0, 0, 0 }, // 94 IIC_VST2
  { 1, 0, 0, 0, 0 }, // 95 IIC_VST2ln
  { 1, 0, 0, 0, 0 }, // 96 IIC_VST2lnu
  { 1, 0, 0, 0, 0 }, // 97 IIC_VST2u
  { 1, 0, 0, 0, 0 }, // 98 IIC_VST2x2
  { 1, 0, 0, 0, 0 }, // 99 IIC_VST2x2u
  { 1, 0, 0, 0, 0 }, // 100 IIC_VST3
  { 1, 0, 0, 0, 0 }, // 101 IIC_VST3ln
  { 1, 0, 0, 0, 0 }, // 102 IIC_VST3lnu
  { 1, 0, 0, 0, 0 }, // 103 IIC_VST3u
  { 1, 0, 0, 0, 0 }, // 104 IIC_VST4
  { 1, 0, 0, 0, 0 }, // 105 IIC_VST4ln
  { 1, 0, 0, 0, 0 }, // 106 IIC_VST4lnu
  { 1, 0, 0, 0, 0 }, // 107 IIC_VST4u
  { 1, 0, 0, 0, 0 }, // 108 IIC_VSUBi4D
  { 1, 0, 0, 0, 0 }, // 109 IIC_VSUBi4Q
  { 1, 0, 0, 0, 0 }, // 110 IIC_VSUBiD
  { 1, 0, 0, 0, 0 }, // 111 IIC_VSUBiQ
  { 1, 0, 0, 0, 0 }, // 112 IIC_VTB1
  { 1, 0, 0, 0, 0 }, // 113 IIC_VTB2
  { 1, 0, 0, 0, 0 }, // 114 IIC_VTB3
  { 1, 0, 0, 0, 0 }, // 115 IIC_VTB4
  { 1, 0, 0, 0, 0 }, // 116 IIC_VTBX1
  { 1, 0, 0, 0, 0 }, // 117 IIC_VTBX2
  { 1, 0, 0, 0, 0 }, // 118 IIC_VTBX3
  { 1, 0, 0, 0, 0 }, // 119 IIC_VTBX4
  { 1, 0, 0, 0, 0 }, // 120 IIC_VUNAD
  { 1, 0, 0, 0, 0 }, // 121 IIC_VUNAQ
  { 1, 0, 0, 0, 0 }, // 122 IIC_VUNAiD
  { 1, 0, 0, 0, 0 }, // 123 IIC_VUNAiQ
  { 1, 1, 2, 242, 245 }, // 124 IIC_fpALU32
  { 1, 1, 2, 245, 248 }, // 125 IIC_fpALU64
  { 1, 1, 2, 226, 228 }, // 126 IIC_fpCMP32
  { 1, 1, 2, 228, 230 }, // 127 IIC_fpCMP64
  { 1, 1, 2, 236, 238 }, // 128 IIC_fpCVTDI
  { 1, 1, 2, 232, 234 }, // 129 IIC_fpCVTDS
  { 1, 0, 0, 0, 0 }, // 130 IIC_fpCVTHS
  { 1, 1, 2, 240, 242 }, // 131 IIC_fpCVTID
  { 1, 1, 2, 238, 240 }, // 132 IIC_fpCVTIS
  { 1, 1, 2, 230, 232 }, // 133 IIC_fpCVTSD
  { 1, 0, 0, 0, 0 }, // 134 IIC_fpCVTSH
  { 1, 1, 2, 234, 236 }, // 135 IIC_fpCVTSI
  { 1, 11, 12, 270, 273 }, // 136 IIC_fpDIV32
  { 1, 12, 13, 273, 276 }, // 137 IIC_fpDIV64
  { 1, 1, 2, 262, 266 }, // 138 IIC_fpFMAC32
  { 1, 2, 3, 266, 270 }, // 139 IIC_fpFMAC64
  { 1, 1, 2, 292, 295 }, // 140 IIC_fpLoad32
  { 1, 1, 2, 295, 298 }, // 141 IIC_fpLoad64
  { 0, 8, 9, 298, 302 }, // 142 IIC_fpLoad_m
  { 0, 8, 9, 302, 307 }, // 143 IIC_fpLoad_mu
  { 1, 1, 2, 254, 258 }, // 144 IIC_fpMAC32
  { 1, 2, 3, 258, 262 }, // 145 IIC_fpMAC64
  { 1, 1, 2, 289, 292 }, // 146 IIC_fpMOVDI
  { 1, 1, 2, 284, 287 }, // 147 IIC_fpMOVID
  { 1, 1, 2, 282, 284 }, // 148 IIC_fpMOVIS
  { 1, 1, 2, 287, 289 }, // 149 IIC_fpMOVSI
  { 1, 1, 2, 248, 251 }, // 150 IIC_fpMUL32
  { 1, 2, 3, 251, 254 }, // 151 IIC_fpMUL64
  { 1, 11, 12, 276, 279 }, // 152 IIC_fpSQRT32
  { 1, 12, 13, 279, 282 }, // 153 IIC_fpSQRT64
  { 1, 1, 2, 221, 222 }, // 154 IIC_fpSTAT
  { 1, 1, 2, 307, 310 }, // 155 IIC_fpStore32
  { 1, 1, 2, 310, 313 }, // 156 IIC_fpStore64
  { 0, 8, 9, 313, 317 }, // 157 IIC_fpStore_m
  { 0, 8, 9, 317, 322 }, // 158 IIC_fpStore_mu
  { 1, 1, 2, 222, 224 }, // 159 IIC_fpUNA32
  { 1, 1, 2, 224, 226 }, // 160 IIC_fpUNA64
  { 1, 1, 2, 1, 3 }, // 161 IIC_iALUi
  { 1, 1, 2, 3, 6 }, // 162 IIC_iALUr
  { 1, 1, 2, 6, 9 }, // 163 IIC_iALUsi
  { 1, 0, 0, 0, 0 }, // 164 IIC_iALUsir
  { 1, 2, 3, 9, 13 }, // 165 IIC_iALUsr
  { 1, 1, 2, 0, 0 }, // 166 IIC_iALUx
  { 1, 1, 2, 13, 15 }, // 167 IIC_iBITi
  { 1, 1, 2, 15, 18 }, // 168 IIC_iBITr
  { 1, 1, 2, 18, 21 }, // 169 IIC_iBITsi
  { 1, 2, 3, 21, 25 }, // 170 IIC_iBITsr
  { 1, 1, 2, 65, 66 }, // 171 IIC_iCMOVi
  { 1, 3, 5, 73, 74 }, // 172 IIC_iCMOVix2
  { 1, 1, 2, 66, 68 }, // 173 IIC_iCMOVr
  { 1, 1, 2, 68, 70 }, // 174 IIC_iCMOVsi
  { 1, 1, 2, 70, 73 }, // 175 IIC_iCMOVsr
  { 1, 1, 2, 38, 39 }, // 176 IIC_iCMPi
  { 1, 1, 2, 39, 41 }, // 177 IIC_iCMPr
  { 1, 1, 2, 41, 43 }, // 178 IIC_iCMPsi
  { 1, 2, 3, 43, 46 }, // 179 IIC_iCMPsr
  { 1, 1, 2, 31, 34 }, // 180 IIC_iEXTAr
  { 1, 2, 3, 34, 38 }, // 181 IIC_iEXTAsr
  { 1, 1, 2, 29, 31 }, // 182 IIC_iEXTr
  { 1, 1, 2, 105, 107 }, // 183 IIC_iLoad_bh_i
  { 1, 1, 2, 127, 130 }, // 184 IIC_iLoad_bh_iu
  { 1, 1, 2, 112, 115 }, // 185 IIC_iLoad_bh_r
  { 1, 1, 2, 134, 138 }, // 186 IIC_iLoad_bh_ru
  { 1, 2, 3, 121, 124 }, // 187 IIC_iLoad_bh_si
  { 1, 2, 3, 146, 150 }, // 188 IIC_iLoad_bh_siu
  { 1, 1, 2, 107, 109 }, // 189 IIC_iLoad_d_i
  { 1, 1, 2, 115, 118 }, // 190 IIC_iLoad_d_r
  { 1, 1, 2, 138, 142 }, // 191 IIC_iLoad_d_ru
  { 1, 1, 2, 103, 105 }, // 192 IIC_iLoad_i
  { 1, 1, 2, 124, 127 }, // 193 IIC_iLoad_iu
  { 0, 8, 9, 150, 155 }, // 194 IIC_iLoad_m
  { 0, 9, 11, 160, 165 }, // 195 IIC_iLoad_mBr
  { 0, 8, 9, 155, 160 }, // 196 IIC_iLoad_mu
  { 1, 1, 2, 109, 112 }, // 197 IIC_iLoad_r
  { 1, 1, 2, 130, 134 }, // 198 IIC_iLoad_ru
  { 1, 2, 3, 118, 121 }, // 199 IIC_iLoad_si
  { 1, 2, 3, 142, 146 }, // 200 IIC_iLoad_siu
  { 1, 3, 5, 165, 167 }, // 201 IIC_iLoadiALU
  { 1, 1, 2, 85, 89 }, // 202 IIC_iMAC16
  { 1, 2, 3, 92, 96 }, // 203 IIC_iMAC32
  { 1, 8, 9, 99, 103 }, // 204 IIC_iMAC64
  { 1, 1, 2, 54, 55 }, // 205 IIC_iMOVi
  { 1, 3, 5, 62, 63 }, // 206 IIC_iMOVix2
  { 1, 5, 8, 63, 64 }, // 207 IIC_iMOVix2addpc
  { 1, 5, 8, 64, 65 }, // 208 IIC_iMOVix2ld
  { 1, 1, 2, 55, 57 }, // 209 IIC_iMOVr
  { 1, 1, 2, 57, 59 }, // 210 IIC_iMOVsi
  { 1, 2, 3, 59, 62 }, // 211 IIC_iMOVsr
  { 1, 1, 2, 82, 85 }, // 212 IIC_iMUL16
  { 1, 2, 3, 89, 92 }, // 213 IIC_iMUL32
  { 1, 8, 9, 96, 99 }, // 214 IIC_iMUL64
  { 1, 1, 2, 74, 75 }, // 215 IIC_iMVNi
  { 1, 1, 2, 75, 77 }, // 216 IIC_iMVNr
  { 1, 1, 2, 77, 79 }, // 217 IIC_iMVNsi
  { 1, 2, 3, 79, 82 }, // 218 IIC_iMVNsr
  { 0, 8, 9, 167, 170 }, // 219 IIC_iPop
  { 0, 9, 11, 170, 173 }, // 220 IIC_iPop_Br
  { 1, 1, 2, 175, 177 }, // 221 IIC_iStore_bh_i
  { 1, 1, 2, 197, 200 }, // 222 IIC_iStore_bh_iu
  { 1, 1, 2, 182, 185 }, // 223 IIC_iStore_bh_r
  { 1, 1, 2, 204, 208 }, // 224 IIC_iStore_bh_ru
  { 1, 2, 3, 191, 194 }, // 225 IIC_iStore_bh_si
  { 1, 2, 3, 216, 220 }, // 226 IIC_iStore_bh_siu
  { 1, 1, 2, 177, 179 }, // 227 IIC_iStore_d_i
  { 1, 1, 2, 185, 188 }, // 228 IIC_iStore_d_r
  { 1, 1, 2, 208, 212 }, // 229 IIC_iStore_d_ru
  { 1, 1, 2, 173, 175 }, // 230 IIC_iStore_i
  { 1, 1, 2, 194, 197 }, // 231 IIC_iStore_iu
  { 0, 8, 9, 0, 0 }, // 232 IIC_iStore_m
  { 0, 8, 9, 220, 221 }, // 233 IIC_iStore_mu
  { 1, 1, 2, 179, 182 }, // 234 IIC_iStore_r
  { 1, 1, 2, 200, 204 }, // 235 IIC_iStore_ru
  { 1, 2, 3, 188, 191 }, // 236 IIC_iStore_si
  { 1, 2, 3, 212, 216 }, // 237 IIC_iStore_siu
  { 1, 1, 2, 46, 47 }, // 238 IIC_iTSTi
  { 1, 1, 2, 47, 49 }, // 239 IIC_iTSTr
  { 1, 1, 2, 49, 51 }, // 240 IIC_iTSTsi
  { 1, 2, 3, 51, 54 }, // 241 IIC_iTSTsr
  { 1, 1, 2, 25, 27 }, // 242 IIC_iUNAr
  { 1, 1, 2, 27, 29 }, // 243 IIC_iUNAsi
  { 1, 0, 0, 0, 0 }, // 244 NoItinerary
  { 1, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary CortexA8Itineraries[] = {
  { 1, 13, 14, 0, 0 }, // 0 IIC_Br
  { 1, 13, 14, 547, 549 }, // 1 IIC_Preload
  { 1, 43, 45, 1085, 1089 }, // 2 IIC_VABAD
  { 1, 98, 100, 1089, 1093 }, // 3 IIC_VABAQ
  { 1, 43, 45, 958, 961 }, // 4 IIC_VBIND
  { 1, 98, 100, 967, 970 }, // 5 IIC_VBINQ
  { 1, 43, 45, 1049, 1052 }, // 6 IIC_VBINi4D
  { 1, 43, 45, 1052, 1055 }, // 7 IIC_VBINi4Q
  { 1, 43, 45, 1043, 1046 }, // 8 IIC_VBINiD
  { 1, 43, 45, 1046, 1049 }, // 9 IIC_VBINiQ
  { 1, 43, 45, 1029, 1032 }, // 10 IIC_VCNTiD
  { 1, 98, 100, 1032, 1035 }, // 11 IIC_VCNTiQ
  { 1, 41, 43, 1121, 1124 }, // 12 IIC_VEXTD
  { 1, 100, 102, 1124, 1127 }, // 13 IIC_VEXTQ
  { 1, 43, 45, 1015, 1019 }, // 14 IIC_VFMACD
  { 1, 98, 100, 1019, 1023 }, // 15 IIC_VFMACQ
  { 1, 43, 45, 964, 967 }, // 16 IIC_VFMULD
  { 1, 43, 45, 970, 973 }, // 17 IIC_VFMULQ
  { 1, 80, 83, 644, 646 }, // 18 IIC_VLD1
  { 1, 89, 92, 686, 688 }, // 19 IIC_VLD1dup
  { 1, 89, 92, 688, 692 }, // 20 IIC_VLD1dupu
  { 1, 86, 89, 676, 680 }, // 21 IIC_VLD1ln
  { 1, 86, 89, 680, 686 }, // 22 IIC_VLD1lnu
  { 1, 80, 83, 658, 661 }, // 23 IIC_VLD1u
  { 1, 80, 83, 646, 649 }, // 24 IIC_VLD1x2
  { 1, 80, 83, 661, 665 }, // 25 IIC_VLD1x2u
  { 1, 83, 86, 649, 653 }, // 26 IIC_VLD1x3
  { 1, 83, 86, 665, 670 }, // 27 IIC_VLD1x3u
  { 1, 83, 86, 653, 658 }, // 28 IIC_VLD1x4
  { 1, 83, 86, 670, 676 }, // 29 IIC_VLD1x4u
  { 1, 80, 83, 692, 695 }, // 30 IIC_VLD2
  { 1, 89, 92, 726, 729 }, // 31 IIC_VLD2dup
  { 1, 89, 92, 729, 734 }, // 32 IIC_VLD2dupu
  { 1, 83, 86, 700, 706 }, // 33 IIC_VLD2ln
  { 1, 83, 86, 718, 726 }, // 34 IIC_VLD2lnu
  { 1, 80, 83, 706, 712 }, // 35 IIC_VLD2u
  { 1, 83, 86, 695, 700 }, // 36 IIC_VLD2x2
  { 1, 83, 86, 712, 718 }, // 37 IIC_VLD2x2u
  { 1, 92, 95, 734, 738 }, // 38 IIC_VLD3
  { 1, 86, 89, 761, 765 }, // 39 IIC_VLD3dup
  { 1, 86, 89, 765, 771 }, // 40 IIC_VLD3dupu
  { 1, 95, 98, 738, 746 }, // 41 IIC_VLD3ln
  { 1, 95, 98, 751, 761 }, // 42 IIC_VLD3lnu
  { 1, 92, 95, 746, 751 }, // 43 IIC_VLD3u
  { 1, 92, 95, 771, 776 }, // 44 IIC_VLD4
  { 1, 86, 89, 804, 809 }, // 45 IIC_VLD4dup
  { 1, 86, 89, 809, 816 }, // 46 IIC_VLD4dupu
  { 1, 95, 98, 776, 786 }, // 47 IIC_VLD4ln
  { 1, 95, 98, 792, 804 }, // 48 IIC_VLD4lnu
  { 1, 92, 95, 786, 792 }, // 49 IIC_VLD4u
  { 1, 43, 45, 1007, 1011 }, // 50 IIC_VMACD
  { 1, 98, 100, 1011, 1015 }, // 51 IIC_VMACQ
  { 1, 43, 45, 1105, 1109 }, // 52 IIC_VMACi16D
  { 1, 98, 100, 1113, 1117 }, // 53 IIC_VMACi16Q
  { 1, 98, 100, 1109, 1113 }, // 54 IIC_VMACi32D
  { 1, 106, 110, 1117, 1121 }, // 55 IIC_VMACi32Q
  { 1, 43, 45, 973, 975 }, // 56 IIC_VMOV
  { 1, 41, 43, 976, 978 }, // 57 IIC_VMOVD
  { 1, 41, 43, 987, 990 }, // 58 IIC_VMOVDI
  { 1, 41, 43, 982, 985 }, // 59 IIC_VMOVID
  { 1, 41, 43, 980, 982 }, // 60 IIC_VMOVIS
  { 1, 100, 102, 990, 993 }, // 61 IIC_VMOVISL
  { 1, 43, 45, 975, 976 }, // 62 IIC_VMOVImm
  { 1, 43, 45, 993, 995 }, // 63 IIC_VMOVN
  { 1, 100, 102, 978, 980 }, // 64 IIC_VMOVQ
  { 1, 41, 43, 985, 987 }, // 65 IIC_VMOVSI
  { 1, 43, 45, 1093, 1096 }, // 66 IIC_VMULi16D
  { 1, 98, 100, 1099, 1102 }, // 67 IIC_VMULi16Q
  { 1, 98, 100, 1096, 1099 }, // 68 IIC_VMULi32D
  { 1, 106, 110, 1102, 1105 }, // 69 IIC_VMULi32Q
  { 1, 43, 45, 1079, 1082 }, // 70 IIC_VPALiD
  { 1, 98, 100, 1082, 1085 }, // 71 IIC_VPALiQ
  { 1, 43, 45, 961, 964 }, // 72 IIC_VPBIND
  { 1, 41, 43, 995, 999 }, // 73 IIC_VPERMD
  { 1, 100, 102, 999, 1003 }, // 74 IIC_VPERMQ
  { 1, 102, 106, 1003, 1007 }, // 75 IIC_VPERMQ3
  { 1, 43, 45, 1039, 1041 }, // 76 IIC_VQUNAiD
  { 1, 43, 45, 1041, 1043 }, // 77 IIC_VQUNAiQ
  { 1, 43, 45, 1023, 1026 }, // 78 IIC_VRECSD
  { 1, 98, 100, 1026, 1029 }, // 79 IIC_VRECSQ
  { 1, 43, 45, 1073, 1076 }, // 80 IIC_VSHLi4D
  { 1, 98, 100, 1076, 1079 }, // 81 IIC_VSHLi4Q
  { 1, 43, 45, 1067, 1070 }, // 82 IIC_VSHLiD
  { 1, 98, 100, 1070, 1073 }, // 83 IIC_VSHLiQ
  { 1, 80, 83, 816, 819 }, // 84 IIC_VST1
  { 1, 89, 92, 860, 863 }, // 85 IIC_VST1ln
  { 1, 89, 92, 863, 868 }, // 86 IIC_VST1lnu
  { 1, 80, 83, 834, 839 }, // 87 IIC_VST1u
  { 1, 80, 83, 819, 823 }, // 88 IIC_VST1x2
  { 1, 80, 83, 839, 845 }, // 89 IIC_VST1x2u
  { 1, 83, 86, 823, 828 }, // 90 IIC_VST1x3
  { 1, 83, 86, 845, 852 }, // 91 IIC_VST1x3u
  { 1, 83, 86, 828, 834 }, // 92 IIC_VST1x4
  { 1, 83, 86, 852, 860 }, // 93 IIC_VST1x4u
  { 1, 80, 83, 868, 872 }, // 94 IIC_VST2
  { 1, 80, 83, 892, 896 }, // 95 IIC_VST2ln
  { 1, 80, 83, 896, 902 }, // 96 IIC_VST2lnu
  { 1, 80, 83, 878, 884 }, // 97 IIC_VST2u
  { 1, 92, 95, 872, 878 }, // 98 IIC_VST2x2
  { 1, 92, 95, 884, 892 }, // 99 IIC_VST2x2u
  { 1, 83, 86, 902, 907 }, // 100 IIC_VST3
  { 1, 83, 86, 914, 919 }, // 101 IIC_VST3ln
  { 1, 83, 86, 919, 926 }, // 102 IIC_VST3lnu
  { 1, 83, 86, 907, 914 }, // 103 IIC_VST3u
  { 1, 92, 95, 926, 932 }, // 104 IIC_VST4
  { 1, 92, 95, 940, 946 }, // 105 IIC_VST4ln
  { 1, 92, 95, 946, 954 }, // 106 IIC_VST4lnu
  { 1, 92, 95, 932, 940 }, // 107 IIC_VST4u
  { 1, 43, 45, 1061, 1064 }, // 108 IIC_VSUBi4D
  { 1, 43, 45, 1064, 1067 }, // 109 IIC_VSUBi4Q
  { 1, 43, 45, 1055, 1058 }, // 110 IIC_VSUBiD
  { 1, 43, 45, 1058, 1061 }, // 111 IIC_VSUBiQ
  { 1, 100, 102, 1127, 1130 }, // 112 IIC_VTB1
  { 1, 100, 102, 1130, 1134 }, // 113 IIC_VTB2
  { 1, 102, 106, 1134, 1139 }, // 114 IIC_VTB3
  { 1, 102, 106, 1139, 1145 }, // 115 IIC_VTB4
  { 1, 100, 102, 1145, 1149 }, // 116 IIC_VTBX1
  { 1, 100, 102, 1149, 1154 }, // 117 IIC_VTBX2
  { 1, 102, 106, 1154, 1160 }, // 118 IIC_VTBX3
  { 1, 102, 106, 1160, 1167 }, // 119 IIC_VTBX4
  { 1, 43, 45, 954, 956 }, // 120 IIC_VUNAD
  { 1, 98, 100, 956, 958 }, // 121 IIC_VUNAQ
  { 1, 43, 45, 1035, 1037 }, // 122 IIC_VUNAiD
  { 1, 43, 45, 1037, 1039 }, // 123 IIC_VUNAiQ
  { 1, 43, 45, 570, 573 }, // 124 IIC_fpALU32
  { 1, 57, 60, 573, 576 }, // 125 IIC_fpALU64
  { 1, 43, 45, 554, 556 }, // 126 IIC_fpCMP32
  { 1, 45, 48, 556, 558 }, // 127 IIC_fpCMP64
  { 1, 54, 57, 564, 566 }, // 128 IIC_fpCVTDI
  { 1, 51, 54, 560, 562 }, // 129 IIC_fpCVTDS
  { 1, 0, 0, 0, 0 }, // 130 IIC_fpCVTHS
  { 1, 54, 57, 568, 570 }, // 131 IIC_fpCVTID
  { 1, 43, 45, 566, 568 }, // 132 IIC_fpCVTIS
  { 1, 48, 51, 558, 560 }, // 133 IIC_fpCVTSD
  { 1, 0, 0, 0, 0 }, // 134 IIC_fpCVTSH
  { 1, 43, 45, 562, 564 }, // 135 IIC_fpCVTSI
  { 1, 66, 69, 598, 601 }, // 136 IIC_fpDIV32
  { 1, 69, 72, 601, 604 }, // 137 IIC_fpDIV64
  { 1, 43, 45, 590, 594 }, // 138 IIC_fpFMAC32
  { 1, 63, 66, 594, 598 }, // 139 IIC_fpFMAC64
  { 1, 72, 75, 618, 620 }, // 140 IIC_fpLoad32
  { 1, 72, 75, 620, 622 }, // 141 IIC_fpLoad64
  { 0, 75, 80, 622, 626 }, // 142 IIC_fpLoad_m
  { 0, 75, 80, 626, 631 }, // 143 IIC_fpLoad_mu
  { 1, 43, 45, 582, 586 }, // 144 IIC_fpMAC32
  { 1, 63, 66, 586, 590 }, // 145 IIC_fpMAC64
  { 1, 43, 45, 615, 618 }, // 146 IIC_fpMOVDI
  { 1, 43, 45, 610, 613 }, // 147 IIC_fpMOVID
  { 1, 43, 45, 608, 610 }, // 148 IIC_fpMOVIS
  { 1, 43, 45, 613, 615 }, // 149 IIC_fpMOVSI
  { 1, 43, 45, 576, 579 }, // 150 IIC_fpMUL32
  { 1, 60, 63, 579, 582 }, // 151 IIC_fpMUL64
  { 1, 63, 66, 604, 606 }, // 152 IIC_fpSQRT32
  { 1, 69, 72, 606, 608 }, // 153 IIC_fpSQRT64
  { 1, 41, 43, 549, 550 }, // 154 IIC_fpSTAT
  { 1, 72, 75, 631, 633 }, // 155 IIC_fpStore32
  { 1, 72, 75, 633, 635 }, // 156 IIC_fpStore64
  { 0, 75, 80, 635, 639 }, // 157 IIC_fpStore_m
  { 0, 75, 80, 639, 644 }, // 158 IIC_fpStore_mu
  { 1, 43, 45, 550, 552 }, // 159 IIC_fpUNA32
  { 1, 45, 48, 552, 554 }, // 160 IIC_fpUNA64
  { 1, 13, 14, 322, 324 }, // 161 IIC_iALUi
  { 1, 13, 14, 324, 327 }, // 162 IIC_iALUr
  { 1, 13, 14, 327, 330 }, // 163 IIC_iALUsi
  { 1, 13, 14, 330, 333 }, // 164 IIC_iALUsir
  { 1, 13, 14, 333, 337 }, // 165 IIC_iALUsr
  { 1, 13, 14, 0, 0 }, // 166 IIC_iALUx
  { 1, 13, 14, 337, 339 }, // 167 IIC_iBITi
  { 1, 13, 14, 339, 342 }, // 168 IIC_iBITr
  { 1, 13, 14, 342, 345 }, // 169 IIC_iBITsi
  { 1, 13, 14, 345, 349 }, // 170 IIC_iBITsr
  { 1, 13, 14, 389, 390 }, // 171 IIC_iCMOVi
  { 1, 14, 16, 397, 399 }, // 172 IIC_iCMOVix2
  { 1, 13, 14, 390, 392 }, // 173 IIC_iCMOVr
  { 1, 13, 14, 392, 394 }, // 174 IIC_iCMOVsi
  { 1, 13, 14, 394, 397 }, // 175 IIC_iCMOVsr
  { 1, 13, 14, 362, 363 }, // 176 IIC_iCMPi
  { 1, 13, 14, 363, 365 }, // 177 IIC_iCMPr
  { 1, 13, 14, 365, 367 }, // 178 IIC_iCMPsi
  { 1, 13, 14, 367, 370 }, // 179 IIC_iCMPsr
  { 1, 13, 14, 355, 358 }, // 180 IIC_iEXTAr
  { 1, 13, 14, 358, 362 }, // 181 IIC_iEXTAsr
  { 1, 13, 14, 353, 355 }, // 182 IIC_iEXTr
  { 1, 25, 27, 431, 433 }, // 183 IIC_iLoad_bh_i
  { 1, 25, 27, 453, 456 }, // 184 IIC_iLoad_bh_iu
  { 1, 25, 27, 438, 441 }, // 185 IIC_iLoad_bh_r
  { 1, 25, 27, 460, 464 }, // 186 IIC_iLoad_bh_ru
  { 1, 27, 29, 447, 450 }, // 187 IIC_iLoad_bh_si
  { 1, 29, 31, 472, 476 }, // 188 IIC_iLoad_bh_siu
  { 1, 25, 27, 433, 435 }, // 189 IIC_iLoad_d_i
  { 1, 25, 27, 441, 444 }, // 190 IIC_iLoad_d_r
  { 1, 25, 27, 464, 468 }, // 191 IIC_iLoad_d_ru
  { 1, 25, 27, 429, 431 }, // 192 IIC_iLoad_i
  { 1, 25, 27, 450, 453 }, // 193 IIC_iLoad_iu
  { 0, 31, 33, 476, 481 }, // 194 IIC_iLoad_m
  { 0, 35, 38, 486, 491 }, // 195 IIC_iLoad_mBr
  { 0, 33, 35, 481, 486 }, // 196 IIC_iLoad_mu
  { 1, 25, 27, 435, 438 }, // 197 IIC_iLoad_r
  { 1, 25, 27, 456, 460 }, // 198 IIC_iLoad_ru
  { 1, 27, 29, 444, 447 }, // 199 IIC_iLoad_si
  { 1, 29, 31, 468, 472 }, // 200 IIC_iLoad_siu
  { 1, 38, 41, 497, 499 }, // 201 IIC_iLoadiALU
  { 1, 23, 24, 410, 414 }, // 202 IIC_iMAC16
  { 1, 23, 24, 417, 421 }, // 203 IIC_iMAC32
  { 1, 24, 25, 425, 429 }, // 204 IIC_iMAC64
  { 1, 13, 14, 378, 379 }, // 205 IIC_iMOVi
  { 1, 14, 16, 386, 387 }, // 206 IIC_iMOVix2
  { 1, 16, 19, 387, 388 }, // 207 IIC_iMOVix2addpc
  { 1, 19, 22, 388, 389 }, // 208 IIC_iMOVix2ld
  { 1, 13, 14, 379, 381 }, // 209 IIC_iMOVr
  { 1, 13, 14, 381, 383 }, // 210 IIC_iMOVsi
  { 1, 13, 14, 383, 386 }, // 211 IIC_iMOVsr
  { 1, 22, 23, 407, 410 }, // 212 IIC_iMUL16
  { 1, 23, 24, 414, 417 }, // 213 IIC_iMUL32
  { 1, 24, 25, 421, 425 }, // 214 IIC_iMUL64
  { 1, 13, 14, 399, 400 }, // 215 IIC_iMVNi
  { 1, 13, 14, 400, 402 }, // 216 IIC_iMVNr
  { 1, 13, 14, 402, 404 }, // 217 IIC_iMVNsi
  { 1, 13, 14, 404, 407 }, // 218 IIC_iMVNsr
  { 0, 33, 35, 491, 494 }, // 219 IIC_iPop
  { 0, 35, 38, 494, 497 }, // 220 IIC_iPop_Br
  { 1, 25, 27, 501, 503 }, // 221 IIC_iStore_bh_i
  { 1, 25, 27, 523, 526 }, // 222 IIC_iStore_bh_iu
  { 1, 25, 27, 508, 511 }, // 223 IIC_iStore_bh_r
  { 1, 25, 27, 530, 534 }, // 224 IIC_iStore_bh_ru
  { 1, 29, 31, 517, 520 }, // 225 IIC_iStore_bh_si
  { 1, 29, 31, 542, 546 }, // 226 IIC_iStore_bh_siu
  { 1, 25, 27, 503, 505 }, // 227 IIC_iStore_d_i
  { 1, 25, 27, 511, 514 }, // 228 IIC_iStore_d_r
  { 1, 25, 27, 534, 538 }, // 229 IIC_iStore_d_ru
  { 1, 25, 27, 499, 501 }, // 230 IIC_iStore_i
  { 1, 25, 27, 520, 523 }, // 231 IIC_iStore_iu
  { 0, 31, 33, 0, 0 }, // 232 IIC_iStore_m
  { 0, 31, 33, 546, 547 }, // 233 IIC_iStore_mu
  { 1, 25, 27, 505, 508 }, // 234 IIC_iStore_r
  { 1, 25, 27, 526, 530 }, // 235 IIC_iStore_ru
  { 1, 29, 31, 514, 517 }, // 236 IIC_iStore_si
  { 1, 29, 31, 538, 542 }, // 237 IIC_iStore_siu
  { 1, 13, 14, 370, 371 }, // 238 IIC_iTSTi
  { 1, 13, 14, 371, 373 }, // 239 IIC_iTSTr
  { 1, 13, 14, 373, 375 }, // 240 IIC_iTSTsi
  { 1, 13, 14, 375, 378 }, // 241 IIC_iTSTsr
  { 1, 13, 14, 349, 351 }, // 242 IIC_iUNAr
  { 1, 13, 14, 351, 353 }, // 243 IIC_iUNAsi
  { 1, 0, 0, 0, 0 }, // 244 NoItinerary
  { 1, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary CortexA9Itineraries[] = {
  { 1, 177, 180, 0, 0 }, // 0 IIC_Br
  { 1, 176, 177, 1393, 1395 }, // 1 IIC_Preload
  { 1, 297, 302, 1852, 1856 }, // 2 IIC_VABAD
  { 1, 307, 312, 1856, 1860 }, // 3 IIC_VABAQ
  { 1, 297, 302, 1920, 1923 }, // 4 IIC_VBIND
  { 1, 302, 307, 1929, 1932 }, // 5 IIC_VBINQ
  { 1, 297, 302, 1834, 1837 }, // 6 IIC_VBINi4D
  { 1, 297, 302, 1837, 1840 }, // 7 IIC_VBINi4Q
  { 1, 297, 302, 1810, 1813 }, // 8 IIC_VBINiD
  { 1, 297, 302, 1813, 1816 }, // 9 IIC_VBINiQ
  { 1, 297, 302, 1846, 1849 }, // 10 IIC_VCNTiD
  { 1, 302, 307, 1849, 1852 }, // 11 IIC_VCNTiQ
  { 1, 297, 302, 1969, 1972 }, // 12 IIC_VEXTD
  { 1, 302, 307, 1972, 1975 }, // 13 IIC_VEXTQ
  { 1, 302, 307, 1943, 1947 }, // 14 IIC_VFMACD
  { 1, 312, 317, 1947, 1951 }, // 15 IIC_VFMACQ
  { 1, 297, 302, 1926, 1929 }, // 16 IIC_VFMULD
  { 1, 332, 337, 1932, 1935 }, // 17 IIC_VFMULQ
  { 1, 249, 255, 1492, 1494 }, // 18 IIC_VLD1
  { 1, 249, 255, 1534, 1536 }, // 19 IIC_VLD1dup
  { 1, 249, 255, 1536, 1540 }, // 20 IIC_VLD1dupu
  { 1, 255, 261, 1524, 1528 }, // 21 IIC_VLD1ln
  { 1, 255, 261, 1528, 1534 }, // 22 IIC_VLD1lnu
  { 1, 249, 255, 1506, 1509 }, // 23 IIC_VLD1u
  { 1, 249, 255, 1494, 1497 }, // 24 IIC_VLD1x2
  { 1, 249, 255, 1509, 1513 }, // 25 IIC_VLD1x2u
  { 1, 255, 261, 1497, 1501 }, // 26 IIC_VLD1x3
  { 1, 255, 261, 1513, 1518 }, // 27 IIC_VLD1x3u
  { 1, 255, 261, 1501, 1506 }, // 28 IIC_VLD1x4
  { 1, 255, 261, 1518, 1524 }, // 29 IIC_VLD1x4u
  { 1, 249, 255, 1540, 1543 }, // 30 IIC_VLD2
  { 1, 249, 255, 1574, 1577 }, // 31 IIC_VLD2dup
  { 1, 249, 255, 1577, 1582 }, // 32 IIC_VLD2dupu
  { 1, 255, 261, 1548, 1554 }, // 33 IIC_VLD2ln
  { 1, 255, 261, 1566, 1574 }, // 34 IIC_VLD2lnu
  { 1, 249, 255, 1554, 1560 }, // 35 IIC_VLD2u
  { 1, 255, 261, 1543, 1548 }, // 36 IIC_VLD2x2
  { 1, 255, 261, 1560, 1566 }, // 37 IIC_VLD2x2u
  { 1, 261, 267, 1582, 1586 }, // 38 IIC_VLD3
  { 1, 261, 267, 1609, 1613 }, // 39 IIC_VLD3dup
  { 1, 261, 267, 1613, 1619 }, // 40 IIC_VLD3dupu
  { 1, 267, 273, 1586, 1594 }, // 41 IIC_VLD3ln
  { 1, 267, 273, 1599, 1609 }, // 42 IIC_VLD3lnu
  { 1, 261, 267, 1594, 1599 }, // 43 IIC_VLD3u
  { 1, 261, 267, 1619, 1624 }, // 44 IIC_VLD4
  { 1, 255, 261, 1652, 1657 }, // 45 IIC_VLD4dup
  { 1, 255, 261, 1657, 1664 }, // 46 IIC_VLD4dupu
  { 1, 273, 279, 1624, 1634 }, // 47 IIC_VLD4ln
  { 1, 273, 279, 1640, 1652 }, // 48 IIC_VLD4lnu
  { 1, 261, 267, 1634, 1640 }, // 49 IIC_VLD4u
  { 1, 302, 307, 1935, 1939 }, // 50 IIC_VMACD
  { 1, 312, 317, 1939, 1943 }, // 51 IIC_VMACQ
  { 1, 297, 302, 1878, 1882 }, // 52 IIC_VMACi16D
  { 1, 302, 307, 1886, 1890 }, // 53 IIC_VMACi16Q
  { 1, 302, 307, 1882, 1886 }, // 54 IIC_VMACi32D
  { 1, 312, 317, 1890, 1894 }, // 55 IIC_VMACi32Q
  { 1, 317, 322, 1894, 1896 }, // 56 IIC_VMOV
  { 1, 297, 302, 1897, 1899 }, // 57 IIC_VMOVD
  { 1, 322, 327, 1908, 1911 }, // 58 IIC_VMOVDI
  { 1, 322, 327, 1903, 1906 }, // 59 IIC_VMOVID
  { 1, 322, 327, 1901, 1903 }, // 60 IIC_VMOVIS
  { 1, 327, 332, 1911, 1914 }, // 61 IIC_VMOVISL
  { 1, 297, 302, 1896, 1897 }, // 62 IIC_VMOVImm
  { 1, 297, 302, 1914, 1916 }, // 63 IIC_VMOVN
  { 1, 297, 302, 1899, 1901 }, // 64 IIC_VMOVQ
  { 1, 322, 327, 1906, 1908 }, // 65 IIC_VMOVSI
  { 1, 297, 302, 1866, 1869 }, // 66 IIC_VMULi16D
  { 1, 302, 307, 1869, 1872 }, // 67 IIC_VMULi16Q
  { 1, 302, 307, 1872, 1875 }, // 68 IIC_VMULi32D
  { 1, 312, 317, 1875, 1878 }, // 69 IIC_VMULi32Q
  { 1, 297, 302, 1860, 1863 }, // 70 IIC_VPALiD
  { 1, 307, 312, 1863, 1866 }, // 71 IIC_VPALiQ
  { 1, 297, 302, 1923, 1926 }, // 72 IIC_VPBIND
  { 1, 297, 302, 1957, 1961 }, // 73 IIC_VPERMD
  { 1, 302, 307, 1961, 1965 }, // 74 IIC_VPERMQ
  { 1, 347, 352, 1965, 1969 }, // 75 IIC_VPERMQ3
  { 1, 297, 302, 1806, 1808 }, // 76 IIC_VQUNAiD
  { 1, 297, 302, 1808, 1810 }, // 77 IIC_VQUNAiQ
  { 1, 337, 342, 1951, 1954 }, // 78 IIC_VRECSD
  { 1, 342, 347, 1954, 1957 }, // 79 IIC_VRECSQ
  { 1, 297, 302, 1828, 1831 }, // 80 IIC_VSHLi4D
  { 1, 297, 302, 1831, 1834 }, // 81 IIC_VSHLi4Q
  { 1, 297, 302, 1822, 1825 }, // 82 IIC_VSHLiD
  { 1, 297, 302, 1825, 1828 }, // 83 IIC_VSHLiQ
  { 1, 279, 285, 1664, 1667 }, // 84 IIC_VST1
  { 1, 279, 285, 1708, 1711 }, // 85 IIC_VST1ln
  { 1, 279, 285, 1711, 1716 }, // 86 IIC_VST1lnu
  { 1, 279, 285, 1682, 1687 }, // 87 IIC_VST1u
  { 1, 279, 285, 1667, 1671 }, // 88 IIC_VST1x2
  { 1, 279, 285, 1687, 1693 }, // 89 IIC_VST1x2u
  { 1, 285, 291, 1671, 1676 }, // 90 IIC_VST1x3
  { 1, 285, 291, 1693, 1700 }, // 91 IIC_VST1x3u
  { 1, 285, 291, 1676, 1682 }, // 92 IIC_VST1x4
  { 1, 285, 291, 1700, 1708 }, // 93 IIC_VST1x4u
  { 1, 279, 285, 1716, 1720 }, // 94 IIC_VST2
  { 1, 279, 285, 1740, 1744 }, // 95 IIC_VST2ln
  { 1, 279, 285, 1744, 1750 }, // 96 IIC_VST2lnu
  { 1, 279, 285, 1726, 1732 }, // 97 IIC_VST2u
  { 1, 291, 297, 1720, 1726 }, // 98 IIC_VST2x2
  { 1, 291, 297, 1732, 1740 }, // 99 IIC_VST2x2u
  { 1, 285, 291, 1750, 1755 }, // 100 IIC_VST3
  { 1, 291, 297, 1762, 1767 }, // 101 IIC_VST3ln
  { 1, 291, 297, 1767, 1774 }, // 102 IIC_VST3lnu
  { 1, 285, 291, 1755, 1762 }, // 103 IIC_VST3u
  { 1, 285, 291, 1774, 1780 }, // 104 IIC_VST4
  { 1, 285, 291, 1788, 1794 }, // 105 IIC_VST4ln
  { 1, 285, 291, 1794, 1802 }, // 106 IIC_VST4lnu
  { 1, 285, 291, 1780, 1788 }, // 107 IIC_VST4u
  { 1, 297, 302, 1840, 1843 }, // 108 IIC_VSUBi4D
  { 1, 297, 302, 1843, 1846 }, // 109 IIC_VSUBi4Q
  { 1, 297, 302, 1816, 1819 }, // 110 IIC_VSUBiD
  { 1, 297, 302, 1819, 1822 }, // 111 IIC_VSUBiQ
  { 1, 302, 307, 1975, 1978 }, // 112 IIC_VTB1
  { 1, 352, 357, 1978, 1982 }, // 113 IIC_VTB2
  { 1, 357, 362, 1982, 1987 }, // 114 IIC_VTB3
  { 1, 347, 352, 1987, 1993 }, // 115 IIC_VTB4
  { 1, 302, 307, 1993, 1997 }, // 116 IIC_VTBX1
  { 1, 302, 307, 1997, 2002 }, // 117 IIC_VTBX2
  { 1, 347, 352, 2002, 2008 }, // 118 IIC_VTBX3
  { 1, 362, 367, 2008, 2015 }, // 119 IIC_VTBX4
  { 1, 297, 302, 1916, 1918 }, // 120 IIC_VUNAD
  { 1, 302, 307, 1918, 1920 }, // 121 IIC_VUNAQ
  { 1, 297, 302, 1802, 1804 }, // 122 IIC_VUNAiD
  { 1, 297, 302, 1804, 1806 }, // 123 IIC_VUNAiQ
  { 1, 190, 195, 1420, 1423 }, // 124 IIC_fpALU32
  { 1, 190, 195, 1423, 1426 }, // 125 IIC_fpALU64
  { 1, 190, 195, 1400, 1402 }, // 126 IIC_fpCMP32
  { 1, 190, 195, 1402, 1404 }, // 127 IIC_fpCMP64
  { 1, 190, 195, 1414, 1416 }, // 128 IIC_fpCVTDI
  { 1, 190, 195, 1406, 1408 }, // 129 IIC_fpCVTDS
  { 1, 185, 190, 1410, 1412 }, // 130 IIC_fpCVTHS
  { 1, 190, 195, 1418, 1420 }, // 131 IIC_fpCVTID
  { 1, 190, 195, 1416, 1418 }, // 132 IIC_fpCVTIS
  { 1, 190, 195, 1404, 1406 }, // 133 IIC_fpCVTSD
  { 1, 190, 195, 1408, 1410 }, // 134 IIC_fpCVTSH
  { 1, 190, 195, 1412, 1414 }, // 135 IIC_fpCVTSI
  { 1, 215, 220, 1448, 1451 }, // 136 IIC_fpDIV32
  { 1, 220, 225, 1451, 1454 }, // 137 IIC_fpDIV64
  { 1, 205, 210, 1440, 1444 }, // 138 IIC_fpFMAC32
  { 1, 210, 215, 1444, 1448 }, // 139 IIC_fpFMAC64
  { 1, 237, 243, 1468, 1470 }, // 140 IIC_fpLoad32
  { 1, 237, 243, 1470, 1472 }, // 141 IIC_fpLoad64
  { 0, 243, 249, 1472, 1476 }, // 142 IIC_fpLoad_m
  { 0, 243, 249, 1476, 1480 }, // 143 IIC_fpLoad_mu
  { 1, 205, 210, 1432, 1436 }, // 144 IIC_fpMAC32
  { 1, 210, 215, 1436, 1440 }, // 145 IIC_fpMAC64
  { 1, 235, 237, 1465, 1468 }, // 146 IIC_fpMOVDI
  { 1, 185, 190, 1460, 1463 }, // 147 IIC_fpMOVID
  { 1, 185, 190, 1458, 1460 }, // 148 IIC_fpMOVIS
  { 1, 235, 237, 1463, 1465 }, // 149 IIC_fpMOVSI
  { 1, 195, 200, 1426, 1429 }, // 150 IIC_fpMUL32
  { 1, 200, 205, 1429, 1432 }, // 151 IIC_fpMUL64
  { 1, 225, 230, 1454, 1456 }, // 152 IIC_fpSQRT32
  { 1, 230, 235, 1456, 1458 }, // 153 IIC_fpSQRT64
  { 1, 180, 185, 1395, 1396 }, // 154 IIC_fpSTAT
  { 1, 237, 243, 1480, 1482 }, // 155 IIC_fpStore32
  { 1, 237, 243, 1482, 1484 }, // 156 IIC_fpStore64
  { 0, 243, 249, 1484, 1488 }, // 157 IIC_fpStore_m
  { 0, 243, 249, 1488, 1492 }, // 158 IIC_fpStore_mu
  { 1, 185, 190, 1396, 1398 }, // 159 IIC_fpUNA32
  { 1, 185, 190, 1398, 1400 }, // 160 IIC_fpUNA64
  { 1, 110, 112, 1186, 1188 }, // 161 IIC_iALUi
  { 1, 110, 112, 1188, 1191 }, // 162 IIC_iALUr
  { 1, 112, 114, 1191, 1194 }, // 163 IIC_iALUsi
  { 1, 112, 114, 1194, 1197 }, // 164 IIC_iALUsir
  { 1, 127, 129, 1197, 1201 }, // 165 IIC_iALUsr
  { 1, 110, 112, 0, 0 }, // 166 IIC_iALUx
  { 1, 110, 112, 1201, 1203 }, // 167 IIC_iBITi
  { 1, 110, 112, 1203, 1206 }, // 168 IIC_iBITr
  { 1, 112, 114, 1206, 1209 }, // 169 IIC_iBITsi
  { 1, 127, 129, 1209, 1213 }, // 170 IIC_iBITsr
  { 1, 110, 112, 1242, 1243 }, // 171 IIC_iCMOVi
  { 1, 129, 133, 1250, 1251 }, // 172 IIC_iCMOVix2
  { 1, 110, 112, 1243, 1245 }, // 173 IIC_iCMOVr
  { 1, 110, 112, 1245, 1247 }, // 174 IIC_iCMOVsi
  { 1, 112, 114, 1247, 1250 }, // 175 IIC_iCMOVsr
  { 1, 110, 112, 1226, 1227 }, // 176 IIC_iCMPi
  { 1, 110, 112, 1227, 1229 }, // 177 IIC_iCMPr
  { 1, 112, 114, 1229, 1231 }, // 178 IIC_iCMPsi
  { 1, 127, 129, 1231, 1234 }, // 179 IIC_iCMPsr
  { 1, 112, 114, 1219, 1222 }, // 180 IIC_iEXTAr
  { 1, 127, 129, 1222, 1226 }, // 181 IIC_iEXTAsr
  { 1, 110, 112, 1217, 1219 }, // 182 IIC_iEXTr
  { 1, 141, 145, 1275, 1277 }, // 183 IIC_iLoad_bh_i
  { 1, 141, 145, 1299, 1302 }, // 184 IIC_iLoad_bh_iu
  { 1, 141, 145, 1283, 1286 }, // 185 IIC_iLoad_bh_r
  { 1, 141, 145, 1306, 1310 }, // 186 IIC_iLoad_bh_ru
  { 1, 141, 145, 1293, 1296 }, // 187 IIC_iLoad_bh_si
  { 1, 141, 145, 1318, 1322 }, // 188 IIC_iLoad_bh_siu
  { 1, 141, 145, 1277, 1280 }, // 189 IIC_iLoad_d_i
  { 1, 141, 145, 1286, 1290 }, // 190 IIC_iLoad_d_r
  { 1, 141, 145, 1310, 1314 }, // 191 IIC_iLoad_d_ru
  { 1, 137, 141, 1273, 1275 }, // 192 IIC_iLoad_i
  { 1, 137, 141, 1296, 1299 }, // 193 IIC_iLoad_iu
  { 0, 149, 153, 1322, 1327 }, // 194 IIC_iLoad_m
  { 0, 153, 158, 1332, 1337 }, // 195 IIC_iLoad_mBr
  { 0, 149, 153, 1327, 1332 }, // 196 IIC_iLoad_mu
  { 1, 137, 141, 1280, 1283 }, // 197 IIC_iLoad_r
  { 1, 137, 141, 1302, 1306 }, // 198 IIC_iLoad_ru
  { 1, 145, 149, 1290, 1293 }, // 199 IIC_iLoad_si
  { 1, 137, 141, 1314, 1318 }, // 200 IIC_iLoad_siu
  { 1, 163, 168, 1343, 1345 }, // 201 IIC_iLoadiALU
  { 1, 133, 135, 1254, 1258 }, // 202 IIC_iMAC16
  { 1, 133, 135, 1261, 1265 }, // 203 IIC_iMAC32
  { 1, 135, 137, 1269, 1273 }, // 204 IIC_iMAC64
  { 1, 110, 112, 1167, 1168 }, // 205 IIC_iMOVi
  { 1, 114, 117, 1175, 1176 }, // 206 IIC_iMOVix2
  { 1, 117, 121, 1176, 1177 }, // 207 IIC_iMOVix2addpc
  { 1, 121, 127, 1177, 1178 }, // 208 IIC_iMOVix2ld
  { 1, 110, 112, 1168, 1170 }, // 209 IIC_iMOVr
  { 1, 110, 112, 1170, 1172 }, // 210 IIC_iMOVsi
  { 1, 112, 114, 1172, 1175 }, // 211 IIC_iMOVsr
  { 1, 133, 135, 1251, 1254 }, // 212 IIC_iMUL16
  { 1, 133, 135, 1258, 1261 }, // 213 IIC_iMUL32
  { 1, 135, 137, 1265, 1269 }, // 214 IIC_iMUL64
  { 1, 110, 112, 1178, 1179 }, // 215 IIC_iMVNi
  { 1, 110, 112, 1179, 1181 }, // 216 IIC_iMVNr
  { 1, 112, 114, 1181, 1183 }, // 217 IIC_iMVNsi
  { 1, 127, 129, 1183, 1186 }, // 218 IIC_iMVNsr
  { 0, 149, 153, 1337, 1340 }, // 219 IIC_iPop
  { 0, 158, 163, 1340, 1343 }, // 220 IIC_iPop_Br
  { 1, 168, 172, 1347, 1349 }, // 221 IIC_iStore_bh_i
  { 1, 168, 172, 1369, 1372 }, // 222 IIC_iStore_bh_iu
  { 1, 168, 172, 1354, 1357 }, // 223 IIC_iStore_bh_r
  { 1, 168, 172, 1376, 1380 }, // 224 IIC_iStore_bh_ru
  { 1, 168, 172, 1363, 1366 }, // 225 IIC_iStore_bh_si
  { 1, 168, 172, 1388, 1392 }, // 226 IIC_iStore_bh_siu
  { 1, 168, 172, 1349, 1351 }, // 227 IIC_iStore_d_i
  { 1, 168, 172, 1357, 1360 }, // 228 IIC_iStore_d_r
  { 1, 168, 172, 1380, 1384 }, // 229 IIC_iStore_d_ru
  { 1, 137, 141, 1345, 1347 }, // 230 IIC_iStore_i
  { 1, 137, 141, 1366, 1369 }, // 231 IIC_iStore_iu
  { 0, 172, 176, 0, 0 }, // 232 IIC_iStore_m
  { 0, 172, 176, 1392, 1393 }, // 233 IIC_iStore_mu
  { 1, 137, 141, 1351, 1354 }, // 234 IIC_iStore_r
  { 1, 137, 141, 1372, 1376 }, // 235 IIC_iStore_ru
  { 1, 137, 141, 1360, 1363 }, // 236 IIC_iStore_si
  { 1, 137, 141, 1384, 1388 }, // 237 IIC_iStore_siu
  { 1, 110, 112, 1234, 1235 }, // 238 IIC_iTSTi
  { 1, 110, 112, 1235, 1237 }, // 239 IIC_iTSTr
  { 1, 112, 114, 1237, 1239 }, // 240 IIC_iTSTsi
  { 1, 127, 129, 1239, 1242 }, // 241 IIC_iTSTsr
  { 1, 110, 112, 1213, 1215 }, // 242 IIC_iUNAr
  { 1, 112, 114, 1215, 1217 }, // 243 IIC_iUNAsi
  { 1, 0, 0, 0, 0 }, // 244 NoItinerary
  { 1, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary GenericItineraries[] = {
  { 1, 0, 0, 0, 0 }, // 0 IIC_Br
  { 1, 0, 0, 0, 0 }, // 1 IIC_Preload
  { 1, 0, 0, 0, 0 }, // 2 IIC_VABAD
  { 1, 0, 0, 0, 0 }, // 3 IIC_VABAQ
  { 1, 0, 0, 0, 0 }, // 4 IIC_VBIND
  { 1, 0, 0, 0, 0 }, // 5 IIC_VBINQ
  { 1, 0, 0, 0, 0 }, // 6 IIC_VBINi4D
  { 1, 0, 0, 0, 0 }, // 7 IIC_VBINi4Q
  { 1, 0, 0, 0, 0 }, // 8 IIC_VBINiD
  { 1, 0, 0, 0, 0 }, // 9 IIC_VBINiQ
  { 1, 0, 0, 0, 0 }, // 10 IIC_VCNTiD
  { 1, 0, 0, 0, 0 }, // 11 IIC_VCNTiQ
  { 1, 0, 0, 0, 0 }, // 12 IIC_VEXTD
  { 1, 0, 0, 0, 0 }, // 13 IIC_VEXTQ
  { 1, 0, 0, 0, 0 }, // 14 IIC_VFMACD
  { 1, 0, 0, 0, 0 }, // 15 IIC_VFMACQ
  { 1, 0, 0, 0, 0 }, // 16 IIC_VFMULD
  { 1, 0, 0, 0, 0 }, // 17 IIC_VFMULQ
  { 1, 0, 0, 0, 0 }, // 18 IIC_VLD1
  { 1, 0, 0, 0, 0 }, // 19 IIC_VLD1dup
  { 1, 0, 0, 0, 0 }, // 20 IIC_VLD1dupu
  { 1, 0, 0, 0, 0 }, // 21 IIC_VLD1ln
  { 1, 0, 0, 0, 0 }, // 22 IIC_VLD1lnu
  { 1, 0, 0, 0, 0 }, // 23 IIC_VLD1u
  { 1, 0, 0, 0, 0 }, // 24 IIC_VLD1x2
  { 1, 0, 0, 0, 0 }, // 25 IIC_VLD1x2u
  { 1, 0, 0, 0, 0 }, // 26 IIC_VLD1x3
  { 1, 0, 0, 0, 0 }, // 27 IIC_VLD1x3u
  { 1, 0, 0, 0, 0 }, // 28 IIC_VLD1x4
  { 1, 0, 0, 0, 0 }, // 29 IIC_VLD1x4u
  { 1, 0, 0, 0, 0 }, // 30 IIC_VLD2
  { 1, 0, 0, 0, 0 }, // 31 IIC_VLD2dup
  { 1, 0, 0, 0, 0 }, // 32 IIC_VLD2dupu
  { 1, 0, 0, 0, 0 }, // 33 IIC_VLD2ln
  { 1, 0, 0, 0, 0 }, // 34 IIC_VLD2lnu
  { 1, 0, 0, 0, 0 }, // 35 IIC_VLD2u
  { 1, 0, 0, 0, 0 }, // 36 IIC_VLD2x2
  { 1, 0, 0, 0, 0 }, // 37 IIC_VLD2x2u
  { 1, 0, 0, 0, 0 }, // 38 IIC_VLD3
  { 1, 0, 0, 0, 0 }, // 39 IIC_VLD3dup
  { 1, 0, 0, 0, 0 }, // 40 IIC_VLD3dupu
  { 1, 0, 0, 0, 0 }, // 41 IIC_VLD3ln
  { 1, 0, 0, 0, 0 }, // 42 IIC_VLD3lnu
  { 1, 0, 0, 0, 0 }, // 43 IIC_VLD3u
  { 1, 0, 0, 0, 0 }, // 44 IIC_VLD4
  { 1, 0, 0, 0, 0 }, // 45 IIC_VLD4dup
  { 1, 0, 0, 0, 0 }, // 46 IIC_VLD4dupu
  { 1, 0, 0, 0, 0 }, // 47 IIC_VLD4ln
  { 1, 0, 0, 0, 0 }, // 48 IIC_VLD4lnu
  { 1, 0, 0, 0, 0 }, // 49 IIC_VLD4u
  { 1, 0, 0, 0, 0 }, // 50 IIC_VMACD
  { 1, 0, 0, 0, 0 }, // 51 IIC_VMACQ
  { 1, 0, 0, 0, 0 }, // 52 IIC_VMACi16D
  { 1, 0, 0, 0, 0 }, // 53 IIC_VMACi16Q
  { 1, 0, 0, 0, 0 }, // 54 IIC_VMACi32D
  { 1, 0, 0, 0, 0 }, // 55 IIC_VMACi32Q
  { 1, 0, 0, 0, 0 }, // 56 IIC_VMOV
  { 1, 0, 0, 0, 0 }, // 57 IIC_VMOVD
  { 1, 0, 0, 0, 0 }, // 58 IIC_VMOVDI
  { 1, 0, 0, 0, 0 }, // 59 IIC_VMOVID
  { 1, 0, 0, 0, 0 }, // 60 IIC_VMOVIS
  { 1, 0, 0, 0, 0 }, // 61 IIC_VMOVISL
  { 1, 0, 0, 0, 0 }, // 62 IIC_VMOVImm
  { 1, 0, 0, 0, 0 }, // 63 IIC_VMOVN
  { 1, 0, 0, 0, 0 }, // 64 IIC_VMOVQ
  { 1, 0, 0, 0, 0 }, // 65 IIC_VMOVSI
  { 1, 0, 0, 0, 0 }, // 66 IIC_VMULi16D
  { 1, 0, 0, 0, 0 }, // 67 IIC_VMULi16Q
  { 1, 0, 0, 0, 0 }, // 68 IIC_VMULi32D
  { 1, 0, 0, 0, 0 }, // 69 IIC_VMULi32Q
  { 1, 0, 0, 0, 0 }, // 70 IIC_VPALiD
  { 1, 0, 0, 0, 0 }, // 71 IIC_VPALiQ
  { 1, 0, 0, 0, 0 }, // 72 IIC_VPBIND
  { 1, 0, 0, 0, 0 }, // 73 IIC_VPERMD
  { 1, 0, 0, 0, 0 }, // 74 IIC_VPERMQ
  { 1, 0, 0, 0, 0 }, // 75 IIC_VPERMQ3
  { 1, 0, 0, 0, 0 }, // 76 IIC_VQUNAiD
  { 1, 0, 0, 0, 0 }, // 77 IIC_VQUNAiQ
  { 1, 0, 0, 0, 0 }, // 78 IIC_VRECSD
  { 1, 0, 0, 0, 0 }, // 79 IIC_VRECSQ
  { 1, 0, 0, 0, 0 }, // 80 IIC_VSHLi4D
  { 1, 0, 0, 0, 0 }, // 81 IIC_VSHLi4Q
  { 1, 0, 0, 0, 0 }, // 82 IIC_VSHLiD
  { 1, 0, 0, 0, 0 }, // 83 IIC_VSHLiQ
  { 1, 0, 0, 0, 0 }, // 84 IIC_VST1
  { 1, 0, 0, 0, 0 }, // 85 IIC_VST1ln
  { 1, 0, 0, 0, 0 }, // 86 IIC_VST1lnu
  { 1, 0, 0, 0, 0 }, // 87 IIC_VST1u
  { 1, 0, 0, 0, 0 }, // 88 IIC_VST1x2
  { 1, 0, 0, 0, 0 }, // 89 IIC_VST1x2u
  { 1, 0, 0, 0, 0 }, // 90 IIC_VST1x3
  { 1, 0, 0, 0, 0 }, // 91 IIC_VST1x3u
  { 1, 0, 0, 0, 0 }, // 92 IIC_VST1x4
  { 1, 0, 0, 0, 0 }, // 93 IIC_VST1x4u
  { 1, 0, 0, 0, 0 }, // 94 IIC_VST2
  { 1, 0, 0, 0, 0 }, // 95 IIC_VST2ln
  { 1, 0, 0, 0, 0 }, // 96 IIC_VST2lnu
  { 1, 0, 0, 0, 0 }, // 97 IIC_VST2u
  { 1, 0, 0, 0, 0 }, // 98 IIC_VST2x2
  { 1, 0, 0, 0, 0 }, // 99 IIC_VST2x2u
  { 1, 0, 0, 0, 0 }, // 100 IIC_VST3
  { 1, 0, 0, 0, 0 }, // 101 IIC_VST3ln
  { 1, 0, 0, 0, 0 }, // 102 IIC_VST3lnu
  { 1, 0, 0, 0, 0 }, // 103 IIC_VST3u
  { 1, 0, 0, 0, 0 }, // 104 IIC_VST4
  { 1, 0, 0, 0, 0 }, // 105 IIC_VST4ln
  { 1, 0, 0, 0, 0 }, // 106 IIC_VST4lnu
  { 1, 0, 0, 0, 0 }, // 107 IIC_VST4u
  { 1, 0, 0, 0, 0 }, // 108 IIC_VSUBi4D
  { 1, 0, 0, 0, 0 }, // 109 IIC_VSUBi4Q
  { 1, 0, 0, 0, 0 }, // 110 IIC_VSUBiD
  { 1, 0, 0, 0, 0 }, // 111 IIC_VSUBiQ
  { 1, 0, 0, 0, 0 }, // 112 IIC_VTB1
  { 1, 0, 0, 0, 0 }, // 113 IIC_VTB2
  { 1, 0, 0, 0, 0 }, // 114 IIC_VTB3
  { 1, 0, 0, 0, 0 }, // 115 IIC_VTB4
  { 1, 0, 0, 0, 0 }, // 116 IIC_VTBX1
  { 1, 0, 0, 0, 0 }, // 117 IIC_VTBX2
  { 1, 0, 0, 0, 0 }, // 118 IIC_VTBX3
  { 1, 0, 0, 0, 0 }, // 119 IIC_VTBX4
  { 1, 0, 0, 0, 0 }, // 120 IIC_VUNAD
  { 1, 0, 0, 0, 0 }, // 121 IIC_VUNAQ
  { 1, 0, 0, 0, 0 }, // 122 IIC_VUNAiD
  { 1, 0, 0, 0, 0 }, // 123 IIC_VUNAiQ
  { 1, 0, 0, 0, 0 }, // 124 IIC_fpALU32
  { 1, 0, 0, 0, 0 }, // 125 IIC_fpALU64
  { 1, 0, 0, 0, 0 }, // 126 IIC_fpCMP32
  { 1, 0, 0, 0, 0 }, // 127 IIC_fpCMP64
  { 1, 0, 0, 0, 0 }, // 128 IIC_fpCVTDI
  { 1, 0, 0, 0, 0 }, // 129 IIC_fpCVTDS
  { 1, 0, 0, 0, 0 }, // 130 IIC_fpCVTHS
  { 1, 0, 0, 0, 0 }, // 131 IIC_fpCVTID
  { 1, 0, 0, 0, 0 }, // 132 IIC_fpCVTIS
  { 1, 0, 0, 0, 0 }, // 133 IIC_fpCVTSD
  { 1, 0, 0, 0, 0 }, // 134 IIC_fpCVTSH
  { 1, 0, 0, 0, 0 }, // 135 IIC_fpCVTSI
  { 1, 0, 0, 0, 0 }, // 136 IIC_fpDIV32
  { 1, 0, 0, 0, 0 }, // 137 IIC_fpDIV64
  { 1, 0, 0, 0, 0 }, // 138 IIC_fpFMAC32
  { 1, 0, 0, 0, 0 }, // 139 IIC_fpFMAC64
  { 1, 0, 0, 0, 0 }, // 140 IIC_fpLoad32
  { 1, 0, 0, 0, 0 }, // 141 IIC_fpLoad64
  { 1, 0, 0, 0, 0 }, // 142 IIC_fpLoad_m
  { 1, 0, 0, 0, 0 }, // 143 IIC_fpLoad_mu
  { 1, 0, 0, 0, 0 }, // 144 IIC_fpMAC32
  { 1, 0, 0, 0, 0 }, // 145 IIC_fpMAC64
  { 1, 0, 0, 0, 0 }, // 146 IIC_fpMOVDI
  { 1, 0, 0, 0, 0 }, // 147 IIC_fpMOVID
  { 1, 0, 0, 0, 0 }, // 148 IIC_fpMOVIS
  { 1, 0, 0, 0, 0 }, // 149 IIC_fpMOVSI
  { 1, 0, 0, 0, 0 }, // 150 IIC_fpMUL32
  { 1, 0, 0, 0, 0 }, // 151 IIC_fpMUL64
  { 1, 0, 0, 0, 0 }, // 152 IIC_fpSQRT32
  { 1, 0, 0, 0, 0 }, // 153 IIC_fpSQRT64
  { 1, 0, 0, 0, 0 }, // 154 IIC_fpSTAT
  { 1, 0, 0, 0, 0 }, // 155 IIC_fpStore32
  { 1, 0, 0, 0, 0 }, // 156 IIC_fpStore64
  { 1, 0, 0, 0, 0 }, // 157 IIC_fpStore_m
  { 1, 0, 0, 0, 0 }, // 158 IIC_fpStore_mu
  { 1, 0, 0, 0, 0 }, // 159 IIC_fpUNA32
  { 1, 0, 0, 0, 0 }, // 160 IIC_fpUNA64
  { 1, 0, 0, 0, 0 }, // 161 IIC_iALUi
  { 1, 0, 0, 0, 0 }, // 162 IIC_iALUr
  { 1, 0, 0, 0, 0 }, // 163 IIC_iALUsi
  { 1, 0, 0, 0, 0 }, // 164 IIC_iALUsir
  { 1, 0, 0, 0, 0 }, // 165 IIC_iALUsr
  { 1, 0, 0, 0, 0 }, // 166 IIC_iALUx
  { 1, 0, 0, 0, 0 }, // 167 IIC_iBITi
  { 1, 0, 0, 0, 0 }, // 168 IIC_iBITr
  { 1, 0, 0, 0, 0 }, // 169 IIC_iBITsi
  { 1, 0, 0, 0, 0 }, // 170 IIC_iBITsr
  { 1, 0, 0, 0, 0 }, // 171 IIC_iCMOVi
  { 1, 0, 0, 0, 0 }, // 172 IIC_iCMOVix2
  { 1, 0, 0, 0, 0 }, // 173 IIC_iCMOVr
  { 1, 0, 0, 0, 0 }, // 174 IIC_iCMOVsi
  { 1, 0, 0, 0, 0 }, // 175 IIC_iCMOVsr
  { 1, 0, 0, 0, 0 }, // 176 IIC_iCMPi
  { 1, 0, 0, 0, 0 }, // 177 IIC_iCMPr
  { 1, 0, 0, 0, 0 }, // 178 IIC_iCMPsi
  { 1, 0, 0, 0, 0 }, // 179 IIC_iCMPsr
  { 1, 0, 0, 0, 0 }, // 180 IIC_iEXTAr
  { 1, 0, 0, 0, 0 }, // 181 IIC_iEXTAsr
  { 1, 0, 0, 0, 0 }, // 182 IIC_iEXTr
  { 1, 0, 0, 0, 0 }, // 183 IIC_iLoad_bh_i
  { 1, 0, 0, 0, 0 }, // 184 IIC_iLoad_bh_iu
  { 1, 0, 0, 0, 0 }, // 185 IIC_iLoad_bh_r
  { 1, 0, 0, 0, 0 }, // 186 IIC_iLoad_bh_ru
  { 1, 0, 0, 0, 0 }, // 187 IIC_iLoad_bh_si
  { 1, 0, 0, 0, 0 }, // 188 IIC_iLoad_bh_siu
  { 1, 0, 0, 0, 0 }, // 189 IIC_iLoad_d_i
  { 1, 0, 0, 0, 0 }, // 190 IIC_iLoad_d_r
  { 1, 0, 0, 0, 0 }, // 191 IIC_iLoad_d_ru
  { 1, 0, 0, 0, 0 }, // 192 IIC_iLoad_i
  { 1, 0, 0, 0, 0 }, // 193 IIC_iLoad_iu
  { 1, 0, 0, 0, 0 }, // 194 IIC_iLoad_m
  { 1, 0, 0, 0, 0 }, // 195 IIC_iLoad_mBr
  { 1, 0, 0, 0, 0 }, // 196 IIC_iLoad_mu
  { 1, 0, 0, 0, 0 }, // 197 IIC_iLoad_r
  { 1, 0, 0, 0, 0 }, // 198 IIC_iLoad_ru
  { 1, 0, 0, 0, 0 }, // 199 IIC_iLoad_si
  { 1, 0, 0, 0, 0 }, // 200 IIC_iLoad_siu
  { 1, 0, 0, 0, 0 }, // 201 IIC_iLoadiALU
  { 1, 0, 0, 0, 0 }, // 202 IIC_iMAC16
  { 1, 0, 0, 0, 0 }, // 203 IIC_iMAC32
  { 1, 0, 0, 0, 0 }, // 204 IIC_iMAC64
  { 1, 0, 0, 0, 0 }, // 205 IIC_iMOVi
  { 1, 0, 0, 0, 0 }, // 206 IIC_iMOVix2
  { 1, 0, 0, 0, 0 }, // 207 IIC_iMOVix2addpc
  { 1, 0, 0, 0, 0 }, // 208 IIC_iMOVix2ld
  { 1, 0, 0, 0, 0 }, // 209 IIC_iMOVr
  { 1, 0, 0, 0, 0 }, // 210 IIC_iMOVsi
  { 1, 0, 0, 0, 0 }, // 211 IIC_iMOVsr
  { 1, 0, 0, 0, 0 }, // 212 IIC_iMUL16
  { 1, 0, 0, 0, 0 }, // 213 IIC_iMUL32
  { 1, 0, 0, 0, 0 }, // 214 IIC_iMUL64
  { 1, 0, 0, 0, 0 }, // 215 IIC_iMVNi
  { 1, 0, 0, 0, 0 }, // 216 IIC_iMVNr
  { 1, 0, 0, 0, 0 }, // 217 IIC_iMVNsi
  { 1, 0, 0, 0, 0 }, // 218 IIC_iMVNsr
  { 1, 0, 0, 0, 0 }, // 219 IIC_iPop
  { 1, 0, 0, 0, 0 }, // 220 IIC_iPop_Br
  { 1, 0, 0, 0, 0 }, // 221 IIC_iStore_bh_i
  { 1, 0, 0, 0, 0 }, // 222 IIC_iStore_bh_iu
  { 1, 0, 0, 0, 0 }, // 223 IIC_iStore_bh_r
  { 1, 0, 0, 0, 0 }, // 224 IIC_iStore_bh_ru
  { 1, 0, 0, 0, 0 }, // 225 IIC_iStore_bh_si
  { 1, 0, 0, 0, 0 }, // 226 IIC_iStore_bh_siu
  { 1, 0, 0, 0, 0 }, // 227 IIC_iStore_d_i
  { 1, 0, 0, 0, 0 }, // 228 IIC_iStore_d_r
  { 1, 0, 0, 0, 0 }, // 229 IIC_iStore_d_ru
  { 1, 0, 0, 0, 0 }, // 230 IIC_iStore_i
  { 1, 0, 0, 0, 0 }, // 231 IIC_iStore_iu
  { 1, 0, 0, 0, 0 }, // 232 IIC_iStore_m
  { 1, 0, 0, 0, 0 }, // 233 IIC_iStore_mu
  { 1, 0, 0, 0, 0 }, // 234 IIC_iStore_r
  { 1, 0, 0, 0, 0 }, // 235 IIC_iStore_ru
  { 1, 0, 0, 0, 0 }, // 236 IIC_iStore_si
  { 1, 0, 0, 0, 0 }, // 237 IIC_iStore_siu
  { 1, 0, 0, 0, 0 }, // 238 IIC_iTSTi
  { 1, 0, 0, 0, 0 }, // 239 IIC_iTSTr
  { 1, 0, 0, 0, 0 }, // 240 IIC_iTSTsi
  { 1, 0, 0, 0, 0 }, // 241 IIC_iTSTsr
  { 1, 0, 0, 0, 0 }, // 242 IIC_iUNAr
  { 1, 0, 0, 0, 0 }, // 243 IIC_iUNAsi
  { 1, 0, 0, 0, 0 }, // 244 NoItinerary
  { 1, ~0U, ~0U, ~0U, ~0U } // end marker
};

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV ARMProcItinKV[] = {
  { "arm1020e", (void *)&GenericItineraries },
  { "arm1020t", (void *)&GenericItineraries },
  { "arm1022e", (void *)&GenericItineraries },
  { "arm10e", (void *)&GenericItineraries },
  { "arm10tdmi", (void *)&GenericItineraries },
  { "arm1136j-s", (void *)&ARMV6Itineraries },
  { "arm1136jf-s", (void *)&ARMV6Itineraries },
  { "arm1156t2-s", (void *)&ARMV6Itineraries },
  { "arm1156t2f-s", (void *)&ARMV6Itineraries },
  { "arm1176jz-s", (void *)&ARMV6Itineraries },
  { "arm1176jzf-s", (void *)&ARMV6Itineraries },
  { "arm710t", (void *)&GenericItineraries },
  { "arm720t", (void *)&GenericItineraries },
  { "arm7tdmi", (void *)&GenericItineraries },
  { "arm7tdmi-s", (void *)&GenericItineraries },
  { "arm8", (void *)&GenericItineraries },
  { "arm810", (void *)&GenericItineraries },
  { "arm9", (void *)&GenericItineraries },
  { "arm920", (void *)&GenericItineraries },
  { "arm920t", (void *)&GenericItineraries },
  { "arm922t", (void *)&GenericItineraries },
  { "arm926ej-s", (void *)&GenericItineraries },
  { "arm940t", (void *)&GenericItineraries },
  { "arm946e-s", (void *)&GenericItineraries },
  { "arm966e-s", (void *)&GenericItineraries },
  { "arm968e-s", (void *)&GenericItineraries },
  { "arm9e", (void *)&GenericItineraries },
  { "arm9tdmi", (void *)&GenericItineraries },
  { "cortex-a8", (void *)&CortexA8Itineraries },
  { "cortex-a9", (void *)&CortexA9Itineraries },
  { "cortex-a9-mp", (void *)&CortexA9Itineraries },
  { "cortex-m0", (void *)&ARMV6Itineraries },
  { "cortex-m3", (void *)&GenericItineraries },
  { "cortex-m4", (void *)&GenericItineraries },
  { "ep9312", (void *)&GenericItineraries },
  { "generic", (void *)&GenericItineraries },
  { "iwmmxt", (void *)&GenericItineraries },
  { "mpcore", (void *)&ARMV6Itineraries },
  { "mpcorenovfp", (void *)&ARMV6Itineraries },
  { "strongarm", (void *)&GenericItineraries },
  { "strongarm110", (void *)&GenericItineraries },
  { "strongarm1100", (void *)&GenericItineraries },
  { "strongarm1110", (void *)&GenericItineraries },
  { "xscale", (void *)&GenericItineraries }
};

static inline void InitARMMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, ARMFeatureKV, ARMSubTypeKV, ARMProcItinKV, ARMStages, ARMOperandCycles, ARMForwardingPathes, 31, 44);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::ARMSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU);
  uint64_t Bits = ReInitMCSubtargetInfo(CPU, FS);
  if ((Bits & ARM::FeatureAvoidPartialCPSR) != 0) AvoidCPSRPartialUpdate = true;
  if ((Bits & ARM::FeatureD16) != 0) HasD16 = true;
  if ((Bits & ARM::FeatureDB) != 0) HasDataBarrier = true;
  if ((Bits & ARM::FeatureDSPThumb2) != 0) Thumb2DSP = true;
  if ((Bits & ARM::FeatureFP16) != 0) HasFP16 = true;
  if ((Bits & ARM::FeatureHWDiv) != 0) HasHardwareDivide = true;
  if ((Bits & ARM::FeatureHasRAS) != 0) HasRAS = true;
  if ((Bits & ARM::FeatureHasSlowFPVMLx) != 0) SlowFPVMLx = true;
  if ((Bits & ARM::FeatureMClass) != 0) IsMClass = true;
  if ((Bits & ARM::FeatureMP) != 0) HasMPExtension = true;
  if ((Bits & ARM::FeatureNEON) != 0) HasNEON = true;
  if ((Bits & ARM::FeatureNEONForFP) != 0) UseNEONForSinglePrecisionFP = true;
  if ((Bits & ARM::FeatureNoARM) != 0) NoARM = true;
  if ((Bits & ARM::FeaturePref32BitThumb) != 0) Pref32BitThumb = true;
  if ((Bits & ARM::FeatureSlowFPBrcc) != 0) SlowFPBrcc = true;
  if ((Bits & ARM::FeatureT2XtPk) != 0) HasT2ExtractPack = true;
  if ((Bits & ARM::FeatureThumb2) != 0) HasThumb2 = true;
  if ((Bits & ARM::FeatureVFP2) != 0) HasVFPv2 = true;
  if ((Bits & ARM::FeatureVFP3) != 0) HasVFPv3 = true;
  if ((Bits & ARM::FeatureVFP4) != 0) HasVFPv4 = true;
  if ((Bits & ARM::FeatureVFPOnlySP) != 0) FPOnlySP = true;
  if ((Bits & ARM::FeatureVMLxForwarding) != 0) HasVMLxForwarding = true;
  if ((Bits & ARM::HasV4TOps) != 0) HasV4TOps = true;
  if ((Bits & ARM::HasV5TEOps) != 0) HasV5TEOps = true;
  if ((Bits & ARM::HasV5TOps) != 0) HasV5TOps = true;
  if ((Bits & ARM::HasV6Ops) != 0) HasV6Ops = true;
  if ((Bits & ARM::HasV6T2Ops) != 0) HasV6T2Ops = true;
  if ((Bits & ARM::HasV7Ops) != 0) HasV7Ops = true;
  if ((Bits & ARM::ModeThumb) != 0) InThumbMode = true;
  if ((Bits & ARM::ProcA8) != 0 && ARMProcFamily < CortexA8) ARMProcFamily = CortexA8;
  if ((Bits & ARM::ProcA9) != 0 && ARMProcFamily < CortexA9) ARMProcFamily = CortexA9;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct ARMGenSubtargetInfo : public TargetSubtargetInfo {
  explicit ARMGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
public:
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR
namespace llvm {
extern const llvm::SubtargetFeatureKV ARMFeatureKV[];
extern const llvm::SubtargetFeatureKV ARMSubTypeKV[];
extern const llvm::SubtargetInfoKV ARMProcItinKV[];
extern const llvm::InstrStage ARMStages[];
extern const unsigned ARMOperandCycles[];
extern const unsigned ARMForwardingPathes[];
ARMGenSubtargetInfo::ARMGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, ARMFeatureKV, ARMSubTypeKV, ARMProcItinKV, ARMStages, ARMOperandCycles, ARMForwardingPathes, 31, 44);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

