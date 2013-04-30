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
extern const MCRegisterClass SPUMCRegisterClasses[];

namespace SPU {
enum {
  NoRegister,
  R0 = 1,
  R1 = 2,
  R2 = 3,
  R3 = 4,
  R4 = 5,
  R5 = 6,
  R6 = 7,
  R7 = 8,
  R8 = 9,
  R9 = 10,
  R10 = 11,
  R11 = 12,
  R12 = 13,
  R13 = 14,
  R14 = 15,
  R15 = 16,
  R16 = 17,
  R17 = 18,
  R18 = 19,
  R19 = 20,
  R20 = 21,
  R21 = 22,
  R22 = 23,
  R23 = 24,
  R24 = 25,
  R25 = 26,
  R26 = 27,
  R27 = 28,
  R28 = 29,
  R29 = 30,
  R30 = 31,
  R31 = 32,
  R32 = 33,
  R33 = 34,
  R34 = 35,
  R35 = 36,
  R36 = 37,
  R37 = 38,
  R38 = 39,
  R39 = 40,
  R40 = 41,
  R41 = 42,
  R42 = 43,
  R43 = 44,
  R44 = 45,
  R45 = 46,
  R46 = 47,
  R47 = 48,
  R48 = 49,
  R49 = 50,
  R50 = 51,
  R51 = 52,
  R52 = 53,
  R53 = 54,
  R54 = 55,
  R55 = 56,
  R56 = 57,
  R57 = 58,
  R58 = 59,
  R59 = 60,
  R60 = 61,
  R61 = 62,
  R62 = 63,
  R63 = 64,
  R64 = 65,
  R65 = 66,
  R66 = 67,
  R67 = 68,
  R68 = 69,
  R69 = 70,
  R70 = 71,
  R71 = 72,
  R72 = 73,
  R73 = 74,
  R74 = 75,
  R75 = 76,
  R76 = 77,
  R77 = 78,
  R78 = 79,
  R79 = 80,
  R80 = 81,
  R81 = 82,
  R82 = 83,
  R83 = 84,
  R84 = 85,
  R85 = 86,
  R86 = 87,
  R87 = 88,
  R88 = 89,
  R89 = 90,
  R90 = 91,
  R91 = 92,
  R92 = 93,
  R93 = 94,
  R94 = 95,
  R95 = 96,
  R96 = 97,
  R97 = 98,
  R98 = 99,
  R99 = 100,
  R100 = 101,
  R101 = 102,
  R102 = 103,
  R103 = 104,
  R104 = 105,
  R105 = 106,
  R106 = 107,
  R107 = 108,
  R108 = 109,
  R109 = 110,
  R110 = 111,
  R111 = 112,
  R112 = 113,
  R113 = 114,
  R114 = 115,
  R115 = 116,
  R116 = 117,
  R117 = 118,
  R118 = 119,
  R119 = 120,
  R120 = 121,
  R121 = 122,
  R122 = 123,
  R123 = 124,
  R124 = 125,
  R125 = 126,
  R126 = 127,
  R127 = 128,
  NUM_TARGET_REGS 	// 129
};
}

// Register classes
namespace SPU {
enum {
  R8CRegClassID = 0,
  R16CRegClassID = 1,
  R32CRegClassID = 2,
  R32FPRegClassID = 3,
  R64CRegClassID = 4,
  R64FPRegClassID = 5,
  GPRCRegClassID = 6,
  VECREGRegClassID = 7
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

extern const uint16_t SPURegLists[] = {
  /* 0 */ SPU::R0, 0,
  /* 2 */ SPU::R1, 0,
  /* 4 */ SPU::R2, 0,
  /* 6 */ SPU::R3, 0,
  /* 8 */ SPU::R4, 0,
  /* 10 */ SPU::R5, 0,
  /* 12 */ SPU::R6, 0,
  /* 14 */ SPU::R7, 0,
  /* 16 */ SPU::R8, 0,
  /* 18 */ SPU::R9, 0,
  /* 20 */ SPU::R10, 0,
  /* 22 */ SPU::R11, 0,
  /* 24 */ SPU::R12, 0,
  /* 26 */ SPU::R13, 0,
  /* 28 */ SPU::R14, 0,
  /* 30 */ SPU::R15, 0,
  /* 32 */ SPU::R16, 0,
  /* 34 */ SPU::R17, 0,
  /* 36 */ SPU::R18, 0,
  /* 38 */ SPU::R19, 0,
  /* 40 */ SPU::R20, 0,
  /* 42 */ SPU::R21, 0,
  /* 44 */ SPU::R22, 0,
  /* 46 */ SPU::R23, 0,
  /* 48 */ SPU::R24, 0,
  /* 50 */ SPU::R25, 0,
  /* 52 */ SPU::R26, 0,
  /* 54 */ SPU::R27, 0,
  /* 56 */ SPU::R28, 0,
  /* 58 */ SPU::R29, 0,
  /* 60 */ SPU::R30, 0,
  /* 62 */ SPU::R31, 0,
  /* 64 */ SPU::R32, 0,
  /* 66 */ SPU::R33, 0,
  /* 68 */ SPU::R34, 0,
  /* 70 */ SPU::R35, 0,
  /* 72 */ SPU::R36, 0,
  /* 74 */ SPU::R37, 0,
  /* 76 */ SPU::R38, 0,
  /* 78 */ SPU::R39, 0,
  /* 80 */ SPU::R40, 0,
  /* 82 */ SPU::R41, 0,
  /* 84 */ SPU::R42, 0,
  /* 86 */ SPU::R43, 0,
  /* 88 */ SPU::R44, 0,
  /* 90 */ SPU::R45, 0,
  /* 92 */ SPU::R46, 0,
  /* 94 */ SPU::R47, 0,
  /* 96 */ SPU::R48, 0,
  /* 98 */ SPU::R49, 0,
  /* 100 */ SPU::R50, 0,
  /* 102 */ SPU::R51, 0,
  /* 104 */ SPU::R52, 0,
  /* 106 */ SPU::R53, 0,
  /* 108 */ SPU::R54, 0,
  /* 110 */ SPU::R55, 0,
  /* 112 */ SPU::R56, 0,
  /* 114 */ SPU::R57, 0,
  /* 116 */ SPU::R58, 0,
  /* 118 */ SPU::R59, 0,
  /* 120 */ SPU::R60, 0,
  /* 122 */ SPU::R61, 0,
  /* 124 */ SPU::R62, 0,
  /* 126 */ SPU::R63, 0,
  /* 128 */ SPU::R64, 0,
  /* 130 */ SPU::R65, 0,
  /* 132 */ SPU::R66, 0,
  /* 134 */ SPU::R67, 0,
  /* 136 */ SPU::R68, 0,
  /* 138 */ SPU::R69, 0,
  /* 140 */ SPU::R70, 0,
  /* 142 */ SPU::R71, 0,
  /* 144 */ SPU::R72, 0,
  /* 146 */ SPU::R73, 0,
  /* 148 */ SPU::R74, 0,
  /* 150 */ SPU::R75, 0,
  /* 152 */ SPU::R76, 0,
  /* 154 */ SPU::R77, 0,
  /* 156 */ SPU::R78, 0,
  /* 158 */ SPU::R79, 0,
  /* 160 */ SPU::R80, 0,
  /* 162 */ SPU::R81, 0,
  /* 164 */ SPU::R82, 0,
  /* 166 */ SPU::R83, 0,
  /* 168 */ SPU::R84, 0,
  /* 170 */ SPU::R85, 0,
  /* 172 */ SPU::R86, 0,
  /* 174 */ SPU::R87, 0,
  /* 176 */ SPU::R88, 0,
  /* 178 */ SPU::R89, 0,
  /* 180 */ SPU::R90, 0,
  /* 182 */ SPU::R91, 0,
  /* 184 */ SPU::R92, 0,
  /* 186 */ SPU::R93, 0,
  /* 188 */ SPU::R94, 0,
  /* 190 */ SPU::R95, 0,
  /* 192 */ SPU::R96, 0,
  /* 194 */ SPU::R97, 0,
  /* 196 */ SPU::R98, 0,
  /* 198 */ SPU::R99, 0,
  /* 200 */ SPU::R100, 0,
  /* 202 */ SPU::R101, 0,
  /* 204 */ SPU::R102, 0,
  /* 206 */ SPU::R103, 0,
  /* 208 */ SPU::R104, 0,
  /* 210 */ SPU::R105, 0,
  /* 212 */ SPU::R106, 0,
  /* 214 */ SPU::R107, 0,
  /* 216 */ SPU::R108, 0,
  /* 218 */ SPU::R109, 0,
  /* 220 */ SPU::R110, 0,
  /* 222 */ SPU::R111, 0,
  /* 224 */ SPU::R112, 0,
  /* 226 */ SPU::R113, 0,
  /* 228 */ SPU::R114, 0,
  /* 230 */ SPU::R115, 0,
  /* 232 */ SPU::R116, 0,
  /* 234 */ SPU::R117, 0,
  /* 236 */ SPU::R118, 0,
  /* 238 */ SPU::R119, 0,
  /* 240 */ SPU::R120, 0,
  /* 242 */ SPU::R121, 0,
  /* 244 */ SPU::R122, 0,
  /* 246 */ SPU::R123, 0,
  /* 248 */ SPU::R124, 0,
  /* 250 */ SPU::R125, 0,
  /* 252 */ SPU::R126, 0,
  /* 254 */ SPU::R127, 0,
};

extern const MCRegisterDesc SPURegDesc[] = { // Descriptors
  { "NOREG", 0, 0, 0 },
  { "R0", 0, 1, 1 },
  { "R1", 2, 1, 1 },
  { "R2", 4, 1, 1 },
  { "R3", 6, 1, 1 },
  { "R4", 8, 1, 1 },
  { "R5", 10, 1, 1 },
  { "R6", 12, 1, 1 },
  { "R7", 14, 1, 1 },
  { "R8", 16, 1, 1 },
  { "R9", 18, 1, 1 },
  { "R10", 20, 1, 1 },
  { "R11", 22, 1, 1 },
  { "R12", 24, 1, 1 },
  { "R13", 26, 1, 1 },
  { "R14", 28, 1, 1 },
  { "R15", 30, 1, 1 },
  { "R16", 32, 1, 1 },
  { "R17", 34, 1, 1 },
  { "R18", 36, 1, 1 },
  { "R19", 38, 1, 1 },
  { "R20", 40, 1, 1 },
  { "R21", 42, 1, 1 },
  { "R22", 44, 1, 1 },
  { "R23", 46, 1, 1 },
  { "R24", 48, 1, 1 },
  { "R25", 50, 1, 1 },
  { "R26", 52, 1, 1 },
  { "R27", 54, 1, 1 },
  { "R28", 56, 1, 1 },
  { "R29", 58, 1, 1 },
  { "R30", 60, 1, 1 },
  { "R31", 62, 1, 1 },
  { "R32", 64, 1, 1 },
  { "R33", 66, 1, 1 },
  { "R34", 68, 1, 1 },
  { "R35", 70, 1, 1 },
  { "R36", 72, 1, 1 },
  { "R37", 74, 1, 1 },
  { "R38", 76, 1, 1 },
  { "R39", 78, 1, 1 },
  { "R40", 80, 1, 1 },
  { "R41", 82, 1, 1 },
  { "R42", 84, 1, 1 },
  { "R43", 86, 1, 1 },
  { "R44", 88, 1, 1 },
  { "R45", 90, 1, 1 },
  { "R46", 92, 1, 1 },
  { "R47", 94, 1, 1 },
  { "R48", 96, 1, 1 },
  { "R49", 98, 1, 1 },
  { "R50", 100, 1, 1 },
  { "R51", 102, 1, 1 },
  { "R52", 104, 1, 1 },
  { "R53", 106, 1, 1 },
  { "R54", 108, 1, 1 },
  { "R55", 110, 1, 1 },
  { "R56", 112, 1, 1 },
  { "R57", 114, 1, 1 },
  { "R58", 116, 1, 1 },
  { "R59", 118, 1, 1 },
  { "R60", 120, 1, 1 },
  { "R61", 122, 1, 1 },
  { "R62", 124, 1, 1 },
  { "R63", 126, 1, 1 },
  { "R64", 128, 1, 1 },
  { "R65", 130, 1, 1 },
  { "R66", 132, 1, 1 },
  { "R67", 134, 1, 1 },
  { "R68", 136, 1, 1 },
  { "R69", 138, 1, 1 },
  { "R70", 140, 1, 1 },
  { "R71", 142, 1, 1 },
  { "R72", 144, 1, 1 },
  { "R73", 146, 1, 1 },
  { "R74", 148, 1, 1 },
  { "R75", 150, 1, 1 },
  { "R76", 152, 1, 1 },
  { "R77", 154, 1, 1 },
  { "R78", 156, 1, 1 },
  { "R79", 158, 1, 1 },
  { "R80", 160, 1, 1 },
  { "R81", 162, 1, 1 },
  { "R82", 164, 1, 1 },
  { "R83", 166, 1, 1 },
  { "R84", 168, 1, 1 },
  { "R85", 170, 1, 1 },
  { "R86", 172, 1, 1 },
  { "R87", 174, 1, 1 },
  { "R88", 176, 1, 1 },
  { "R89", 178, 1, 1 },
  { "R90", 180, 1, 1 },
  { "R91", 182, 1, 1 },
  { "R92", 184, 1, 1 },
  { "R93", 186, 1, 1 },
  { "R94", 188, 1, 1 },
  { "R95", 190, 1, 1 },
  { "R96", 192, 1, 1 },
  { "R97", 194, 1, 1 },
  { "R98", 196, 1, 1 },
  { "R99", 198, 1, 1 },
  { "R100", 200, 1, 1 },
  { "R101", 202, 1, 1 },
  { "R102", 204, 1, 1 },
  { "R103", 206, 1, 1 },
  { "R104", 208, 1, 1 },
  { "R105", 210, 1, 1 },
  { "R106", 212, 1, 1 },
  { "R107", 214, 1, 1 },
  { "R108", 216, 1, 1 },
  { "R109", 218, 1, 1 },
  { "R110", 220, 1, 1 },
  { "R111", 222, 1, 1 },
  { "R112", 224, 1, 1 },
  { "R113", 226, 1, 1 },
  { "R114", 228, 1, 1 },
  { "R115", 230, 1, 1 },
  { "R116", 232, 1, 1 },
  { "R117", 234, 1, 1 },
  { "R118", 236, 1, 1 },
  { "R119", 238, 1, 1 },
  { "R120", 240, 1, 1 },
  { "R121", 242, 1, 1 },
  { "R122", 244, 1, 1 },
  { "R123", 246, 1, 1 },
  { "R124", 248, 1, 1 },
  { "R125", 250, 1, 1 },
  { "R126", 252, 1, 1 },
  { "R127", 254, 1, 1 },
};

namespace {     // Register classes...
  // R8C Register Class...
  const uint16_t R8C[] = {
    SPU::R0, SPU::R1, SPU::R2, SPU::R3, SPU::R4, SPU::R5, SPU::R6, SPU::R7, SPU::R8, SPU::R9, SPU::R10, SPU::R11, SPU::R12, SPU::R13, SPU::R14, SPU::R15, SPU::R16, SPU::R17, SPU::R18, SPU::R19, SPU::R20, SPU::R21, SPU::R22, SPU::R23, SPU::R24, SPU::R25, SPU::R26, SPU::R27, SPU::R28, SPU::R29, SPU::R30, SPU::R31, SPU::R32, SPU::R33, SPU::R34, SPU::R35, SPU::R36, SPU::R37, SPU::R38, SPU::R39, SPU::R40, SPU::R41, SPU::R42, SPU::R43, SPU::R44, SPU::R45, SPU::R46, SPU::R47, SPU::R48, SPU::R49, SPU::R50, SPU::R51, SPU::R52, SPU::R53, SPU::R54, SPU::R55, SPU::R56, SPU::R57, SPU::R58, SPU::R59, SPU::R60, SPU::R61, SPU::R62, SPU::R63, SPU::R64, SPU::R65, SPU::R66, SPU::R67, SPU::R68, SPU::R69, SPU::R70, SPU::R71, SPU::R72, SPU::R73, SPU::R74, SPU::R75, SPU::R76, SPU::R77, SPU::R78, SPU::R79, SPU::R127, SPU::R126, SPU::R125, SPU::R124, SPU::R123, SPU::R122, SPU::R121, SPU::R120, SPU::R119, SPU::R118, SPU::R117, SPU::R116, SPU::R115, SPU::R114, SPU::R113, SPU::R112, SPU::R111, SPU::R110, SPU::R109, SPU::R108, SPU::R107, SPU::R106, SPU::R105, SPU::R104, SPU::R103, SPU::R102, SPU::R101, SPU::R100, SPU::R99, SPU::R98, SPU::R97, SPU::R96, SPU::R95, SPU::R94, SPU::R93, SPU::R92, SPU::R91, SPU::R90, SPU::R89, SPU::R88, SPU::R87, SPU::R86, SPU::R85, SPU::R84, SPU::R83, SPU::R82, SPU::R81, SPU::R80, 
  };

  // R8C Bit set.
  const uint8_t R8CBits[] = {
    0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 
  };

  // R16C Register Class...
  const uint16_t R16C[] = {
    SPU::R0, SPU::R1, SPU::R2, SPU::R3, SPU::R4, SPU::R5, SPU::R6, SPU::R7, SPU::R8, SPU::R9, SPU::R10, SPU::R11, SPU::R12, SPU::R13, SPU::R14, SPU::R15, SPU::R16, SPU::R17, SPU::R18, SPU::R19, SPU::R20, SPU::R21, SPU::R22, SPU::R23, SPU::R24, SPU::R25, SPU::R26, SPU::R27, SPU::R28, SPU::R29, SPU::R30, SPU::R31, SPU::R32, SPU::R33, SPU::R34, SPU::R35, SPU::R36, SPU::R37, SPU::R38, SPU::R39, SPU::R40, SPU::R41, SPU::R42, SPU::R43, SPU::R44, SPU::R45, SPU::R46, SPU::R47, SPU::R48, SPU::R49, SPU::R50, SPU::R51, SPU::R52, SPU::R53, SPU::R54, SPU::R55, SPU::R56, SPU::R57, SPU::R58, SPU::R59, SPU::R60, SPU::R61, SPU::R62, SPU::R63, SPU::R64, SPU::R65, SPU::R66, SPU::R67, SPU::R68, SPU::R69, SPU::R70, SPU::R71, SPU::R72, SPU::R73, SPU::R74, SPU::R75, SPU::R76, SPU::R77, SPU::R78, SPU::R79, SPU::R127, SPU::R126, SPU::R125, SPU::R124, SPU::R123, SPU::R122, SPU::R121, SPU::R120, SPU::R119, SPU::R118, SPU::R117, SPU::R116, SPU::R115, SPU::R114, SPU::R113, SPU::R112, SPU::R111, SPU::R110, SPU::R109, SPU::R108, SPU::R107, SPU::R106, SPU::R105, SPU::R104, SPU::R103, SPU::R102, SPU::R101, SPU::R100, SPU::R99, SPU::R98, SPU::R97, SPU::R96, SPU::R95, SPU::R94, SPU::R93, SPU::R92, SPU::R91, SPU::R90, SPU::R89, SPU::R88, SPU::R87, SPU::R86, SPU::R85, SPU::R84, SPU::R83, SPU::R82, SPU::R81, SPU::R80, 
  };

  // R16C Bit set.
  const uint8_t R16CBits[] = {
    0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 
  };

  // R32C Register Class...
  const uint16_t R32C[] = {
    SPU::R0, SPU::R1, SPU::R2, SPU::R3, SPU::R4, SPU::R5, SPU::R6, SPU::R7, SPU::R8, SPU::R9, SPU::R10, SPU::R11, SPU::R12, SPU::R13, SPU::R14, SPU::R15, SPU::R16, SPU::R17, SPU::R18, SPU::R19, SPU::R20, SPU::R21, SPU::R22, SPU::R23, SPU::R24, SPU::R25, SPU::R26, SPU::R27, SPU::R28, SPU::R29, SPU::R30, SPU::R31, SPU::R32, SPU::R33, SPU::R34, SPU::R35, SPU::R36, SPU::R37, SPU::R38, SPU::R39, SPU::R40, SPU::R41, SPU::R42, SPU::R43, SPU::R44, SPU::R45, SPU::R46, SPU::R47, SPU::R48, SPU::R49, SPU::R50, SPU::R51, SPU::R52, SPU::R53, SPU::R54, SPU::R55, SPU::R56, SPU::R57, SPU::R58, SPU::R59, SPU::R60, SPU::R61, SPU::R62, SPU::R63, SPU::R64, SPU::R65, SPU::R66, SPU::R67, SPU::R68, SPU::R69, SPU::R70, SPU::R71, SPU::R72, SPU::R73, SPU::R74, SPU::R75, SPU::R76, SPU::R77, SPU::R78, SPU::R79, SPU::R127, SPU::R126, SPU::R125, SPU::R124, SPU::R123, SPU::R122, SPU::R121, SPU::R120, SPU::R119, SPU::R118, SPU::R117, SPU::R116, SPU::R115, SPU::R114, SPU::R113, SPU::R112, SPU::R111, SPU::R110, SPU::R109, SPU::R108, SPU::R107, SPU::R106, SPU::R105, SPU::R104, SPU::R103, SPU::R102, SPU::R101, SPU::R100, SPU::R99, SPU::R98, SPU::R97, SPU::R96, SPU::R95, SPU::R94, SPU::R93, SPU::R92, SPU::R91, SPU::R90, SPU::R89, SPU::R88, SPU::R87, SPU::R86, SPU::R85, SPU::R84, SPU::R83, SPU::R82, SPU::R81, SPU::R80, 
  };

  // R32C Bit set.
  const uint8_t R32CBits[] = {
    0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 
  };

  // R32FP Register Class...
  const uint16_t R32FP[] = {
    SPU::R0, SPU::R1, SPU::R2, SPU::R3, SPU::R4, SPU::R5, SPU::R6, SPU::R7, SPU::R8, SPU::R9, SPU::R10, SPU::R11, SPU::R12, SPU::R13, SPU::R14, SPU::R15, SPU::R16, SPU::R17, SPU::R18, SPU::R19, SPU::R20, SPU::R21, SPU::R22, SPU::R23, SPU::R24, SPU::R25, SPU::R26, SPU::R27, SPU::R28, SPU::R29, SPU::R30, SPU::R31, SPU::R32, SPU::R33, SPU::R34, SPU::R35, SPU::R36, SPU::R37, SPU::R38, SPU::R39, SPU::R40, SPU::R41, SPU::R42, SPU::R43, SPU::R44, SPU::R45, SPU::R46, SPU::R47, SPU::R48, SPU::R49, SPU::R50, SPU::R51, SPU::R52, SPU::R53, SPU::R54, SPU::R55, SPU::R56, SPU::R57, SPU::R58, SPU::R59, SPU::R60, SPU::R61, SPU::R62, SPU::R63, SPU::R64, SPU::R65, SPU::R66, SPU::R67, SPU::R68, SPU::R69, SPU::R70, SPU::R71, SPU::R72, SPU::R73, SPU::R74, SPU::R75, SPU::R76, SPU::R77, SPU::R78, SPU::R79, SPU::R127, SPU::R126, SPU::R125, SPU::R124, SPU::R123, SPU::R122, SPU::R121, SPU::R120, SPU::R119, SPU::R118, SPU::R117, SPU::R116, SPU::R115, SPU::R114, SPU::R113, SPU::R112, SPU::R111, SPU::R110, SPU::R109, SPU::R108, SPU::R107, SPU::R106, SPU::R105, SPU::R104, SPU::R103, SPU::R102, SPU::R101, SPU::R100, SPU::R99, SPU::R98, SPU::R97, SPU::R96, SPU::R95, SPU::R94, SPU::R93, SPU::R92, SPU::R91, SPU::R90, SPU::R89, SPU::R88, SPU::R87, SPU::R86, SPU::R85, SPU::R84, SPU::R83, SPU::R82, SPU::R81, SPU::R80, 
  };

  // R32FP Bit set.
  const uint8_t R32FPBits[] = {
    0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 
  };

  // R64C Register Class...
  const uint16_t R64C[] = {
    SPU::R0, SPU::R1, SPU::R2, SPU::R3, SPU::R4, SPU::R5, SPU::R6, SPU::R7, SPU::R8, SPU::R9, SPU::R10, SPU::R11, SPU::R12, SPU::R13, SPU::R14, SPU::R15, SPU::R16, SPU::R17, SPU::R18, SPU::R19, SPU::R20, SPU::R21, SPU::R22, SPU::R23, SPU::R24, SPU::R25, SPU::R26, SPU::R27, SPU::R28, SPU::R29, SPU::R30, SPU::R31, SPU::R32, SPU::R33, SPU::R34, SPU::R35, SPU::R36, SPU::R37, SPU::R38, SPU::R39, SPU::R40, SPU::R41, SPU::R42, SPU::R43, SPU::R44, SPU::R45, SPU::R46, SPU::R47, SPU::R48, SPU::R49, SPU::R50, SPU::R51, SPU::R52, SPU::R53, SPU::R54, SPU::R55, SPU::R56, SPU::R57, SPU::R58, SPU::R59, SPU::R60, SPU::R61, SPU::R62, SPU::R63, SPU::R64, SPU::R65, SPU::R66, SPU::R67, SPU::R68, SPU::R69, SPU::R70, SPU::R71, SPU::R72, SPU::R73, SPU::R74, SPU::R75, SPU::R76, SPU::R77, SPU::R78, SPU::R79, SPU::R127, SPU::R126, SPU::R125, SPU::R124, SPU::R123, SPU::R122, SPU::R121, SPU::R120, SPU::R119, SPU::R118, SPU::R117, SPU::R116, SPU::R115, SPU::R114, SPU::R113, SPU::R112, SPU::R111, SPU::R110, SPU::R109, SPU::R108, SPU::R107, SPU::R106, SPU::R105, SPU::R104, SPU::R103, SPU::R102, SPU::R101, SPU::R100, SPU::R99, SPU::R98, SPU::R97, SPU::R96, SPU::R95, SPU::R94, SPU::R93, SPU::R92, SPU::R91, SPU::R90, SPU::R89, SPU::R88, SPU::R87, SPU::R86, SPU::R85, SPU::R84, SPU::R83, SPU::R82, SPU::R81, SPU::R80, 
  };

  // R64C Bit set.
  const uint8_t R64CBits[] = {
    0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 
  };

  // R64FP Register Class...
  const uint16_t R64FP[] = {
    SPU::R0, SPU::R1, SPU::R2, SPU::R3, SPU::R4, SPU::R5, SPU::R6, SPU::R7, SPU::R8, SPU::R9, SPU::R10, SPU::R11, SPU::R12, SPU::R13, SPU::R14, SPU::R15, SPU::R16, SPU::R17, SPU::R18, SPU::R19, SPU::R20, SPU::R21, SPU::R22, SPU::R23, SPU::R24, SPU::R25, SPU::R26, SPU::R27, SPU::R28, SPU::R29, SPU::R30, SPU::R31, SPU::R32, SPU::R33, SPU::R34, SPU::R35, SPU::R36, SPU::R37, SPU::R38, SPU::R39, SPU::R40, SPU::R41, SPU::R42, SPU::R43, SPU::R44, SPU::R45, SPU::R46, SPU::R47, SPU::R48, SPU::R49, SPU::R50, SPU::R51, SPU::R52, SPU::R53, SPU::R54, SPU::R55, SPU::R56, SPU::R57, SPU::R58, SPU::R59, SPU::R60, SPU::R61, SPU::R62, SPU::R63, SPU::R64, SPU::R65, SPU::R66, SPU::R67, SPU::R68, SPU::R69, SPU::R70, SPU::R71, SPU::R72, SPU::R73, SPU::R74, SPU::R75, SPU::R76, SPU::R77, SPU::R78, SPU::R79, SPU::R127, SPU::R126, SPU::R125, SPU::R124, SPU::R123, SPU::R122, SPU::R121, SPU::R120, SPU::R119, SPU::R118, SPU::R117, SPU::R116, SPU::R115, SPU::R114, SPU::R113, SPU::R112, SPU::R111, SPU::R110, SPU::R109, SPU::R108, SPU::R107, SPU::R106, SPU::R105, SPU::R104, SPU::R103, SPU::R102, SPU::R101, SPU::R100, SPU::R99, SPU::R98, SPU::R97, SPU::R96, SPU::R95, SPU::R94, SPU::R93, SPU::R92, SPU::R91, SPU::R90, SPU::R89, SPU::R88, SPU::R87, SPU::R86, SPU::R85, SPU::R84, SPU::R83, SPU::R82, SPU::R81, SPU::R80, 
  };

  // R64FP Bit set.
  const uint8_t R64FPBits[] = {
    0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 
  };

  // GPRC Register Class...
  const uint16_t GPRC[] = {
    SPU::R0, SPU::R1, SPU::R2, SPU::R3, SPU::R4, SPU::R5, SPU::R6, SPU::R7, SPU::R8, SPU::R9, SPU::R10, SPU::R11, SPU::R12, SPU::R13, SPU::R14, SPU::R15, SPU::R16, SPU::R17, SPU::R18, SPU::R19, SPU::R20, SPU::R21, SPU::R22, SPU::R23, SPU::R24, SPU::R25, SPU::R26, SPU::R27, SPU::R28, SPU::R29, SPU::R30, SPU::R31, SPU::R32, SPU::R33, SPU::R34, SPU::R35, SPU::R36, SPU::R37, SPU::R38, SPU::R39, SPU::R40, SPU::R41, SPU::R42, SPU::R43, SPU::R44, SPU::R45, SPU::R46, SPU::R47, SPU::R48, SPU::R49, SPU::R50, SPU::R51, SPU::R52, SPU::R53, SPU::R54, SPU::R55, SPU::R56, SPU::R57, SPU::R58, SPU::R59, SPU::R60, SPU::R61, SPU::R62, SPU::R63, SPU::R64, SPU::R65, SPU::R66, SPU::R67, SPU::R68, SPU::R69, SPU::R70, SPU::R71, SPU::R72, SPU::R73, SPU::R74, SPU::R75, SPU::R76, SPU::R77, SPU::R78, SPU::R79, SPU::R127, SPU::R126, SPU::R125, SPU::R124, SPU::R123, SPU::R122, SPU::R121, SPU::R120, SPU::R119, SPU::R118, SPU::R117, SPU::R116, SPU::R115, SPU::R114, SPU::R113, SPU::R112, SPU::R111, SPU::R110, SPU::R109, SPU::R108, SPU::R107, SPU::R106, SPU::R105, SPU::R104, SPU::R103, SPU::R102, SPU::R101, SPU::R100, SPU::R99, SPU::R98, SPU::R97, SPU::R96, SPU::R95, SPU::R94, SPU::R93, SPU::R92, SPU::R91, SPU::R90, SPU::R89, SPU::R88, SPU::R87, SPU::R86, SPU::R85, SPU::R84, SPU::R83, SPU::R82, SPU::R81, SPU::R80, 
  };

  // GPRC Bit set.
  const uint8_t GPRCBits[] = {
    0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 
  };

  // VECREG Register Class...
  const uint16_t VECREG[] = {
    SPU::R0, SPU::R1, SPU::R2, SPU::R3, SPU::R4, SPU::R5, SPU::R6, SPU::R7, SPU::R8, SPU::R9, SPU::R10, SPU::R11, SPU::R12, SPU::R13, SPU::R14, SPU::R15, SPU::R16, SPU::R17, SPU::R18, SPU::R19, SPU::R20, SPU::R21, SPU::R22, SPU::R23, SPU::R24, SPU::R25, SPU::R26, SPU::R27, SPU::R28, SPU::R29, SPU::R30, SPU::R31, SPU::R32, SPU::R33, SPU::R34, SPU::R35, SPU::R36, SPU::R37, SPU::R38, SPU::R39, SPU::R40, SPU::R41, SPU::R42, SPU::R43, SPU::R44, SPU::R45, SPU::R46, SPU::R47, SPU::R48, SPU::R49, SPU::R50, SPU::R51, SPU::R52, SPU::R53, SPU::R54, SPU::R55, SPU::R56, SPU::R57, SPU::R58, SPU::R59, SPU::R60, SPU::R61, SPU::R62, SPU::R63, SPU::R64, SPU::R65, SPU::R66, SPU::R67, SPU::R68, SPU::R69, SPU::R70, SPU::R71, SPU::R72, SPU::R73, SPU::R74, SPU::R75, SPU::R76, SPU::R77, SPU::R78, SPU::R79, SPU::R127, SPU::R126, SPU::R125, SPU::R124, SPU::R123, SPU::R122, SPU::R121, SPU::R120, SPU::R119, SPU::R118, SPU::R117, SPU::R116, SPU::R115, SPU::R114, SPU::R113, SPU::R112, SPU::R111, SPU::R110, SPU::R109, SPU::R108, SPU::R107, SPU::R106, SPU::R105, SPU::R104, SPU::R103, SPU::R102, SPU::R101, SPU::R100, SPU::R99, SPU::R98, SPU::R97, SPU::R96, SPU::R95, SPU::R94, SPU::R93, SPU::R92, SPU::R91, SPU::R90, SPU::R89, SPU::R88, SPU::R87, SPU::R86, SPU::R85, SPU::R84, SPU::R83, SPU::R82, SPU::R81, SPU::R80, 
  };

  // VECREG Bit set.
  const uint8_t VECREGBits[] = {
    0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 
  };

}

extern const MCRegisterClass SPUMCRegisterClasses[] = {
  { "R8C", R8C, R8CBits, 128, sizeof(R8CBits), SPU::R8CRegClassID, 1, 16, 1, 1 },
  { "R16C", R16C, R16CBits, 128, sizeof(R16CBits), SPU::R16CRegClassID, 2, 16, 1, 1 },
  { "R32C", R32C, R32CBits, 128, sizeof(R32CBits), SPU::R32CRegClassID, 4, 16, 1, 1 },
  { "R32FP", R32FP, R32FPBits, 128, sizeof(R32FPBits), SPU::R32FPRegClassID, 4, 16, 1, 1 },
  { "R64C", R64C, R64CBits, 128, sizeof(R64CBits), SPU::R64CRegClassID, 8, 16, 1, 1 },
  { "R64FP", R64FP, R64FPBits, 128, sizeof(R64FPBits), SPU::R64FPRegClassID, 8, 16, 1, 1 },
  { "GPRC", GPRC, GPRCBits, 128, sizeof(GPRCBits), SPU::GPRCRegClassID, 16, 16, 1, 1 },
  { "VECREG", VECREG, VECREGBits, 128, sizeof(VECREGBits), SPU::VECREGRegClassID, 16, 16, 1, 1 },
};

// SPU Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair SPUDwarfFlavour0Dwarf2L[] = {
  { 0U, SPU::R0 },
  { 1U, SPU::R1 },
  { 2U, SPU::R2 },
  { 3U, SPU::R3 },
  { 4U, SPU::R4 },
  { 5U, SPU::R5 },
  { 6U, SPU::R6 },
  { 7U, SPU::R7 },
  { 8U, SPU::R8 },
  { 9U, SPU::R9 },
  { 10U, SPU::R10 },
  { 11U, SPU::R11 },
  { 12U, SPU::R12 },
  { 13U, SPU::R13 },
  { 14U, SPU::R14 },
  { 15U, SPU::R15 },
  { 16U, SPU::R16 },
  { 17U, SPU::R17 },
  { 18U, SPU::R18 },
  { 19U, SPU::R19 },
  { 20U, SPU::R20 },
  { 21U, SPU::R21 },
  { 22U, SPU::R22 },
  { 23U, SPU::R23 },
  { 24U, SPU::R24 },
  { 25U, SPU::R25 },
  { 26U, SPU::R26 },
  { 27U, SPU::R27 },
  { 28U, SPU::R28 },
  { 29U, SPU::R29 },
  { 30U, SPU::R30 },
  { 31U, SPU::R31 },
  { 32U, SPU::R32 },
  { 33U, SPU::R33 },
  { 34U, SPU::R34 },
  { 35U, SPU::R35 },
  { 36U, SPU::R36 },
  { 37U, SPU::R37 },
  { 38U, SPU::R38 },
  { 39U, SPU::R39 },
  { 40U, SPU::R40 },
  { 41U, SPU::R41 },
  { 42U, SPU::R42 },
  { 43U, SPU::R43 },
  { 44U, SPU::R44 },
  { 45U, SPU::R45 },
  { 46U, SPU::R46 },
  { 47U, SPU::R47 },
  { 48U, SPU::R48 },
  { 49U, SPU::R49 },
  { 50U, SPU::R50 },
  { 51U, SPU::R51 },
  { 52U, SPU::R52 },
  { 53U, SPU::R53 },
  { 54U, SPU::R54 },
  { 55U, SPU::R55 },
  { 56U, SPU::R56 },
  { 57U, SPU::R57 },
  { 58U, SPU::R58 },
  { 59U, SPU::R59 },
  { 60U, SPU::R60 },
  { 61U, SPU::R61 },
  { 62U, SPU::R62 },
  { 63U, SPU::R63 },
  { 64U, SPU::R64 },
  { 65U, SPU::R65 },
  { 66U, SPU::R66 },
  { 67U, SPU::R67 },
  { 68U, SPU::R68 },
  { 69U, SPU::R69 },
  { 70U, SPU::R70 },
  { 71U, SPU::R71 },
  { 72U, SPU::R72 },
  { 73U, SPU::R73 },
  { 74U, SPU::R74 },
  { 75U, SPU::R75 },
  { 76U, SPU::R76 },
  { 77U, SPU::R77 },
  { 78U, SPU::R78 },
  { 79U, SPU::R79 },
  { 80U, SPU::R80 },
  { 81U, SPU::R81 },
  { 82U, SPU::R82 },
  { 83U, SPU::R83 },
  { 84U, SPU::R84 },
  { 85U, SPU::R85 },
  { 86U, SPU::R86 },
  { 87U, SPU::R87 },
  { 88U, SPU::R88 },
  { 89U, SPU::R89 },
  { 90U, SPU::R90 },
  { 91U, SPU::R91 },
  { 92U, SPU::R92 },
  { 93U, SPU::R93 },
  { 94U, SPU::R94 },
  { 95U, SPU::R95 },
  { 96U, SPU::R96 },
  { 97U, SPU::R97 },
  { 98U, SPU::R98 },
  { 99U, SPU::R99 },
  { 100U, SPU::R100 },
  { 101U, SPU::R101 },
  { 102U, SPU::R102 },
  { 103U, SPU::R103 },
  { 104U, SPU::R104 },
  { 105U, SPU::R105 },
  { 106U, SPU::R106 },
  { 107U, SPU::R107 },
  { 108U, SPU::R108 },
  { 109U, SPU::R109 },
  { 110U, SPU::R110 },
  { 111U, SPU::R111 },
  { 112U, SPU::R112 },
  { 113U, SPU::R113 },
  { 114U, SPU::R114 },
  { 115U, SPU::R115 },
  { 116U, SPU::R116 },
  { 117U, SPU::R117 },
  { 118U, SPU::R118 },
  { 119U, SPU::R119 },
  { 120U, SPU::R120 },
  { 121U, SPU::R121 },
  { 122U, SPU::R122 },
  { 123U, SPU::R123 },
  { 124U, SPU::R124 },
  { 125U, SPU::R125 },
  { 126U, SPU::R126 },
  { 127U, SPU::R127 },
};
extern const unsigned SPUDwarfFlavour0Dwarf2LSize = sizeof(SPUDwarfFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair SPUEHFlavour0Dwarf2L[] = {
  { 0U, SPU::R0 },
  { 1U, SPU::R1 },
  { 2U, SPU::R2 },
  { 3U, SPU::R3 },
  { 4U, SPU::R4 },
  { 5U, SPU::R5 },
  { 6U, SPU::R6 },
  { 7U, SPU::R7 },
  { 8U, SPU::R8 },
  { 9U, SPU::R9 },
  { 10U, SPU::R10 },
  { 11U, SPU::R11 },
  { 12U, SPU::R12 },
  { 13U, SPU::R13 },
  { 14U, SPU::R14 },
  { 15U, SPU::R15 },
  { 16U, SPU::R16 },
  { 17U, SPU::R17 },
  { 18U, SPU::R18 },
  { 19U, SPU::R19 },
  { 20U, SPU::R20 },
  { 21U, SPU::R21 },
  { 22U, SPU::R22 },
  { 23U, SPU::R23 },
  { 24U, SPU::R24 },
  { 25U, SPU::R25 },
  { 26U, SPU::R26 },
  { 27U, SPU::R27 },
  { 28U, SPU::R28 },
  { 29U, SPU::R29 },
  { 30U, SPU::R30 },
  { 31U, SPU::R31 },
  { 32U, SPU::R32 },
  { 33U, SPU::R33 },
  { 34U, SPU::R34 },
  { 35U, SPU::R35 },
  { 36U, SPU::R36 },
  { 37U, SPU::R37 },
  { 38U, SPU::R38 },
  { 39U, SPU::R39 },
  { 40U, SPU::R40 },
  { 41U, SPU::R41 },
  { 42U, SPU::R42 },
  { 43U, SPU::R43 },
  { 44U, SPU::R44 },
  { 45U, SPU::R45 },
  { 46U, SPU::R46 },
  { 47U, SPU::R47 },
  { 48U, SPU::R48 },
  { 49U, SPU::R49 },
  { 50U, SPU::R50 },
  { 51U, SPU::R51 },
  { 52U, SPU::R52 },
  { 53U, SPU::R53 },
  { 54U, SPU::R54 },
  { 55U, SPU::R55 },
  { 56U, SPU::R56 },
  { 57U, SPU::R57 },
  { 58U, SPU::R58 },
  { 59U, SPU::R59 },
  { 60U, SPU::R60 },
  { 61U, SPU::R61 },
  { 62U, SPU::R62 },
  { 63U, SPU::R63 },
  { 64U, SPU::R64 },
  { 65U, SPU::R65 },
  { 66U, SPU::R66 },
  { 67U, SPU::R67 },
  { 68U, SPU::R68 },
  { 69U, SPU::R69 },
  { 70U, SPU::R70 },
  { 71U, SPU::R71 },
  { 72U, SPU::R72 },
  { 73U, SPU::R73 },
  { 74U, SPU::R74 },
  { 75U, SPU::R75 },
  { 76U, SPU::R76 },
  { 77U, SPU::R77 },
  { 78U, SPU::R78 },
  { 79U, SPU::R79 },
  { 80U, SPU::R80 },
  { 81U, SPU::R81 },
  { 82U, SPU::R82 },
  { 83U, SPU::R83 },
  { 84U, SPU::R84 },
  { 85U, SPU::R85 },
  { 86U, SPU::R86 },
  { 87U, SPU::R87 },
  { 88U, SPU::R88 },
  { 89U, SPU::R89 },
  { 90U, SPU::R90 },
  { 91U, SPU::R91 },
  { 92U, SPU::R92 },
  { 93U, SPU::R93 },
  { 94U, SPU::R94 },
  { 95U, SPU::R95 },
  { 96U, SPU::R96 },
  { 97U, SPU::R97 },
  { 98U, SPU::R98 },
  { 99U, SPU::R99 },
  { 100U, SPU::R100 },
  { 101U, SPU::R101 },
  { 102U, SPU::R102 },
  { 103U, SPU::R103 },
  { 104U, SPU::R104 },
  { 105U, SPU::R105 },
  { 106U, SPU::R106 },
  { 107U, SPU::R107 },
  { 108U, SPU::R108 },
  { 109U, SPU::R109 },
  { 110U, SPU::R110 },
  { 111U, SPU::R111 },
  { 112U, SPU::R112 },
  { 113U, SPU::R113 },
  { 114U, SPU::R114 },
  { 115U, SPU::R115 },
  { 116U, SPU::R116 },
  { 117U, SPU::R117 },
  { 118U, SPU::R118 },
  { 119U, SPU::R119 },
  { 120U, SPU::R120 },
  { 121U, SPU::R121 },
  { 122U, SPU::R122 },
  { 123U, SPU::R123 },
  { 124U, SPU::R124 },
  { 125U, SPU::R125 },
  { 126U, SPU::R126 },
  { 127U, SPU::R127 },
};
extern const unsigned SPUEHFlavour0Dwarf2LSize = sizeof(SPUEHFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair SPUDwarfFlavour0L2Dwarf[] = {
  { SPU::R0, 0U },
  { SPU::R1, 1U },
  { SPU::R2, 2U },
  { SPU::R3, 3U },
  { SPU::R4, 4U },
  { SPU::R5, 5U },
  { SPU::R6, 6U },
  { SPU::R7, 7U },
  { SPU::R8, 8U },
  { SPU::R9, 9U },
  { SPU::R10, 10U },
  { SPU::R11, 11U },
  { SPU::R12, 12U },
  { SPU::R13, 13U },
  { SPU::R14, 14U },
  { SPU::R15, 15U },
  { SPU::R16, 16U },
  { SPU::R17, 17U },
  { SPU::R18, 18U },
  { SPU::R19, 19U },
  { SPU::R20, 20U },
  { SPU::R21, 21U },
  { SPU::R22, 22U },
  { SPU::R23, 23U },
  { SPU::R24, 24U },
  { SPU::R25, 25U },
  { SPU::R26, 26U },
  { SPU::R27, 27U },
  { SPU::R28, 28U },
  { SPU::R29, 29U },
  { SPU::R30, 30U },
  { SPU::R31, 31U },
  { SPU::R32, 32U },
  { SPU::R33, 33U },
  { SPU::R34, 34U },
  { SPU::R35, 35U },
  { SPU::R36, 36U },
  { SPU::R37, 37U },
  { SPU::R38, 38U },
  { SPU::R39, 39U },
  { SPU::R40, 40U },
  { SPU::R41, 41U },
  { SPU::R42, 42U },
  { SPU::R43, 43U },
  { SPU::R44, 44U },
  { SPU::R45, 45U },
  { SPU::R46, 46U },
  { SPU::R47, 47U },
  { SPU::R48, 48U },
  { SPU::R49, 49U },
  { SPU::R50, 50U },
  { SPU::R51, 51U },
  { SPU::R52, 52U },
  { SPU::R53, 53U },
  { SPU::R54, 54U },
  { SPU::R55, 55U },
  { SPU::R56, 56U },
  { SPU::R57, 57U },
  { SPU::R58, 58U },
  { SPU::R59, 59U },
  { SPU::R60, 60U },
  { SPU::R61, 61U },
  { SPU::R62, 62U },
  { SPU::R63, 63U },
  { SPU::R64, 64U },
  { SPU::R65, 65U },
  { SPU::R66, 66U },
  { SPU::R67, 67U },
  { SPU::R68, 68U },
  { SPU::R69, 69U },
  { SPU::R70, 70U },
  { SPU::R71, 71U },
  { SPU::R72, 72U },
  { SPU::R73, 73U },
  { SPU::R74, 74U },
  { SPU::R75, 75U },
  { SPU::R76, 76U },
  { SPU::R77, 77U },
  { SPU::R78, 78U },
  { SPU::R79, 79U },
  { SPU::R80, 80U },
  { SPU::R81, 81U },
  { SPU::R82, 82U },
  { SPU::R83, 83U },
  { SPU::R84, 84U },
  { SPU::R85, 85U },
  { SPU::R86, 86U },
  { SPU::R87, 87U },
  { SPU::R88, 88U },
  { SPU::R89, 89U },
  { SPU::R90, 90U },
  { SPU::R91, 91U },
  { SPU::R92, 92U },
  { SPU::R93, 93U },
  { SPU::R94, 94U },
  { SPU::R95, 95U },
  { SPU::R96, 96U },
  { SPU::R97, 97U },
  { SPU::R98, 98U },
  { SPU::R99, 99U },
  { SPU::R100, 100U },
  { SPU::R101, 101U },
  { SPU::R102, 102U },
  { SPU::R103, 103U },
  { SPU::R104, 104U },
  { SPU::R105, 105U },
  { SPU::R106, 106U },
  { SPU::R107, 107U },
  { SPU::R108, 108U },
  { SPU::R109, 109U },
  { SPU::R110, 110U },
  { SPU::R111, 111U },
  { SPU::R112, 112U },
  { SPU::R113, 113U },
  { SPU::R114, 114U },
  { SPU::R115, 115U },
  { SPU::R116, 116U },
  { SPU::R117, 117U },
  { SPU::R118, 118U },
  { SPU::R119, 119U },
  { SPU::R120, 120U },
  { SPU::R121, 121U },
  { SPU::R122, 122U },
  { SPU::R123, 123U },
  { SPU::R124, 124U },
  { SPU::R125, 125U },
  { SPU::R126, 126U },
  { SPU::R127, 127U },
};
extern const unsigned SPUDwarfFlavour0L2DwarfSize = sizeof(SPUDwarfFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair SPUEHFlavour0L2Dwarf[] = {
  { SPU::R0, 0U },
  { SPU::R1, 1U },
  { SPU::R2, 2U },
  { SPU::R3, 3U },
  { SPU::R4, 4U },
  { SPU::R5, 5U },
  { SPU::R6, 6U },
  { SPU::R7, 7U },
  { SPU::R8, 8U },
  { SPU::R9, 9U },
  { SPU::R10, 10U },
  { SPU::R11, 11U },
  { SPU::R12, 12U },
  { SPU::R13, 13U },
  { SPU::R14, 14U },
  { SPU::R15, 15U },
  { SPU::R16, 16U },
  { SPU::R17, 17U },
  { SPU::R18, 18U },
  { SPU::R19, 19U },
  { SPU::R20, 20U },
  { SPU::R21, 21U },
  { SPU::R22, 22U },
  { SPU::R23, 23U },
  { SPU::R24, 24U },
  { SPU::R25, 25U },
  { SPU::R26, 26U },
  { SPU::R27, 27U },
  { SPU::R28, 28U },
  { SPU::R29, 29U },
  { SPU::R30, 30U },
  { SPU::R31, 31U },
  { SPU::R32, 32U },
  { SPU::R33, 33U },
  { SPU::R34, 34U },
  { SPU::R35, 35U },
  { SPU::R36, 36U },
  { SPU::R37, 37U },
  { SPU::R38, 38U },
  { SPU::R39, 39U },
  { SPU::R40, 40U },
  { SPU::R41, 41U },
  { SPU::R42, 42U },
  { SPU::R43, 43U },
  { SPU::R44, 44U },
  { SPU::R45, 45U },
  { SPU::R46, 46U },
  { SPU::R47, 47U },
  { SPU::R48, 48U },
  { SPU::R49, 49U },
  { SPU::R50, 50U },
  { SPU::R51, 51U },
  { SPU::R52, 52U },
  { SPU::R53, 53U },
  { SPU::R54, 54U },
  { SPU::R55, 55U },
  { SPU::R56, 56U },
  { SPU::R57, 57U },
  { SPU::R58, 58U },
  { SPU::R59, 59U },
  { SPU::R60, 60U },
  { SPU::R61, 61U },
  { SPU::R62, 62U },
  { SPU::R63, 63U },
  { SPU::R64, 64U },
  { SPU::R65, 65U },
  { SPU::R66, 66U },
  { SPU::R67, 67U },
  { SPU::R68, 68U },
  { SPU::R69, 69U },
  { SPU::R70, 70U },
  { SPU::R71, 71U },
  { SPU::R72, 72U },
  { SPU::R73, 73U },
  { SPU::R74, 74U },
  { SPU::R75, 75U },
  { SPU::R76, 76U },
  { SPU::R77, 77U },
  { SPU::R78, 78U },
  { SPU::R79, 79U },
  { SPU::R80, 80U },
  { SPU::R81, 81U },
  { SPU::R82, 82U },
  { SPU::R83, 83U },
  { SPU::R84, 84U },
  { SPU::R85, 85U },
  { SPU::R86, 86U },
  { SPU::R87, 87U },
  { SPU::R88, 88U },
  { SPU::R89, 89U },
  { SPU::R90, 90U },
  { SPU::R91, 91U },
  { SPU::R92, 92U },
  { SPU::R93, 93U },
  { SPU::R94, 94U },
  { SPU::R95, 95U },
  { SPU::R96, 96U },
  { SPU::R97, 97U },
  { SPU::R98, 98U },
  { SPU::R99, 99U },
  { SPU::R100, 100U },
  { SPU::R101, 101U },
  { SPU::R102, 102U },
  { SPU::R103, 103U },
  { SPU::R104, 104U },
  { SPU::R105, 105U },
  { SPU::R106, 106U },
  { SPU::R107, 107U },
  { SPU::R108, 108U },
  { SPU::R109, 109U },
  { SPU::R110, 110U },
  { SPU::R111, 111U },
  { SPU::R112, 112U },
  { SPU::R113, 113U },
  { SPU::R114, 114U },
  { SPU::R115, 115U },
  { SPU::R116, 116U },
  { SPU::R117, 117U },
  { SPU::R118, 118U },
  { SPU::R119, 119U },
  { SPU::R120, 120U },
  { SPU::R121, 121U },
  { SPU::R122, 122U },
  { SPU::R123, 123U },
  { SPU::R124, 124U },
  { SPU::R125, 125U },
  { SPU::R126, 126U },
  { SPU::R127, 127U },
};
extern const unsigned SPUEHFlavour0L2DwarfSize = sizeof(SPUEHFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

static inline void InitSPUMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0) {
  RI->InitMCRegisterInfo(SPURegDesc, 129, RA, SPUMCRegisterClasses, 8, SPURegLists, NULL, 0);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(SPUDwarfFlavour0Dwarf2L, SPUDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(SPUEHFlavour0Dwarf2L, SPUEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(SPUDwarfFlavour0L2Dwarf, SPUDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(SPUEHFlavour0L2Dwarf, SPUEHFlavour0L2DwarfSize, true);
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

struct SPUGenRegisterInfo : public TargetRegisterInfo {
  explicit SPUGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0);
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

namespace SPU { // Register classes
  extern const TargetRegisterClass R8CRegClass;
  static const TargetRegisterClass * const R8CRegisterClass = &R8CRegClass;
  extern const TargetRegisterClass R16CRegClass;
  static const TargetRegisterClass * const R16CRegisterClass = &R16CRegClass;
  extern const TargetRegisterClass R32CRegClass;
  static const TargetRegisterClass * const R32CRegisterClass = &R32CRegClass;
  extern const TargetRegisterClass R32FPRegClass;
  static const TargetRegisterClass * const R32FPRegisterClass = &R32FPRegClass;
  extern const TargetRegisterClass R64CRegClass;
  static const TargetRegisterClass * const R64CRegisterClass = &R64CRegClass;
  extern const TargetRegisterClass R64FPRegClass;
  static const TargetRegisterClass * const R64FPRegisterClass = &R64FPRegClass;
  extern const TargetRegisterClass GPRCRegClass;
  static const TargetRegisterClass * const GPRCRegisterClass = &GPRCRegClass;
  extern const TargetRegisterClass VECREGRegClass;
  static const TargetRegisterClass * const VECREGRegisterClass = &VECREGRegClass;
} // end of namespace SPU

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

extern const MCRegisterClass SPUMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i8, MVT::Other,
  /* 2 */ MVT::i16, MVT::Other,
  /* 4 */ MVT::i32, MVT::Other,
  /* 6 */ MVT::i64, MVT::Other,
  /* 8 */ MVT::i128, MVT::Other,
  /* 10 */ MVT::f32, MVT::Other,
  /* 12 */ MVT::f64, MVT::Other,
  /* 14 */ MVT::v16i8, MVT::v8i16, MVT::v4i32, MVT::v4f32, MVT::v2i64, MVT::v2f64, MVT::Other,
};

static const TargetRegisterClass *const NullRegClasses[] = { NULL };

static const uint32_t R8CSubclassMask[] = {
  0x000000ff, 
};

static const uint32_t R16CSubclassMask[] = {
  0x000000fe, 
};

static const uint32_t R32CSubclassMask[] = {
  0x000000fc, 
};

static const uint32_t R32FPSubclassMask[] = {
  0x000000fc, 
};

static const uint32_t R64CSubclassMask[] = {
  0x000000f0, 
};

static const uint32_t R64FPSubclassMask[] = {
  0x000000f0, 
};

static const uint32_t GPRCSubclassMask[] = {
  0x000000c0, 
};

static const uint32_t VECREGSubclassMask[] = {
  0x000000c0, 
};

static const TargetRegisterClass *const R16CSuperclasses[] = {
  &SPU::R8CRegClass,
  NULL
};

static const TargetRegisterClass *const R32CSuperclasses[] = {
  &SPU::R8CRegClass,
  &SPU::R16CRegClass,
  &SPU::R32FPRegClass,
  NULL
};

static const TargetRegisterClass *const R32FPSuperclasses[] = {
  &SPU::R8CRegClass,
  &SPU::R16CRegClass,
  &SPU::R32CRegClass,
  NULL
};

static const TargetRegisterClass *const R64CSuperclasses[] = {
  &SPU::R8CRegClass,
  &SPU::R16CRegClass,
  &SPU::R32CRegClass,
  &SPU::R32FPRegClass,
  &SPU::R64FPRegClass,
  NULL
};

static const TargetRegisterClass *const R64FPSuperclasses[] = {
  &SPU::R8CRegClass,
  &SPU::R16CRegClass,
  &SPU::R32CRegClass,
  &SPU::R32FPRegClass,
  &SPU::R64CRegClass,
  NULL
};

static const TargetRegisterClass *const GPRCSuperclasses[] = {
  &SPU::R8CRegClass,
  &SPU::R16CRegClass,
  &SPU::R32CRegClass,
  &SPU::R32FPRegClass,
  &SPU::R64CRegClass,
  &SPU::R64FPRegClass,
  &SPU::VECREGRegClass,
  NULL
};

static const TargetRegisterClass *const VECREGSuperclasses[] = {
  &SPU::R8CRegClass,
  &SPU::R16CRegClass,
  &SPU::R32CRegClass,
  &SPU::R32FPRegClass,
  &SPU::R64CRegClass,
  &SPU::R64FPRegClass,
  &SPU::GPRCRegClass,
  NULL
};

namespace SPU {   // Register class instances
  extern const TargetRegisterClass R8CRegClass = {
    &SPUMCRegisterClasses[R8CRegClassID],
    VTLists + 0,
    R8CSubclassMask,
    NullRegClasses,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass R16CRegClass = {
    &SPUMCRegisterClasses[R16CRegClassID],
    VTLists + 2,
    R16CSubclassMask,
    R16CSuperclasses,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass R32CRegClass = {
    &SPUMCRegisterClasses[R32CRegClassID],
    VTLists + 4,
    R32CSubclassMask,
    R32CSuperclasses,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass R32FPRegClass = {
    &SPUMCRegisterClasses[R32FPRegClassID],
    VTLists + 10,
    R32FPSubclassMask,
    R32FPSuperclasses,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass R64CRegClass = {
    &SPUMCRegisterClasses[R64CRegClassID],
    VTLists + 6,
    R64CSubclassMask,
    R64CSuperclasses,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass R64FPRegClass = {
    &SPUMCRegisterClasses[R64FPRegClassID],
    VTLists + 12,
    R64FPSubclassMask,
    R64FPSuperclasses,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass GPRCRegClass = {
    &SPUMCRegisterClasses[GPRCRegClassID],
    VTLists + 8,
    GPRCSubclassMask,
    GPRCSuperclasses,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass VECREGRegClass = {
    &SPUMCRegisterClasses[VECREGRegClassID],
    VTLists + 14,
    VECREGSubclassMask,
    VECREGSuperclasses,
    NullRegClasses,
    0
  };

}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &SPU::R8CRegClass,
    &SPU::R16CRegClass,
    &SPU::R32CRegClass,
    &SPU::R32FPRegClass,
    &SPU::R64CRegClass,
    &SPU::R64FPRegClass,
    &SPU::GPRCRegClass,
    &SPU::VECREGRegClass,
  };
}

static const TargetRegisterInfoDesc SPURegInfoDesc[] = { // Extra Descriptors
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
};

static const char *const SPUSubRegIndexTable[] = { "" };


unsigned SPUGenRegisterInfo::composeSubRegIndices(unsigned IdxA, unsigned IdxB) const {
  switch (IdxA) {
  default:
    return IdxB;
  }
}

const TargetRegisterClass *SPUGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  assert(Idx == 0 && "Target has no sub-registers");
  return RC;
}

const TargetRegisterClass *SPUGenRegisterInfo::getMatchingSuperRegClass(const TargetRegisterClass *A, const TargetRegisterClass *B, unsigned Idx) const {
  llvm_unreachable("Target has no sub-registers");
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &SPUGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 128},  	// R8C
    {1, 128},  	// R16C
    {1, 128},  	// R32C
    {1, 128},  	// R32FP
    {1, 128},  	// R64C
    {1, 128},  	// R64FP
    {1, 128},  	// GPRC
    {1, 128},  	// VECREG
    {0, 0} };
  return RCWeightTable[RC->getID()];
}


// Get the number of dimensions of register pressure.
unsigned SPUGenRegisterInfo::getNumRegPressureSets() const {
  return 1;
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned SPUGenRegisterInfo::
getRegPressureSetLimit(unsigned Idx) const {
  static const unsigned PressureLimitTable[] = {
    128,  	// 0: R8C
    0 };
  return PressureLimitTable[Idx];
}

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* SPUGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const int RCSetsTable[] = {
    0,  -1,  	// R8C
    0,  -1,  	// R16C
    0,  -1,  	// R32C
    0,  -1,  	// R32FP
    0,  -1,  	// R64C
    0,  -1,  	// R64FP
    0,  -1,  	// GPRC
    0,  -1,  	// VECREG
    -1 };
  static const unsigned RCSetStartTable[] = {
    0,2,4,6,8,10,12,14,0 };
  unsigned SetListStart = RCSetStartTable[RC->getID()];
  return &RCSetsTable[SetListStart];
}

extern const MCRegisterDesc SPURegDesc[];
extern const uint16_t SPURegLists[];
// SPU Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair SPUDwarfFlavour0Dwarf2L[];
extern const unsigned SPUDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SPUEHFlavour0Dwarf2L[];
extern const unsigned SPUEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SPUDwarfFlavour0L2Dwarf[];
extern const unsigned SPUDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SPUEHFlavour0L2Dwarf[];
extern const unsigned SPUEHFlavour0L2DwarfSize;

SPUGenRegisterInfo::
SPUGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour)
  : TargetRegisterInfo(SPURegInfoDesc, RegisterClasses, RegisterClasses+8,
             SPUSubRegIndexTable) {
  InitMCRegisterInfo(SPURegDesc, 129, RA,
                     SPUMCRegisterClasses, 8,
                     SPURegLists,
                     NULL, 0);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(SPUDwarfFlavour0Dwarf2L, SPUDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(SPUEHFlavour0Dwarf2L, SPUEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(SPUDwarfFlavour0L2Dwarf, SPUDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(SPUEHFlavour0L2Dwarf, SPUEHFlavour0L2DwarfSize, true);
    break;
  }
}



} // End llvm namespace 
#endif // GET_REGINFO_TARGET_DESC

