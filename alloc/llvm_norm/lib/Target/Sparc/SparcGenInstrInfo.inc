//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Target Instruction Enum Values
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//


#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace SP {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    PROLOG_LABEL	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    BUNDLE	= 14,
    ADDCCri	= 15,
    ADDCCrr	= 16,
    ADDXri	= 17,
    ADDXrr	= 18,
    ADDri	= 19,
    ADDrr	= 20,
    ADJCALLSTACKDOWN	= 21,
    ADJCALLSTACKUP	= 22,
    ANDNri	= 23,
    ANDNrr	= 24,
    ANDri	= 25,
    ANDrr	= 26,
    BA	= 27,
    BCOND	= 28,
    CALL	= 29,
    FABSD	= 30,
    FABSS	= 31,
    FADDD	= 32,
    FADDS	= 33,
    FBCOND	= 34,
    FCMPD	= 35,
    FCMPS	= 36,
    FDIVD	= 37,
    FDIVS	= 38,
    FDTOI	= 39,
    FDTOS	= 40,
    FITOD	= 41,
    FITOS	= 42,
    FLUSHW	= 43,
    FMOVD	= 44,
    FMOVD_FCC	= 45,
    FMOVD_ICC	= 46,
    FMOVS	= 47,
    FMOVS_FCC	= 48,
    FMOVS_ICC	= 49,
    FMULD	= 50,
    FMULS	= 51,
    FNEGD	= 52,
    FNEGS	= 53,
    FSMULD	= 54,
    FSQRTD	= 55,
    FSQRTS	= 56,
    FSTOD	= 57,
    FSTOI	= 58,
    FSUBD	= 59,
    FSUBS	= 60,
    FpABSD	= 61,
    FpMOVD	= 62,
    FpNEGD	= 63,
    GETPCX	= 64,
    JMPLri	= 65,
    JMPLrr	= 66,
    LDDFri	= 67,
    LDDFrr	= 68,
    LDFri	= 69,
    LDFrr	= 70,
    LDSBri	= 71,
    LDSBrr	= 72,
    LDSHri	= 73,
    LDSHrr	= 74,
    LDUBri	= 75,
    LDUBrr	= 76,
    LDUHri	= 77,
    LDUHrr	= 78,
    LDri	= 79,
    LDrr	= 80,
    LEA_ADDri	= 81,
    MOVFCCri	= 82,
    MOVFCCrr	= 83,
    MOVICCri	= 84,
    MOVICCrr	= 85,
    NOP	= 86,
    ORNri	= 87,
    ORNrr	= 88,
    ORri	= 89,
    ORrr	= 90,
    POPCrr	= 91,
    RDY	= 92,
    RESTOREri	= 93,
    RESTORErr	= 94,
    RET	= 95,
    RETL	= 96,
    SAVEri	= 97,
    SAVErr	= 98,
    SDIVri	= 99,
    SDIVrr	= 100,
    SELECT_CC_DFP_FCC	= 101,
    SELECT_CC_DFP_ICC	= 102,
    SELECT_CC_FP_FCC	= 103,
    SELECT_CC_FP_ICC	= 104,
    SELECT_CC_Int_FCC	= 105,
    SELECT_CC_Int_ICC	= 106,
    SETHIi	= 107,
    SLLri	= 108,
    SLLrr	= 109,
    SMULri	= 110,
    SMULrr	= 111,
    SRAri	= 112,
    SRArr	= 113,
    SRLri	= 114,
    SRLrr	= 115,
    STBri	= 116,
    STBrr	= 117,
    STDFri	= 118,
    STDFrr	= 119,
    STFri	= 120,
    STFrr	= 121,
    STHri	= 122,
    STHrr	= 123,
    STri	= 124,
    STrr	= 125,
    SUBCCri	= 126,
    SUBCCrr	= 127,
    SUBXCCrr	= 128,
    SUBXri	= 129,
    SUBXrr	= 130,
    SUBri	= 131,
    SUBrr	= 132,
    TA3	= 133,
    UDIVri	= 134,
    UDIVrr	= 135,
    UMULri	= 136,
    UMULrr	= 137,
    UNIMP	= 138,
    WRYri	= 139,
    WRYrr	= 140,
    XNORri	= 141,
    XNORrr	= 142,
    XORri	= 143,
    XORrr	= 144,
    INSTRUCTION_LIST_END = 145
  };
}
} // End llvm namespace 
#endif // GET_INSTRINFO_ENUM

//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Target Instruction Descriptors
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//


#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const uint16_t ImplicitList1[] = { SP::ICC, 0 };
static const uint16_t ImplicitList2[] = { SP::O6, 0 };
static const uint16_t ImplicitList3[] = { SP::O0, SP::O1, SP::O2, SP::O3, SP::O4, SP::O5, SP::O7, SP::G1, SP::G2, SP::G3, SP::G4, SP::G5, SP::G6, SP::G7, SP::D0, SP::D1, SP::D2, SP::D3, SP::D4, SP::D5, SP::D6, SP::D7, SP::D8, SP::D9, SP::D10, SP::D11, SP::D12, SP::D13, SP::D14, SP::D15, SP::ICC, SP::FCC, SP::Y, 0 };
static const uint16_t ImplicitList4[] = { SP::FCC, 0 };
static const uint16_t ImplicitList5[] = { SP::O7, 0 };
static const uint16_t ImplicitList6[] = { SP::Y, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc SparcInsts[] = {
  { 0,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #2 = PROLOG_LABEL
  { 3,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #5 = KILL
  { 6,	3,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo3 },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo4 },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo6 },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo3 },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #11 = DBG_VALUE
  { 12,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo7 },  // Inst #13 = COPY
  { 14,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #14 = BUNDLE
  { 15,	3,	1,	0,	0,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #15 = ADDCCri
  { 16,	3,	1,	0,	0,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #16 = ADDCCrr
  { 17,	3,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo8 },  // Inst #17 = ADDXri
  { 18,	3,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo9 },  // Inst #18 = ADDXrr
  { 19,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #19 = ADDri
  { 20,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #20 = ADDrr
  { 21,	1,	0,	0,	0,	0, 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo2 },  // Inst #21 = ADJCALLSTACKDOWN
  { 22,	2,	0,	0,	0,	0, 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo10 },  // Inst #22 = ADJCALLSTACKUP
  { 23,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #23 = ANDNri
  { 24,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #24 = ANDNrr
  { 25,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #25 = ANDri
  { 26,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #26 = ANDrr
  { 27,	1,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #27 = BA
  { 28,	2,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, ImplicitList1, NULL, OperandInfo7 },  // Inst #28 = BCOND
  { 29,	1,	0,	0,	0,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo5 },  // Inst #29 = CALL
  { 30,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #30 = FABSD
  { 31,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #31 = FABSS
  { 32,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #32 = FADDD
  { 33,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #33 = FADDS
  { 34,	2,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, ImplicitList4, NULL, OperandInfo7 },  // Inst #34 = FBCOND
  { 35,	2,	0,	0,	0,	0, 0x0ULL, NULL, ImplicitList4, OperandInfo11 },  // Inst #35 = FCMPD
  { 36,	2,	0,	0,	0,	0, 0x0ULL, NULL, ImplicitList4, OperandInfo12 },  // Inst #36 = FCMPS
  { 37,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #37 = FDIVD
  { 38,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #38 = FDIVS
  { 39,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #39 = FDTOI
  { 40,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #40 = FDTOS
  { 41,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #41 = FITOD
  { 42,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #42 = FITOS
  { 43,	0,	0,	0,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #43 = FLUSHW
  { 44,	2,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #44 = FMOVD
  { 45,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList4, NULL, OperandInfo17 },  // Inst #45 = FMOVD_FCC
  { 46,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo17 },  // Inst #46 = FMOVD_ICC
  { 47,	2,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #47 = FMOVS
  { 48,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList4, NULL, OperandInfo18 },  // Inst #48 = FMOVS_FCC
  { 49,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo18 },  // Inst #49 = FMOVS_ICC
  { 50,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #50 = FMULD
  { 51,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #51 = FMULS
  { 52,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #52 = FNEGD
  { 53,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #53 = FNEGS
  { 54,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #54 = FSMULD
  { 55,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #55 = FSQRTD
  { 56,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #56 = FSQRTS
  { 57,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #57 = FSTOD
  { 58,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #58 = FSTOI
  { 59,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #59 = FSUBD
  { 60,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #60 = FSUBS
  { 61,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #61 = FpABSD
  { 62,	2,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #62 = FpMOVD
  { 63,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #63 = FpNEGD
  { 64,	1,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList5, OperandInfo5 },  // Inst #64 = GETPCX
  { 65,	2,	0,	0,	0,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo20 },  // Inst #65 = JMPLri
  { 66,	2,	0,	0,	0,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo21 },  // Inst #66 = JMPLrr
  { 67,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #67 = LDDFri
  { 68,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #68 = LDDFrr
  { 69,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #69 = LDFri
  { 70,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #70 = LDFrr
  { 71,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #71 = LDSBri
  { 72,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #72 = LDSBrr
  { 73,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #73 = LDSHri
  { 74,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #74 = LDSHrr
  { 75,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #75 = LDUBri
  { 76,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #76 = LDUBrr
  { 77,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #77 = LDUHri
  { 78,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #78 = LDUHrr
  { 79,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #79 = LDri
  { 80,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #80 = LDrr
  { 81,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #81 = LEA_ADDri
  { 82,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList4, NULL, OperandInfo28 },  // Inst #82 = MOVFCCri
  { 83,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList4, NULL, OperandInfo29 },  // Inst #83 = MOVFCCrr
  { 84,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo28 },  // Inst #84 = MOVICCri
  { 85,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo29 },  // Inst #85 = MOVICCrr
  { 86,	0,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #86 = NOP
  { 87,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #87 = ORNri
  { 88,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #88 = ORNrr
  { 89,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #89 = ORri
  { 90,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #90 = ORrr
  { 91,	2,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo30 },  // Inst #91 = POPCrr
  { 92,	1,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList6, NULL, OperandInfo31 },  // Inst #92 = RDY
  { 93,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #93 = RESTOREri
  { 94,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #94 = RESTORErr
  { 95,	1,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #95 = RET
  { 96,	1,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #96 = RETL
  { 97,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #97 = SAVEri
  { 98,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #98 = SAVErr
  { 99,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo8 },  // Inst #99 = SDIVri
  { 100,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo9 },  // Inst #100 = SDIVrr
  { 101,	4,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, NULL, OperandInfo32 },  // Inst #101 = SELECT_CC_DFP_FCC
  { 102,	4,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, NULL, OperandInfo32 },  // Inst #102 = SELECT_CC_DFP_ICC
  { 103,	4,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, NULL, OperandInfo33 },  // Inst #103 = SELECT_CC_FP_FCC
  { 104,	4,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, NULL, OperandInfo33 },  // Inst #104 = SELECT_CC_FP_ICC
  { 105,	4,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, NULL, OperandInfo34 },  // Inst #105 = SELECT_CC_Int_FCC
  { 106,	4,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, NULL, OperandInfo34 },  // Inst #106 = SELECT_CC_Int_ICC
  { 107,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo35 },  // Inst #107 = SETHIi
  { 108,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #108 = SLLri
  { 109,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #109 = SLLrr
  { 110,	3,	1,	0,	0,	0, 0x0ULL, NULL, ImplicitList6, OperandInfo8 },  // Inst #110 = SMULri
  { 111,	3,	1,	0,	0,	0, 0x0ULL, NULL, ImplicitList6, OperandInfo9 },  // Inst #111 = SMULrr
  { 112,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #112 = SRAri
  { 113,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #113 = SRArr
  { 114,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #114 = SRLri
  { 115,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #115 = SRLrr
  { 116,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #116 = STBri
  { 117,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo37 },  // Inst #117 = STBrr
  { 118,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo38 },  // Inst #118 = STDFri
  { 119,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo39 },  // Inst #119 = STDFrr
  { 120,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo40 },  // Inst #120 = STFri
  { 121,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #121 = STFrr
  { 122,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #122 = STHri
  { 123,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo37 },  // Inst #123 = STHrr
  { 124,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #124 = STri
  { 125,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo37 },  // Inst #125 = STrr
  { 126,	3,	1,	0,	0,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #126 = SUBCCri
  { 127,	3,	1,	0,	0,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #127 = SUBCCrr
  { 128,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo9 },  // Inst #128 = SUBXCCrr
  { 129,	3,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo8 },  // Inst #129 = SUBXri
  { 130,	3,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo9 },  // Inst #130 = SUBXrr
  { 131,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #131 = SUBri
  { 132,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #132 = SUBrr
  { 133,	0,	0,	0,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #133 = TA3
  { 134,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo8 },  // Inst #134 = UDIVri
  { 135,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo9 },  // Inst #135 = UDIVrr
  { 136,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo8 },  // Inst #136 = UMULri
  { 137,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo9 },  // Inst #137 = UMULrr
  { 138,	1,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #138 = UNIMP
  { 139,	2,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo35 },  // Inst #139 = WRYri
  { 140,	2,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList6, OperandInfo30 },  // Inst #140 = WRYrr
  { 141,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #141 = XNORri
  { 142,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #142 = XNORrr
  { 143,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #143 = XORri
  { 144,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #144 = XORrr
};

extern const char SparcInstrNameData[] = {
  /* 0 */ 'T', 'A', '3', 0,
  /* 4 */ 'B', 'A', 0,
  /* 7 */ 'F', 'M', 'O', 'V', 'D', '_', 'F', 'C', 'C', 0,
  /* 17 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'D', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 35 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 52 */ 'F', 'M', 'O', 'V', 'S', '_', 'F', 'C', 'C', 0,
  /* 62 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', 'n', 't', '_', 'F', 'C', 'C', 0,
  /* 80 */ 'F', 'M', 'O', 'V', 'D', '_', 'I', 'C', 'C', 0,
  /* 90 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'D', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 108 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 125 */ 'F', 'M', 'O', 'V', 'S', '_', 'I', 'C', 'C', 0,
  /* 135 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', 'n', 't', '_', 'I', 'C', 'C', 0,
  /* 153 */ 'F', 'S', 'U', 'B', 'D', 0,
  /* 159 */ 'F', 'A', 'D', 'D', 'D', 0,
  /* 165 */ 'F', 'N', 'E', 'G', 'D', 0,
  /* 171 */ 'F', 'p', 'N', 'E', 'G', 'D', 0,
  /* 178 */ 'F', 'M', 'U', 'L', 'D', 0,
  /* 184 */ 'F', 'S', 'M', 'U', 'L', 'D', 0,
  /* 191 */ 'F', 'B', 'C', 'O', 'N', 'D', 0,
  /* 198 */ 'F', 'I', 'T', 'O', 'D', 0,
  /* 204 */ 'F', 'S', 'T', 'O', 'D', 0,
  /* 210 */ 'F', 'C', 'M', 'P', 'D', 0,
  /* 216 */ 'F', 'A', 'B', 'S', 'D', 0,
  /* 222 */ 'F', 'p', 'A', 'B', 'S', 'D', 0,
  /* 229 */ 'F', 'S', 'Q', 'R', 'T', 'D', 0,
  /* 236 */ 'F', 'D', 'I', 'V', 'D', 0,
  /* 242 */ 'F', 'M', 'O', 'V', 'D', 0,
  /* 248 */ 'F', 'p', 'M', 'O', 'V', 'D', 0,
  /* 255 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 268 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 275 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 285 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 298 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 313 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 327 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 341 */ 'P', 'H', 'I', 0,
  /* 345 */ 'F', 'D', 'T', 'O', 'I', 0,
  /* 351 */ 'F', 'S', 'T', 'O', 'I', 0,
  /* 357 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 366 */ 'P', 'R', 'O', 'L', 'O', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 379 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 388 */ 'C', 'A', 'L', 'L', 0,
  /* 393 */ 'K', 'I', 'L', 'L', 0,
  /* 398 */ 'R', 'E', 'T', 'L', 0,
  /* 403 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 413 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 430 */ 'U', 'N', 'I', 'M', 'P', 0,
  /* 436 */ 'N', 'O', 'P', 0,
  /* 440 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 455 */ 'F', 'S', 'U', 'B', 'S', 0,
  /* 461 */ 'F', 'A', 'D', 'D', 'S', 0,
  /* 467 */ 'F', 'N', 'E', 'G', 'S', 0,
  /* 473 */ 'F', 'M', 'U', 'L', 'S', 0,
  /* 479 */ 'F', 'D', 'T', 'O', 'S', 0,
  /* 485 */ 'F', 'I', 'T', 'O', 'S', 0,
  /* 491 */ 'F', 'C', 'M', 'P', 'S', 0,
  /* 497 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 514 */ 'F', 'A', 'B', 'S', 'S', 0,
  /* 520 */ 'F', 'S', 'Q', 'R', 'T', 'S', 0,
  /* 527 */ 'F', 'D', 'I', 'V', 'S', 0,
  /* 533 */ 'F', 'M', 'O', 'V', 'S', 0,
  /* 539 */ 'R', 'E', 'T', 0,
  /* 543 */ 'F', 'L', 'U', 'S', 'H', 'W', 0,
  /* 550 */ 'G', 'E', 'T', 'P', 'C', 'X', 0,
  /* 557 */ 'R', 'D', 'Y', 0,
  /* 561 */ 'C', 'O', 'P', 'Y', 0,
  /* 566 */ 'S', 'E', 'T', 'H', 'I', 'i', 0,
  /* 573 */ 'S', 'R', 'A', 'r', 'i', 0,
  /* 579 */ 'L', 'D', 'S', 'B', 'r', 'i', 0,
  /* 586 */ 'S', 'T', 'B', 'r', 'i', 0,
  /* 592 */ 'L', 'D', 'U', 'B', 'r', 'i', 0,
  /* 599 */ 'S', 'U', 'B', 'r', 'i', 0,
  /* 605 */ 'S', 'U', 'B', 'C', 'C', 'r', 'i', 0,
  /* 613 */ 'A', 'D', 'D', 'C', 'C', 'r', 'i', 0,
  /* 621 */ 'M', 'O', 'V', 'F', 'C', 'C', 'r', 'i', 0,
  /* 630 */ 'M', 'O', 'V', 'I', 'C', 'C', 'r', 'i', 0,
  /* 639 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'r', 'i', 0,
  /* 649 */ 'L', 'D', 'r', 'i', 0,
  /* 654 */ 'A', 'N', 'D', 'r', 'i', 0,
  /* 660 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', 'r', 'i', 0,
  /* 670 */ 'S', 'A', 'V', 'E', 'r', 'i', 0,
  /* 677 */ 'L', 'D', 'D', 'F', 'r', 'i', 0,
  /* 684 */ 'L', 'D', 'F', 'r', 'i', 0,
  /* 690 */ 'S', 'T', 'D', 'F', 'r', 'i', 0,
  /* 697 */ 'S', 'T', 'F', 'r', 'i', 0,
  /* 703 */ 'L', 'D', 'S', 'H', 'r', 'i', 0,
  /* 710 */ 'S', 'T', 'H', 'r', 'i', 0,
  /* 716 */ 'L', 'D', 'U', 'H', 'r', 'i', 0,
  /* 723 */ 'S', 'L', 'L', 'r', 'i', 0,
  /* 729 */ 'J', 'M', 'P', 'L', 'r', 'i', 0,
  /* 736 */ 'S', 'R', 'L', 'r', 'i', 0,
  /* 742 */ 'S', 'M', 'U', 'L', 'r', 'i', 0,
  /* 749 */ 'U', 'M', 'U', 'L', 'r', 'i', 0,
  /* 756 */ 'A', 'N', 'D', 'N', 'r', 'i', 0,
  /* 763 */ 'O', 'R', 'N', 'r', 'i', 0,
  /* 769 */ 'X', 'N', 'O', 'R', 'r', 'i', 0,
  /* 776 */ 'X', 'O', 'R', 'r', 'i', 0,
  /* 782 */ 'S', 'T', 'r', 'i', 0,
  /* 787 */ 'S', 'D', 'I', 'V', 'r', 'i', 0,
  /* 794 */ 'U', 'D', 'I', 'V', 'r', 'i', 0,
  /* 801 */ 'S', 'U', 'B', 'X', 'r', 'i', 0,
  /* 808 */ 'A', 'D', 'D', 'X', 'r', 'i', 0,
  /* 815 */ 'W', 'R', 'Y', 'r', 'i', 0,
  /* 821 */ 'S', 'R', 'A', 'r', 'r', 0,
  /* 827 */ 'L', 'D', 'S', 'B', 'r', 'r', 0,
  /* 834 */ 'S', 'T', 'B', 'r', 'r', 0,
  /* 840 */ 'L', 'D', 'U', 'B', 'r', 'r', 0,
  /* 847 */ 'S', 'U', 'B', 'r', 'r', 0,
  /* 853 */ 'S', 'U', 'B', 'C', 'C', 'r', 'r', 0,
  /* 861 */ 'A', 'D', 'D', 'C', 'C', 'r', 'r', 0,
  /* 869 */ 'M', 'O', 'V', 'F', 'C', 'C', 'r', 'r', 0,
  /* 878 */ 'M', 'O', 'V', 'I', 'C', 'C', 'r', 'r', 0,
  /* 887 */ 'S', 'U', 'B', 'X', 'C', 'C', 'r', 'r', 0,
  /* 896 */ 'P', 'O', 'P', 'C', 'r', 'r', 0,
  /* 903 */ 'A', 'D', 'D', 'r', 'r', 0,
  /* 909 */ 'L', 'D', 'r', 'r', 0,
  /* 914 */ 'A', 'N', 'D', 'r', 'r', 0,
  /* 920 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', 'r', 'r', 0,
  /* 930 */ 'S', 'A', 'V', 'E', 'r', 'r', 0,
  /* 937 */ 'L', 'D', 'D', 'F', 'r', 'r', 0,
  /* 944 */ 'L', 'D', 'F', 'r', 'r', 0,
  /* 950 */ 'S', 'T', 'D', 'F', 'r', 'r', 0,
  /* 957 */ 'S', 'T', 'F', 'r', 'r', 0,
  /* 963 */ 'L', 'D', 'S', 'H', 'r', 'r', 0,
  /* 970 */ 'S', 'T', 'H', 'r', 'r', 0,
  /* 976 */ 'L', 'D', 'U', 'H', 'r', 'r', 0,
  /* 983 */ 'S', 'L', 'L', 'r', 'r', 0,
  /* 989 */ 'J', 'M', 'P', 'L', 'r', 'r', 0,
  /* 996 */ 'S', 'R', 'L', 'r', 'r', 0,
  /* 1002 */ 'S', 'M', 'U', 'L', 'r', 'r', 0,
  /* 1009 */ 'U', 'M', 'U', 'L', 'r', 'r', 0,
  /* 1016 */ 'A', 'N', 'D', 'N', 'r', 'r', 0,
  /* 1023 */ 'O', 'R', 'N', 'r', 'r', 0,
  /* 1029 */ 'X', 'N', 'O', 'R', 'r', 'r', 0,
  /* 1036 */ 'X', 'O', 'R', 'r', 'r', 0,
  /* 1042 */ 'S', 'T', 'r', 'r', 0,
  /* 1047 */ 'S', 'D', 'I', 'V', 'r', 'r', 0,
  /* 1054 */ 'U', 'D', 'I', 'V', 'r', 'r', 0,
  /* 1061 */ 'S', 'U', 'B', 'X', 'r', 'r', 0,
  /* 1068 */ 'A', 'D', 'D', 'X', 'r', 'r', 0,
  /* 1075 */ 'W', 'R', 'Y', 'r', 'r', 0,
};

extern const unsigned SparcInstrNameIndices[] = {
    341U, 403U, 366U, 379U, 357U, 393U, 298U, 313U, 
    285U, 327U, 497U, 275U, 255U, 561U, 268U, 613U, 
    861U, 808U, 1068U, 643U, 903U, 413U, 440U, 756U, 
    1016U, 654U, 914U, 4U, 192U, 388U, 216U, 514U, 
    159U, 461U, 191U, 210U, 491U, 236U, 527U, 345U, 
    479U, 198U, 485U, 543U, 242U, 7U, 80U, 533U, 
    52U, 125U, 178U, 473U, 165U, 467U, 184U, 229U, 
    520U, 204U, 351U, 153U, 455U, 222U, 248U, 171U, 
    550U, 729U, 989U, 677U, 937U, 684U, 944U, 579U, 
    827U, 703U, 963U, 592U, 840U, 716U, 976U, 649U, 
    909U, 639U, 621U, 869U, 630U, 878U, 436U, 763U, 
    1023U, 771U, 1031U, 896U, 557U, 660U, 920U, 539U, 
    398U, 670U, 930U, 787U, 1047U, 17U, 90U, 35U, 
    108U, 62U, 135U, 566U, 723U, 983U, 742U, 1002U, 
    573U, 821U, 736U, 996U, 586U, 834U, 690U, 950U, 
    697U, 957U, 710U, 970U, 782U, 1042U, 605U, 853U, 
    887U, 801U, 1061U, 599U, 847U, 0U, 794U, 1054U, 
    749U, 1009U, 430U, 815U, 1075U, 769U, 1029U, 776U, 
    1036U, 
};

static inline void InitSparcMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, 145);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct SparcGenInstrInfo : public TargetInstrInfoImpl {
  explicit SparcGenInstrInfo(int SO = -1, int DO = -1);
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR
#undef GET_INSTRINFO_CTOR
namespace llvm {
extern const MCInstrDesc SparcInsts[];
extern const unsigned SparcInstrNameIndices[];
extern const char SparcInstrNameData[];
SparcGenInstrInfo::SparcGenInstrInfo(int SO, int DO)
  : TargetInstrInfoImpl(SO, DO) {
  InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, 145);
}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR

