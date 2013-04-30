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

namespace PPC {
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
    ADD4	= 15,
    ADD8	= 16,
    ADDC	= 17,
    ADDC8	= 18,
    ADDE	= 19,
    ADDE8	= 20,
    ADDI	= 21,
    ADDI8	= 22,
    ADDIC	= 23,
    ADDIC8	= 24,
    ADDICo	= 25,
    ADDIS	= 26,
    ADDIS8	= 27,
    ADDME	= 28,
    ADDME8	= 29,
    ADDZE	= 30,
    ADDZE8	= 31,
    ADJCALLSTACKDOWN	= 32,
    ADJCALLSTACKUP	= 33,
    AND	= 34,
    AND8	= 35,
    ANDC	= 36,
    ANDC8	= 37,
    ANDISo	= 38,
    ANDISo8	= 39,
    ANDIo	= 40,
    ANDIo8	= 41,
    ATOMIC_CMP_SWAP_I16	= 42,
    ATOMIC_CMP_SWAP_I32	= 43,
    ATOMIC_CMP_SWAP_I64	= 44,
    ATOMIC_CMP_SWAP_I8	= 45,
    ATOMIC_LOAD_ADD_I16	= 46,
    ATOMIC_LOAD_ADD_I32	= 47,
    ATOMIC_LOAD_ADD_I64	= 48,
    ATOMIC_LOAD_ADD_I8	= 49,
    ATOMIC_LOAD_AND_I16	= 50,
    ATOMIC_LOAD_AND_I32	= 51,
    ATOMIC_LOAD_AND_I64	= 52,
    ATOMIC_LOAD_AND_I8	= 53,
    ATOMIC_LOAD_NAND_I16	= 54,
    ATOMIC_LOAD_NAND_I32	= 55,
    ATOMIC_LOAD_NAND_I64	= 56,
    ATOMIC_LOAD_NAND_I8	= 57,
    ATOMIC_LOAD_OR_I16	= 58,
    ATOMIC_LOAD_OR_I32	= 59,
    ATOMIC_LOAD_OR_I64	= 60,
    ATOMIC_LOAD_OR_I8	= 61,
    ATOMIC_LOAD_SUB_I16	= 62,
    ATOMIC_LOAD_SUB_I32	= 63,
    ATOMIC_LOAD_SUB_I64	= 64,
    ATOMIC_LOAD_SUB_I8	= 65,
    ATOMIC_LOAD_XOR_I16	= 66,
    ATOMIC_LOAD_XOR_I32	= 67,
    ATOMIC_LOAD_XOR_I64	= 68,
    ATOMIC_LOAD_XOR_I8	= 69,
    ATOMIC_SWAP_I16	= 70,
    ATOMIC_SWAP_I32	= 71,
    ATOMIC_SWAP_I64	= 72,
    ATOMIC_SWAP_I8	= 73,
    B	= 74,
    BCC	= 75,
    BCTR	= 76,
    BCTR8	= 77,
    BCTRL8_Darwin	= 78,
    BCTRL8_ELF	= 79,
    BCTRL_Darwin	= 80,
    BCTRL_SVR4	= 81,
    BL8_Darwin	= 82,
    BL8_ELF	= 83,
    BL8_NOP_ELF	= 84,
    BLA8_Darwin	= 85,
    BLA8_ELF	= 86,
    BLA8_NOP_ELF	= 87,
    BLA_Darwin	= 88,
    BLA_SVR4	= 89,
    BLR	= 90,
    BL_Darwin	= 91,
    BL_SVR4	= 92,
    CMPD	= 93,
    CMPDI	= 94,
    CMPLD	= 95,
    CMPLDI	= 96,
    CMPLW	= 97,
    CMPLWI	= 98,
    CMPW	= 99,
    CMPWI	= 100,
    CNTLZD	= 101,
    CNTLZW	= 102,
    CREQV	= 103,
    CROR	= 104,
    CRSET	= 105,
    CRUNSET	= 106,
    DCBA	= 107,
    DCBF	= 108,
    DCBI	= 109,
    DCBST	= 110,
    DCBT	= 111,
    DCBTST	= 112,
    DCBZ	= 113,
    DCBZL	= 114,
    DIVD	= 115,
    DIVDU	= 116,
    DIVW	= 117,
    DIVWU	= 118,
    DSS	= 119,
    DSSALL	= 120,
    DST	= 121,
    DST64	= 122,
    DSTST	= 123,
    DSTST64	= 124,
    DSTSTT	= 125,
    DSTSTT64	= 126,
    DSTT	= 127,
    DSTT64	= 128,
    DYNALLOC	= 129,
    DYNALLOC8	= 130,
    EQV	= 131,
    EQV8	= 132,
    EXTSB	= 133,
    EXTSB8	= 134,
    EXTSH	= 135,
    EXTSH8	= 136,
    EXTSW	= 137,
    EXTSW_32	= 138,
    EXTSW_32_64	= 139,
    FABSD	= 140,
    FABSS	= 141,
    FADD	= 142,
    FADDS	= 143,
    FADDrtz	= 144,
    FCFID	= 145,
    FCMPUD	= 146,
    FCMPUS	= 147,
    FCTIDZ	= 148,
    FCTIWZ	= 149,
    FDIV	= 150,
    FDIVS	= 151,
    FMADD	= 152,
    FMADDS	= 153,
    FMR	= 154,
    FMSUB	= 155,
    FMSUBS	= 156,
    FMUL	= 157,
    FMULS	= 158,
    FNABSD	= 159,
    FNABSS	= 160,
    FNEGD	= 161,
    FNEGS	= 162,
    FNMADD	= 163,
    FNMADDS	= 164,
    FNMSUB	= 165,
    FNMSUBS	= 166,
    FRSP	= 167,
    FSELD	= 168,
    FSELS	= 169,
    FSQRT	= 170,
    FSQRTS	= 171,
    FSUB	= 172,
    FSUBS	= 173,
    LA	= 174,
    LBZ	= 175,
    LBZ8	= 176,
    LBZU	= 177,
    LBZU8	= 178,
    LBZX	= 179,
    LBZX8	= 180,
    LD	= 181,
    LDARX	= 182,
    LDU	= 183,
    LDX	= 184,
    LDinto_toc	= 185,
    LDtoc	= 186,
    LDtoc_restore	= 187,
    LFD	= 188,
    LFDU	= 189,
    LFDX	= 190,
    LFS	= 191,
    LFSU	= 192,
    LFSX	= 193,
    LHA	= 194,
    LHA8	= 195,
    LHAU	= 196,
    LHAU8	= 197,
    LHAX	= 198,
    LHAX8	= 199,
    LHBRX	= 200,
    LHZ	= 201,
    LHZ8	= 202,
    LHZU	= 203,
    LHZU8	= 204,
    LHZX	= 205,
    LHZX8	= 206,
    LI	= 207,
    LI8	= 208,
    LIS	= 209,
    LIS8	= 210,
    LVEBX	= 211,
    LVEHX	= 212,
    LVEWX	= 213,
    LVSL	= 214,
    LVSR	= 215,
    LVX	= 216,
    LVXL	= 217,
    LWA	= 218,
    LWARX	= 219,
    LWAX	= 220,
    LWBRX	= 221,
    LWZ	= 222,
    LWZ8	= 223,
    LWZU	= 224,
    LWZU8	= 225,
    LWZX	= 226,
    LWZX8	= 227,
    MCRF	= 228,
    MFCR	= 229,
    MFCR8	= 230,
    MFCR8pseud	= 231,
    MFCRpseud	= 232,
    MFCTR	= 233,
    MFCTR8	= 234,
    MFFS	= 235,
    MFLR	= 236,
    MFLR8	= 237,
    MFOCRF	= 238,
    MFVRSAVE	= 239,
    MFVSCR	= 240,
    MTCRF	= 241,
    MTCRF8	= 242,
    MTCTR	= 243,
    MTCTR8	= 244,
    MTFSB0	= 245,
    MTFSB1	= 246,
    MTFSF	= 247,
    MTLR	= 248,
    MTLR8	= 249,
    MTVRSAVE	= 250,
    MTVSCR	= 251,
    MULHD	= 252,
    MULHDU	= 253,
    MULHW	= 254,
    MULHWU	= 255,
    MULLD	= 256,
    MULLI	= 257,
    MULLW	= 258,
    MovePCtoLR	= 259,
    MovePCtoLR8	= 260,
    NAND	= 261,
    NAND8	= 262,
    NEG	= 263,
    NEG8	= 264,
    NOP	= 265,
    NOR	= 266,
    NOR8	= 267,
    OR	= 268,
    OR4To8	= 269,
    OR8	= 270,
    OR8To4	= 271,
    ORC	= 272,
    ORC8	= 273,
    ORI	= 274,
    ORI8	= 275,
    ORIS	= 276,
    ORIS8	= 277,
    RESTORE_CR	= 278,
    RLDCL	= 279,
    RLDICL	= 280,
    RLDICR	= 281,
    RLDIMI	= 282,
    RLWIMI	= 283,
    RLWINM	= 284,
    RLWINM8	= 285,
    RLWINMo	= 286,
    RLWNM	= 287,
    SELECT_CC_F4	= 288,
    SELECT_CC_F8	= 289,
    SELECT_CC_I4	= 290,
    SELECT_CC_I8	= 291,
    SELECT_CC_VRRC	= 292,
    SLD	= 293,
    SLW	= 294,
    SPILL_CR	= 295,
    SRAD	= 296,
    SRADI	= 297,
    SRAW	= 298,
    SRAWI	= 299,
    SRD	= 300,
    SRW	= 301,
    STB	= 302,
    STB8	= 303,
    STBU	= 304,
    STBU8	= 305,
    STBX	= 306,
    STBX8	= 307,
    STD	= 308,
    STDCX	= 309,
    STDU	= 310,
    STDUX	= 311,
    STDX	= 312,
    STDX_32	= 313,
    STD_32	= 314,
    STFD	= 315,
    STFDU	= 316,
    STFDX	= 317,
    STFIWX	= 318,
    STFS	= 319,
    STFSU	= 320,
    STFSX	= 321,
    STH	= 322,
    STH8	= 323,
    STHBRX	= 324,
    STHU	= 325,
    STHU8	= 326,
    STHX	= 327,
    STHX8	= 328,
    STVEBX	= 329,
    STVEHX	= 330,
    STVEWX	= 331,
    STVX	= 332,
    STVXL	= 333,
    STW	= 334,
    STW8	= 335,
    STWBRX	= 336,
    STWCX	= 337,
    STWU	= 338,
    STWUX	= 339,
    STWX	= 340,
    STWX8	= 341,
    SUBF	= 342,
    SUBF8	= 343,
    SUBFC	= 344,
    SUBFC8	= 345,
    SUBFE	= 346,
    SUBFE8	= 347,
    SUBFIC	= 348,
    SUBFIC8	= 349,
    SUBFME	= 350,
    SUBFME8	= 351,
    SUBFZE	= 352,
    SUBFZE8	= 353,
    SYNC	= 354,
    TAILB	= 355,
    TAILB8	= 356,
    TAILBA	= 357,
    TAILBA8	= 358,
    TAILBCTR	= 359,
    TAILBCTR8	= 360,
    TCRETURNai	= 361,
    TCRETURNai8	= 362,
    TCRETURNdi	= 363,
    TCRETURNdi8	= 364,
    TCRETURNri	= 365,
    TCRETURNri8	= 366,
    TRAP	= 367,
    UPDATE_VRSAVE	= 368,
    VADDCUW	= 369,
    VADDFP	= 370,
    VADDSBS	= 371,
    VADDSHS	= 372,
    VADDSWS	= 373,
    VADDUBM	= 374,
    VADDUBS	= 375,
    VADDUHM	= 376,
    VADDUHS	= 377,
    VADDUWM	= 378,
    VADDUWS	= 379,
    VAND	= 380,
    VANDC	= 381,
    VAVGSB	= 382,
    VAVGSH	= 383,
    VAVGSW	= 384,
    VAVGUB	= 385,
    VAVGUH	= 386,
    VAVGUW	= 387,
    VCFSX	= 388,
    VCFUX	= 389,
    VCMPBFP	= 390,
    VCMPBFPo	= 391,
    VCMPEQFP	= 392,
    VCMPEQFPo	= 393,
    VCMPEQUB	= 394,
    VCMPEQUBo	= 395,
    VCMPEQUH	= 396,
    VCMPEQUHo	= 397,
    VCMPEQUW	= 398,
    VCMPEQUWo	= 399,
    VCMPGEFP	= 400,
    VCMPGEFPo	= 401,
    VCMPGTFP	= 402,
    VCMPGTFPo	= 403,
    VCMPGTSB	= 404,
    VCMPGTSBo	= 405,
    VCMPGTSH	= 406,
    VCMPGTSHo	= 407,
    VCMPGTSW	= 408,
    VCMPGTSWo	= 409,
    VCMPGTUB	= 410,
    VCMPGTUBo	= 411,
    VCMPGTUH	= 412,
    VCMPGTUHo	= 413,
    VCMPGTUW	= 414,
    VCMPGTUWo	= 415,
    VCTSXS	= 416,
    VCTUXS	= 417,
    VEXPTEFP	= 418,
    VLOGEFP	= 419,
    VMADDFP	= 420,
    VMAXFP	= 421,
    VMAXSB	= 422,
    VMAXSH	= 423,
    VMAXSW	= 424,
    VMAXUB	= 425,
    VMAXUH	= 426,
    VMAXUW	= 427,
    VMHADDSHS	= 428,
    VMHRADDSHS	= 429,
    VMINFP	= 430,
    VMINSB	= 431,
    VMINSH	= 432,
    VMINSW	= 433,
    VMINUB	= 434,
    VMINUH	= 435,
    VMINUW	= 436,
    VMLADDUHM	= 437,
    VMRGHB	= 438,
    VMRGHH	= 439,
    VMRGHW	= 440,
    VMRGLB	= 441,
    VMRGLH	= 442,
    VMRGLW	= 443,
    VMSUMMBM	= 444,
    VMSUMSHM	= 445,
    VMSUMSHS	= 446,
    VMSUMUBM	= 447,
    VMSUMUHM	= 448,
    VMSUMUHS	= 449,
    VMULESB	= 450,
    VMULESH	= 451,
    VMULEUB	= 452,
    VMULEUH	= 453,
    VMULOSB	= 454,
    VMULOSH	= 455,
    VMULOUB	= 456,
    VMULOUH	= 457,
    VNMSUBFP	= 458,
    VNOR	= 459,
    VOR	= 460,
    VPERM	= 461,
    VPKPX	= 462,
    VPKSHSS	= 463,
    VPKSHUS	= 464,
    VPKSWSS	= 465,
    VPKSWUS	= 466,
    VPKUHUM	= 467,
    VPKUHUS	= 468,
    VPKUWUM	= 469,
    VPKUWUS	= 470,
    VREFP	= 471,
    VRFIM	= 472,
    VRFIN	= 473,
    VRFIP	= 474,
    VRFIZ	= 475,
    VRLB	= 476,
    VRLH	= 477,
    VRLW	= 478,
    VRSQRTEFP	= 479,
    VSEL	= 480,
    VSL	= 481,
    VSLB	= 482,
    VSLDOI	= 483,
    VSLH	= 484,
    VSLO	= 485,
    VSLW	= 486,
    VSPLTB	= 487,
    VSPLTH	= 488,
    VSPLTISB	= 489,
    VSPLTISH	= 490,
    VSPLTISW	= 491,
    VSPLTW	= 492,
    VSR	= 493,
    VSRAB	= 494,
    VSRAH	= 495,
    VSRAW	= 496,
    VSRB	= 497,
    VSRH	= 498,
    VSRO	= 499,
    VSRW	= 500,
    VSUBCUW	= 501,
    VSUBFP	= 502,
    VSUBSBS	= 503,
    VSUBSHS	= 504,
    VSUBSWS	= 505,
    VSUBUBM	= 506,
    VSUBUBS	= 507,
    VSUBUHM	= 508,
    VSUBUHS	= 509,
    VSUBUWM	= 510,
    VSUBUWS	= 511,
    VSUM2SWS	= 512,
    VSUM4SBS	= 513,
    VSUM4SHS	= 514,
    VSUM4UBS	= 515,
    VSUMSWS	= 516,
    VUPKHPX	= 517,
    VUPKHSB	= 518,
    VUPKHSH	= 519,
    VUPKLPX	= 520,
    VUPKLSB	= 521,
    VUPKLSH	= 522,
    VXOR	= 523,
    V_SET0	= 524,
    XOR	= 525,
    XOR8	= 526,
    XORI	= 527,
    XORI8	= 528,
    XORIS	= 529,
    XORIS8	= 530,
    INSTRUCTION_LIST_END = 531
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

static const uint16_t ImplicitList1[] = { PPC::CARRY, 0 };
static const uint16_t ImplicitList2[] = { PPC::R1, 0 };
static const uint16_t ImplicitList3[] = { PPC::CR0, 0 };
static const uint16_t ImplicitList4[] = { PPC::CTR, 0 };
static const uint16_t ImplicitList5[] = { PPC::CTR8, PPC::RM, 0 };
static const uint16_t ImplicitList6[] = { PPC::LR8, 0 };
static const uint16_t ImplicitList7[] = { PPC::X11, PPC::CTR8, PPC::RM, 0 };
static const uint16_t ImplicitList8[] = { PPC::CTR, PPC::RM, 0 };
static const uint16_t ImplicitList9[] = { PPC::LR, 0 };
static const uint16_t ImplicitList10[] = { PPC::RM, 0 };
static const uint16_t ImplicitList11[] = { PPC::LR, PPC::RM, 0 };
static const uint16_t ImplicitList12[] = { PPC::X1, 0 };
static const uint16_t ImplicitList13[] = { PPC::CTR8, 0 };
static const uint16_t ImplicitList14[] = { PPC::CR6, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { -1, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { -1, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo46[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo47[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo53[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo56[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo67[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo84[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo85[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo86[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo87[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { PPC::CTRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { PPC::CTRRC8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc PPCInsts[] = {
  { 0,	0,	0,	53,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #0 = PHI
  { 1,	0,	0,	53,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #1 = INLINEASM
  { 2,	1,	0,	53,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #2 = PROLOG_LABEL
  { 3,	1,	0,	53,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	53,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	53,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #5 = KILL
  { 6,	3,	1,	53,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo3 },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	53,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo4 },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	53,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	53,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo6 },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	53,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo3 },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	53,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #11 = DBG_VALUE
  { 12,	1,	1,	53,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	53,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo7 },  // Inst #13 = COPY
  { 14,	0,	0,	53,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #14 = BUNDLE
  { 15,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #15 = ADD4
  { 16,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #16 = ADD8
  { 17,	3,	1,	14,	0,	0, 0xcULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #17 = ADDC
  { 18,	3,	1,	14,	0,	0, 0xcULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #18 = ADDC8
  { 19,	3,	1,	14,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo8 },  // Inst #19 = ADDE
  { 20,	3,	1,	14,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo9 },  // Inst #20 = ADDE8
  { 21,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #21 = ADDI
  { 22,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #22 = ADDI8
  { 23,	3,	1,	14,	0,	0, 0xcULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #23 = ADDIC
  { 24,	3,	1,	14,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #24 = ADDIC8
  { 25,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #25 = ADDICo
  { 26,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #26 = ADDIS
  { 27,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #27 = ADDIS8
  { 28,	2,	1,	14,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo12 },  // Inst #28 = ADDME
  { 29,	2,	1,	14,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo13 },  // Inst #29 = ADDME8
  { 30,	2,	1,	14,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo12 },  // Inst #30 = ADDZE
  { 31,	2,	1,	14,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo13 },  // Inst #31 = ADDZE8
  { 32,	1,	0,	53,	0,	0, 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo5 },  // Inst #32 = ADJCALLSTACKDOWN
  { 33,	2,	0,	53,	0,	0, 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo7 },  // Inst #33 = ADJCALLSTACKUP
  { 34,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #34 = AND
  { 35,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #35 = AND8
  { 36,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #36 = ANDC
  { 37,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #37 = ANDC8
  { 38,	3,	1,	14,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo10 },  // Inst #38 = ANDISo
  { 39,	3,	1,	14,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo11 },  // Inst #39 = ANDISo8
  { 40,	3,	1,	14,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo10 },  // Inst #40 = ANDIo
  { 41,	3,	1,	14,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo11 },  // Inst #41 = ANDIo8
  { 42,	5,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo14 },  // Inst #42 = ATOMIC_CMP_SWAP_I16
  { 43,	5,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo14 },  // Inst #43 = ATOMIC_CMP_SWAP_I32
  { 44,	5,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo15 },  // Inst #44 = ATOMIC_CMP_SWAP_I64
  { 45,	5,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo14 },  // Inst #45 = ATOMIC_CMP_SWAP_I8
  { 46,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #46 = ATOMIC_LOAD_ADD_I16
  { 47,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #47 = ATOMIC_LOAD_ADD_I32
  { 48,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo17 },  // Inst #48 = ATOMIC_LOAD_ADD_I64
  { 49,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #49 = ATOMIC_LOAD_ADD_I8
  { 50,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #50 = ATOMIC_LOAD_AND_I16
  { 51,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #51 = ATOMIC_LOAD_AND_I32
  { 52,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo17 },  // Inst #52 = ATOMIC_LOAD_AND_I64
  { 53,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #53 = ATOMIC_LOAD_AND_I8
  { 54,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #54 = ATOMIC_LOAD_NAND_I16
  { 55,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #55 = ATOMIC_LOAD_NAND_I32
  { 56,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo17 },  // Inst #56 = ATOMIC_LOAD_NAND_I64
  { 57,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #57 = ATOMIC_LOAD_NAND_I8
  { 58,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #58 = ATOMIC_LOAD_OR_I16
  { 59,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #59 = ATOMIC_LOAD_OR_I32
  { 60,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo17 },  // Inst #60 = ATOMIC_LOAD_OR_I64
  { 61,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #61 = ATOMIC_LOAD_OR_I8
  { 62,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #62 = ATOMIC_LOAD_SUB_I16
  { 63,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #63 = ATOMIC_LOAD_SUB_I32
  { 64,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo17 },  // Inst #64 = ATOMIC_LOAD_SUB_I64
  { 65,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #65 = ATOMIC_LOAD_SUB_I8
  { 66,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #66 = ATOMIC_LOAD_XOR_I16
  { 67,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #67 = ATOMIC_LOAD_XOR_I32
  { 68,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo17 },  // Inst #68 = ATOMIC_LOAD_XOR_I64
  { 69,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #69 = ATOMIC_LOAD_XOR_I8
  { 70,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #70 = ATOMIC_SWAP_I16
  { 71,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #71 = ATOMIC_SWAP_I32
  { 72,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo17 },  // Inst #72 = ATOMIC_SWAP_I64
  { 73,	4,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #73 = ATOMIC_SWAP_I8
  { 74,	1,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x38ULL, NULL, NULL, OperandInfo5 },  // Inst #74 = B
  { 75,	3,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::Predicable)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, NULL, NULL, OperandInfo18 },  // Inst #75 = BCC
  { 76,	0,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList4, NULL, 0 },  // Inst #76 = BCTR
  { 77,	0,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, NULL, 0 },  // Inst #77 = BCTR8
  { 78,	0,	0,	0,	0,	0|(1<<MCID::Call)|(1<<MCID::Variadic), 0x38ULL, ImplicitList5, ImplicitList6, 0 },  // Inst #78 = BCTRL8_Darwin
  { 79,	0,	0,	0,	0,	0|(1<<MCID::Call)|(1<<MCID::Variadic), 0x38ULL, ImplicitList7, ImplicitList6, 0 },  // Inst #79 = BCTRL8_ELF
  { 80,	0,	0,	0,	0,	0|(1<<MCID::Call)|(1<<MCID::Variadic), 0x38ULL, ImplicitList8, ImplicitList9, 0 },  // Inst #80 = BCTRL_Darwin
  { 81,	0,	0,	0,	0,	0|(1<<MCID::Call)|(1<<MCID::Variadic), 0x38ULL, ImplicitList8, ImplicitList9, 0 },  // Inst #81 = BCTRL_SVR4
  { 82,	1,	0,	0,	0,	0|(1<<MCID::Call)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList10, ImplicitList6, OperandInfo5 },  // Inst #82 = BL8_Darwin
  { 83,	1,	0,	0,	0,	0|(1<<MCID::Call)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList10, ImplicitList6, OperandInfo5 },  // Inst #83 = BL8_ELF
  { 84,	1,	0,	0,	0,	0|(1<<MCID::Call)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList10, ImplicitList6, OperandInfo5 },  // Inst #84 = BL8_NOP_ELF
  { 85,	1,	0,	0,	0,	0|(1<<MCID::Call)|(1<<MCID::Variadic), 0x38ULL, ImplicitList10, ImplicitList6, OperandInfo5 },  // Inst #85 = BLA8_Darwin
  { 86,	1,	0,	0,	0,	0|(1<<MCID::Call)|(1<<MCID::Variadic), 0x38ULL, ImplicitList10, ImplicitList6, OperandInfo5 },  // Inst #86 = BLA8_ELF
  { 87,	1,	0,	0,	0,	0|(1<<MCID::Call)|(1<<MCID::Variadic), 0x38ULL, ImplicitList10, ImplicitList6, OperandInfo5 },  // Inst #87 = BLA8_NOP_ELF
  { 88,	1,	0,	0,	0,	0|(1<<MCID::Call)|(1<<MCID::Variadic), 0x38ULL, ImplicitList10, ImplicitList9, OperandInfo5 },  // Inst #88 = BLA_Darwin
  { 89,	1,	0,	0,	0,	0|(1<<MCID::Call)|(1<<MCID::Variadic), 0x38ULL, ImplicitList10, ImplicitList9, OperandInfo5 },  // Inst #89 = BLA_SVR4
  { 90,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Predicable)|(1<<MCID::Terminator)|(1<<MCID::Variadic), 0x38ULL, ImplicitList11, NULL, OperandInfo19 },  // Inst #90 = BLR
  { 91,	1,	0,	0,	0,	0|(1<<MCID::Call)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList10, ImplicitList9, OperandInfo5 },  // Inst #91 = BL_Darwin
  { 92,	1,	0,	0,	0,	0|(1<<MCID::Call)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList10, ImplicitList9, OperandInfo5 },  // Inst #92 = BL_SVR4
  { 93,	3,	1,	11,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo20 },  // Inst #93 = CMPD
  { 94,	3,	1,	11,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo21 },  // Inst #94 = CMPDI
  { 95,	3,	1,	11,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo20 },  // Inst #95 = CMPLD
  { 96,	3,	1,	11,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo21 },  // Inst #96 = CMPLDI
  { 97,	3,	1,	11,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo22 },  // Inst #97 = CMPLW
  { 98,	3,	1,	11,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo23 },  // Inst #98 = CMPLWI
  { 99,	3,	1,	11,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo22 },  // Inst #99 = CMPW
  { 100,	3,	1,	11,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo23 },  // Inst #100 = CMPWI
  { 101,	2,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #101 = CNTLZD
  { 102,	2,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #102 = CNTLZW
  { 103,	3,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #103 = CREQV
  { 104,	3,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #104 = CROR
  { 105,	1,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #105 = CRSET
  { 106,	1,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #106 = CRUNSET
  { 107,	2,	0,	30,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #107 = DCBA
  { 108,	2,	0,	30,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #108 = DCBF
  { 109,	2,	0,	30,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #109 = DCBI
  { 110,	2,	0,	30,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #110 = DCBST
  { 111,	2,	0,	30,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #111 = DCBT
  { 112,	2,	0,	30,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #112 = DCBTST
  { 113,	2,	0,	30,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #113 = DCBZ
  { 114,	2,	0,	30,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #114 = DCBZL
  { 115,	3,	1,	12,	0,	0, 0xdULL, NULL, NULL, OperandInfo9 },  // Inst #115 = DIVD
  { 116,	3,	1,	12,	0,	0, 0xdULL, NULL, NULL, OperandInfo9 },  // Inst #116 = DIVDU
  { 117,	3,	1,	13,	0,	0, 0xdULL, NULL, NULL, OperandInfo8 },  // Inst #117 = DIVW
  { 118,	3,	1,	13,	0,	0, 0xdULL, NULL, NULL, OperandInfo8 },  // Inst #118 = DIVWU
  { 119,	4,	0,	43,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #119 = DSS
  { 120,	4,	0,	43,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #120 = DSSALL
  { 121,	4,	0,	43,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #121 = DST
  { 122,	4,	0,	43,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #122 = DST64
  { 123,	4,	0,	43,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #123 = DSTST
  { 124,	4,	0,	43,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #124 = DSTST64
  { 125,	4,	0,	43,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #125 = DSTSTT
  { 126,	4,	0,	43,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #126 = DSTSTT64
  { 127,	4,	0,	43,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #127 = DSTT
  { 128,	4,	0,	43,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #128 = DSTT64
  { 129,	4,	1,	53,	0,	0, 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo30 },  // Inst #129 = DYNALLOC
  { 130,	4,	1,	53,	0,	0, 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo31 },  // Inst #130 = DYNALLOC8
  { 131,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #131 = EQV
  { 132,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #132 = EQV8
  { 133,	2,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #133 = EXTSB
  { 134,	2,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #134 = EXTSB8
  { 135,	2,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #135 = EXTSH
  { 136,	2,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #136 = EXTSH8
  { 137,	2,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #137 = EXTSW
  { 138,	2,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #138 = EXTSW_32
  { 139,	2,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo32 },  // Inst #139 = EXTSW_32_64
  { 140,	2,	1,	8,	0,	0, 0x18ULL, NULL, NULL, OperandInfo33 },  // Inst #140 = FABSD
  { 141,	2,	1,	8,	0,	0, 0x18ULL, NULL, NULL, OperandInfo34 },  // Inst #141 = FABSS
  { 142,	3,	1,	8,	0,	0, 0x18ULL, ImplicitList10, NULL, OperandInfo35 },  // Inst #142 = FADD
  { 143,	3,	1,	8,	0,	0, 0x18ULL, ImplicitList10, NULL, OperandInfo36 },  // Inst #143 = FADDS
  { 144,	3,	1,	8,	0,	0, 0x1aULL, ImplicitList10, NULL, OperandInfo35 },  // Inst #144 = FADDrtz
  { 145,	2,	1,	8,	0,	0, 0x18ULL, ImplicitList10, NULL, OperandInfo33 },  // Inst #145 = FCFID
  { 146,	3,	1,	4,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x18ULL, NULL, NULL, OperandInfo37 },  // Inst #146 = FCMPUD
  { 147,	3,	1,	4,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x18ULL, NULL, NULL, OperandInfo38 },  // Inst #147 = FCMPUS
  { 148,	2,	1,	8,	0,	0, 0x18ULL, ImplicitList10, NULL, OperandInfo33 },  // Inst #148 = FCTIDZ
  { 149,	2,	1,	8,	0,	0, 0x18ULL, ImplicitList10, NULL, OperandInfo33 },  // Inst #149 = FCTIWZ
  { 150,	3,	1,	5,	0,	0, 0x18ULL, ImplicitList10, NULL, OperandInfo35 },  // Inst #150 = FDIV
  { 151,	3,	1,	6,	0,	0, 0x18ULL, ImplicitList10, NULL, OperandInfo36 },  // Inst #151 = FDIVS
  { 152,	4,	1,	7,	0,	0, 0x18ULL, ImplicitList10, NULL, OperandInfo39 },  // Inst #152 = FMADD
  { 153,	4,	1,	8,	0,	0, 0x18ULL, ImplicitList10, NULL, OperandInfo40 },  // Inst #153 = FMADDS
  { 154,	2,	1,	8,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #154 = FMR
  { 155,	4,	1,	7,	0,	0, 0x18ULL, ImplicitList10, NULL, OperandInfo39 },  // Inst #155 = FMSUB
  { 156,	4,	1,	8,	0,	0, 0x18ULL, ImplicitList10, NULL, OperandInfo40 },  // Inst #156 = FMSUBS
  { 157,	3,	1,	7,	0,	0, 0x18ULL, ImplicitList10, NULL, OperandInfo35 },  // Inst #157 = FMUL
  { 158,	3,	1,	8,	0,	0, 0x18ULL, ImplicitList10, NULL, OperandInfo36 },  // Inst #158 = FMULS
  { 159,	2,	1,	8,	0,	0, 0x18ULL, NULL, NULL, OperandInfo33 },  // Inst #159 = FNABSD
  { 160,	2,	1,	8,	0,	0, 0x18ULL, NULL, NULL, OperandInfo34 },  // Inst #160 = FNABSS
  { 161,	2,	1,	8,	0,	0, 0x18ULL, NULL, NULL, OperandInfo33 },  // Inst #161 = FNEGD
  { 162,	2,	1,	8,	0,	0, 0x18ULL, NULL, NULL, OperandInfo34 },  // Inst #162 = FNEGS
  { 163,	4,	1,	7,	0,	0, 0x18ULL, ImplicitList10, NULL, OperandInfo39 },  // Inst #163 = FNMADD
  { 164,	4,	1,	8,	0,	0, 0x18ULL, ImplicitList10, NULL, OperandInfo40 },  // Inst #164 = FNMADDS
  { 165,	4,	1,	7,	0,	0, 0x18ULL, ImplicitList10, NULL, OperandInfo39 },  // Inst #165 = FNMSUB
  { 166,	4,	1,	8,	0,	0, 0x18ULL, ImplicitList10, NULL, OperandInfo40 },  // Inst #166 = FNMSUBS
  { 167,	2,	1,	8,	0,	0, 0x18ULL, ImplicitList10, NULL, OperandInfo41 },  // Inst #167 = FRSP
  { 168,	4,	1,	8,	0,	0, 0x18ULL, NULL, NULL, OperandInfo39 },  // Inst #168 = FSELD
  { 169,	4,	1,	8,	0,	0, 0x18ULL, NULL, NULL, OperandInfo42 },  // Inst #169 = FSELS
  { 170,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList10, NULL, OperandInfo33 },  // Inst #170 = FSQRT
  { 171,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList10, NULL, OperandInfo34 },  // Inst #171 = FSQRTS
  { 172,	3,	1,	8,	0,	0, 0x18ULL, ImplicitList10, NULL, OperandInfo35 },  // Inst #172 = FSUB
  { 173,	3,	1,	8,	0,	0, 0x18ULL, ImplicitList10, NULL, OperandInfo36 },  // Inst #173 = FSUBS
  { 174,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #174 = LA
  { 175,	3,	1,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo43 },  // Inst #175 = LBZ
  { 176,	3,	1,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo44 },  // Inst #176 = LBZ8
  { 177,	4,	2,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo45 },  // Inst #177 = LBZU
  { 178,	4,	2,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo46 },  // Inst #178 = LBZU8
  { 179,	3,	1,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo47 },  // Inst #179 = LBZX
  { 180,	3,	1,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo48 },  // Inst #180 = LBZX8
  { 181,	3,	1,	34,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo44 },  // Inst #181 = LD
  { 182,	3,	1,	35,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo48 },  // Inst #182 = LDARX
  { 183,	4,	2,	34,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo46 },  // Inst #183 = LDU
  { 184,	3,	1,	34,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo48 },  // Inst #184 = LDX
  { 185,	1,	0,	34,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo49 },  // Inst #185 = LDinto_toc
  { 186,	3,	1,	53,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #186 = LDtoc
  { 187,	0,	0,	34,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, 0 },  // Inst #187 = LDtoc_restore
  { 188,	3,	1,	36,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #188 = LFD
  { 189,	4,	2,	36,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #189 = LFDU
  { 190,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo53 },  // Inst #190 = LFDX
  { 191,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo54 },  // Inst #191 = LFS
  { 192,	4,	2,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo55 },  // Inst #192 = LFSU
  { 193,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo56 },  // Inst #193 = LFSX
  { 194,	3,	1,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo43 },  // Inst #194 = LHA
  { 195,	3,	1,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo44 },  // Inst #195 = LHA8
  { 196,	4,	2,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo45 },  // Inst #196 = LHAU
  { 197,	4,	2,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo46 },  // Inst #197 = LHAU8
  { 198,	3,	1,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo47 },  // Inst #198 = LHAX
  { 199,	3,	1,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo48 },  // Inst #199 = LHAX8
  { 200,	3,	1,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo47 },  // Inst #200 = LHBRX
  { 201,	3,	1,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo43 },  // Inst #201 = LHZ
  { 202,	3,	1,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo44 },  // Inst #202 = LHZ8
  { 203,	4,	2,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo45 },  // Inst #203 = LHZU
  { 204,	4,	2,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo46 },  // Inst #204 = LHZU8
  { 205,	3,	1,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo47 },  // Inst #205 = LHZX
  { 206,	3,	1,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo48 },  // Inst #206 = LHZX8
  { 207,	2,	1,	14,	0,	0|(1<<MCID::Rematerializable), 0x8ULL, NULL, NULL, OperandInfo57 },  // Inst #207 = LI
  { 208,	2,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo58 },  // Inst #208 = LI8
  { 209,	2,	1,	14,	0,	0|(1<<MCID::Rematerializable), 0x8ULL, NULL, NULL, OperandInfo57 },  // Inst #209 = LIS
  { 210,	2,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo58 },  // Inst #210 = LIS8
  { 211,	3,	1,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo59 },  // Inst #211 = LVEBX
  { 212,	3,	1,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo59 },  // Inst #212 = LVEHX
  { 213,	3,	1,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo59 },  // Inst #213 = LVEWX
  { 214,	3,	1,	43,	0,	0, 0x10ULL, NULL, NULL, OperandInfo59 },  // Inst #214 = LVSL
  { 215,	3,	1,	43,	0,	0, 0x10ULL, NULL, NULL, OperandInfo59 },  // Inst #215 = LVSR
  { 216,	3,	1,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo59 },  // Inst #216 = LVX
  { 217,	3,	1,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo59 },  // Inst #217 = LVXL
  { 218,	3,	1,	41,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo44 },  // Inst #218 = LWA
  { 219,	3,	1,	42,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo47 },  // Inst #219 = LWARX
  { 220,	3,	1,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo48 },  // Inst #220 = LWAX
  { 221,	3,	1,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo47 },  // Inst #221 = LWBRX
  { 222,	3,	1,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo43 },  // Inst #222 = LWZ
  { 223,	3,	1,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo44 },  // Inst #223 = LWZ8
  { 224,	4,	2,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo45 },  // Inst #224 = LWZU
  { 225,	4,	2,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo46 },  // Inst #225 = LWZU8
  { 226,	3,	1,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo47 },  // Inst #226 = LWZX
  { 227,	3,	1,	43,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo48 },  // Inst #227 = LWZX8
  { 228,	2,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x21ULL, NULL, NULL, OperandInfo60 },  // Inst #228 = MCRF
  { 229,	1,	1,	55,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x20ULL, NULL, NULL, OperandInfo61 },  // Inst #229 = MFCR
  { 230,	1,	1,	55,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x20ULL, NULL, NULL, OperandInfo49 },  // Inst #230 = MFCR8
  { 231,	2,	1,	55,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x20ULL, NULL, NULL, OperandInfo58 },  // Inst #231 = MFCR8pseud
  { 232,	2,	1,	55,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x20ULL, NULL, NULL, OperandInfo57 },  // Inst #232 = MFCRpseud
  { 233,	1,	1,	57,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList4, NULL, OperandInfo61 },  // Inst #233 = MFCTR
  { 234,	1,	1,	57,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList13, NULL, OperandInfo49 },  // Inst #234 = MFCTR8
  { 235,	1,	1,	15,	0,	0, 0x1aULL, ImplicitList10, NULL, OperandInfo62 },  // Inst #235 = MFFS
  { 236,	1,	1,	57,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList9, NULL, OperandInfo61 },  // Inst #236 = MFLR
  { 237,	1,	1,	57,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList6, NULL, OperandInfo49 },  // Inst #237 = MFLR8
  { 238,	2,	1,	55,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x21ULL, NULL, NULL, OperandInfo57 },  // Inst #238 = MFOCRF
  { 239,	1,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, NULL, OperandInfo61 },  // Inst #239 = MFVRSAVE
  { 240,	1,	1,	50,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo63 },  // Inst #240 = MFVSCR
  { 241,	2,	1,	3,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x20ULL, NULL, NULL, OperandInfo64 },  // Inst #241 = MTCRF
  { 242,	2,	1,	3,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x20ULL, NULL, NULL, OperandInfo65 },  // Inst #242 = MTCRF8
  { 243,	1,	0,	61,	0,	0, 0x9ULL, NULL, ImplicitList4, OperandInfo61 },  // Inst #243 = MTCTR
  { 244,	1,	0,	61,	0,	0, 0x9ULL, NULL, ImplicitList13, OperandInfo49 },  // Inst #244 = MTCTR8
  { 245,	1,	0,	17,	0,	0, 0x1aULL, ImplicitList10, ImplicitList10, OperandInfo5 },  // Inst #245 = MTFSB0
  { 246,	1,	0,	17,	0,	0, 0x1aULL, ImplicitList10, ImplicitList10, OperandInfo5 },  // Inst #246 = MTFSB1
  { 247,	4,	1,	17,	0,	0, 0x1aULL, ImplicitList10, ImplicitList10, OperandInfo66 },  // Inst #247 = MTFSF
  { 248,	1,	0,	61,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, ImplicitList9, OperandInfo61 },  // Inst #248 = MTLR
  { 249,	1,	0,	61,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, ImplicitList6, OperandInfo49 },  // Inst #249 = MTLR8
  { 250,	1,	0,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0xaULL, NULL, NULL, OperandInfo61 },  // Inst #250 = MTVRSAVE
  { 251,	1,	0,	43,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo63 },  // Inst #251 = MTVSCR
  { 252,	3,	1,	20,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #252 = MULHD
  { 253,	3,	1,	21,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #253 = MULHDU
  { 254,	3,	1,	20,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #254 = MULHW
  { 255,	3,	1,	21,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #255 = MULHWU
  { 256,	3,	1,	19,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #256 = MULLD
  { 257,	3,	1,	22,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #257 = MULLI
  { 258,	3,	1,	20,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #258 = MULLW
  { 259,	0,	0,	53,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, NULL, ImplicitList9, 0 },  // Inst #259 = MovePCtoLR
  { 260,	0,	0,	53,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, NULL, ImplicitList6, 0 },  // Inst #260 = MovePCtoLR8
  { 261,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #261 = NAND
  { 262,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #262 = NAND8
  { 263,	2,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #263 = NEG
  { 264,	2,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #264 = NEG8
  { 265,	0,	0,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, 0 },  // Inst #265 = NOP
  { 266,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #266 = NOR
  { 267,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #267 = NOR8
  { 268,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #268 = OR
  { 269,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo67 },  // Inst #269 = OR4To8
  { 270,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #270 = OR8
  { 271,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo68 },  // Inst #271 = OR8To4
  { 272,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #272 = ORC
  { 273,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #273 = ORC8
  { 274,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #274 = ORI
  { 275,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #275 = ORI8
  { 276,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #276 = ORIS
  { 277,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #277 = ORIS8
  { 278,	3,	1,	53,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo69 },  // Inst #278 = RESTORE_CR
  { 279,	4,	1,	25,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo70 },  // Inst #279 = RLDCL
  { 280,	4,	1,	25,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo71 },  // Inst #280 = RLDICL
  { 281,	4,	1,	25,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo71 },  // Inst #281 = RLDICR
  { 282,	5,	1,	25,	0,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo72 },  // Inst #282 = RLDIMI
  { 283,	6,	1,	24,	0,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0xcULL, NULL, NULL, OperandInfo73 },  // Inst #283 = RLWIMI
  { 284,	5,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo74 },  // Inst #284 = RLWINM
  { 285,	5,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo75 },  // Inst #285 = RLWINM8
  { 286,	5,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0xcULL, NULL, ImplicitList3, OperandInfo74 },  // Inst #286 = RLWINMo
  { 287,	5,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo76 },  // Inst #287 = RLWNM
  { 288,	5,	1,	53,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo77 },  // Inst #288 = SELECT_CC_F4
  { 289,	5,	1,	53,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo78 },  // Inst #289 = SELECT_CC_F8
  { 290,	5,	1,	53,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo79 },  // Inst #290 = SELECT_CC_I4
  { 291,	5,	1,	53,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo80 },  // Inst #291 = SELECT_CC_I8
  { 292,	5,	1,	53,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo81 },  // Inst #292 = SELECT_CC_VRRC
  { 293,	3,	1,	25,	0,	0, 0x8ULL, NULL, NULL, OperandInfo82 },  // Inst #293 = SLD
  { 294,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #294 = SLW
  { 295,	3,	0,	53,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo69 },  // Inst #295 = SPILL_CR
  { 296,	3,	1,	25,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo82 },  // Inst #296 = SRAD
  { 297,	3,	1,	25,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #297 = SRADI
  { 298,	3,	1,	26,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #298 = SRAW
  { 299,	3,	1,	26,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #299 = SRAWI
  { 300,	3,	1,	25,	0,	0, 0x8ULL, NULL, NULL, OperandInfo82 },  // Inst #300 = SRD
  { 301,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #301 = SRW
  { 302,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo43 },  // Inst #302 = STB
  { 303,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo44 },  // Inst #303 = STB8
  { 304,	4,	1,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo83 },  // Inst #304 = STBU
  { 305,	4,	1,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo84 },  // Inst #305 = STBU8
  { 306,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo47 },  // Inst #306 = STBX
  { 307,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo48 },  // Inst #307 = STBX8
  { 308,	3,	0,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo44 },  // Inst #308 = STD
  { 309,	3,	0,	47,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList3, OperandInfo48 },  // Inst #309 = STDCX
  { 310,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo84 },  // Inst #310 = STDU
  { 311,	3,	0,	46,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo48 },  // Inst #311 = STDUX
  { 312,	3,	0,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo48 },  // Inst #312 = STDX
  { 313,	3,	0,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo47 },  // Inst #313 = STDX_32
  { 314,	3,	0,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo43 },  // Inst #314 = STD_32
  { 315,	3,	0,	52,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #315 = STFD
  { 316,	4,	1,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo85 },  // Inst #316 = STFDU
  { 317,	3,	0,	52,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo53 },  // Inst #317 = STFDX
  { 318,	3,	0,	52,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo53 },  // Inst #318 = STFIWX
  { 319,	3,	0,	52,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo54 },  // Inst #319 = STFS
  { 320,	4,	1,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo86 },  // Inst #320 = STFSU
  { 321,	3,	0,	52,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo56 },  // Inst #321 = STFSX
  { 322,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo43 },  // Inst #322 = STH
  { 323,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo44 },  // Inst #323 = STH8
  { 324,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo47 },  // Inst #324 = STHBRX
  { 325,	4,	1,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo83 },  // Inst #325 = STHU
  { 326,	4,	1,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo84 },  // Inst #326 = STHU8
  { 327,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo47 },  // Inst #327 = STHX
  { 328,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo48 },  // Inst #328 = STHX8
  { 329,	3,	0,	50,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo59 },  // Inst #329 = STVEBX
  { 330,	3,	0,	50,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo59 },  // Inst #330 = STVEHX
  { 331,	3,	0,	50,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo59 },  // Inst #331 = STVEWX
  { 332,	3,	0,	50,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo59 },  // Inst #332 = STVX
  { 333,	3,	0,	50,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo59 },  // Inst #333 = STVXL
  { 334,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo43 },  // Inst #334 = STW
  { 335,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo44 },  // Inst #335 = STW8
  { 336,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo47 },  // Inst #336 = STWBRX
  { 337,	3,	0,	49,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList3, OperandInfo47 },  // Inst #337 = STWCX
  { 338,	4,	1,	50,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo83 },  // Inst #338 = STWU
  { 339,	3,	0,	50,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo8 },  // Inst #339 = STWUX
  { 340,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo47 },  // Inst #340 = STWX
  { 341,	3,	0,	50,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo48 },  // Inst #341 = STWX8
  { 342,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #342 = SUBF
  { 343,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #343 = SUBF8
  { 344,	3,	1,	14,	0,	0, 0xcULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #344 = SUBFC
  { 345,	3,	1,	14,	0,	0, 0xcULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #345 = SUBFC8
  { 346,	3,	1,	14,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo8 },  // Inst #346 = SUBFE
  { 347,	3,	1,	14,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo9 },  // Inst #347 = SUBFE8
  { 348,	3,	1,	14,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #348 = SUBFIC
  { 349,	3,	1,	14,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #349 = SUBFIC8
  { 350,	2,	1,	14,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo12 },  // Inst #350 = SUBFME
  { 351,	2,	1,	14,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo13 },  // Inst #351 = SUBFME8
  { 352,	2,	1,	14,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo12 },  // Inst #352 = SUBFZE
  { 353,	2,	1,	14,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo13 },  // Inst #353 = SUBFZE8
  { 354,	0,	0,	51,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #354 = SYNC
  { 355,	1,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList10, NULL, OperandInfo5 },  // Inst #355 = TAILB
  { 356,	1,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList10, NULL, OperandInfo5 },  // Inst #356 = TAILB8
  { 357,	1,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList10, NULL, OperandInfo5 },  // Inst #357 = TAILBA
  { 358,	1,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList10, NULL, OperandInfo5 },  // Inst #358 = TAILBA8
  { 359,	0,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList8, NULL, 0 },  // Inst #359 = TAILBCTR
  { 360,	0,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, NULL, 0 },  // Inst #360 = TAILBCTR8
  { 361,	2,	0,	53,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::Variadic), 0x0ULL, ImplicitList10, NULL, OperandInfo87 },  // Inst #361 = TCRETURNai
  { 362,	2,	0,	53,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::Variadic), 0x0ULL, ImplicitList10, NULL, OperandInfo87 },  // Inst #362 = TCRETURNai8
  { 363,	2,	0,	53,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList10, NULL, OperandInfo87 },  // Inst #363 = TCRETURNdi
  { 364,	2,	0,	53,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList10, NULL, OperandInfo87 },  // Inst #364 = TCRETURNdi8
  { 365,	2,	0,	53,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList10, NULL, OperandInfo88 },  // Inst #365 = TCRETURNri
  { 366,	2,	0,	53,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList10, NULL, OperandInfo89 },  // Inst #366 = TCRETURNri8
  { 367,	0,	0,	43,	0,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #367 = TRAP
  { 368,	2,	1,	53,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #368 = UPDATE_VRSAVE
  { 369,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #369 = VADDCUW
  { 370,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #370 = VADDFP
  { 371,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #371 = VADDSBS
  { 372,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #372 = VADDSHS
  { 373,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #373 = VADDSWS
  { 374,	3,	1,	71,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #374 = VADDUBM
  { 375,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #375 = VADDUBS
  { 376,	3,	1,	71,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #376 = VADDUHM
  { 377,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #377 = VADDUHS
  { 378,	3,	1,	71,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #378 = VADDUWM
  { 379,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #379 = VADDUWS
  { 380,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #380 = VAND
  { 381,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #381 = VANDC
  { 382,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #382 = VAVGSB
  { 383,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #383 = VAVGSH
  { 384,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #384 = VAVGSW
  { 385,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #385 = VAVGUB
  { 386,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #386 = VAVGUH
  { 387,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #387 = VAVGUW
  { 388,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo91 },  // Inst #388 = VCFSX
  { 389,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo91 },  // Inst #389 = VCFUX
  { 390,	3,	1,	69,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #390 = VCMPBFP
  { 391,	3,	1,	69,	0,	0, 0x28ULL, NULL, ImplicitList14, OperandInfo90 },  // Inst #391 = VCMPBFPo
  { 392,	3,	1,	69,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #392 = VCMPEQFP
  { 393,	3,	1,	69,	0,	0, 0x28ULL, NULL, ImplicitList14, OperandInfo90 },  // Inst #393 = VCMPEQFPo
  { 394,	3,	1,	69,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #394 = VCMPEQUB
  { 395,	3,	1,	69,	0,	0, 0x28ULL, NULL, ImplicitList14, OperandInfo90 },  // Inst #395 = VCMPEQUBo
  { 396,	3,	1,	69,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #396 = VCMPEQUH
  { 397,	3,	1,	69,	0,	0, 0x28ULL, NULL, ImplicitList14, OperandInfo90 },  // Inst #397 = VCMPEQUHo
  { 398,	3,	1,	69,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #398 = VCMPEQUW
  { 399,	3,	1,	69,	0,	0, 0x28ULL, NULL, ImplicitList14, OperandInfo90 },  // Inst #399 = VCMPEQUWo
  { 400,	3,	1,	69,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #400 = VCMPGEFP
  { 401,	3,	1,	69,	0,	0, 0x28ULL, NULL, ImplicitList14, OperandInfo90 },  // Inst #401 = VCMPGEFPo
  { 402,	3,	1,	69,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #402 = VCMPGTFP
  { 403,	3,	1,	69,	0,	0, 0x28ULL, NULL, ImplicitList14, OperandInfo90 },  // Inst #403 = VCMPGTFPo
  { 404,	3,	1,	69,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #404 = VCMPGTSB
  { 405,	3,	1,	69,	0,	0, 0x28ULL, NULL, ImplicitList14, OperandInfo90 },  // Inst #405 = VCMPGTSBo
  { 406,	3,	1,	69,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #406 = VCMPGTSH
  { 407,	3,	1,	69,	0,	0, 0x28ULL, NULL, ImplicitList14, OperandInfo90 },  // Inst #407 = VCMPGTSHo
  { 408,	3,	1,	69,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #408 = VCMPGTSW
  { 409,	3,	1,	69,	0,	0, 0x28ULL, NULL, ImplicitList14, OperandInfo90 },  // Inst #409 = VCMPGTSWo
  { 410,	3,	1,	69,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #410 = VCMPGTUB
  { 411,	3,	1,	69,	0,	0, 0x28ULL, NULL, ImplicitList14, OperandInfo90 },  // Inst #411 = VCMPGTUBo
  { 412,	3,	1,	69,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #412 = VCMPGTUH
  { 413,	3,	1,	69,	0,	0, 0x28ULL, NULL, ImplicitList14, OperandInfo90 },  // Inst #413 = VCMPGTUHo
  { 414,	3,	1,	69,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #414 = VCMPGTUW
  { 415,	3,	1,	69,	0,	0, 0x28ULL, NULL, ImplicitList14, OperandInfo90 },  // Inst #415 = VCMPGTUWo
  { 416,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo91 },  // Inst #416 = VCTSXS
  { 417,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo91 },  // Inst #417 = VCTUXS
  { 418,	2,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo92 },  // Inst #418 = VEXPTEFP
  { 419,	2,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo92 },  // Inst #419 = VLOGEFP
  { 420,	4,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo93 },  // Inst #420 = VMADDFP
  { 421,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #421 = VMAXFP
  { 422,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #422 = VMAXSB
  { 423,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #423 = VMAXSH
  { 424,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #424 = VMAXSW
  { 425,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #425 = VMAXUB
  { 426,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #426 = VMAXUH
  { 427,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #427 = VMAXUW
  { 428,	4,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo93 },  // Inst #428 = VMHADDSHS
  { 429,	4,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo93 },  // Inst #429 = VMHRADDSHS
  { 430,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #430 = VMINFP
  { 431,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #431 = VMINSB
  { 432,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #432 = VMINSH
  { 433,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #433 = VMINSW
  { 434,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #434 = VMINUB
  { 435,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #435 = VMINUH
  { 436,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #436 = VMINUW
  { 437,	4,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo93 },  // Inst #437 = VMLADDUHM
  { 438,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #438 = VMRGHB
  { 439,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #439 = VMRGHH
  { 440,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #440 = VMRGHW
  { 441,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #441 = VMRGLB
  { 442,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #442 = VMRGLH
  { 443,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #443 = VMRGLW
  { 444,	4,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo93 },  // Inst #444 = VMSUMMBM
  { 445,	4,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo93 },  // Inst #445 = VMSUMSHM
  { 446,	4,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo93 },  // Inst #446 = VMSUMSHS
  { 447,	4,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo93 },  // Inst #447 = VMSUMUBM
  { 448,	4,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo93 },  // Inst #448 = VMSUMUHM
  { 449,	4,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo93 },  // Inst #449 = VMSUMUHS
  { 450,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #450 = VMULESB
  { 451,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #451 = VMULESH
  { 452,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #452 = VMULEUB
  { 453,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #453 = VMULEUH
  { 454,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #454 = VMULOSB
  { 455,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #455 = VMULOSH
  { 456,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #456 = VMULOUB
  { 457,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #457 = VMULOUH
  { 458,	4,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo93 },  // Inst #458 = VNMSUBFP
  { 459,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #459 = VNOR
  { 460,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #460 = VOR
  { 461,	4,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo93 },  // Inst #461 = VPERM
  { 462,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #462 = VPKPX
  { 463,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #463 = VPKSHSS
  { 464,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #464 = VPKSHUS
  { 465,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #465 = VPKSWSS
  { 466,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #466 = VPKSWUS
  { 467,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #467 = VPKUHUM
  { 468,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #468 = VPKUHUS
  { 469,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #469 = VPKUWUM
  { 470,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #470 = VPKUWUS
  { 471,	2,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo92 },  // Inst #471 = VREFP
  { 472,	2,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo92 },  // Inst #472 = VRFIM
  { 473,	2,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo92 },  // Inst #473 = VRFIN
  { 474,	2,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo92 },  // Inst #474 = VRFIP
  { 475,	2,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo92 },  // Inst #475 = VRFIZ
  { 476,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #476 = VRLB
  { 477,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #477 = VRLH
  { 478,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #478 = VRLW
  { 479,	2,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo92 },  // Inst #479 = VRSQRTEFP
  { 480,	4,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo93 },  // Inst #480 = VSEL
  { 481,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #481 = VSL
  { 482,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #482 = VSLB
  { 483,	4,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo94 },  // Inst #483 = VSLDOI
  { 484,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #484 = VSLH
  { 485,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #485 = VSLO
  { 486,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #486 = VSLW
  { 487,	3,	1,	72,	0,	0, 0x28ULL, NULL, NULL, OperandInfo91 },  // Inst #487 = VSPLTB
  { 488,	3,	1,	72,	0,	0, 0x28ULL, NULL, NULL, OperandInfo91 },  // Inst #488 = VSPLTH
  { 489,	2,	1,	72,	0,	0, 0x28ULL, NULL, NULL, OperandInfo95 },  // Inst #489 = VSPLTISB
  { 490,	2,	1,	72,	0,	0, 0x28ULL, NULL, NULL, OperandInfo95 },  // Inst #490 = VSPLTISH
  { 491,	2,	1,	72,	0,	0, 0x28ULL, NULL, NULL, OperandInfo95 },  // Inst #491 = VSPLTISW
  { 492,	3,	1,	72,	0,	0, 0x28ULL, NULL, NULL, OperandInfo91 },  // Inst #492 = VSPLTW
  { 493,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #493 = VSR
  { 494,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #494 = VSRAB
  { 495,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #495 = VSRAH
  { 496,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #496 = VSRAW
  { 497,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #497 = VSRB
  { 498,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #498 = VSRH
  { 499,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #499 = VSRO
  { 500,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #500 = VSRW
  { 501,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #501 = VSUBCUW
  { 502,	3,	1,	71,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #502 = VSUBFP
  { 503,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #503 = VSUBSBS
  { 504,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #504 = VSUBSHS
  { 505,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #505 = VSUBSWS
  { 506,	3,	1,	71,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #506 = VSUBUBM
  { 507,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #507 = VSUBUBS
  { 508,	3,	1,	71,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #508 = VSUBUHM
  { 509,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #509 = VSUBUHS
  { 510,	3,	1,	71,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #510 = VSUBUWM
  { 511,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #511 = VSUBUWS
  { 512,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #512 = VSUM2SWS
  { 513,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #513 = VSUM4SBS
  { 514,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #514 = VSUM4SHS
  { 515,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #515 = VSUM4UBS
  { 516,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #516 = VSUMSWS
  { 517,	2,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo92 },  // Inst #517 = VUPKHPX
  { 518,	2,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo92 },  // Inst #518 = VUPKHSB
  { 519,	2,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo92 },  // Inst #519 = VUPKHSH
  { 520,	2,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo92 },  // Inst #520 = VUPKLPX
  { 521,	2,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo92 },  // Inst #521 = VUPKLSB
  { 522,	2,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo92 },  // Inst #522 = VUPKLSH
  { 523,	3,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo90 },  // Inst #523 = VXOR
  { 524,	1,	1,	68,	0,	0, 0x28ULL, NULL, NULL, OperandInfo63 },  // Inst #524 = V_SET0
  { 525,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #525 = XOR
  { 526,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #526 = XOR8
  { 527,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #527 = XORI
  { 528,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #528 = XORI8
  { 529,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #529 = XORIS
  { 530,	3,	1,	14,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #530 = XORIS8
};

extern const char PPCInstrNameData[] = {
  /* 0 */ 'M', 'T', 'F', 'S', 'B', '0', 0,
  /* 7 */ 'V', '_', 'S', 'E', 'T', '0', 0,
  /* 14 */ 'M', 'T', 'F', 'S', 'B', '1', 0,
  /* 21 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 41 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 61 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 82 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 102 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 118 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 138 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 158 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 177 */ 'S', 'T', 'D', '_', '3', '2', 0,
  /* 184 */ 'E', 'X', 'T', 'S', 'W', '_', '3', '2', 0,
  /* 193 */ 'S', 'T', 'D', 'X', '_', '3', '2', 0,
  /* 201 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 221 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 241 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 262 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 282 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 298 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 318 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 338 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 357 */ 'D', 'S', 'T', '6', '4', 0,
  /* 363 */ 'D', 'S', 'T', 'S', 'T', '6', '4', 0,
  /* 371 */ 'D', 'S', 'T', 'T', '6', '4', 0,
  /* 378 */ 'D', 'S', 'T', 'S', 'T', 'T', '6', '4', 0,
  /* 387 */ 'E', 'X', 'T', 'S', 'W', '_', '3', '2', '_', '6', '4', 0,
  /* 399 */ 'A', 'D', 'D', '4', 0,
  /* 404 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', '4', 0,
  /* 417 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', '4', 0,
  /* 430 */ 'B', 'L', 'A', '_', 'S', 'V', 'R', '4', 0,
  /* 439 */ 'B', 'L', '_', 'S', 'V', 'R', '4', 0,
  /* 447 */ 'B', 'C', 'T', 'R', 'L', '_', 'S', 'V', 'R', '4', 0,
  /* 458 */ 'O', 'R', '8', 'T', 'o', '4', 0,
  /* 465 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', 0,
  /* 485 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', 0,
  /* 505 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 526 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 546 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 562 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 582 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 602 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 621 */ 'T', 'A', 'I', 'L', 'B', 'A', '8', 0,
  /* 629 */ 'L', 'H', 'A', '8', 0,
  /* 634 */ 'T', 'A', 'I', 'L', 'B', '8', 0,
  /* 641 */ 'E', 'X', 'T', 'S', 'B', '8', 0,
  /* 648 */ 'S', 'T', 'B', '8', 0,
  /* 653 */ 'A', 'D', 'D', 'C', '8', 0,
  /* 659 */ 'A', 'N', 'D', 'C', '8', 0,
  /* 665 */ 'S', 'U', 'B', 'F', 'C', '8', 0,
  /* 672 */ 'A', 'D', 'D', 'I', 'C', '8', 0,
  /* 679 */ 'S', 'U', 'B', 'F', 'I', 'C', '8', 0,
  /* 687 */ 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', '8', 0,
  /* 697 */ 'O', 'R', 'C', '8', 0,
  /* 702 */ 'A', 'D', 'D', '8', 0,
  /* 707 */ 'N', 'A', 'N', 'D', '8', 0,
  /* 713 */ 'A', 'D', 'D', 'E', '8', 0,
  /* 719 */ 'S', 'U', 'B', 'F', 'E', '8', 0,
  /* 726 */ 'A', 'D', 'D', 'M', 'E', '8', 0,
  /* 733 */ 'S', 'U', 'B', 'F', 'M', 'E', '8', 0,
  /* 741 */ 'A', 'D', 'D', 'Z', 'E', '8', 0,
  /* 748 */ 'S', 'U', 'B', 'F', 'Z', 'E', '8', 0,
  /* 756 */ 'S', 'U', 'B', 'F', '8', 0,
  /* 762 */ 'M', 'T', 'C', 'R', 'F', '8', 0,
  /* 769 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', '8', 0,
  /* 782 */ 'N', 'E', 'G', '8', 0,
  /* 787 */ 'E', 'X', 'T', 'S', 'H', '8', 0,
  /* 794 */ 'S', 'T', 'H', '8', 0,
  /* 799 */ 'A', 'D', 'D', 'I', '8', 0,
  /* 805 */ 'L', 'I', '8', 0,
  /* 809 */ 'X', 'O', 'R', 'I', '8', 0,
  /* 815 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', 0,
  /* 834 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', '8', 0,
  /* 847 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', 0,
  /* 866 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 886 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 905 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 920 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 939 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', 0,
  /* 958 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', 0,
  /* 976 */ 'R', 'L', 'W', 'I', 'N', 'M', '8', 0,
  /* 984 */ 'M', 'F', 'C', 'R', '8', 0,
  /* 990 */ 'M', 'F', 'L', 'R', '8', 0,
  /* 996 */ 'M', 'T', 'L', 'R', '8', 0,
  /* 1002 */ 'M', 'o', 'v', 'e', 'P', 'C', 't', 'o', 'L', 'R', '8', 0,
  /* 1014 */ 'N', 'O', 'R', '8', 0,
  /* 1019 */ 'X', 'O', 'R', '8', 0,
  /* 1024 */ 'T', 'A', 'I', 'L', 'B', 'C', 'T', 'R', '8', 0,
  /* 1034 */ 'M', 'F', 'C', 'T', 'R', '8', 0,
  /* 1041 */ 'M', 'T', 'C', 'T', 'R', '8', 0,
  /* 1048 */ 'A', 'D', 'D', 'I', 'S', '8', 0,
  /* 1055 */ 'L', 'I', 'S', '8', 0,
  /* 1060 */ 'X', 'O', 'R', 'I', 'S', '8', 0,
  /* 1067 */ 'L', 'H', 'A', 'U', '8', 0,
  /* 1073 */ 'S', 'T', 'B', 'U', '8', 0,
  /* 1079 */ 'S', 'T', 'H', 'U', '8', 0,
  /* 1085 */ 'L', 'B', 'Z', 'U', '8', 0,
  /* 1091 */ 'L', 'H', 'Z', 'U', '8', 0,
  /* 1097 */ 'L', 'W', 'Z', 'U', '8', 0,
  /* 1103 */ 'E', 'Q', 'V', '8', 0,
  /* 1108 */ 'S', 'T', 'W', '8', 0,
  /* 1113 */ 'L', 'H', 'A', 'X', '8', 0,
  /* 1119 */ 'S', 'T', 'B', 'X', '8', 0,
  /* 1125 */ 'S', 'T', 'H', 'X', '8', 0,
  /* 1131 */ 'S', 'T', 'W', 'X', '8', 0,
  /* 1137 */ 'L', 'B', 'Z', 'X', '8', 0,
  /* 1143 */ 'L', 'H', 'Z', 'X', '8', 0,
  /* 1149 */ 'L', 'W', 'Z', 'X', '8', 0,
  /* 1155 */ 'L', 'B', 'Z', '8', 0,
  /* 1160 */ 'L', 'H', 'Z', '8', 0,
  /* 1165 */ 'L', 'W', 'Z', '8', 0,
  /* 1170 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'a', 'i', '8', 0,
  /* 1182 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'd', 'i', '8', 0,
  /* 1194 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'r', 'i', '8', 0,
  /* 1206 */ 'A', 'N', 'D', 'I', 'o', '8', 0,
  /* 1213 */ 'A', 'N', 'D', 'I', 'S', 'o', '8', 0,
  /* 1221 */ 'O', 'R', '4', 'T', 'o', '8', 0,
  /* 1228 */ 'D', 'C', 'B', 'A', 0,
  /* 1233 */ 'T', 'A', 'I', 'L', 'B', 'A', 0,
  /* 1240 */ 'L', 'H', 'A', 0,
  /* 1244 */ 'L', 'A', 0,
  /* 1247 */ 'L', 'W', 'A', 0,
  /* 1251 */ 'V', 'S', 'R', 'A', 'B', 0,
  /* 1257 */ 'V', 'M', 'R', 'G', 'H', 'B', 0,
  /* 1264 */ 'V', 'M', 'R', 'G', 'L', 'B', 0,
  /* 1271 */ 'T', 'A', 'I', 'L', 'B', 0,
  /* 1277 */ 'V', 'R', 'L', 'B', 0,
  /* 1282 */ 'V', 'S', 'L', 'B', 0,
  /* 1287 */ 'V', 'S', 'R', 'B', 0,
  /* 1292 */ 'V', 'M', 'U', 'L', 'E', 'S', 'B', 0,
  /* 1300 */ 'V', 'A', 'V', 'G', 'S', 'B', 0,
  /* 1307 */ 'V', 'U', 'P', 'K', 'H', 'S', 'B', 0,
  /* 1315 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'B', 0,
  /* 1324 */ 'V', 'U', 'P', 'K', 'L', 'S', 'B', 0,
  /* 1332 */ 'V', 'M', 'I', 'N', 'S', 'B', 0,
  /* 1339 */ 'V', 'M', 'U', 'L', 'O', 'S', 'B', 0,
  /* 1347 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'B', 0,
  /* 1356 */ 'E', 'X', 'T', 'S', 'B', 0,
  /* 1362 */ 'V', 'M', 'A', 'X', 'S', 'B', 0,
  /* 1369 */ 'V', 'S', 'P', 'L', 'T', 'B', 0,
  /* 1376 */ 'S', 'T', 'B', 0,
  /* 1380 */ 'V', 'M', 'U', 'L', 'E', 'U', 'B', 0,
  /* 1388 */ 'V', 'A', 'V', 'G', 'U', 'B', 0,
  /* 1395 */ 'V', 'M', 'I', 'N', 'U', 'B', 0,
  /* 1402 */ 'V', 'M', 'U', 'L', 'O', 'U', 'B', 0,
  /* 1410 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'B', 0,
  /* 1419 */ 'F', 'S', 'U', 'B', 0,
  /* 1424 */ 'F', 'M', 'S', 'U', 'B', 0,
  /* 1430 */ 'F', 'N', 'M', 'S', 'U', 'B', 0,
  /* 1437 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'B', 0,
  /* 1446 */ 'V', 'M', 'A', 'X', 'U', 'B', 0,
  /* 1453 */ 'B', 'C', 'C', 0,
  /* 1457 */ 'A', 'D', 'D', 'C', 0,
  /* 1462 */ 'V', 'A', 'N', 'D', 'C', 0,
  /* 1468 */ 'S', 'U', 'B', 'F', 'C', 0,
  /* 1474 */ 'A', 'D', 'D', 'I', 'C', 0,
  /* 1480 */ 'S', 'U', 'B', 'F', 'I', 'C', 0,
  /* 1487 */ 'S', 'Y', 'N', 'C', 0,
  /* 1492 */ 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', 0,
  /* 1501 */ 'O', 'R', 'C', 0,
  /* 1505 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'V', 'R', 'R', 'C', 0,
  /* 1520 */ 'S', 'R', 'A', 'D', 0,
  /* 1525 */ 'F', 'A', 'D', 'D', 0,
  /* 1530 */ 'F', 'M', 'A', 'D', 'D', 0,
  /* 1536 */ 'F', 'N', 'M', 'A', 'D', 'D', 0,
  /* 1543 */ 'L', 'F', 'D', 0,
  /* 1547 */ 'S', 'T', 'F', 'D', 0,
  /* 1552 */ 'F', 'N', 'E', 'G', 'D', 0,
  /* 1558 */ 'M', 'U', 'L', 'H', 'D', 0,
  /* 1564 */ 'F', 'C', 'F', 'I', 'D', 0,
  /* 1570 */ 'F', 'S', 'E', 'L', 'D', 0,
  /* 1576 */ 'M', 'U', 'L', 'L', 'D', 0,
  /* 1582 */ 'C', 'M', 'P', 'L', 'D', 0,
  /* 1588 */ 'S', 'L', 'D', 0,
  /* 1592 */ 'N', 'A', 'N', 'D', 0,
  /* 1597 */ 'V', 'A', 'N', 'D', 0,
  /* 1602 */ 'C', 'M', 'P', 'D', 0,
  /* 1607 */ 'S', 'R', 'D', 0,
  /* 1611 */ 'F', 'A', 'B', 'S', 'D', 0,
  /* 1617 */ 'F', 'N', 'A', 'B', 'S', 'D', 0,
  /* 1624 */ 'S', 'T', 'D', 0,
  /* 1628 */ 'F', 'C', 'M', 'P', 'U', 'D', 0,
  /* 1635 */ 'D', 'I', 'V', 'D', 0,
  /* 1640 */ 'C', 'N', 'T', 'L', 'Z', 'D', 0,
  /* 1647 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 1660 */ 'A', 'D', 'D', 'E', 0,
  /* 1665 */ 'S', 'U', 'B', 'F', 'E', 0,
  /* 1671 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 1678 */ 'A', 'D', 'D', 'M', 'E', 0,
  /* 1684 */ 'S', 'U', 'B', 'F', 'M', 'E', 0,
  /* 1691 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1701 */ 'M', 'F', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 1710 */ 'M', 'T', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 1719 */ 'U', 'P', 'D', 'A', 'T', 'E', '_', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 1733 */ 'A', 'D', 'D', 'Z', 'E', 0,
  /* 1739 */ 'S', 'U', 'B', 'F', 'Z', 'E', 0,
  /* 1746 */ 'D', 'C', 'B', 'F', 0,
  /* 1751 */ 'S', 'U', 'B', 'F', 0,
  /* 1756 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 1769 */ 'B', 'L', 'A', '8', '_', 'E', 'L', 'F', 0,
  /* 1778 */ 'B', 'L', '8', '_', 'E', 'L', 'F', 0,
  /* 1786 */ 'B', 'C', 'T', 'R', 'L', '8', '_', 'E', 'L', 'F', 0,
  /* 1797 */ 'B', 'L', 'A', '8', '_', 'N', 'O', 'P', '_', 'E', 'L', 'F', 0,
  /* 1810 */ 'B', 'L', '8', '_', 'N', 'O', 'P', '_', 'E', 'L', 'F', 0,
  /* 1822 */ 'M', 'C', 'R', 'F', 0,
  /* 1827 */ 'M', 'F', 'O', 'C', 'R', 'F', 0,
  /* 1834 */ 'M', 'T', 'C', 'R', 'F', 0,
  /* 1840 */ 'M', 'T', 'F', 'S', 'F', 0,
  /* 1846 */ 'N', 'E', 'G', 0,
  /* 1850 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1865 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1879 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 1893 */ 'V', 'S', 'R', 'A', 'H', 0,
  /* 1899 */ 'V', 'M', 'R', 'G', 'H', 'H', 0,
  /* 1906 */ 'V', 'M', 'R', 'G', 'L', 'H', 0,
  /* 1913 */ 'V', 'R', 'L', 'H', 0,
  /* 1918 */ 'V', 'S', 'L', 'H', 0,
  /* 1923 */ 'V', 'S', 'R', 'H', 0,
  /* 1928 */ 'V', 'M', 'U', 'L', 'E', 'S', 'H', 0,
  /* 1936 */ 'V', 'A', 'V', 'G', 'S', 'H', 0,
  /* 1943 */ 'V', 'U', 'P', 'K', 'H', 'S', 'H', 0,
  /* 1951 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'H', 0,
  /* 1960 */ 'V', 'U', 'P', 'K', 'L', 'S', 'H', 0,
  /* 1968 */ 'V', 'M', 'I', 'N', 'S', 'H', 0,
  /* 1975 */ 'V', 'M', 'U', 'L', 'O', 'S', 'H', 0,
  /* 1983 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'H', 0,
  /* 1992 */ 'E', 'X', 'T', 'S', 'H', 0,
  /* 1998 */ 'V', 'M', 'A', 'X', 'S', 'H', 0,
  /* 2005 */ 'V', 'S', 'P', 'L', 'T', 'H', 0,
  /* 2012 */ 'S', 'T', 'H', 0,
  /* 2016 */ 'V', 'M', 'U', 'L', 'E', 'U', 'H', 0,
  /* 2024 */ 'V', 'A', 'V', 'G', 'U', 'H', 0,
  /* 2031 */ 'V', 'M', 'I', 'N', 'U', 'H', 0,
  /* 2038 */ 'V', 'M', 'U', 'L', 'O', 'U', 'H', 0,
  /* 2046 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'H', 0,
  /* 2055 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'H', 0,
  /* 2064 */ 'V', 'M', 'A', 'X', 'U', 'H', 0,
  /* 2071 */ 'D', 'C', 'B', 'I', 0,
  /* 2076 */ 'S', 'R', 'A', 'D', 'I', 0,
  /* 2082 */ 'A', 'D', 'D', 'I', 0,
  /* 2087 */ 'C', 'M', 'P', 'L', 'D', 'I', 0,
  /* 2094 */ 'C', 'M', 'P', 'D', 'I', 0,
  /* 2100 */ 'P', 'H', 'I', 0,
  /* 2104 */ 'M', 'U', 'L', 'L', 'I', 0,
  /* 2110 */ 'R', 'L', 'D', 'I', 'M', 'I', 0,
  /* 2117 */ 'R', 'L', 'W', 'I', 'M', 'I', 0,
  /* 2124 */ 'V', 'S', 'L', 'D', 'O', 'I', 0,
  /* 2131 */ 'X', 'O', 'R', 'I', 0,
  /* 2136 */ 'S', 'R', 'A', 'W', 'I', 0,
  /* 2142 */ 'C', 'M', 'P', 'L', 'W', 'I', 0,
  /* 2149 */ 'C', 'M', 'P', 'W', 'I', 0,
  /* 2155 */ 'R', 'L', 'D', 'C', 'L', 0,
  /* 2161 */ 'R', 'L', 'D', 'I', 'C', 'L', 0,
  /* 2168 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2177 */ 'P', 'R', 'O', 'L', 'O', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2190 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2199 */ 'V', 'S', 'E', 'L', 0,
  /* 2204 */ 'D', 'S', 'S', 'A', 'L', 'L', 0,
  /* 2211 */ 'K', 'I', 'L', 'L', 0,
  /* 2216 */ 'L', 'V', 'S', 'L', 0,
  /* 2221 */ 'F', 'M', 'U', 'L', 0,
  /* 2226 */ 'L', 'V', 'X', 'L', 0,
  /* 2231 */ 'S', 'T', 'V', 'X', 'L', 0,
  /* 2237 */ 'D', 'C', 'B', 'Z', 'L', 0,
  /* 2243 */ 'V', 'M', 'S', 'U', 'M', 'M', 'B', 'M', 0,
  /* 2252 */ 'V', 'S', 'U', 'B', 'U', 'B', 'M', 0,
  /* 2260 */ 'V', 'A', 'D', 'D', 'U', 'B', 'M', 0,
  /* 2268 */ 'V', 'M', 'S', 'U', 'M', 'U', 'B', 'M', 0,
  /* 2277 */ 'V', 'M', 'S', 'U', 'M', 'S', 'H', 'M', 0,
  /* 2286 */ 'V', 'S', 'U', 'B', 'U', 'H', 'M', 0,
  /* 2294 */ 'V', 'M', 'L', 'A', 'D', 'D', 'U', 'H', 'M', 0,
  /* 2304 */ 'V', 'A', 'D', 'D', 'U', 'H', 'M', 0,
  /* 2312 */ 'V', 'M', 'S', 'U', 'M', 'U', 'H', 'M', 0,
  /* 2321 */ 'V', 'R', 'F', 'I', 'M', 0,
  /* 2327 */ 'R', 'L', 'W', 'I', 'N', 'M', 0,
  /* 2334 */ 'R', 'L', 'W', 'N', 'M', 0,
  /* 2340 */ 'V', 'P', 'E', 'R', 'M', 0,
  /* 2346 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 2356 */ 'V', 'P', 'K', 'U', 'H', 'U', 'M', 0,
  /* 2364 */ 'V', 'P', 'K', 'U', 'W', 'U', 'M', 0,
  /* 2372 */ 'V', 'S', 'U', 'B', 'U', 'W', 'M', 0,
  /* 2380 */ 'V', 'A', 'D', 'D', 'U', 'W', 'M', 0,
  /* 2388 */ 'V', 'R', 'F', 'I', 'N', 0,
  /* 2394 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 2411 */ 'V', 'S', 'L', 'O', 0,
  /* 2416 */ 'V', 'S', 'R', 'O', 0,
  /* 2421 */ 'T', 'R', 'A', 'P', 0,
  /* 2426 */ 'V', 'C', 'M', 'P', 'B', 'F', 'P', 0,
  /* 2434 */ 'V', 'N', 'M', 'S', 'U', 'B', 'F', 'P', 0,
  /* 2443 */ 'V', 'S', 'U', 'B', 'F', 'P', 0,
  /* 2450 */ 'V', 'M', 'A', 'D', 'D', 'F', 'P', 0,
  /* 2458 */ 'V', 'A', 'D', 'D', 'F', 'P', 0,
  /* 2465 */ 'V', 'L', 'O', 'G', 'E', 'F', 'P', 0,
  /* 2473 */ 'V', 'C', 'M', 'P', 'G', 'E', 'F', 'P', 0,
  /* 2482 */ 'V', 'R', 'E', 'F', 'P', 0,
  /* 2488 */ 'V', 'E', 'X', 'P', 'T', 'E', 'F', 'P', 0,
  /* 2497 */ 'V', 'R', 'S', 'Q', 'R', 'T', 'E', 'F', 'P', 0,
  /* 2507 */ 'V', 'M', 'I', 'N', 'F', 'P', 0,
  /* 2514 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'F', 'P', 0,
  /* 2523 */ 'V', 'C', 'M', 'P', 'G', 'T', 'F', 'P', 0,
  /* 2532 */ 'V', 'M', 'A', 'X', 'F', 'P', 0,
  /* 2539 */ 'V', 'R', 'F', 'I', 'P', 0,
  /* 2545 */ 'N', 'O', 'P', 0,
  /* 2549 */ 'F', 'R', 'S', 'P', 0,
  /* 2554 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 2569 */ 'M', 'F', 'C', 'R', 0,
  /* 2574 */ 'R', 'L', 'D', 'I', 'C', 'R', 0,
  /* 2581 */ 'M', 'F', 'V', 'S', 'C', 'R', 0,
  /* 2588 */ 'M', 'T', 'V', 'S', 'C', 'R', 0,
  /* 2595 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', '_', 'C', 'R', 0,
  /* 2606 */ 'S', 'P', 'I', 'L', 'L', '_', 'C', 'R', 0,
  /* 2615 */ 'B', 'L', 'R', 0,
  /* 2619 */ 'M', 'F', 'L', 'R', 0,
  /* 2624 */ 'M', 'T', 'L', 'R', 0,
  /* 2629 */ 'M', 'o', 'v', 'e', 'P', 'C', 't', 'o', 'L', 'R', 0,
  /* 2640 */ 'F', 'M', 'R', 0,
  /* 2644 */ 'V', 'N', 'O', 'R', 0,
  /* 2649 */ 'C', 'R', 'O', 'R', 0,
  /* 2654 */ 'V', 'O', 'R', 0,
  /* 2658 */ 'V', 'X', 'O', 'R', 0,
  /* 2663 */ 'L', 'V', 'S', 'R', 0,
  /* 2668 */ 'T', 'A', 'I', 'L', 'B', 'C', 'T', 'R', 0,
  /* 2677 */ 'M', 'F', 'C', 'T', 'R', 0,
  /* 2683 */ 'M', 'T', 'C', 'T', 'R', 0,
  /* 2689 */ 'V', 'S', 'U', 'M', '4', 'S', 'B', 'S', 0,
  /* 2698 */ 'V', 'S', 'U', 'B', 'S', 'B', 'S', 0,
  /* 2706 */ 'V', 'A', 'D', 'D', 'S', 'B', 'S', 0,
  /* 2714 */ 'V', 'S', 'U', 'M', '4', 'U', 'B', 'S', 0,
  /* 2723 */ 'V', 'S', 'U', 'B', 'U', 'B', 'S', 0,
  /* 2731 */ 'V', 'A', 'D', 'D', 'U', 'B', 'S', 0,
  /* 2739 */ 'F', 'S', 'U', 'B', 'S', 0,
  /* 2745 */ 'F', 'M', 'S', 'U', 'B', 'S', 0,
  /* 2752 */ 'F', 'N', 'M', 'S', 'U', 'B', 'S', 0,
  /* 2760 */ 'F', 'A', 'D', 'D', 'S', 0,
  /* 2766 */ 'F', 'M', 'A', 'D', 'D', 'S', 0,
  /* 2773 */ 'F', 'N', 'M', 'A', 'D', 'D', 'S', 0,
  /* 2781 */ 'M', 'F', 'F', 'S', 0,
  /* 2786 */ 'L', 'F', 'S', 0,
  /* 2790 */ 'S', 'T', 'F', 'S', 0,
  /* 2795 */ 'F', 'N', 'E', 'G', 'S', 0,
  /* 2801 */ 'V', 'S', 'U', 'M', '4', 'S', 'H', 'S', 0,
  /* 2810 */ 'V', 'S', 'U', 'B', 'S', 'H', 'S', 0,
  /* 2818 */ 'V', 'M', 'H', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 2828 */ 'V', 'M', 'H', 'R', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 2839 */ 'V', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 2847 */ 'V', 'M', 'S', 'U', 'M', 'S', 'H', 'S', 0,
  /* 2856 */ 'V', 'S', 'U', 'B', 'U', 'H', 'S', 0,
  /* 2864 */ 'V', 'A', 'D', 'D', 'U', 'H', 'S', 0,
  /* 2872 */ 'V', 'M', 'S', 'U', 'M', 'U', 'H', 'S', 0,
  /* 2881 */ 'A', 'D', 'D', 'I', 'S', 0,
  /* 2887 */ 'L', 'I', 'S', 0,
  /* 2891 */ 'X', 'O', 'R', 'I', 'S', 0,
  /* 2897 */ 'F', 'S', 'E', 'L', 'S', 0,
  /* 2903 */ 'F', 'M', 'U', 'L', 'S', 0,
  /* 2909 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 2926 */ 'F', 'A', 'B', 'S', 'S', 0,
  /* 2932 */ 'F', 'N', 'A', 'B', 'S', 'S', 0,
  /* 2939 */ 'D', 'S', 'S', 0,
  /* 2943 */ 'V', 'P', 'K', 'S', 'H', 'S', 'S', 0,
  /* 2951 */ 'V', 'P', 'K', 'S', 'W', 'S', 'S', 0,
  /* 2959 */ 'F', 'S', 'Q', 'R', 'T', 'S', 0,
  /* 2966 */ 'V', 'P', 'K', 'S', 'H', 'U', 'S', 0,
  /* 2974 */ 'V', 'P', 'K', 'U', 'H', 'U', 'S', 0,
  /* 2982 */ 'F', 'C', 'M', 'P', 'U', 'S', 0,
  /* 2989 */ 'V', 'P', 'K', 'S', 'W', 'U', 'S', 0,
  /* 2997 */ 'V', 'P', 'K', 'U', 'W', 'U', 'S', 0,
  /* 3005 */ 'F', 'D', 'I', 'V', 'S', 0,
  /* 3011 */ 'V', 'S', 'U', 'M', '2', 'S', 'W', 'S', 0,
  /* 3020 */ 'V', 'S', 'U', 'B', 'S', 'W', 'S', 0,
  /* 3028 */ 'V', 'A', 'D', 'D', 'S', 'W', 'S', 0,
  /* 3036 */ 'V', 'S', 'U', 'M', 'S', 'W', 'S', 0,
  /* 3044 */ 'V', 'S', 'U', 'B', 'U', 'W', 'S', 0,
  /* 3052 */ 'V', 'A', 'D', 'D', 'U', 'W', 'S', 0,
  /* 3060 */ 'V', 'C', 'T', 'S', 'X', 'S', 0,
  /* 3067 */ 'V', 'C', 'T', 'U', 'X', 'S', 0,
  /* 3074 */ 'D', 'C', 'B', 'T', 0,
  /* 3079 */ 'C', 'R', 'U', 'N', 'S', 'E', 'T', 0,
  /* 3087 */ 'C', 'R', 'S', 'E', 'T', 0,
  /* 3093 */ 'F', 'S', 'Q', 'R', 'T', 0,
  /* 3099 */ 'D', 'C', 'B', 'S', 'T', 0,
  /* 3105 */ 'D', 'S', 'T', 0,
  /* 3109 */ 'D', 'C', 'B', 'T', 'S', 'T', 0,
  /* 3116 */ 'D', 'S', 'T', 'S', 'T', 0,
  /* 3122 */ 'D', 'S', 'T', 'T', 0,
  /* 3127 */ 'D', 'S', 'T', 'S', 'T', 'T', 0,
  /* 3134 */ 'L', 'H', 'A', 'U', 0,
  /* 3139 */ 'S', 'T', 'B', 'U', 0,
  /* 3144 */ 'L', 'F', 'D', 'U', 0,
  /* 3149 */ 'S', 'T', 'F', 'D', 'U', 0,
  /* 3155 */ 'M', 'U', 'L', 'H', 'D', 'U', 0,
  /* 3162 */ 'L', 'D', 'U', 0,
  /* 3166 */ 'S', 'T', 'D', 'U', 0,
  /* 3171 */ 'D', 'I', 'V', 'D', 'U', 0,
  /* 3177 */ 'S', 'T', 'H', 'U', 0,
  /* 3182 */ 'L', 'F', 'S', 'U', 0,
  /* 3187 */ 'S', 'T', 'F', 'S', 'U', 0,
  /* 3193 */ 'M', 'U', 'L', 'H', 'W', 'U', 0,
  /* 3200 */ 'S', 'T', 'W', 'U', 0,
  /* 3205 */ 'D', 'I', 'V', 'W', 'U', 0,
  /* 3211 */ 'L', 'B', 'Z', 'U', 0,
  /* 3216 */ 'L', 'H', 'Z', 'U', 0,
  /* 3221 */ 'L', 'W', 'Z', 'U', 0,
  /* 3226 */ 'F', 'D', 'I', 'V', 0,
  /* 3231 */ 'C', 'R', 'E', 'Q', 'V', 0,
  /* 3237 */ 'V', 'S', 'R', 'A', 'W', 0,
  /* 3243 */ 'V', 'M', 'R', 'G', 'H', 'W', 0,
  /* 3250 */ 'M', 'U', 'L', 'H', 'W', 0,
  /* 3256 */ 'V', 'M', 'R', 'G', 'L', 'W', 0,
  /* 3263 */ 'M', 'U', 'L', 'L', 'W', 0,
  /* 3269 */ 'C', 'M', 'P', 'L', 'W', 0,
  /* 3275 */ 'V', 'R', 'L', 'W', 0,
  /* 3280 */ 'V', 'S', 'L', 'W', 0,
  /* 3285 */ 'C', 'M', 'P', 'W', 0,
  /* 3290 */ 'V', 'S', 'R', 'W', 0,
  /* 3295 */ 'V', 'A', 'V', 'G', 'S', 'W', 0,
  /* 3302 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'W', 0,
  /* 3311 */ 'V', 'M', 'I', 'N', 'S', 'W', 0,
  /* 3318 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'W', 0,
  /* 3327 */ 'E', 'X', 'T', 'S', 'W', 0,
  /* 3333 */ 'V', 'M', 'A', 'X', 'S', 'W', 0,
  /* 3340 */ 'V', 'S', 'P', 'L', 'T', 'W', 0,
  /* 3347 */ 'S', 'T', 'W', 0,
  /* 3351 */ 'V', 'S', 'U', 'B', 'C', 'U', 'W', 0,
  /* 3359 */ 'V', 'A', 'D', 'D', 'C', 'U', 'W', 0,
  /* 3367 */ 'V', 'A', 'V', 'G', 'U', 'W', 0,
  /* 3374 */ 'V', 'M', 'I', 'N', 'U', 'W', 0,
  /* 3381 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'W', 0,
  /* 3390 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'W', 0,
  /* 3399 */ 'V', 'M', 'A', 'X', 'U', 'W', 0,
  /* 3406 */ 'D', 'I', 'V', 'W', 0,
  /* 3411 */ 'C', 'N', 'T', 'L', 'Z', 'W', 0,
  /* 3418 */ 'L', 'H', 'A', 'X', 0,
  /* 3423 */ 'L', 'W', 'A', 'X', 0,
  /* 3428 */ 'L', 'V', 'E', 'B', 'X', 0,
  /* 3434 */ 'S', 'T', 'V', 'E', 'B', 'X', 0,
  /* 3441 */ 'S', 'T', 'B', 'X', 0,
  /* 3446 */ 'S', 'T', 'D', 'C', 'X', 0,
  /* 3452 */ 'S', 'T', 'W', 'C', 'X', 0,
  /* 3458 */ 'L', 'F', 'D', 'X', 0,
  /* 3463 */ 'S', 'T', 'F', 'D', 'X', 0,
  /* 3469 */ 'L', 'D', 'X', 0,
  /* 3473 */ 'S', 'T', 'D', 'X', 0,
  /* 3478 */ 'L', 'V', 'E', 'H', 'X', 0,
  /* 3484 */ 'S', 'T', 'V', 'E', 'H', 'X', 0,
  /* 3491 */ 'S', 'T', 'H', 'X', 0,
  /* 3496 */ 'V', 'U', 'P', 'K', 'H', 'P', 'X', 0,
  /* 3504 */ 'V', 'P', 'K', 'P', 'X', 0,
  /* 3510 */ 'V', 'U', 'P', 'K', 'L', 'P', 'X', 0,
  /* 3518 */ 'L', 'D', 'A', 'R', 'X', 0,
  /* 3524 */ 'L', 'W', 'A', 'R', 'X', 0,
  /* 3530 */ 'L', 'H', 'B', 'R', 'X', 0,
  /* 3536 */ 'S', 'T', 'H', 'B', 'R', 'X', 0,
  /* 3543 */ 'L', 'W', 'B', 'R', 'X', 0,
  /* 3549 */ 'S', 'T', 'W', 'B', 'R', 'X', 0,
  /* 3556 */ 'V', 'C', 'F', 'S', 'X', 0,
  /* 3562 */ 'L', 'F', 'S', 'X', 0,
  /* 3567 */ 'S', 'T', 'F', 'S', 'X', 0,
  /* 3573 */ 'S', 'T', 'D', 'U', 'X', 0,
  /* 3579 */ 'V', 'C', 'F', 'U', 'X', 0,
  /* 3585 */ 'S', 'T', 'W', 'U', 'X', 0,
  /* 3591 */ 'L', 'V', 'X', 0,
  /* 3595 */ 'S', 'T', 'V', 'X', 0,
  /* 3600 */ 'L', 'V', 'E', 'W', 'X', 0,
  /* 3606 */ 'S', 'T', 'V', 'E', 'W', 'X', 0,
  /* 3613 */ 'S', 'T', 'F', 'I', 'W', 'X', 0,
  /* 3620 */ 'S', 'T', 'W', 'X', 0,
  /* 3625 */ 'L', 'B', 'Z', 'X', 0,
  /* 3630 */ 'L', 'H', 'Z', 'X', 0,
  /* 3635 */ 'L', 'W', 'Z', 'X', 0,
  /* 3640 */ 'C', 'O', 'P', 'Y', 0,
  /* 3645 */ 'D', 'C', 'B', 'Z', 0,
  /* 3650 */ 'L', 'B', 'Z', 0,
  /* 3654 */ 'F', 'C', 'T', 'I', 'D', 'Z', 0,
  /* 3661 */ 'L', 'H', 'Z', 0,
  /* 3665 */ 'V', 'R', 'F', 'I', 'Z', 0,
  /* 3671 */ 'F', 'C', 'T', 'I', 'W', 'Z', 0,
  /* 3678 */ 'L', 'W', 'Z', 0,
  /* 3682 */ 'L', 'D', 't', 'o', 'c', 0,
  /* 3688 */ 'L', 'D', 'i', 'n', 't', 'o', '_', 't', 'o', 'c', 0,
  /* 3699 */ 'M', 'F', 'C', 'R', '8', 'p', 's', 'e', 'u', 'd', 0,
  /* 3710 */ 'M', 'F', 'C', 'R', 'p', 's', 'e', 'u', 'd', 0,
  /* 3720 */ 'L', 'D', 't', 'o', 'c', '_', 'r', 'e', 's', 't', 'o', 'r', 'e', 0,
  /* 3734 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'a', 'i', 0,
  /* 3745 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'd', 'i', 0,
  /* 3756 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'r', 'i', 0,
  /* 3767 */ 'B', 'L', 'A', '8', '_', 'D', 'a', 'r', 'w', 'i', 'n', 0,
  /* 3779 */ 'B', 'L', '8', '_', 'D', 'a', 'r', 'w', 'i', 'n', 0,
  /* 3790 */ 'B', 'C', 'T', 'R', 'L', '8', '_', 'D', 'a', 'r', 'w', 'i', 'n', 0,
  /* 3804 */ 'B', 'L', 'A', '_', 'D', 'a', 'r', 'w', 'i', 'n', 0,
  /* 3815 */ 'B', 'L', '_', 'D', 'a', 'r', 'w', 'i', 'n', 0,
  /* 3825 */ 'B', 'C', 'T', 'R', 'L', '_', 'D', 'a', 'r', 'w', 'i', 'n', 0,
  /* 3838 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'B', 'o', 0,
  /* 3848 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'B', 'o', 0,
  /* 3858 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'B', 'o', 0,
  /* 3868 */ 'A', 'D', 'D', 'I', 'C', 'o', 0,
  /* 3875 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'H', 'o', 0,
  /* 3885 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'H', 'o', 0,
  /* 3895 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'H', 'o', 0,
  /* 3905 */ 'A', 'N', 'D', 'I', 'o', 0,
  /* 3911 */ 'R', 'L', 'W', 'I', 'N', 'M', 'o', 0,
  /* 3919 */ 'V', 'C', 'M', 'P', 'B', 'F', 'P', 'o', 0,
  /* 3928 */ 'V', 'C', 'M', 'P', 'G', 'E', 'F', 'P', 'o', 0,
  /* 3938 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'F', 'P', 'o', 0,
  /* 3948 */ 'V', 'C', 'M', 'P', 'G', 'T', 'F', 'P', 'o', 0,
  /* 3958 */ 'A', 'N', 'D', 'I', 'S', 'o', 0,
  /* 3965 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'W', 'o', 0,
  /* 3975 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'W', 'o', 0,
  /* 3985 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'W', 'o', 0,
  /* 3995 */ 'F', 'A', 'D', 'D', 'r', 't', 'z', 0,
};

extern const unsigned PPCInstrNameIndices[] = {
    2100U, 2346U, 2177U, 2190U, 2168U, 2211U, 1850U, 1865U, 
    1756U, 1879U, 2909U, 1691U, 1647U, 3640U, 1671U, 399U, 
    702U, 1457U, 653U, 1660U, 713U, 2082U, 799U, 1474U, 
    672U, 3868U, 2881U, 1048U, 1678U, 726U, 1733U, 741U, 
    2394U, 2554U, 1593U, 708U, 1463U, 659U, 3958U, 1213U, 
    3905U, 1206U, 562U, 118U, 298U, 920U, 485U, 41U, 
    221U, 847U, 526U, 82U, 262U, 886U, 505U, 61U, 
    241U, 866U, 602U, 158U, 338U, 958U, 465U, 21U, 
    201U, 815U, 582U, 138U, 318U, 939U, 546U, 102U, 
    282U, 905U, 1255U, 1453U, 2672U, 1028U, 3790U, 1786U, 
    3825U, 447U, 3779U, 1778U, 1810U, 3767U, 1769U, 1797U, 
    3804U, 430U, 2615U, 3815U, 439U, 1602U, 2094U, 1582U, 
    2087U, 3269U, 2142U, 3285U, 2149U, 1640U, 3411U, 3231U, 
    2649U, 3087U, 3079U, 1228U, 1746U, 2071U, 3099U, 3074U, 
    3109U, 3645U, 2237U, 1635U, 3171U, 3406U, 3205U, 2939U, 
    2204U, 3105U, 357U, 3116U, 363U, 3127U, 378U, 3122U, 
    371U, 1492U, 687U, 3233U, 1103U, 1356U, 641U, 1992U, 
    787U, 3327U, 184U, 387U, 1611U, 2926U, 1525U, 2760U, 
    3995U, 1564U, 1628U, 2982U, 3654U, 3671U, 3226U, 3005U, 
    1530U, 2766U, 2640U, 1424U, 2745U, 2221U, 2903U, 1617U, 
    2932U, 1552U, 2795U, 1536U, 2773U, 1430U, 2752U, 2549U, 
    1570U, 2897U, 3093U, 2959U, 1419U, 2739U, 1244U, 3650U, 
    1155U, 3211U, 1085U, 3625U, 1137U, 1573U, 3518U, 3162U, 
    3469U, 3688U, 3682U, 3720U, 1543U, 3144U, 3458U, 2786U, 
    3182U, 3562U, 1240U, 629U, 3134U, 1067U, 3418U, 1113U, 
    3530U, 3661U, 1160U, 3216U, 1091U, 3630U, 1143U, 2107U, 
    805U, 2887U, 1055U, 3428U, 3478U, 3600U, 2216U, 2663U, 
    3591U, 2226U, 1247U, 3524U, 3423U, 3543U, 3678U, 1165U, 
    3221U, 1097U, 3635U, 1149U, 1822U, 2569U, 984U, 3699U, 
    3710U, 2677U, 1034U, 2781U, 2619U, 990U, 1827U, 1701U, 
    2581U, 1834U, 762U, 2683U, 1041U, 0U, 14U, 1840U, 
    2624U, 996U, 1710U, 2588U, 1558U, 3155U, 3250U, 3193U, 
    1576U, 2104U, 3263U, 2629U, 1002U, 1592U, 707U, 1846U, 
    782U, 2545U, 2645U, 1014U, 2646U, 1221U, 1015U, 458U, 
    1501U, 697U, 2132U, 810U, 2892U, 1061U, 2595U, 2155U, 
    2161U, 2574U, 2110U, 2117U, 2327U, 976U, 3911U, 2334U, 
    404U, 769U, 417U, 834U, 1505U, 1588U, 3281U, 2606U, 
    1520U, 2076U, 3238U, 2136U, 1607U, 3291U, 1376U, 648U, 
    3139U, 1073U, 3441U, 1119U, 1624U, 3446U, 3166U, 3573U, 
    3473U, 193U, 177U, 1547U, 3149U, 3463U, 3613U, 2790U, 
    3187U, 3567U, 2012U, 794U, 3536U, 3177U, 1079U, 3491U, 
    1125U, 3434U, 3484U, 3606U, 3595U, 2231U, 3347U, 1108U, 
    3549U, 3452U, 3200U, 3585U, 3620U, 1131U, 1751U, 756U, 
    1468U, 665U, 1665U, 719U, 1480U, 679U, 1684U, 733U, 
    1739U, 748U, 1487U, 1271U, 634U, 1233U, 621U, 2668U, 
    1024U, 3734U, 1170U, 3745U, 1182U, 3756U, 1194U, 2421U, 
    1719U, 3359U, 2458U, 2706U, 2839U, 3028U, 2260U, 2731U, 
    2304U, 2864U, 2380U, 3052U, 1597U, 1462U, 1300U, 1936U, 
    3295U, 1388U, 2024U, 3367U, 3556U, 3579U, 2426U, 3919U, 
    2514U, 3938U, 1410U, 3848U, 2046U, 3885U, 3381U, 3975U, 
    2473U, 3928U, 2523U, 3948U, 1347U, 3838U, 1983U, 3875U, 
    3318U, 3965U, 1437U, 3858U, 2055U, 3895U, 3390U, 3985U, 
    3060U, 3067U, 2488U, 2465U, 2450U, 2532U, 1362U, 1998U, 
    3333U, 1446U, 2064U, 3399U, 2818U, 2828U, 2507U, 1332U, 
    1968U, 3311U, 1395U, 2031U, 3374U, 2294U, 1257U, 1899U, 
    3243U, 1264U, 1906U, 3256U, 2243U, 2277U, 2847U, 2268U, 
    2312U, 2872U, 1292U, 1928U, 1380U, 2016U, 1339U, 1975U, 
    1402U, 2038U, 2434U, 2644U, 2654U, 2340U, 3504U, 2943U, 
    2966U, 2951U, 2989U, 2356U, 2974U, 2364U, 2997U, 2482U, 
    2321U, 2388U, 2539U, 3665U, 1277U, 1913U, 3275U, 2497U, 
    2199U, 2217U, 1282U, 2124U, 1918U, 2411U, 3280U, 1369U, 
    2005U, 1315U, 1951U, 3302U, 3340U, 2664U, 1251U, 1893U, 
    3237U, 1287U, 1923U, 2416U, 3290U, 3351U, 2443U, 2698U, 
    2810U, 3020U, 2252U, 2723U, 2286U, 2856U, 2372U, 3044U, 
    3011U, 2689U, 2801U, 2714U, 3036U, 3496U, 1307U, 1943U, 
    3510U, 1324U, 1960U, 2658U, 7U, 2659U, 1019U, 2131U, 
    809U, 2891U, 1060U, 
};

static inline void InitPPCMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(PPCInsts, PPCInstrNameIndices, PPCInstrNameData, 531);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct PPCGenInstrInfo : public TargetInstrInfoImpl {
  explicit PPCGenInstrInfo(int SO = -1, int DO = -1);
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR
#undef GET_INSTRINFO_CTOR
namespace llvm {
extern const MCInstrDesc PPCInsts[];
extern const unsigned PPCInstrNameIndices[];
extern const char PPCInstrNameData[];
PPCGenInstrInfo::PPCGenInstrInfo(int SO, int DO)
  : TargetInstrInfoImpl(SO, DO) {
  InitMCInstrInfo(PPCInsts, PPCInstrNameIndices, PPCInstrNameData, 531);
}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR

