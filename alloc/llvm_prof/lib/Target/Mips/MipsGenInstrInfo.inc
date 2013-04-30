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

namespace Mips {
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
    ADD	= 15,
    ADDi	= 16,
    ADDiu	= 17,
    ADDu	= 18,
    ADJCALLSTACKDOWN	= 19,
    ADJCALLSTACKUP	= 20,
    AND	= 21,
    AND64	= 22,
    ANDi	= 23,
    ATOMIC_CMP_SWAP_I16	= 24,
    ATOMIC_CMP_SWAP_I16_P8	= 25,
    ATOMIC_CMP_SWAP_I32	= 26,
    ATOMIC_CMP_SWAP_I32_P8	= 27,
    ATOMIC_CMP_SWAP_I64	= 28,
    ATOMIC_CMP_SWAP_I64_P8	= 29,
    ATOMIC_CMP_SWAP_I8	= 30,
    ATOMIC_CMP_SWAP_I8_P8	= 31,
    ATOMIC_LOAD_ADD_I16	= 32,
    ATOMIC_LOAD_ADD_I16_P8	= 33,
    ATOMIC_LOAD_ADD_I32	= 34,
    ATOMIC_LOAD_ADD_I32_P8	= 35,
    ATOMIC_LOAD_ADD_I64	= 36,
    ATOMIC_LOAD_ADD_I64_P8	= 37,
    ATOMIC_LOAD_ADD_I8	= 38,
    ATOMIC_LOAD_ADD_I8_P8	= 39,
    ATOMIC_LOAD_AND_I16	= 40,
    ATOMIC_LOAD_AND_I16_P8	= 41,
    ATOMIC_LOAD_AND_I32	= 42,
    ATOMIC_LOAD_AND_I32_P8	= 43,
    ATOMIC_LOAD_AND_I64	= 44,
    ATOMIC_LOAD_AND_I64_P8	= 45,
    ATOMIC_LOAD_AND_I8	= 46,
    ATOMIC_LOAD_AND_I8_P8	= 47,
    ATOMIC_LOAD_NAND_I16	= 48,
    ATOMIC_LOAD_NAND_I16_P8	= 49,
    ATOMIC_LOAD_NAND_I32	= 50,
    ATOMIC_LOAD_NAND_I32_P8	= 51,
    ATOMIC_LOAD_NAND_I64	= 52,
    ATOMIC_LOAD_NAND_I64_P8	= 53,
    ATOMIC_LOAD_NAND_I8	= 54,
    ATOMIC_LOAD_NAND_I8_P8	= 55,
    ATOMIC_LOAD_OR_I16	= 56,
    ATOMIC_LOAD_OR_I16_P8	= 57,
    ATOMIC_LOAD_OR_I32	= 58,
    ATOMIC_LOAD_OR_I32_P8	= 59,
    ATOMIC_LOAD_OR_I64	= 60,
    ATOMIC_LOAD_OR_I64_P8	= 61,
    ATOMIC_LOAD_OR_I8	= 62,
    ATOMIC_LOAD_OR_I8_P8	= 63,
    ATOMIC_LOAD_SUB_I16	= 64,
    ATOMIC_LOAD_SUB_I16_P8	= 65,
    ATOMIC_LOAD_SUB_I32	= 66,
    ATOMIC_LOAD_SUB_I32_P8	= 67,
    ATOMIC_LOAD_SUB_I64	= 68,
    ATOMIC_LOAD_SUB_I64_P8	= 69,
    ATOMIC_LOAD_SUB_I8	= 70,
    ATOMIC_LOAD_SUB_I8_P8	= 71,
    ATOMIC_LOAD_XOR_I16	= 72,
    ATOMIC_LOAD_XOR_I16_P8	= 73,
    ATOMIC_LOAD_XOR_I32	= 74,
    ATOMIC_LOAD_XOR_I32_P8	= 75,
    ATOMIC_LOAD_XOR_I64	= 76,
    ATOMIC_LOAD_XOR_I64_P8	= 77,
    ATOMIC_LOAD_XOR_I8	= 78,
    ATOMIC_LOAD_XOR_I8_P8	= 79,
    ATOMIC_SWAP_I16	= 80,
    ATOMIC_SWAP_I16_P8	= 81,
    ATOMIC_SWAP_I32	= 82,
    ATOMIC_SWAP_I32_P8	= 83,
    ATOMIC_SWAP_I64	= 84,
    ATOMIC_SWAP_I64_P8	= 85,
    ATOMIC_SWAP_I8	= 86,
    ATOMIC_SWAP_I8_P8	= 87,
    B	= 88,
    BC1F	= 89,
    BC1T	= 90,
    BEQ	= 91,
    BEQ64	= 92,
    BGEZ	= 93,
    BGEZ64	= 94,
    BGEZAL	= 95,
    BGTZ	= 96,
    BGTZ64	= 97,
    BLEZ	= 98,
    BLEZ64	= 99,
    BLTZ	= 100,
    BLTZ64	= 101,
    BLTZAL	= 102,
    BNE	= 103,
    BNE64	= 104,
    BuildPairF64	= 105,
    CEIL_L_D64	= 106,
    CEIL_L_S	= 107,
    CEIL_W_D32	= 108,
    CEIL_W_D64	= 109,
    CEIL_W_S	= 110,
    CFC1	= 111,
    CLO	= 112,
    CLZ	= 113,
    CPRESTORE	= 114,
    CTC1	= 115,
    CVT_D32_S	= 116,
    CVT_D32_W	= 117,
    CVT_D64_L	= 118,
    CVT_D64_S	= 119,
    CVT_D64_W	= 120,
    CVT_L_D64	= 121,
    CVT_L_S	= 122,
    CVT_S_D32	= 123,
    CVT_S_D64	= 124,
    CVT_S_L	= 125,
    CVT_S_W	= 126,
    CVT_W_D32	= 127,
    CVT_W_D64	= 128,
    CVT_W_S	= 129,
    DADDiu	= 130,
    DADDu	= 131,
    DANDi	= 132,
    DCLO	= 133,
    DCLZ	= 134,
    DEXT	= 135,
    DINS	= 136,
    DMFC1	= 137,
    DMTC1	= 138,
    DMULT	= 139,
    DMULTu	= 140,
    DROTR	= 141,
    DROTRV	= 142,
    DSBH	= 143,
    DSDIV	= 144,
    DSHD	= 145,
    DSLL	= 146,
    DSLL64_32	= 147,
    DSLLV	= 148,
    DSRA	= 149,
    DSRAV	= 150,
    DSRL	= 151,
    DSRLV	= 152,
    DSUBu	= 153,
    DUDIV	= 154,
    DynAlloc	= 155,
    DynAlloc64	= 156,
    EXT	= 157,
    ExtractElementF64	= 158,
    FABS_D32	= 159,
    FABS_D64	= 160,
    FABS_S	= 161,
    FADD_D32	= 162,
    FADD_D64	= 163,
    FADD_S	= 164,
    FCMP_D32	= 165,
    FCMP_D64	= 166,
    FCMP_S32	= 167,
    FDIV_D32	= 168,
    FDIV_D64	= 169,
    FDIV_S	= 170,
    FLOOR_L_D64	= 171,
    FLOOR_L_S	= 172,
    FLOOR_W_D32	= 173,
    FLOOR_W_D64	= 174,
    FLOOR_W_S	= 175,
    FMOV_D32	= 176,
    FMOV_D64	= 177,
    FMOV_S	= 178,
    FMUL_D32	= 179,
    FMUL_D64	= 180,
    FMUL_S	= 181,
    FNEG_D32	= 182,
    FNEG_D64	= 183,
    FNEG_S	= 184,
    FSQRT_D32	= 185,
    FSQRT_D64	= 186,
    FSQRT_S	= 187,
    FSUB_D32	= 188,
    FSUB_D64	= 189,
    FSUB_S	= 190,
    INS	= 191,
    J	= 192,
    JAL	= 193,
    JALR	= 194,
    JALR64	= 195,
    JR	= 196,
    JR64	= 197,
    LB	= 198,
    LB64	= 199,
    LB64_P8	= 200,
    LB_P8	= 201,
    LBu	= 202,
    LBu64	= 203,
    LBu64_P8	= 204,
    LBu_P8	= 205,
    LD	= 206,
    LDC1	= 207,
    LDC164	= 208,
    LDC164_P8	= 209,
    LDXC1	= 210,
    LDXC164	= 211,
    LDXC164_P8	= 212,
    LD_P8	= 213,
    LEA_ADDiu	= 214,
    LEA_ADDiu64	= 215,
    LH	= 216,
    LH64	= 217,
    LH64_P8	= 218,
    LH_P8	= 219,
    LHu	= 220,
    LHu64	= 221,
    LHu64_P8	= 222,
    LHu_P8	= 223,
    LL	= 224,
    LLD	= 225,
    LLD_P8	= 226,
    LL_P8	= 227,
    LUXC1	= 228,
    LUXC1_P8	= 229,
    LUi	= 230,
    LUi64	= 231,
    LW	= 232,
    LW64	= 233,
    LW64_P8	= 234,
    LWC1	= 235,
    LWC1_P8	= 236,
    LWL	= 237,
    LWL_P8	= 238,
    LWR	= 239,
    LWR_P8	= 240,
    LWXC1	= 241,
    LWXC1_P8	= 242,
    LW_P8	= 243,
    LWu64	= 244,
    LWu64_P8	= 245,
    MADD	= 246,
    MADDU	= 247,
    MADD_D32	= 248,
    MADD_D64	= 249,
    MADD_S	= 250,
    MFC1	= 251,
    MFHI	= 252,
    MFHI64	= 253,
    MFLO	= 254,
    MFLO64	= 255,
    MOVCCRToCCR	= 256,
    MOVF_D32	= 257,
    MOVF_D64	= 258,
    MOVF_I	= 259,
    MOVF_I64	= 260,
    MOVF_S	= 261,
    MOVN_I64_D64	= 262,
    MOVN_I64_I	= 263,
    MOVN_I64_I64	= 264,
    MOVN_I64_S	= 265,
    MOVN_I_D32	= 266,
    MOVN_I_D64	= 267,
    MOVN_I_I	= 268,
    MOVN_I_I64	= 269,
    MOVN_I_S	= 270,
    MOVT_D32	= 271,
    MOVT_D64	= 272,
    MOVT_I	= 273,
    MOVT_I64	= 274,
    MOVT_S	= 275,
    MOVZ_I64_D64	= 276,
    MOVZ_I64_I	= 277,
    MOVZ_I64_I64	= 278,
    MOVZ_I64_S	= 279,
    MOVZ_I_D32	= 280,
    MOVZ_I_D64	= 281,
    MOVZ_I_I	= 282,
    MOVZ_I_I64	= 283,
    MOVZ_I_S	= 284,
    MSUB	= 285,
    MSUBU	= 286,
    MSUB_D32	= 287,
    MSUB_D64	= 288,
    MSUB_S	= 289,
    MTC1	= 290,
    MTHI	= 291,
    MTHI64	= 292,
    MTLO	= 293,
    MTLO64	= 294,
    MUL	= 295,
    MULT	= 296,
    MULTu	= 297,
    NMADD_D32	= 298,
    NMADD_D64	= 299,
    NMADD_S	= 300,
    NMSUB_D32	= 301,
    NMSUB_D64	= 302,
    NMSUB_S	= 303,
    NOP	= 304,
    NOR	= 305,
    NOR64	= 306,
    OR	= 307,
    OR64	= 308,
    ORi	= 309,
    ORi64	= 310,
    RDHWR	= 311,
    RDHWR64	= 312,
    RET	= 313,
    ROTR	= 314,
    ROTRV	= 315,
    ROUND_L_D64	= 316,
    ROUND_L_S	= 317,
    ROUND_W_D32	= 318,
    ROUND_W_D64	= 319,
    ROUND_W_S	= 320,
    SB	= 321,
    SB64	= 322,
    SB64_P8	= 323,
    SB_P8	= 324,
    SC	= 325,
    SCD	= 326,
    SCD_P8	= 327,
    SC_P8	= 328,
    SD	= 329,
    SDC1	= 330,
    SDC164	= 331,
    SDC164_P8	= 332,
    SDIV	= 333,
    SDXC1	= 334,
    SDXC164	= 335,
    SDXC164_P8	= 336,
    SD_P8	= 337,
    SEB	= 338,
    SEB64	= 339,
    SEH	= 340,
    SEH64	= 341,
    SETGP01	= 342,
    SETGP2	= 343,
    SH	= 344,
    SH64	= 345,
    SH64_P8	= 346,
    SH_P8	= 347,
    SLL	= 348,
    SLL64_32	= 349,
    SLL64_64	= 350,
    SLLV	= 351,
    SLT	= 352,
    SLT64	= 353,
    SLTi	= 354,
    SLTi64	= 355,
    SLTiu	= 356,
    SLTiu64	= 357,
    SLTu	= 358,
    SLTu64	= 359,
    SRA	= 360,
    SRAV	= 361,
    SRL	= 362,
    SRLV	= 363,
    SUB	= 364,
    SUBu	= 365,
    SUXC1	= 366,
    SUXC1_P8	= 367,
    SW	= 368,
    SW64	= 369,
    SW64_P8	= 370,
    SWC1	= 371,
    SWC1_P8	= 372,
    SWL	= 373,
    SWL_P8	= 374,
    SWR	= 375,
    SWR_P8	= 376,
    SWXC1	= 377,
    SWXC1_P8	= 378,
    SW_P8	= 379,
    SYNC	= 380,
    TRUNC_L_D64	= 381,
    TRUNC_L_S	= 382,
    TRUNC_W_D32	= 383,
    TRUNC_W_D64	= 384,
    TRUNC_W_S	= 385,
    UDIV	= 386,
    ULD	= 387,
    ULD_P8	= 388,
    ULH	= 389,
    ULH64	= 390,
    ULH64_P8	= 391,
    ULH_P8	= 392,
    ULHu	= 393,
    ULHu64	= 394,
    ULHu64_P8	= 395,
    ULHu_P8	= 396,
    ULW	= 397,
    ULW64	= 398,
    ULW64_P8	= 399,
    ULW_P8	= 400,
    USD	= 401,
    USD_P8	= 402,
    USH	= 403,
    USH64	= 404,
    USH64_P8	= 405,
    USH_P8	= 406,
    USW	= 407,
    USW64	= 408,
    USW64_P8	= 409,
    USW_P8	= 410,
    WSBH	= 411,
    XOR	= 412,
    XOR64	= 413,
    XORi	= 414,
    XORi64	= 415,
    INSTRUCTION_LIST_END = 416
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

static const uint16_t ImplicitList1[] = { Mips::SP, 0 };
static const uint16_t ImplicitList2[] = { Mips::FCR31, 0 };
static const uint16_t ImplicitList3[] = { Mips::HI64, Mips::LO64, 0 };
static const uint16_t ImplicitList4[] = { Mips::SP_64, 0 };
static const uint16_t ImplicitList5[] = { Mips::HI, Mips::LO, 0 };
static const uint16_t ImplicitList6[] = { Mips::HI, 0 };
static const uint16_t ImplicitList7[] = { Mips::HI64, 0 };
static const uint16_t ImplicitList8[] = { Mips::LO, 0 };
static const uint16_t ImplicitList9[] = { Mips::LO64, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CCRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { Mips::CCRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo37[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo52[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { Mips::CCRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CCRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo73[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo74[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo75[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo76[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo77[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo78[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo79[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo80[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo81[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo82[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo83[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo84[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo85[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo86[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegs64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc MipsInsts[] = {
  { 0,	0,	0,	20,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #0 = PHI
  { 1,	0,	0,	20,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #1 = INLINEASM
  { 2,	1,	0,	20,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #2 = PROLOG_LABEL
  { 3,	1,	0,	20,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	20,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	20,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #5 = KILL
  { 6,	3,	1,	20,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo3 },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	20,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo4 },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	20,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	20,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo6 },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	20,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo3 },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	20,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #11 = DBG_VALUE
  { 12,	1,	1,	20,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	20,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo7 },  // Inst #13 = COPY
  { 14,	0,	0,	20,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #14 = BUNDLE
  { 15,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #15 = ADD
  { 16,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo9 },  // Inst #16 = ADDi
  { 17,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo9 },  // Inst #17 = ADDiu
  { 18,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #18 = ADDu
  { 19,	1,	0,	17,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo5 },  // Inst #19 = ADJCALLSTACKDOWN
  { 20,	2,	0,	17,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo7 },  // Inst #20 = ADJCALLSTACKUP
  { 21,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #21 = AND
  { 22,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #22 = AND64
  { 23,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo9 },  // Inst #23 = ANDi
  { 24,	4,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #24 = ATOMIC_CMP_SWAP_I16
  { 25,	4,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #25 = ATOMIC_CMP_SWAP_I16_P8
  { 26,	4,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #26 = ATOMIC_CMP_SWAP_I32
  { 27,	4,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #27 = ATOMIC_CMP_SWAP_I32_P8
  { 28,	4,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #28 = ATOMIC_CMP_SWAP_I64
  { 29,	4,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #29 = ATOMIC_CMP_SWAP_I64_P8
  { 30,	4,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #30 = ATOMIC_CMP_SWAP_I8
  { 31,	4,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #31 = ATOMIC_CMP_SWAP_I8_P8
  { 32,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #32 = ATOMIC_LOAD_ADD_I16
  { 33,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #33 = ATOMIC_LOAD_ADD_I16_P8
  { 34,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #34 = ATOMIC_LOAD_ADD_I32
  { 35,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #35 = ATOMIC_LOAD_ADD_I32_P8
  { 36,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #36 = ATOMIC_LOAD_ADD_I64
  { 37,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #37 = ATOMIC_LOAD_ADD_I64_P8
  { 38,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #38 = ATOMIC_LOAD_ADD_I8
  { 39,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #39 = ATOMIC_LOAD_ADD_I8_P8
  { 40,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #40 = ATOMIC_LOAD_AND_I16
  { 41,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #41 = ATOMIC_LOAD_AND_I16_P8
  { 42,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #42 = ATOMIC_LOAD_AND_I32
  { 43,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #43 = ATOMIC_LOAD_AND_I32_P8
  { 44,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #44 = ATOMIC_LOAD_AND_I64
  { 45,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #45 = ATOMIC_LOAD_AND_I64_P8
  { 46,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #46 = ATOMIC_LOAD_AND_I8
  { 47,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #47 = ATOMIC_LOAD_AND_I8_P8
  { 48,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #48 = ATOMIC_LOAD_NAND_I16
  { 49,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #49 = ATOMIC_LOAD_NAND_I16_P8
  { 50,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #50 = ATOMIC_LOAD_NAND_I32
  { 51,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #51 = ATOMIC_LOAD_NAND_I32_P8
  { 52,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #52 = ATOMIC_LOAD_NAND_I64
  { 53,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #53 = ATOMIC_LOAD_NAND_I64_P8
  { 54,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #54 = ATOMIC_LOAD_NAND_I8
  { 55,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #55 = ATOMIC_LOAD_NAND_I8_P8
  { 56,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #56 = ATOMIC_LOAD_OR_I16
  { 57,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #57 = ATOMIC_LOAD_OR_I16_P8
  { 58,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #58 = ATOMIC_LOAD_OR_I32
  { 59,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #59 = ATOMIC_LOAD_OR_I32_P8
  { 60,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #60 = ATOMIC_LOAD_OR_I64
  { 61,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #61 = ATOMIC_LOAD_OR_I64_P8
  { 62,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #62 = ATOMIC_LOAD_OR_I8
  { 63,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #63 = ATOMIC_LOAD_OR_I8_P8
  { 64,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #64 = ATOMIC_LOAD_SUB_I16
  { 65,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #65 = ATOMIC_LOAD_SUB_I16_P8
  { 66,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #66 = ATOMIC_LOAD_SUB_I32
  { 67,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #67 = ATOMIC_LOAD_SUB_I32_P8
  { 68,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #68 = ATOMIC_LOAD_SUB_I64
  { 69,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #69 = ATOMIC_LOAD_SUB_I64_P8
  { 70,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #70 = ATOMIC_LOAD_SUB_I8
  { 71,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #71 = ATOMIC_LOAD_SUB_I8_P8
  { 72,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #72 = ATOMIC_LOAD_XOR_I16
  { 73,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #73 = ATOMIC_LOAD_XOR_I16_P8
  { 74,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #74 = ATOMIC_LOAD_XOR_I32
  { 75,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #75 = ATOMIC_LOAD_XOR_I32_P8
  { 76,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #76 = ATOMIC_LOAD_XOR_I64
  { 77,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #77 = ATOMIC_LOAD_XOR_I64_P8
  { 78,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #78 = ATOMIC_LOAD_XOR_I8
  { 79,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #79 = ATOMIC_LOAD_XOR_I8_P8
  { 80,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #80 = ATOMIC_SWAP_I16
  { 81,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #81 = ATOMIC_SWAP_I16_P8
  { 82,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #82 = ATOMIC_SWAP_I32
  { 83,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #83 = ATOMIC_SWAP_I32_P8
  { 84,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #84 = ATOMIC_SWAP_I64
  { 85,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #85 = ATOMIC_SWAP_I64_P8
  { 86,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #86 = ATOMIC_SWAP_I8
  { 87,	3,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #87 = ATOMIC_SWAP_I8_P8
  { 88,	1,	0,	1,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, NULL, OperandInfo17 },  // Inst #88 = B
  { 89,	1,	0,	20,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x5ULL, ImplicitList2, NULL, OperandInfo17 },  // Inst #89 = BC1F
  { 90,	1,	0,	20,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x5ULL, ImplicitList2, NULL, OperandInfo17 },  // Inst #90 = BC1T
  { 91,	3,	0,	1,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, NULL, OperandInfo18 },  // Inst #91 = BEQ
  { 92,	3,	0,	1,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, NULL, OperandInfo19 },  // Inst #92 = BEQ64
  { 93,	2,	0,	1,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #93 = BGEZ
  { 94,	2,	0,	1,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, NULL, OperandInfo21 },  // Inst #94 = BGEZ64
  { 95,	2,	0,	1,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #95 = BGEZAL
  { 96,	2,	0,	1,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #96 = BGTZ
  { 97,	2,	0,	1,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, NULL, OperandInfo21 },  // Inst #97 = BGTZ64
  { 98,	2,	0,	1,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #98 = BLEZ
  { 99,	2,	0,	1,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, NULL, OperandInfo21 },  // Inst #99 = BLEZ64
  { 100,	2,	0,	1,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #100 = BLTZ
  { 101,	2,	0,	1,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, NULL, OperandInfo21 },  // Inst #101 = BLTZ64
  { 102,	2,	0,	1,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo20 },  // Inst #102 = BLTZAL
  { 103,	3,	0,	1,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, NULL, OperandInfo18 },  // Inst #103 = BNE
  { 104,	3,	0,	1,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, NULL, OperandInfo19 },  // Inst #104 = BNE64
  { 105,	3,	1,	17,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #105 = BuildPairF64
  { 106,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo23 },  // Inst #106 = CEIL_L_D64
  { 107,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo24 },  // Inst #107 = CEIL_L_S
  { 108,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo25 },  // Inst #108 = CEIL_W_D32
  { 109,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo26 },  // Inst #109 = CEIL_W_D64
  { 110,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo27 },  // Inst #110 = CEIL_W_S
  { 111,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo28 },  // Inst #111 = CFC1
  { 112,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo29 },  // Inst #112 = CLO
  { 113,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo29 },  // Inst #113 = CLZ
  { 114,	2,	0,	17,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo30 },  // Inst #114 = CPRESTORE
  { 115,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo31 },  // Inst #115 = CTC1
  { 116,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo32 },  // Inst #116 = CVT_D32_S
  { 117,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo32 },  // Inst #117 = CVT_D32_W
  { 118,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo23 },  // Inst #118 = CVT_D64_L
  { 119,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo24 },  // Inst #119 = CVT_D64_S
  { 120,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo24 },  // Inst #120 = CVT_D64_W
  { 121,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo23 },  // Inst #121 = CVT_L_D64
  { 122,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo24 },  // Inst #122 = CVT_L_S
  { 123,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo25 },  // Inst #123 = CVT_S_D32
  { 124,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo26 },  // Inst #124 = CVT_S_D64
  { 125,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo26 },  // Inst #125 = CVT_S_L
  { 126,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo27 },  // Inst #126 = CVT_S_W
  { 127,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo25 },  // Inst #127 = CVT_W_D32
  { 128,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo26 },  // Inst #128 = CVT_W_D64
  { 129,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo27 },  // Inst #129 = CVT_W_S
  { 130,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo33 },  // Inst #130 = DADDiu
  { 131,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #131 = DADDu
  { 132,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo33 },  // Inst #132 = DANDi
  { 133,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo34 },  // Inst #133 = DCLO
  { 134,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo34 },  // Inst #134 = DCLZ
  { 135,	4,	1,	20,	4,	0, 0x1ULL, NULL, NULL, OperandInfo35 },  // Inst #135 = DEXT
  { 136,	5,	1,	20,	4,	0, 0x1ULL, NULL, NULL, OperandInfo36 },  // Inst #136 = DINS
  { 137,	2,	1,	20,	4,	0|(1<<MCID::Bitcast), 0x4ULL, NULL, NULL, OperandInfo37 },  // Inst #137 = DMFC1
  { 138,	2,	1,	20,	4,	0|(1<<MCID::Bitcast), 0x4ULL, NULL, NULL, OperandInfo38 },  // Inst #138 = DMTC1
  { 139,	2,	0,	15,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList3, OperandInfo34 },  // Inst #139 = DMULT
  { 140,	2,	0,	15,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList3, OperandInfo34 },  // Inst #140 = DMULTu
  { 141,	3,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo33 },  // Inst #141 = DROTR
  { 142,	3,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo16 },  // Inst #142 = DROTRV
  { 143,	2,	1,	20,	4,	0, 0x1ULL, NULL, NULL, OperandInfo34 },  // Inst #143 = DSBH
  { 144,	2,	0,	14,	4,	0, 0x1ULL, NULL, ImplicitList3, OperandInfo34 },  // Inst #144 = DSDIV
  { 145,	2,	1,	20,	4,	0, 0x1ULL, NULL, NULL, OperandInfo34 },  // Inst #145 = DSHD
  { 146,	3,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo33 },  // Inst #146 = DSLL
  { 147,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo39 },  // Inst #147 = DSLL64_32
  { 148,	3,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo16 },  // Inst #148 = DSLLV
  { 149,	3,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo33 },  // Inst #149 = DSRA
  { 150,	3,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo16 },  // Inst #150 = DSRAV
  { 151,	3,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo33 },  // Inst #151 = DSRL
  { 152,	3,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo16 },  // Inst #152 = DSRLV
  { 153,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #153 = DSUBu
  { 154,	2,	0,	14,	4,	0, 0x1ULL, NULL, ImplicitList3, OperandInfo34 },  // Inst #154 = DUDIV
  { 155,	3,	1,	20,	4,	0, 0x5ULL, ImplicitList1, NULL, OperandInfo40 },  // Inst #155 = DynAlloc
  { 156,	3,	1,	20,	4,	0, 0x5ULL, ImplicitList4, NULL, OperandInfo41 },  // Inst #156 = DynAlloc64
  { 157,	4,	1,	20,	4,	0, 0x1ULL, NULL, NULL, OperandInfo42 },  // Inst #157 = EXT
  { 158,	3,	1,	17,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo43 },  // Inst #158 = ExtractElementF64
  { 159,	2,	1,	20,	4,	0, 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #159 = FABS_D32
  { 160,	2,	1,	20,	4,	0, 0x4ULL, NULL, NULL, OperandInfo23 },  // Inst #160 = FABS_D64
  { 161,	2,	1,	20,	4,	0, 0x4ULL, NULL, NULL, OperandInfo27 },  // Inst #161 = FABS_S
  { 162,	3,	1,	20,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo45 },  // Inst #162 = FADD_D32
  { 163,	3,	1,	20,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo46 },  // Inst #163 = FADD_D64
  { 164,	3,	1,	20,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo47 },  // Inst #164 = FADD_S
  { 165,	3,	0,	20,	4,	0, 0x6ULL, NULL, ImplicitList2, OperandInfo48 },  // Inst #165 = FCMP_D32
  { 166,	3,	0,	20,	4,	0, 0x6ULL, NULL, ImplicitList2, OperandInfo49 },  // Inst #166 = FCMP_D64
  { 167,	3,	0,	20,	4,	0, 0x6ULL, NULL, ImplicitList2, OperandInfo50 },  // Inst #167 = FCMP_S32
  { 168,	3,	1,	20,	4,	0, 0x4ULL, NULL, NULL, OperandInfo45 },  // Inst #168 = FDIV_D32
  { 169,	3,	1,	20,	4,	0, 0x4ULL, NULL, NULL, OperandInfo46 },  // Inst #169 = FDIV_D64
  { 170,	3,	1,	20,	4,	0, 0x4ULL, NULL, NULL, OperandInfo47 },  // Inst #170 = FDIV_S
  { 171,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo23 },  // Inst #171 = FLOOR_L_D64
  { 172,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo24 },  // Inst #172 = FLOOR_L_S
  { 173,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo25 },  // Inst #173 = FLOOR_W_D32
  { 174,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo26 },  // Inst #174 = FLOOR_W_D64
  { 175,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo27 },  // Inst #175 = FLOOR_W_S
  { 176,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #176 = FMOV_D32
  { 177,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo23 },  // Inst #177 = FMOV_D64
  { 178,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo27 },  // Inst #178 = FMOV_S
  { 179,	3,	1,	20,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo45 },  // Inst #179 = FMUL_D32
  { 180,	3,	1,	20,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo46 },  // Inst #180 = FMUL_D64
  { 181,	3,	1,	20,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo47 },  // Inst #181 = FMUL_S
  { 182,	2,	1,	20,	4,	0, 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #182 = FNEG_D32
  { 183,	2,	1,	20,	4,	0, 0x4ULL, NULL, NULL, OperandInfo23 },  // Inst #183 = FNEG_D64
  { 184,	2,	1,	20,	4,	0, 0x4ULL, NULL, NULL, OperandInfo27 },  // Inst #184 = FNEG_S
  { 185,	2,	1,	20,	4,	0, 0x4ULL, NULL, NULL, OperandInfo44 },  // Inst #185 = FSQRT_D32
  { 186,	2,	1,	20,	4,	0, 0x4ULL, NULL, NULL, OperandInfo23 },  // Inst #186 = FSQRT_D64
  { 187,	2,	1,	20,	4,	0, 0x4ULL, NULL, NULL, OperandInfo27 },  // Inst #187 = FSQRT_S
  { 188,	3,	1,	20,	4,	0, 0x4ULL, NULL, NULL, OperandInfo45 },  // Inst #188 = FSUB_D32
  { 189,	3,	1,	20,	4,	0, 0x4ULL, NULL, NULL, OperandInfo46 },  // Inst #189 = FSUB_D64
  { 190,	3,	1,	20,	4,	0, 0x4ULL, NULL, NULL, OperandInfo47 },  // Inst #190 = FSUB_S
  { 191,	5,	1,	20,	4,	0, 0x1ULL, NULL, NULL, OperandInfo51 },  // Inst #191 = INS
  { 192,	1,	0,	1,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x3ULL, NULL, NULL, OperandInfo5 },  // Inst #192 = J
  { 193,	1,	0,	1,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Variadic), 0x3ULL, NULL, NULL, OperandInfo5 },  // Inst #193 = JAL
  { 194,	1,	0,	1,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Variadic), 0x1ULL, NULL, NULL, OperandInfo52 },  // Inst #194 = JALR
  { 195,	1,	0,	1,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Variadic), 0x1ULL, NULL, NULL, OperandInfo53 },  // Inst #195 = JALR64
  { 196,	1,	0,	1,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x1ULL, NULL, NULL, OperandInfo52 },  // Inst #196 = JR
  { 197,	1,	0,	1,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x1ULL, NULL, NULL, OperandInfo53 },  // Inst #197 = JR64
  { 198,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo40 },  // Inst #198 = LB
  { 199,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo54 },  // Inst #199 = LB64
  { 200,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo41 },  // Inst #200 = LB64_P8
  { 201,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo55 },  // Inst #201 = LB_P8
  { 202,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo40 },  // Inst #202 = LBu
  { 203,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo54 },  // Inst #203 = LBu64
  { 204,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo41 },  // Inst #204 = LBu64_P8
  { 205,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo55 },  // Inst #205 = LBu_P8
  { 206,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo54 },  // Inst #206 = LD
  { 207,	3,	1,	20,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo56 },  // Inst #207 = LDC1
  { 208,	3,	1,	20,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo57 },  // Inst #208 = LDC164
  { 209,	3,	1,	20,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo58 },  // Inst #209 = LDC164_P8
  { 210,	3,	1,	20,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo22 },  // Inst #210 = LDXC1
  { 211,	3,	1,	20,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo59 },  // Inst #211 = LDXC164
  { 212,	3,	1,	20,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo60 },  // Inst #212 = LDXC164_P8
  { 213,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo41 },  // Inst #213 = LD_P8
  { 214,	3,	1,	20,	4,	0, 0x5ULL, NULL, NULL, OperandInfo40 },  // Inst #214 = LEA_ADDiu
  { 215,	3,	1,	20,	4,	0, 0x5ULL, NULL, NULL, OperandInfo41 },  // Inst #215 = LEA_ADDiu64
  { 216,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo40 },  // Inst #216 = LH
  { 217,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo54 },  // Inst #217 = LH64
  { 218,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo41 },  // Inst #218 = LH64_P8
  { 219,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo55 },  // Inst #219 = LH_P8
  { 220,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo40 },  // Inst #220 = LHu
  { 221,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo54 },  // Inst #221 = LHu64
  { 222,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo41 },  // Inst #222 = LHu64_P8
  { 223,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo55 },  // Inst #223 = LHu_P8
  { 224,	3,	1,	20,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo40 },  // Inst #224 = LL
  { 225,	3,	1,	20,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo54 },  // Inst #225 = LLD
  { 226,	3,	1,	20,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo41 },  // Inst #226 = LLD_P8
  { 227,	3,	1,	20,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo55 },  // Inst #227 = LL_P8
  { 228,	3,	1,	20,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo61 },  // Inst #228 = LUXC1
  { 229,	3,	1,	20,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo62 },  // Inst #229 = LUXC1_P8
  { 230,	2,	1,	0,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo63 },  // Inst #230 = LUi
  { 231,	2,	1,	0,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo64 },  // Inst #231 = LUi64
  { 232,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo40 },  // Inst #232 = LW
  { 233,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo54 },  // Inst #233 = LW64
  { 234,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo41 },  // Inst #234 = LW64_P8
  { 235,	3,	1,	20,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo65 },  // Inst #235 = LWC1
  { 236,	3,	1,	20,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo66 },  // Inst #236 = LWC1_P8
  { 237,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo40 },  // Inst #237 = LWL
  { 238,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo55 },  // Inst #238 = LWL_P8
  { 239,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo40 },  // Inst #239 = LWR
  { 240,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo55 },  // Inst #240 = LWR_P8
  { 241,	3,	1,	20,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo61 },  // Inst #241 = LWXC1
  { 242,	3,	1,	20,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo62 },  // Inst #242 = LWXC1_P8
  { 243,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo55 },  // Inst #243 = LW_P8
  { 244,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo54 },  // Inst #244 = LWu64
  { 245,	3,	1,	20,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo41 },  // Inst #245 = LWu64_P8
  { 246,	2,	0,	15,	4,	0|(1<<MCID::Commutable), 0x1ULL, ImplicitList5, ImplicitList5, OperandInfo29 },  // Inst #246 = MADD
  { 247,	2,	0,	15,	4,	0|(1<<MCID::Commutable), 0x1ULL, ImplicitList5, ImplicitList5, OperandInfo29 },  // Inst #247 = MADDU
  { 248,	4,	1,	20,	4,	0, 0x6ULL, NULL, NULL, OperandInfo67 },  // Inst #248 = MADD_D32
  { 249,	4,	1,	20,	4,	0, 0x6ULL, NULL, NULL, OperandInfo68 },  // Inst #249 = MADD_D64
  { 250,	4,	1,	20,	4,	0, 0x6ULL, NULL, NULL, OperandInfo69 },  // Inst #250 = MADD_S
  { 251,	2,	1,	20,	4,	0|(1<<MCID::Bitcast), 0x4ULL, NULL, NULL, OperandInfo70 },  // Inst #251 = MFC1
  { 252,	1,	1,	13,	4,	0, 0x1ULL, ImplicitList6, NULL, OperandInfo52 },  // Inst #252 = MFHI
  { 253,	1,	1,	13,	4,	0, 0x1ULL, ImplicitList7, NULL, OperandInfo53 },  // Inst #253 = MFHI64
  { 254,	1,	1,	13,	4,	0, 0x1ULL, ImplicitList8, NULL, OperandInfo52 },  // Inst #254 = MFLO
  { 255,	1,	1,	13,	4,	0, 0x1ULL, ImplicitList9, NULL, OperandInfo53 },  // Inst #255 = MFLO64
  { 256,	2,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo71 },  // Inst #256 = MOVCCRToCCR
  { 257,	3,	1,	20,	4,	0, 0x6ULL, ImplicitList2, NULL, OperandInfo72 },  // Inst #257 = MOVF_D32
  { 258,	3,	1,	20,	4,	0, 0x6ULL, ImplicitList2, NULL, OperandInfo73 },  // Inst #258 = MOVF_D64
  { 259,	3,	1,	20,	4,	0, 0x6ULL, ImplicitList2, NULL, OperandInfo74 },  // Inst #259 = MOVF_I
  { 260,	3,	1,	20,	4,	0, 0x6ULL, ImplicitList2, NULL, OperandInfo75 },  // Inst #260 = MOVF_I64
  { 261,	3,	1,	20,	4,	0, 0x6ULL, ImplicitList2, NULL, OperandInfo76 },  // Inst #261 = MOVF_S
  { 262,	4,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo77 },  // Inst #262 = MOVN_I64_D64
  { 263,	4,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo78 },  // Inst #263 = MOVN_I64_I
  { 264,	4,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo79 },  // Inst #264 = MOVN_I64_I64
  { 265,	4,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo80 },  // Inst #265 = MOVN_I64_S
  { 266,	4,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo81 },  // Inst #266 = MOVN_I_D32
  { 267,	4,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo82 },  // Inst #267 = MOVN_I_D64
  { 268,	4,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo83 },  // Inst #268 = MOVN_I_I
  { 269,	4,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo84 },  // Inst #269 = MOVN_I_I64
  { 270,	4,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo85 },  // Inst #270 = MOVN_I_S
  { 271,	3,	1,	20,	4,	0, 0x6ULL, ImplicitList2, NULL, OperandInfo72 },  // Inst #271 = MOVT_D32
  { 272,	3,	1,	20,	4,	0, 0x6ULL, ImplicitList2, NULL, OperandInfo73 },  // Inst #272 = MOVT_D64
  { 273,	3,	1,	20,	4,	0, 0x6ULL, ImplicitList2, NULL, OperandInfo74 },  // Inst #273 = MOVT_I
  { 274,	3,	1,	20,	4,	0, 0x6ULL, ImplicitList2, NULL, OperandInfo75 },  // Inst #274 = MOVT_I64
  { 275,	3,	1,	20,	4,	0, 0x6ULL, ImplicitList2, NULL, OperandInfo76 },  // Inst #275 = MOVT_S
  { 276,	4,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo77 },  // Inst #276 = MOVZ_I64_D64
  { 277,	4,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo78 },  // Inst #277 = MOVZ_I64_I
  { 278,	4,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo79 },  // Inst #278 = MOVZ_I64_I64
  { 279,	4,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo80 },  // Inst #279 = MOVZ_I64_S
  { 280,	4,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo81 },  // Inst #280 = MOVZ_I_D32
  { 281,	4,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo82 },  // Inst #281 = MOVZ_I_D64
  { 282,	4,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo83 },  // Inst #282 = MOVZ_I_I
  { 283,	4,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo84 },  // Inst #283 = MOVZ_I_I64
  { 284,	4,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo85 },  // Inst #284 = MOVZ_I_S
  { 285,	2,	0,	15,	4,	0, 0x1ULL, ImplicitList5, ImplicitList5, OperandInfo29 },  // Inst #285 = MSUB
  { 286,	2,	0,	15,	4,	0, 0x1ULL, ImplicitList5, ImplicitList5, OperandInfo29 },  // Inst #286 = MSUBU
  { 287,	4,	1,	20,	4,	0, 0x6ULL, NULL, NULL, OperandInfo67 },  // Inst #287 = MSUB_D32
  { 288,	4,	1,	20,	4,	0, 0x6ULL, NULL, NULL, OperandInfo68 },  // Inst #288 = MSUB_D64
  { 289,	4,	1,	20,	4,	0, 0x6ULL, NULL, NULL, OperandInfo69 },  // Inst #289 = MSUB_S
  { 290,	2,	1,	20,	4,	0|(1<<MCID::Bitcast), 0x4ULL, NULL, NULL, OperandInfo86 },  // Inst #290 = MTC1
  { 291,	1,	0,	13,	4,	0, 0x1ULL, NULL, ImplicitList6, OperandInfo52 },  // Inst #291 = MTHI
  { 292,	1,	0,	13,	4,	0, 0x1ULL, NULL, ImplicitList7, OperandInfo53 },  // Inst #292 = MTHI64
  { 293,	1,	0,	13,	4,	0, 0x1ULL, NULL, ImplicitList8, OperandInfo52 },  // Inst #293 = MTLO
  { 294,	1,	0,	13,	4,	0, 0x1ULL, NULL, ImplicitList9, OperandInfo53 },  // Inst #294 = MTLO64
  { 295,	3,	1,	15,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #295 = MUL
  { 296,	2,	0,	15,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList5, OperandInfo29 },  // Inst #296 = MULT
  { 297,	2,	0,	15,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList5, OperandInfo29 },  // Inst #297 = MULTu
  { 298,	4,	1,	20,	4,	0, 0x6ULL, NULL, NULL, OperandInfo67 },  // Inst #298 = NMADD_D32
  { 299,	4,	1,	20,	4,	0, 0x6ULL, NULL, NULL, OperandInfo68 },  // Inst #299 = NMADD_D64
  { 300,	4,	1,	20,	4,	0, 0x6ULL, NULL, NULL, OperandInfo69 },  // Inst #300 = NMADD_S
  { 301,	4,	1,	20,	4,	0, 0x6ULL, NULL, NULL, OperandInfo67 },  // Inst #301 = NMSUB_D32
  { 302,	4,	1,	20,	4,	0, 0x6ULL, NULL, NULL, OperandInfo68 },  // Inst #302 = NMSUB_D64
  { 303,	4,	1,	20,	4,	0, 0x6ULL, NULL, NULL, OperandInfo69 },  // Inst #303 = NMSUB_S
  { 304,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, 0 },  // Inst #304 = NOP
  { 305,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #305 = NOR
  { 306,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #306 = NOR64
  { 307,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #307 = OR
  { 308,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #308 = OR64
  { 309,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo9 },  // Inst #309 = ORi
  { 310,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo33 },  // Inst #310 = ORi64
  { 311,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo87 },  // Inst #311 = RDHWR
  { 312,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo88 },  // Inst #312 = RDHWR64
  { 313,	1,	0,	1,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x1ULL, NULL, NULL, OperandInfo52 },  // Inst #313 = RET
  { 314,	3,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo9 },  // Inst #314 = ROTR
  { 315,	3,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #315 = ROTRV
  { 316,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo23 },  // Inst #316 = ROUND_L_D64
  { 317,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo24 },  // Inst #317 = ROUND_L_S
  { 318,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo25 },  // Inst #318 = ROUND_W_D32
  { 319,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo26 },  // Inst #319 = ROUND_W_D64
  { 320,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo27 },  // Inst #320 = ROUND_W_S
  { 321,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo40 },  // Inst #321 = SB
  { 322,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo54 },  // Inst #322 = SB64
  { 323,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo41 },  // Inst #323 = SB64_P8
  { 324,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo55 },  // Inst #324 = SB_P8
  { 325,	4,	1,	20,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo89 },  // Inst #325 = SC
  { 326,	4,	1,	20,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo90 },  // Inst #326 = SCD
  { 327,	4,	1,	20,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo91 },  // Inst #327 = SCD_P8
  { 328,	4,	1,	20,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo92 },  // Inst #328 = SC_P8
  { 329,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo54 },  // Inst #329 = SD
  { 330,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo56 },  // Inst #330 = SDC1
  { 331,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo57 },  // Inst #331 = SDC164
  { 332,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo58 },  // Inst #332 = SDC164_P8
  { 333,	2,	0,	14,	4,	0, 0x1ULL, NULL, ImplicitList5, OperandInfo29 },  // Inst #333 = SDIV
  { 334,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x6ULL, NULL, NULL, OperandInfo22 },  // Inst #334 = SDXC1
  { 335,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x6ULL, NULL, NULL, OperandInfo59 },  // Inst #335 = SDXC164
  { 336,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x6ULL, NULL, NULL, OperandInfo60 },  // Inst #336 = SDXC164_P8
  { 337,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo41 },  // Inst #337 = SD_P8
  { 338,	2,	1,	20,	4,	0, 0x1ULL, NULL, NULL, OperandInfo29 },  // Inst #338 = SEB
  { 339,	2,	1,	20,	4,	0, 0x1ULL, NULL, NULL, OperandInfo34 },  // Inst #339 = SEB64
  { 340,	2,	1,	20,	4,	0, 0x1ULL, NULL, NULL, OperandInfo29 },  // Inst #340 = SEH
  { 341,	2,	1,	20,	4,	0, 0x1ULL, NULL, NULL, OperandInfo34 },  // Inst #341 = SEH64
  { 342,	1,	1,	17,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo52 },  // Inst #342 = SETGP01
  { 343,	2,	1,	17,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #343 = SETGP2
  { 344,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo40 },  // Inst #344 = SH
  { 345,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo54 },  // Inst #345 = SH64
  { 346,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo41 },  // Inst #346 = SH64_P8
  { 347,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo55 },  // Inst #347 = SH_P8
  { 348,	3,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo9 },  // Inst #348 = SLL
  { 349,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo39 },  // Inst #349 = SLL64_32
  { 350,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo34 },  // Inst #350 = SLL64_64
  { 351,	3,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #351 = SLLV
  { 352,	3,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #352 = SLT
  { 353,	3,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo93 },  // Inst #353 = SLT64
  { 354,	3,	1,	0,	4,	0, 0x2ULL, NULL, NULL, OperandInfo9 },  // Inst #354 = SLTi
  { 355,	3,	1,	0,	4,	0, 0x2ULL, NULL, NULL, OperandInfo94 },  // Inst #355 = SLTi64
  { 356,	3,	1,	0,	4,	0, 0x2ULL, NULL, NULL, OperandInfo9 },  // Inst #356 = SLTiu
  { 357,	3,	1,	0,	4,	0, 0x2ULL, NULL, NULL, OperandInfo94 },  // Inst #357 = SLTiu64
  { 358,	3,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #358 = SLTu
  { 359,	3,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo93 },  // Inst #359 = SLTu64
  { 360,	3,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo9 },  // Inst #360 = SRA
  { 361,	3,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #361 = SRAV
  { 362,	3,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo9 },  // Inst #362 = SRL
  { 363,	3,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #363 = SRLV
  { 364,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #364 = SUB
  { 365,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #365 = SUBu
  { 366,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x6ULL, NULL, NULL, OperandInfo61 },  // Inst #366 = SUXC1
  { 367,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x6ULL, NULL, NULL, OperandInfo62 },  // Inst #367 = SUXC1_P8
  { 368,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo40 },  // Inst #368 = SW
  { 369,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo54 },  // Inst #369 = SW64
  { 370,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo41 },  // Inst #370 = SW64_P8
  { 371,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo65 },  // Inst #371 = SWC1
  { 372,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo66 },  // Inst #372 = SWC1_P8
  { 373,	3,	0,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo40 },  // Inst #373 = SWL
  { 374,	3,	0,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo55 },  // Inst #374 = SWL_P8
  { 375,	3,	0,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo40 },  // Inst #375 = SWR
  { 376,	3,	0,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo55 },  // Inst #376 = SWR_P8
  { 377,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x6ULL, NULL, NULL, OperandInfo61 },  // Inst #377 = SWXC1
  { 378,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x6ULL, NULL, NULL, OperandInfo62 },  // Inst #378 = SWXC1_P8
  { 379,	3,	0,	20,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo55 },  // Inst #379 = SW_P8
  { 380,	1,	0,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo2 },  // Inst #380 = SYNC
  { 381,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo23 },  // Inst #381 = TRUNC_L_D64
  { 382,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo24 },  // Inst #382 = TRUNC_L_S
  { 383,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo25 },  // Inst #383 = TRUNC_W_D32
  { 384,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo26 },  // Inst #384 = TRUNC_W_D64
  { 385,	2,	1,	20,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo27 },  // Inst #385 = TRUNC_W_S
  { 386,	2,	0,	14,	4,	0, 0x1ULL, NULL, ImplicitList5, OperandInfo29 },  // Inst #386 = UDIV
  { 387,	3,	1,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo54 },  // Inst #387 = ULD
  { 388,	3,	1,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo41 },  // Inst #388 = ULD_P8
  { 389,	3,	1,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo40 },  // Inst #389 = ULH
  { 390,	3,	1,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo54 },  // Inst #390 = ULH64
  { 391,	3,	1,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo41 },  // Inst #391 = ULH64_P8
  { 392,	3,	1,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo55 },  // Inst #392 = ULH_P8
  { 393,	3,	1,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo40 },  // Inst #393 = ULHu
  { 394,	3,	1,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo54 },  // Inst #394 = ULHu64
  { 395,	3,	1,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo41 },  // Inst #395 = ULHu64_P8
  { 396,	3,	1,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo55 },  // Inst #396 = ULHu_P8
  { 397,	3,	1,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo40 },  // Inst #397 = ULW
  { 398,	3,	1,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo54 },  // Inst #398 = ULW64
  { 399,	3,	1,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo41 },  // Inst #399 = ULW64_P8
  { 400,	3,	1,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo55 },  // Inst #400 = ULW_P8
  { 401,	3,	0,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo54 },  // Inst #401 = USD
  { 402,	3,	0,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo41 },  // Inst #402 = USD_P8
  { 403,	3,	0,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo40 },  // Inst #403 = USH
  { 404,	3,	0,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo54 },  // Inst #404 = USH64
  { 405,	3,	0,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo41 },  // Inst #405 = USH64_P8
  { 406,	3,	0,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo55 },  // Inst #406 = USH_P8
  { 407,	3,	0,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo40 },  // Inst #407 = USW
  { 408,	3,	0,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo54 },  // Inst #408 = USW64
  { 409,	3,	0,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo41 },  // Inst #409 = USW64_P8
  { 410,	3,	0,	20,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo55 },  // Inst #410 = USW_P8
  { 411,	2,	1,	20,	4,	0, 0x1ULL, NULL, NULL, OperandInfo29 },  // Inst #411 = WSBH
  { 412,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #412 = XOR
  { 413,	3,	1,	0,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #413 = XOR64
  { 414,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo9 },  // Inst #414 = XORi
  { 415,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo33 },  // Inst #415 = XORi64
};

extern const char MipsInstrNameData[] = {
  /* 0 */ 'S', 'E', 'T', 'G', 'P', '0', '1', 0,
  /* 8 */ 'L', 'D', 'C', '1', 0,
  /* 13 */ 'S', 'D', 'C', '1', 0,
  /* 18 */ 'C', 'F', 'C', '1', 0,
  /* 23 */ 'D', 'M', 'F', 'C', '1', 0,
  /* 29 */ 'C', 'T', 'C', '1', 0,
  /* 34 */ 'D', 'M', 'T', 'C', '1', 0,
  /* 40 */ 'L', 'W', 'C', '1', 0,
  /* 45 */ 'S', 'W', 'C', '1', 0,
  /* 50 */ 'L', 'D', 'X', 'C', '1', 0,
  /* 56 */ 'S', 'D', 'X', 'C', '1', 0,
  /* 62 */ 'L', 'U', 'X', 'C', '1', 0,
  /* 68 */ 'S', 'U', 'X', 'C', '1', 0,
  /* 74 */ 'L', 'W', 'X', 'C', '1', 0,
  /* 80 */ 'S', 'W', 'X', 'C', '1', 0,
  /* 86 */ 'F', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 95 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 105 */ 'F', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 114 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 124 */ 'M', 'O', 'V', 'F', '_', 'D', '3', '2', 0,
  /* 133 */ 'F', 'N', 'E', 'G', '_', 'D', '3', '2', 0,
  /* 142 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '3', '2', 0,
  /* 153 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '3', '2', 0,
  /* 164 */ 'F', 'M', 'U', 'L', '_', 'D', '3', '2', 0,
  /* 173 */ 'F', 'C', 'M', 'P', '_', 'D', '3', '2', 0,
  /* 182 */ 'F', 'A', 'B', 'S', '_', 'D', '3', '2', 0,
  /* 191 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '3', '2', 0,
  /* 201 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '3', '2', 0,
  /* 211 */ 'M', 'O', 'V', 'T', '_', 'D', '3', '2', 0,
  /* 220 */ 'F', 'D', 'I', 'V', '_', 'D', '3', '2', 0,
  /* 229 */ 'F', 'M', 'O', 'V', '_', 'D', '3', '2', 0,
  /* 238 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '3', '2', 0,
  /* 250 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '3', '2', 0,
  /* 262 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '3', '2', 0,
  /* 273 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '3', '2', 0,
  /* 285 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '3', '2', 0,
  /* 295 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 315 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 335 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 356 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 376 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 392 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 412 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 432 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 451 */ 'F', 'C', 'M', 'P', '_', 'S', '3', '2', 0,
  /* 460 */ 'D', 'S', 'L', 'L', '6', '4', '_', '3', '2', 0,
  /* 470 */ 'S', 'E', 'T', 'G', 'P', '2', 0,
  /* 477 */ 'L', 'D', 'C', '1', '6', '4', 0,
  /* 484 */ 'S', 'D', 'C', '1', '6', '4', 0,
  /* 491 */ 'L', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 499 */ 'S', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 507 */ 'S', 'E', 'B', '6', '4', 0,
  /* 513 */ 'L', 'B', '6', '4', 0,
  /* 518 */ 'S', 'B', '6', '4', 0,
  /* 523 */ 'A', 'N', 'D', '6', '4', 0,
  /* 529 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 542 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 555 */ 'F', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 564 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 574 */ 'F', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 583 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 593 */ 'M', 'O', 'V', 'F', '_', 'D', '6', '4', 0,
  /* 602 */ 'F', 'N', 'E', 'G', '_', 'D', '6', '4', 0,
  /* 611 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '6', '4', 0,
  /* 622 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '6', '4', 0,
  /* 633 */ 'F', 'M', 'U', 'L', '_', 'D', '6', '4', 0,
  /* 642 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'D', '6', '4', 0,
  /* 654 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'D', '6', '4', 0,
  /* 666 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'D', '6', '4', 0,
  /* 677 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'D', '6', '4', 0,
  /* 689 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '6', '4', 0,
  /* 699 */ 'F', 'C', 'M', 'P', '_', 'D', '6', '4', 0,
  /* 708 */ 'F', 'A', 'B', 'S', '_', 'D', '6', '4', 0,
  /* 717 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '6', '4', 0,
  /* 727 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '6', '4', 0,
  /* 737 */ 'M', 'O', 'V', 'T', '_', 'D', '6', '4', 0,
  /* 746 */ 'F', 'D', 'I', 'V', '_', 'D', '6', '4', 0,
  /* 755 */ 'F', 'M', 'O', 'V', '_', 'D', '6', '4', 0,
  /* 764 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '6', '4', 0,
  /* 776 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '6', '4', 0,
  /* 788 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '6', '4', 0,
  /* 799 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '6', '4', 0,
  /* 811 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '6', '4', 0,
  /* 821 */ 'B', 'N', 'E', '6', '4', 0,
  /* 827 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', 0,
  /* 840 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', 0,
  /* 858 */ 'S', 'E', 'H', '6', '4', 0,
  /* 864 */ 'U', 'L', 'H', '6', '4', 0,
  /* 870 */ 'U', 'S', 'H', '6', '4', 0,
  /* 876 */ 'M', 'F', 'H', 'I', '6', '4', 0,
  /* 883 */ 'M', 'T', 'H', 'I', '6', '4', 0,
  /* 890 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 903 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 916 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 936 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 956 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 977 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 997 */ 'M', 'O', 'V', 'F', '_', 'I', '6', '4', 0,
  /* 1006 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1017 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1028 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1044 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1064 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1084 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1103 */ 'M', 'O', 'V', 'T', '_', 'I', '6', '4', 0,
  /* 1112 */ 'M', 'F', 'L', 'O', '6', '4', 0,
  /* 1119 */ 'M', 'T', 'L', 'O', '6', '4', 0,
  /* 1126 */ 'B', 'E', 'Q', '6', '4', 0,
  /* 1132 */ 'J', 'R', '6', '4', 0,
  /* 1137 */ 'J', 'A', 'L', 'R', '6', '4', 0,
  /* 1144 */ 'N', 'O', 'R', '6', '4', 0,
  /* 1150 */ 'X', 'O', 'R', '6', '4', 0,
  /* 1156 */ 'R', 'D', 'H', 'W', 'R', '6', '4', 0,
  /* 1164 */ 'S', 'L', 'T', '6', '4', 0,
  /* 1170 */ 'U', 'L', 'W', '6', '4', 0,
  /* 1176 */ 'U', 'S', 'W', '6', '4', 0,
  /* 1182 */ 'B', 'G', 'E', 'Z', '6', '4', 0,
  /* 1189 */ 'B', 'L', 'E', 'Z', '6', '4', 0,
  /* 1196 */ 'B', 'G', 'T', 'Z', '6', '4', 0,
  /* 1203 */ 'B', 'L', 'T', 'Z', '6', '4', 0,
  /* 1210 */ 'S', 'L', 'L', '6', '4', '_', '6', '4', 0,
  /* 1219 */ 'D', 'y', 'n', 'A', 'l', 'l', 'o', 'c', '6', '4', 0,
  /* 1230 */ 'X', 'O', 'R', 'i', '6', '4', 0,
  /* 1237 */ 'S', 'L', 'T', 'i', '6', '4', 0,
  /* 1244 */ 'L', 'U', 'i', '6', '4', 0,
  /* 1250 */ 'L', 'B', 'u', '6', '4', 0,
  /* 1256 */ 'U', 'L', 'H', 'u', '6', '4', 0,
  /* 1263 */ 'S', 'L', 'T', 'u', '6', '4', 0,
  /* 1270 */ 'L', 'W', 'u', '6', '4', 0,
  /* 1276 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', '6', '4', 0,
  /* 1288 */ 'S', 'L', 'T', 'i', 'u', '6', '4', 0,
  /* 1296 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', 0,
  /* 1316 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', 0,
  /* 1336 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 1357 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 1377 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 1393 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 1413 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 1433 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 1452 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', 0,
  /* 1471 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', 0,
  /* 1490 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 1510 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 1529 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 1544 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 1563 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', 0,
  /* 1582 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', 0,
  /* 1600 */ 'L', 'W', 'C', '1', '_', 'P', '8', 0,
  /* 1608 */ 'S', 'W', 'C', '1', '_', 'P', '8', 0,
  /* 1616 */ 'L', 'U', 'X', 'C', '1', '_', 'P', '8', 0,
  /* 1625 */ 'S', 'U', 'X', 'C', '1', '_', 'P', '8', 0,
  /* 1634 */ 'L', 'W', 'X', 'C', '1', '_', 'P', '8', 0,
  /* 1643 */ 'S', 'W', 'X', 'C', '1', '_', 'P', '8', 0,
  /* 1652 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 1675 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 1698 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 1722 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 1745 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 1764 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 1787 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 1810 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 1832 */ 'L', 'D', 'C', '1', '6', '4', '_', 'P', '8', 0,
  /* 1842 */ 'S', 'D', 'C', '1', '6', '4', '_', 'P', '8', 0,
  /* 1852 */ 'L', 'D', 'X', 'C', '1', '6', '4', '_', 'P', '8', 0,
  /* 1863 */ 'S', 'D', 'X', 'C', '1', '6', '4', '_', 'P', '8', 0,
  /* 1874 */ 'L', 'B', '6', '4', '_', 'P', '8', 0,
  /* 1882 */ 'S', 'B', '6', '4', '_', 'P', '8', 0,
  /* 1890 */ 'U', 'L', 'H', '6', '4', '_', 'P', '8', 0,
  /* 1899 */ 'U', 'S', 'H', '6', '4', '_', 'P', '8', 0,
  /* 1908 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 1931 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 1954 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 1978 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 2001 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 2020 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 2043 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 2066 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 2088 */ 'U', 'L', 'W', '6', '4', '_', 'P', '8', 0,
  /* 2097 */ 'U', 'S', 'W', '6', '4', '_', 'P', '8', 0,
  /* 2106 */ 'L', 'B', 'u', '6', '4', '_', 'P', '8', 0,
  /* 2115 */ 'U', 'L', 'H', 'u', '6', '4', '_', 'P', '8', 0,
  /* 2125 */ 'L', 'W', 'u', '6', '4', '_', 'P', '8', 0,
  /* 2134 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 2157 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 2180 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 2204 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 2227 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 2246 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 2269 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 2292 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 2314 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', '_', 'P', '8', 0,
  /* 2336 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', '_', 'P', '8', 0,
  /* 2358 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', '_', 'P', '8', 0,
  /* 2381 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', '_', 'P', '8', 0,
  /* 2403 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', '_', 'P', '8', 0,
  /* 2421 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', '_', 'P', '8', 0,
  /* 2443 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', '_', 'P', '8', 0,
  /* 2465 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', '_', 'P', '8', 0,
  /* 2486 */ 'L', 'B', '_', 'P', '8', 0,
  /* 2492 */ 'S', 'B', '_', 'P', '8', 0,
  /* 2498 */ 'S', 'C', '_', 'P', '8', 0,
  /* 2504 */ 'S', 'C', 'D', '_', 'P', '8', 0,
  /* 2511 */ 'L', 'L', 'D', '_', 'P', '8', 0,
  /* 2518 */ 'U', 'L', 'D', '_', 'P', '8', 0,
  /* 2525 */ 'U', 'S', 'D', '_', 'P', '8', 0,
  /* 2532 */ 'U', 'L', 'H', '_', 'P', '8', 0,
  /* 2539 */ 'U', 'S', 'H', '_', 'P', '8', 0,
  /* 2546 */ 'L', 'L', '_', 'P', '8', 0,
  /* 2552 */ 'L', 'W', 'L', '_', 'P', '8', 0,
  /* 2559 */ 'S', 'W', 'L', '_', 'P', '8', 0,
  /* 2566 */ 'L', 'W', 'R', '_', 'P', '8', 0,
  /* 2573 */ 'S', 'W', 'R', '_', 'P', '8', 0,
  /* 2580 */ 'U', 'L', 'W', '_', 'P', '8', 0,
  /* 2587 */ 'U', 'S', 'W', '_', 'P', '8', 0,
  /* 2594 */ 'L', 'B', 'u', '_', 'P', '8', 0,
  /* 2601 */ 'U', 'L', 'H', 'u', '_', 'P', '8', 0,
  /* 2609 */ 'D', 'S', 'R', 'A', 0,
  /* 2614 */ 'S', 'E', 'B', 0,
  /* 2618 */ 'L', 'B', 0,
  /* 2621 */ 'S', 'B', 0,
  /* 2624 */ 'M', 'S', 'U', 'B', 0,
  /* 2629 */ 'S', 'Y', 'N', 'C', 0,
  /* 2634 */ 'S', 'C', 0,
  /* 2637 */ 'S', 'C', 'D', 0,
  /* 2641 */ 'M', 'A', 'D', 'D', 0,
  /* 2646 */ 'D', 'S', 'H', 'D', 0,
  /* 2651 */ 'L', 'L', 'D', 0,
  /* 2655 */ 'U', 'L', 'D', 0,
  /* 2659 */ 'A', 'N', 'D', 0,
  /* 2663 */ 'U', 'S', 'D', 0,
  /* 2667 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 2680 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 2687 */ 'B', 'N', 'E', 0,
  /* 2691 */ 'C', 'P', 'R', 'E', 'S', 'T', 'O', 'R', 'E', 0,
  /* 2701 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 2711 */ 'B', 'C', '1', 'F', 0,
  /* 2716 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 2729 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 2744 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 2758 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 2772 */ 'D', 'S', 'B', 'H', 0,
  /* 2777 */ 'W', 'S', 'B', 'H', 0,
  /* 2782 */ 'S', 'E', 'H', 0,
  /* 2786 */ 'U', 'L', 'H', 0,
  /* 2790 */ 'U', 'S', 'H', 0,
  /* 2794 */ 'M', 'F', 'H', 'I', 0,
  /* 2799 */ 'P', 'H', 'I', 0,
  /* 2803 */ 'M', 'T', 'H', 'I', 0,
  /* 2808 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', 0,
  /* 2819 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', 0,
  /* 2830 */ 'M', 'O', 'V', 'F', '_', 'I', 0,
  /* 2837 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', 0,
  /* 2846 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', 0,
  /* 2855 */ 'M', 'O', 'V', 'T', '_', 'I', 0,
  /* 2862 */ 'J', 0,
  /* 2864 */ 'J', 'A', 'L', 0,
  /* 2868 */ 'B', 'G', 'E', 'Z', 'A', 'L', 0,
  /* 2875 */ 'B', 'L', 'T', 'Z', 'A', 'L', 0,
  /* 2882 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2891 */ 'P', 'R', 'O', 'L', 'O', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2904 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2913 */ 'K', 'I', 'L', 'L', 0,
  /* 2918 */ 'D', 'S', 'L', 'L', 0,
  /* 2923 */ 'D', 'S', 'R', 'L', 0,
  /* 2928 */ 'M', 'U', 'L', 0,
  /* 2932 */ 'L', 'W', 'L', 0,
  /* 2936 */ 'S', 'W', 'L', 0,
  /* 2940 */ 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'L', 0,
  /* 2950 */ 'C', 'V', 'T', '_', 'S', '_', 'L', 0,
  /* 2958 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 2968 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 2985 */ 'D', 'C', 'L', 'O', 0,
  /* 2990 */ 'M', 'F', 'L', 'O', 0,
  /* 2995 */ 'M', 'T', 'L', 'O', 0,
  /* 3000 */ 'N', 'O', 'P', 0,
  /* 3004 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 3019 */ 'B', 'E', 'Q', 0,
  /* 3023 */ 'M', 'O', 'V', 'C', 'C', 'R', 'T', 'o', 'C', 'C', 'R', 0,
  /* 3035 */ 'J', 'R', 0,
  /* 3038 */ 'J', 'A', 'L', 'R', 0,
  /* 3043 */ 'N', 'O', 'R', 0,
  /* 3047 */ 'X', 'O', 'R', 0,
  /* 3051 */ 'D', 'R', 'O', 'T', 'R', 0,
  /* 3057 */ 'R', 'D', 'H', 'W', 'R', 0,
  /* 3063 */ 'L', 'W', 'R', 0,
  /* 3067 */ 'S', 'W', 'R', 0,
  /* 3071 */ 'D', 'I', 'N', 'S', 0,
  /* 3076 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 3093 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'S', 0,
  /* 3103 */ 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'S', 0,
  /* 3113 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'S', 0,
  /* 3124 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'S', 0,
  /* 3135 */ 'F', 'S', 'U', 'B', '_', 'S', 0,
  /* 3142 */ 'N', 'M', 'S', 'U', 'B', '_', 'S', 0,
  /* 3150 */ 'F', 'A', 'D', 'D', '_', 'S', 0,
  /* 3157 */ 'N', 'M', 'A', 'D', 'D', '_', 'S', 0,
  /* 3165 */ 'M', 'O', 'V', 'F', '_', 'S', 0,
  /* 3172 */ 'F', 'N', 'E', 'G', '_', 'S', 0,
  /* 3179 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'S', 0,
  /* 3188 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'S', 0,
  /* 3197 */ 'F', 'M', 'U', 'L', '_', 'S', 0,
  /* 3204 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'S', 0,
  /* 3214 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'S', 0,
  /* 3224 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'S', 0,
  /* 3233 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'S', 0,
  /* 3243 */ 'C', 'V', 'T', '_', 'L', '_', 'S', 0,
  /* 3251 */ 'F', 'A', 'B', 'S', '_', 'S', 0,
  /* 3258 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', 0,
  /* 3266 */ 'M', 'O', 'V', 'T', '_', 'S', 0,
  /* 3273 */ 'F', 'D', 'I', 'V', '_', 'S', 0,
  /* 3280 */ 'F', 'M', 'O', 'V', '_', 'S', 0,
  /* 3287 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', 0,
  /* 3297 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', 0,
  /* 3307 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', 0,
  /* 3316 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', 0,
  /* 3326 */ 'C', 'V', 'T', '_', 'W', '_', 'S', 0,
  /* 3334 */ 'B', 'C', '1', 'T', 0,
  /* 3339 */ 'R', 'E', 'T', 0,
  /* 3343 */ 'S', 'L', 'T', 0,
  /* 3347 */ 'D', 'M', 'U', 'L', 'T', 0,
  /* 3353 */ 'D', 'E', 'X', 'T', 0,
  /* 3358 */ 'M', 'S', 'U', 'B', 'U', 0,
  /* 3364 */ 'M', 'A', 'D', 'D', 'U', 0,
  /* 3370 */ 'D', 'S', 'R', 'A', 'V', 0,
  /* 3376 */ 'D', 'S', 'D', 'I', 'V', 0,
  /* 3382 */ 'D', 'U', 'D', 'I', 'V', 0,
  /* 3388 */ 'D', 'S', 'L', 'L', 'V', 0,
  /* 3394 */ 'D', 'S', 'R', 'L', 'V', 0,
  /* 3400 */ 'D', 'R', 'O', 'T', 'R', 'V', 0,
  /* 3407 */ 'U', 'L', 'W', 0,
  /* 3411 */ 'U', 'S', 'W', 0,
  /* 3415 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'W', 0,
  /* 3425 */ 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'W', 0,
  /* 3435 */ 'C', 'V', 'T', '_', 'S', '_', 'W', 0,
  /* 3443 */ 'C', 'O', 'P', 'Y', 0,
  /* 3448 */ 'B', 'G', 'E', 'Z', 0,
  /* 3453 */ 'B', 'L', 'E', 'Z', 0,
  /* 3458 */ 'D', 'C', 'L', 'Z', 0,
  /* 3463 */ 'B', 'G', 'T', 'Z', 0,
  /* 3468 */ 'B', 'L', 'T', 'Z', 0,
  /* 3473 */ 'D', 'y', 'n', 'A', 'l', 'l', 'o', 'c', 0,
  /* 3482 */ 'A', 'D', 'D', 'i', 0,
  /* 3487 */ 'D', 'A', 'N', 'D', 'i', 0,
  /* 3493 */ 'X', 'O', 'R', 'i', 0,
  /* 3498 */ 'S', 'L', 'T', 'i', 0,
  /* 3503 */ 'L', 'U', 'i', 0,
  /* 3507 */ 'L', 'B', 'u', 0,
  /* 3511 */ 'D', 'S', 'U', 'B', 'u', 0,
  /* 3517 */ 'D', 'A', 'D', 'D', 'u', 0,
  /* 3523 */ 'U', 'L', 'H', 'u', 0,
  /* 3528 */ 'S', 'L', 'T', 'u', 0,
  /* 3533 */ 'D', 'M', 'U', 'L', 'T', 'u', 0,
  /* 3540 */ 'D', 'A', 'D', 'D', 'i', 'u', 0,
  /* 3547 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', 0,
  /* 3557 */ 'S', 'L', 'T', 'i', 'u', 0,
};

extern const unsigned MipsInstrNameIndices[] = {
    2799U, 2958U, 2891U, 2904U, 2882U, 2913U, 2729U, 2744U, 
    2716U, 2758U, 3076U, 2701U, 2667U, 3443U, 2680U, 2642U, 
    3482U, 3541U, 3518U, 2968U, 3004U, 2659U, 523U, 3488U, 
    1393U, 2246U, 392U, 1764U, 1044U, 2020U, 1544U, 2421U, 
    1316U, 2157U, 315U, 1675U, 936U, 1931U, 1471U, 2336U, 
    1357U, 2204U, 356U, 1722U, 977U, 1978U, 1510U, 2381U, 
    1336U, 2180U, 335U, 1698U, 956U, 1954U, 1490U, 2358U, 
    1433U, 2292U, 432U, 1810U, 1084U, 2066U, 1582U, 2465U, 
    1296U, 2134U, 295U, 1652U, 916U, 1908U, 1452U, 2314U, 
    1413U, 2269U, 412U, 1787U, 1064U, 2043U, 1563U, 2443U, 
    1377U, 2227U, 376U, 1745U, 1028U, 2001U, 1529U, 2403U, 
    2616U, 2711U, 3334U, 3019U, 1126U, 3448U, 1182U, 2868U, 
    3463U, 1196U, 3453U, 1189U, 3468U, 1203U, 2875U, 2687U, 
    821U, 827U, 666U, 3224U, 262U, 788U, 3307U, 18U, 
    2986U, 3459U, 2691U, 29U, 3093U, 3415U, 2940U, 3103U, 
    3425U, 689U, 3243U, 191U, 717U, 2950U, 3435U, 285U, 
    811U, 3326U, 3540U, 3517U, 3487U, 2985U, 3458U, 3353U, 
    3071U, 23U, 34U, 3347U, 3533U, 3051U, 3400U, 2772U, 
    3376U, 2646U, 2918U, 460U, 3388U, 2609U, 3370U, 2923U, 
    3394U, 3511U, 3382U, 3473U, 1219U, 3354U, 840U, 182U, 
    708U, 3251U, 105U, 574U, 3150U, 173U, 699U, 451U, 
    220U, 746U, 3273U, 677U, 3233U, 273U, 799U, 3316U, 
    229U, 755U, 3280U, 164U, 633U, 3197U, 133U, 602U, 
    3172U, 201U, 727U, 3258U, 86U, 555U, 3135U, 3072U, 
    2862U, 2864U, 3038U, 1137U, 3035U, 1132U, 2618U, 513U, 
    1874U, 2486U, 3507U, 1250U, 2106U, 2594U, 2652U, 8U, 
    477U, 1832U, 50U, 491U, 1852U, 2512U, 3547U, 1276U, 
    2787U, 865U, 1891U, 2533U, 3524U, 1257U, 2116U, 2602U, 
    2915U, 2651U, 2511U, 2546U, 62U, 1616U, 3503U, 1244U, 
    3408U, 1171U, 2089U, 40U, 1600U, 2932U, 2552U, 3063U, 
    2566U, 74U, 1634U, 2581U, 1270U, 2125U, 2641U, 3364U, 
    115U, 584U, 3158U, 24U, 2794U, 876U, 2990U, 1112U, 
    3023U, 124U, 593U, 2830U, 997U, 3165U, 529U, 2808U, 
    890U, 3113U, 142U, 611U, 2837U, 1006U, 3179U, 211U, 
    737U, 2855U, 1103U, 3266U, 542U, 2819U, 903U, 3124U, 
    153U, 622U, 2846U, 1017U, 3188U, 2624U, 3358U, 96U, 
    565U, 3143U, 35U, 2803U, 883U, 2995U, 1119U, 2928U, 
    3348U, 3534U, 114U, 583U, 3157U, 95U, 564U, 3142U, 
    3000U, 3043U, 1144U, 3044U, 1145U, 3494U, 1231U, 3057U, 
    1156U, 3339U, 3052U, 3401U, 654U, 3214U, 250U, 776U, 
    3297U, 2621U, 518U, 1882U, 2492U, 2634U, 2637U, 2504U, 
    2498U, 2664U, 13U, 484U, 1842U, 3377U, 56U, 499U, 
    1863U, 2526U, 2614U, 507U, 2782U, 858U, 0U, 470U, 
    2791U, 871U, 1900U, 2540U, 2919U, 461U, 1210U, 3389U, 
    3343U, 1164U, 3498U, 1237U, 3557U, 1288U, 3528U, 1263U, 
    2610U, 3371U, 2924U, 3395U, 2625U, 3512U, 68U, 1625U, 
    3412U, 1177U, 2098U, 45U, 1608U, 2936U, 2559U, 3067U, 
    2573U, 80U, 1643U, 2588U, 2629U, 642U, 3204U, 238U, 
    764U, 3287U, 3383U, 2655U, 2518U, 2786U, 864U, 1890U, 
    2532U, 3523U, 1256U, 2115U, 2601U, 3407U, 1170U, 2088U, 
    2580U, 2663U, 2525U, 2790U, 870U, 1899U, 2539U, 3411U, 
    1176U, 2097U, 2587U, 2777U, 3047U, 1150U, 3493U, 1230U, 
};

static inline void InitMipsMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 416);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MipsGenInstrInfo : public TargetInstrInfoImpl {
  explicit MipsGenInstrInfo(int SO = -1, int DO = -1);
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR
#undef GET_INSTRINFO_CTOR
namespace llvm {
extern const MCInstrDesc MipsInsts[];
extern const unsigned MipsInstrNameIndices[];
extern const char MipsInstrNameData[];
MipsGenInstrInfo::MipsGenInstrInfo(int SO, int DO)
  : TargetInstrInfoImpl(SO, DO) {
  InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 416);
}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR

