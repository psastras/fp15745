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
extern const MCRegisterClass SPMCRegisterClasses[];

namespace SP {
enum {
  NoRegister,
  D0 = 1,
  D1 = 2,
  D2 = 3,
  D3 = 4,
  D4 = 5,
  D5 = 6,
  D6 = 7,
  D7 = 8,
  D8 = 9,
  D9 = 10,
  D10 = 11,
  D11 = 12,
  D12 = 13,
  D13 = 14,
  D14 = 15,
  D15 = 16,
  F0 = 17,
  F1 = 18,
  F2 = 19,
  F3 = 20,
  F4 = 21,
  F5 = 22,
  F6 = 23,
  F7 = 24,
  F8 = 25,
  F9 = 26,
  F10 = 27,
  F11 = 28,
  F12 = 29,
  F13 = 30,
  F14 = 31,
  F15 = 32,
  F16 = 33,
  F17 = 34,
  F18 = 35,
  F19 = 36,
  F20 = 37,
  F21 = 38,
  F22 = 39,
  F23 = 40,
  F24 = 41,
  F25 = 42,
  F26 = 43,
  F27 = 44,
  F28 = 45,
  F29 = 46,
  F30 = 47,
  F31 = 48,
  FCC = 49,
  G0 = 50,
  G1 = 51,
  G2 = 52,
  G3 = 53,
  G4 = 54,
  G5 = 55,
  G6 = 56,
  G7 = 57,
  I0 = 58,
  I1 = 59,
  I2 = 60,
  I3 = 61,
  I4 = 62,
  I5 = 63,
  I6 = 64,
  I7 = 65,
  ICC = 66,
  L0 = 67,
  L1 = 68,
  L2 = 69,
  L3 = 70,
  L4 = 71,
  L5 = 72,
  L6 = 73,
  L7 = 74,
  O0 = 75,
  O1 = 76,
  O2 = 77,
  O3 = 78,
  O4 = 79,
  O5 = 80,
  O6 = 81,
  O7 = 82,
  Y = 83,
  NUM_TARGET_REGS 	// 84
};
}

// Register classes
namespace SP {
enum {
  FPRegsRegClassID = 0,
  IntRegsRegClassID = 1,
  DFPRegsRegClassID = 2
  };
}

// Subregister indices
namespace SP {
enum {
  NoSubRegister,
  sub_even,	// 1
  sub_odd,	// 2
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

extern const uint16_t SparcRegLists[] = {
  /* 0 */ SP::F0, SP::D0, 0,
  /* 3 */ SP::F1, SP::D0, 0,
  /* 6 */ SP::F2, SP::D1, 0,
  /* 9 */ SP::F3, SP::D1, 0,
  /* 12 */ SP::F4, SP::D2, 0,
  /* 15 */ SP::F5, SP::D2, 0,
  /* 18 */ SP::F6, SP::D3, 0,
  /* 21 */ SP::F7, SP::D3, 0,
  /* 24 */ SP::F8, SP::D4, 0,
  /* 27 */ SP::F9, SP::D4, 0,
  /* 30 */ SP::F10, SP::D5, 0,
  /* 33 */ SP::F11, SP::D5, 0,
  /* 36 */ SP::F12, SP::D6, 0,
  /* 39 */ SP::F13, SP::D6, 0,
  /* 42 */ SP::F14, SP::D7, 0,
  /* 45 */ SP::F15, SP::D7, 0,
  /* 48 */ SP::F16, SP::D8, 0,
  /* 51 */ SP::F17, SP::D8, 0,
  /* 54 */ SP::F18, SP::D9, 0,
  /* 57 */ SP::F19, SP::D9, 0,
  /* 60 */ SP::F20, SP::D10, 0,
  /* 63 */ SP::F21, SP::D10, 0,
  /* 66 */ SP::F22, SP::D11, 0,
  /* 69 */ SP::F23, SP::D11, 0,
  /* 72 */ SP::F24, SP::D12, 0,
  /* 75 */ SP::F25, SP::D12, 0,
  /* 78 */ SP::F26, SP::D13, 0,
  /* 81 */ SP::F27, SP::D13, 0,
  /* 84 */ SP::F28, SP::D14, 0,
  /* 87 */ SP::F29, SP::D14, 0,
  /* 90 */ SP::F30, SP::D15, 0,
  /* 93 */ SP::F31, SP::D15, 0,
  /* 96 */ SP::D0, SP::F0, SP::F1, 0,
  /* 100 */ SP::D1, SP::F2, SP::F3, 0,
  /* 104 */ SP::D2, SP::F4, SP::F5, 0,
  /* 108 */ SP::D3, SP::F6, SP::F7, 0,
  /* 112 */ SP::D4, SP::F8, SP::F9, 0,
  /* 116 */ SP::D5, SP::F10, SP::F11, 0,
  /* 120 */ SP::D6, SP::F12, SP::F13, 0,
  /* 124 */ SP::D7, SP::F14, SP::F15, 0,
  /* 128 */ SP::D8, SP::F16, SP::F17, 0,
  /* 132 */ SP::D9, SP::F18, SP::F19, 0,
  /* 136 */ SP::D10, SP::F20, SP::F21, 0,
  /* 140 */ SP::D11, SP::F22, SP::F23, 0,
  /* 144 */ SP::D12, SP::F24, SP::F25, 0,
  /* 148 */ SP::D13, SP::F26, SP::F27, 0,
  /* 152 */ SP::D14, SP::F28, SP::F29, 0,
  /* 156 */ SP::D15, SP::F30, SP::F31, 0,
  /* 160 */ SP::FCC, 0,
  /* 162 */ SP::G0, 0,
  /* 164 */ SP::G1, 0,
  /* 166 */ SP::G2, 0,
  /* 168 */ SP::G3, 0,
  /* 170 */ SP::G4, 0,
  /* 172 */ SP::G5, 0,
  /* 174 */ SP::G6, 0,
  /* 176 */ SP::G7, 0,
  /* 178 */ SP::I0, 0,
  /* 180 */ SP::I1, 0,
  /* 182 */ SP::I2, 0,
  /* 184 */ SP::I3, 0,
  /* 186 */ SP::I4, 0,
  /* 188 */ SP::I5, 0,
  /* 190 */ SP::I6, 0,
  /* 192 */ SP::I7, 0,
  /* 194 */ SP::ICC, 0,
  /* 196 */ SP::L0, 0,
  /* 198 */ SP::L1, 0,
  /* 200 */ SP::L2, 0,
  /* 202 */ SP::L3, 0,
  /* 204 */ SP::L4, 0,
  /* 206 */ SP::L5, 0,
  /* 208 */ SP::L6, 0,
  /* 210 */ SP::L7, 0,
  /* 212 */ SP::O0, 0,
  /* 214 */ SP::O1, 0,
  /* 216 */ SP::O2, 0,
  /* 218 */ SP::O3, 0,
  /* 220 */ SP::O4, 0,
  /* 222 */ SP::O5, 0,
  /* 224 */ SP::O6, 0,
  /* 226 */ SP::O7, 0,
  /* 228 */ SP::Y, 0,
};

extern const MCRegisterDesc SparcRegDesc[] = { // Descriptors
  { "NOREG", 0, 0, 0 },
  { "D0", 96, 97, 2 },
  { "D1", 100, 101, 2 },
  { "D2", 104, 105, 2 },
  { "D3", 108, 109, 2 },
  { "D4", 112, 113, 2 },
  { "D5", 116, 117, 2 },
  { "D6", 120, 121, 2 },
  { "D7", 124, 125, 2 },
  { "D8", 128, 129, 2 },
  { "D9", 132, 133, 2 },
  { "D10", 136, 137, 2 },
  { "D11", 140, 141, 2 },
  { "D12", 144, 145, 2 },
  { "D13", 148, 149, 2 },
  { "D14", 152, 153, 2 },
  { "D15", 156, 157, 2 },
  { "F0", 0, 2, 1 },
  { "F1", 3, 2, 1 },
  { "F2", 6, 2, 7 },
  { "F3", 9, 2, 7 },
  { "F4", 12, 2, 13 },
  { "F5", 15, 2, 13 },
  { "F6", 18, 2, 19 },
  { "F7", 21, 2, 19 },
  { "F8", 24, 2, 25 },
  { "F9", 27, 2, 25 },
  { "F10", 30, 2, 31 },
  { "F11", 33, 2, 31 },
  { "F12", 36, 2, 37 },
  { "F13", 39, 2, 37 },
  { "F14", 42, 2, 43 },
  { "F15", 45, 2, 43 },
  { "F16", 48, 2, 49 },
  { "F17", 51, 2, 49 },
  { "F18", 54, 2, 55 },
  { "F19", 57, 2, 55 },
  { "F20", 60, 2, 61 },
  { "F21", 63, 2, 61 },
  { "F22", 66, 2, 67 },
  { "F23", 69, 2, 67 },
  { "F24", 72, 2, 73 },
  { "F25", 75, 2, 73 },
  { "F26", 78, 2, 79 },
  { "F27", 81, 2, 79 },
  { "F28", 84, 2, 85 },
  { "F29", 87, 2, 85 },
  { "F30", 90, 2, 91 },
  { "F31", 93, 2, 91 },
  { "FCC", 160, 2, 2 },
  { "G0", 162, 2, 2 },
  { "G1", 164, 2, 2 },
  { "G2", 166, 2, 2 },
  { "G3", 168, 2, 2 },
  { "G4", 170, 2, 2 },
  { "G5", 172, 2, 2 },
  { "G6", 174, 2, 2 },
  { "G7", 176, 2, 2 },
  { "I0", 178, 2, 2 },
  { "I1", 180, 2, 2 },
  { "I2", 182, 2, 2 },
  { "I3", 184, 2, 2 },
  { "I4", 186, 2, 2 },
  { "I5", 188, 2, 2 },
  { "I6", 190, 2, 2 },
  { "I7", 192, 2, 2 },
  { "ICC", 194, 2, 2 },
  { "L0", 196, 2, 2 },
  { "L1", 198, 2, 2 },
  { "L2", 200, 2, 2 },
  { "L3", 202, 2, 2 },
  { "L4", 204, 2, 2 },
  { "L5", 206, 2, 2 },
  { "L6", 208, 2, 2 },
  { "L7", 210, 2, 2 },
  { "O0", 212, 2, 2 },
  { "O1", 214, 2, 2 },
  { "O2", 216, 2, 2 },
  { "O3", 218, 2, 2 },
  { "O4", 220, 2, 2 },
  { "O5", 222, 2, 2 },
  { "O6", 224, 2, 2 },
  { "O7", 226, 2, 2 },
  { "Y", 228, 2, 2 },
};

namespace {     // Register classes...
  // FPRegs Register Class...
  const uint16_t FPRegs[] = {
    SP::F0, SP::F1, SP::F2, SP::F3, SP::F4, SP::F5, SP::F6, SP::F7, SP::F8, SP::F9, SP::F10, SP::F11, SP::F12, SP::F13, SP::F14, SP::F15, SP::F16, SP::F17, SP::F18, SP::F19, SP::F20, SP::F21, SP::F22, SP::F23, SP::F24, SP::F25, SP::F26, SP::F27, SP::F28, SP::F29, SP::F30, SP::F31, 
  };

  // FPRegs Bit set.
  const uint8_t FPRegsBits[] = {
    0x00, 0x00, 0xfe, 0xff, 0xff, 0xff, 0x01, 
  };

  // IntRegs Register Class...
  const uint16_t IntRegs[] = {
    SP::L0, SP::L1, SP::L2, SP::L3, SP::L4, SP::L5, SP::L6, SP::L7, SP::I0, SP::I1, SP::I2, SP::I3, SP::I4, SP::I5, SP::O0, SP::O1, SP::O2, SP::O3, SP::O4, SP::O5, SP::O7, SP::G1, SP::G2, SP::G3, SP::G4, SP::O6, SP::I6, SP::I7, SP::G0, SP::G5, SP::G6, SP::G7, 
  };

  // IntRegs Bit set.
  const uint8_t IntRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xfb, 0xff, 0x07, 
  };

  // DFPRegs Register Class...
  const uint16_t DFPRegs[] = {
    SP::D0, SP::D1, SP::D2, SP::D3, SP::D4, SP::D5, SP::D6, SP::D7, SP::D8, SP::D9, SP::D10, SP::D11, SP::D12, SP::D13, SP::D14, SP::D15, 
  };

  // DFPRegs Bit set.
  const uint8_t DFPRegsBits[] = {
    0xfe, 0xff, 0x01, 
  };

}

extern const MCRegisterClass SparcMCRegisterClasses[] = {
  { "FPRegs", FPRegs, FPRegsBits, 32, sizeof(FPRegsBits), SP::FPRegsRegClassID, 4, 4, 1, 1 },
  { "IntRegs", IntRegs, IntRegsBits, 32, sizeof(IntRegsBits), SP::IntRegsRegClassID, 4, 4, 1, 1 },
  { "DFPRegs", DFPRegs, DFPRegsBits, 16, sizeof(DFPRegsBits), SP::DFPRegsRegClassID, 8, 8, 1, 1 },
};

const uint16_t SparcSubRegTable[][2] = {
  /* D0 */
  {SP::F0, SP::F1},
  /* D1 */
  {SP::F2, SP::F3},
  /* D2 */
  {SP::F4, SP::F5},
  /* D3 */
  {SP::F6, SP::F7},
  /* D4 */
  {SP::F8, SP::F9},
  /* D5 */
  {SP::F10, SP::F11},
  /* D6 */
  {SP::F12, SP::F13},
  /* D7 */
  {SP::F14, SP::F15},
  /* D8 */
  {SP::F16, SP::F17},
  /* D9 */
  {SP::F18, SP::F19},
  /* D10 */
  {SP::F20, SP::F21},
  /* D11 */
  {SP::F22, SP::F23},
  /* D12 */
  {SP::F24, SP::F25},
  /* D13 */
  {SP::F26, SP::F27},
  /* D14 */
  {SP::F28, SP::F29},
  /* D15 */
  {SP::F30, SP::F31},
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
  /* FCC */
  {0},
  /* G0 */
  {0},
  /* G1 */
  {0},
  /* G2 */
  {0},
  /* G3 */
  {0},
  /* G4 */
  {0},
  /* G5 */
  {0},
  /* G6 */
  {0},
  /* G7 */
  {0},
  /* I0 */
  {0},
  /* I1 */
  {0},
  /* I2 */
  {0},
  /* I3 */
  {0},
  /* I4 */
  {0},
  /* I5 */
  {0},
  /* I6 */
  {0},
  /* I7 */
  {0},
  /* ICC */
  {0},
  /* L0 */
  {0},
  /* L1 */
  {0},
  /* L2 */
  {0},
  /* L3 */
  {0},
  /* L4 */
  {0},
  /* L5 */
  {0},
  /* L6 */
  {0},
  /* L7 */
  {0},
  /* O0 */
  {0},
  /* O1 */
  {0},
  /* O2 */
  {0},
  /* O3 */
  {0},
  /* O4 */
  {0},
  /* O5 */
  {0},
  /* O6 */
  {0},
  /* O7 */
  {0},
  /* Y */
  {0},
};

const uint16_t *getSparcSubRegTable() {
  return (const uint16_t *)SparcSubRegTable;
}

// SP Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair SPDwarfFlavour0Dwarf2L[] = {
  { 0U, SP::G0 },
  { 1U, SP::G1 },
  { 2U, SP::G2 },
  { 3U, SP::G3 },
  { 4U, SP::G4 },
  { 5U, SP::G5 },
  { 6U, SP::G6 },
  { 7U, SP::G7 },
  { 8U, SP::O0 },
  { 9U, SP::O1 },
  { 10U, SP::O2 },
  { 11U, SP::O3 },
  { 12U, SP::O4 },
  { 13U, SP::O5 },
  { 14U, SP::O6 },
  { 15U, SP::O7 },
  { 16U, SP::L0 },
  { 17U, SP::L1 },
  { 18U, SP::L2 },
  { 19U, SP::L3 },
  { 20U, SP::L4 },
  { 21U, SP::L5 },
  { 22U, SP::L6 },
  { 23U, SP::L7 },
  { 24U, SP::I0 },
  { 25U, SP::I1 },
  { 26U, SP::I2 },
  { 27U, SP::I3 },
  { 28U, SP::I4 },
  { 29U, SP::I5 },
  { 30U, SP::I6 },
  { 31U, SP::I7 },
  { 32U, SP::F0 },
  { 33U, SP::F1 },
  { 34U, SP::F2 },
  { 35U, SP::F3 },
  { 36U, SP::F4 },
  { 37U, SP::F5 },
  { 38U, SP::F6 },
  { 39U, SP::F7 },
  { 40U, SP::F8 },
  { 41U, SP::F9 },
  { 42U, SP::F10 },
  { 43U, SP::F11 },
  { 44U, SP::F12 },
  { 45U, SP::F13 },
  { 46U, SP::F14 },
  { 47U, SP::F15 },
  { 48U, SP::F16 },
  { 49U, SP::F17 },
  { 50U, SP::F18 },
  { 51U, SP::F19 },
  { 52U, SP::F20 },
  { 53U, SP::F21 },
  { 54U, SP::F22 },
  { 55U, SP::F23 },
  { 56U, SP::F24 },
  { 57U, SP::F25 },
  { 58U, SP::F26 },
  { 59U, SP::F27 },
  { 60U, SP::F28 },
  { 61U, SP::F29 },
  { 62U, SP::F30 },
  { 63U, SP::F31 },
  { 72U, SP::D0 },
  { 73U, SP::D1 },
  { 74U, SP::D2 },
  { 75U, SP::D3 },
  { 76U, SP::D4 },
  { 77U, SP::D5 },
  { 78U, SP::D6 },
  { 79U, SP::D7 },
  { 80U, SP::D8 },
  { 81U, SP::D9 },
  { 82U, SP::D10 },
  { 83U, SP::D11 },
  { 84U, SP::D12 },
  { 85U, SP::D13 },
  { 86U, SP::D14 },
  { 87U, SP::D15 },
};
extern const unsigned SPDwarfFlavour0Dwarf2LSize = sizeof(SPDwarfFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair SPEHFlavour0Dwarf2L[] = {
  { 0U, SP::G0 },
  { 1U, SP::G1 },
  { 2U, SP::G2 },
  { 3U, SP::G3 },
  { 4U, SP::G4 },
  { 5U, SP::G5 },
  { 6U, SP::G6 },
  { 7U, SP::G7 },
  { 8U, SP::O0 },
  { 9U, SP::O1 },
  { 10U, SP::O2 },
  { 11U, SP::O3 },
  { 12U, SP::O4 },
  { 13U, SP::O5 },
  { 14U, SP::O6 },
  { 15U, SP::O7 },
  { 16U, SP::L0 },
  { 17U, SP::L1 },
  { 18U, SP::L2 },
  { 19U, SP::L3 },
  { 20U, SP::L4 },
  { 21U, SP::L5 },
  { 22U, SP::L6 },
  { 23U, SP::L7 },
  { 24U, SP::I0 },
  { 25U, SP::I1 },
  { 26U, SP::I2 },
  { 27U, SP::I3 },
  { 28U, SP::I4 },
  { 29U, SP::I5 },
  { 30U, SP::I6 },
  { 31U, SP::I7 },
  { 32U, SP::F0 },
  { 33U, SP::F1 },
  { 34U, SP::F2 },
  { 35U, SP::F3 },
  { 36U, SP::F4 },
  { 37U, SP::F5 },
  { 38U, SP::F6 },
  { 39U, SP::F7 },
  { 40U, SP::F8 },
  { 41U, SP::F9 },
  { 42U, SP::F10 },
  { 43U, SP::F11 },
  { 44U, SP::F12 },
  { 45U, SP::F13 },
  { 46U, SP::F14 },
  { 47U, SP::F15 },
  { 48U, SP::F16 },
  { 49U, SP::F17 },
  { 50U, SP::F18 },
  { 51U, SP::F19 },
  { 52U, SP::F20 },
  { 53U, SP::F21 },
  { 54U, SP::F22 },
  { 55U, SP::F23 },
  { 56U, SP::F24 },
  { 57U, SP::F25 },
  { 58U, SP::F26 },
  { 59U, SP::F27 },
  { 60U, SP::F28 },
  { 61U, SP::F29 },
  { 62U, SP::F30 },
  { 63U, SP::F31 },
  { 72U, SP::D0 },
  { 73U, SP::D1 },
  { 74U, SP::D2 },
  { 75U, SP::D3 },
  { 76U, SP::D4 },
  { 77U, SP::D5 },
  { 78U, SP::D6 },
  { 79U, SP::D7 },
  { 80U, SP::D8 },
  { 81U, SP::D9 },
  { 82U, SP::D10 },
  { 83U, SP::D11 },
  { 84U, SP::D12 },
  { 85U, SP::D13 },
  { 86U, SP::D14 },
  { 87U, SP::D15 },
};
extern const unsigned SPEHFlavour0Dwarf2LSize = sizeof(SPEHFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair SPDwarfFlavour0L2Dwarf[] = {
  { SP::D0, 72U },
  { SP::D1, 73U },
  { SP::D2, 74U },
  { SP::D3, 75U },
  { SP::D4, 76U },
  { SP::D5, 77U },
  { SP::D6, 78U },
  { SP::D7, 79U },
  { SP::D8, 80U },
  { SP::D9, 81U },
  { SP::D10, 82U },
  { SP::D11, 83U },
  { SP::D12, 84U },
  { SP::D13, 85U },
  { SP::D14, 86U },
  { SP::D15, 87U },
  { SP::F0, 32U },
  { SP::F1, 33U },
  { SP::F2, 34U },
  { SP::F3, 35U },
  { SP::F4, 36U },
  { SP::F5, 37U },
  { SP::F6, 38U },
  { SP::F7, 39U },
  { SP::F8, 40U },
  { SP::F9, 41U },
  { SP::F10, 42U },
  { SP::F11, 43U },
  { SP::F12, 44U },
  { SP::F13, 45U },
  { SP::F14, 46U },
  { SP::F15, 47U },
  { SP::F16, 48U },
  { SP::F17, 49U },
  { SP::F18, 50U },
  { SP::F19, 51U },
  { SP::F20, 52U },
  { SP::F21, 53U },
  { SP::F22, 54U },
  { SP::F23, 55U },
  { SP::F24, 56U },
  { SP::F25, 57U },
  { SP::F26, 58U },
  { SP::F27, 59U },
  { SP::F28, 60U },
  { SP::F29, 61U },
  { SP::F30, 62U },
  { SP::F31, 63U },
  { SP::G0, 0U },
  { SP::G1, 1U },
  { SP::G2, 2U },
  { SP::G3, 3U },
  { SP::G4, 4U },
  { SP::G5, 5U },
  { SP::G6, 6U },
  { SP::G7, 7U },
  { SP::I0, 24U },
  { SP::I1, 25U },
  { SP::I2, 26U },
  { SP::I3, 27U },
  { SP::I4, 28U },
  { SP::I5, 29U },
  { SP::I6, 30U },
  { SP::I7, 31U },
  { SP::L0, 16U },
  { SP::L1, 17U },
  { SP::L2, 18U },
  { SP::L3, 19U },
  { SP::L4, 20U },
  { SP::L5, 21U },
  { SP::L6, 22U },
  { SP::L7, 23U },
  { SP::O0, 8U },
  { SP::O1, 9U },
  { SP::O2, 10U },
  { SP::O3, 11U },
  { SP::O4, 12U },
  { SP::O5, 13U },
  { SP::O6, 14U },
  { SP::O7, 15U },
};
extern const unsigned SPDwarfFlavour0L2DwarfSize = sizeof(SPDwarfFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair SPEHFlavour0L2Dwarf[] = {
  { SP::D0, 72U },
  { SP::D1, 73U },
  { SP::D2, 74U },
  { SP::D3, 75U },
  { SP::D4, 76U },
  { SP::D5, 77U },
  { SP::D6, 78U },
  { SP::D7, 79U },
  { SP::D8, 80U },
  { SP::D9, 81U },
  { SP::D10, 82U },
  { SP::D11, 83U },
  { SP::D12, 84U },
  { SP::D13, 85U },
  { SP::D14, 86U },
  { SP::D15, 87U },
  { SP::F0, 32U },
  { SP::F1, 33U },
  { SP::F2, 34U },
  { SP::F3, 35U },
  { SP::F4, 36U },
  { SP::F5, 37U },
  { SP::F6, 38U },
  { SP::F7, 39U },
  { SP::F8, 40U },
  { SP::F9, 41U },
  { SP::F10, 42U },
  { SP::F11, 43U },
  { SP::F12, 44U },
  { SP::F13, 45U },
  { SP::F14, 46U },
  { SP::F15, 47U },
  { SP::F16, 48U },
  { SP::F17, 49U },
  { SP::F18, 50U },
  { SP::F19, 51U },
  { SP::F20, 52U },
  { SP::F21, 53U },
  { SP::F22, 54U },
  { SP::F23, 55U },
  { SP::F24, 56U },
  { SP::F25, 57U },
  { SP::F26, 58U },
  { SP::F27, 59U },
  { SP::F28, 60U },
  { SP::F29, 61U },
  { SP::F30, 62U },
  { SP::F31, 63U },
  { SP::G0, 0U },
  { SP::G1, 1U },
  { SP::G2, 2U },
  { SP::G3, 3U },
  { SP::G4, 4U },
  { SP::G5, 5U },
  { SP::G6, 6U },
  { SP::G7, 7U },
  { SP::I0, 24U },
  { SP::I1, 25U },
  { SP::I2, 26U },
  { SP::I3, 27U },
  { SP::I4, 28U },
  { SP::I5, 29U },
  { SP::I6, 30U },
  { SP::I7, 31U },
  { SP::L0, 16U },
  { SP::L1, 17U },
  { SP::L2, 18U },
  { SP::L3, 19U },
  { SP::L4, 20U },
  { SP::L5, 21U },
  { SP::L6, 22U },
  { SP::L7, 23U },
  { SP::O0, 8U },
  { SP::O1, 9U },
  { SP::O2, 10U },
  { SP::O3, 11U },
  { SP::O4, 12U },
  { SP::O5, 13U },
  { SP::O6, 14U },
  { SP::O7, 15U },
};
extern const unsigned SPEHFlavour0L2DwarfSize = sizeof(SPEHFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

static inline void InitSparcMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0) {
  RI->InitMCRegisterInfo(SparcRegDesc, 84, RA, SparcMCRegisterClasses, 3, SparcRegLists, (uint16_t*)SparcSubRegTable, 2);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(SPDwarfFlavour0Dwarf2L, SPDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(SPEHFlavour0Dwarf2L, SPEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(SPDwarfFlavour0L2Dwarf, SPDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(SPEHFlavour0L2Dwarf, SPEHFlavour0L2DwarfSize, true);
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

struct SparcGenRegisterInfo : public TargetRegisterInfo {
  explicit SparcGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0);
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

namespace SP { // Register classes
  extern const TargetRegisterClass FPRegsRegClass;
  static const TargetRegisterClass * const FPRegsRegisterClass = &FPRegsRegClass;
  extern const TargetRegisterClass IntRegsRegClass;
  static const TargetRegisterClass * const IntRegsRegisterClass = &IntRegsRegClass;
  extern const TargetRegisterClass DFPRegsRegClass;
  static const TargetRegisterClass * const DFPRegsRegisterClass = &DFPRegsRegClass;
} // end of namespace Sparc

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

extern const MCRegisterClass SparcMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i32, MVT::Other,
  /* 2 */ MVT::f32, MVT::Other,
  /* 4 */ MVT::f64, MVT::Other,
};

static const TargetRegisterClass *const NullRegClasses[] = { NULL };

// FPRegs Super-register Classes...
static const TargetRegisterClass *const FPRegsSuperRegClasses[] = {
  NULL
};

// IntRegs Super-register Classes...
static const TargetRegisterClass *const IntRegsSuperRegClasses[] = {
  NULL
};

// DFPRegs Super-register Classes...
static const TargetRegisterClass *const DFPRegsSuperRegClasses[] = {
  NULL
};

static const uint32_t FPRegsSubclassMask[] = {
  0x00000001, 
};

static const uint32_t IntRegsSubclassMask[] = {
  0x00000002, 
};

static const uint32_t DFPRegsSubclassMask[] = {
  0x00000004, 
};

namespace SP {   // Register class instances
  extern const TargetRegisterClass FPRegsRegClass = {
    &SparcMCRegisterClasses[FPRegsRegClassID],
    VTLists + 2,
    FPRegsSubclassMask,
    NullRegClasses,
    FPRegsSuperRegClasses,
    0
  };

  extern const TargetRegisterClass IntRegsRegClass = {
    &SparcMCRegisterClasses[IntRegsRegClassID],
    VTLists + 0,
    IntRegsSubclassMask,
    NullRegClasses,
    IntRegsSuperRegClasses,
    0
  };

  extern const TargetRegisterClass DFPRegsRegClass = {
    &SparcMCRegisterClasses[DFPRegsRegClassID],
    VTLists + 4,
    DFPRegsSubclassMask,
    NullRegClasses,
    DFPRegsSuperRegClasses,
    0
  };

}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &SP::FPRegsRegClass,
    &SP::IntRegsRegClass,
    &SP::DFPRegsRegClass,
  };
}

static const TargetRegisterInfoDesc SparcRegInfoDesc[] = { // Extra Descriptors
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
  { 0, 0 },
};

static const char *const SparcSubRegIndexTable[] = { "sub_even", "sub_odd" };


unsigned SparcGenRegisterInfo::composeSubRegIndices(unsigned IdxA, unsigned IdxB) const {
  switch (IdxA) {
  default:
    return IdxB;
  }
}

const TargetRegisterClass *SparcGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[3][2] = {
    {	// FPRegs
      0,	// sub_even
      0,	// sub_odd
    },
    {	// IntRegs
      0,	// sub_even
      0,	// sub_odd
    },
    {	// DFPRegs
      3,	// sub_even -> DFPRegs
      3,	// sub_odd -> DFPRegs
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 2 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : 0;
}

const TargetRegisterClass *SparcGenRegisterInfo::getMatchingSuperRegClass(const TargetRegisterClass *A, const TargetRegisterClass *B, unsigned Idx) const {
  static const uint32_t Table[3][2][1] = {
    {	// FPRegs
      { 0x00000004, },	// sub_even
      { 0x00000004, },	// sub_odd
    },
    {	// IntRegs
      { 0x00000000, },	// sub_even
      { 0x00000000, },	// sub_odd
    },
    {	// DFPRegs
      { 0x00000000, },	// sub_even
      { 0x00000000, },	// sub_odd
    },
  };
  assert(A && B && "Missing regclass");
  --Idx;
  assert(Idx < 2 && "Bad subreg");
  const uint32_t *TV = Table[B->getID()][Idx];
  const uint32_t *SC = A->getSubClassMask();
  for (unsigned i = 0; i != 1; ++i)
    if (unsigned Common = TV[i] & SC[i])
      return getRegClass(32*i + CountTrailingZeros_32(Common));
  return 0;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &SparcGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 32},  	// FPRegs
    {1, 32},  	// IntRegs
    {2, 32},  	// DFPRegs
    {0, 0} };
  return RCWeightTable[RC->getID()];
}


// Get the number of dimensions of register pressure.
unsigned SparcGenRegisterInfo::getNumRegPressureSets() const {
  return 2;
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned SparcGenRegisterInfo::
getRegPressureSetLimit(unsigned Idx) const {
  static const unsigned PressureLimitTable[] = {
    32,  	// 0: FPRegs
    32,  	// 1: IntRegs
    0 };
  return PressureLimitTable[Idx];
}

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* SparcGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const int RCSetsTable[] = {
    0,  -1,  	// FPRegs
    1,  -1,  	// IntRegs
    0,  -1,  	// DFPRegs
    -1 };
  static const unsigned RCSetStartTable[] = {
    0,2,4,0 };
  unsigned SetListStart = RCSetStartTable[RC->getID()];
  return &RCSetsTable[SetListStart];
}

extern const MCRegisterDesc SparcRegDesc[];
extern const uint16_t SparcRegLists[];
extern const uint16_t *getSparcSubRegTable();
// SP Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair SPDwarfFlavour0Dwarf2L[];
extern const unsigned SPDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SPEHFlavour0Dwarf2L[];
extern const unsigned SPEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SPDwarfFlavour0L2Dwarf[];
extern const unsigned SPDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair SPEHFlavour0L2Dwarf[];
extern const unsigned SPEHFlavour0L2DwarfSize;

SparcGenRegisterInfo::
SparcGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour)
  : TargetRegisterInfo(SparcRegInfoDesc, RegisterClasses, RegisterClasses+3,
             SparcSubRegIndexTable) {
  InitMCRegisterInfo(SparcRegDesc, 84, RA,
                     SparcMCRegisterClasses, 3,
                     SparcRegLists,
                     getSparcSubRegTable(), 2);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(SPDwarfFlavour0Dwarf2L, SPDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(SPEHFlavour0Dwarf2L, SPEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(SPDwarfFlavour0L2Dwarf, SPDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(SPEHFlavour0L2Dwarf, SPEHFlavour0L2DwarfSize, true);
    break;
  }
}



} // End llvm namespace 
#endif // GET_REGINFO_TARGET_DESC

