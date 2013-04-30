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
extern const MCRegisterClass PPCMCRegisterClasses[];

namespace PPC {
enum {
  NoRegister,
  CARRY = 1,
  CR0 = 2,
  CR0EQ = 3,
  CR0GT = 4,
  CR0LT = 5,
  CR0UN = 6,
  CR1 = 7,
  CR1EQ = 8,
  CR1GT = 9,
  CR1LT = 10,
  CR1UN = 11,
  CR2 = 12,
  CR2EQ = 13,
  CR2GT = 14,
  CR2LT = 15,
  CR2UN = 16,
  CR3 = 17,
  CR3EQ = 18,
  CR3GT = 19,
  CR3LT = 20,
  CR3UN = 21,
  CR4 = 22,
  CR4EQ = 23,
  CR4GT = 24,
  CR4LT = 25,
  CR4UN = 26,
  CR5 = 27,
  CR5EQ = 28,
  CR5GT = 29,
  CR5LT = 30,
  CR5UN = 31,
  CR6 = 32,
  CR6EQ = 33,
  CR6GT = 34,
  CR6LT = 35,
  CR6UN = 36,
  CR7 = 37,
  CR7EQ = 38,
  CR7GT = 39,
  CR7LT = 40,
  CR7UN = 41,
  CTR = 42,
  CTR8 = 43,
  F0 = 44,
  F1 = 45,
  F2 = 46,
  F3 = 47,
  F4 = 48,
  F5 = 49,
  F6 = 50,
  F7 = 51,
  F8 = 52,
  F9 = 53,
  F10 = 54,
  F11 = 55,
  F12 = 56,
  F13 = 57,
  F14 = 58,
  F15 = 59,
  F16 = 60,
  F17 = 61,
  F18 = 62,
  F19 = 63,
  F20 = 64,
  F21 = 65,
  F22 = 66,
  F23 = 67,
  F24 = 68,
  F25 = 69,
  F26 = 70,
  F27 = 71,
  F28 = 72,
  F29 = 73,
  F30 = 74,
  F31 = 75,
  LR = 76,
  LR8 = 77,
  R0 = 78,
  R1 = 79,
  R2 = 80,
  R3 = 81,
  R4 = 82,
  R5 = 83,
  R6 = 84,
  R7 = 85,
  R8 = 86,
  R9 = 87,
  R10 = 88,
  R11 = 89,
  R12 = 90,
  R13 = 91,
  R14 = 92,
  R15 = 93,
  R16 = 94,
  R17 = 95,
  R18 = 96,
  R19 = 97,
  R20 = 98,
  R21 = 99,
  R22 = 100,
  R23 = 101,
  R24 = 102,
  R25 = 103,
  R26 = 104,
  R27 = 105,
  R28 = 106,
  R29 = 107,
  R30 = 108,
  R31 = 109,
  RM = 110,
  V0 = 111,
  V1 = 112,
  V2 = 113,
  V3 = 114,
  V4 = 115,
  V5 = 116,
  V6 = 117,
  V7 = 118,
  V8 = 119,
  V9 = 120,
  V10 = 121,
  V11 = 122,
  V12 = 123,
  V13 = 124,
  V14 = 125,
  V15 = 126,
  V16 = 127,
  V17 = 128,
  V18 = 129,
  V19 = 130,
  V20 = 131,
  V21 = 132,
  V22 = 133,
  V23 = 134,
  V24 = 135,
  V25 = 136,
  V26 = 137,
  V27 = 138,
  V28 = 139,
  V29 = 140,
  V30 = 141,
  V31 = 142,
  VRSAVE = 143,
  X0 = 144,
  X1 = 145,
  X2 = 146,
  X3 = 147,
  X4 = 148,
  X5 = 149,
  X6 = 150,
  X7 = 151,
  X8 = 152,
  X9 = 153,
  X10 = 154,
  X11 = 155,
  X12 = 156,
  X13 = 157,
  X14 = 158,
  X15 = 159,
  X16 = 160,
  X17 = 161,
  X18 = 162,
  X19 = 163,
  X20 = 164,
  X21 = 165,
  X22 = 166,
  X23 = 167,
  X24 = 168,
  X25 = 169,
  X26 = 170,
  X27 = 171,
  X28 = 172,
  X29 = 173,
  X30 = 174,
  X31 = 175,
  NUM_TARGET_REGS 	// 176
};
}

// Register classes
namespace PPC {
enum {
  GPRCRegClassID = 0,
  G8RCRegClassID = 1,
  CRBITRCRegClassID = 2,
  F4RCRegClassID = 3,
  F8RCRegClassID = 4,
  G8RC_with_sub_32RegClassID = 5,
  VRRCRegClassID = 6,
  CRRCRegClassID = 7,
  CARRYRCRegClassID = 8,
  CTRRCRegClassID = 9,
  VRSAVERCRegClassID = 10,
  CTRRC8RegClassID = 11
  };
}

// Subregister indices
namespace PPC {
enum {
  NoSubRegister,
  sub_32,	// 1
  sub_eq,	// 2
  sub_gt,	// 3
  sub_lt,	// 4
  sub_un,	// 5
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

extern const uint16_t PPCRegLists[] = {
  /* 0 */ PPC::CARRY, 0,
  /* 2 */ PPC::CR0EQ, PPC::CR0, 0,
  /* 5 */ PPC::CR0GT, PPC::CR0, 0,
  /* 8 */ PPC::CR0LT, PPC::CR0, 0,
  /* 11 */ PPC::CR0UN, PPC::CR0, 0,
  /* 14 */ PPC::CR0, PPC::CR0LT, PPC::CR0GT, PPC::CR0EQ, PPC::CR0UN, 0,
  /* 20 */ PPC::CR1EQ, PPC::CR1, 0,
  /* 23 */ PPC::CR1GT, PPC::CR1, 0,
  /* 26 */ PPC::CR1LT, PPC::CR1, 0,
  /* 29 */ PPC::CR1UN, PPC::CR1, 0,
  /* 32 */ PPC::CR1, PPC::CR1LT, PPC::CR1GT, PPC::CR1EQ, PPC::CR1UN, 0,
  /* 38 */ PPC::CR2EQ, PPC::CR2, 0,
  /* 41 */ PPC::CR2GT, PPC::CR2, 0,
  /* 44 */ PPC::CR2LT, PPC::CR2, 0,
  /* 47 */ PPC::CR2UN, PPC::CR2, 0,
  /* 50 */ PPC::CR2, PPC::CR2LT, PPC::CR2GT, PPC::CR2EQ, PPC::CR2UN, 0,
  /* 56 */ PPC::CR3EQ, PPC::CR3, 0,
  /* 59 */ PPC::CR3GT, PPC::CR3, 0,
  /* 62 */ PPC::CR3LT, PPC::CR3, 0,
  /* 65 */ PPC::CR3UN, PPC::CR3, 0,
  /* 68 */ PPC::CR3, PPC::CR3LT, PPC::CR3GT, PPC::CR3EQ, PPC::CR3UN, 0,
  /* 74 */ PPC::CR4EQ, PPC::CR4, 0,
  /* 77 */ PPC::CR4GT, PPC::CR4, 0,
  /* 80 */ PPC::CR4LT, PPC::CR4, 0,
  /* 83 */ PPC::CR4UN, PPC::CR4, 0,
  /* 86 */ PPC::CR4, PPC::CR4LT, PPC::CR4GT, PPC::CR4EQ, PPC::CR4UN, 0,
  /* 92 */ PPC::CR5EQ, PPC::CR5, 0,
  /* 95 */ PPC::CR5GT, PPC::CR5, 0,
  /* 98 */ PPC::CR5LT, PPC::CR5, 0,
  /* 101 */ PPC::CR5UN, PPC::CR5, 0,
  /* 104 */ PPC::CR5, PPC::CR5LT, PPC::CR5GT, PPC::CR5EQ, PPC::CR5UN, 0,
  /* 110 */ PPC::CR6EQ, PPC::CR6, 0,
  /* 113 */ PPC::CR6GT, PPC::CR6, 0,
  /* 116 */ PPC::CR6LT, PPC::CR6, 0,
  /* 119 */ PPC::CR6UN, PPC::CR6, 0,
  /* 122 */ PPC::CR6, PPC::CR6LT, PPC::CR6GT, PPC::CR6EQ, PPC::CR6UN, 0,
  /* 128 */ PPC::CR7EQ, PPC::CR7, 0,
  /* 131 */ PPC::CR7GT, PPC::CR7, 0,
  /* 134 */ PPC::CR7LT, PPC::CR7, 0,
  /* 137 */ PPC::CR7UN, PPC::CR7, 0,
  /* 140 */ PPC::CR7, PPC::CR7LT, PPC::CR7GT, PPC::CR7EQ, PPC::CR7UN, 0,
  /* 146 */ PPC::CTR, 0,
  /* 148 */ PPC::CTR8, 0,
  /* 150 */ PPC::F0, 0,
  /* 152 */ PPC::F1, 0,
  /* 154 */ PPC::F2, 0,
  /* 156 */ PPC::F3, 0,
  /* 158 */ PPC::F4, 0,
  /* 160 */ PPC::F5, 0,
  /* 162 */ PPC::F6, 0,
  /* 164 */ PPC::F7, 0,
  /* 166 */ PPC::F8, 0,
  /* 168 */ PPC::F9, 0,
  /* 170 */ PPC::F10, 0,
  /* 172 */ PPC::F11, 0,
  /* 174 */ PPC::F12, 0,
  /* 176 */ PPC::F13, 0,
  /* 178 */ PPC::F14, 0,
  /* 180 */ PPC::F15, 0,
  /* 182 */ PPC::F16, 0,
  /* 184 */ PPC::F17, 0,
  /* 186 */ PPC::F18, 0,
  /* 188 */ PPC::F19, 0,
  /* 190 */ PPC::F20, 0,
  /* 192 */ PPC::F21, 0,
  /* 194 */ PPC::F22, 0,
  /* 196 */ PPC::F23, 0,
  /* 198 */ PPC::F24, 0,
  /* 200 */ PPC::F25, 0,
  /* 202 */ PPC::F26, 0,
  /* 204 */ PPC::F27, 0,
  /* 206 */ PPC::F28, 0,
  /* 208 */ PPC::F29, 0,
  /* 210 */ PPC::F30, 0,
  /* 212 */ PPC::F31, 0,
  /* 214 */ PPC::LR, 0,
  /* 216 */ PPC::LR8, 0,
  /* 218 */ PPC::X0, PPC::R0, 0,
  /* 221 */ PPC::X1, PPC::R1, 0,
  /* 224 */ PPC::X2, PPC::R2, 0,
  /* 227 */ PPC::X3, PPC::R3, 0,
  /* 230 */ PPC::X4, PPC::R4, 0,
  /* 233 */ PPC::X5, PPC::R5, 0,
  /* 236 */ PPC::X6, PPC::R6, 0,
  /* 239 */ PPC::X7, PPC::R7, 0,
  /* 242 */ PPC::X8, PPC::R8, 0,
  /* 245 */ PPC::X9, PPC::R9, 0,
  /* 248 */ PPC::X10, PPC::R10, 0,
  /* 251 */ PPC::X11, PPC::R11, 0,
  /* 254 */ PPC::X12, PPC::R12, 0,
  /* 257 */ PPC::X13, PPC::R13, 0,
  /* 260 */ PPC::X14, PPC::R14, 0,
  /* 263 */ PPC::X15, PPC::R15, 0,
  /* 266 */ PPC::X16, PPC::R16, 0,
  /* 269 */ PPC::X17, PPC::R17, 0,
  /* 272 */ PPC::X18, PPC::R18, 0,
  /* 275 */ PPC::X19, PPC::R19, 0,
  /* 278 */ PPC::X20, PPC::R20, 0,
  /* 281 */ PPC::X21, PPC::R21, 0,
  /* 284 */ PPC::X22, PPC::R22, 0,
  /* 287 */ PPC::X23, PPC::R23, 0,
  /* 290 */ PPC::X24, PPC::R24, 0,
  /* 293 */ PPC::X25, PPC::R25, 0,
  /* 296 */ PPC::X26, PPC::R26, 0,
  /* 299 */ PPC::X27, PPC::R27, 0,
  /* 302 */ PPC::X28, PPC::R28, 0,
  /* 305 */ PPC::X29, PPC::R29, 0,
  /* 308 */ PPC::X30, PPC::R30, 0,
  /* 311 */ PPC::X31, PPC::R31, 0,
  /* 314 */ PPC::RM, 0,
  /* 316 */ PPC::V0, 0,
  /* 318 */ PPC::V1, 0,
  /* 320 */ PPC::V2, 0,
  /* 322 */ PPC::V3, 0,
  /* 324 */ PPC::V4, 0,
  /* 326 */ PPC::V5, 0,
  /* 328 */ PPC::V6, 0,
  /* 330 */ PPC::V7, 0,
  /* 332 */ PPC::V8, 0,
  /* 334 */ PPC::V9, 0,
  /* 336 */ PPC::V10, 0,
  /* 338 */ PPC::V11, 0,
  /* 340 */ PPC::V12, 0,
  /* 342 */ PPC::V13, 0,
  /* 344 */ PPC::V14, 0,
  /* 346 */ PPC::V15, 0,
  /* 348 */ PPC::V16, 0,
  /* 350 */ PPC::V17, 0,
  /* 352 */ PPC::V18, 0,
  /* 354 */ PPC::V19, 0,
  /* 356 */ PPC::V20, 0,
  /* 358 */ PPC::V21, 0,
  /* 360 */ PPC::V22, 0,
  /* 362 */ PPC::V23, 0,
  /* 364 */ PPC::V24, 0,
  /* 366 */ PPC::V25, 0,
  /* 368 */ PPC::V26, 0,
  /* 370 */ PPC::V27, 0,
  /* 372 */ PPC::V28, 0,
  /* 374 */ PPC::V29, 0,
  /* 376 */ PPC::V30, 0,
  /* 378 */ PPC::V31, 0,
  /* 380 */ PPC::VRSAVE, 0,
  /* 382 */ PPC::R0, PPC::X0, 0,
  /* 385 */ PPC::R1, PPC::X1, 0,
  /* 388 */ PPC::R2, PPC::X2, 0,
  /* 391 */ PPC::R3, PPC::X3, 0,
  /* 394 */ PPC::R4, PPC::X4, 0,
  /* 397 */ PPC::R5, PPC::X5, 0,
  /* 400 */ PPC::R6, PPC::X6, 0,
  /* 403 */ PPC::R7, PPC::X7, 0,
  /* 406 */ PPC::R8, PPC::X8, 0,
  /* 409 */ PPC::R9, PPC::X9, 0,
  /* 412 */ PPC::R10, PPC::X10, 0,
  /* 415 */ PPC::R11, PPC::X11, 0,
  /* 418 */ PPC::R12, PPC::X12, 0,
  /* 421 */ PPC::R13, PPC::X13, 0,
  /* 424 */ PPC::R14, PPC::X14, 0,
  /* 427 */ PPC::R15, PPC::X15, 0,
  /* 430 */ PPC::R16, PPC::X16, 0,
  /* 433 */ PPC::R17, PPC::X17, 0,
  /* 436 */ PPC::R18, PPC::X18, 0,
  /* 439 */ PPC::R19, PPC::X19, 0,
  /* 442 */ PPC::R20, PPC::X20, 0,
  /* 445 */ PPC::R21, PPC::X21, 0,
  /* 448 */ PPC::R22, PPC::X22, 0,
  /* 451 */ PPC::R23, PPC::X23, 0,
  /* 454 */ PPC::R24, PPC::X24, 0,
  /* 457 */ PPC::R25, PPC::X25, 0,
  /* 460 */ PPC::R26, PPC::X26, 0,
  /* 463 */ PPC::R27, PPC::X27, 0,
  /* 466 */ PPC::R28, PPC::X28, 0,
  /* 469 */ PPC::R29, PPC::X29, 0,
  /* 472 */ PPC::R30, PPC::X30, 0,
  /* 475 */ PPC::R31, PPC::X31, 0,
};

extern const MCRegisterDesc PPCRegDesc[] = { // Descriptors
  { "NOREG", 0, 0, 0 },
  { "CARRY", 0, 1, 1 },
  { "CR0", 14, 15, 1 },
  { "CR0EQ", 2, 1, 3 },
  { "CR0GT", 5, 1, 3 },
  { "CR0LT", 8, 1, 3 },
  { "CR0UN", 11, 1, 3 },
  { "CR1", 32, 33, 1 },
  { "CR1EQ", 20, 1, 21 },
  { "CR1GT", 23, 1, 21 },
  { "CR1LT", 26, 1, 21 },
  { "CR1UN", 29, 1, 21 },
  { "CR2", 50, 51, 1 },
  { "CR2EQ", 38, 1, 39 },
  { "CR2GT", 41, 1, 39 },
  { "CR2LT", 44, 1, 39 },
  { "CR2UN", 47, 1, 39 },
  { "CR3", 68, 69, 1 },
  { "CR3EQ", 56, 1, 57 },
  { "CR3GT", 59, 1, 57 },
  { "CR3LT", 62, 1, 57 },
  { "CR3UN", 65, 1, 57 },
  { "CR4", 86, 87, 1 },
  { "CR4EQ", 74, 1, 75 },
  { "CR4GT", 77, 1, 75 },
  { "CR4LT", 80, 1, 75 },
  { "CR4UN", 83, 1, 75 },
  { "CR5", 104, 105, 1 },
  { "CR5EQ", 92, 1, 93 },
  { "CR5GT", 95, 1, 93 },
  { "CR5LT", 98, 1, 93 },
  { "CR5UN", 101, 1, 93 },
  { "CR6", 122, 123, 1 },
  { "CR6EQ", 110, 1, 111 },
  { "CR6GT", 113, 1, 111 },
  { "CR6LT", 116, 1, 111 },
  { "CR6UN", 119, 1, 111 },
  { "CR7", 140, 141, 1 },
  { "CR7EQ", 128, 1, 129 },
  { "CR7GT", 131, 1, 129 },
  { "CR7LT", 134, 1, 129 },
  { "CR7UN", 137, 1, 129 },
  { "CTR", 146, 1, 1 },
  { "CTR8", 148, 1, 1 },
  { "F0", 150, 1, 1 },
  { "F1", 152, 1, 1 },
  { "F2", 154, 1, 1 },
  { "F3", 156, 1, 1 },
  { "F4", 158, 1, 1 },
  { "F5", 160, 1, 1 },
  { "F6", 162, 1, 1 },
  { "F7", 164, 1, 1 },
  { "F8", 166, 1, 1 },
  { "F9", 168, 1, 1 },
  { "F10", 170, 1, 1 },
  { "F11", 172, 1, 1 },
  { "F12", 174, 1, 1 },
  { "F13", 176, 1, 1 },
  { "F14", 178, 1, 1 },
  { "F15", 180, 1, 1 },
  { "F16", 182, 1, 1 },
  { "F17", 184, 1, 1 },
  { "F18", 186, 1, 1 },
  { "F19", 188, 1, 1 },
  { "F20", 190, 1, 1 },
  { "F21", 192, 1, 1 },
  { "F22", 194, 1, 1 },
  { "F23", 196, 1, 1 },
  { "F24", 198, 1, 1 },
  { "F25", 200, 1, 1 },
  { "F26", 202, 1, 1 },
  { "F27", 204, 1, 1 },
  { "F28", 206, 1, 1 },
  { "F29", 208, 1, 1 },
  { "F30", 210, 1, 1 },
  { "F31", 212, 1, 1 },
  { "LR", 214, 1, 1 },
  { "LR8", 216, 1, 1 },
  { "R0", 382, 1, 383 },
  { "R1", 385, 1, 386 },
  { "R2", 388, 1, 389 },
  { "R3", 391, 1, 392 },
  { "R4", 394, 1, 395 },
  { "R5", 397, 1, 398 },
  { "R6", 400, 1, 401 },
  { "R7", 403, 1, 404 },
  { "R8", 406, 1, 407 },
  { "R9", 409, 1, 410 },
  { "R10", 412, 1, 413 },
  { "R11", 415, 1, 416 },
  { "R12", 418, 1, 419 },
  { "R13", 421, 1, 422 },
  { "R14", 424, 1, 425 },
  { "R15", 427, 1, 428 },
  { "R16", 430, 1, 431 },
  { "R17", 433, 1, 434 },
  { "R18", 436, 1, 437 },
  { "R19", 439, 1, 440 },
  { "R20", 442, 1, 443 },
  { "R21", 445, 1, 446 },
  { "R22", 448, 1, 449 },
  { "R23", 451, 1, 452 },
  { "R24", 454, 1, 455 },
  { "R25", 457, 1, 458 },
  { "R26", 460, 1, 461 },
  { "R27", 463, 1, 464 },
  { "R28", 466, 1, 467 },
  { "R29", 469, 1, 470 },
  { "R30", 472, 1, 473 },
  { "R31", 475, 1, 476 },
  { "RM", 314, 1, 1 },
  { "V0", 316, 1, 1 },
  { "V1", 318, 1, 1 },
  { "V2", 320, 1, 1 },
  { "V3", 322, 1, 1 },
  { "V4", 324, 1, 1 },
  { "V5", 326, 1, 1 },
  { "V6", 328, 1, 1 },
  { "V7", 330, 1, 1 },
  { "V8", 332, 1, 1 },
  { "V9", 334, 1, 1 },
  { "V10", 336, 1, 1 },
  { "V11", 338, 1, 1 },
  { "V12", 340, 1, 1 },
  { "V13", 342, 1, 1 },
  { "V14", 344, 1, 1 },
  { "V15", 346, 1, 1 },
  { "V16", 348, 1, 1 },
  { "V17", 350, 1, 1 },
  { "V18", 352, 1, 1 },
  { "V19", 354, 1, 1 },
  { "V20", 356, 1, 1 },
  { "V21", 358, 1, 1 },
  { "V22", 360, 1, 1 },
  { "V23", 362, 1, 1 },
  { "V24", 364, 1, 1 },
  { "V25", 366, 1, 1 },
  { "V26", 368, 1, 1 },
  { "V27", 370, 1, 1 },
  { "V28", 372, 1, 1 },
  { "V29", 374, 1, 1 },
  { "V30", 376, 1, 1 },
  { "V31", 378, 1, 1 },
  { "VRSAVE", 380, 1, 1 },
  { "X0", 218, 219, 1 },
  { "X1", 221, 222, 1 },
  { "X2", 224, 225, 1 },
  { "X3", 227, 228, 1 },
  { "X4", 230, 231, 1 },
  { "X5", 233, 234, 1 },
  { "X6", 236, 237, 1 },
  { "X7", 239, 240, 1 },
  { "X8", 242, 243, 1 },
  { "X9", 245, 246, 1 },
  { "X10", 248, 249, 1 },
  { "X11", 251, 252, 1 },
  { "X12", 254, 255, 1 },
  { "X13", 257, 258, 1 },
  { "X14", 260, 261, 1 },
  { "X15", 263, 264, 1 },
  { "X16", 266, 267, 1 },
  { "X17", 269, 270, 1 },
  { "X18", 272, 273, 1 },
  { "X19", 275, 276, 1 },
  { "X20", 278, 279, 1 },
  { "X21", 281, 282, 1 },
  { "X22", 284, 285, 1 },
  { "X23", 287, 288, 1 },
  { "X24", 290, 291, 1 },
  { "X25", 293, 294, 1 },
  { "X26", 296, 297, 1 },
  { "X27", 299, 300, 1 },
  { "X28", 302, 303, 1 },
  { "X29", 305, 306, 1 },
  { "X30", 308, 309, 1 },
  { "X31", 311, 312, 1 },
};

namespace {     // Register classes...
  // GPRC Register Class...
  const uint16_t GPRC[] = {
    PPC::R2, PPC::R3, PPC::R4, PPC::R5, PPC::R6, PPC::R7, PPC::R8, PPC::R9, PPC::R10, PPC::R11, PPC::R12, PPC::R30, PPC::R29, PPC::R28, PPC::R27, PPC::R26, PPC::R25, PPC::R24, PPC::R23, PPC::R22, PPC::R21, PPC::R20, PPC::R19, PPC::R18, PPC::R17, PPC::R16, PPC::R15, PPC::R14, PPC::R13, PPC::R31, PPC::R0, PPC::R1, PPC::LR, 
  };

  // GPRC Bit set.
  const uint8_t GPRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0, 0xff, 0xff, 0xff, 0x3f, 
  };

  // G8RC Register Class...
  const uint16_t G8RC[] = {
    PPC::X2, PPC::X3, PPC::X4, PPC::X5, PPC::X6, PPC::X7, PPC::X8, PPC::X9, PPC::X10, PPC::X11, PPC::X12, PPC::X30, PPC::X29, PPC::X28, PPC::X27, PPC::X26, PPC::X25, PPC::X24, PPC::X23, PPC::X22, PPC::X21, PPC::X20, PPC::X19, PPC::X18, PPC::X17, PPC::X16, PPC::X15, PPC::X14, PPC::X31, PPC::X13, PPC::X0, PPC::X1, PPC::LR8, 
  };

  // G8RC Bit set.
  const uint8_t G8RCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
  };

  // CRBITRC Register Class...
  const uint16_t CRBITRC[] = {
    PPC::CR0LT, PPC::CR0GT, PPC::CR0EQ, PPC::CR0UN, PPC::CR1LT, PPC::CR1GT, PPC::CR1EQ, PPC::CR1UN, PPC::CR2LT, PPC::CR2GT, PPC::CR2EQ, PPC::CR2UN, PPC::CR3LT, PPC::CR3GT, PPC::CR3EQ, PPC::CR3UN, PPC::CR4LT, PPC::CR4GT, PPC::CR4EQ, PPC::CR4UN, PPC::CR5LT, PPC::CR5GT, PPC::CR5EQ, PPC::CR5UN, PPC::CR6LT, PPC::CR6GT, PPC::CR6EQ, PPC::CR6UN, PPC::CR7LT, PPC::CR7GT, PPC::CR7EQ, PPC::CR7UN, 
  };

  // CRBITRC Bit set.
  const uint8_t CRBITRCBits[] = {
    0x78, 0xef, 0xbd, 0xf7, 0xde, 0x03, 
  };

  // F4RC Register Class...
  const uint16_t F4RC[] = {
    PPC::F0, PPC::F1, PPC::F2, PPC::F3, PPC::F4, PPC::F5, PPC::F6, PPC::F7, PPC::F8, PPC::F9, PPC::F10, PPC::F11, PPC::F12, PPC::F13, PPC::F31, PPC::F30, PPC::F29, PPC::F28, PPC::F27, PPC::F26, PPC::F25, PPC::F24, PPC::F23, PPC::F22, PPC::F21, PPC::F20, PPC::F19, PPC::F18, PPC::F17, PPC::F16, PPC::F15, PPC::F14, 
  };

  // F4RC Bit set.
  const uint8_t F4RCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0x0f, 
  };

  // F8RC Register Class...
  const uint16_t F8RC[] = {
    PPC::F0, PPC::F1, PPC::F2, PPC::F3, PPC::F4, PPC::F5, PPC::F6, PPC::F7, PPC::F8, PPC::F9, PPC::F10, PPC::F11, PPC::F12, PPC::F13, PPC::F31, PPC::F30, PPC::F29, PPC::F28, PPC::F27, PPC::F26, PPC::F25, PPC::F24, PPC::F23, PPC::F22, PPC::F21, PPC::F20, PPC::F19, PPC::F18, PPC::F17, PPC::F16, PPC::F15, PPC::F14, 
  };

  // F8RC Bit set.
  const uint8_t F8RCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0x0f, 
  };

  // G8RC_with_sub_32 Register Class...
  const uint16_t G8RC_with_sub_32[] = {
    PPC::X2, PPC::X3, PPC::X4, PPC::X5, PPC::X6, PPC::X7, PPC::X8, PPC::X9, PPC::X10, PPC::X11, PPC::X12, PPC::X30, PPC::X29, PPC::X28, PPC::X27, PPC::X26, PPC::X25, PPC::X24, PPC::X23, PPC::X22, PPC::X21, PPC::X20, PPC::X19, PPC::X18, PPC::X17, PPC::X16, PPC::X15, PPC::X14, PPC::X31, PPC::X13, PPC::X0, PPC::X1, 
  };

  // G8RC_with_sub_32 Bit set.
  const uint8_t G8RC_with_sub_32Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
  };

  // VRRC Register Class...
  const uint16_t VRRC[] = {
    PPC::V2, PPC::V3, PPC::V4, PPC::V5, PPC::V0, PPC::V1, PPC::V6, PPC::V7, PPC::V8, PPC::V9, PPC::V10, PPC::V11, PPC::V12, PPC::V13, PPC::V14, PPC::V15, PPC::V16, PPC::V17, PPC::V18, PPC::V19, PPC::V31, PPC::V30, PPC::V29, PPC::V28, PPC::V27, PPC::V26, PPC::V25, PPC::V24, PPC::V23, PPC::V22, PPC::V21, PPC::V20, 
  };

  // VRRC Bit set.
  const uint8_t VRRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x7f, 
  };

  // CRRC Register Class...
  const uint16_t CRRC[] = {
    PPC::CR0, PPC::CR1, PPC::CR5, PPC::CR6, PPC::CR7, PPC::CR2, PPC::CR3, PPC::CR4, 
  };

  // CRRC Bit set.
  const uint8_t CRRCBits[] = {
    0x84, 0x10, 0x42, 0x08, 0x21, 
  };

  // CARRYRC Register Class...
  const uint16_t CARRYRC[] = {
    PPC::CARRY, 
  };

  // CARRYRC Bit set.
  const uint8_t CARRYRCBits[] = {
    0x02, 
  };

  // CTRRC Register Class...
  const uint16_t CTRRC[] = {
    PPC::CTR, 
  };

  // CTRRC Bit set.
  const uint8_t CTRRCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
  };

  // VRSAVERC Register Class...
  const uint16_t VRSAVERC[] = {
    PPC::VRSAVE, 
  };

  // VRSAVERC Bit set.
  const uint8_t VRSAVERCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  };

  // CTRRC8 Register Class...
  const uint16_t CTRRC8[] = {
    PPC::CTR8, 
  };

  // CTRRC8 Bit set.
  const uint8_t CTRRC8Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
  };

}

extern const MCRegisterClass PPCMCRegisterClasses[] = {
  { "GPRC", GPRC, GPRCBits, 33, sizeof(GPRCBits), PPC::GPRCRegClassID, 4, 4, 1, 1 },
  { "G8RC", G8RC, G8RCBits, 33, sizeof(G8RCBits), PPC::G8RCRegClassID, 8, 8, 1, 1 },
  { "CRBITRC", CRBITRC, CRBITRCBits, 32, sizeof(CRBITRCBits), PPC::CRBITRCRegClassID, 4, 4, -1, 1 },
  { "F4RC", F4RC, F4RCBits, 32, sizeof(F4RCBits), PPC::F4RCRegClassID, 4, 4, 1, 1 },
  { "F8RC", F8RC, F8RCBits, 32, sizeof(F8RCBits), PPC::F8RCRegClassID, 8, 8, 1, 1 },
  { "G8RC_with_sub_32", G8RC_with_sub_32, G8RC_with_sub_32Bits, 32, sizeof(G8RC_with_sub_32Bits), PPC::G8RC_with_sub_32RegClassID, 8, 8, 1, 1 },
  { "VRRC", VRRC, VRRCBits, 32, sizeof(VRRCBits), PPC::VRRCRegClassID, 16, 16, 1, 1 },
  { "CRRC", CRRC, CRRCBits, 8, sizeof(CRRCBits), PPC::CRRCRegClassID, 4, 4, 1, 1 },
  { "CARRYRC", CARRYRC, CARRYRCBits, 1, sizeof(CARRYRCBits), PPC::CARRYRCRegClassID, 4, 4, -1, 1 },
  { "CTRRC", CTRRC, CTRRCBits, 1, sizeof(CTRRCBits), PPC::CTRRCRegClassID, 4, 4, 1, 1 },
  { "VRSAVERC", VRSAVERC, VRSAVERCBits, 1, sizeof(VRSAVERCBits), PPC::VRSAVERCRegClassID, 4, 4, 1, 1 },
  { "CTRRC8", CTRRC8, CTRRC8Bits, 1, sizeof(CTRRC8Bits), PPC::CTRRC8RegClassID, 8, 8, 1, 1 },
};

const uint16_t PPCSubRegTable[][5] = {
  /* CARRY */
  {0},
  /* CR0 */
  {0, PPC::CR0EQ, PPC::CR0GT, PPC::CR0LT, PPC::CR0UN},
  /* CR0EQ */
  {0},
  /* CR0GT */
  {0},
  /* CR0LT */
  {0},
  /* CR0UN */
  {0},
  /* CR1 */
  {0, PPC::CR1EQ, PPC::CR1GT, PPC::CR1LT, PPC::CR1UN},
  /* CR1EQ */
  {0},
  /* CR1GT */
  {0},
  /* CR1LT */
  {0},
  /* CR1UN */
  {0},
  /* CR2 */
  {0, PPC::CR2EQ, PPC::CR2GT, PPC::CR2LT, PPC::CR2UN},
  /* CR2EQ */
  {0},
  /* CR2GT */
  {0},
  /* CR2LT */
  {0},
  /* CR2UN */
  {0},
  /* CR3 */
  {0, PPC::CR3EQ, PPC::CR3GT, PPC::CR3LT, PPC::CR3UN},
  /* CR3EQ */
  {0},
  /* CR3GT */
  {0},
  /* CR3LT */
  {0},
  /* CR3UN */
  {0},
  /* CR4 */
  {0, PPC::CR4EQ, PPC::CR4GT, PPC::CR4LT, PPC::CR4UN},
  /* CR4EQ */
  {0},
  /* CR4GT */
  {0},
  /* CR4LT */
  {0},
  /* CR4UN */
  {0},
  /* CR5 */
  {0, PPC::CR5EQ, PPC::CR5GT, PPC::CR5LT, PPC::CR5UN},
  /* CR5EQ */
  {0},
  /* CR5GT */
  {0},
  /* CR5LT */
  {0},
  /* CR5UN */
  {0},
  /* CR6 */
  {0, PPC::CR6EQ, PPC::CR6GT, PPC::CR6LT, PPC::CR6UN},
  /* CR6EQ */
  {0},
  /* CR6GT */
  {0},
  /* CR6LT */
  {0},
  /* CR6UN */
  {0},
  /* CR7 */
  {0, PPC::CR7EQ, PPC::CR7GT, PPC::CR7LT, PPC::CR7UN},
  /* CR7EQ */
  {0},
  /* CR7GT */
  {0},
  /* CR7LT */
  {0},
  /* CR7UN */
  {0},
  /* CTR */
  {0},
  /* CTR8 */
  {0},
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
  /* LR */
  {0},
  /* LR8 */
  {0},
  /* R0 */
  {0},
  /* R1 */
  {0},
  /* R2 */
  {0},
  /* R3 */
  {0},
  /* R4 */
  {0},
  /* R5 */
  {0},
  /* R6 */
  {0},
  /* R7 */
  {0},
  /* R8 */
  {0},
  /* R9 */
  {0},
  /* R10 */
  {0},
  /* R11 */
  {0},
  /* R12 */
  {0},
  /* R13 */
  {0},
  /* R14 */
  {0},
  /* R15 */
  {0},
  /* R16 */
  {0},
  /* R17 */
  {0},
  /* R18 */
  {0},
  /* R19 */
  {0},
  /* R20 */
  {0},
  /* R21 */
  {0},
  /* R22 */
  {0},
  /* R23 */
  {0},
  /* R24 */
  {0},
  /* R25 */
  {0},
  /* R26 */
  {0},
  /* R27 */
  {0},
  /* R28 */
  {0},
  /* R29 */
  {0},
  /* R30 */
  {0},
  /* R31 */
  {0},
  /* RM */
  {0},
  /* V0 */
  {0},
  /* V1 */
  {0},
  /* V2 */
  {0},
  /* V3 */
  {0},
  /* V4 */
  {0},
  /* V5 */
  {0},
  /* V6 */
  {0},
  /* V7 */
  {0},
  /* V8 */
  {0},
  /* V9 */
  {0},
  /* V10 */
  {0},
  /* V11 */
  {0},
  /* V12 */
  {0},
  /* V13 */
  {0},
  /* V14 */
  {0},
  /* V15 */
  {0},
  /* V16 */
  {0},
  /* V17 */
  {0},
  /* V18 */
  {0},
  /* V19 */
  {0},
  /* V20 */
  {0},
  /* V21 */
  {0},
  /* V22 */
  {0},
  /* V23 */
  {0},
  /* V24 */
  {0},
  /* V25 */
  {0},
  /* V26 */
  {0},
  /* V27 */
  {0},
  /* V28 */
  {0},
  /* V29 */
  {0},
  /* V30 */
  {0},
  /* V31 */
  {0},
  /* VRSAVE */
  {0},
  /* X0 */
  {PPC::R0, 0, 0, 0, 0},
  /* X1 */
  {PPC::R1, 0, 0, 0, 0},
  /* X2 */
  {PPC::R2, 0, 0, 0, 0},
  /* X3 */
  {PPC::R3, 0, 0, 0, 0},
  /* X4 */
  {PPC::R4, 0, 0, 0, 0},
  /* X5 */
  {PPC::R5, 0, 0, 0, 0},
  /* X6 */
  {PPC::R6, 0, 0, 0, 0},
  /* X7 */
  {PPC::R7, 0, 0, 0, 0},
  /* X8 */
  {PPC::R8, 0, 0, 0, 0},
  /* X9 */
  {PPC::R9, 0, 0, 0, 0},
  /* X10 */
  {PPC::R10, 0, 0, 0, 0},
  /* X11 */
  {PPC::R11, 0, 0, 0, 0},
  /* X12 */
  {PPC::R12, 0, 0, 0, 0},
  /* X13 */
  {PPC::R13, 0, 0, 0, 0},
  /* X14 */
  {PPC::R14, 0, 0, 0, 0},
  /* X15 */
  {PPC::R15, 0, 0, 0, 0},
  /* X16 */
  {PPC::R16, 0, 0, 0, 0},
  /* X17 */
  {PPC::R17, 0, 0, 0, 0},
  /* X18 */
  {PPC::R18, 0, 0, 0, 0},
  /* X19 */
  {PPC::R19, 0, 0, 0, 0},
  /* X20 */
  {PPC::R20, 0, 0, 0, 0},
  /* X21 */
  {PPC::R21, 0, 0, 0, 0},
  /* X22 */
  {PPC::R22, 0, 0, 0, 0},
  /* X23 */
  {PPC::R23, 0, 0, 0, 0},
  /* X24 */
  {PPC::R24, 0, 0, 0, 0},
  /* X25 */
  {PPC::R25, 0, 0, 0, 0},
  /* X26 */
  {PPC::R26, 0, 0, 0, 0},
  /* X27 */
  {PPC::R27, 0, 0, 0, 0},
  /* X28 */
  {PPC::R28, 0, 0, 0, 0},
  /* X29 */
  {PPC::R29, 0, 0, 0, 0},
  /* X30 */
  {PPC::R30, 0, 0, 0, 0},
  /* X31 */
  {PPC::R31, 0, 0, 0, 0},
};

const uint16_t *getPPCSubRegTable() {
  return (const uint16_t *)PPCSubRegTable;
}

// PPC Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour0Dwarf2L[] = {
  { 0U, PPC::X0 },
  { 1U, PPC::X1 },
  { 2U, PPC::X2 },
  { 3U, PPC::X3 },
  { 4U, PPC::X4 },
  { 5U, PPC::X5 },
  { 6U, PPC::X6 },
  { 7U, PPC::X7 },
  { 8U, PPC::X8 },
  { 9U, PPC::X9 },
  { 10U, PPC::X10 },
  { 11U, PPC::X11 },
  { 12U, PPC::X12 },
  { 13U, PPC::X13 },
  { 14U, PPC::X14 },
  { 15U, PPC::X15 },
  { 16U, PPC::X16 },
  { 17U, PPC::X17 },
  { 18U, PPC::X18 },
  { 19U, PPC::X19 },
  { 20U, PPC::X20 },
  { 21U, PPC::X21 },
  { 22U, PPC::X22 },
  { 23U, PPC::X23 },
  { 24U, PPC::X24 },
  { 25U, PPC::X25 },
  { 26U, PPC::X26 },
  { 27U, PPC::X27 },
  { 28U, PPC::X28 },
  { 29U, PPC::X29 },
  { 30U, PPC::X30 },
  { 31U, PPC::X31 },
  { 32U, PPC::F0 },
  { 33U, PPC::F1 },
  { 34U, PPC::F2 },
  { 35U, PPC::F3 },
  { 36U, PPC::F4 },
  { 37U, PPC::F5 },
  { 38U, PPC::F6 },
  { 39U, PPC::F7 },
  { 40U, PPC::F8 },
  { 41U, PPC::F9 },
  { 42U, PPC::F10 },
  { 43U, PPC::F11 },
  { 44U, PPC::F12 },
  { 45U, PPC::F13 },
  { 46U, PPC::F14 },
  { 47U, PPC::F15 },
  { 48U, PPC::F16 },
  { 49U, PPC::F17 },
  { 50U, PPC::F18 },
  { 51U, PPC::F19 },
  { 52U, PPC::F20 },
  { 53U, PPC::F21 },
  { 54U, PPC::F22 },
  { 55U, PPC::F23 },
  { 56U, PPC::F24 },
  { 57U, PPC::F25 },
  { 58U, PPC::F26 },
  { 59U, PPC::F27 },
  { 60U, PPC::F28 },
  { 61U, PPC::F29 },
  { 62U, PPC::F30 },
  { 63U, PPC::F31 },
  { 65U, PPC::LR8 },
  { 66U, PPC::CTR8 },
  { 68U, PPC::CR0 },
  { 69U, PPC::CR1 },
  { 70U, PPC::CR2 },
  { 71U, PPC::CR3 },
  { 72U, PPC::CR4 },
  { 73U, PPC::CR5 },
  { 74U, PPC::CR6 },
  { 75U, PPC::CR7 },
  { 77U, PPC::V0 },
  { 78U, PPC::V1 },
  { 79U, PPC::V2 },
  { 80U, PPC::V3 },
  { 81U, PPC::V4 },
  { 82U, PPC::V5 },
  { 83U, PPC::V6 },
  { 84U, PPC::V7 },
  { 85U, PPC::V8 },
  { 86U, PPC::V9 },
  { 87U, PPC::V10 },
  { 88U, PPC::V11 },
  { 89U, PPC::V12 },
  { 90U, PPC::V13 },
  { 91U, PPC::V14 },
  { 92U, PPC::V15 },
  { 93U, PPC::V16 },
  { 94U, PPC::V17 },
  { 95U, PPC::V18 },
  { 96U, PPC::V19 },
  { 97U, PPC::V20 },
  { 98U, PPC::V21 },
  { 99U, PPC::V22 },
  { 100U, PPC::V23 },
  { 101U, PPC::V24 },
  { 102U, PPC::V25 },
  { 103U, PPC::V26 },
  { 104U, PPC::V27 },
  { 105U, PPC::V28 },
  { 106U, PPC::V29 },
  { 107U, PPC::V30 },
  { 108U, PPC::V31 },
  { 109U, PPC::VRSAVE },
};
extern const unsigned PPCDwarfFlavour0Dwarf2LSize = sizeof(PPCDwarfFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour1Dwarf2L[] = {
  { 0U, PPC::R0 },
  { 1U, PPC::R1 },
  { 2U, PPC::R2 },
  { 3U, PPC::R3 },
  { 4U, PPC::R4 },
  { 5U, PPC::R5 },
  { 6U, PPC::R6 },
  { 7U, PPC::R7 },
  { 8U, PPC::R8 },
  { 9U, PPC::R9 },
  { 10U, PPC::R10 },
  { 11U, PPC::R11 },
  { 12U, PPC::R12 },
  { 13U, PPC::R13 },
  { 14U, PPC::R14 },
  { 15U, PPC::R15 },
  { 16U, PPC::R16 },
  { 17U, PPC::R17 },
  { 18U, PPC::R18 },
  { 19U, PPC::R19 },
  { 20U, PPC::R20 },
  { 21U, PPC::R21 },
  { 22U, PPC::R22 },
  { 23U, PPC::R23 },
  { 24U, PPC::R24 },
  { 25U, PPC::R25 },
  { 26U, PPC::R26 },
  { 27U, PPC::R27 },
  { 28U, PPC::R28 },
  { 29U, PPC::R29 },
  { 30U, PPC::R30 },
  { 31U, PPC::R31 },
  { 32U, PPC::F0 },
  { 33U, PPC::F1 },
  { 34U, PPC::F2 },
  { 35U, PPC::F3 },
  { 36U, PPC::F4 },
  { 37U, PPC::F5 },
  { 38U, PPC::F6 },
  { 39U, PPC::F7 },
  { 40U, PPC::F8 },
  { 41U, PPC::F9 },
  { 42U, PPC::F10 },
  { 43U, PPC::F11 },
  { 44U, PPC::F12 },
  { 45U, PPC::F13 },
  { 46U, PPC::F14 },
  { 47U, PPC::F15 },
  { 48U, PPC::F16 },
  { 49U, PPC::F17 },
  { 50U, PPC::F18 },
  { 51U, PPC::F19 },
  { 52U, PPC::F20 },
  { 53U, PPC::F21 },
  { 54U, PPC::F22 },
  { 55U, PPC::F23 },
  { 56U, PPC::F24 },
  { 57U, PPC::F25 },
  { 58U, PPC::F26 },
  { 59U, PPC::F27 },
  { 60U, PPC::F28 },
  { 61U, PPC::F29 },
  { 62U, PPC::F30 },
  { 63U, PPC::F31 },
  { 65U, PPC::LR },
  { 66U, PPC::CTR },
  { 68U, PPC::CR0 },
  { 69U, PPC::CR1 },
  { 70U, PPC::CR2 },
  { 71U, PPC::CR3 },
  { 72U, PPC::CR4 },
  { 73U, PPC::CR5 },
  { 74U, PPC::CR6 },
  { 75U, PPC::CR7 },
  { 77U, PPC::V0 },
  { 78U, PPC::V1 },
  { 79U, PPC::V2 },
  { 80U, PPC::V3 },
  { 81U, PPC::V4 },
  { 82U, PPC::V5 },
  { 83U, PPC::V6 },
  { 84U, PPC::V7 },
  { 85U, PPC::V8 },
  { 86U, PPC::V9 },
  { 87U, PPC::V10 },
  { 88U, PPC::V11 },
  { 89U, PPC::V12 },
  { 90U, PPC::V13 },
  { 91U, PPC::V14 },
  { 92U, PPC::V15 },
  { 93U, PPC::V16 },
  { 94U, PPC::V17 },
  { 95U, PPC::V18 },
  { 96U, PPC::V19 },
  { 97U, PPC::V20 },
  { 98U, PPC::V21 },
  { 99U, PPC::V22 },
  { 100U, PPC::V23 },
  { 101U, PPC::V24 },
  { 102U, PPC::V25 },
  { 103U, PPC::V26 },
  { 104U, PPC::V27 },
  { 105U, PPC::V28 },
  { 106U, PPC::V29 },
  { 107U, PPC::V30 },
  { 108U, PPC::V31 },
};
extern const unsigned PPCDwarfFlavour1Dwarf2LSize = sizeof(PPCDwarfFlavour1Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour0Dwarf2L[] = {
  { 0U, PPC::X0 },
  { 1U, PPC::X1 },
  { 2U, PPC::X2 },
  { 3U, PPC::X3 },
  { 4U, PPC::X4 },
  { 5U, PPC::X5 },
  { 6U, PPC::X6 },
  { 7U, PPC::X7 },
  { 8U, PPC::X8 },
  { 9U, PPC::X9 },
  { 10U, PPC::X10 },
  { 11U, PPC::X11 },
  { 12U, PPC::X12 },
  { 13U, PPC::X13 },
  { 14U, PPC::X14 },
  { 15U, PPC::X15 },
  { 16U, PPC::X16 },
  { 17U, PPC::X17 },
  { 18U, PPC::X18 },
  { 19U, PPC::X19 },
  { 20U, PPC::X20 },
  { 21U, PPC::X21 },
  { 22U, PPC::X22 },
  { 23U, PPC::X23 },
  { 24U, PPC::X24 },
  { 25U, PPC::X25 },
  { 26U, PPC::X26 },
  { 27U, PPC::X27 },
  { 28U, PPC::X28 },
  { 29U, PPC::X29 },
  { 30U, PPC::X30 },
  { 31U, PPC::X31 },
  { 32U, PPC::F0 },
  { 33U, PPC::F1 },
  { 34U, PPC::F2 },
  { 35U, PPC::F3 },
  { 36U, PPC::F4 },
  { 37U, PPC::F5 },
  { 38U, PPC::F6 },
  { 39U, PPC::F7 },
  { 40U, PPC::F8 },
  { 41U, PPC::F9 },
  { 42U, PPC::F10 },
  { 43U, PPC::F11 },
  { 44U, PPC::F12 },
  { 45U, PPC::F13 },
  { 46U, PPC::F14 },
  { 47U, PPC::F15 },
  { 48U, PPC::F16 },
  { 49U, PPC::F17 },
  { 50U, PPC::F18 },
  { 51U, PPC::F19 },
  { 52U, PPC::F20 },
  { 53U, PPC::F21 },
  { 54U, PPC::F22 },
  { 55U, PPC::F23 },
  { 56U, PPC::F24 },
  { 57U, PPC::F25 },
  { 58U, PPC::F26 },
  { 59U, PPC::F27 },
  { 60U, PPC::F28 },
  { 61U, PPC::F29 },
  { 62U, PPC::F30 },
  { 63U, PPC::F31 },
  { 65U, PPC::LR8 },
  { 66U, PPC::CTR8 },
  { 68U, PPC::CR0 },
  { 69U, PPC::CR1 },
  { 70U, PPC::CR2 },
  { 71U, PPC::CR3 },
  { 72U, PPC::CR4 },
  { 73U, PPC::CR5 },
  { 74U, PPC::CR6 },
  { 75U, PPC::CR7 },
  { 77U, PPC::V0 },
  { 78U, PPC::V1 },
  { 79U, PPC::V2 },
  { 80U, PPC::V3 },
  { 81U, PPC::V4 },
  { 82U, PPC::V5 },
  { 83U, PPC::V6 },
  { 84U, PPC::V7 },
  { 85U, PPC::V8 },
  { 86U, PPC::V9 },
  { 87U, PPC::V10 },
  { 88U, PPC::V11 },
  { 89U, PPC::V12 },
  { 90U, PPC::V13 },
  { 91U, PPC::V14 },
  { 92U, PPC::V15 },
  { 93U, PPC::V16 },
  { 94U, PPC::V17 },
  { 95U, PPC::V18 },
  { 96U, PPC::V19 },
  { 97U, PPC::V20 },
  { 98U, PPC::V21 },
  { 99U, PPC::V22 },
  { 100U, PPC::V23 },
  { 101U, PPC::V24 },
  { 102U, PPC::V25 },
  { 103U, PPC::V26 },
  { 104U, PPC::V27 },
  { 105U, PPC::V28 },
  { 106U, PPC::V29 },
  { 107U, PPC::V30 },
  { 108U, PPC::V31 },
  { 109U, PPC::VRSAVE },
};
extern const unsigned PPCEHFlavour0Dwarf2LSize = sizeof(PPCEHFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour1Dwarf2L[] = {
  { 0U, PPC::R0 },
  { 1U, PPC::R1 },
  { 2U, PPC::R2 },
  { 3U, PPC::R3 },
  { 4U, PPC::R4 },
  { 5U, PPC::R5 },
  { 6U, PPC::R6 },
  { 7U, PPC::R7 },
  { 8U, PPC::R8 },
  { 9U, PPC::R9 },
  { 10U, PPC::R10 },
  { 11U, PPC::R11 },
  { 12U, PPC::R12 },
  { 13U, PPC::R13 },
  { 14U, PPC::R14 },
  { 15U, PPC::R15 },
  { 16U, PPC::R16 },
  { 17U, PPC::R17 },
  { 18U, PPC::R18 },
  { 19U, PPC::R19 },
  { 20U, PPC::R20 },
  { 21U, PPC::R21 },
  { 22U, PPC::R22 },
  { 23U, PPC::R23 },
  { 24U, PPC::R24 },
  { 25U, PPC::R25 },
  { 26U, PPC::R26 },
  { 27U, PPC::R27 },
  { 28U, PPC::R28 },
  { 29U, PPC::R29 },
  { 30U, PPC::R30 },
  { 31U, PPC::R31 },
  { 32U, PPC::F0 },
  { 33U, PPC::F1 },
  { 34U, PPC::F2 },
  { 35U, PPC::F3 },
  { 36U, PPC::F4 },
  { 37U, PPC::F5 },
  { 38U, PPC::F6 },
  { 39U, PPC::F7 },
  { 40U, PPC::F8 },
  { 41U, PPC::F9 },
  { 42U, PPC::F10 },
  { 43U, PPC::F11 },
  { 44U, PPC::F12 },
  { 45U, PPC::F13 },
  { 46U, PPC::F14 },
  { 47U, PPC::F15 },
  { 48U, PPC::F16 },
  { 49U, PPC::F17 },
  { 50U, PPC::F18 },
  { 51U, PPC::F19 },
  { 52U, PPC::F20 },
  { 53U, PPC::F21 },
  { 54U, PPC::F22 },
  { 55U, PPC::F23 },
  { 56U, PPC::F24 },
  { 57U, PPC::F25 },
  { 58U, PPC::F26 },
  { 59U, PPC::F27 },
  { 60U, PPC::F28 },
  { 61U, PPC::F29 },
  { 62U, PPC::F30 },
  { 63U, PPC::F31 },
  { 65U, PPC::LR },
  { 66U, PPC::CTR },
  { 68U, PPC::CR0 },
  { 69U, PPC::CR1 },
  { 70U, PPC::CR2 },
  { 71U, PPC::CR3 },
  { 72U, PPC::CR4 },
  { 73U, PPC::CR5 },
  { 74U, PPC::CR6 },
  { 75U, PPC::CR7 },
  { 77U, PPC::V0 },
  { 78U, PPC::V1 },
  { 79U, PPC::V2 },
  { 80U, PPC::V3 },
  { 81U, PPC::V4 },
  { 82U, PPC::V5 },
  { 83U, PPC::V6 },
  { 84U, PPC::V7 },
  { 85U, PPC::V8 },
  { 86U, PPC::V9 },
  { 87U, PPC::V10 },
  { 88U, PPC::V11 },
  { 89U, PPC::V12 },
  { 90U, PPC::V13 },
  { 91U, PPC::V14 },
  { 92U, PPC::V15 },
  { 93U, PPC::V16 },
  { 94U, PPC::V17 },
  { 95U, PPC::V18 },
  { 96U, PPC::V19 },
  { 97U, PPC::V20 },
  { 98U, PPC::V21 },
  { 99U, PPC::V22 },
  { 100U, PPC::V23 },
  { 101U, PPC::V24 },
  { 102U, PPC::V25 },
  { 103U, PPC::V26 },
  { 104U, PPC::V27 },
  { 105U, PPC::V28 },
  { 106U, PPC::V29 },
  { 107U, PPC::V30 },
  { 108U, PPC::V31 },
};
extern const unsigned PPCEHFlavour1Dwarf2LSize = sizeof(PPCEHFlavour1Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour0L2Dwarf[] = {
  { PPC::CR0, 68U },
  { PPC::CR1, 69U },
  { PPC::CR2, 70U },
  { PPC::CR3, 71U },
  { PPC::CR4, 72U },
  { PPC::CR5, 73U },
  { PPC::CR6, 74U },
  { PPC::CR7, 75U },
  { PPC::CTR, -2U },
  { PPC::CTR8, 66U },
  { PPC::F0, 32U },
  { PPC::F1, 33U },
  { PPC::F2, 34U },
  { PPC::F3, 35U },
  { PPC::F4, 36U },
  { PPC::F5, 37U },
  { PPC::F6, 38U },
  { PPC::F7, 39U },
  { PPC::F8, 40U },
  { PPC::F9, 41U },
  { PPC::F10, 42U },
  { PPC::F11, 43U },
  { PPC::F12, 44U },
  { PPC::F13, 45U },
  { PPC::F14, 46U },
  { PPC::F15, 47U },
  { PPC::F16, 48U },
  { PPC::F17, 49U },
  { PPC::F18, 50U },
  { PPC::F19, 51U },
  { PPC::F20, 52U },
  { PPC::F21, 53U },
  { PPC::F22, 54U },
  { PPC::F23, 55U },
  { PPC::F24, 56U },
  { PPC::F25, 57U },
  { PPC::F26, 58U },
  { PPC::F27, 59U },
  { PPC::F28, 60U },
  { PPC::F29, 61U },
  { PPC::F30, 62U },
  { PPC::F31, 63U },
  { PPC::LR, -2U },
  { PPC::LR8, 65U },
  { PPC::R0, -2U },
  { PPC::R1, -2U },
  { PPC::R2, -2U },
  { PPC::R3, -2U },
  { PPC::R4, -2U },
  { PPC::R5, -2U },
  { PPC::R6, -2U },
  { PPC::R7, -2U },
  { PPC::R8, -2U },
  { PPC::R9, -2U },
  { PPC::R10, -2U },
  { PPC::R11, -2U },
  { PPC::R12, -2U },
  { PPC::R13, -2U },
  { PPC::R14, -2U },
  { PPC::R15, -2U },
  { PPC::R16, -2U },
  { PPC::R17, -2U },
  { PPC::R18, -2U },
  { PPC::R19, -2U },
  { PPC::R20, -2U },
  { PPC::R21, -2U },
  { PPC::R22, -2U },
  { PPC::R23, -2U },
  { PPC::R24, -2U },
  { PPC::R25, -2U },
  { PPC::R26, -2U },
  { PPC::R27, -2U },
  { PPC::R28, -2U },
  { PPC::R29, -2U },
  { PPC::R30, -2U },
  { PPC::R31, -2U },
  { PPC::V0, 77U },
  { PPC::V1, 78U },
  { PPC::V2, 79U },
  { PPC::V3, 80U },
  { PPC::V4, 81U },
  { PPC::V5, 82U },
  { PPC::V6, 83U },
  { PPC::V7, 84U },
  { PPC::V8, 85U },
  { PPC::V9, 86U },
  { PPC::V10, 87U },
  { PPC::V11, 88U },
  { PPC::V12, 89U },
  { PPC::V13, 90U },
  { PPC::V14, 91U },
  { PPC::V15, 92U },
  { PPC::V16, 93U },
  { PPC::V17, 94U },
  { PPC::V18, 95U },
  { PPC::V19, 96U },
  { PPC::V20, 97U },
  { PPC::V21, 98U },
  { PPC::V22, 99U },
  { PPC::V23, 100U },
  { PPC::V24, 101U },
  { PPC::V25, 102U },
  { PPC::V26, 103U },
  { PPC::V27, 104U },
  { PPC::V28, 105U },
  { PPC::V29, 106U },
  { PPC::V30, 107U },
  { PPC::V31, 108U },
  { PPC::VRSAVE, 109U },
  { PPC::X0, 0U },
  { PPC::X1, 1U },
  { PPC::X2, 2U },
  { PPC::X3, 3U },
  { PPC::X4, 4U },
  { PPC::X5, 5U },
  { PPC::X6, 6U },
  { PPC::X7, 7U },
  { PPC::X8, 8U },
  { PPC::X9, 9U },
  { PPC::X10, 10U },
  { PPC::X11, 11U },
  { PPC::X12, 12U },
  { PPC::X13, 13U },
  { PPC::X14, 14U },
  { PPC::X15, 15U },
  { PPC::X16, 16U },
  { PPC::X17, 17U },
  { PPC::X18, 18U },
  { PPC::X19, 19U },
  { PPC::X20, 20U },
  { PPC::X21, 21U },
  { PPC::X22, 22U },
  { PPC::X23, 23U },
  { PPC::X24, 24U },
  { PPC::X25, 25U },
  { PPC::X26, 26U },
  { PPC::X27, 27U },
  { PPC::X28, 28U },
  { PPC::X29, 29U },
  { PPC::X30, 30U },
  { PPC::X31, 31U },
};
extern const unsigned PPCDwarfFlavour0L2DwarfSize = sizeof(PPCDwarfFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour1L2Dwarf[] = {
  { PPC::CR0, 68U },
  { PPC::CR1, 69U },
  { PPC::CR2, 70U },
  { PPC::CR3, 71U },
  { PPC::CR4, 72U },
  { PPC::CR5, 73U },
  { PPC::CR6, 74U },
  { PPC::CR7, 75U },
  { PPC::CTR, 66U },
  { PPC::CTR8, -2U },
  { PPC::F0, 32U },
  { PPC::F1, 33U },
  { PPC::F2, 34U },
  { PPC::F3, 35U },
  { PPC::F4, 36U },
  { PPC::F5, 37U },
  { PPC::F6, 38U },
  { PPC::F7, 39U },
  { PPC::F8, 40U },
  { PPC::F9, 41U },
  { PPC::F10, 42U },
  { PPC::F11, 43U },
  { PPC::F12, 44U },
  { PPC::F13, 45U },
  { PPC::F14, 46U },
  { PPC::F15, 47U },
  { PPC::F16, 48U },
  { PPC::F17, 49U },
  { PPC::F18, 50U },
  { PPC::F19, 51U },
  { PPC::F20, 52U },
  { PPC::F21, 53U },
  { PPC::F22, 54U },
  { PPC::F23, 55U },
  { PPC::F24, 56U },
  { PPC::F25, 57U },
  { PPC::F26, 58U },
  { PPC::F27, 59U },
  { PPC::F28, 60U },
  { PPC::F29, 61U },
  { PPC::F30, 62U },
  { PPC::F31, 63U },
  { PPC::LR, 65U },
  { PPC::LR8, -2U },
  { PPC::R0, 0U },
  { PPC::R1, 1U },
  { PPC::R2, 2U },
  { PPC::R3, 3U },
  { PPC::R4, 4U },
  { PPC::R5, 5U },
  { PPC::R6, 6U },
  { PPC::R7, 7U },
  { PPC::R8, 8U },
  { PPC::R9, 9U },
  { PPC::R10, 10U },
  { PPC::R11, 11U },
  { PPC::R12, 12U },
  { PPC::R13, 13U },
  { PPC::R14, 14U },
  { PPC::R15, 15U },
  { PPC::R16, 16U },
  { PPC::R17, 17U },
  { PPC::R18, 18U },
  { PPC::R19, 19U },
  { PPC::R20, 20U },
  { PPC::R21, 21U },
  { PPC::R22, 22U },
  { PPC::R23, 23U },
  { PPC::R24, 24U },
  { PPC::R25, 25U },
  { PPC::R26, 26U },
  { PPC::R27, 27U },
  { PPC::R28, 28U },
  { PPC::R29, 29U },
  { PPC::R30, 30U },
  { PPC::R31, 31U },
  { PPC::V0, 77U },
  { PPC::V1, 78U },
  { PPC::V2, 79U },
  { PPC::V3, 80U },
  { PPC::V4, 81U },
  { PPC::V5, 82U },
  { PPC::V6, 83U },
  { PPC::V7, 84U },
  { PPC::V8, 85U },
  { PPC::V9, 86U },
  { PPC::V10, 87U },
  { PPC::V11, 88U },
  { PPC::V12, 89U },
  { PPC::V13, 90U },
  { PPC::V14, 91U },
  { PPC::V15, 92U },
  { PPC::V16, 93U },
  { PPC::V17, 94U },
  { PPC::V18, 95U },
  { PPC::V19, 96U },
  { PPC::V20, 97U },
  { PPC::V21, 98U },
  { PPC::V22, 99U },
  { PPC::V23, 100U },
  { PPC::V24, 101U },
  { PPC::V25, 102U },
  { PPC::V26, 103U },
  { PPC::V27, 104U },
  { PPC::V28, 105U },
  { PPC::V29, 106U },
  { PPC::V30, 107U },
  { PPC::V31, 108U },
  { PPC::X0, -2U },
  { PPC::X1, -2U },
  { PPC::X2, -2U },
  { PPC::X3, -2U },
  { PPC::X4, -2U },
  { PPC::X5, -2U },
  { PPC::X6, -2U },
  { PPC::X7, -2U },
  { PPC::X8, -2U },
  { PPC::X9, -2U },
  { PPC::X10, -2U },
  { PPC::X11, -2U },
  { PPC::X12, -2U },
  { PPC::X13, -2U },
  { PPC::X14, -2U },
  { PPC::X15, -2U },
  { PPC::X16, -2U },
  { PPC::X17, -2U },
  { PPC::X18, -2U },
  { PPC::X19, -2U },
  { PPC::X20, -2U },
  { PPC::X21, -2U },
  { PPC::X22, -2U },
  { PPC::X23, -2U },
  { PPC::X24, -2U },
  { PPC::X25, -2U },
  { PPC::X26, -2U },
  { PPC::X27, -2U },
  { PPC::X28, -2U },
  { PPC::X29, -2U },
  { PPC::X30, -2U },
  { PPC::X31, -2U },
};
extern const unsigned PPCDwarfFlavour1L2DwarfSize = sizeof(PPCDwarfFlavour1L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour0L2Dwarf[] = {
  { PPC::CR0, 68U },
  { PPC::CR1, 69U },
  { PPC::CR2, 70U },
  { PPC::CR3, 71U },
  { PPC::CR4, 72U },
  { PPC::CR5, 73U },
  { PPC::CR6, 74U },
  { PPC::CR7, 75U },
  { PPC::CTR, -2U },
  { PPC::CTR8, 66U },
  { PPC::F0, 32U },
  { PPC::F1, 33U },
  { PPC::F2, 34U },
  { PPC::F3, 35U },
  { PPC::F4, 36U },
  { PPC::F5, 37U },
  { PPC::F6, 38U },
  { PPC::F7, 39U },
  { PPC::F8, 40U },
  { PPC::F9, 41U },
  { PPC::F10, 42U },
  { PPC::F11, 43U },
  { PPC::F12, 44U },
  { PPC::F13, 45U },
  { PPC::F14, 46U },
  { PPC::F15, 47U },
  { PPC::F16, 48U },
  { PPC::F17, 49U },
  { PPC::F18, 50U },
  { PPC::F19, 51U },
  { PPC::F20, 52U },
  { PPC::F21, 53U },
  { PPC::F22, 54U },
  { PPC::F23, 55U },
  { PPC::F24, 56U },
  { PPC::F25, 57U },
  { PPC::F26, 58U },
  { PPC::F27, 59U },
  { PPC::F28, 60U },
  { PPC::F29, 61U },
  { PPC::F30, 62U },
  { PPC::F31, 63U },
  { PPC::LR, -2U },
  { PPC::LR8, 65U },
  { PPC::R0, -2U },
  { PPC::R1, -2U },
  { PPC::R2, -2U },
  { PPC::R3, -2U },
  { PPC::R4, -2U },
  { PPC::R5, -2U },
  { PPC::R6, -2U },
  { PPC::R7, -2U },
  { PPC::R8, -2U },
  { PPC::R9, -2U },
  { PPC::R10, -2U },
  { PPC::R11, -2U },
  { PPC::R12, -2U },
  { PPC::R13, -2U },
  { PPC::R14, -2U },
  { PPC::R15, -2U },
  { PPC::R16, -2U },
  { PPC::R17, -2U },
  { PPC::R18, -2U },
  { PPC::R19, -2U },
  { PPC::R20, -2U },
  { PPC::R21, -2U },
  { PPC::R22, -2U },
  { PPC::R23, -2U },
  { PPC::R24, -2U },
  { PPC::R25, -2U },
  { PPC::R26, -2U },
  { PPC::R27, -2U },
  { PPC::R28, -2U },
  { PPC::R29, -2U },
  { PPC::R30, -2U },
  { PPC::R31, -2U },
  { PPC::V0, 77U },
  { PPC::V1, 78U },
  { PPC::V2, 79U },
  { PPC::V3, 80U },
  { PPC::V4, 81U },
  { PPC::V5, 82U },
  { PPC::V6, 83U },
  { PPC::V7, 84U },
  { PPC::V8, 85U },
  { PPC::V9, 86U },
  { PPC::V10, 87U },
  { PPC::V11, 88U },
  { PPC::V12, 89U },
  { PPC::V13, 90U },
  { PPC::V14, 91U },
  { PPC::V15, 92U },
  { PPC::V16, 93U },
  { PPC::V17, 94U },
  { PPC::V18, 95U },
  { PPC::V19, 96U },
  { PPC::V20, 97U },
  { PPC::V21, 98U },
  { PPC::V22, 99U },
  { PPC::V23, 100U },
  { PPC::V24, 101U },
  { PPC::V25, 102U },
  { PPC::V26, 103U },
  { PPC::V27, 104U },
  { PPC::V28, 105U },
  { PPC::V29, 106U },
  { PPC::V30, 107U },
  { PPC::V31, 108U },
  { PPC::VRSAVE, 109U },
  { PPC::X0, 0U },
  { PPC::X1, 1U },
  { PPC::X2, 2U },
  { PPC::X3, 3U },
  { PPC::X4, 4U },
  { PPC::X5, 5U },
  { PPC::X6, 6U },
  { PPC::X7, 7U },
  { PPC::X8, 8U },
  { PPC::X9, 9U },
  { PPC::X10, 10U },
  { PPC::X11, 11U },
  { PPC::X12, 12U },
  { PPC::X13, 13U },
  { PPC::X14, 14U },
  { PPC::X15, 15U },
  { PPC::X16, 16U },
  { PPC::X17, 17U },
  { PPC::X18, 18U },
  { PPC::X19, 19U },
  { PPC::X20, 20U },
  { PPC::X21, 21U },
  { PPC::X22, 22U },
  { PPC::X23, 23U },
  { PPC::X24, 24U },
  { PPC::X25, 25U },
  { PPC::X26, 26U },
  { PPC::X27, 27U },
  { PPC::X28, 28U },
  { PPC::X29, 29U },
  { PPC::X30, 30U },
  { PPC::X31, 31U },
};
extern const unsigned PPCEHFlavour0L2DwarfSize = sizeof(PPCEHFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour1L2Dwarf[] = {
  { PPC::CR0, 68U },
  { PPC::CR1, 69U },
  { PPC::CR2, 70U },
  { PPC::CR3, 71U },
  { PPC::CR4, 72U },
  { PPC::CR5, 73U },
  { PPC::CR6, 74U },
  { PPC::CR7, 75U },
  { PPC::CTR, 66U },
  { PPC::CTR8, -2U },
  { PPC::F0, 32U },
  { PPC::F1, 33U },
  { PPC::F2, 34U },
  { PPC::F3, 35U },
  { PPC::F4, 36U },
  { PPC::F5, 37U },
  { PPC::F6, 38U },
  { PPC::F7, 39U },
  { PPC::F8, 40U },
  { PPC::F9, 41U },
  { PPC::F10, 42U },
  { PPC::F11, 43U },
  { PPC::F12, 44U },
  { PPC::F13, 45U },
  { PPC::F14, 46U },
  { PPC::F15, 47U },
  { PPC::F16, 48U },
  { PPC::F17, 49U },
  { PPC::F18, 50U },
  { PPC::F19, 51U },
  { PPC::F20, 52U },
  { PPC::F21, 53U },
  { PPC::F22, 54U },
  { PPC::F23, 55U },
  { PPC::F24, 56U },
  { PPC::F25, 57U },
  { PPC::F26, 58U },
  { PPC::F27, 59U },
  { PPC::F28, 60U },
  { PPC::F29, 61U },
  { PPC::F30, 62U },
  { PPC::F31, 63U },
  { PPC::LR, 65U },
  { PPC::LR8, -2U },
  { PPC::R0, 0U },
  { PPC::R1, 1U },
  { PPC::R2, 2U },
  { PPC::R3, 3U },
  { PPC::R4, 4U },
  { PPC::R5, 5U },
  { PPC::R6, 6U },
  { PPC::R7, 7U },
  { PPC::R8, 8U },
  { PPC::R9, 9U },
  { PPC::R10, 10U },
  { PPC::R11, 11U },
  { PPC::R12, 12U },
  { PPC::R13, 13U },
  { PPC::R14, 14U },
  { PPC::R15, 15U },
  { PPC::R16, 16U },
  { PPC::R17, 17U },
  { PPC::R18, 18U },
  { PPC::R19, 19U },
  { PPC::R20, 20U },
  { PPC::R21, 21U },
  { PPC::R22, 22U },
  { PPC::R23, 23U },
  { PPC::R24, 24U },
  { PPC::R25, 25U },
  { PPC::R26, 26U },
  { PPC::R27, 27U },
  { PPC::R28, 28U },
  { PPC::R29, 29U },
  { PPC::R30, 30U },
  { PPC::R31, 31U },
  { PPC::V0, 77U },
  { PPC::V1, 78U },
  { PPC::V2, 79U },
  { PPC::V3, 80U },
  { PPC::V4, 81U },
  { PPC::V5, 82U },
  { PPC::V6, 83U },
  { PPC::V7, 84U },
  { PPC::V8, 85U },
  { PPC::V9, 86U },
  { PPC::V10, 87U },
  { PPC::V11, 88U },
  { PPC::V12, 89U },
  { PPC::V13, 90U },
  { PPC::V14, 91U },
  { PPC::V15, 92U },
  { PPC::V16, 93U },
  { PPC::V17, 94U },
  { PPC::V18, 95U },
  { PPC::V19, 96U },
  { PPC::V20, 97U },
  { PPC::V21, 98U },
  { PPC::V22, 99U },
  { PPC::V23, 100U },
  { PPC::V24, 101U },
  { PPC::V25, 102U },
  { PPC::V26, 103U },
  { PPC::V27, 104U },
  { PPC::V28, 105U },
  { PPC::V29, 106U },
  { PPC::V30, 107U },
  { PPC::V31, 108U },
  { PPC::X0, -2U },
  { PPC::X1, -2U },
  { PPC::X2, -2U },
  { PPC::X3, -2U },
  { PPC::X4, -2U },
  { PPC::X5, -2U },
  { PPC::X6, -2U },
  { PPC::X7, -2U },
  { PPC::X8, -2U },
  { PPC::X9, -2U },
  { PPC::X10, -2U },
  { PPC::X11, -2U },
  { PPC::X12, -2U },
  { PPC::X13, -2U },
  { PPC::X14, -2U },
  { PPC::X15, -2U },
  { PPC::X16, -2U },
  { PPC::X17, -2U },
  { PPC::X18, -2U },
  { PPC::X19, -2U },
  { PPC::X20, -2U },
  { PPC::X21, -2U },
  { PPC::X22, -2U },
  { PPC::X23, -2U },
  { PPC::X24, -2U },
  { PPC::X25, -2U },
  { PPC::X26, -2U },
  { PPC::X27, -2U },
  { PPC::X28, -2U },
  { PPC::X29, -2U },
  { PPC::X30, -2U },
  { PPC::X31, -2U },
};
extern const unsigned PPCEHFlavour1L2DwarfSize = sizeof(PPCEHFlavour1L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

static inline void InitPPCMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0) {
  RI->InitMCRegisterInfo(PPCRegDesc, 176, RA, PPCMCRegisterClasses, 12, PPCRegLists, (uint16_t*)PPCSubRegTable, 5);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(PPCDwarfFlavour0Dwarf2L, PPCDwarfFlavour0Dwarf2LSize, false);
    break;
  case 1:
    RI->mapDwarfRegsToLLVMRegs(PPCDwarfFlavour1Dwarf2L, PPCDwarfFlavour1Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(PPCEHFlavour0Dwarf2L, PPCEHFlavour0Dwarf2LSize, true);
    break;
  case 1:
    RI->mapDwarfRegsToLLVMRegs(PPCEHFlavour1Dwarf2L, PPCEHFlavour1Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(PPCDwarfFlavour0L2Dwarf, PPCDwarfFlavour0L2DwarfSize, false);
    break;
  case 1:
    RI->mapLLVMRegsToDwarfRegs(PPCDwarfFlavour1L2Dwarf, PPCDwarfFlavour1L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(PPCEHFlavour0L2Dwarf, PPCEHFlavour0L2DwarfSize, true);
    break;
  case 1:
    RI->mapLLVMRegsToDwarfRegs(PPCEHFlavour1L2Dwarf, PPCEHFlavour1L2DwarfSize, true);
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

struct PPCGenRegisterInfo : public TargetRegisterInfo {
  explicit PPCGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0);
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

namespace PPC { // Register classes
  extern const TargetRegisterClass GPRCRegClass;
  static const TargetRegisterClass * const GPRCRegisterClass = &GPRCRegClass;
  extern const TargetRegisterClass G8RCRegClass;
  static const TargetRegisterClass * const G8RCRegisterClass = &G8RCRegClass;
  extern const TargetRegisterClass CRBITRCRegClass;
  static const TargetRegisterClass * const CRBITRCRegisterClass = &CRBITRCRegClass;
  extern const TargetRegisterClass F4RCRegClass;
  static const TargetRegisterClass * const F4RCRegisterClass = &F4RCRegClass;
  extern const TargetRegisterClass F8RCRegClass;
  static const TargetRegisterClass * const F8RCRegisterClass = &F8RCRegClass;
  extern const TargetRegisterClass G8RC_with_sub_32RegClass;
  static const TargetRegisterClass * const G8RC_with_sub_32RegisterClass = &G8RC_with_sub_32RegClass;
  extern const TargetRegisterClass VRRCRegClass;
  static const TargetRegisterClass * const VRRCRegisterClass = &VRRCRegClass;
  extern const TargetRegisterClass CRRCRegClass;
  static const TargetRegisterClass * const CRRCRegisterClass = &CRRCRegClass;
  extern const TargetRegisterClass CARRYRCRegClass;
  static const TargetRegisterClass * const CARRYRCRegisterClass = &CARRYRCRegClass;
  extern const TargetRegisterClass CTRRCRegClass;
  static const TargetRegisterClass * const CTRRCRegisterClass = &CTRRCRegClass;
  extern const TargetRegisterClass VRSAVERCRegClass;
  static const TargetRegisterClass * const VRSAVERCRegisterClass = &VRSAVERCRegClass;
  extern const TargetRegisterClass CTRRC8RegClass;
  static const TargetRegisterClass * const CTRRC8RegisterClass = &CTRRC8RegClass;
} // end of namespace PPC

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

extern const MCRegisterClass PPCMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i32, MVT::Other,
  /* 2 */ MVT::i64, MVT::Other,
  /* 4 */ MVT::f32, MVT::Other,
  /* 6 */ MVT::f64, MVT::Other,
  /* 8 */ MVT::v16i8, MVT::v8i16, MVT::v4i32, MVT::v4f32, MVT::Other,
};

static const TargetRegisterClass *const NullRegClasses[] = { NULL };

// GPRC Super-register Classes...
static const TargetRegisterClass *const GPRCSuperRegClasses[] = {
  NULL
};

// G8RC Super-register Classes...
static const TargetRegisterClass *const G8RCSuperRegClasses[] = {
  NULL
};

// CRBITRC Super-register Classes...
static const TargetRegisterClass *const CRBITRCSuperRegClasses[] = {
  &PPC::CRRCRegClass, NULL
};

// F4RC Super-register Classes...
static const TargetRegisterClass *const F4RCSuperRegClasses[] = {
  NULL
};

// F8RC Super-register Classes...
static const TargetRegisterClass *const F8RCSuperRegClasses[] = {
  NULL
};

// G8RC_with_sub_32 Super-register Classes...
static const TargetRegisterClass *const G8RC_with_sub_32SuperRegClasses[] = {
  NULL
};

// VRRC Super-register Classes...
static const TargetRegisterClass *const VRRCSuperRegClasses[] = {
  NULL
};

// CRRC Super-register Classes...
static const TargetRegisterClass *const CRRCSuperRegClasses[] = {
  NULL
};

// CARRYRC Super-register Classes...
static const TargetRegisterClass *const CARRYRCSuperRegClasses[] = {
  NULL
};

// CTRRC Super-register Classes...
static const TargetRegisterClass *const CTRRCSuperRegClasses[] = {
  NULL
};

// VRSAVERC Super-register Classes...
static const TargetRegisterClass *const VRSAVERCSuperRegClasses[] = {
  NULL
};

// CTRRC8 Super-register Classes...
static const TargetRegisterClass *const CTRRC8SuperRegClasses[] = {
  NULL
};

static const uint32_t GPRCSubclassMask[] = {
  0x00000001, 
};

static const uint32_t G8RCSubclassMask[] = {
  0x00000022, 
};

static const uint32_t CRBITRCSubclassMask[] = {
  0x00000004, 
};

static const uint32_t F4RCSubclassMask[] = {
  0x00000018, 
};

static const uint32_t F8RCSubclassMask[] = {
  0x00000010, 
};

static const uint32_t G8RC_with_sub_32SubclassMask[] = {
  0x00000020, 
};

static const uint32_t VRRCSubclassMask[] = {
  0x00000040, 
};

static const uint32_t CRRCSubclassMask[] = {
  0x00000080, 
};

static const uint32_t CARRYRCSubclassMask[] = {
  0x00000100, 
};

static const uint32_t CTRRCSubclassMask[] = {
  0x00000200, 
};

static const uint32_t VRSAVERCSubclassMask[] = {
  0x00000400, 
};

static const uint32_t CTRRC8SubclassMask[] = {
  0x00000800, 
};

static const TargetRegisterClass *const F8RCSuperclasses[] = {
  &PPC::F4RCRegClass,
  NULL
};

static const TargetRegisterClass *const G8RC_with_sub_32Superclasses[] = {
  &PPC::G8RCRegClass,
  NULL
};

namespace PPC {   // Register class instances
  extern const TargetRegisterClass GPRCRegClass = {
    &PPCMCRegisterClasses[GPRCRegClassID],
    VTLists + 0,
    GPRCSubclassMask,
    NullRegClasses,
    GPRCSuperRegClasses,
    0
  };

  extern const TargetRegisterClass G8RCRegClass = {
    &PPCMCRegisterClasses[G8RCRegClassID],
    VTLists + 2,
    G8RCSubclassMask,
    NullRegClasses,
    G8RCSuperRegClasses,
    0
  };

  extern const TargetRegisterClass CRBITRCRegClass = {
    &PPCMCRegisterClasses[CRBITRCRegClassID],
    VTLists + 0,
    CRBITRCSubclassMask,
    NullRegClasses,
    CRBITRCSuperRegClasses,
    0
  };

  extern const TargetRegisterClass F4RCRegClass = {
    &PPCMCRegisterClasses[F4RCRegClassID],
    VTLists + 4,
    F4RCSubclassMask,
    NullRegClasses,
    F4RCSuperRegClasses,
    0
  };

  extern const TargetRegisterClass F8RCRegClass = {
    &PPCMCRegisterClasses[F8RCRegClassID],
    VTLists + 6,
    F8RCSubclassMask,
    F8RCSuperclasses,
    F8RCSuperRegClasses,
    0
  };

  extern const TargetRegisterClass G8RC_with_sub_32RegClass = {
    &PPCMCRegisterClasses[G8RC_with_sub_32RegClassID],
    VTLists + 2,
    G8RC_with_sub_32SubclassMask,
    G8RC_with_sub_32Superclasses,
    G8RC_with_sub_32SuperRegClasses,
    0
  };

  extern const TargetRegisterClass VRRCRegClass = {
    &PPCMCRegisterClasses[VRRCRegClassID],
    VTLists + 8,
    VRRCSubclassMask,
    NullRegClasses,
    VRRCSuperRegClasses,
    0
  };

  extern const TargetRegisterClass CRRCRegClass = {
    &PPCMCRegisterClasses[CRRCRegClassID],
    VTLists + 0,
    CRRCSubclassMask,
    NullRegClasses,
    CRRCSuperRegClasses,
    0
  };

  extern const TargetRegisterClass CARRYRCRegClass = {
    &PPCMCRegisterClasses[CARRYRCRegClassID],
    VTLists + 0,
    CARRYRCSubclassMask,
    NullRegClasses,
    CARRYRCSuperRegClasses,
    0
  };

  extern const TargetRegisterClass CTRRCRegClass = {
    &PPCMCRegisterClasses[CTRRCRegClassID],
    VTLists + 0,
    CTRRCSubclassMask,
    NullRegClasses,
    CTRRCSuperRegClasses,
    0
  };

  extern const TargetRegisterClass VRSAVERCRegClass = {
    &PPCMCRegisterClasses[VRSAVERCRegClassID],
    VTLists + 0,
    VRSAVERCSubclassMask,
    NullRegClasses,
    VRSAVERCSuperRegClasses,
    0
  };

  extern const TargetRegisterClass CTRRC8RegClass = {
    &PPCMCRegisterClasses[CTRRC8RegClassID],
    VTLists + 2,
    CTRRC8SubclassMask,
    NullRegClasses,
    CTRRC8SuperRegClasses,
    0
  };

}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &PPC::GPRCRegClass,
    &PPC::G8RCRegClass,
    &PPC::CRBITRCRegClass,
    &PPC::F4RCRegClass,
    &PPC::F8RCRegClass,
    &PPC::G8RC_with_sub_32RegClass,
    &PPC::VRRCRegClass,
    &PPC::CRRCRegClass,
    &PPC::CARRYRCRegClass,
    &PPC::CTRRCRegClass,
    &PPC::VRSAVERCRegClass,
    &PPC::CTRRC8RegClass,
  };
}

static const TargetRegisterInfoDesc PPCRegInfoDesc[] = { // Extra Descriptors
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
};

static const char *const PPCSubRegIndexTable[] = { "sub_32", "sub_eq", "sub_gt", "sub_lt", "sub_un" };


unsigned PPCGenRegisterInfo::composeSubRegIndices(unsigned IdxA, unsigned IdxB) const {
  switch (IdxA) {
  default:
    return IdxB;
  }
}

const TargetRegisterClass *PPCGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[12][5] = {
    {	// GPRC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// G8RC
      6,	// sub_32 -> G8RC_with_sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// CRBITRC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// F4RC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// F8RC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// G8RC_with_sub_32
      6,	// sub_32 -> G8RC_with_sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// VRRC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// CRRC
      0,	// sub_32
      8,	// sub_eq -> CRRC
      8,	// sub_gt -> CRRC
      8,	// sub_lt -> CRRC
      8,	// sub_un -> CRRC
    },
    {	// CARRYRC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// CTRRC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// VRSAVERC
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
    {	// CTRRC8
      0,	// sub_32
      0,	// sub_eq
      0,	// sub_gt
      0,	// sub_lt
      0,	// sub_un
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 5 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : 0;
}

const TargetRegisterClass *PPCGenRegisterInfo::getMatchingSuperRegClass(const TargetRegisterClass *A, const TargetRegisterClass *B, unsigned Idx) const {
  static const uint32_t Table[12][5][1] = {
    {	// GPRC
      { 0x00000020, },	// sub_32
      { 0x00000000, },	// sub_eq
      { 0x00000000, },	// sub_gt
      { 0x00000000, },	// sub_lt
      { 0x00000000, },	// sub_un
    },
    {	// G8RC
      { 0x00000000, },	// sub_32
      { 0x00000000, },	// sub_eq
      { 0x00000000, },	// sub_gt
      { 0x00000000, },	// sub_lt
      { 0x00000000, },	// sub_un
    },
    {	// CRBITRC
      { 0x00000000, },	// sub_32
      { 0x00000080, },	// sub_eq
      { 0x00000080, },	// sub_gt
      { 0x00000080, },	// sub_lt
      { 0x00000080, },	// sub_un
    },
    {	// F4RC
      { 0x00000000, },	// sub_32
      { 0x00000000, },	// sub_eq
      { 0x00000000, },	// sub_gt
      { 0x00000000, },	// sub_lt
      { 0x00000000, },	// sub_un
    },
    {	// F8RC
      { 0x00000000, },	// sub_32
      { 0x00000000, },	// sub_eq
      { 0x00000000, },	// sub_gt
      { 0x00000000, },	// sub_lt
      { 0x00000000, },	// sub_un
    },
    {	// G8RC_with_sub_32
      { 0x00000000, },	// sub_32
      { 0x00000000, },	// sub_eq
      { 0x00000000, },	// sub_gt
      { 0x00000000, },	// sub_lt
      { 0x00000000, },	// sub_un
    },
    {	// VRRC
      { 0x00000000, },	// sub_32
      { 0x00000000, },	// sub_eq
      { 0x00000000, },	// sub_gt
      { 0x00000000, },	// sub_lt
      { 0x00000000, },	// sub_un
    },
    {	// CRRC
      { 0x00000000, },	// sub_32
      { 0x00000000, },	// sub_eq
      { 0x00000000, },	// sub_gt
      { 0x00000000, },	// sub_lt
      { 0x00000000, },	// sub_un
    },
    {	// CARRYRC
      { 0x00000000, },	// sub_32
      { 0x00000000, },	// sub_eq
      { 0x00000000, },	// sub_gt
      { 0x00000000, },	// sub_lt
      { 0x00000000, },	// sub_un
    },
    {	// CTRRC
      { 0x00000000, },	// sub_32
      { 0x00000000, },	// sub_eq
      { 0x00000000, },	// sub_gt
      { 0x00000000, },	// sub_lt
      { 0x00000000, },	// sub_un
    },
    {	// VRSAVERC
      { 0x00000000, },	// sub_32
      { 0x00000000, },	// sub_eq
      { 0x00000000, },	// sub_gt
      { 0x00000000, },	// sub_lt
      { 0x00000000, },	// sub_un
    },
    {	// CTRRC8
      { 0x00000000, },	// sub_32
      { 0x00000000, },	// sub_eq
      { 0x00000000, },	// sub_gt
      { 0x00000000, },	// sub_lt
      { 0x00000000, },	// sub_un
    },
  };
  assert(A && B && "Missing regclass");
  --Idx;
  assert(Idx < 5 && "Bad subreg");
  const uint32_t *TV = Table[B->getID()][Idx];
  const uint32_t *SC = A->getSubClassMask();
  for (unsigned i = 0; i != 1; ++i)
    if (unsigned Common = TV[i] & SC[i])
      return getRegClass(32*i + CountTrailingZeros_32(Common));
  return 0;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &PPCGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 33},  	// GPRC
    {1, 33},  	// G8RC
    {1, 32},  	// CRBITRC
    {1, 32},  	// F4RC
    {1, 32},  	// F8RC
    {1, 32},  	// G8RC_with_sub_32
    {1, 32},  	// VRRC
    {4, 32},  	// CRRC
    {1, 1},  	// CARRYRC
    {1, 1},  	// CTRRC
    {1, 1},  	// VRSAVERC
    {1, 1},  	// CTRRC8
    {0, 0} };
  return RCWeightTable[RC->getID()];
}


// Get the number of dimensions of register pressure.
unsigned PPCGenRegisterInfo::getNumRegPressureSets() const {
  return 8;
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned PPCGenRegisterInfo::
getRegPressureSetLimit(unsigned Idx) const {
  static const unsigned PressureLimitTable[] = {
    32,  	// 0: CRBITRC
    32,  	// 1: F4RC
    32,  	// 2: VRRC
    1,  	// 3: CARRYRC
    1,  	// 4: CTRRC
    1,  	// 5: VRSAVERC
    1,  	// 6: CTRRC8
    34,  	// 7: GPRC+G8RC
    0 };
  return PressureLimitTable[Idx];
}

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* PPCGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const int RCSetsTable[] = {
    7,  -1,  	// GPRC
    7,  -1,  	// G8RC
    0,  -1,  	// CRBITRC
    1,  -1,  	// F4RC
    1,  -1,  	// F8RC
    7,  -1,  	// G8RC_with_sub_32
    2,  -1,  	// VRRC
    0,  -1,  	// CRRC
    3,  -1,  	// CARRYRC
    4,  -1,  	// CTRRC
    5,  -1,  	// VRSAVERC
    6,  -1,  	// CTRRC8
    -1 };
  static const unsigned RCSetStartTable[] = {
    0,2,4,6,8,10,12,14,16,18,20,22,0 };
  unsigned SetListStart = RCSetStartTable[RC->getID()];
  return &RCSetsTable[SetListStart];
}

extern const MCRegisterDesc PPCRegDesc[];
extern const uint16_t PPCRegLists[];
extern const uint16_t *getPPCSubRegTable();
// PPC Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour0Dwarf2L[];
extern const unsigned PPCDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour1Dwarf2L[];
extern const unsigned PPCDwarfFlavour1Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour0Dwarf2L[];
extern const unsigned PPCEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour1Dwarf2L[];
extern const unsigned PPCEHFlavour1Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour0L2Dwarf[];
extern const unsigned PPCDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCDwarfFlavour1L2Dwarf[];
extern const unsigned PPCDwarfFlavour1L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour0L2Dwarf[];
extern const unsigned PPCEHFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair PPCEHFlavour1L2Dwarf[];
extern const unsigned PPCEHFlavour1L2DwarfSize;

PPCGenRegisterInfo::
PPCGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour)
  : TargetRegisterInfo(PPCRegInfoDesc, RegisterClasses, RegisterClasses+12,
             PPCSubRegIndexTable) {
  InitMCRegisterInfo(PPCRegDesc, 176, RA,
                     PPCMCRegisterClasses, 12,
                     PPCRegLists,
                     getPPCSubRegTable(), 5);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(PPCDwarfFlavour0Dwarf2L, PPCDwarfFlavour0Dwarf2LSize, false);
    break;
  case 1:
    mapDwarfRegsToLLVMRegs(PPCDwarfFlavour1Dwarf2L, PPCDwarfFlavour1Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(PPCEHFlavour0Dwarf2L, PPCEHFlavour0Dwarf2LSize, true);
    break;
  case 1:
    mapDwarfRegsToLLVMRegs(PPCEHFlavour1Dwarf2L, PPCEHFlavour1Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(PPCDwarfFlavour0L2Dwarf, PPCDwarfFlavour0L2DwarfSize, false);
    break;
  case 1:
    mapLLVMRegsToDwarfRegs(PPCDwarfFlavour1L2Dwarf, PPCDwarfFlavour1L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(PPCEHFlavour0L2Dwarf, PPCEHFlavour0L2DwarfSize, true);
    break;
  case 1:
    mapLLVMRegsToDwarfRegs(PPCEHFlavour1L2Dwarf, PPCEHFlavour1L2DwarfSize, true);
    break;
  }
}

static const uint16_t CSR_Darwin32_SaveList[] = { PPC::R13, PPC::R14, PPC::R15, PPC::R16, PPC::R17, PPC::R18, PPC::R19, PPC::R20, PPC::R21, PPC::R22, PPC::R23, PPC::R24, PPC::R25, PPC::R26, PPC::R27, PPC::R28, PPC::R29, PPC::R30, PPC::R31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, PPC::V20, PPC::V21, PPC::V22, PPC::V23, PPC::V24, PPC::V25, PPC::V26, PPC::V27, PPC::V28, PPC::V29, PPC::V30, PPC::V31, 0 };
static const uint32_t CSR_Darwin32_RegMask[] = { 0x07fff000, 0xfc000000, 0xf8000fff, 0x00003fff, 0x00007ff8, 0x00000000, };
static const uint16_t CSR_Darwin64_SaveList[] = { PPC::X13, PPC::X14, PPC::X15, PPC::X16, PPC::X17, PPC::X18, PPC::X19, PPC::X20, PPC::X21, PPC::X22, PPC::X23, PPC::X24, PPC::X25, PPC::X26, PPC::X27, PPC::X28, PPC::X29, PPC::X30, PPC::X31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, PPC::V20, PPC::V21, PPC::V22, PPC::V23, PPC::V24, PPC::V25, PPC::V26, PPC::V27, PPC::V28, PPC::V29, PPC::V30, PPC::V31, 0 };
static const uint32_t CSR_Darwin64_RegMask[] = { 0x07fff000, 0xfc000000, 0xf8000fff, 0x00003fff, 0xe0007ff8, 0x0000ffff, };
static const uint16_t CSR_SVR432_SaveList[] = { PPC::R14, PPC::R15, PPC::R16, PPC::R17, PPC::R18, PPC::R19, PPC::R20, PPC::VRSAVE, PPC::R21, PPC::R22, PPC::R23, PPC::R24, PPC::R25, PPC::R26, PPC::R27, PPC::R28, PPC::R29, PPC::R30, PPC::R31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, PPC::V20, PPC::V21, PPC::V22, PPC::V23, PPC::V24, PPC::V25, PPC::V26, PPC::V27, PPC::V28, PPC::V29, PPC::V30, PPC::V31, 0 };
static const uint32_t CSR_SVR432_RegMask[] = { 0x07fff000, 0xfc000000, 0xf0000fff, 0x00003fff, 0x0000fff8, 0x00000000, };
static const uint16_t CSR_SVR464_SaveList[] = { PPC::X14, PPC::X15, PPC::X16, PPC::X17, PPC::X18, PPC::X19, PPC::X20, PPC::VRSAVE, PPC::X21, PPC::X22, PPC::X23, PPC::X24, PPC::X25, PPC::X26, PPC::X27, PPC::X28, PPC::X29, PPC::X30, PPC::X31, PPC::F14, PPC::F15, PPC::F16, PPC::F17, PPC::F18, PPC::F19, PPC::F20, PPC::F21, PPC::F22, PPC::F23, PPC::F24, PPC::F25, PPC::F26, PPC::F27, PPC::F28, PPC::F29, PPC::F30, PPC::F31, PPC::CR2, PPC::CR3, PPC::CR4, PPC::V20, PPC::V21, PPC::V22, PPC::V23, PPC::V24, PPC::V25, PPC::V26, PPC::V27, PPC::V28, PPC::V29, PPC::V30, PPC::V31, 0 };
static const uint32_t CSR_SVR464_RegMask[] = { 0x07fff000, 0xfc000000, 0xf0000fff, 0x00003fff, 0xc000fff8, 0x0000ffff, };


} // End llvm namespace 
#endif // GET_REGINFO_TARGET_DESC

