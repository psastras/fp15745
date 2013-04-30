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
extern const MCRegisterClass MipsMCRegisterClasses[];

namespace Mips {
enum {
  NoRegister,
  A0 = 1,
  A0_64 = 2,
  A1 = 3,
  A1_64 = 4,
  A2 = 5,
  A2_64 = 6,
  A3 = 7,
  A3_64 = 8,
  AT = 9,
  AT_64 = 10,
  D0 = 11,
  D0_64 = 12,
  D1 = 13,
  D1_64 = 14,
  D2 = 15,
  D2_64 = 16,
  D3 = 17,
  D3_64 = 18,
  D4 = 19,
  D4_64 = 20,
  D5 = 21,
  D5_64 = 22,
  D6 = 23,
  D6_64 = 24,
  D7 = 25,
  D7_64 = 26,
  D8 = 27,
  D8_64 = 28,
  D9 = 29,
  D9_64 = 30,
  D10 = 31,
  D10_64 = 32,
  D11 = 33,
  D11_64 = 34,
  D12 = 35,
  D12_64 = 36,
  D13 = 37,
  D13_64 = 38,
  D14 = 39,
  D14_64 = 40,
  D15 = 41,
  D15_64 = 42,
  D16_64 = 43,
  D17_64 = 44,
  D18_64 = 45,
  D19_64 = 46,
  D20_64 = 47,
  D21_64 = 48,
  D22_64 = 49,
  D23_64 = 50,
  D24_64 = 51,
  D25_64 = 52,
  D26_64 = 53,
  D27_64 = 54,
  D28_64 = 55,
  D29_64 = 56,
  D30_64 = 57,
  D31_64 = 58,
  F0 = 59,
  F1 = 60,
  F2 = 61,
  F3 = 62,
  F4 = 63,
  F5 = 64,
  F6 = 65,
  F7 = 66,
  F8 = 67,
  F9 = 68,
  F10 = 69,
  F11 = 70,
  F12 = 71,
  F13 = 72,
  F14 = 73,
  F15 = 74,
  F16 = 75,
  F17 = 76,
  F18 = 77,
  F19 = 78,
  F20 = 79,
  F21 = 80,
  F22 = 81,
  F23 = 82,
  F24 = 83,
  F25 = 84,
  F26 = 85,
  F27 = 86,
  F28 = 87,
  F29 = 88,
  F30 = 89,
  F31 = 90,
  FCR31 = 91,
  FP = 92,
  FP_64 = 93,
  GP = 94,
  GP_64 = 95,
  HI = 96,
  HI64 = 97,
  HWR29 = 98,
  HWR29_64 = 99,
  K0 = 100,
  K0_64 = 101,
  K1 = 102,
  K1_64 = 103,
  LO = 104,
  LO64 = 105,
  RA = 106,
  RA_64 = 107,
  S0 = 108,
  S0_64 = 109,
  S1 = 110,
  S1_64 = 111,
  S2 = 112,
  S2_64 = 113,
  S3 = 114,
  S3_64 = 115,
  S4 = 116,
  S4_64 = 117,
  S5 = 118,
  S5_64 = 119,
  S6 = 120,
  S6_64 = 121,
  S7 = 122,
  S7_64 = 123,
  SP = 124,
  SP_64 = 125,
  T0 = 126,
  T0_64 = 127,
  T1 = 128,
  T1_64 = 129,
  T2 = 130,
  T2_64 = 131,
  T3 = 132,
  T3_64 = 133,
  T4 = 134,
  T4_64 = 135,
  T5 = 136,
  T5_64 = 137,
  T6 = 138,
  T6_64 = 139,
  T7 = 140,
  T7_64 = 141,
  T8 = 142,
  T8_64 = 143,
  T9 = 144,
  T9_64 = 145,
  V0 = 146,
  V0_64 = 147,
  V1 = 148,
  V1_64 = 149,
  ZERO = 150,
  ZERO_64 = 151,
  NUM_TARGET_REGS 	// 152
};
}

// Register classes
namespace Mips {
enum {
  CPURegsRegClassID = 0,
  FGR32RegClassID = 1,
  CPU64RegsRegClassID = 2,
  FGR64RegClassID = 3,
  AFGR64RegClassID = 4,
  HILORegClassID = 5,
  HILO64RegClassID = 6,
  CCRRegClassID = 7,
  HWRegsRegClassID = 8,
  HWRegs64RegClassID = 9
  };
}

// Subregister indices
namespace Mips {
enum {
  NoSubRegister,
  sub_32,	// 1
  sub_fpeven,	// 2
  sub_fpodd,	// 3
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

extern const uint16_t MipsRegLists[] = {
  /* 0 */ Mips::A0_64, Mips::A0, 0,
  /* 3 */ Mips::A0, Mips::A0_64, 0,
  /* 6 */ Mips::A1_64, Mips::A1, 0,
  /* 9 */ Mips::A1, Mips::A1_64, 0,
  /* 12 */ Mips::A2_64, Mips::A2, 0,
  /* 15 */ Mips::A2, Mips::A2_64, 0,
  /* 18 */ Mips::A3_64, Mips::A3, 0,
  /* 21 */ Mips::A3, Mips::A3_64, 0,
  /* 24 */ Mips::AT_64, Mips::AT, 0,
  /* 27 */ Mips::AT, Mips::AT_64, 0,
  /* 30 */ Mips::F0, Mips::D0, Mips::D0_64, 0,
  /* 34 */ Mips::F1, Mips::D0, Mips::D1_64, 0,
  /* 38 */ Mips::F2, Mips::D1, Mips::D2_64, 0,
  /* 42 */ Mips::F3, Mips::D1, Mips::D3_64, 0,
  /* 46 */ Mips::F4, Mips::D2, Mips::D4_64, 0,
  /* 50 */ Mips::F5, Mips::D2, Mips::D5_64, 0,
  /* 54 */ Mips::F6, Mips::D3, Mips::D6_64, 0,
  /* 58 */ Mips::F7, Mips::D3, Mips::D7_64, 0,
  /* 62 */ Mips::F8, Mips::D4, Mips::D8_64, 0,
  /* 66 */ Mips::F9, Mips::D4, Mips::D9_64, 0,
  /* 70 */ Mips::F10, Mips::D5, Mips::D10_64, 0,
  /* 74 */ Mips::F11, Mips::D5, Mips::D11_64, 0,
  /* 78 */ Mips::F12, Mips::D6, Mips::D12_64, 0,
  /* 82 */ Mips::F13, Mips::D6, Mips::D13_64, 0,
  /* 86 */ Mips::F14, Mips::D7, Mips::D14_64, 0,
  /* 90 */ Mips::F15, Mips::D7, Mips::D15_64, 0,
  /* 94 */ Mips::F16, Mips::D8, Mips::D16_64, 0,
  /* 98 */ Mips::F17, Mips::D8, Mips::D17_64, 0,
  /* 102 */ Mips::F18, Mips::D9, Mips::D18_64, 0,
  /* 106 */ Mips::F19, Mips::D9, Mips::D19_64, 0,
  /* 110 */ Mips::F20, Mips::D10, Mips::D20_64, 0,
  /* 114 */ Mips::F21, Mips::D10, Mips::D21_64, 0,
  /* 118 */ Mips::F22, Mips::D11, Mips::D22_64, 0,
  /* 122 */ Mips::F23, Mips::D11, Mips::D23_64, 0,
  /* 126 */ Mips::F24, Mips::D12, Mips::D24_64, 0,
  /* 130 */ Mips::F25, Mips::D12, Mips::D25_64, 0,
  /* 134 */ Mips::F26, Mips::D13, Mips::D26_64, 0,
  /* 138 */ Mips::F27, Mips::D13, Mips::D27_64, 0,
  /* 142 */ Mips::F28, Mips::D14, Mips::D28_64, 0,
  /* 146 */ Mips::F29, Mips::D14, Mips::D29_64, 0,
  /* 150 */ Mips::F30, Mips::D15, Mips::D30_64, 0,
  /* 154 */ Mips::F31, Mips::D15, Mips::D31_64, 0,
  /* 158 */ Mips::D0_64, Mips::D0, Mips::F0, 0,
  /* 162 */ Mips::D1_64, Mips::D0, Mips::F1, 0,
  /* 166 */ Mips::D0, Mips::D0_64, Mips::D1_64, Mips::F0, Mips::F1, 0,
  /* 172 */ Mips::D2_64, Mips::D1, Mips::F2, 0,
  /* 176 */ Mips::D3_64, Mips::D1, Mips::F3, 0,
  /* 180 */ Mips::D1, Mips::D2_64, Mips::D3_64, Mips::F2, Mips::F3, 0,
  /* 186 */ Mips::D4_64, Mips::D2, Mips::F4, 0,
  /* 190 */ Mips::D5_64, Mips::D2, Mips::F5, 0,
  /* 194 */ Mips::D2, Mips::D4_64, Mips::D5_64, Mips::F4, Mips::F5, 0,
  /* 200 */ Mips::D6_64, Mips::D3, Mips::F6, 0,
  /* 204 */ Mips::D7_64, Mips::D3, Mips::F7, 0,
  /* 208 */ Mips::D3, Mips::D6_64, Mips::D7_64, Mips::F6, Mips::F7, 0,
  /* 214 */ Mips::D8_64, Mips::D4, Mips::F8, 0,
  /* 218 */ Mips::D9_64, Mips::D4, Mips::F9, 0,
  /* 222 */ Mips::D4, Mips::D8_64, Mips::D9_64, Mips::F8, Mips::F9, 0,
  /* 228 */ Mips::D10_64, Mips::D5, Mips::F10, 0,
  /* 232 */ Mips::D11_64, Mips::D5, Mips::F11, 0,
  /* 236 */ Mips::D5, Mips::D10_64, Mips::D11_64, Mips::F10, Mips::F11, 0,
  /* 242 */ Mips::D12_64, Mips::D6, Mips::F12, 0,
  /* 246 */ Mips::D13_64, Mips::D6, Mips::F13, 0,
  /* 250 */ Mips::D6, Mips::D12_64, Mips::D13_64, Mips::F12, Mips::F13, 0,
  /* 256 */ Mips::D14_64, Mips::D7, Mips::F14, 0,
  /* 260 */ Mips::D15_64, Mips::D7, Mips::F15, 0,
  /* 264 */ Mips::D7, Mips::D14_64, Mips::D15_64, Mips::F14, Mips::F15, 0,
  /* 270 */ Mips::D16_64, Mips::D8, Mips::F16, 0,
  /* 274 */ Mips::D17_64, Mips::D8, Mips::F17, 0,
  /* 278 */ Mips::D8, Mips::D16_64, Mips::D17_64, Mips::F16, Mips::F17, 0,
  /* 284 */ Mips::D18_64, Mips::D9, Mips::F18, 0,
  /* 288 */ Mips::D19_64, Mips::D9, Mips::F19, 0,
  /* 292 */ Mips::D9, Mips::D18_64, Mips::D19_64, Mips::F18, Mips::F19, 0,
  /* 298 */ Mips::D20_64, Mips::D10, Mips::F20, 0,
  /* 302 */ Mips::D21_64, Mips::D10, Mips::F21, 0,
  /* 306 */ Mips::D10, Mips::D20_64, Mips::D21_64, Mips::F20, Mips::F21, 0,
  /* 312 */ Mips::D22_64, Mips::D11, Mips::F22, 0,
  /* 316 */ Mips::D23_64, Mips::D11, Mips::F23, 0,
  /* 320 */ Mips::D11, Mips::D22_64, Mips::D23_64, Mips::F22, Mips::F23, 0,
  /* 326 */ Mips::D24_64, Mips::D12, Mips::F24, 0,
  /* 330 */ Mips::D25_64, Mips::D12, Mips::F25, 0,
  /* 334 */ Mips::D12, Mips::D24_64, Mips::D25_64, Mips::F24, Mips::F25, 0,
  /* 340 */ Mips::D26_64, Mips::D13, Mips::F26, 0,
  /* 344 */ Mips::D27_64, Mips::D13, Mips::F27, 0,
  /* 348 */ Mips::D13, Mips::D26_64, Mips::D27_64, Mips::F26, Mips::F27, 0,
  /* 354 */ Mips::D28_64, Mips::D14, Mips::F28, 0,
  /* 358 */ Mips::D29_64, Mips::D14, Mips::F29, 0,
  /* 362 */ Mips::D14, Mips::D28_64, Mips::D29_64, Mips::F28, Mips::F29, 0,
  /* 368 */ Mips::D30_64, Mips::D15, Mips::F30, 0,
  /* 372 */ Mips::D31_64, Mips::D15, Mips::F31, 0,
  /* 376 */ Mips::D15, Mips::D30_64, Mips::D31_64, Mips::F30, Mips::F31, 0,
  /* 382 */ Mips::FCR31, 0,
  /* 384 */ Mips::FP_64, Mips::FP, 0,
  /* 387 */ Mips::FP, Mips::FP_64, 0,
  /* 390 */ Mips::GP_64, Mips::GP, 0,
  /* 393 */ Mips::GP, Mips::GP_64, 0,
  /* 396 */ Mips::HI64, Mips::HI, 0,
  /* 399 */ Mips::HI, Mips::HI64, 0,
  /* 402 */ Mips::HWR29, 0,
  /* 404 */ Mips::HWR29_64, 0,
  /* 406 */ Mips::K0_64, Mips::K0, 0,
  /* 409 */ Mips::K0, Mips::K0_64, 0,
  /* 412 */ Mips::K1_64, Mips::K1, 0,
  /* 415 */ Mips::K1, Mips::K1_64, 0,
  /* 418 */ Mips::LO64, Mips::LO, 0,
  /* 421 */ Mips::LO, Mips::LO64, 0,
  /* 424 */ Mips::RA_64, Mips::RA, 0,
  /* 427 */ Mips::RA, Mips::RA_64, 0,
  /* 430 */ Mips::S0_64, Mips::S0, 0,
  /* 433 */ Mips::S0, Mips::S0_64, 0,
  /* 436 */ Mips::S1_64, Mips::S1, 0,
  /* 439 */ Mips::S1, Mips::S1_64, 0,
  /* 442 */ Mips::S2_64, Mips::S2, 0,
  /* 445 */ Mips::S2, Mips::S2_64, 0,
  /* 448 */ Mips::S3_64, Mips::S3, 0,
  /* 451 */ Mips::S3, Mips::S3_64, 0,
  /* 454 */ Mips::S4_64, Mips::S4, 0,
  /* 457 */ Mips::S4, Mips::S4_64, 0,
  /* 460 */ Mips::S5_64, Mips::S5, 0,
  /* 463 */ Mips::S5, Mips::S5_64, 0,
  /* 466 */ Mips::S6_64, Mips::S6, 0,
  /* 469 */ Mips::S6, Mips::S6_64, 0,
  /* 472 */ Mips::S7_64, Mips::S7, 0,
  /* 475 */ Mips::S7, Mips::S7_64, 0,
  /* 478 */ Mips::SP_64, Mips::SP, 0,
  /* 481 */ Mips::SP, Mips::SP_64, 0,
  /* 484 */ Mips::T0_64, Mips::T0, 0,
  /* 487 */ Mips::T0, Mips::T0_64, 0,
  /* 490 */ Mips::T1_64, Mips::T1, 0,
  /* 493 */ Mips::T1, Mips::T1_64, 0,
  /* 496 */ Mips::T2_64, Mips::T2, 0,
  /* 499 */ Mips::T2, Mips::T2_64, 0,
  /* 502 */ Mips::T3_64, Mips::T3, 0,
  /* 505 */ Mips::T3, Mips::T3_64, 0,
  /* 508 */ Mips::T4_64, Mips::T4, 0,
  /* 511 */ Mips::T4, Mips::T4_64, 0,
  /* 514 */ Mips::T5_64, Mips::T5, 0,
  /* 517 */ Mips::T5, Mips::T5_64, 0,
  /* 520 */ Mips::T6_64, Mips::T6, 0,
  /* 523 */ Mips::T6, Mips::T6_64, 0,
  /* 526 */ Mips::T7_64, Mips::T7, 0,
  /* 529 */ Mips::T7, Mips::T7_64, 0,
  /* 532 */ Mips::T8_64, Mips::T8, 0,
  /* 535 */ Mips::T8, Mips::T8_64, 0,
  /* 538 */ Mips::T9_64, Mips::T9, 0,
  /* 541 */ Mips::T9, Mips::T9_64, 0,
  /* 544 */ Mips::V0_64, Mips::V0, 0,
  /* 547 */ Mips::V0, Mips::V0_64, 0,
  /* 550 */ Mips::V1_64, Mips::V1, 0,
  /* 553 */ Mips::V1, Mips::V1_64, 0,
  /* 556 */ Mips::ZERO_64, Mips::ZERO, 0,
  /* 559 */ Mips::ZERO, Mips::ZERO_64, 0,
};

extern const MCRegisterDesc MipsRegDesc[] = { // Descriptors
  { "NOREG", 0, 0, 0 },
  { "A0", 3, 2, 4 },
  { "A0_64", 0, 1, 2 },
  { "A1", 9, 2, 10 },
  { "A1_64", 6, 7, 2 },
  { "A2", 15, 2, 16 },
  { "A2_64", 12, 13, 2 },
  { "A3", 21, 2, 22 },
  { "A3_64", 18, 19, 2 },
  { "AT", 27, 2, 28 },
  { "AT_64", 24, 25, 2 },
  { "D0", 166, 169, 2 },
  { "D0_64", 158, 160, 2 },
  { "D1", 180, 183, 2 },
  { "D1_64", 162, 164, 2 },
  { "D2", 194, 197, 2 },
  { "D2_64", 172, 174, 2 },
  { "D3", 208, 211, 2 },
  { "D3_64", 176, 178, 2 },
  { "D4", 222, 225, 2 },
  { "D4_64", 186, 188, 2 },
  { "D5", 236, 239, 2 },
  { "D5_64", 190, 192, 2 },
  { "D6", 250, 253, 2 },
  { "D6_64", 200, 202, 2 },
  { "D7", 264, 267, 2 },
  { "D7_64", 204, 206, 2 },
  { "D8", 278, 281, 2 },
  { "D8_64", 214, 216, 2 },
  { "D9", 292, 295, 2 },
  { "D9_64", 218, 220, 2 },
  { "D10", 306, 309, 2 },
  { "D10_64", 228, 230, 2 },
  { "D11", 320, 323, 2 },
  { "D11_64", 232, 234, 2 },
  { "D12", 334, 337, 2 },
  { "D12_64", 242, 244, 2 },
  { "D13", 348, 351, 2 },
  { "D13_64", 246, 248, 2 },
  { "D14", 362, 365, 2 },
  { "D14_64", 256, 258, 2 },
  { "D15", 376, 379, 2 },
  { "D15_64", 260, 262, 2 },
  { "D16_64", 270, 272, 2 },
  { "D17_64", 274, 276, 2 },
  { "D18_64", 284, 286, 2 },
  { "D19_64", 288, 290, 2 },
  { "D20_64", 298, 300, 2 },
  { "D21_64", 302, 304, 2 },
  { "D22_64", 312, 314, 2 },
  { "D23_64", 316, 318, 2 },
  { "D24_64", 326, 328, 2 },
  { "D25_64", 330, 332, 2 },
  { "D26_64", 340, 342, 2 },
  { "D27_64", 344, 346, 2 },
  { "D28_64", 354, 356, 2 },
  { "D29_64", 358, 360, 2 },
  { "D30_64", 368, 370, 2 },
  { "D31_64", 372, 374, 2 },
  { "F0", 30, 2, 31 },
  { "F1", 34, 2, 35 },
  { "F2", 38, 2, 39 },
  { "F3", 42, 2, 43 },
  { "F4", 46, 2, 47 },
  { "F5", 50, 2, 51 },
  { "F6", 54, 2, 55 },
  { "F7", 58, 2, 59 },
  { "F8", 62, 2, 63 },
  { "F9", 66, 2, 67 },
  { "F10", 70, 2, 71 },
  { "F11", 74, 2, 75 },
  { "F12", 78, 2, 79 },
  { "F13", 82, 2, 83 },
  { "F14", 86, 2, 87 },
  { "F15", 90, 2, 91 },
  { "F16", 94, 2, 95 },
  { "F17", 98, 2, 99 },
  { "F18", 102, 2, 103 },
  { "F19", 106, 2, 107 },
  { "F20", 110, 2, 111 },
  { "F21", 114, 2, 115 },
  { "F22", 118, 2, 119 },
  { "F23", 122, 2, 123 },
  { "F24", 126, 2, 127 },
  { "F25", 130, 2, 131 },
  { "F26", 134, 2, 135 },
  { "F27", 138, 2, 139 },
  { "F28", 142, 2, 143 },
  { "F29", 146, 2, 147 },
  { "F30", 150, 2, 151 },
  { "F31", 154, 2, 155 },
  { "FCR31", 382, 2, 2 },
  { "FP", 387, 2, 388 },
  { "FP_64", 384, 385, 2 },
  { "GP", 393, 2, 394 },
  { "GP_64", 390, 391, 2 },
  { "HI", 399, 2, 400 },
  { "HI64", 396, 397, 2 },
  { "HWR29", 402, 2, 2 },
  { "HWR29_64", 404, 2, 2 },
  { "K0", 409, 2, 410 },
  { "K0_64", 406, 407, 2 },
  { "K1", 415, 2, 416 },
  { "K1_64", 412, 413, 2 },
  { "LO", 421, 2, 422 },
  { "LO64", 418, 419, 2 },
  { "RA", 427, 2, 428 },
  { "RA_64", 424, 425, 2 },
  { "S0", 433, 2, 434 },
  { "S0_64", 430, 431, 2 },
  { "S1", 439, 2, 440 },
  { "S1_64", 436, 437, 2 },
  { "S2", 445, 2, 446 },
  { "S2_64", 442, 443, 2 },
  { "S3", 451, 2, 452 },
  { "S3_64", 448, 449, 2 },
  { "S4", 457, 2, 458 },
  { "S4_64", 454, 455, 2 },
  { "S5", 463, 2, 464 },
  { "S5_64", 460, 461, 2 },
  { "S6", 469, 2, 470 },
  { "S6_64", 466, 467, 2 },
  { "S7", 475, 2, 476 },
  { "S7_64", 472, 473, 2 },
  { "SP", 481, 2, 482 },
  { "SP_64", 478, 479, 2 },
  { "T0", 487, 2, 488 },
  { "T0_64", 484, 485, 2 },
  { "T1", 493, 2, 494 },
  { "T1_64", 490, 491, 2 },
  { "T2", 499, 2, 500 },
  { "T2_64", 496, 497, 2 },
  { "T3", 505, 2, 506 },
  { "T3_64", 502, 503, 2 },
  { "T4", 511, 2, 512 },
  { "T4_64", 508, 509, 2 },
  { "T5", 517, 2, 518 },
  { "T5_64", 514, 515, 2 },
  { "T6", 523, 2, 524 },
  { "T6_64", 520, 521, 2 },
  { "T7", 529, 2, 530 },
  { "T7_64", 526, 527, 2 },
  { "T8", 535, 2, 536 },
  { "T8_64", 532, 533, 2 },
  { "T9", 541, 2, 542 },
  { "T9_64", 538, 539, 2 },
  { "V0", 547, 2, 548 },
  { "V0_64", 544, 545, 2 },
  { "V1", 553, 2, 554 },
  { "V1_64", 550, 551, 2 },
  { "ZERO", 559, 2, 560 },
  { "ZERO_64", 556, 557, 2 },
};

namespace {     // Register classes...
  // CPURegs Register Class...
  const uint16_t CPURegs[] = {
    Mips::V0, Mips::V1, Mips::A0, Mips::A1, Mips::A2, Mips::A3, Mips::T0, Mips::T1, Mips::T2, Mips::T3, Mips::T4, Mips::T5, Mips::T6, Mips::T7, Mips::T8, Mips::T9, Mips::S0, Mips::S1, Mips::S2, Mips::S3, Mips::S4, Mips::S5, Mips::S6, Mips::S7, Mips::ZERO, Mips::AT, Mips::K0, Mips::K1, Mips::GP, Mips::SP, Mips::FP, Mips::RA, 
  };

  // CPURegs Bit set.
  const uint8_t CPURegsBits[] = {
    0xaa, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x50, 0x54, 0x55, 0x55, 0x55, 0x55, 0x55, 
  };

  // FGR32 Register Class...
  const uint16_t FGR32[] = {
    Mips::F0, Mips::F1, Mips::F2, Mips::F3, Mips::F4, Mips::F5, Mips::F6, Mips::F7, Mips::F8, Mips::F9, Mips::F10, Mips::F11, Mips::F12, Mips::F13, Mips::F14, Mips::F15, Mips::F16, Mips::F17, Mips::F18, Mips::F19, Mips::F20, Mips::F21, Mips::F22, Mips::F23, Mips::F24, Mips::F25, Mips::F26, Mips::F27, Mips::F28, Mips::F29, Mips::F30, Mips::F31, 
  };

  // FGR32 Bit set.
  const uint8_t FGR32Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07, 
  };

  // CPU64Regs Register Class...
  const uint16_t CPU64Regs[] = {
    Mips::V0_64, Mips::V1_64, Mips::A0_64, Mips::A1_64, Mips::A2_64, Mips::A3_64, Mips::T0_64, Mips::T1_64, Mips::T2_64, Mips::T3_64, Mips::T4_64, Mips::T5_64, Mips::T6_64, Mips::T7_64, Mips::T8_64, Mips::T9_64, Mips::S0_64, Mips::S1_64, Mips::S2_64, Mips::S3_64, Mips::S4_64, Mips::S5_64, Mips::S6_64, Mips::S7_64, Mips::ZERO_64, Mips::AT_64, Mips::K0_64, Mips::K1_64, Mips::GP_64, Mips::SP_64, Mips::FP_64, Mips::RA_64, 
  };

  // CPU64Regs Bit set.
  const uint8_t CPU64RegsBits[] = {
    0x54, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0xa0, 0xa8, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 
  };

  // FGR64 Register Class...
  const uint16_t FGR64[] = {
    Mips::D0_64, Mips::D1_64, Mips::D2_64, Mips::D3_64, Mips::D4_64, Mips::D5_64, Mips::D6_64, Mips::D7_64, Mips::D8_64, Mips::D9_64, Mips::D10_64, Mips::D11_64, Mips::D12_64, Mips::D13_64, Mips::D14_64, Mips::D15_64, Mips::D16_64, Mips::D17_64, Mips::D18_64, Mips::D19_64, Mips::D20_64, Mips::D21_64, Mips::D22_64, Mips::D23_64, Mips::D24_64, Mips::D25_64, Mips::D26_64, Mips::D27_64, Mips::D28_64, Mips::D29_64, Mips::D30_64, Mips::D31_64, 
  };

  // FGR64 Bit set.
  const uint8_t FGR64Bits[] = {
    0x00, 0x50, 0x55, 0x55, 0x55, 0xfd, 0xff, 0x07, 
  };

  // AFGR64 Register Class...
  const uint16_t AFGR64[] = {
    Mips::D0, Mips::D1, Mips::D6, Mips::D7, Mips::D2, Mips::D3, Mips::D4, Mips::D5, Mips::D8, Mips::D9, Mips::D10, Mips::D11, Mips::D12, Mips::D13, Mips::D14, Mips::D15, 
  };

  // AFGR64 Bit set.
  const uint8_t AFGR64Bits[] = {
    0x00, 0xa8, 0xaa, 0xaa, 0xaa, 0x02, 
  };

  // HILO Register Class...
  const uint16_t HILO[] = {
    Mips::HI, Mips::LO, 
  };

  // HILO Bit set.
  const uint8_t HILOBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
  };

  // HILO64 Register Class...
  const uint16_t HILO64[] = {
    Mips::HI64, Mips::LO64, 
  };

  // HILO64 Bit set.
  const uint8_t HILO64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 
  };

  // CCR Register Class...
  const uint16_t CCR[] = {
    Mips::FCR31, 
  };

  // CCR Bit set.
  const uint8_t CCRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
  };

  // HWRegs Register Class...
  const uint16_t HWRegs[] = {
    Mips::HWR29, 
  };

  // HWRegs Bit set.
  const uint8_t HWRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
  };

  // HWRegs64 Register Class...
  const uint16_t HWRegs64[] = {
    Mips::HWR29_64, 
  };

  // HWRegs64 Bit set.
  const uint8_t HWRegs64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
  };

}

extern const MCRegisterClass MipsMCRegisterClasses[] = {
  { "CPURegs", CPURegs, CPURegsBits, 32, sizeof(CPURegsBits), Mips::CPURegsRegClassID, 4, 4, 1, 1 },
  { "FGR32", FGR32, FGR32Bits, 32, sizeof(FGR32Bits), Mips::FGR32RegClassID, 4, 4, 1, 1 },
  { "CPU64Regs", CPU64Regs, CPU64RegsBits, 32, sizeof(CPU64RegsBits), Mips::CPU64RegsRegClassID, 8, 8, 1, 1 },
  { "FGR64", FGR64, FGR64Bits, 32, sizeof(FGR64Bits), Mips::FGR64RegClassID, 8, 8, 1, 1 },
  { "AFGR64", AFGR64, AFGR64Bits, 16, sizeof(AFGR64Bits), Mips::AFGR64RegClassID, 8, 8, 1, 1 },
  { "HILO", HILO, HILOBits, 2, sizeof(HILOBits), Mips::HILORegClassID, 4, 4, 1, 1 },
  { "HILO64", HILO64, HILO64Bits, 2, sizeof(HILO64Bits), Mips::HILO64RegClassID, 8, 8, 1, 1 },
  { "CCR", CCR, CCRBits, 1, sizeof(CCRBits), Mips::CCRRegClassID, 4, 4, 1, 1 },
  { "HWRegs", HWRegs, HWRegsBits, 1, sizeof(HWRegsBits), Mips::HWRegsRegClassID, 4, 4, 1, 1 },
  { "HWRegs64", HWRegs64, HWRegs64Bits, 1, sizeof(HWRegs64Bits), Mips::HWRegs64RegClassID, 8, 4, 1, 1 },
};

const uint16_t MipsSubRegTable[][3] = {
  /* A0 */
  {0},
  /* A0_64 */
  {Mips::A0, 0, 0},
  /* A1 */
  {0},
  /* A1_64 */
  {Mips::A1, 0, 0},
  /* A2 */
  {0},
  /* A2_64 */
  {Mips::A2, 0, 0},
  /* A3 */
  {0},
  /* A3_64 */
  {Mips::A3, 0, 0},
  /* AT */
  {0},
  /* AT_64 */
  {Mips::AT, 0, 0},
  /* D0 */
  {0, Mips::F0, Mips::F1},
  /* D0_64 */
  {Mips::F0, 0, 0},
  /* D1 */
  {0, Mips::F2, Mips::F3},
  /* D1_64 */
  {Mips::F1, 0, 0},
  /* D2 */
  {0, Mips::F4, Mips::F5},
  /* D2_64 */
  {Mips::F2, 0, 0},
  /* D3 */
  {0, Mips::F6, Mips::F7},
  /* D3_64 */
  {Mips::F3, 0, 0},
  /* D4 */
  {0, Mips::F8, Mips::F9},
  /* D4_64 */
  {Mips::F4, 0, 0},
  /* D5 */
  {0, Mips::F10, Mips::F11},
  /* D5_64 */
  {Mips::F5, 0, 0},
  /* D6 */
  {0, Mips::F12, Mips::F13},
  /* D6_64 */
  {Mips::F6, 0, 0},
  /* D7 */
  {0, Mips::F14, Mips::F15},
  /* D7_64 */
  {Mips::F7, 0, 0},
  /* D8 */
  {0, Mips::F16, Mips::F17},
  /* D8_64 */
  {Mips::F8, 0, 0},
  /* D9 */
  {0, Mips::F18, Mips::F19},
  /* D9_64 */
  {Mips::F9, 0, 0},
  /* D10 */
  {0, Mips::F20, Mips::F21},
  /* D10_64 */
  {Mips::F10, 0, 0},
  /* D11 */
  {0, Mips::F22, Mips::F23},
  /* D11_64 */
  {Mips::F11, 0, 0},
  /* D12 */
  {0, Mips::F24, Mips::F25},
  /* D12_64 */
  {Mips::F12, 0, 0},
  /* D13 */
  {0, Mips::F26, Mips::F27},
  /* D13_64 */
  {Mips::F13, 0, 0},
  /* D14 */
  {0, Mips::F28, Mips::F29},
  /* D14_64 */
  {Mips::F14, 0, 0},
  /* D15 */
  {0, Mips::F30, Mips::F31},
  /* D15_64 */
  {Mips::F15, 0, 0},
  /* D16_64 */
  {Mips::F16, 0, 0},
  /* D17_64 */
  {Mips::F17, 0, 0},
  /* D18_64 */
  {Mips::F18, 0, 0},
  /* D19_64 */
  {Mips::F19, 0, 0},
  /* D20_64 */
  {Mips::F20, 0, 0},
  /* D21_64 */
  {Mips::F21, 0, 0},
  /* D22_64 */
  {Mips::F22, 0, 0},
  /* D23_64 */
  {Mips::F23, 0, 0},
  /* D24_64 */
  {Mips::F24, 0, 0},
  /* D25_64 */
  {Mips::F25, 0, 0},
  /* D26_64 */
  {Mips::F26, 0, 0},
  /* D27_64 */
  {Mips::F27, 0, 0},
  /* D28_64 */
  {Mips::F28, 0, 0},
  /* D29_64 */
  {Mips::F29, 0, 0},
  /* D30_64 */
  {Mips::F30, 0, 0},
  /* D31_64 */
  {Mips::F31, 0, 0},
  /* F0 */
  {0},
  /* F1 */
  {0},
  /* F2 */
  {0},
  /* F3 */
  {0},
  /* F4 */
  {0},
  /* F5 */
  {0},
  /* F6 */
  {0},
  /* F7 */
  {0},
  /* F8 */
  {0},
  /* F9 */
  {0},
  /* F10 */
  {0},
  /* F11 */
  {0},
  /* F12 */
  {0},
  /* F13 */
  {0},
  /* F14 */
  {0},
  /* F15 */
  {0},
  /* F16 */
  {0},
  /* F17 */
  {0},
  /* F18 */
  {0},
  /* F19 */
  {0},
  /* F20 */
  {0},
  /* F21 */
  {0},
  /* F22 */
  {0},
  /* F23 */
  {0},
  /* F24 */
  {0},
  /* F25 */
  {0},
  /* F26 */
  {0},
  /* F27 */
  {0},
  /* F28 */
  {0},
  /* F29 */
  {0},
  /* F30 */
  {0},
  /* F31 */
  {0},
  /* FCR31 */
  {0},
  /* FP */
  {0},
  /* FP_64 */
  {Mips::FP, 0, 0},
  /* GP */
  {0},
  /* GP_64 */
  {Mips::GP, 0, 0},
  /* HI */
  {0},
  /* HI64 */
  {Mips::HI, 0, 0},
  /* HWR29 */
  {0},
  /* HWR29_64 */
  {0},
  /* K0 */
  {0},
  /* K0_64 */
  {Mips::K0, 0, 0},
  /* K1 */
  {0},
  /* K1_64 */
  {Mips::K1, 0, 0},
  /* LO */
  {0},
  /* LO64 */
  {Mips::LO, 0, 0},
  /* RA */
  {0},
  /* RA_64 */
  {Mips::RA, 0, 0},
  /* S0 */
  {0},
  /* S0_64 */
  {Mips::S0, 0, 0},
  /* S1 */
  {0},
  /* S1_64 */
  {Mips::S1, 0, 0},
  /* S2 */
  {0},
  /* S2_64 */
  {Mips::S2, 0, 0},
  /* S3 */
  {0},
  /* S3_64 */
  {Mips::S3, 0, 0},
  /* S4 */
  {0},
  /* S4_64 */
  {Mips::S4, 0, 0},
  /* S5 */
  {0},
  /* S5_64 */
  {Mips::S5, 0, 0},
  /* S6 */
  {0},
  /* S6_64 */
  {Mips::S6, 0, 0},
  /* S7 */
  {0},
  /* S7_64 */
  {Mips::S7, 0, 0},
  /* SP */
  {0},
  /* SP_64 */
  {Mips::SP, 0, 0},
  /* T0 */
  {0},
  /* T0_64 */
  {Mips::T0, 0, 0},
  /* T1 */
  {0},
  /* T1_64 */
  {Mips::T1, 0, 0},
  /* T2 */
  {0},
  /* T2_64 */
  {Mips::T2, 0, 0},
  /* T3 */
  {0},
  /* T3_64 */
  {Mips::T3, 0, 0},
  /* T4 */
  {0},
  /* T4_64 */
  {Mips::T4, 0, 0},
  /* T5 */
  {0},
  /* T5_64 */
  {Mips::T5, 0, 0},
  /* T6 */
  {0},
  /* T6_64 */
  {Mips::T6, 0, 0},
  /* T7 */
  {0},
  /* T7_64 */
  {Mips::T7, 0, 0},
  /* T8 */
  {0},
  /* T8_64 */
  {Mips::T8, 0, 0},
  /* T9 */
  {0},
  /* T9_64 */
  {Mips::T9, 0, 0},
  /* V0 */
  {0},
  /* V0_64 */
  {Mips::V0, 0, 0},
  /* V1 */
  {0},
  /* V1_64 */
  {Mips::V1, 0, 0},
  /* ZERO */
  {0},
  /* ZERO_64 */
  {Mips::ZERO, 0, 0},
};

const uint16_t *getMipsSubRegTable() {
  return (const uint16_t *)MipsSubRegTable;
}

// Mips Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair MipsDwarfFlavour0Dwarf2L[] = {
  { 0U, Mips::ZERO_64 },
  { 1U, Mips::AT_64 },
  { 2U, Mips::V0_64 },
  { 3U, Mips::V1_64 },
  { 4U, Mips::A0_64 },
  { 5U, Mips::A1_64 },
  { 6U, Mips::A2_64 },
  { 7U, Mips::A3_64 },
  { 8U, Mips::T0_64 },
  { 9U, Mips::T1_64 },
  { 10U, Mips::T2_64 },
  { 11U, Mips::T3_64 },
  { 12U, Mips::T4_64 },
  { 13U, Mips::T5_64 },
  { 14U, Mips::T6_64 },
  { 15U, Mips::T7_64 },
  { 16U, Mips::S0_64 },
  { 17U, Mips::S1_64 },
  { 18U, Mips::S2_64 },
  { 19U, Mips::S3_64 },
  { 20U, Mips::S4_64 },
  { 21U, Mips::S5_64 },
  { 22U, Mips::S6_64 },
  { 23U, Mips::S7_64 },
  { 24U, Mips::T8_64 },
  { 25U, Mips::T9_64 },
  { 26U, Mips::K0_64 },
  { 27U, Mips::K1_64 },
  { 28U, Mips::GP_64 },
  { 29U, Mips::SP_64 },
  { 30U, Mips::FP_64 },
  { 31U, Mips::RA_64 },
  { 32U, Mips::F0 },
  { 33U, Mips::F1 },
  { 34U, Mips::F2 },
  { 35U, Mips::F3 },
  { 36U, Mips::F4 },
  { 37U, Mips::F5 },
  { 38U, Mips::F6 },
  { 39U, Mips::F7 },
  { 40U, Mips::F8 },
  { 41U, Mips::F9 },
  { 42U, Mips::F10 },
  { 43U, Mips::F11 },
  { 44U, Mips::F12 },
  { 45U, Mips::F13 },
  { 46U, Mips::F14 },
  { 47U, Mips::F15 },
  { 48U, Mips::F16 },
  { 49U, Mips::F17 },
  { 50U, Mips::F18 },
  { 51U, Mips::F19 },
  { 52U, Mips::F20 },
  { 53U, Mips::F21 },
  { 54U, Mips::F22 },
  { 55U, Mips::F23 },
  { 56U, Mips::F24 },
  { 57U, Mips::F25 },
  { 58U, Mips::F26 },
  { 59U, Mips::F27 },
  { 60U, Mips::F28 },
  { 61U, Mips::F29 },
  { 62U, Mips::F30 },
  { 63U, Mips::F31 },
  { 64U, Mips::HI },
  { 65U, Mips::LO },
};
extern const unsigned MipsDwarfFlavour0Dwarf2LSize = sizeof(MipsDwarfFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair MipsEHFlavour0Dwarf2L[] = {
  { 0U, Mips::ZERO_64 },
  { 1U, Mips::AT_64 },
  { 2U, Mips::V0_64 },
  { 3U, Mips::V1_64 },
  { 4U, Mips::A0_64 },
  { 5U, Mips::A1_64 },
  { 6U, Mips::A2_64 },
  { 7U, Mips::A3_64 },
  { 8U, Mips::T0_64 },
  { 9U, Mips::T1_64 },
  { 10U, Mips::T2_64 },
  { 11U, Mips::T3_64 },
  { 12U, Mips::T4_64 },
  { 13U, Mips::T5_64 },
  { 14U, Mips::T6_64 },
  { 15U, Mips::T7_64 },
  { 16U, Mips::S0_64 },
  { 17U, Mips::S1_64 },
  { 18U, Mips::S2_64 },
  { 19U, Mips::S3_64 },
  { 20U, Mips::S4_64 },
  { 21U, Mips::S5_64 },
  { 22U, Mips::S6_64 },
  { 23U, Mips::S7_64 },
  { 24U, Mips::T8_64 },
  { 25U, Mips::T9_64 },
  { 26U, Mips::K0_64 },
  { 27U, Mips::K1_64 },
  { 28U, Mips::GP_64 },
  { 29U, Mips::SP_64 },
  { 30U, Mips::FP_64 },
  { 31U, Mips::RA_64 },
  { 32U, Mips::F0 },
  { 33U, Mips::F1 },
  { 34U, Mips::F2 },
  { 35U, Mips::F3 },
  { 36U, Mips::F4 },
  { 37U, Mips::F5 },
  { 38U, Mips::F6 },
  { 39U, Mips::F7 },
  { 40U, Mips::F8 },
  { 41U, Mips::F9 },
  { 42U, Mips::F10 },
  { 43U, Mips::F11 },
  { 44U, Mips::F12 },
  { 45U, Mips::F13 },
  { 46U, Mips::F14 },
  { 47U, Mips::F15 },
  { 48U, Mips::F16 },
  { 49U, Mips::F17 },
  { 50U, Mips::F18 },
  { 51U, Mips::F19 },
  { 52U, Mips::F20 },
  { 53U, Mips::F21 },
  { 54U, Mips::F22 },
  { 55U, Mips::F23 },
  { 56U, Mips::F24 },
  { 57U, Mips::F25 },
  { 58U, Mips::F26 },
  { 59U, Mips::F27 },
  { 60U, Mips::F28 },
  { 61U, Mips::F29 },
  { 62U, Mips::F30 },
  { 63U, Mips::F31 },
  { 64U, Mips::HI },
  { 65U, Mips::LO },
};
extern const unsigned MipsEHFlavour0Dwarf2LSize = sizeof(MipsEHFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair MipsDwarfFlavour0L2Dwarf[] = {
  { Mips::A0, 4U },
  { Mips::A0_64, 4U },
  { Mips::A1, 5U },
  { Mips::A1_64, 5U },
  { Mips::A2, 6U },
  { Mips::A2_64, 6U },
  { Mips::A3, 7U },
  { Mips::A3_64, 7U },
  { Mips::AT, 1U },
  { Mips::AT_64, 1U },
  { Mips::D0_64, 32U },
  { Mips::D1_64, 33U },
  { Mips::D2_64, 34U },
  { Mips::D3_64, 35U },
  { Mips::D4_64, 36U },
  { Mips::D5_64, 37U },
  { Mips::D6_64, 38U },
  { Mips::D7_64, 39U },
  { Mips::D8_64, 40U },
  { Mips::D9_64, 41U },
  { Mips::D10_64, 42U },
  { Mips::D11_64, 43U },
  { Mips::D12_64, 44U },
  { Mips::D13_64, 45U },
  { Mips::D14_64, 46U },
  { Mips::D15_64, 47U },
  { Mips::D16_64, 48U },
  { Mips::D17_64, 49U },
  { Mips::D18_64, 50U },
  { Mips::D19_64, 51U },
  { Mips::D20_64, 52U },
  { Mips::D21_64, 53U },
  { Mips::D22_64, 54U },
  { Mips::D23_64, 55U },
  { Mips::D24_64, 56U },
  { Mips::D25_64, 57U },
  { Mips::D26_64, 58U },
  { Mips::D27_64, 59U },
  { Mips::D28_64, 60U },
  { Mips::D29_64, 61U },
  { Mips::D30_64, 62U },
  { Mips::D31_64, 63U },
  { Mips::F0, 32U },
  { Mips::F1, 33U },
  { Mips::F2, 34U },
  { Mips::F3, 35U },
  { Mips::F4, 36U },
  { Mips::F5, 37U },
  { Mips::F6, 38U },
  { Mips::F7, 39U },
  { Mips::F8, 40U },
  { Mips::F9, 41U },
  { Mips::F10, 42U },
  { Mips::F11, 43U },
  { Mips::F12, 44U },
  { Mips::F13, 45U },
  { Mips::F14, 46U },
  { Mips::F15, 47U },
  { Mips::F16, 48U },
  { Mips::F17, 49U },
  { Mips::F18, 50U },
  { Mips::F19, 51U },
  { Mips::F20, 52U },
  { Mips::F21, 53U },
  { Mips::F22, 54U },
  { Mips::F23, 55U },
  { Mips::F24, 56U },
  { Mips::F25, 57U },
  { Mips::F26, 58U },
  { Mips::F27, 59U },
  { Mips::F28, 60U },
  { Mips::F29, 61U },
  { Mips::F30, 62U },
  { Mips::F31, 63U },
  { Mips::FP, 30U },
  { Mips::FP_64, 30U },
  { Mips::GP, 28U },
  { Mips::GP_64, 28U },
  { Mips::HI, 64U },
  { Mips::K0, 26U },
  { Mips::K0_64, 26U },
  { Mips::K1, 27U },
  { Mips::K1_64, 27U },
  { Mips::LO, 65U },
  { Mips::RA, 31U },
  { Mips::RA_64, 31U },
  { Mips::S0, 16U },
  { Mips::S0_64, 16U },
  { Mips::S1, 17U },
  { Mips::S1_64, 17U },
  { Mips::S2, 18U },
  { Mips::S2_64, 18U },
  { Mips::S3, 19U },
  { Mips::S3_64, 19U },
  { Mips::S4, 20U },
  { Mips::S4_64, 20U },
  { Mips::S5, 21U },
  { Mips::S5_64, 21U },
  { Mips::S6, 22U },
  { Mips::S6_64, 22U },
  { Mips::S7, 23U },
  { Mips::S7_64, 23U },
  { Mips::SP, 29U },
  { Mips::SP_64, 29U },
  { Mips::T0, 8U },
  { Mips::T0_64, 8U },
  { Mips::T1, 9U },
  { Mips::T1_64, 9U },
  { Mips::T2, 10U },
  { Mips::T2_64, 10U },
  { Mips::T3, 11U },
  { Mips::T3_64, 11U },
  { Mips::T4, 12U },
  { Mips::T4_64, 12U },
  { Mips::T5, 13U },
  { Mips::T5_64, 13U },
  { Mips::T6, 14U },
  { Mips::T6_64, 14U },
  { Mips::T7, 15U },
  { Mips::T7_64, 15U },
  { Mips::T8, 24U },
  { Mips::T8_64, 24U },
  { Mips::T9, 25U },
  { Mips::T9_64, 25U },
  { Mips::V0, 2U },
  { Mips::V0_64, 2U },
  { Mips::V1, 3U },
  { Mips::V1_64, 3U },
  { Mips::ZERO, 0U },
  { Mips::ZERO_64, 0U },
};
extern const unsigned MipsDwarfFlavour0L2DwarfSize = sizeof(MipsDwarfFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair MipsEHFlavour0L2Dwarf[] = {
  { Mips::A0, 4U },
  { Mips::A0_64, 4U },
  { Mips::A1, 5U },
  { Mips::A1_64, 5U },
  { Mips::A2, 6U },
  { Mips::A2_64, 6U },
  { Mips::A3, 7U },
  { Mips::A3_64, 7U },
  { Mips::AT, 1U },
  { Mips::AT_64, 1U },
  { Mips::D0_64, 32U },
  { Mips::D1_64, 33U },
  { Mips::D2_64, 34U },
  { Mips::D3_64, 35U },
  { Mips::D4_64, 36U },
  { Mips::D5_64, 37U },
  { Mips::D6_64, 38U },
  { Mips::D7_64, 39U },
  { Mips::D8_64, 40U },
  { Mips::D9_64, 41U },
  { Mips::D10_64, 42U },
  { Mips::D11_64, 43U },
  { Mips::D12_64, 44U },
  { Mips::D13_64, 45U },
  { Mips::D14_64, 46U },
  { Mips::D15_64, 47U },
  { Mips::D16_64, 48U },
  { Mips::D17_64, 49U },
  { Mips::D18_64, 50U },
  { Mips::D19_64, 51U },
  { Mips::D20_64, 52U },
  { Mips::D21_64, 53U },
  { Mips::D22_64, 54U },
  { Mips::D23_64, 55U },
  { Mips::D24_64, 56U },
  { Mips::D25_64, 57U },
  { Mips::D26_64, 58U },
  { Mips::D27_64, 59U },
  { Mips::D28_64, 60U },
  { Mips::D29_64, 61U },
  { Mips::D30_64, 62U },
  { Mips::D31_64, 63U },
  { Mips::F0, 32U },
  { Mips::F1, 33U },
  { Mips::F2, 34U },
  { Mips::F3, 35U },
  { Mips::F4, 36U },
  { Mips::F5, 37U },
  { Mips::F6, 38U },
  { Mips::F7, 39U },
  { Mips::F8, 40U },
  { Mips::F9, 41U },
  { Mips::F10, 42U },
  { Mips::F11, 43U },
  { Mips::F12, 44U },
  { Mips::F13, 45U },
  { Mips::F14, 46U },
  { Mips::F15, 47U },
  { Mips::F16, 48U },
  { Mips::F17, 49U },
  { Mips::F18, 50U },
  { Mips::F19, 51U },
  { Mips::F20, 52U },
  { Mips::F21, 53U },
  { Mips::F22, 54U },
  { Mips::F23, 55U },
  { Mips::F24, 56U },
  { Mips::F25, 57U },
  { Mips::F26, 58U },
  { Mips::F27, 59U },
  { Mips::F28, 60U },
  { Mips::F29, 61U },
  { Mips::F30, 62U },
  { Mips::F31, 63U },
  { Mips::FP, 30U },
  { Mips::FP_64, 30U },
  { Mips::GP, 28U },
  { Mips::GP_64, 28U },
  { Mips::HI, 64U },
  { Mips::K0, 26U },
  { Mips::K0_64, 26U },
  { Mips::K1, 27U },
  { Mips::K1_64, 27U },
  { Mips::LO, 65U },
  { Mips::RA, 31U },
  { Mips::RA_64, 31U },
  { Mips::S0, 16U },
  { Mips::S0_64, 16U },
  { Mips::S1, 17U },
  { Mips::S1_64, 17U },
  { Mips::S2, 18U },
  { Mips::S2_64, 18U },
  { Mips::S3, 19U },
  { Mips::S3_64, 19U },
  { Mips::S4, 20U },
  { Mips::S4_64, 20U },
  { Mips::S5, 21U },
  { Mips::S5_64, 21U },
  { Mips::S6, 22U },
  { Mips::S6_64, 22U },
  { Mips::S7, 23U },
  { Mips::S7_64, 23U },
  { Mips::SP, 29U },
  { Mips::SP_64, 29U },
  { Mips::T0, 8U },
  { Mips::T0_64, 8U },
  { Mips::T1, 9U },
  { Mips::T1_64, 9U },
  { Mips::T2, 10U },
  { Mips::T2_64, 10U },
  { Mips::T3, 11U },
  { Mips::T3_64, 11U },
  { Mips::T4, 12U },
  { Mips::T4_64, 12U },
  { Mips::T5, 13U },
  { Mips::T5_64, 13U },
  { Mips::T6, 14U },
  { Mips::T6_64, 14U },
  { Mips::T7, 15U },
  { Mips::T7_64, 15U },
  { Mips::T8, 24U },
  { Mips::T8_64, 24U },
  { Mips::T9, 25U },
  { Mips::T9_64, 25U },
  { Mips::V0, 2U },
  { Mips::V0_64, 2U },
  { Mips::V1, 3U },
  { Mips::V1_64, 3U },
  { Mips::ZERO, 0U },
  { Mips::ZERO_64, 0U },
};
extern const unsigned MipsEHFlavour0L2DwarfSize = sizeof(MipsEHFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

static inline void InitMipsMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0) {
  RI->InitMCRegisterInfo(MipsRegDesc, 152, RA, MipsMCRegisterClasses, 10, MipsRegLists, (uint16_t*)MipsSubRegTable, 3);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(MipsDwarfFlavour0Dwarf2L, MipsDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(MipsEHFlavour0Dwarf2L, MipsEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(MipsDwarfFlavour0L2Dwarf, MipsDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(MipsEHFlavour0L2Dwarf, MipsEHFlavour0L2DwarfSize, true);
    break;
  }
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

struct MipsGenRegisterInfo : public TargetRegisterInfo {
  explicit MipsGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0);
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

namespace Mips { // Register classes
  extern const TargetRegisterClass CPURegsRegClass;
  static const TargetRegisterClass * const CPURegsRegisterClass = &CPURegsRegClass;
  extern const TargetRegisterClass FGR32RegClass;
  static const TargetRegisterClass * const FGR32RegisterClass = &FGR32RegClass;
  extern const TargetRegisterClass CPU64RegsRegClass;
  static const TargetRegisterClass * const CPU64RegsRegisterClass = &CPU64RegsRegClass;
  extern const TargetRegisterClass FGR64RegClass;
  static const TargetRegisterClass * const FGR64RegisterClass = &FGR64RegClass;
  extern const TargetRegisterClass AFGR64RegClass;
  static const TargetRegisterClass * const AFGR64RegisterClass = &AFGR64RegClass;
  extern const TargetRegisterClass HILORegClass;
  static const TargetRegisterClass * const HILORegisterClass = &HILORegClass;
  extern const TargetRegisterClass HILO64RegClass;
  static const TargetRegisterClass * const HILO64RegisterClass = &HILO64RegClass;
  extern const TargetRegisterClass CCRRegClass;
  static const TargetRegisterClass * const CCRRegisterClass = &CCRRegClass;
  extern const TargetRegisterClass HWRegsRegClass;
  static const TargetRegisterClass * const HWRegsRegisterClass = &HWRegsRegClass;
  extern const TargetRegisterClass HWRegs64RegClass;
  static const TargetRegisterClass * const HWRegs64RegisterClass = &HWRegs64RegClass;
} // end of namespace Mips

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

extern const MCRegisterClass MipsMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i32, MVT::Other,
  /* 2 */ MVT::i64, MVT::Other,
  /* 4 */ MVT::f32, MVT::Other,
  /* 6 */ MVT::f64, MVT::Other,
};

static const TargetRegisterClass *const NullRegClasses[] = { NULL };

// CPURegs Super-register Classes...
static const TargetRegisterClass *const CPURegsSuperRegClasses[] = {
  &Mips::CPU64RegsRegClass, NULL
};

// FGR32 Super-register Classes...
static const TargetRegisterClass *const FGR32SuperRegClasses[] = {
  &Mips::FGR64RegClass, &Mips::AFGR64RegClass, NULL
};

// CPU64Regs Super-register Classes...
static const TargetRegisterClass *const CPU64RegsSuperRegClasses[] = {
  NULL
};

// FGR64 Super-register Classes...
static const TargetRegisterClass *const FGR64SuperRegClasses[] = {
  NULL
};

// AFGR64 Super-register Classes...
static const TargetRegisterClass *const AFGR64SuperRegClasses[] = {
  NULL
};

// HILO Super-register Classes...
static const TargetRegisterClass *const HILOSuperRegClasses[] = {
  &Mips::HILO64RegClass, NULL
};

// HILO64 Super-register Classes...
static const TargetRegisterClass *const HILO64SuperRegClasses[] = {
  NULL
};

// CCR Super-register Classes...
static const TargetRegisterClass *const CCRSuperRegClasses[] = {
  NULL
};

// HWRegs Super-register Classes...
static const TargetRegisterClass *const HWRegsSuperRegClasses[] = {
  NULL
};

// HWRegs64 Super-register Classes...
static const TargetRegisterClass *const HWRegs64SuperRegClasses[] = {
  NULL
};

static const uint32_t CPURegsSubclassMask[] = {
  0x00000001, 
};

static const uint32_t FGR32SubclassMask[] = {
  0x00000002, 
};

static const uint32_t CPU64RegsSubclassMask[] = {
  0x00000004, 
};

static const uint32_t FGR64SubclassMask[] = {
  0x00000008, 
};

static const uint32_t AFGR64SubclassMask[] = {
  0x00000010, 
};

static const uint32_t HILOSubclassMask[] = {
  0x00000020, 
};

static const uint32_t HILO64SubclassMask[] = {
  0x00000040, 
};

static const uint32_t CCRSubclassMask[] = {
  0x00000080, 
};

static const uint32_t HWRegsSubclassMask[] = {
  0x00000100, 
};

static const uint32_t HWRegs64SubclassMask[] = {
  0x00000200, 
};

namespace Mips {   // Register class instances
  extern const TargetRegisterClass CPURegsRegClass = {
    &MipsMCRegisterClasses[CPURegsRegClassID],
    VTLists + 0,
    CPURegsSubclassMask,
    NullRegClasses,
    CPURegsSuperRegClasses,
    0
  };

  extern const TargetRegisterClass FGR32RegClass = {
    &MipsMCRegisterClasses[FGR32RegClassID],
    VTLists + 4,
    FGR32SubclassMask,
    NullRegClasses,
    FGR32SuperRegClasses,
    0
  };

  extern const TargetRegisterClass CPU64RegsRegClass = {
    &MipsMCRegisterClasses[CPU64RegsRegClassID],
    VTLists + 2,
    CPU64RegsSubclassMask,
    NullRegClasses,
    CPU64RegsSuperRegClasses,
    0
  };

  extern const TargetRegisterClass FGR64RegClass = {
    &MipsMCRegisterClasses[FGR64RegClassID],
    VTLists + 6,
    FGR64SubclassMask,
    NullRegClasses,
    FGR64SuperRegClasses,
    0
  };

  extern const TargetRegisterClass AFGR64RegClass = {
    &MipsMCRegisterClasses[AFGR64RegClassID],
    VTLists + 6,
    AFGR64SubclassMask,
    NullRegClasses,
    AFGR64SuperRegClasses,
    0
  };

  extern const TargetRegisterClass HILORegClass = {
    &MipsMCRegisterClasses[HILORegClassID],
    VTLists + 0,
    HILOSubclassMask,
    NullRegClasses,
    HILOSuperRegClasses,
    0
  };

  extern const TargetRegisterClass HILO64RegClass = {
    &MipsMCRegisterClasses[HILO64RegClassID],
    VTLists + 2,
    HILO64SubclassMask,
    NullRegClasses,
    HILO64SuperRegClasses,
    0
  };

  extern const TargetRegisterClass CCRRegClass = {
    &MipsMCRegisterClasses[CCRRegClassID],
    VTLists + 0,
    CCRSubclassMask,
    NullRegClasses,
    CCRSuperRegClasses,
    0
  };

  extern const TargetRegisterClass HWRegsRegClass = {
    &MipsMCRegisterClasses[HWRegsRegClassID],
    VTLists + 0,
    HWRegsSubclassMask,
    NullRegClasses,
    HWRegsSuperRegClasses,
    0
  };

  extern const TargetRegisterClass HWRegs64RegClass = {
    &MipsMCRegisterClasses[HWRegs64RegClassID],
    VTLists + 2,
    HWRegs64SubclassMask,
    NullRegClasses,
    HWRegs64SuperRegClasses,
    0
  };

}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &Mips::CPURegsRegClass,
    &Mips::FGR32RegClass,
    &Mips::CPU64RegsRegClass,
    &Mips::FGR64RegClass,
    &Mips::AFGR64RegClass,
    &Mips::HILORegClass,
    &Mips::HILO64RegClass,
    &Mips::CCRRegClass,
    &Mips::HWRegsRegClass,
    &Mips::HWRegs64RegClass,
  };
}

static const TargetRegisterInfoDesc MipsRegInfoDesc[] = { // Extra Descriptors
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

static const char *const MipsSubRegIndexTable[] = { "sub_32", "sub_fpeven", "sub_fpodd" };


unsigned MipsGenRegisterInfo::composeSubRegIndices(unsigned IdxA, unsigned IdxB) const {
  switch (IdxA) {
  default:
    return IdxB;
  }
}

const TargetRegisterClass *MipsGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[10][3] = {
    {	// CPURegs
      0,	// sub_32
      0,	// sub_fpeven
      0,	// sub_fpodd
    },
    {	// FGR32
      0,	// sub_32
      0,	// sub_fpeven
      0,	// sub_fpodd
    },
    {	// CPU64Regs
      3,	// sub_32 -> CPU64Regs
      0,	// sub_fpeven
      0,	// sub_fpodd
    },
    {	// FGR64
      4,	// sub_32 -> FGR64
      0,	// sub_fpeven
      0,	// sub_fpodd
    },
    {	// AFGR64
      0,	// sub_32
      5,	// sub_fpeven -> AFGR64
      5,	// sub_fpodd -> AFGR64
    },
    {	// HILO
      0,	// sub_32
      0,	// sub_fpeven
      0,	// sub_fpodd
    },
    {	// HILO64
      7,	// sub_32 -> HILO64
      0,	// sub_fpeven
      0,	// sub_fpodd
    },
    {	// CCR
      0,	// sub_32
      0,	// sub_fpeven
      0,	// sub_fpodd
    },
    {	// HWRegs
      0,	// sub_32
      0,	// sub_fpeven
      0,	// sub_fpodd
    },
    {	// HWRegs64
      0,	// sub_32
      0,	// sub_fpeven
      0,	// sub_fpodd
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 3 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : 0;
}

const TargetRegisterClass *MipsGenRegisterInfo::getMatchingSuperRegClass(const TargetRegisterClass *A, const TargetRegisterClass *B, unsigned Idx) const {
  static const uint32_t Table[10][3][1] = {
    {	// CPURegs
      { 0x00000004, },	// sub_32
      { 0x00000000, },	// sub_fpeven
      { 0x00000000, },	// sub_fpodd
    },
    {	// FGR32
      { 0x00000008, },	// sub_32
      { 0x00000010, },	// sub_fpeven
      { 0x00000010, },	// sub_fpodd
    },
    {	// CPU64Regs
      { 0x00000000, },	// sub_32
      { 0x00000000, },	// sub_fpeven
      { 0x00000000, },	// sub_fpodd
    },
    {	// FGR64
      { 0x00000000, },	// sub_32
      { 0x00000000, },	// sub_fpeven
      { 0x00000000, },	// sub_fpodd
    },
    {	// AFGR64
      { 0x00000000, },	// sub_32
      { 0x00000000, },	// sub_fpeven
      { 0x00000000, },	// sub_fpodd
    },
    {	// HILO
      { 0x00000040, },	// sub_32
      { 0x00000000, },	// sub_fpeven
      { 0x00000000, },	// sub_fpodd
    },
    {	// HILO64
      { 0x00000000, },	// sub_32
      { 0x00000000, },	// sub_fpeven
      { 0x00000000, },	// sub_fpodd
    },
    {	// CCR
      { 0x00000000, },	// sub_32
      { 0x00000000, },	// sub_fpeven
      { 0x00000000, },	// sub_fpodd
    },
    {	// HWRegs
      { 0x00000000, },	// sub_32
      { 0x00000000, },	// sub_fpeven
      { 0x00000000, },	// sub_fpodd
    },
    {	// HWRegs64
      { 0x00000000, },	// sub_32
      { 0x00000000, },	// sub_fpeven
      { 0x00000000, },	// sub_fpodd
    },
  };
  assert(A && B && "Missing regclass");
  --Idx;
  assert(Idx < 3 && "Bad subreg");
  const uint32_t *TV = Table[B->getID()][Idx];
  const uint32_t *SC = A->getSubClassMask();
  for (unsigned i = 0; i != 1; ++i)
    if (unsigned Common = TV[i] & SC[i])
      return getRegClass(32*i + CountTrailingZeros_32(Common));
  return 0;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &MipsGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 32},  	// CPURegs
    {1, 32},  	// FGR32
    {1, 32},  	// CPU64Regs
    {1, 32},  	// FGR64
    {2, 32},  	// AFGR64
    {1, 2},  	// HILO
    {1, 2},  	// HILO64
    {1, 1},  	// CCR
    {1, 1},  	// HWRegs
    {1, 1},  	// HWRegs64
    {0, 0} };
  return RCWeightTable[RC->getID()];
}


// Get the number of dimensions of register pressure.
unsigned MipsGenRegisterInfo::getNumRegPressureSets() const {
  return 6;
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned MipsGenRegisterInfo::
getRegPressureSetLimit(unsigned Idx) const {
  static const unsigned PressureLimitTable[] = {
    32,  	// 0: CPURegs
    32,  	// 1: FGR32
    2,  	// 2: HILO
    1,  	// 3: CCR
    1,  	// 4: HWRegs
    1,  	// 5: HWRegs64
    0 };
  return PressureLimitTable[Idx];
}

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* MipsGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const int RCSetsTable[] = {
    0,  -1,  	// CPURegs
    1,  -1,  	// FGR32
    0,  -1,  	// CPU64Regs
    1,  -1,  	// FGR64
    1,  -1,  	// AFGR64
    2,  -1,  	// HILO
    2,  -1,  	// HILO64
    3,  -1,  	// CCR
    4,  -1,  	// HWRegs
    5,  -1,  	// HWRegs64
    -1 };
  static const unsigned RCSetStartTable[] = {
    0,2,4,6,8,10,12,14,16,18,0 };
  unsigned SetListStart = RCSetStartTable[RC->getID()];
  return &RCSetsTable[SetListStart];
}

extern const MCRegisterDesc MipsRegDesc[];
extern const uint16_t MipsRegLists[];
extern const uint16_t *getMipsSubRegTable();
// Mips Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair MipsDwarfFlavour0Dwarf2L[];
extern const unsigned MipsDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair MipsEHFlavour0Dwarf2L[];
extern const unsigned MipsEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair MipsDwarfFlavour0L2Dwarf[];
extern const unsigned MipsDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair MipsEHFlavour0L2Dwarf[];
extern const unsigned MipsEHFlavour0L2DwarfSize;

MipsGenRegisterInfo::
MipsGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour)
  : TargetRegisterInfo(MipsRegInfoDesc, RegisterClasses, RegisterClasses+10,
             MipsSubRegIndexTable) {
  InitMCRegisterInfo(MipsRegDesc, 152, RA,
                     MipsMCRegisterClasses, 10,
                     MipsRegLists,
                     getMipsSubRegTable(), 3);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(MipsDwarfFlavour0Dwarf2L, MipsDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(MipsEHFlavour0Dwarf2L, MipsEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(MipsDwarfFlavour0L2Dwarf, MipsDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(MipsEHFlavour0L2Dwarf, MipsEHFlavour0L2DwarfSize, true);
    break;
  }
}

static const uint16_t CSR_N32_SaveList[] = { Mips::D31_64, Mips::D29_64, Mips::D27_64, Mips::D25_64, Mips::D24_64, Mips::D23_64, Mips::D22_64, Mips::D21_64, Mips::RA_64, Mips::FP_64, Mips::GP_64, Mips::S7_64, Mips::S6_64, Mips::S5_64, Mips::S4_64, Mips::S3_64, Mips::S2_64, Mips::S1_64, Mips::S0_64, 0 };
static const uint32_t CSR_N32_RegMask[] = { 0x00000000, 0x055f000a, 0xf55f0000, 0x0ffffc00, 0x00000000, };
static const uint16_t CSR_N64_SaveList[] = { Mips::D31_64, Mips::D30_64, Mips::D29_64, Mips::D28_64, Mips::D27_64, Mips::D26_64, Mips::D25_64, Mips::D24_64, Mips::RA_64, Mips::FP_64, Mips::GP_64, Mips::S7_64, Mips::S6_64, Mips::S5_64, Mips::S4_64, Mips::S3_64, Mips::S2_64, Mips::S1_64, Mips::S0_64, 0 };
static const uint32_t CSR_N64_RegMask[] = { 0x00000000, 0x07f802a8, 0xf7f80000, 0x0ffffc00, 0x00000000, };
static const uint16_t CSR_O32_SaveList[] = { Mips::D15, Mips::D14, Mips::D13, Mips::D12, Mips::D11, Mips::D10, Mips::RA, Mips::FP, Mips::S7, Mips::S6, Mips::S5, Mips::S4, Mips::S3, Mips::S2, Mips::S1, Mips::S0, 0 };
static const uint32_t CSR_O32_RegMask[] = { 0x80000000, 0x000002aa, 0x17ff8000, 0x05555400, 0x00000000, };
static const uint16_t CSR_SingleFloatOnly_SaveList[] = { Mips::F31, Mips::F30, Mips::F29, Mips::F28, Mips::F27, Mips::F26, Mips::F25, Mips::F24, Mips::F23, Mips::F22, Mips::F21, Mips::F20, Mips::RA, Mips::FP, Mips::S7, Mips::S6, Mips::S5, Mips::S4, Mips::S3, Mips::S2, Mips::S1, Mips::S0, 0 };
static const uint32_t CSR_SingleFloatOnly_RegMask[] = { 0x80000000, 0x000002aa, 0x17ff8000, 0x05555400, 0x00000000, };


} // End llvm namespace 
#endif // GET_REGINFO_TARGET_DESC

