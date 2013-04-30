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
extern const MCRegisterClass HexagonMCRegisterClasses[];

namespace Hexagon {
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
  FP = 17,
  GP = 18,
  LC0 = 19,
  LC1 = 20,
  LR = 21,
  P0 = 22,
  P1 = 23,
  P2 = 24,
  P3 = 25,
  PC = 26,
  R0 = 27,
  R1 = 28,
  R2 = 29,
  R3 = 30,
  R4 = 31,
  R5 = 32,
  R6 = 33,
  R7 = 34,
  R8 = 35,
  R9 = 36,
  R10 = 37,
  R11 = 38,
  R12 = 39,
  R13 = 40,
  R14 = 41,
  R15 = 42,
  R16 = 43,
  R17 = 44,
  R18 = 45,
  R19 = 46,
  R20 = 47,
  R21 = 48,
  R22 = 49,
  R23 = 50,
  R24 = 51,
  R25 = 52,
  R26 = 53,
  R27 = 54,
  R28 = 55,
  R29 = 56,
  R30 = 57,
  R31 = 58,
  SA0 = 59,
  SA1 = 60,
  SP = 61,
  NUM_TARGET_REGS 	// 62
};
}

// Register classes
namespace Hexagon {
enum {
  IntRegsRegClassID = 0,
  DoubleRegsRegClassID = 1,
  CRRegsRegClassID = 2,
  PredRegsRegClassID = 3
  };
}

// Subregister indices
namespace Hexagon {
enum {
  NoSubRegister,
  subreg_hireg,	// 1
  subreg_loreg,	// 2
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

extern const uint16_t HexagonRegLists[] = {
  /* 0 */ Hexagon::R0, Hexagon::D0, 0,
  /* 3 */ Hexagon::R1, Hexagon::D0, 0,
  /* 6 */ Hexagon::R2, Hexagon::D1, 0,
  /* 9 */ Hexagon::R3, Hexagon::D1, 0,
  /* 12 */ Hexagon::R4, Hexagon::D2, 0,
  /* 15 */ Hexagon::R5, Hexagon::D2, 0,
  /* 18 */ Hexagon::R6, Hexagon::D3, 0,
  /* 21 */ Hexagon::R7, Hexagon::D3, 0,
  /* 24 */ Hexagon::R8, Hexagon::D4, 0,
  /* 27 */ Hexagon::R9, Hexagon::D4, 0,
  /* 30 */ Hexagon::R10, Hexagon::D5, 0,
  /* 33 */ Hexagon::R11, Hexagon::D5, 0,
  /* 36 */ Hexagon::R12, Hexagon::D6, 0,
  /* 39 */ Hexagon::R13, Hexagon::D6, 0,
  /* 42 */ Hexagon::R14, Hexagon::D7, 0,
  /* 45 */ Hexagon::R15, Hexagon::D7, 0,
  /* 48 */ Hexagon::R16, Hexagon::D8, 0,
  /* 51 */ Hexagon::R17, Hexagon::D8, 0,
  /* 54 */ Hexagon::R18, Hexagon::D9, 0,
  /* 57 */ Hexagon::R19, Hexagon::D9, 0,
  /* 60 */ Hexagon::R20, Hexagon::D10, 0,
  /* 63 */ Hexagon::R21, Hexagon::D10, 0,
  /* 66 */ Hexagon::R22, Hexagon::D11, 0,
  /* 69 */ Hexagon::R23, Hexagon::D11, 0,
  /* 72 */ Hexagon::R24, Hexagon::D12, 0,
  /* 75 */ Hexagon::R25, Hexagon::D12, 0,
  /* 78 */ Hexagon::R26, Hexagon::D13, 0,
  /* 81 */ Hexagon::R27, Hexagon::D13, 0,
  /* 84 */ Hexagon::R28, Hexagon::D14, 0,
  /* 87 */ Hexagon::R29, Hexagon::SP, Hexagon::D14, 0,
  /* 91 */ Hexagon::R30, Hexagon::FP, Hexagon::D15, 0,
  /* 95 */ Hexagon::R31, Hexagon::LR, Hexagon::D15, 0,
  /* 99 */ Hexagon::GP, 0,
  /* 101 */ Hexagon::LC0, 0,
  /* 103 */ Hexagon::LC1, 0,
  /* 105 */ Hexagon::P0, 0,
  /* 107 */ Hexagon::P1, 0,
  /* 109 */ Hexagon::P2, 0,
  /* 111 */ Hexagon::P3, 0,
  /* 113 */ Hexagon::PC, 0,
  /* 115 */ Hexagon::D0, Hexagon::R0, Hexagon::R1, 0,
  /* 119 */ Hexagon::D1, Hexagon::R2, Hexagon::R3, 0,
  /* 123 */ Hexagon::D2, Hexagon::R4, Hexagon::R5, 0,
  /* 127 */ Hexagon::D3, Hexagon::R6, Hexagon::R7, 0,
  /* 131 */ Hexagon::D4, Hexagon::R8, Hexagon::R9, 0,
  /* 135 */ Hexagon::D5, Hexagon::R10, Hexagon::R11, 0,
  /* 139 */ Hexagon::D6, Hexagon::R12, Hexagon::R13, 0,
  /* 143 */ Hexagon::D7, Hexagon::R14, Hexagon::R15, 0,
  /* 147 */ Hexagon::D8, Hexagon::R16, Hexagon::R17, 0,
  /* 151 */ Hexagon::D9, Hexagon::R18, Hexagon::R19, 0,
  /* 155 */ Hexagon::D10, Hexagon::R20, Hexagon::R21, 0,
  /* 159 */ Hexagon::D11, Hexagon::R22, Hexagon::R23, 0,
  /* 163 */ Hexagon::D12, Hexagon::R24, Hexagon::R25, 0,
  /* 167 */ Hexagon::D13, Hexagon::R26, Hexagon::R27, 0,
  /* 171 */ Hexagon::SP, Hexagon::D14, Hexagon::R29, 0,
  /* 175 */ Hexagon::D14, Hexagon::SP, Hexagon::R28, Hexagon::R29, 0,
  /* 180 */ Hexagon::FP, Hexagon::D15, Hexagon::R30, 0,
  /* 184 */ Hexagon::LR, Hexagon::D15, Hexagon::R31, 0,
  /* 188 */ Hexagon::D15, Hexagon::FP, Hexagon::LR, Hexagon::R30, Hexagon::R31, 0,
  /* 194 */ Hexagon::SA0, 0,
  /* 196 */ Hexagon::SA1, 0,
};

extern const MCRegisterDesc HexagonRegDesc[] = { // Descriptors
  { "NOREG", 0, 0, 0 },
  { "D0", 115, 116, 2 },
  { "D1", 119, 120, 2 },
  { "D2", 123, 124, 2 },
  { "D3", 127, 128, 2 },
  { "D4", 131, 132, 2 },
  { "D5", 135, 136, 2 },
  { "D6", 139, 140, 2 },
  { "D7", 143, 144, 2 },
  { "D8", 147, 148, 2 },
  { "D9", 151, 152, 2 },
  { "D10", 155, 156, 2 },
  { "D11", 159, 160, 2 },
  { "D12", 163, 164, 2 },
  { "D13", 167, 168, 2 },
  { "D14", 175, 177, 2 },
  { "D15", 188, 191, 2 },
  { "FP", 180, 2, 2 },
  { "GP", 99, 2, 2 },
  { "LC0", 101, 2, 2 },
  { "LC1", 103, 2, 2 },
  { "LR", 184, 2, 2 },
  { "P0", 105, 2, 2 },
  { "P1", 107, 2, 2 },
  { "P2", 109, 2, 2 },
  { "P3", 111, 2, 2 },
  { "PC", 113, 2, 2 },
  { "R0", 0, 2, 1 },
  { "R1", 3, 2, 1 },
  { "R2", 6, 2, 7 },
  { "R3", 9, 2, 7 },
  { "R4", 12, 2, 13 },
  { "R5", 15, 2, 13 },
  { "R6", 18, 2, 19 },
  { "R7", 21, 2, 19 },
  { "R8", 24, 2, 25 },
  { "R9", 27, 2, 25 },
  { "R10", 30, 2, 31 },
  { "R11", 33, 2, 31 },
  { "R12", 36, 2, 37 },
  { "R13", 39, 2, 37 },
  { "R14", 42, 2, 43 },
  { "R15", 45, 2, 43 },
  { "R16", 48, 2, 49 },
  { "R17", 51, 2, 49 },
  { "R18", 54, 2, 55 },
  { "R19", 57, 2, 55 },
  { "R20", 60, 2, 61 },
  { "R21", 63, 2, 61 },
  { "R22", 66, 2, 67 },
  { "R23", 69, 2, 67 },
  { "R24", 72, 2, 73 },
  { "R25", 75, 2, 73 },
  { "R26", 78, 2, 79 },
  { "R27", 81, 2, 79 },
  { "R28", 84, 2, 85 },
  { "R29", 87, 2, 85 },
  { "R30", 91, 2, 93 },
  { "R31", 95, 2, 93 },
  { "SA0", 194, 2, 2 },
  { "SA1", 196, 2, 2 },
  { "SP", 171, 2, 2 },
};

namespace {     // Register classes...
  // IntRegs Register Class...
  const uint16_t IntRegs[] = {
    Hexagon::R0, Hexagon::R1, Hexagon::R2, Hexagon::R3, Hexagon::R4, Hexagon::R5, Hexagon::R6, Hexagon::R7, Hexagon::R8, Hexagon::R9, Hexagon::R12, Hexagon::R13, Hexagon::R14, Hexagon::R15, Hexagon::R16, Hexagon::R17, Hexagon::R18, Hexagon::R19, Hexagon::R20, Hexagon::R21, Hexagon::R22, Hexagon::R23, Hexagon::R24, Hexagon::R25, Hexagon::R26, Hexagon::R27, Hexagon::R28, Hexagon::R10, Hexagon::R11, Hexagon::R29, Hexagon::R30, Hexagon::R31, 
  };

  // IntRegs Bit set.
  const uint8_t IntRegsBits[] = {
    0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07, 
  };

  // DoubleRegs Register Class...
  const uint16_t DoubleRegs[] = {
    Hexagon::D0, Hexagon::D1, Hexagon::D2, Hexagon::D3, Hexagon::D4, Hexagon::D6, Hexagon::D7, Hexagon::D8, Hexagon::D9, Hexagon::D10, Hexagon::D11, Hexagon::D12, Hexagon::D13, Hexagon::D5, Hexagon::D14, Hexagon::D15, 
  };

  // DoubleRegs Bit set.
  const uint8_t DoubleRegsBits[] = {
    0xfe, 0xff, 0x01, 
  };

  // CRRegs Register Class...
  const uint16_t CRRegs[] = {
    Hexagon::LC0, Hexagon::LC1, Hexagon::SA0, Hexagon::SA1, Hexagon::PC, Hexagon::GP, 
  };

  // CRRegs Bit set.
  const uint8_t CRRegsBits[] = {
    0x00, 0x00, 0x1c, 0x04, 0x00, 0x00, 0x00, 0x18, 
  };

  // PredRegs Register Class...
  const uint16_t PredRegs[] = {
    Hexagon::P0, Hexagon::P1, Hexagon::P2, Hexagon::P3, 
  };

  // PredRegs Bit set.
  const uint8_t PredRegsBits[] = {
    0x00, 0x00, 0xc0, 0x03, 
  };

}

extern const MCRegisterClass HexagonMCRegisterClasses[] = {
  { "IntRegs", IntRegs, IntRegsBits, 32, sizeof(IntRegsBits), Hexagon::IntRegsRegClassID, 4, 4, 1, 1 },
  { "DoubleRegs", DoubleRegs, DoubleRegsBits, 16, sizeof(DoubleRegsBits), Hexagon::DoubleRegsRegClassID, 8, 8, 1, 1 },
  { "CRRegs", CRRegs, CRRegsBits, 6, sizeof(CRRegsBits), Hexagon::CRRegsRegClassID, 4, 4, 1, 1 },
  { "PredRegs", PredRegs, PredRegsBits, 4, sizeof(PredRegsBits), Hexagon::PredRegsRegClassID, 4, 4, 1, 1 },
};

const uint16_t HexagonSubRegTable[][2] = {
  /* D0 */
  {Hexagon::R1, Hexagon::R0},
  /* D1 */
  {Hexagon::R3, Hexagon::R2},
  /* D2 */
  {Hexagon::R5, Hexagon::R4},
  /* D3 */
  {Hexagon::R7, Hexagon::R6},
  /* D4 */
  {Hexagon::R9, Hexagon::R8},
  /* D5 */
  {Hexagon::R11, Hexagon::R10},
  /* D6 */
  {Hexagon::R13, Hexagon::R12},
  /* D7 */
  {Hexagon::R15, Hexagon::R14},
  /* D8 */
  {Hexagon::R17, Hexagon::R16},
  /* D9 */
  {Hexagon::R19, Hexagon::R18},
  /* D10 */
  {Hexagon::R21, Hexagon::R20},
  /* D11 */
  {Hexagon::R23, Hexagon::R22},
  /* D12 */
  {Hexagon::R25, Hexagon::R24},
  /* D13 */
  {Hexagon::R27, Hexagon::R26},
  /* D14 */
  {Hexagon::R29, Hexagon::R28},
  /* D15 */
  {Hexagon::R31, Hexagon::R30},
  /* FP */
  {0},
  /* GP */
  {0},
  /* LC0 */
  {0},
  /* LC1 */
  {0},
  /* LR */
  {0},
  /* P0 */
  {0},
  /* P1 */
  {0},
  /* P2 */
  {0},
  /* P3 */
  {0},
  /* PC */
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
  /* SA0 */
  {0},
  /* SA1 */
  {0},
  /* SP */
  {0},
};

const uint16_t *getHexagonSubRegTable() {
  return (const uint16_t *)HexagonSubRegTable;
}

// Hexagon Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair HexagonDwarfFlavour0Dwarf2L[] = {
  { 0U, Hexagon::R0 },
  { 1U, Hexagon::R1 },
  { 2U, Hexagon::R2 },
  { 3U, Hexagon::R3 },
  { 4U, Hexagon::R4 },
  { 5U, Hexagon::R5 },
  { 6U, Hexagon::R6 },
  { 7U, Hexagon::R7 },
  { 8U, Hexagon::R8 },
  { 9U, Hexagon::R9 },
  { 10U, Hexagon::R10 },
  { 11U, Hexagon::R11 },
  { 12U, Hexagon::R12 },
  { 13U, Hexagon::R13 },
  { 14U, Hexagon::R14 },
  { 15U, Hexagon::R15 },
  { 16U, Hexagon::R16 },
  { 17U, Hexagon::R17 },
  { 18U, Hexagon::R18 },
  { 19U, Hexagon::R19 },
  { 20U, Hexagon::R20 },
  { 21U, Hexagon::R21 },
  { 22U, Hexagon::R22 },
  { 23U, Hexagon::R23 },
  { 24U, Hexagon::R24 },
  { 25U, Hexagon::R25 },
  { 26U, Hexagon::R26 },
  { 27U, Hexagon::R27 },
  { 28U, Hexagon::R28 },
  { 29U, Hexagon::SP },
  { 30U, Hexagon::R30 },
  { 31U, Hexagon::R31 },
  { 32U, Hexagon::PC },
  { 33U, Hexagon::GP },
  { 34U, Hexagon::D1 },
  { 36U, Hexagon::D2 },
  { 38U, Hexagon::D3 },
  { 40U, Hexagon::D4 },
  { 42U, Hexagon::D5 },
  { 44U, Hexagon::D6 },
  { 46U, Hexagon::D7 },
  { 48U, Hexagon::D8 },
  { 50U, Hexagon::D9 },
  { 52U, Hexagon::D10 },
  { 54U, Hexagon::D11 },
  { 56U, Hexagon::D12 },
  { 58U, Hexagon::D13 },
  { 60U, Hexagon::D14 },
  { 62U, Hexagon::D15 },
  { 63U, Hexagon::P0 },
  { 64U, Hexagon::P1 },
  { 65U, Hexagon::P2 },
  { 66U, Hexagon::P3 },
  { 67U, Hexagon::SA0 },
  { 68U, Hexagon::LC0 },
  { 69U, Hexagon::SA1 },
  { 70U, Hexagon::LC1 },
};
extern const unsigned HexagonDwarfFlavour0Dwarf2LSize = sizeof(HexagonDwarfFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonEHFlavour0Dwarf2L[] = {
  { 0U, Hexagon::R0 },
  { 1U, Hexagon::R1 },
  { 2U, Hexagon::R2 },
  { 3U, Hexagon::R3 },
  { 4U, Hexagon::R4 },
  { 5U, Hexagon::R5 },
  { 6U, Hexagon::R6 },
  { 7U, Hexagon::R7 },
  { 8U, Hexagon::R8 },
  { 9U, Hexagon::R9 },
  { 10U, Hexagon::R10 },
  { 11U, Hexagon::R11 },
  { 12U, Hexagon::R12 },
  { 13U, Hexagon::R13 },
  { 14U, Hexagon::R14 },
  { 15U, Hexagon::R15 },
  { 16U, Hexagon::R16 },
  { 17U, Hexagon::R17 },
  { 18U, Hexagon::R18 },
  { 19U, Hexagon::R19 },
  { 20U, Hexagon::R20 },
  { 21U, Hexagon::R21 },
  { 22U, Hexagon::R22 },
  { 23U, Hexagon::R23 },
  { 24U, Hexagon::R24 },
  { 25U, Hexagon::R25 },
  { 26U, Hexagon::R26 },
  { 27U, Hexagon::R27 },
  { 28U, Hexagon::R28 },
  { 29U, Hexagon::SP },
  { 30U, Hexagon::R30 },
  { 31U, Hexagon::R31 },
  { 32U, Hexagon::PC },
  { 33U, Hexagon::GP },
  { 34U, Hexagon::D1 },
  { 36U, Hexagon::D2 },
  { 38U, Hexagon::D3 },
  { 40U, Hexagon::D4 },
  { 42U, Hexagon::D5 },
  { 44U, Hexagon::D6 },
  { 46U, Hexagon::D7 },
  { 48U, Hexagon::D8 },
  { 50U, Hexagon::D9 },
  { 52U, Hexagon::D10 },
  { 54U, Hexagon::D11 },
  { 56U, Hexagon::D12 },
  { 58U, Hexagon::D13 },
  { 60U, Hexagon::D14 },
  { 62U, Hexagon::D15 },
  { 63U, Hexagon::P0 },
  { 64U, Hexagon::P1 },
  { 65U, Hexagon::P2 },
  { 66U, Hexagon::P3 },
  { 67U, Hexagon::SA0 },
  { 68U, Hexagon::LC0 },
  { 69U, Hexagon::SA1 },
  { 70U, Hexagon::LC1 },
};
extern const unsigned HexagonEHFlavour0Dwarf2LSize = sizeof(HexagonEHFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonDwarfFlavour0L2Dwarf[] = {
  { Hexagon::D0, 32U },
  { Hexagon::D1, 34U },
  { Hexagon::D2, 36U },
  { Hexagon::D3, 38U },
  { Hexagon::D4, 40U },
  { Hexagon::D5, 42U },
  { Hexagon::D6, 44U },
  { Hexagon::D7, 46U },
  { Hexagon::D8, 48U },
  { Hexagon::D9, 50U },
  { Hexagon::D10, 52U },
  { Hexagon::D11, 54U },
  { Hexagon::D12, 56U },
  { Hexagon::D13, 58U },
  { Hexagon::D14, 60U },
  { Hexagon::D15, 62U },
  { Hexagon::FP, 30U },
  { Hexagon::GP, 33U },
  { Hexagon::LC0, 68U },
  { Hexagon::LC1, 70U },
  { Hexagon::LR, 31U },
  { Hexagon::P0, 63U },
  { Hexagon::P1, 64U },
  { Hexagon::P2, 65U },
  { Hexagon::P3, 66U },
  { Hexagon::PC, 32U },
  { Hexagon::R0, 0U },
  { Hexagon::R1, 1U },
  { Hexagon::R2, 2U },
  { Hexagon::R3, 3U },
  { Hexagon::R4, 4U },
  { Hexagon::R5, 5U },
  { Hexagon::R6, 6U },
  { Hexagon::R7, 7U },
  { Hexagon::R8, 8U },
  { Hexagon::R9, 9U },
  { Hexagon::R10, 10U },
  { Hexagon::R11, 11U },
  { Hexagon::R12, 12U },
  { Hexagon::R13, 13U },
  { Hexagon::R14, 14U },
  { Hexagon::R15, 15U },
  { Hexagon::R16, 16U },
  { Hexagon::R17, 17U },
  { Hexagon::R18, 18U },
  { Hexagon::R19, 19U },
  { Hexagon::R20, 20U },
  { Hexagon::R21, 21U },
  { Hexagon::R22, 22U },
  { Hexagon::R23, 23U },
  { Hexagon::R24, 24U },
  { Hexagon::R25, 25U },
  { Hexagon::R26, 26U },
  { Hexagon::R27, 27U },
  { Hexagon::R28, 28U },
  { Hexagon::R29, 29U },
  { Hexagon::R30, 30U },
  { Hexagon::R31, 31U },
  { Hexagon::SA0, 67U },
  { Hexagon::SA1, 69U },
  { Hexagon::SP, 29U },
};
extern const unsigned HexagonDwarfFlavour0L2DwarfSize = sizeof(HexagonDwarfFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonEHFlavour0L2Dwarf[] = {
  { Hexagon::D0, 32U },
  { Hexagon::D1, 34U },
  { Hexagon::D2, 36U },
  { Hexagon::D3, 38U },
  { Hexagon::D4, 40U },
  { Hexagon::D5, 42U },
  { Hexagon::D6, 44U },
  { Hexagon::D7, 46U },
  { Hexagon::D8, 48U },
  { Hexagon::D9, 50U },
  { Hexagon::D10, 52U },
  { Hexagon::D11, 54U },
  { Hexagon::D12, 56U },
  { Hexagon::D13, 58U },
  { Hexagon::D14, 60U },
  { Hexagon::D15, 62U },
  { Hexagon::FP, 30U },
  { Hexagon::GP, 33U },
  { Hexagon::LC0, 68U },
  { Hexagon::LC1, 70U },
  { Hexagon::LR, 31U },
  { Hexagon::P0, 63U },
  { Hexagon::P1, 64U },
  { Hexagon::P2, 65U },
  { Hexagon::P3, 66U },
  { Hexagon::PC, 32U },
  { Hexagon::R0, 0U },
  { Hexagon::R1, 1U },
  { Hexagon::R2, 2U },
  { Hexagon::R3, 3U },
  { Hexagon::R4, 4U },
  { Hexagon::R5, 5U },
  { Hexagon::R6, 6U },
  { Hexagon::R7, 7U },
  { Hexagon::R8, 8U },
  { Hexagon::R9, 9U },
  { Hexagon::R10, 10U },
  { Hexagon::R11, 11U },
  { Hexagon::R12, 12U },
  { Hexagon::R13, 13U },
  { Hexagon::R14, 14U },
  { Hexagon::R15, 15U },
  { Hexagon::R16, 16U },
  { Hexagon::R17, 17U },
  { Hexagon::R18, 18U },
  { Hexagon::R19, 19U },
  { Hexagon::R20, 20U },
  { Hexagon::R21, 21U },
  { Hexagon::R22, 22U },
  { Hexagon::R23, 23U },
  { Hexagon::R24, 24U },
  { Hexagon::R25, 25U },
  { Hexagon::R26, 26U },
  { Hexagon::R27, 27U },
  { Hexagon::R28, 28U },
  { Hexagon::R29, 29U },
  { Hexagon::R30, 30U },
  { Hexagon::R31, 31U },
  { Hexagon::SA0, 67U },
  { Hexagon::SA1, 69U },
  { Hexagon::SP, 29U },
};
extern const unsigned HexagonEHFlavour0L2DwarfSize = sizeof(HexagonEHFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

static inline void InitHexagonMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0) {
  RI->InitMCRegisterInfo(HexagonRegDesc, 62, RA, HexagonMCRegisterClasses, 4, HexagonRegLists, (uint16_t*)HexagonSubRegTable, 2);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(HexagonDwarfFlavour0Dwarf2L, HexagonDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(HexagonEHFlavour0Dwarf2L, HexagonEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(HexagonDwarfFlavour0L2Dwarf, HexagonDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(HexagonEHFlavour0L2Dwarf, HexagonEHFlavour0L2DwarfSize, true);
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

struct HexagonGenRegisterInfo : public TargetRegisterInfo {
  explicit HexagonGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0);
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

namespace Hexagon { // Register classes
  extern const TargetRegisterClass IntRegsRegClass;
  static const TargetRegisterClass * const IntRegsRegisterClass = &IntRegsRegClass;
  extern const TargetRegisterClass DoubleRegsRegClass;
  static const TargetRegisterClass * const DoubleRegsRegisterClass = &DoubleRegsRegClass;
  extern const TargetRegisterClass CRRegsRegClass;
  static const TargetRegisterClass * const CRRegsRegisterClass = &CRRegsRegClass;
  extern const TargetRegisterClass PredRegsRegClass;
  static const TargetRegisterClass * const PredRegsRegisterClass = &PredRegsRegClass;
} // end of namespace Hexagon

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

extern const MCRegisterClass HexagonMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i1, MVT::Other,
  /* 2 */ MVT::i32, MVT::Other,
  /* 4 */ MVT::i64, MVT::Other,
};

static const TargetRegisterClass *const NullRegClasses[] = { NULL };

// IntRegs Super-register Classes...
static const TargetRegisterClass *const IntRegsSuperRegClasses[] = {
  &Hexagon::DoubleRegsRegClass, NULL
};

// DoubleRegs Super-register Classes...
static const TargetRegisterClass *const DoubleRegsSuperRegClasses[] = {
  NULL
};

// CRRegs Super-register Classes...
static const TargetRegisterClass *const CRRegsSuperRegClasses[] = {
  NULL
};

// PredRegs Super-register Classes...
static const TargetRegisterClass *const PredRegsSuperRegClasses[] = {
  NULL
};

static const uint32_t IntRegsSubclassMask[] = {
  0x00000001, 
};

static const uint32_t DoubleRegsSubclassMask[] = {
  0x00000002, 
};

static const uint32_t CRRegsSubclassMask[] = {
  0x00000004, 
};

static const uint32_t PredRegsSubclassMask[] = {
  0x00000008, 
};

namespace Hexagon {   // Register class instances
  extern const TargetRegisterClass IntRegsRegClass = {
    &HexagonMCRegisterClasses[IntRegsRegClassID],
    VTLists + 2,
    IntRegsSubclassMask,
    NullRegClasses,
    IntRegsSuperRegClasses,
    0
  };

  extern const TargetRegisterClass DoubleRegsRegClass = {
    &HexagonMCRegisterClasses[DoubleRegsRegClassID],
    VTLists + 4,
    DoubleRegsSubclassMask,
    NullRegClasses,
    DoubleRegsSuperRegClasses,
    0
  };

  extern const TargetRegisterClass CRRegsRegClass = {
    &HexagonMCRegisterClasses[CRRegsRegClassID],
    VTLists + 2,
    CRRegsSubclassMask,
    NullRegClasses,
    CRRegsSuperRegClasses,
    0
  };

  extern const TargetRegisterClass PredRegsRegClass = {
    &HexagonMCRegisterClasses[PredRegsRegClassID],
    VTLists + 0,
    PredRegsSubclassMask,
    NullRegClasses,
    PredRegsSuperRegClasses,
    0
  };

}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &Hexagon::IntRegsRegClass,
    &Hexagon::DoubleRegsRegClass,
    &Hexagon::CRRegsRegClass,
    &Hexagon::PredRegsRegClass,
  };
}

static const TargetRegisterInfoDesc HexagonRegInfoDesc[] = { // Extra Descriptors
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
  { 0, 0 },
};

static const char *const HexagonSubRegIndexTable[] = { "subreg_hireg", "subreg_loreg" };


unsigned HexagonGenRegisterInfo::composeSubRegIndices(unsigned IdxA, unsigned IdxB) const {
  switch (IdxA) {
  default:
    return IdxB;
  }
}

const TargetRegisterClass *HexagonGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[4][2] = {
    {	// IntRegs
      0,	// subreg_hireg
      0,	// subreg_loreg
    },
    {	// DoubleRegs
      2,	// subreg_hireg -> DoubleRegs
      2,	// subreg_loreg -> DoubleRegs
    },
    {	// CRRegs
      0,	// subreg_hireg
      0,	// subreg_loreg
    },
    {	// PredRegs
      0,	// subreg_hireg
      0,	// subreg_loreg
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 2 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : 0;
}

const TargetRegisterClass *HexagonGenRegisterInfo::getMatchingSuperRegClass(const TargetRegisterClass *A, const TargetRegisterClass *B, unsigned Idx) const {
  static const uint32_t Table[4][2][1] = {
    {	// IntRegs
      { 0x00000002, },	// subreg_hireg
      { 0x00000002, },	// subreg_loreg
    },
    {	// DoubleRegs
      { 0x00000000, },	// subreg_hireg
      { 0x00000000, },	// subreg_loreg
    },
    {	// CRRegs
      { 0x00000000, },	// subreg_hireg
      { 0x00000000, },	// subreg_loreg
    },
    {	// PredRegs
      { 0x00000000, },	// subreg_hireg
      { 0x00000000, },	// subreg_loreg
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
const RegClassWeight &HexagonGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 32},  	// IntRegs
    {2, 32},  	// DoubleRegs
    {1, 6},  	// CRRegs
    {1, 4},  	// PredRegs
    {0, 0} };
  return RCWeightTable[RC->getID()];
}


// Get the number of dimensions of register pressure.
unsigned HexagonGenRegisterInfo::getNumRegPressureSets() const {
  return 3;
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned HexagonGenRegisterInfo::
getRegPressureSetLimit(unsigned Idx) const {
  static const unsigned PressureLimitTable[] = {
    32,  	// 0: IntRegs
    6,  	// 1: CRRegs
    4,  	// 2: PredRegs
    0 };
  return PressureLimitTable[Idx];
}

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* HexagonGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const int RCSetsTable[] = {
    0,  -1,  	// IntRegs
    0,  -1,  	// DoubleRegs
    1,  -1,  	// CRRegs
    2,  -1,  	// PredRegs
    -1 };
  static const unsigned RCSetStartTable[] = {
    0,2,4,6,0 };
  unsigned SetListStart = RCSetStartTable[RC->getID()];
  return &RCSetsTable[SetListStart];
}

extern const MCRegisterDesc HexagonRegDesc[];
extern const uint16_t HexagonRegLists[];
extern const uint16_t *getHexagonSubRegTable();
// Hexagon Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair HexagonDwarfFlavour0Dwarf2L[];
extern const unsigned HexagonDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonEHFlavour0Dwarf2L[];
extern const unsigned HexagonEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonDwarfFlavour0L2Dwarf[];
extern const unsigned HexagonDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonEHFlavour0L2Dwarf[];
extern const unsigned HexagonEHFlavour0L2DwarfSize;

HexagonGenRegisterInfo::
HexagonGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour)
  : TargetRegisterInfo(HexagonRegInfoDesc, RegisterClasses, RegisterClasses+4,
             HexagonSubRegIndexTable) {
  InitMCRegisterInfo(HexagonRegDesc, 62, RA,
                     HexagonMCRegisterClasses, 4,
                     HexagonRegLists,
                     getHexagonSubRegTable(), 2);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(HexagonDwarfFlavour0Dwarf2L, HexagonDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(HexagonEHFlavour0Dwarf2L, HexagonEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(HexagonDwarfFlavour0L2Dwarf, HexagonDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(HexagonEHFlavour0L2Dwarf, HexagonEHFlavour0L2DwarfSize, true);
    break;
  }
}



} // End llvm namespace 
#endif // GET_REGINFO_TARGET_DESC

