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

namespace SPU {
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
    ABSDB	= 15,
    ADDXr32	= 16,
    ADDXr64	= 17,
    ADDXv2i64	= 18,
    ADDXv4i32	= 19,
    ADJCALLSTACKDOWN	= 20,
    ADJCALLSTACKUP	= 21,
    AHIr16	= 22,
    AHIvec	= 23,
    AHr16	= 24,
    AHv8i16	= 25,
    AIf32	= 26,
    AIr32	= 27,
    AIv4f32	= 28,
    AIv4i32	= 29,
    ANDBIr8	= 30,
    ANDBIv16i8	= 31,
    ANDCr128	= 32,
    ANDCr16	= 33,
    ANDCr32	= 34,
    ANDCr64	= 35,
    ANDCr8	= 36,
    ANDCv16i8	= 37,
    ANDCv16i8_conv	= 38,
    ANDCv2i64	= 39,
    ANDCv4i32	= 40,
    ANDCv8i16	= 41,
    ANDHIi8i16	= 42,
    ANDHIr16	= 43,
    ANDHIv8i16	= 44,
    ANDIi16i32	= 45,
    ANDIi8i32	= 46,
    ANDIr32	= 47,
    ANDIv4i32	= 48,
    ANDfabs32	= 49,
    ANDfabs64	= 50,
    ANDfabsvec	= 51,
    ANDi16i32	= 52,
    ANDr128	= 53,
    ANDr16	= 54,
    ANDr32	= 55,
    ANDr64	= 56,
    ANDr8	= 57,
    ANDv16i8	= 58,
    ANDv2i64	= 59,
    ANDv4i32	= 60,
    ANDv8i16	= 61,
    AVGB	= 62,
    Ar32	= 63,
    Av16i8	= 64,
    Av4i32	= 65,
    BGXvec	= 66,
    BGr32	= 67,
    BGr64	= 68,
    BGv2i64	= 69,
    BGv4i32	= 70,
    BI	= 71,
    BISL	= 72,
    BISLED_00	= 73,
    BISLED_0D	= 74,
    BISLED_E0	= 75,
    BISLED_ED	= 76,
    BR	= 77,
    BRA	= 78,
    BRASL	= 79,
    BRHNZr16	= 80,
    BRHNZv8i16	= 81,
    BRHZr16	= 82,
    BRHZv8i16	= 83,
    BRNZr32	= 84,
    BRNZv4i32	= 85,
    BRSL	= 86,
    BRZr32	= 87,
    BRZv4i32	= 88,
    CBD	= 89,
    CBX	= 90,
    CDD	= 91,
    CDDf64	= 92,
    CDX	= 93,
    CDXf64	= 94,
    CEQBIr8	= 95,
    CEQBIv16i8	= 96,
    CEQBr8	= 97,
    CEQBv16i8	= 98,
    CEQHIr16	= 99,
    CEQHIv8i16	= 100,
    CEQHr16	= 101,
    CEQHv8i16	= 102,
    CEQIr32	= 103,
    CEQIv4i32	= 104,
    CEQr32	= 105,
    CEQv4i32	= 106,
    CFSif32	= 107,
    CFSiv4f32	= 108,
    CFUif32	= 109,
    CFUiv4f32	= 110,
    CGTBIr8	= 111,
    CGTBIv16i8	= 112,
    CGTBr8	= 113,
    CGTBv16i8	= 114,
    CGTHIr16	= 115,
    CGTHIv8i16	= 116,
    CGTHr16	= 117,
    CGTHv8i16	= 118,
    CGTIf32	= 119,
    CGTIr32	= 120,
    CGTIv4f32	= 121,
    CGTIv4i32	= 122,
    CGTr32	= 123,
    CGTv4i32	= 124,
    CGr32	= 125,
    CGr64	= 126,
    CGv2i64	= 127,
    CGv4i32	= 128,
    CHD	= 129,
    CHX	= 130,
    CLGTBIr8	= 131,
    CLGTBIv16i8	= 132,
    CLGTBr8	= 133,
    CLGTBv16i8	= 134,
    CLGTHIr16	= 135,
    CLGTHIv8i16	= 136,
    CLGTHr16	= 137,
    CLGTHv8i16	= 138,
    CLGTIr32	= 139,
    CLGTIv4i32	= 140,
    CLGTr32	= 141,
    CLGTv4i32	= 142,
    CLZr32	= 143,
    CLZv4i32	= 144,
    CNTBv16i8	= 145,
    CNTBv4i32	= 146,
    CNTBv8i16	= 147,
    CSiFf32	= 148,
    CSiFv4f32	= 149,
    CUiFf32	= 150,
    CUiFv4f32	= 151,
    CWD	= 152,
    CWDf32	= 153,
    CWX	= 154,
    CWXf32	= 155,
    CellSDKa	= 156,
    CellSDKaddx	= 157,
    CellSDKah	= 158,
    CellSDKahi	= 159,
    CellSDKai	= 160,
    CellSDKand	= 161,
    CellSDKandbi	= 162,
    CellSDKandc	= 163,
    CellSDKandhi	= 164,
    CellSDKandi	= 165,
    CellSDKbg	= 166,
    CellSDKbgx	= 167,
    CellSDKceq	= 168,
    CellSDKceqb	= 169,
    CellSDKceqbi	= 170,
    CellSDKceqh	= 171,
    CellSDKceqhi	= 172,
    CellSDKceqi	= 173,
    CellSDKcg	= 174,
    CellSDKcgt	= 175,
    CellSDKcgtb	= 176,
    CellSDKcgtbi	= 177,
    CellSDKcgth	= 178,
    CellSDKcgthi	= 179,
    CellSDKcgti	= 180,
    CellSDKcgx	= 181,
    CellSDKclgt	= 182,
    CellSDKclgtb	= 183,
    CellSDKclgtbi	= 184,
    CellSDKclgth	= 185,
    CellSDKclgthi	= 186,
    CellSDKclgti	= 187,
    CellSDKdfa	= 188,
    CellSDKdfm	= 189,
    CellSDKdfma	= 190,
    CellSDKdfms	= 191,
    CellSDKdfnma	= 192,
    CellSDKdfnms	= 193,
    CellSDKdfs	= 194,
    CellSDKfa	= 195,
    CellSDKfceq	= 196,
    CellSDKfcgt	= 197,
    CellSDKfcmeq	= 198,
    CellSDKfcmgt	= 199,
    CellSDKfm	= 200,
    CellSDKfma	= 201,
    CellSDKfms	= 202,
    CellSDKfnms	= 203,
    CellSDKfs	= 204,
    CellSDKmpy	= 205,
    CellSDKmpya	= 206,
    CellSDKmpyh	= 207,
    CellSDKmpyhh	= 208,
    CellSDKmpyhha	= 209,
    CellSDKmpyhhau	= 210,
    CellSDKmpyhhu	= 211,
    CellSDKmpyi	= 212,
    CellSDKmpys	= 213,
    CellSDKmpyu	= 214,
    CellSDKmpyui	= 215,
    CellSDKnand	= 216,
    CellSDKnor	= 217,
    CellSDKor	= 218,
    CellSDKorbi	= 219,
    CellSDKorc	= 220,
    CellSDKorhi	= 221,
    CellSDKori	= 222,
    CellSDKsf	= 223,
    CellSDKsfh	= 224,
    CellSDKsfhi	= 225,
    CellSDKsfi	= 226,
    CellSDKsfx	= 227,
    CellSDKxor	= 228,
    CellSDKxorbi	= 229,
    CellSDKxorhi	= 230,
    CellSDKxori	= 231,
    DFNMSf64	= 232,
    DFNMSv2f64	= 233,
    ENOP	= 234,
    EQVr128	= 235,
    EQVr128_1	= 236,
    EQVr128_2	= 237,
    EQVr128_3	= 238,
    EQVr16	= 239,
    EQVr16_1	= 240,
    EQVr16_2	= 241,
    EQVr16_3	= 242,
    EQVr32	= 243,
    EQVr32_1	= 244,
    EQVr32_2	= 245,
    EQVr32_3	= 246,
    EQVr64	= 247,
    EQVr64_1	= 248,
    EQVr64_2	= 249,
    EQVr64_3	= 250,
    EQVr8	= 251,
    EQVr8_1	= 252,
    EQVr8_2	= 253,
    EQVr8_3	= 254,
    EQVv16i8	= 255,
    EQVv16i8_1	= 256,
    EQVv16i8_2	= 257,
    EQVv16i8_3	= 258,
    EQVv2i64	= 259,
    EQVv2i64_1	= 260,
    EQVv2i64_2	= 261,
    EQVv2i64_3	= 262,
    EQVv4i32	= 263,
    EQVv4i32_1	= 264,
    EQVv4i32_2	= 265,
    EQVv4i32_3	= 266,
    EQVv8i16	= 267,
    EQVv8i16_1	= 268,
    EQVv8i16_2	= 269,
    EQVv8i16_3	= 270,
    FAf32	= 271,
    FAf64	= 272,
    FAv2f64	= 273,
    FAv4f32	= 274,
    FCEQf32	= 275,
    FCGTf32	= 276,
    FCMEQf32	= 277,
    FCMGTf32	= 278,
    FESDf32	= 279,
    FESDvec	= 280,
    FIf32	= 281,
    FIv4f32	= 282,
    FMAf32	= 283,
    FMAf64	= 284,
    FMAv2f64	= 285,
    FMAv4f32	= 286,
    FMSf32	= 287,
    FMSf64	= 288,
    FMSv2f64	= 289,
    FMSv4f32	= 290,
    FMf32	= 291,
    FMf64	= 292,
    FMv2f64	= 293,
    FMv4f32	= 294,
    FNMAf64	= 295,
    FNMAv2f64	= 296,
    FNMSf32	= 297,
    FNMSv4f32	= 298,
    FRDSf64	= 299,
    FRESTf32	= 300,
    FRESTv4f32	= 301,
    FSCRRf32	= 302,
    FSCRWf32	= 303,
    FSM64r16	= 304,
    FSM64r32	= 305,
    FSMBIv16i8	= 306,
    FSMBIv2i64	= 307,
    FSMBIv4i32	= 308,
    FSMBIv8i16	= 309,
    FSMBv16i8	= 310,
    FSMBv16i8_r16	= 311,
    FSMHv8i16	= 312,
    FSMHv8i16_r16	= 313,
    FSMr16	= 314,
    FSMr32	= 315,
    FSMv4i32	= 316,
    FSf32	= 317,
    FSf64	= 318,
    FSv2f64	= 319,
    FSv4f32	= 320,
    GBBv16i8	= 321,
    GBBv16i8_r16	= 322,
    GBBv16i8_r32	= 323,
    GBHv8i16	= 324,
    GBHv8i16_r16	= 325,
    GBHv8i16_r32	= 326,
    GBv4i32	= 327,
    GBv4i32_r16	= 328,
    GBv4i32_r32	= 329,
    HBRA	= 330,
    HBR_LABEL	= 331,
    HEQIr32	= 332,
    HEQr32	= 333,
    HGTIr32	= 334,
    HGTr32	= 335,
    HLGTIr32	= 336,
    HLGTr32	= 337,
    ILAf32	= 338,
    ILAf64	= 339,
    ILAhi	= 340,
    ILAlo	= 341,
    ILAlsa	= 342,
    ILAr32	= 343,
    ILAr64	= 344,
    ILAv2i64	= 345,
    ILAv4i32	= 346,
    ILHUf32	= 347,
    ILHUhi	= 348,
    ILHUr32	= 349,
    ILHUr64	= 350,
    ILHUv2i64	= 351,
    ILHUv4i32	= 352,
    ILHr16	= 353,
    ILHr8	= 354,
    ILHv8i16	= 355,
    ILf32	= 356,
    ILf64	= 357,
    ILr32	= 358,
    ILr64	= 359,
    ILv2i64	= 360,
    ILv4i32	= 361,
    IOHLf32	= 362,
    IOHLlo	= 363,
    IOHLr32	= 364,
    IOHLv2i64	= 365,
    IOHLv4i32	= 366,
    LNOP	= 367,
    LQAf32	= 368,
    LQAf64	= 369,
    LQAr128	= 370,
    LQAr16	= 371,
    LQAr32	= 372,
    LQAr64	= 373,
    LQAr8	= 374,
    LQAv16i8	= 375,
    LQAv2f64	= 376,
    LQAv2i64	= 377,
    LQAv4f32	= 378,
    LQAv4i32	= 379,
    LQAv8i16	= 380,
    LQDf32	= 381,
    LQDf64	= 382,
    LQDr128	= 383,
    LQDr16	= 384,
    LQDr32	= 385,
    LQDr64	= 386,
    LQDr8	= 387,
    LQDv16i8	= 388,
    LQDv2f64	= 389,
    LQDv2i64	= 390,
    LQDv4f32	= 391,
    LQDv4i32	= 392,
    LQDv8i16	= 393,
    LQXf32	= 394,
    LQXf64	= 395,
    LQXr128	= 396,
    LQXr16	= 397,
    LQXr32	= 398,
    LQXr64	= 399,
    LQXr8	= 400,
    LQXv16i8	= 401,
    LQXv2f64	= 402,
    LQXv2i64	= 403,
    LQXv4f32	= 404,
    LQXv4i32	= 405,
    LQXv8i16	= 406,
    LRf32	= 407,
    LRf64	= 408,
    LRr128	= 409,
    LRr16	= 410,
    LRr32	= 411,
    LRr64	= 412,
    LRr8	= 413,
    LRv16i8	= 414,
    LRv2f64	= 415,
    LRv2i64	= 416,
    LRv4f32	= 417,
    LRv4i32	= 418,
    LRv8i16	= 419,
    MPYAr32	= 420,
    MPYAr32_sext	= 421,
    MPYAr32_sextinreg	= 422,
    MPYAv4i32	= 423,
    MPYHHAUr32	= 424,
    MPYHHAUvec	= 425,
    MPYHHAr32	= 426,
    MPYHHAvec	= 427,
    MPYHHUr32	= 428,
    MPYHHUv4i32	= 429,
    MPYHHr32	= 430,
    MPYHHv8i16	= 431,
    MPYHr32	= 432,
    MPYHv4i32	= 433,
    MPYIr16	= 434,
    MPYIvec	= 435,
    MPYSr16	= 436,
    MPYSv4i32	= 437,
    MPYUIr16	= 438,
    MPYUIvec	= 439,
    MPYUr16	= 440,
    MPYUr32	= 441,
    MPYUv4i32	= 442,
    MPYr16	= 443,
    MPYv8i16	= 444,
    NANDr128	= 445,
    NANDr16	= 446,
    NANDr32	= 447,
    NANDr64	= 448,
    NANDr8	= 449,
    NANDv16i8	= 450,
    NANDv2i64	= 451,
    NANDv4i32	= 452,
    NANDv8i16	= 453,
    NORr128	= 454,
    NORr16	= 455,
    NORr32	= 456,
    NORr64	= 457,
    NORr8	= 458,
    NORv16i8	= 459,
    NORv2i64	= 460,
    NORv4i32	= 461,
    NORv8i16	= 462,
    ORBIr8	= 463,
    ORBIv16i8	= 464,
    ORCr128	= 465,
    ORCr16	= 466,
    ORCr32	= 467,
    ORCr64	= 468,
    ORCr8	= 469,
    ORCv16i8	= 470,
    ORCv2i64	= 471,
    ORCv4i32	= 472,
    ORCv8i16	= 473,
    ORHIi8i16	= 474,
    ORHIr16	= 475,
    ORHIv8i16	= 476,
    ORIi16i32	= 477,
    ORIi8i32	= 478,
    ORIr32	= 479,
    ORIv4i32	= 480,
    ORXv4i32	= 481,
    ORf32	= 482,
    ORf64	= 483,
    ORr128	= 484,
    ORr16	= 485,
    ORr32	= 486,
    ORr64	= 487,
    ORr8	= 488,
    ORv16i8	= 489,
    ORv2f64	= 490,
    ORv2i64	= 491,
    ORv4f32	= 492,
    ORv4i32	= 493,
    ORv8i16	= 494,
    RET	= 495,
    ROTHIr16	= 496,
    ROTHIr16_r32	= 497,
    ROTHIv8i16	= 498,
    ROTHMIr16	= 499,
    ROTHMIv8i16	= 500,
    ROTHMr16	= 501,
    ROTHMv8i16	= 502,
    ROTHr16	= 503,
    ROTHr16_r32	= 504,
    ROTHv8i16	= 505,
    ROTIr32	= 506,
    ROTIr32_i16	= 507,
    ROTIr32_i8	= 508,
    ROTIv4i32	= 509,
    ROTIv4i32_i16	= 510,
    ROTIv4i32_i8	= 511,
    ROTMAHIr16	= 512,
    ROTMAHIv8i16	= 513,
    ROTMAHr16	= 514,
    ROTMAHv8i16	= 515,
    ROTMAIr32_i32	= 516,
    ROTMAIr64_i32	= 517,
    ROTMAIv2i64_i32	= 518,
    ROTMAIv4i32_i32	= 519,
    ROTMAr32	= 520,
    ROTMAv4i32	= 521,
    ROTMIr32	= 522,
    ROTMIv4i32	= 523,
    ROTMr32	= 524,
    ROTMv4i32	= 525,
    ROTQBIIr128	= 526,
    ROTQBIIr64	= 527,
    ROTQBIIv16i8	= 528,
    ROTQBIIv2i64	= 529,
    ROTQBIIv4i32	= 530,
    ROTQBIIv8i16	= 531,
    ROTQBIr128	= 532,
    ROTQBIr64	= 533,
    ROTQBIv16i8	= 534,
    ROTQBIv2i64	= 535,
    ROTQBIv4i32	= 536,
    ROTQBIv8i16	= 537,
    ROTQBYBIv16i8_r32	= 538,
    ROTQBYBIv2i64_r32	= 539,
    ROTQBYBIv4i32_r32	= 540,
    ROTQBYBIv8i16_r32	= 541,
    ROTQBYIi128	= 542,
    ROTQBYIv16i8	= 543,
    ROTQBYIv2i64	= 544,
    ROTQBYIv4f32	= 545,
    ROTQBYIv4i32	= 546,
    ROTQBYIv8i16	= 547,
    ROTQBYIvfi64	= 548,
    ROTQBYi128	= 549,
    ROTQBYv16i8	= 550,
    ROTQBYv2f64	= 551,
    ROTQBYv2i64	= 552,
    ROTQBYv4f32	= 553,
    ROTQBYv4i32	= 554,
    ROTQBYv8i16	= 555,
    ROTQMBIIr128	= 556,
    ROTQMBIIr64	= 557,
    ROTQMBIIv16i8	= 558,
    ROTQMBIIv2i64	= 559,
    ROTQMBIIv4i32	= 560,
    ROTQMBIIv8i16	= 561,
    ROTQMBIr128	= 562,
    ROTQMBIr64	= 563,
    ROTQMBIv16i8	= 564,
    ROTQMBIv2i64	= 565,
    ROTQMBIv4i32	= 566,
    ROTQMBIv8i16	= 567,
    ROTQMBYBIr128	= 568,
    ROTQMBYBIv16i8	= 569,
    ROTQMBYBIv2i64	= 570,
    ROTQMBYBIv4i32	= 571,
    ROTQMBYBIv8i16	= 572,
    ROTQMBYIr128	= 573,
    ROTQMBYIr128_zext_r16	= 574,
    ROTQMBYIr128_zext_r32	= 575,
    ROTQMBYIr128_zext_r64	= 576,
    ROTQMBYIr128_zext_r8	= 577,
    ROTQMBYIr64	= 578,
    ROTQMBYIv16i8	= 579,
    ROTQMBYIv2i64	= 580,
    ROTQMBYIv4i32	= 581,
    ROTQMBYIv8i16	= 582,
    ROTQMBYr128	= 583,
    ROTQMBYr64	= 584,
    ROTQMBYv16i8	= 585,
    ROTQMBYv2i64	= 586,
    ROTQMBYv4i32	= 587,
    ROTQMBYv8i16	= 588,
    ROTr32	= 589,
    ROTr32_r16_anyext	= 590,
    ROTr32_r8_anyext	= 591,
    ROTv4i32	= 592,
    SELBf32_cond	= 593,
    SELBf64_cond	= 594,
    SELBr128	= 595,
    SELBr16	= 596,
    SELBr16_cond	= 597,
    SELBr32	= 598,
    SELBr32_cond	= 599,
    SELBr64	= 600,
    SELBr64_cond	= 601,
    SELBr8	= 602,
    SELBr8_cond	= 603,
    SELBv16i8	= 604,
    SELBv16i8_cond	= 605,
    SELBv16i8_vcond	= 606,
    SELBv2i64	= 607,
    SELBv2i64_cond	= 608,
    SELBv2i64_vcond	= 609,
    SELBv4f32_cond	= 610,
    SELBv4i32	= 611,
    SELBv4i32_cond	= 612,
    SELBv4i32_vcond	= 613,
    SELBv8i16	= 614,
    SELBv8i16_cond	= 615,
    SELBv8i16_vcond	= 616,
    SFHIr16	= 617,
    SFHIvec	= 618,
    SFHr16	= 619,
    SFHvec	= 620,
    SFIr32	= 621,
    SFIvec	= 622,
    SFXr32	= 623,
    SFXr64	= 624,
    SFXv2i64	= 625,
    SFXv4i32	= 626,
    SFr32	= 627,
    SFvec	= 628,
    SHLHIr16	= 629,
    SHLHIv8i16	= 630,
    SHLHr16	= 631,
    SHLHr16_r32	= 632,
    SHLHv8i16	= 633,
    SHLIr32	= 634,
    SHLIv4i32	= 635,
    SHLQBIIv16i8	= 636,
    SHLQBIIv2f64	= 637,
    SHLQBIIv2i64	= 638,
    SHLQBIIv4f32	= 639,
    SHLQBIIv4i32	= 640,
    SHLQBIIv8i16	= 641,
    SHLQBIr128	= 642,
    SHLQBIv16i8	= 643,
    SHLQBIv2f64	= 644,
    SHLQBIv2i64	= 645,
    SHLQBIv4f32	= 646,
    SHLQBIv4i32	= 647,
    SHLQBIv8i16	= 648,
    SHLQBYBIr128	= 649,
    SHLQBYBIv16i8	= 650,
    SHLQBYBIv2f64	= 651,
    SHLQBYBIv2i64	= 652,
    SHLQBYBIv4f32	= 653,
    SHLQBYBIv4i32	= 654,
    SHLQBYBIv8i16	= 655,
    SHLQBYIr128	= 656,
    SHLQBYIv16i8	= 657,
    SHLQBYIv2f64	= 658,
    SHLQBYIv2i64	= 659,
    SHLQBYIv4f32	= 660,
    SHLQBYIv4i32	= 661,
    SHLQBYIv8i16	= 662,
    SHLQBYr128	= 663,
    SHLQBYv16i8	= 664,
    SHLQBYv2f64	= 665,
    SHLQBYv2i64	= 666,
    SHLQBYv4f32	= 667,
    SHLQBYv4i32	= 668,
    SHLQBYv8i16	= 669,
    SHLr32	= 670,
    SHLv4i32	= 671,
    SHUFBgprc	= 672,
    SHUFBv16i8	= 673,
    SHUFBv16i8_m32	= 674,
    SHUFBv2f64	= 675,
    SHUFBv2f64_m32	= 676,
    SHUFBv2i64	= 677,
    SHUFBv2i64_m32	= 678,
    SHUFBv4f32	= 679,
    SHUFBv4f32_m32	= 680,
    SHUFBv4i32	= 681,
    SHUFBv4i32_m32	= 682,
    SHUFBv8i16	= 683,
    SHUFBv8i16_m32	= 684,
    STQAf32	= 685,
    STQAf64	= 686,
    STQAr128	= 687,
    STQAr16	= 688,
    STQAr32	= 689,
    STQAr64	= 690,
    STQAr8	= 691,
    STQAv16i8	= 692,
    STQAv2f64	= 693,
    STQAv2i64	= 694,
    STQAv4f32	= 695,
    STQAv4i32	= 696,
    STQAv8i16	= 697,
    STQDf32	= 698,
    STQDf64	= 699,
    STQDr128	= 700,
    STQDr16	= 701,
    STQDr32	= 702,
    STQDr64	= 703,
    STQDr8	= 704,
    STQDv16i8	= 705,
    STQDv2f64	= 706,
    STQDv2i64	= 707,
    STQDv4f32	= 708,
    STQDv4i32	= 709,
    STQDv8i16	= 710,
    STQXf32	= 711,
    STQXf64	= 712,
    STQXr128	= 713,
    STQXr16	= 714,
    STQXr32	= 715,
    STQXr64	= 716,
    STQXr8	= 717,
    STQXv16i8	= 718,
    STQXv2f64	= 719,
    STQXv2i64	= 720,
    STQXv4f32	= 721,
    STQXv4i32	= 722,
    STQXv8i16	= 723,
    SUMB	= 724,
    XORBIr8	= 725,
    XORBIv16i8	= 726,
    XORHIr16	= 727,
    XORHIv8i16	= 728,
    XORIr32	= 729,
    XORIv4i32	= 730,
    XORfneg32	= 731,
    XORfneg64	= 732,
    XORfnegvec	= 733,
    XORr128	= 734,
    XORr16	= 735,
    XORr32	= 736,
    XORr64	= 737,
    XORr8	= 738,
    XORv16i8	= 739,
    XORv2i64	= 740,
    XORv4i32	= 741,
    XORv8i16	= 742,
    XSBHr16	= 743,
    XSBHr32	= 744,
    XSBHr64	= 745,
    XSBHr8	= 746,
    XSBHv16i8	= 747,
    XSHWr16	= 748,
    XSHWr32	= 749,
    XSHWr64	= 750,
    XSHWv4i32	= 751,
    XSWDr64	= 752,
    XSWDr64_inreg	= 753,
    XSWDv2i64	= 754,
    INSTRUCTION_LIST_END = 755
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

static const uint16_t ImplicitList1[] = { SPU::R1, 0 };
static const uint16_t ImplicitList2[] = { SPU::R0, 0 };
static const uint16_t ImplicitList3[] = { SPU::R0, SPU::R1, SPU::R2, SPU::R3, SPU::R4, SPU::R5, SPU::R6, SPU::R7, SPU::R8, SPU::R9, SPU::R10, SPU::R11, SPU::R12, SPU::R13, SPU::R14, SPU::R15, SPU::R16, SPU::R17, SPU::R18, SPU::R19, SPU::R20, SPU::R21, SPU::R22, SPU::R23, SPU::R24, SPU::R25, SPU::R26, SPU::R27, SPU::R28, SPU::R29, SPU::R30, SPU::R31, SPU::R32, SPU::R33, SPU::R34, SPU::R35, SPU::R36, SPU::R37, SPU::R38, SPU::R39, SPU::R40, SPU::R41, SPU::R42, SPU::R43, SPU::R44, SPU::R45, SPU::R46, SPU::R47, SPU::R48, SPU::R49, SPU::R50, SPU::R51, SPU::R52, SPU::R53, SPU::R54, SPU::R55, SPU::R56, SPU::R57, SPU::R58, SPU::R59, SPU::R60, SPU::R61, SPU::R62, SPU::R63, SPU::R64, SPU::R65, SPU::R66, SPU::R67, SPU::R68, SPU::R69, SPU::R70, SPU::R71, SPU::R72, SPU::R73, SPU::R74, SPU::R75, SPU::R76, SPU::R77, SPU::R78, SPU::R79, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo10[] = { { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo11[] = { { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo12[] = { { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { SPU::R8CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R8CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { SPU::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { SPU::R8CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R8CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R8CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R8CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R8CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { SPU::R64FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { SPU::R64FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64FPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo43[] = { { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { SPU::R64FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { SPU::R64FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { SPU::R64FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { SPU::R8CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { SPU::R64FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { SPU::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { SPU::R8CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { SPU::R64FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { SPU::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { SPU::R8CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { SPU::R64FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { SPU::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { SPU::R8CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R8CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { SPU::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { SPU::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { SPU::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { SPU::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { SPU::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { SPU::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R8CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R8CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { SPU::R64FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64FPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { SPU::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { SPU::R8CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R8CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R8CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R8CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::VECREGRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R8CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R16CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { SPU::R64CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SPU::R32CRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc SPUInsts[] = {
  { 0,	0,	0,	13,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #0 = PHI
  { 1,	0,	0,	13,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #1 = INLINEASM
  { 2,	1,	0,	13,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #2 = PROLOG_LABEL
  { 3,	1,	0,	13,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	13,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	13,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #5 = KILL
  { 6,	3,	1,	13,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo3 },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	13,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo4 },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	13,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	13,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo6 },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	13,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo3 },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	13,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #11 = DBG_VALUE
  { 12,	1,	1,	13,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	13,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo7 },  // Inst #13 = COPY
  { 14,	0,	0,	13,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #14 = BUNDLE
  { 15,	3,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #15 = ABSDB
  { 16,	4,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #16 = ADDXr32
  { 17,	4,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #17 = ADDXr64
  { 18,	4,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #18 = ADDXv2i64
  { 19,	4,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #19 = ADDXv4i32
  { 20,	1,	0,	13,	0,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo5 },  // Inst #20 = ADJCALLSTACKDOWN
  { 21,	1,	0,	13,	0,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo5 },  // Inst #21 = ADJCALLSTACKUP
  { 22,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #22 = AHIr16
  { 23,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #23 = AHIvec
  { 24,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #24 = AHr16
  { 25,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #25 = AHv8i16
  { 26,	3,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #26 = AIf32
  { 27,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #27 = AIr32
  { 28,	3,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #28 = AIv4f32
  { 29,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #29 = AIv4i32
  { 30,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo17 },  // Inst #30 = ANDBIr8
  { 31,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #31 = ANDBIv16i8
  { 32,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #32 = ANDCr128
  { 33,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #33 = ANDCr16
  { 34,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #34 = ANDCr32
  { 35,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #35 = ANDCr64
  { 36,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #36 = ANDCr8
  { 37,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #37 = ANDCv16i8
  { 38,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #38 = ANDCv16i8_conv
  { 39,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #39 = ANDCv2i64
  { 40,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #40 = ANDCv4i32
  { 41,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #41 = ANDCv8i16
  { 42,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #42 = ANDHIi8i16
  { 43,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #43 = ANDHIr16
  { 44,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #44 = ANDHIv8i16
  { 45,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #45 = ANDIi16i32
  { 46,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #46 = ANDIi8i32
  { 47,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #47 = ANDIr32
  { 48,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #48 = ANDIv4i32
  { 49,	3,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #49 = ANDfabs32
  { 50,	3,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #50 = ANDfabs64
  { 51,	3,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #51 = ANDfabsvec
  { 52,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #52 = ANDi16i32
  { 53,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #53 = ANDr128
  { 54,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #54 = ANDr16
  { 55,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #55 = ANDr32
  { 56,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #56 = ANDr64
  { 57,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #57 = ANDr8
  { 58,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #58 = ANDv16i8
  { 59,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #59 = ANDv2i64
  { 60,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #60 = ANDv4i32
  { 61,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #61 = ANDv8i16
  { 62,	3,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #62 = AVGB
  { 63,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #63 = Ar32
  { 64,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #64 = Av16i8
  { 65,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #65 = Av4i32
  { 66,	4,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #66 = BGXvec
  { 67,	3,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #67 = BGr32
  { 68,	3,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #68 = BGr64
  { 69,	3,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #69 = BGv2i64
  { 70,	3,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #70 = BGv4i32
  { 71,	1,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #71 = BI
  { 72,	1,	0,	1,	0,	0|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo28 },  // Inst #72 = BISL
  { 73,	1,	0,	1,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo29 },  // Inst #73 = BISLED_00
  { 74,	1,	0,	1,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo29 },  // Inst #74 = BISLED_0D
  { 75,	1,	0,	1,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo29 },  // Inst #75 = BISLED_E0
  { 76,	1,	0,	1,	0,	0|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo29 },  // Inst #76 = BISLED_ED
  { 77,	1,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #77 = BR
  { 78,	1,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #78 = BRA
  { 79,	1,	0,	1,	0,	0|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo5 },  // Inst #79 = BRASL
  { 80,	2,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo30 },  // Inst #80 = BRHNZr16
  { 81,	2,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #81 = BRHNZv8i16
  { 82,	2,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo30 },  // Inst #82 = BRHZr16
  { 83,	2,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #83 = BRHZv8i16
  { 84,	2,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #84 = BRNZr32
  { 85,	2,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #85 = BRNZv4i32
  { 86,	1,	0,	1,	0,	0|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, ImplicitList2, ImplicitList3, OperandInfo5 },  // Inst #86 = BRSL
  { 87,	2,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #87 = BRZr32
  { 88,	2,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #88 = BRZv4i32
  { 89,	3,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #89 = CBD
  { 90,	3,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #90 = CBX
  { 91,	3,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #91 = CDD
  { 92,	3,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #92 = CDDf64
  { 93,	3,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #93 = CDX
  { 94,	3,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #94 = CDXf64
  { 95,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo17 },  // Inst #95 = CEQBIr8
  { 96,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #96 = CEQBIv16i8
  { 97,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #97 = CEQBr8
  { 98,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #98 = CEQBv16i8
  { 99,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #99 = CEQHIr16
  { 100,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #100 = CEQHIv8i16
  { 101,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #101 = CEQHr16
  { 102,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #102 = CEQHv8i16
  { 103,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #103 = CEQIr32
  { 104,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #104 = CEQIv4i32
  { 105,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #105 = CEQr32
  { 106,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #106 = CEQv4i32
  { 107,	2,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo35 },  // Inst #107 = CFSif32
  { 108,	2,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #108 = CFSiv4f32
  { 109,	2,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo35 },  // Inst #109 = CFUif32
  { 110,	2,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #110 = CFUiv4f32
  { 111,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo17 },  // Inst #111 = CGTBIr8
  { 112,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #112 = CGTBIv16i8
  { 113,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #113 = CGTBr8
  { 114,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #114 = CGTBv16i8
  { 115,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #115 = CGTHIr16
  { 116,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #116 = CGTHIv8i16
  { 117,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #117 = CGTHr16
  { 118,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #118 = CGTHv8i16
  { 119,	3,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo37 },  // Inst #119 = CGTIf32
  { 120,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #120 = CGTIr32
  { 121,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #121 = CGTIv4f32
  { 122,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #122 = CGTIv4i32
  { 123,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #123 = CGTr32
  { 124,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #124 = CGTv4i32
  { 125,	3,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #125 = CGr32
  { 126,	3,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #126 = CGr64
  { 127,	3,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #127 = CGv2i64
  { 128,	3,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #128 = CGv4i32
  { 129,	3,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #129 = CHD
  { 130,	3,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #130 = CHX
  { 131,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo17 },  // Inst #131 = CLGTBIr8
  { 132,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #132 = CLGTBIv16i8
  { 133,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #133 = CLGTBr8
  { 134,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #134 = CLGTBv16i8
  { 135,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #135 = CLGTHIr16
  { 136,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #136 = CLGTHIv8i16
  { 137,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #137 = CLGTHr16
  { 138,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #138 = CLGTHv8i16
  { 139,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #139 = CLGTIr32
  { 140,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #140 = CLGTIv4i32
  { 141,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #141 = CLGTr32
  { 142,	3,	1,	2,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #142 = CLGTv4i32
  { 143,	2,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo38 },  // Inst #143 = CLZr32
  { 144,	2,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #144 = CLZv4i32
  { 145,	2,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #145 = CNTBv16i8
  { 146,	2,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #146 = CNTBv4i32
  { 147,	2,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #147 = CNTBv8i16
  { 148,	2,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo39 },  // Inst #148 = CSiFf32
  { 149,	2,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #149 = CSiFv4f32
  { 150,	2,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo39 },  // Inst #150 = CUiFf32
  { 151,	2,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #151 = CUiFv4f32
  { 152,	3,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #152 = CWD
  { 153,	3,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #153 = CWDf32
  { 154,	3,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #154 = CWX
  { 155,	3,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #155 = CWXf32
  { 156,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #156 = CellSDKa
  { 157,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #157 = CellSDKaddx
  { 158,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #158 = CellSDKah
  { 159,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo40 },  // Inst #159 = CellSDKahi
  { 160,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo40 },  // Inst #160 = CellSDKai
  { 161,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #161 = CellSDKand
  { 162,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #162 = CellSDKandbi
  { 163,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #163 = CellSDKandc
  { 164,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #164 = CellSDKandhi
  { 165,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #165 = CellSDKandi
  { 166,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #166 = CellSDKbg
  { 167,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #167 = CellSDKbgx
  { 168,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #168 = CellSDKceq
  { 169,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #169 = CellSDKceqb
  { 170,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #170 = CellSDKceqbi
  { 171,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #171 = CellSDKceqh
  { 172,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #172 = CellSDKceqhi
  { 173,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #173 = CellSDKceqi
  { 174,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #174 = CellSDKcg
  { 175,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #175 = CellSDKcgt
  { 176,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #176 = CellSDKcgtb
  { 177,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #177 = CellSDKcgtbi
  { 178,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #178 = CellSDKcgth
  { 179,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #179 = CellSDKcgthi
  { 180,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #180 = CellSDKcgti
  { 181,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #181 = CellSDKcgx
  { 182,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #182 = CellSDKclgt
  { 183,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #183 = CellSDKclgtb
  { 184,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #184 = CellSDKclgtbi
  { 185,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #185 = CellSDKclgth
  { 186,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #186 = CellSDKclgthi
  { 187,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #187 = CellSDKclgti
  { 188,	3,	1,	4,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #188 = CellSDKdfa
  { 189,	3,	1,	4,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #189 = CellSDKdfm
  { 190,	3,	1,	4,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #190 = CellSDKdfma
  { 191,	3,	1,	4,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #191 = CellSDKdfms
  { 192,	3,	1,	4,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #192 = CellSDKdfnma
  { 193,	3,	1,	4,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #193 = CellSDKdfnms
  { 194,	3,	1,	4,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #194 = CellSDKdfs
  { 195,	3,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #195 = CellSDKfa
  { 196,	3,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #196 = CellSDKfceq
  { 197,	3,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #197 = CellSDKfcgt
  { 198,	3,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #198 = CellSDKfcmeq
  { 199,	3,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #199 = CellSDKfcmgt
  { 200,	3,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #200 = CellSDKfm
  { 201,	4,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #201 = CellSDKfma
  { 202,	4,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #202 = CellSDKfms
  { 203,	4,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #203 = CellSDKfnms
  { 204,	3,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #204 = CellSDKfs
  { 205,	3,	1,	9,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #205 = CellSDKmpy
  { 206,	4,	1,	9,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #206 = CellSDKmpya
  { 207,	3,	1,	9,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #207 = CellSDKmpyh
  { 208,	3,	1,	9,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #208 = CellSDKmpyhh
  { 209,	3,	1,	9,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #209 = CellSDKmpyhha
  { 210,	3,	1,	9,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #210 = CellSDKmpyhhau
  { 211,	3,	1,	9,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #211 = CellSDKmpyhhu
  { 212,	3,	1,	9,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #212 = CellSDKmpyi
  { 213,	3,	1,	9,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #213 = CellSDKmpys
  { 214,	3,	1,	9,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #214 = CellSDKmpyu
  { 215,	3,	1,	9,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #215 = CellSDKmpyui
  { 216,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #216 = CellSDKnand
  { 217,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #217 = CellSDKnor
  { 218,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #218 = CellSDKor
  { 219,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #219 = CellSDKorbi
  { 220,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #220 = CellSDKorc
  { 221,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #221 = CellSDKorhi
  { 222,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #222 = CellSDKori
  { 223,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #223 = CellSDKsf
  { 224,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #224 = CellSDKsfh
  { 225,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo40 },  // Inst #225 = CellSDKsfhi
  { 226,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo40 },  // Inst #226 = CellSDKsfi
  { 227,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #227 = CellSDKsfx
  { 228,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #228 = CellSDKxor
  { 229,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #229 = CellSDKxorbi
  { 230,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #230 = CellSDKxorhi
  { 231,	3,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #231 = CellSDKxori
  { 232,	4,	1,	4,	0,	0, 0x0ULL, NULL, NULL, OperandInfo42 },  // Inst #232 = DFNMSf64
  { 233,	4,	1,	4,	0,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #233 = DFNMSv2f64
  { 234,	0,	0,	5,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #234 = ENOP
  { 235,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #235 = EQVr128
  { 236,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #236 = EQVr128_1
  { 237,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #237 = EQVr128_2
  { 238,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #238 = EQVr128_3
  { 239,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #239 = EQVr16
  { 240,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #240 = EQVr16_1
  { 241,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #241 = EQVr16_2
  { 242,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #242 = EQVr16_3
  { 243,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #243 = EQVr32
  { 244,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #244 = EQVr32_1
  { 245,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #245 = EQVr32_2
  { 246,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #246 = EQVr32_3
  { 247,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #247 = EQVr64
  { 248,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #248 = EQVr64_1
  { 249,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #249 = EQVr64_2
  { 250,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #250 = EQVr64_3
  { 251,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #251 = EQVr8
  { 252,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #252 = EQVr8_1
  { 253,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #253 = EQVr8_2
  { 254,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #254 = EQVr8_3
  { 255,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #255 = EQVv16i8
  { 256,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #256 = EQVv16i8_1
  { 257,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #257 = EQVv16i8_2
  { 258,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #258 = EQVv16i8_3
  { 259,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #259 = EQVv2i64
  { 260,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #260 = EQVv2i64_1
  { 261,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #261 = EQVv2i64_2
  { 262,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #262 = EQVv2i64_3
  { 263,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #263 = EQVv4i32
  { 264,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #264 = EQVv4i32_1
  { 265,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #265 = EQVv4i32_2
  { 266,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #266 = EQVv4i32_3
  { 267,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #267 = EQVv8i16
  { 268,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #268 = EQVv8i16_1
  { 269,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #269 = EQVv8i16_2
  { 270,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #270 = EQVv8i16_3
  { 271,	3,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo43 },  // Inst #271 = FAf32
  { 272,	3,	1,	4,	0,	0, 0x0ULL, NULL, NULL, OperandInfo44 },  // Inst #272 = FAf64
  { 273,	3,	1,	4,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #273 = FAv2f64
  { 274,	3,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #274 = FAv4f32
  { 275,	3,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #275 = FCEQf32
  { 276,	3,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #276 = FCGTf32
  { 277,	3,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #277 = FCMEQf32
  { 278,	3,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo45 },  // Inst #278 = FCMGTf32
  { 279,	2,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo46 },  // Inst #279 = FESDf32
  { 280,	2,	1,	16,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #280 = FESDvec
  { 281,	3,	1,	16,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo43 },  // Inst #281 = FIf32
  { 282,	3,	1,	16,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #282 = FIv4f32
  { 283,	4,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo47 },  // Inst #283 = FMAf32
  { 284,	4,	1,	4,	0,	0, 0x0ULL, NULL, NULL, OperandInfo42 },  // Inst #284 = FMAf64
  { 285,	4,	1,	4,	0,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #285 = FMAv2f64
  { 286,	4,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #286 = FMAv4f32
  { 287,	4,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo47 },  // Inst #287 = FMSf32
  { 288,	4,	1,	4,	0,	0, 0x0ULL, NULL, NULL, OperandInfo42 },  // Inst #288 = FMSf64
  { 289,	4,	1,	4,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #289 = FMSv2f64
  { 290,	4,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #290 = FMSv4f32
  { 291,	3,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo43 },  // Inst #291 = FMf32
  { 292,	3,	1,	4,	0,	0, 0x0ULL, NULL, NULL, OperandInfo44 },  // Inst #292 = FMf64
  { 293,	3,	1,	4,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #293 = FMv2f64
  { 294,	3,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #294 = FMv4f32
  { 295,	4,	1,	4,	0,	0, 0x0ULL, NULL, NULL, OperandInfo42 },  // Inst #295 = FNMAf64
  { 296,	4,	1,	4,	0,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #296 = FNMAv2f64
  { 297,	4,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo47 },  // Inst #297 = FNMSf32
  { 298,	4,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #298 = FNMSv4f32
  { 299,	2,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo48 },  // Inst #299 = FRDSf64
  { 300,	2,	1,	16,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo49 },  // Inst #300 = FRESTf32
  { 301,	2,	1,	16,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #301 = FRESTv4f32
  { 302,	1,	1,	16,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo50 },  // Inst #302 = FSCRRf32
  { 303,	2,	1,	16,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo49 },  // Inst #303 = FSCRWf32
  { 304,	2,	1,	17,	0,	0, 0x0ULL, NULL, NULL, OperandInfo51 },  // Inst #304 = FSM64r16
  { 305,	2,	1,	17,	0,	0, 0x0ULL, NULL, NULL, OperandInfo52 },  // Inst #305 = FSM64r32
  { 306,	2,	1,	17,	0,	0, 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #306 = FSMBIv16i8
  { 307,	2,	1,	17,	0,	0, 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #307 = FSMBIv2i64
  { 308,	2,	1,	17,	0,	0, 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #308 = FSMBIv4i32
  { 309,	2,	1,	17,	0,	0, 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #309 = FSMBIv8i16
  { 310,	2,	1,	17,	0,	0, 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #310 = FSMBv16i8
  { 311,	2,	1,	17,	0,	0, 0x0ULL, NULL, NULL, OperandInfo51 },  // Inst #311 = FSMBv16i8_r16
  { 312,	2,	1,	17,	0,	0, 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #312 = FSMHv8i16
  { 313,	2,	1,	17,	0,	0, 0x0ULL, NULL, NULL, OperandInfo51 },  // Inst #313 = FSMHv8i16_r16
  { 314,	2,	1,	17,	0,	0, 0x0ULL, NULL, NULL, OperandInfo51 },  // Inst #314 = FSMr16
  { 315,	2,	1,	17,	0,	0, 0x0ULL, NULL, NULL, OperandInfo52 },  // Inst #315 = FSMr32
  { 316,	2,	1,	17,	0,	0, 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #316 = FSMv4i32
  { 317,	3,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo43 },  // Inst #317 = FSf32
  { 318,	3,	1,	4,	0,	0, 0x0ULL, NULL, NULL, OperandInfo44 },  // Inst #318 = FSf64
  { 319,	3,	1,	4,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #319 = FSv2f64
  { 320,	3,	1,	16,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #320 = FSv4f32
  { 321,	2,	1,	7,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #321 = GBBv16i8
  { 322,	2,	1,	7,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo53 },  // Inst #322 = GBBv16i8_r16
  { 323,	2,	1,	7,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo54 },  // Inst #323 = GBBv16i8_r32
  { 324,	2,	1,	7,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #324 = GBHv8i16
  { 325,	2,	1,	7,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo53 },  // Inst #325 = GBHv8i16_r16
  { 326,	2,	1,	7,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo54 },  // Inst #326 = GBHv8i16_r32
  { 327,	2,	1,	7,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #327 = GBv4i32
  { 328,	2,	1,	7,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo53 },  // Inst #328 = GBv4i32_r16
  { 329,	2,	1,	7,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo54 },  // Inst #329 = GBv4i32_r32
  { 330,	2,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo7 },  // Inst #330 = HBRA
  { 331,	1,	0,	13,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo5 },  // Inst #331 = HBR_LABEL
  { 332,	2,	0,	1,	0,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #332 = HEQIr32
  { 333,	2,	0,	1,	0,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo38 },  // Inst #333 = HEQr32
  { 334,	2,	0,	1,	0,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #334 = HGTIr32
  { 335,	2,	0,	1,	0,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo38 },  // Inst #335 = HGTr32
  { 336,	2,	0,	1,	0,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #336 = HLGTIr32
  { 337,	2,	0,	1,	0,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo38 },  // Inst #337 = HLGTr32
  { 338,	2,	1,	11,	0,	0, 0x0ULL, NULL, NULL, OperandInfo55 },  // Inst #338 = ILAf32
  { 339,	2,	1,	11,	0,	0, 0x0ULL, NULL, NULL, OperandInfo56 },  // Inst #339 = ILAf64
  { 340,	2,	1,	11,	0,	0, 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #340 = ILAhi
  { 341,	2,	1,	11,	0,	0, 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #341 = ILAlo
  { 342,	2,	1,	11,	0,	0, 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #342 = ILAlsa
  { 343,	2,	1,	11,	0,	0, 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #343 = ILAr32
  { 344,	2,	1,	11,	0,	0, 0x0ULL, NULL, NULL, OperandInfo57 },  // Inst #344 = ILAr64
  { 345,	2,	1,	11,	0,	0, 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #345 = ILAv2i64
  { 346,	2,	1,	11,	0,	0, 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #346 = ILAv4i32
  { 347,	2,	1,	8,	0,	0, 0x0ULL, NULL, NULL, OperandInfo55 },  // Inst #347 = ILHUf32
  { 348,	2,	1,	8,	0,	0, 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #348 = ILHUhi
  { 349,	2,	1,	8,	0,	0, 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #349 = ILHUr32
  { 350,	2,	1,	8,	0,	0, 0x0ULL, NULL, NULL, OperandInfo57 },  // Inst #350 = ILHUr64
  { 351,	2,	1,	8,	0,	0, 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #351 = ILHUv2i64
  { 352,	2,	1,	8,	0,	0, 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #352 = ILHUv4i32
  { 353,	2,	1,	8,	0,	0, 0x0ULL, NULL, NULL, OperandInfo30 },  // Inst #353 = ILHr16
  { 354,	2,	1,	8,	0,	0, 0x0ULL, NULL, NULL, OperandInfo58 },  // Inst #354 = ILHr8
  { 355,	2,	1,	8,	0,	0, 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #355 = ILHv8i16
  { 356,	2,	1,	8,	0,	0, 0x0ULL, NULL, NULL, OperandInfo55 },  // Inst #356 = ILf32
  { 357,	2,	1,	8,	0,	0, 0x0ULL, NULL, NULL, OperandInfo56 },  // Inst #357 = ILf64
  { 358,	2,	1,	8,	0,	0, 0x0ULL, NULL, NULL, OperandInfo32 },  // Inst #358 = ILr32
  { 359,	2,	1,	8,	0,	0, 0x0ULL, NULL, NULL, OperandInfo57 },  // Inst #359 = ILr64
  { 360,	2,	1,	8,	0,	0, 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #360 = ILv2i64
  { 361,	2,	1,	8,	0,	0, 0x0ULL, NULL, NULL, OperandInfo31 },  // Inst #361 = ILv4i32
  { 362,	3,	1,	8,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo59 },  // Inst #362 = IOHLf32
  { 363,	3,	1,	8,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo60 },  // Inst #363 = IOHLlo
  { 364,	3,	1,	8,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo61 },  // Inst #364 = IOHLr32
  { 365,	3,	1,	8,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo62 },  // Inst #365 = IOHLv2i64
  { 366,	3,	1,	8,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo62 },  // Inst #366 = IOHLv4i32
  { 367,	0,	0,	11,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #367 = LNOP
  { 368,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo63 },  // Inst #368 = LQAf32
  { 369,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #369 = LQAf64
  { 370,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo65 },  // Inst #370 = LQAr128
  { 371,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo66 },  // Inst #371 = LQAr16
  { 372,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo67 },  // Inst #372 = LQAr32
  { 373,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo68 },  // Inst #373 = LQAr64
  { 374,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo69 },  // Inst #374 = LQAr8
  { 375,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #375 = LQAv16i8
  { 376,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #376 = LQAv2f64
  { 377,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #377 = LQAv2i64
  { 378,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #378 = LQAv4f32
  { 379,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #379 = LQAv4i32
  { 380,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #380 = LQAv8i16
  { 381,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo63 },  // Inst #381 = LQDf32
  { 382,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #382 = LQDf64
  { 383,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo65 },  // Inst #383 = LQDr128
  { 384,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo66 },  // Inst #384 = LQDr16
  { 385,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo67 },  // Inst #385 = LQDr32
  { 386,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo68 },  // Inst #386 = LQDr64
  { 387,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo69 },  // Inst #387 = LQDr8
  { 388,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #388 = LQDv16i8
  { 389,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #389 = LQDv2f64
  { 390,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #390 = LQDv2i64
  { 391,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #391 = LQDv4f32
  { 392,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #392 = LQDv4i32
  { 393,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #393 = LQDv8i16
  { 394,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo70 },  // Inst #394 = LQXf32
  { 395,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo71 },  // Inst #395 = LQXf64
  { 396,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo72 },  // Inst #396 = LQXr128
  { 397,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo73 },  // Inst #397 = LQXr16
  { 398,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo74 },  // Inst #398 = LQXr32
  { 399,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo75 },  // Inst #399 = LQXr64
  { 400,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo76 },  // Inst #400 = LQXr8
  { 401,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #401 = LQXv16i8
  { 402,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #402 = LQXv2f64
  { 403,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #403 = LQXv2i64
  { 404,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #404 = LQXv4f32
  { 405,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #405 = LQXv4i32
  { 406,	3,	1,	12,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #406 = LQXv8i16
  { 407,	2,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo49 },  // Inst #407 = LRf32
  { 408,	2,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo77 },  // Inst #408 = LRf64
  { 409,	2,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo78 },  // Inst #409 = LRr128
  { 410,	2,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo79 },  // Inst #410 = LRr16
  { 411,	2,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo38 },  // Inst #411 = LRr32
  { 412,	2,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo80 },  // Inst #412 = LRr64
  { 413,	2,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo81 },  // Inst #413 = LRr8
  { 414,	2,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #414 = LRv16i8
  { 415,	2,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #415 = LRv2f64
  { 416,	2,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #416 = LRv2i64
  { 417,	2,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #417 = LRv4f32
  { 418,	2,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #418 = LRv4i32
  { 419,	2,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #419 = LRv8i16
  { 420,	4,	1,	9,	0,	0, 0x0ULL, NULL, NULL, OperandInfo82 },  // Inst #420 = MPYAr32
  { 421,	4,	1,	9,	0,	0, 0x0ULL, NULL, NULL, OperandInfo82 },  // Inst #421 = MPYAr32_sext
  { 422,	4,	1,	9,	0,	0, 0x0ULL, NULL, NULL, OperandInfo83 },  // Inst #422 = MPYAr32_sextinreg
  { 423,	4,	1,	9,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #423 = MPYAv4i32
  { 424,	3,	1,	9,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #424 = MPYHHAUr32
  { 425,	3,	1,	9,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #425 = MPYHHAUvec
  { 426,	3,	1,	9,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #426 = MPYHHAr32
  { 427,	3,	1,	9,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #427 = MPYHHAvec
  { 428,	3,	1,	9,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #428 = MPYHHUr32
  { 429,	3,	1,	9,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #429 = MPYHHUv4i32
  { 430,	3,	1,	9,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #430 = MPYHHr32
  { 431,	3,	1,	9,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #431 = MPYHHv8i16
  { 432,	3,	1,	9,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #432 = MPYHr32
  { 433,	3,	1,	9,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #433 = MPYHv4i32
  { 434,	3,	1,	9,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #434 = MPYIr16
  { 435,	3,	1,	9,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #435 = MPYIvec
  { 436,	3,	1,	9,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo84 },  // Inst #436 = MPYSr16
  { 437,	3,	1,	9,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #437 = MPYSv4i32
  { 438,	3,	1,	9,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #438 = MPYUIr16
  { 439,	3,	1,	9,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #439 = MPYUIvec
  { 440,	3,	1,	9,	0,	0, 0x0ULL, NULL, NULL, OperandInfo84 },  // Inst #440 = MPYUr16
  { 441,	3,	1,	9,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #441 = MPYUr32
  { 442,	3,	1,	9,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #442 = MPYUv4i32
  { 443,	3,	1,	9,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #443 = MPYr16
  { 444,	3,	1,	9,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #444 = MPYv8i16
  { 445,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #445 = NANDr128
  { 446,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #446 = NANDr16
  { 447,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #447 = NANDr32
  { 448,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #448 = NANDr64
  { 449,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #449 = NANDr8
  { 450,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #450 = NANDv16i8
  { 451,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #451 = NANDv2i64
  { 452,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #452 = NANDv4i32
  { 453,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #453 = NANDv8i16
  { 454,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #454 = NORr128
  { 455,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #455 = NORr16
  { 456,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #456 = NORr32
  { 457,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #457 = NORr64
  { 458,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #458 = NORr8
  { 459,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #459 = NORv16i8
  { 460,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #460 = NORv2i64
  { 461,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #461 = NORv4i32
  { 462,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #462 = NORv8i16
  { 463,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo17 },  // Inst #463 = ORBIr8
  { 464,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #464 = ORBIv16i8
  { 465,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #465 = ORCr128
  { 466,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #466 = ORCr16
  { 467,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #467 = ORCr32
  { 468,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #468 = ORCr64
  { 469,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #469 = ORCr8
  { 470,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #470 = ORCv16i8
  { 471,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #471 = ORCv2i64
  { 472,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #472 = ORCv4i32
  { 473,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #473 = ORCv8i16
  { 474,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo22 },  // Inst #474 = ORHIi8i16
  { 475,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #475 = ORHIr16
  { 476,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #476 = ORHIv8i16
  { 477,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #477 = ORIi16i32
  { 478,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #478 = ORIi8i32
  { 479,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #479 = ORIr32
  { 480,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #480 = ORIv4i32
  { 481,	3,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #481 = ORXv4i32
  { 482,	3,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo43 },  // Inst #482 = ORf32
  { 483,	3,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo44 },  // Inst #483 = ORf64
  { 484,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #484 = ORr128
  { 485,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #485 = ORr16
  { 486,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #486 = ORr32
  { 487,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #487 = ORr64
  { 488,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #488 = ORr8
  { 489,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #489 = ORv16i8
  { 490,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #490 = ORv2f64
  { 491,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #491 = ORv2i64
  { 492,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #492 = ORv4f32
  { 493,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #493 = ORv4i32
  { 494,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #494 = ORv8i16
  { 495,	0,	0,	1,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, 0 },  // Inst #495 = RET
  { 496,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #496 = ROTHIr16
  { 497,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #497 = ROTHIr16_r32
  { 498,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #498 = ROTHIv8i16
  { 499,	3,	1,	15,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #499 = ROTHMIr16
  { 500,	3,	1,	15,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #500 = ROTHMIv8i16
  { 501,	3,	1,	15,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo85 },  // Inst #501 = ROTHMr16
  { 502,	3,	1,	15,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #502 = ROTHMv8i16
  { 503,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #503 = ROTHr16
  { 504,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo85 },  // Inst #504 = ROTHr16_r32
  { 505,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #505 = ROTHv8i16
  { 506,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #506 = ROTIr32
  { 507,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #507 = ROTIr32_i16
  { 508,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #508 = ROTIr32_i8
  { 509,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #509 = ROTIv4i32
  { 510,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #510 = ROTIv4i32_i16
  { 511,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #511 = ROTIv4i32_i8
  { 512,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #512 = ROTMAHIr16
  { 513,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #513 = ROTMAHIv8i16
  { 514,	3,	1,	15,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo85 },  // Inst #514 = ROTMAHr16
  { 515,	3,	1,	15,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #515 = ROTMAHv8i16
  { 516,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #516 = ROTMAIr32_i32
  { 517,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo86 },  // Inst #517 = ROTMAIr64_i32
  { 518,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #518 = ROTMAIv2i64_i32
  { 519,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #519 = ROTMAIv4i32_i32
  { 520,	3,	1,	15,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #520 = ROTMAr32
  { 521,	3,	1,	15,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #521 = ROTMAv4i32
  { 522,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #522 = ROTMIr32
  { 523,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #523 = ROTMIv4i32
  { 524,	3,	1,	15,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #524 = ROTMr32
  { 525,	3,	1,	15,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #525 = ROTMv4i32
  { 526,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo87 },  // Inst #526 = ROTQBIIr128
  { 527,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo86 },  // Inst #527 = ROTQBIIr64
  { 528,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #528 = ROTQBIIv16i8
  { 529,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #529 = ROTQBIIv2i64
  { 530,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #530 = ROTQBIIv4i32
  { 531,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #531 = ROTQBIIv8i16
  { 532,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo88 },  // Inst #532 = ROTQBIr128
  { 533,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo89 },  // Inst #533 = ROTQBIr64
  { 534,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #534 = ROTQBIv16i8
  { 535,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #535 = ROTQBIv2i64
  { 536,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #536 = ROTQBIv4i32
  { 537,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #537 = ROTQBIv8i16
  { 538,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #538 = ROTQBYBIv16i8_r32
  { 539,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #539 = ROTQBYBIv2i64_r32
  { 540,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #540 = ROTQBYBIv4i32_r32
  { 541,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #541 = ROTQBYBIv8i16_r32
  { 542,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo87 },  // Inst #542 = ROTQBYIi128
  { 543,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #543 = ROTQBYIv16i8
  { 544,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #544 = ROTQBYIv2i64
  { 545,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #545 = ROTQBYIv4f32
  { 546,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #546 = ROTQBYIv4i32
  { 547,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #547 = ROTQBYIv8i16
  { 548,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #548 = ROTQBYIvfi64
  { 549,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo88 },  // Inst #549 = ROTQBYi128
  { 550,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #550 = ROTQBYv16i8
  { 551,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #551 = ROTQBYv2f64
  { 552,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #552 = ROTQBYv2i64
  { 553,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #553 = ROTQBYv4f32
  { 554,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #554 = ROTQBYv4i32
  { 555,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #555 = ROTQBYv8i16
  { 556,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo87 },  // Inst #556 = ROTQMBIIr128
  { 557,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo86 },  // Inst #557 = ROTQMBIIr64
  { 558,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #558 = ROTQMBIIv16i8
  { 559,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #559 = ROTQMBIIv2i64
  { 560,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #560 = ROTQMBIIv4i32
  { 561,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #561 = ROTQMBIIv8i16
  { 562,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo88 },  // Inst #562 = ROTQMBIr128
  { 563,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo89 },  // Inst #563 = ROTQMBIr64
  { 564,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #564 = ROTQMBIv16i8
  { 565,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #565 = ROTQMBIv2i64
  { 566,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #566 = ROTQMBIv4i32
  { 567,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #567 = ROTQMBIv8i16
  { 568,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo88 },  // Inst #568 = ROTQMBYBIr128
  { 569,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #569 = ROTQMBYBIv16i8
  { 570,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #570 = ROTQMBYBIv2i64
  { 571,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #571 = ROTQMBYBIv4i32
  { 572,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #572 = ROTQMBYBIv8i16
  { 573,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo87 },  // Inst #573 = ROTQMBYIr128
  { 574,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo91 },  // Inst #574 = ROTQMBYIr128_zext_r16
  { 575,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo92 },  // Inst #575 = ROTQMBYIr128_zext_r32
  { 576,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo93 },  // Inst #576 = ROTQMBYIr128_zext_r64
  { 577,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo94 },  // Inst #577 = ROTQMBYIr128_zext_r8
  { 578,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo86 },  // Inst #578 = ROTQMBYIr64
  { 579,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #579 = ROTQMBYIv16i8
  { 580,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #580 = ROTQMBYIv2i64
  { 581,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #581 = ROTQMBYIv4i32
  { 582,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #582 = ROTQMBYIv8i16
  { 583,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo88 },  // Inst #583 = ROTQMBYr128
  { 584,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo89 },  // Inst #584 = ROTQMBYr64
  { 585,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #585 = ROTQMBYv16i8
  { 586,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #586 = ROTQMBYv2i64
  { 587,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #587 = ROTQMBYv4i32
  { 588,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #588 = ROTQMBYv8i16
  { 589,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #589 = ROTr32
  { 590,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo95 },  // Inst #590 = ROTr32_r16_anyext
  { 591,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo96 },  // Inst #591 = ROTr32_r8_anyext
  { 592,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #592 = ROTv4i32
  { 593,	4,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo97 },  // Inst #593 = SELBf32_cond
  { 594,	4,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo98 },  // Inst #594 = SELBf64_cond
  { 595,	4,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo99 },  // Inst #595 = SELBr128
  { 596,	4,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo100 },  // Inst #596 = SELBr16
  { 597,	4,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo100 },  // Inst #597 = SELBr16_cond
  { 598,	4,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo83 },  // Inst #598 = SELBr32
  { 599,	4,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo83 },  // Inst #599 = SELBr32_cond
  { 600,	4,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo101 },  // Inst #600 = SELBr64
  { 601,	4,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo102 },  // Inst #601 = SELBr64_cond
  { 602,	4,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo103 },  // Inst #602 = SELBr8
  { 603,	4,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo103 },  // Inst #603 = SELBr8_cond
  { 604,	4,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #604 = SELBv16i8
  { 605,	4,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo104 },  // Inst #605 = SELBv16i8_cond
  { 606,	4,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo104 },  // Inst #606 = SELBv16i8_vcond
  { 607,	4,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #607 = SELBv2i64
  { 608,	4,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo104 },  // Inst #608 = SELBv2i64_cond
  { 609,	4,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo104 },  // Inst #609 = SELBv2i64_vcond
  { 610,	4,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #610 = SELBv4f32_cond
  { 611,	4,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #611 = SELBv4i32
  { 612,	4,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo104 },  // Inst #612 = SELBv4i32_cond
  { 613,	4,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo104 },  // Inst #613 = SELBv4i32_vcond
  { 614,	4,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #614 = SELBv8i16
  { 615,	4,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo104 },  // Inst #615 = SELBv8i16_cond
  { 616,	4,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo104 },  // Inst #616 = SELBv8i16_vcond
  { 617,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #617 = SFHIr16
  { 618,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #618 = SFHIvec
  { 619,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #619 = SFHr16
  { 620,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #620 = SFHvec
  { 621,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #621 = SFIr32
  { 622,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #622 = SFIvec
  { 623,	4,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #623 = SFXr32
  { 624,	4,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #624 = SFXr64
  { 625,	4,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #625 = SFXv2i64
  { 626,	4,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #626 = SFXv4i32
  { 627,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #627 = SFr32
  { 628,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #628 = SFvec
  { 629,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #629 = SHLHIr16
  { 630,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #630 = SHLHIv8i16
  { 631,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #631 = SHLHr16
  { 632,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo85 },  // Inst #632 = SHLHr16_r32
  { 633,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #633 = SHLHv8i16
  { 634,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #634 = SHLIr32
  { 635,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #635 = SHLIv4i32
  { 636,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #636 = SHLQBIIv16i8
  { 637,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #637 = SHLQBIIv2f64
  { 638,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #638 = SHLQBIIv2i64
  { 639,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #639 = SHLQBIIv4f32
  { 640,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #640 = SHLQBIIv4i32
  { 641,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #641 = SHLQBIIv8i16
  { 642,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo88 },  // Inst #642 = SHLQBIr128
  { 643,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #643 = SHLQBIv16i8
  { 644,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #644 = SHLQBIv2f64
  { 645,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #645 = SHLQBIv2i64
  { 646,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #646 = SHLQBIv4f32
  { 647,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #647 = SHLQBIv4i32
  { 648,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #648 = SHLQBIv8i16
  { 649,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo88 },  // Inst #649 = SHLQBYBIr128
  { 650,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #650 = SHLQBYBIv16i8
  { 651,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #651 = SHLQBYBIv2f64
  { 652,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #652 = SHLQBYBIv2i64
  { 653,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #653 = SHLQBYBIv4f32
  { 654,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #654 = SHLQBYBIv4i32
  { 655,	3,	1,	14,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #655 = SHLQBYBIv8i16
  { 656,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo87 },  // Inst #656 = SHLQBYIr128
  { 657,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #657 = SHLQBYIv16i8
  { 658,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #658 = SHLQBYIv2f64
  { 659,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #659 = SHLQBYIv2i64
  { 660,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #660 = SHLQBYIv4f32
  { 661,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #661 = SHLQBYIv4i32
  { 662,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #662 = SHLQBYIv8i16
  { 663,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo88 },  // Inst #663 = SHLQBYr128
  { 664,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #664 = SHLQBYv16i8
  { 665,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #665 = SHLQBYv2f64
  { 666,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #666 = SHLQBYv2i64
  { 667,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #667 = SHLQBYv4f32
  { 668,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #668 = SHLQBYv4i32
  { 669,	3,	1,	14,	0,	0, 0x0ULL, NULL, NULL, OperandInfo90 },  // Inst #669 = SHLQBYv8i16
  { 670,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #670 = SHLr32
  { 671,	3,	1,	15,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #671 = SHLv4i32
  { 672,	4,	1,	18,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo105 },  // Inst #672 = SHUFBgprc
  { 673,	4,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #673 = SHUFBv16i8
  { 674,	4,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #674 = SHUFBv16i8_m32
  { 675,	4,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #675 = SHUFBv2f64
  { 676,	4,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #676 = SHUFBv2f64_m32
  { 677,	4,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #677 = SHUFBv2i64
  { 678,	4,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #678 = SHUFBv2i64_m32
  { 679,	4,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #679 = SHUFBv4f32
  { 680,	4,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #680 = SHUFBv4f32_m32
  { 681,	4,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #681 = SHUFBv4i32
  { 682,	4,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #682 = SHUFBv4i32_m32
  { 683,	4,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #683 = SHUFBv8i16
  { 684,	4,	1,	18,	0,	0, 0x0ULL, NULL, NULL, OperandInfo41 },  // Inst #684 = SHUFBv8i16_m32
  { 685,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo63 },  // Inst #685 = STQAf32
  { 686,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #686 = STQAf64
  { 687,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo65 },  // Inst #687 = STQAr128
  { 688,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo66 },  // Inst #688 = STQAr16
  { 689,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo67 },  // Inst #689 = STQAr32
  { 690,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo68 },  // Inst #690 = STQAr64
  { 691,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo69 },  // Inst #691 = STQAr8
  { 692,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #692 = STQAv16i8
  { 693,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #693 = STQAv2f64
  { 694,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #694 = STQAv2i64
  { 695,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #695 = STQAv4f32
  { 696,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #696 = STQAv4i32
  { 697,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #697 = STQAv8i16
  { 698,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo63 },  // Inst #698 = STQDf32
  { 699,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo64 },  // Inst #699 = STQDf64
  { 700,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo65 },  // Inst #700 = STQDr128
  { 701,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo66 },  // Inst #701 = STQDr16
  { 702,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo67 },  // Inst #702 = STQDr32
  { 703,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo68 },  // Inst #703 = STQDr64
  { 704,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo69 },  // Inst #704 = STQDr8
  { 705,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #705 = STQDv16i8
  { 706,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #706 = STQDv2f64
  { 707,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #707 = STQDv2i64
  { 708,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #708 = STQDv4f32
  { 709,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #709 = STQDv4i32
  { 710,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo33 },  // Inst #710 = STQDv8i16
  { 711,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo70 },  // Inst #711 = STQXf32
  { 712,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo71 },  // Inst #712 = STQXf64
  { 713,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo72 },  // Inst #713 = STQXr128
  { 714,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo73 },  // Inst #714 = STQXr16
  { 715,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo74 },  // Inst #715 = STQXr32
  { 716,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo75 },  // Inst #716 = STQXr64
  { 717,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo76 },  // Inst #717 = STQXr8
  { 718,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #718 = STQXv16i8
  { 719,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #719 = STQXv2f64
  { 720,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #720 = STQXv2i64
  { 721,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #721 = STQXv4f32
  { 722,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #722 = STQXv4i32
  { 723,	3,	0,	12,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #723 = STQXv8i16
  { 724,	3,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #724 = SUMB
  { 725,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo17 },  // Inst #725 = XORBIr8
  { 726,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #726 = XORBIv16i8
  { 727,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #727 = XORHIr16
  { 728,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #728 = XORHIv8i16
  { 729,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #729 = XORIr32
  { 730,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #730 = XORIv4i32
  { 731,	3,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #731 = XORfneg32
  { 732,	3,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #732 = XORfneg64
  { 733,	3,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #733 = XORfnegvec
  { 734,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #734 = XORr128
  { 735,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #735 = XORr16
  { 736,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #736 = XORr32
  { 737,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #737 = XORr64
  { 738,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #738 = XORr8
  { 739,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #739 = XORv16i8
  { 740,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #740 = XORv2i64
  { 741,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #741 = XORv4i32
  { 742,	3,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #742 = XORv8i16
  { 743,	2,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo79 },  // Inst #743 = XSBHr16
  { 744,	2,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo38 },  // Inst #744 = XSBHr32
  { 745,	2,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo80 },  // Inst #745 = XSBHr64
  { 746,	2,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo106 },  // Inst #746 = XSBHr8
  { 747,	2,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #747 = XSBHv16i8
  { 748,	2,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo107 },  // Inst #748 = XSHWr16
  { 749,	2,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo38 },  // Inst #749 = XSHWr32
  { 750,	2,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo80 },  // Inst #750 = XSHWr64
  { 751,	2,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #751 = XSHWv4i32
  { 752,	2,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo108 },  // Inst #752 = XSWDr64
  { 753,	2,	1,	10,	0,	0, 0x0ULL, NULL, NULL, OperandInfo80 },  // Inst #753 = XSWDr64_inreg
  { 754,	2,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #754 = XSWDv2i64
};

extern const char SPUInstrNameData[] = {
  /* 0 */ 'B', 'I', 'S', 'L', 'E', 'D', '_', '0', '0', 0,
  /* 10 */ 'B', 'I', 'S', 'L', 'E', 'D', '_', 'E', '0', 0,
  /* 20 */ 'E', 'Q', 'V', 'v', '4', 'i', '3', '2', '_', '1', 0,
  /* 31 */ 'E', 'Q', 'V', 'r', '3', '2', '_', '1', 0,
  /* 40 */ 'E', 'Q', 'V', 'v', '2', 'i', '6', '4', '_', '1', 0,
  /* 51 */ 'E', 'Q', 'V', 'r', '6', '4', '_', '1', 0,
  /* 60 */ 'E', 'Q', 'V', 'v', '8', 'i', '1', '6', '_', '1', 0,
  /* 71 */ 'E', 'Q', 'V', 'r', '1', '6', '_', '1', 0,
  /* 80 */ 'E', 'Q', 'V', 'r', '1', '2', '8', '_', '1', 0,
  /* 90 */ 'E', 'Q', 'V', 'v', '1', '6', 'i', '8', '_', '1', 0,
  /* 101 */ 'E', 'Q', 'V', 'r', '8', '_', '1', 0,
  /* 109 */ 'F', 'A', 'v', '4', 'f', '3', '2', 0,
  /* 117 */ 'F', 'M', 'A', 'v', '4', 'f', '3', '2', 0,
  /* 126 */ 'L', 'Q', 'A', 'v', '4', 'f', '3', '2', 0,
  /* 135 */ 'S', 'T', 'Q', 'A', 'v', '4', 'f', '3', '2', 0,
  /* 145 */ 'S', 'H', 'U', 'F', 'B', 'v', '4', 'f', '3', '2', 0,
  /* 156 */ 'L', 'Q', 'D', 'v', '4', 'f', '3', '2', 0,
  /* 165 */ 'S', 'T', 'Q', 'D', 'v', '4', 'f', '3', '2', 0,
  /* 175 */ 'C', 'S', 'i', 'F', 'v', '4', 'f', '3', '2', 0,
  /* 185 */ 'C', 'U', 'i', 'F', 'v', '4', 'f', '3', '2', 0,
  /* 195 */ 'A', 'I', 'v', '4', 'f', '3', '2', 0,
  /* 203 */ 'S', 'H', 'L', 'Q', 'B', 'I', 'v', '4', 'f', '3', '2', 0,
  /* 215 */ 'S', 'H', 'L', 'Q', 'B', 'Y', 'B', 'I', 'v', '4', 'f', '3', '2', 0,
  /* 229 */ 'F', 'I', 'v', '4', 'f', '3', '2', 0,
  /* 237 */ 'S', 'H', 'L', 'Q', 'B', 'I', 'I', 'v', '4', 'f', '3', '2', 0,
  /* 250 */ 'C', 'G', 'T', 'I', 'v', '4', 'f', '3', '2', 0,
  /* 260 */ 'S', 'H', 'L', 'Q', 'B', 'Y', 'I', 'v', '4', 'f', '3', '2', 0,
  /* 273 */ 'R', 'O', 'T', 'Q', 'B', 'Y', 'I', 'v', '4', 'f', '3', '2', 0,
  /* 286 */ 'F', 'M', 'v', '4', 'f', '3', '2', 0,
  /* 294 */ 'L', 'R', 'v', '4', 'f', '3', '2', 0,
  /* 302 */ 'O', 'R', 'v', '4', 'f', '3', '2', 0,
  /* 310 */ 'F', 'S', 'v', '4', 'f', '3', '2', 0,
  /* 318 */ 'F', 'M', 'S', 'v', '4', 'f', '3', '2', 0,
  /* 327 */ 'F', 'N', 'M', 'S', 'v', '4', 'f', '3', '2', 0,
  /* 337 */ 'F', 'R', 'E', 'S', 'T', 'v', '4', 'f', '3', '2', 0,
  /* 348 */ 'L', 'Q', 'X', 'v', '4', 'f', '3', '2', 0,
  /* 357 */ 'S', 'T', 'Q', 'X', 'v', '4', 'f', '3', '2', 0,
  /* 367 */ 'S', 'H', 'L', 'Q', 'B', 'Y', 'v', '4', 'f', '3', '2', 0,
  /* 379 */ 'R', 'O', 'T', 'Q', 'B', 'Y', 'v', '4', 'f', '3', '2', 0,
  /* 391 */ 'C', 'F', 'S', 'i', 'v', '4', 'f', '3', '2', 0,
  /* 401 */ 'C', 'F', 'U', 'i', 'v', '4', 'f', '3', '2', 0,
  /* 411 */ 'F', 'A', 'f', '3', '2', 0,
  /* 417 */ 'I', 'L', 'A', 'f', '3', '2', 0,
  /* 424 */ 'F', 'M', 'A', 'f', '3', '2', 0,
  /* 431 */ 'L', 'Q', 'A', 'f', '3', '2', 0,
  /* 438 */ 'S', 'T', 'Q', 'A', 'f', '3', '2', 0,
  /* 446 */ 'L', 'Q', 'D', 'f', '3', '2', 0,
  /* 453 */ 'S', 'T', 'Q', 'D', 'f', '3', '2', 0,
  /* 461 */ 'F', 'E', 'S', 'D', 'f', '3', '2', 0,
  /* 469 */ 'C', 'W', 'D', 'f', '3', '2', 0,
  /* 476 */ 'C', 'S', 'i', 'F', 'f', '3', '2', 0,
  /* 484 */ 'C', 'U', 'i', 'F', 'f', '3', '2', 0,
  /* 492 */ 'A', 'I', 'f', '3', '2', 0,
  /* 498 */ 'F', 'I', 'f', '3', '2', 0,
  /* 504 */ 'C', 'G', 'T', 'I', 'f', '3', '2', 0,
  /* 512 */ 'I', 'O', 'H', 'L', 'f', '3', '2', 0,
  /* 520 */ 'I', 'L', 'f', '3', '2', 0,
  /* 526 */ 'F', 'M', 'f', '3', '2', 0,
  /* 532 */ 'F', 'C', 'E', 'Q', 'f', '3', '2', 0,
  /* 540 */ 'F', 'C', 'M', 'E', 'Q', 'f', '3', '2', 0,
  /* 549 */ 'L', 'R', 'f', '3', '2', 0,
  /* 555 */ 'O', 'R', 'f', '3', '2', 0,
  /* 561 */ 'F', 'S', 'C', 'R', 'R', 'f', '3', '2', 0,
  /* 570 */ 'F', 'S', 'f', '3', '2', 0,
  /* 576 */ 'F', 'M', 'S', 'f', '3', '2', 0,
  /* 583 */ 'F', 'N', 'M', 'S', 'f', '3', '2', 0,
  /* 591 */ 'F', 'C', 'G', 'T', 'f', '3', '2', 0,
  /* 599 */ 'F', 'C', 'M', 'G', 'T', 'f', '3', '2', 0,
  /* 608 */ 'F', 'R', 'E', 'S', 'T', 'f', '3', '2', 0,
  /* 617 */ 'I', 'L', 'H', 'U', 'f', '3', '2', 0,
  /* 625 */ 'F', 'S', 'C', 'R', 'W', 'f', '3', '2', 0,
  /* 634 */ 'L', 'Q', 'X', 'f', '3', '2', 0,
  /* 641 */ 'S', 'T', 'Q', 'X', 'f', '3', '2', 0,
  /* 649 */ 'C', 'W', 'X', 'f', '3', '2', 0,
  /* 656 */ 'C', 'F', 'S', 'i', 'f', '3', '2', 0,
  /* 664 */ 'C', 'F', 'U', 'i', 'f', '3', '2', 0,
  /* 672 */ 'X', 'O', 'R', 'f', 'n', 'e', 'g', '3', '2', 0,
  /* 682 */ 'I', 'L', 'A', 'v', '4', 'i', '3', '2', 0,
  /* 691 */ 'R', 'O', 'T', 'M', 'A', 'v', '4', 'i', '3', '2', 0,
  /* 702 */ 'L', 'Q', 'A', 'v', '4', 'i', '3', '2', 0,
  /* 711 */ 'S', 'T', 'Q', 'A', 'v', '4', 'i', '3', '2', 0,
  /* 721 */ 'M', 'P', 'Y', 'A', 'v', '4', 'i', '3', '2', 0,
  /* 731 */ 'S', 'H', 'U', 'F', 'B', 'v', '4', 'i', '3', '2', 0,
  /* 742 */ 'G', 'B', 'v', '4', 'i', '3', '2', 0,
  /* 750 */ 'S', 'E', 'L', 'B', 'v', '4', 'i', '3', '2', 0,
  /* 760 */ 'C', 'N', 'T', 'B', 'v', '4', 'i', '3', '2', 0,
  /* 770 */ 'A', 'N', 'D', 'C', 'v', '4', 'i', '3', '2', 0,
  /* 780 */ 'O', 'R', 'C', 'v', '4', 'i', '3', '2', 0,
  /* 789 */ 'N', 'A', 'N', 'D', 'v', '4', 'i', '3', '2', 0,
  /* 799 */ 'L', 'Q', 'D', 'v', '4', 'i', '3', '2', 0,
  /* 808 */ 'S', 'T', 'Q', 'D', 'v', '4', 'i', '3', '2', 0,
  /* 818 */ 'B', 'G', 'v', '4', 'i', '3', '2', 0,
  /* 826 */ 'C', 'G', 'v', '4', 'i', '3', '2', 0,
  /* 834 */ 'M', 'P', 'Y', 'H', 'v', '4', 'i', '3', '2', 0,
  /* 844 */ 'A', 'I', 'v', '4', 'i', '3', '2', 0,
  /* 852 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'I', 'v', '4', 'i', '3', '2', 0,
  /* 865 */ 'F', 'S', 'M', 'B', 'I', 'v', '4', 'i', '3', '2', 0,
  /* 876 */ 'S', 'H', 'L', 'Q', 'B', 'I', 'v', '4', 'i', '3', '2', 0,
  /* 888 */ 'R', 'O', 'T', 'Q', 'B', 'I', 'v', '4', 'i', '3', '2', 0,
  /* 900 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'Y', 'B', 'I', 'v', '4', 'i', '3', '2', 0,
  /* 915 */ 'S', 'H', 'L', 'Q', 'B', 'Y', 'B', 'I', 'v', '4', 'i', '3', '2', 0,
  /* 929 */ 'A', 'N', 'D', 'I', 'v', '4', 'i', '3', '2', 0,
  /* 939 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'I', 'I', 'v', '4', 'i', '3', '2', 0,
  /* 953 */ 'S', 'H', 'L', 'Q', 'B', 'I', 'I', 'v', '4', 'i', '3', '2', 0,
  /* 966 */ 'R', 'O', 'T', 'Q', 'B', 'I', 'I', 'v', '4', 'i', '3', '2', 0,
  /* 979 */ 'S', 'H', 'L', 'I', 'v', '4', 'i', '3', '2', 0,
  /* 989 */ 'R', 'O', 'T', 'M', 'I', 'v', '4', 'i', '3', '2', 0,
  /* 1000 */ 'C', 'E', 'Q', 'I', 'v', '4', 'i', '3', '2', 0,
  /* 1010 */ 'X', 'O', 'R', 'I', 'v', '4', 'i', '3', '2', 0,
  /* 1020 */ 'C', 'G', 'T', 'I', 'v', '4', 'i', '3', '2', 0,
  /* 1030 */ 'C', 'L', 'G', 'T', 'I', 'v', '4', 'i', '3', '2', 0,
  /* 1041 */ 'R', 'O', 'T', 'I', 'v', '4', 'i', '3', '2', 0,
  /* 1051 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'Y', 'I', 'v', '4', 'i', '3', '2', 0,
  /* 1065 */ 'S', 'H', 'L', 'Q', 'B', 'Y', 'I', 'v', '4', 'i', '3', '2', 0,
  /* 1078 */ 'R', 'O', 'T', 'Q', 'B', 'Y', 'I', 'v', '4', 'i', '3', '2', 0,
  /* 1091 */ 'I', 'O', 'H', 'L', 'v', '4', 'i', '3', '2', 0,
  /* 1101 */ 'S', 'H', 'L', 'v', '4', 'i', '3', '2', 0,
  /* 1110 */ 'I', 'L', 'v', '4', 'i', '3', '2', 0,
  /* 1118 */ 'F', 'S', 'M', 'v', '4', 'i', '3', '2', 0,
  /* 1127 */ 'R', 'O', 'T', 'M', 'v', '4', 'i', '3', '2', 0,
  /* 1137 */ 'C', 'E', 'Q', 'v', '4', 'i', '3', '2', 0,
  /* 1146 */ 'L', 'R', 'v', '4', 'i', '3', '2', 0,
  /* 1154 */ 'N', 'O', 'R', 'v', '4', 'i', '3', '2', 0,
  /* 1163 */ 'X', 'O', 'R', 'v', '4', 'i', '3', '2', 0,
  /* 1172 */ 'M', 'P', 'Y', 'S', 'v', '4', 'i', '3', '2', 0,
  /* 1182 */ 'C', 'G', 'T', 'v', '4', 'i', '3', '2', 0,
  /* 1191 */ 'C', 'L', 'G', 'T', 'v', '4', 'i', '3', '2', 0,
  /* 1201 */ 'R', 'O', 'T', 'v', '4', 'i', '3', '2', 0,
  /* 1210 */ 'M', 'P', 'Y', 'H', 'H', 'U', 'v', '4', 'i', '3', '2', 0,
  /* 1222 */ 'I', 'L', 'H', 'U', 'v', '4', 'i', '3', '2', 0,
  /* 1232 */ 'M', 'P', 'Y', 'U', 'v', '4', 'i', '3', '2', 0,
  /* 1242 */ 'E', 'Q', 'V', 'v', '4', 'i', '3', '2', 0,
  /* 1251 */ 'X', 'S', 'H', 'W', 'v', '4', 'i', '3', '2', 0,
  /* 1261 */ 'A', 'D', 'D', 'X', 'v', '4', 'i', '3', '2', 0,
  /* 1271 */ 'S', 'F', 'X', 'v', '4', 'i', '3', '2', 0,
  /* 1280 */ 'L', 'Q', 'X', 'v', '4', 'i', '3', '2', 0,
  /* 1289 */ 'S', 'T', 'Q', 'X', 'v', '4', 'i', '3', '2', 0,
  /* 1299 */ 'O', 'R', 'X', 'v', '4', 'i', '3', '2', 0,
  /* 1308 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'Y', 'v', '4', 'i', '3', '2', 0,
  /* 1321 */ 'S', 'H', 'L', 'Q', 'B', 'Y', 'v', '4', 'i', '3', '2', 0,
  /* 1333 */ 'R', 'O', 'T', 'Q', 'B', 'Y', 'v', '4', 'i', '3', '2', 0,
  /* 1345 */ 'C', 'L', 'Z', 'v', '4', 'i', '3', '2', 0,
  /* 1354 */ 'B', 'R', 'N', 'Z', 'v', '4', 'i', '3', '2', 0,
  /* 1364 */ 'B', 'R', 'Z', 'v', '4', 'i', '3', '2', 0,
  /* 1373 */ 'A', 'N', 'D', 'i', '1', '6', 'i', '3', '2', 0,
  /* 1383 */ 'A', 'N', 'D', 'I', 'i', '1', '6', 'i', '3', '2', 0,
  /* 1394 */ 'O', 'R', 'I', 'i', '1', '6', 'i', '3', '2', 0,
  /* 1404 */ 'A', 'N', 'D', 'I', 'i', '8', 'i', '3', '2', 0,
  /* 1414 */ 'O', 'R', 'I', 'i', '8', 'i', '3', '2', 0,
  /* 1423 */ 'R', 'O', 'T', 'M', 'A', 'I', 'v', '4', 'i', '3', '2', '_', 'i', '3', '2', 0,
  /* 1439 */ 'R', 'O', 'T', 'M', 'A', 'I', 'r', '3', '2', '_', 'i', '3', '2', 0,
  /* 1453 */ 'R', 'O', 'T', 'M', 'A', 'I', 'v', '2', 'i', '6', '4', '_', 'i', '3', '2', 0,
  /* 1469 */ 'R', 'O', 'T', 'M', 'A', 'I', 'r', '6', '4', '_', 'i', '3', '2', 0,
  /* 1483 */ 'S', 'H', 'U', 'F', 'B', 'v', '4', 'f', '3', '2', '_', 'm', '3', '2', 0,
  /* 1498 */ 'S', 'H', 'U', 'F', 'B', 'v', '4', 'i', '3', '2', '_', 'm', '3', '2', 0,
  /* 1513 */ 'S', 'H', 'U', 'F', 'B', 'v', '2', 'f', '6', '4', '_', 'm', '3', '2', 0,
  /* 1528 */ 'S', 'H', 'U', 'F', 'B', 'v', '2', 'i', '6', '4', '_', 'm', '3', '2', 0,
  /* 1543 */ 'S', 'H', 'U', 'F', 'B', 'v', '8', 'i', '1', '6', '_', 'm', '3', '2', 0,
  /* 1558 */ 'S', 'H', 'U', 'F', 'B', 'v', '1', '6', 'i', '8', '_', 'm', '3', '2', 0,
  /* 1573 */ 'F', 'S', 'M', '6', '4', 'r', '3', '2', 0,
  /* 1582 */ 'M', 'P', 'Y', 'H', 'H', 'A', 'r', '3', '2', 0,
  /* 1592 */ 'I', 'L', 'A', 'r', '3', '2', 0,
  /* 1599 */ 'R', 'O', 'T', 'M', 'A', 'r', '3', '2', 0,
  /* 1608 */ 'L', 'Q', 'A', 'r', '3', '2', 0,
  /* 1615 */ 'S', 'T', 'Q', 'A', 'r', '3', '2', 0,
  /* 1623 */ 'M', 'P', 'Y', 'A', 'r', '3', '2', 0,
  /* 1631 */ 'S', 'E', 'L', 'B', 'r', '3', '2', 0,
  /* 1639 */ 'A', 'N', 'D', 'C', 'r', '3', '2', 0,
  /* 1647 */ 'O', 'R', 'C', 'r', '3', '2', 0,
  /* 1654 */ 'N', 'A', 'N', 'D', 'r', '3', '2', 0,
  /* 1662 */ 'L', 'Q', 'D', 'r', '3', '2', 0,
  /* 1669 */ 'S', 'T', 'Q', 'D', 'r', '3', '2', 0,
  /* 1677 */ 'S', 'F', 'r', '3', '2', 0,
  /* 1683 */ 'B', 'G', 'r', '3', '2', 0,
  /* 1689 */ 'C', 'G', 'r', '3', '2', 0,
  /* 1695 */ 'X', 'S', 'B', 'H', 'r', '3', '2', 0,
  /* 1703 */ 'M', 'P', 'Y', 'H', 'H', 'r', '3', '2', 0,
  /* 1712 */ 'M', 'P', 'Y', 'H', 'r', '3', '2', 0,
  /* 1720 */ 'A', 'I', 'r', '3', '2', 0,
  /* 1726 */ 'A', 'N', 'D', 'I', 'r', '3', '2', 0,
  /* 1734 */ 'S', 'F', 'I', 'r', '3', '2', 0,
  /* 1741 */ 'S', 'H', 'L', 'I', 'r', '3', '2', 0,
  /* 1749 */ 'R', 'O', 'T', 'M', 'I', 'r', '3', '2', 0,
  /* 1758 */ 'C', 'E', 'Q', 'I', 'r', '3', '2', 0,
  /* 1766 */ 'H', 'E', 'Q', 'I', 'r', '3', '2', 0,
  /* 1774 */ 'X', 'O', 'R', 'I', 'r', '3', '2', 0,
  /* 1782 */ 'C', 'G', 'T', 'I', 'r', '3', '2', 0,
  /* 1790 */ 'H', 'G', 'T', 'I', 'r', '3', '2', 0,
  /* 1798 */ 'C', 'L', 'G', 'T', 'I', 'r', '3', '2', 0,
  /* 1807 */ 'H', 'L', 'G', 'T', 'I', 'r', '3', '2', 0,
  /* 1816 */ 'R', 'O', 'T', 'I', 'r', '3', '2', 0,
  /* 1824 */ 'I', 'O', 'H', 'L', 'r', '3', '2', 0,
  /* 1832 */ 'S', 'H', 'L', 'r', '3', '2', 0,
  /* 1839 */ 'I', 'L', 'r', '3', '2', 0,
  /* 1845 */ 'F', 'S', 'M', 'r', '3', '2', 0,
  /* 1852 */ 'R', 'O', 'T', 'M', 'r', '3', '2', 0,
  /* 1860 */ 'C', 'E', 'Q', 'r', '3', '2', 0,
  /* 1867 */ 'H', 'E', 'Q', 'r', '3', '2', 0,
  /* 1874 */ 'L', 'R', 'r', '3', '2', 0,
  /* 1880 */ 'N', 'O', 'R', 'r', '3', '2', 0,
  /* 1887 */ 'X', 'O', 'R', 'r', '3', '2', 0,
  /* 1894 */ 'C', 'G', 'T', 'r', '3', '2', 0,
  /* 1901 */ 'H', 'G', 'T', 'r', '3', '2', 0,
  /* 1908 */ 'C', 'L', 'G', 'T', 'r', '3', '2', 0,
  /* 1916 */ 'H', 'L', 'G', 'T', 'r', '3', '2', 0,
  /* 1924 */ 'R', 'O', 'T', 'r', '3', '2', 0,
  /* 1931 */ 'M', 'P', 'Y', 'H', 'H', 'A', 'U', 'r', '3', '2', 0,
  /* 1942 */ 'M', 'P', 'Y', 'H', 'H', 'U', 'r', '3', '2', 0,
  /* 1952 */ 'I', 'L', 'H', 'U', 'r', '3', '2', 0,
  /* 1960 */ 'M', 'P', 'Y', 'U', 'r', '3', '2', 0,
  /* 1968 */ 'E', 'Q', 'V', 'r', '3', '2', 0,
  /* 1975 */ 'X', 'S', 'H', 'W', 'r', '3', '2', 0,
  /* 1983 */ 'A', 'D', 'D', 'X', 'r', '3', '2', 0,
  /* 1991 */ 'S', 'F', 'X', 'r', '3', '2', 0,
  /* 1998 */ 'L', 'Q', 'X', 'r', '3', '2', 0,
  /* 2005 */ 'S', 'T', 'Q', 'X', 'r', '3', '2', 0,
  /* 2013 */ 'C', 'L', 'Z', 'r', '3', '2', 0,
  /* 2020 */ 'B', 'R', 'N', 'Z', 'r', '3', '2', 0,
  /* 2028 */ 'B', 'R', 'Z', 'r', '3', '2', 0,
  /* 2035 */ 'G', 'B', 'v', '4', 'i', '3', '2', '_', 'r', '3', '2', 0,
  /* 2047 */ 'R', 'O', 'T', 'Q', 'B', 'Y', 'B', 'I', 'v', '4', 'i', '3', '2', '_', 'r', '3', '2', 0,
  /* 2065 */ 'R', 'O', 'T', 'Q', 'B', 'Y', 'B', 'I', 'v', '2', 'i', '6', '4', '_', 'r', '3', '2', 0,
  /* 2083 */ 'G', 'B', 'H', 'v', '8', 'i', '1', '6', '_', 'r', '3', '2', 0,
  /* 2096 */ 'R', 'O', 'T', 'Q', 'B', 'Y', 'B', 'I', 'v', '8', 'i', '1', '6', '_', 'r', '3', '2', 0,
  /* 2114 */ 'S', 'H', 'L', 'H', 'r', '1', '6', '_', 'r', '3', '2', 0,
  /* 2126 */ 'R', 'O', 'T', 'H', 'r', '1', '6', '_', 'r', '3', '2', 0,
  /* 2138 */ 'R', 'O', 'T', 'H', 'I', 'r', '1', '6', '_', 'r', '3', '2', 0,
  /* 2151 */ 'G', 'B', 'B', 'v', '1', '6', 'i', '8', '_', 'r', '3', '2', 0,
  /* 2164 */ 'R', 'O', 'T', 'Q', 'B', 'Y', 'B', 'I', 'v', '1', '6', 'i', '8', '_', 'r', '3', '2', 0,
  /* 2182 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'Y', 'I', 'r', '1', '2', '8', '_', 'z', 'e', 'x', 't', '_', 'r', '3', '2', 0,
  /* 2204 */ 'A', 'N', 'D', 'f', 'a', 'b', 's', '3', '2', 0,
  /* 2214 */ 'E', 'Q', 'V', 'v', '4', 'i', '3', '2', '_', '2', 0,
  /* 2225 */ 'E', 'Q', 'V', 'r', '3', '2', '_', '2', 0,
  /* 2234 */ 'E', 'Q', 'V', 'v', '2', 'i', '6', '4', '_', '2', 0,
  /* 2245 */ 'E', 'Q', 'V', 'r', '6', '4', '_', '2', 0,
  /* 2254 */ 'E', 'Q', 'V', 'v', '8', 'i', '1', '6', '_', '2', 0,
  /* 2265 */ 'E', 'Q', 'V', 'r', '1', '6', '_', '2', 0,
  /* 2274 */ 'E', 'Q', 'V', 'r', '1', '2', '8', '_', '2', 0,
  /* 2284 */ 'E', 'Q', 'V', 'v', '1', '6', 'i', '8', '_', '2', 0,
  /* 2295 */ 'E', 'Q', 'V', 'r', '8', '_', '2', 0,
  /* 2303 */ 'E', 'Q', 'V', 'v', '4', 'i', '3', '2', '_', '3', 0,
  /* 2314 */ 'E', 'Q', 'V', 'r', '3', '2', '_', '3', 0,
  /* 2323 */ 'E', 'Q', 'V', 'v', '2', 'i', '6', '4', '_', '3', 0,
  /* 2334 */ 'E', 'Q', 'V', 'r', '6', '4', '_', '3', 0,
  /* 2343 */ 'E', 'Q', 'V', 'v', '8', 'i', '1', '6', '_', '3', 0,
  /* 2354 */ 'E', 'Q', 'V', 'r', '1', '6', '_', '3', 0,
  /* 2363 */ 'E', 'Q', 'V', 'r', '1', '2', '8', '_', '3', 0,
  /* 2373 */ 'E', 'Q', 'V', 'v', '1', '6', 'i', '8', '_', '3', 0,
  /* 2384 */ 'E', 'Q', 'V', 'r', '8', '_', '3', 0,
  /* 2392 */ 'F', 'A', 'v', '2', 'f', '6', '4', 0,
  /* 2400 */ 'F', 'M', 'A', 'v', '2', 'f', '6', '4', 0,
  /* 2409 */ 'F', 'N', 'M', 'A', 'v', '2', 'f', '6', '4', 0,
  /* 2419 */ 'L', 'Q', 'A', 'v', '2', 'f', '6', '4', 0,
  /* 2428 */ 'S', 'T', 'Q', 'A', 'v', '2', 'f', '6', '4', 0,
  /* 2438 */ 'S', 'H', 'U', 'F', 'B', 'v', '2', 'f', '6', '4', 0,
  /* 2449 */ 'L', 'Q', 'D', 'v', '2', 'f', '6', '4', 0,
  /* 2458 */ 'S', 'T', 'Q', 'D', 'v', '2', 'f', '6', '4', 0,
  /* 2468 */ 'S', 'H', 'L', 'Q', 'B', 'I', 'v', '2', 'f', '6', '4', 0,
  /* 2480 */ 'S', 'H', 'L', 'Q', 'B', 'Y', 'B', 'I', 'v', '2', 'f', '6', '4', 0,
  /* 2494 */ 'S', 'H', 'L', 'Q', 'B', 'I', 'I', 'v', '2', 'f', '6', '4', 0,
  /* 2507 */ 'S', 'H', 'L', 'Q', 'B', 'Y', 'I', 'v', '2', 'f', '6', '4', 0,
  /* 2520 */ 'F', 'M', 'v', '2', 'f', '6', '4', 0,
  /* 2528 */ 'L', 'R', 'v', '2', 'f', '6', '4', 0,
  /* 2536 */ 'O', 'R', 'v', '2', 'f', '6', '4', 0,
  /* 2544 */ 'F', 'S', 'v', '2', 'f', '6', '4', 0,
  /* 2552 */ 'F', 'M', 'S', 'v', '2', 'f', '6', '4', 0,
  /* 2561 */ 'D', 'F', 'N', 'M', 'S', 'v', '2', 'f', '6', '4', 0,
  /* 2572 */ 'L', 'Q', 'X', 'v', '2', 'f', '6', '4', 0,
  /* 2581 */ 'S', 'T', 'Q', 'X', 'v', '2', 'f', '6', '4', 0,
  /* 2591 */ 'S', 'H', 'L', 'Q', 'B', 'Y', 'v', '2', 'f', '6', '4', 0,
  /* 2603 */ 'R', 'O', 'T', 'Q', 'B', 'Y', 'v', '2', 'f', '6', '4', 0,
  /* 2615 */ 'F', 'A', 'f', '6', '4', 0,
  /* 2621 */ 'I', 'L', 'A', 'f', '6', '4', 0,
  /* 2628 */ 'F', 'M', 'A', 'f', '6', '4', 0,
  /* 2635 */ 'F', 'N', 'M', 'A', 'f', '6', '4', 0,
  /* 2643 */ 'L', 'Q', 'A', 'f', '6', '4', 0,
  /* 2650 */ 'S', 'T', 'Q', 'A', 'f', '6', '4', 0,
  /* 2658 */ 'C', 'D', 'D', 'f', '6', '4', 0,
  /* 2665 */ 'L', 'Q', 'D', 'f', '6', '4', 0,
  /* 2672 */ 'S', 'T', 'Q', 'D', 'f', '6', '4', 0,
  /* 2680 */ 'I', 'L', 'f', '6', '4', 0,
  /* 2686 */ 'F', 'M', 'f', '6', '4', 0,
  /* 2692 */ 'L', 'R', 'f', '6', '4', 0,
  /* 2698 */ 'O', 'R', 'f', '6', '4', 0,
  /* 2704 */ 'F', 'R', 'D', 'S', 'f', '6', '4', 0,
  /* 2712 */ 'F', 'S', 'f', '6', '4', 0,
  /* 2718 */ 'F', 'M', 'S', 'f', '6', '4', 0,
  /* 2725 */ 'D', 'F', 'N', 'M', 'S', 'f', '6', '4', 0,
  /* 2734 */ 'C', 'D', 'X', 'f', '6', '4', 0,
  /* 2741 */ 'L', 'Q', 'X', 'f', '6', '4', 0,
  /* 2748 */ 'S', 'T', 'Q', 'X', 'f', '6', '4', 0,
  /* 2756 */ 'X', 'O', 'R', 'f', 'n', 'e', 'g', '6', '4', 0,
  /* 2766 */ 'I', 'L', 'A', 'v', '2', 'i', '6', '4', 0,
  /* 2775 */ 'L', 'Q', 'A', 'v', '2', 'i', '6', '4', 0,
  /* 2784 */ 'S', 'T', 'Q', 'A', 'v', '2', 'i', '6', '4', 0,
  /* 2794 */ 'S', 'H', 'U', 'F', 'B', 'v', '2', 'i', '6', '4', 0,
  /* 2805 */ 'S', 'E', 'L', 'B', 'v', '2', 'i', '6', '4', 0,
  /* 2815 */ 'A', 'N', 'D', 'C', 'v', '2', 'i', '6', '4', 0,
  /* 2825 */ 'O', 'R', 'C', 'v', '2', 'i', '6', '4', 0,
  /* 2834 */ 'N', 'A', 'N', 'D', 'v', '2', 'i', '6', '4', 0,
  /* 2844 */ 'L', 'Q', 'D', 'v', '2', 'i', '6', '4', 0,
  /* 2853 */ 'S', 'T', 'Q', 'D', 'v', '2', 'i', '6', '4', 0,
  /* 2863 */ 'X', 'S', 'W', 'D', 'v', '2', 'i', '6', '4', 0,
  /* 2873 */ 'B', 'G', 'v', '2', 'i', '6', '4', 0,
  /* 2881 */ 'C', 'G', 'v', '2', 'i', '6', '4', 0,
  /* 2889 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'I', 'v', '2', 'i', '6', '4', 0,
  /* 2902 */ 'F', 'S', 'M', 'B', 'I', 'v', '2', 'i', '6', '4', 0,
  /* 2913 */ 'S', 'H', 'L', 'Q', 'B', 'I', 'v', '2', 'i', '6', '4', 0,
  /* 2925 */ 'R', 'O', 'T', 'Q', 'B', 'I', 'v', '2', 'i', '6', '4', 0,
  /* 2937 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'Y', 'B', 'I', 'v', '2', 'i', '6', '4', 0,
  /* 2952 */ 'S', 'H', 'L', 'Q', 'B', 'Y', 'B', 'I', 'v', '2', 'i', '6', '4', 0,
  /* 2966 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'I', 'I', 'v', '2', 'i', '6', '4', 0,
  /* 2980 */ 'S', 'H', 'L', 'Q', 'B', 'I', 'I', 'v', '2', 'i', '6', '4', 0,
  /* 2993 */ 'R', 'O', 'T', 'Q', 'B', 'I', 'I', 'v', '2', 'i', '6', '4', 0,
  /* 3006 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'Y', 'I', 'v', '2', 'i', '6', '4', 0,
  /* 3020 */ 'S', 'H', 'L', 'Q', 'B', 'Y', 'I', 'v', '2', 'i', '6', '4', 0,
  /* 3033 */ 'R', 'O', 'T', 'Q', 'B', 'Y', 'I', 'v', '2', 'i', '6', '4', 0,
  /* 3046 */ 'I', 'O', 'H', 'L', 'v', '2', 'i', '6', '4', 0,
  /* 3056 */ 'I', 'L', 'v', '2', 'i', '6', '4', 0,
  /* 3064 */ 'L', 'R', 'v', '2', 'i', '6', '4', 0,
  /* 3072 */ 'N', 'O', 'R', 'v', '2', 'i', '6', '4', 0,
  /* 3081 */ 'X', 'O', 'R', 'v', '2', 'i', '6', '4', 0,
  /* 3090 */ 'I', 'L', 'H', 'U', 'v', '2', 'i', '6', '4', 0,
  /* 3100 */ 'E', 'Q', 'V', 'v', '2', 'i', '6', '4', 0,
  /* 3109 */ 'A', 'D', 'D', 'X', 'v', '2', 'i', '6', '4', 0,
  /* 3119 */ 'S', 'F', 'X', 'v', '2', 'i', '6', '4', 0,
  /* 3128 */ 'L', 'Q', 'X', 'v', '2', 'i', '6', '4', 0,
  /* 3137 */ 'S', 'T', 'Q', 'X', 'v', '2', 'i', '6', '4', 0,
  /* 3147 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'Y', 'v', '2', 'i', '6', '4', 0,
  /* 3160 */ 'S', 'H', 'L', 'Q', 'B', 'Y', 'v', '2', 'i', '6', '4', 0,
  /* 3172 */ 'R', 'O', 'T', 'Q', 'B', 'Y', 'v', '2', 'i', '6', '4', 0,
  /* 3184 */ 'R', 'O', 'T', 'Q', 'B', 'Y', 'I', 'v', 'f', 'i', '6', '4', 0,
  /* 3197 */ 'I', 'L', 'A', 'r', '6', '4', 0,
  /* 3204 */ 'L', 'Q', 'A', 'r', '6', '4', 0,
  /* 3211 */ 'S', 'T', 'Q', 'A', 'r', '6', '4', 0,
  /* 3219 */ 'S', 'E', 'L', 'B', 'r', '6', '4', 0,
  /* 3227 */ 'A', 'N', 'D', 'C', 'r', '6', '4', 0,
  /* 3235 */ 'O', 'R', 'C', 'r', '6', '4', 0,
  /* 3242 */ 'N', 'A', 'N', 'D', 'r', '6', '4', 0,
  /* 3250 */ 'L', 'Q', 'D', 'r', '6', '4', 0,
  /* 3257 */ 'S', 'T', 'Q', 'D', 'r', '6', '4', 0,
  /* 3265 */ 'X', 'S', 'W', 'D', 'r', '6', '4', 0,
  /* 3273 */ 'B', 'G', 'r', '6', '4', 0,
  /* 3279 */ 'C', 'G', 'r', '6', '4', 0,
  /* 3285 */ 'X', 'S', 'B', 'H', 'r', '6', '4', 0,
  /* 3293 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'I', 'r', '6', '4', 0,
  /* 3304 */ 'R', 'O', 'T', 'Q', 'B', 'I', 'r', '6', '4', 0,
  /* 3314 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'I', 'I', 'r', '6', '4', 0,
  /* 3326 */ 'R', 'O', 'T', 'Q', 'B', 'I', 'I', 'r', '6', '4', 0,
  /* 3337 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'Y', 'I', 'r', '6', '4', 0,
  /* 3349 */ 'I', 'L', 'r', '6', '4', 0,
  /* 3355 */ 'L', 'R', 'r', '6', '4', 0,
  /* 3361 */ 'N', 'O', 'R', 'r', '6', '4', 0,
  /* 3368 */ 'X', 'O', 'R', 'r', '6', '4', 0,
  /* 3375 */ 'I', 'L', 'H', 'U', 'r', '6', '4', 0,
  /* 3383 */ 'E', 'Q', 'V', 'r', '6', '4', 0,
  /* 3390 */ 'X', 'S', 'H', 'W', 'r', '6', '4', 0,
  /* 3398 */ 'A', 'D', 'D', 'X', 'r', '6', '4', 0,
  /* 3406 */ 'S', 'F', 'X', 'r', '6', '4', 0,
  /* 3413 */ 'L', 'Q', 'X', 'r', '6', '4', 0,
  /* 3420 */ 'S', 'T', 'Q', 'X', 'r', '6', '4', 0,
  /* 3428 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'Y', 'r', '6', '4', 0,
  /* 3439 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'Y', 'I', 'r', '1', '2', '8', '_', 'z', 'e', 'x', 't', '_', 'r', '6', '4', 0,
  /* 3461 */ 'A', 'N', 'D', 'f', 'a', 'b', 's', '6', '4', 0,
  /* 3471 */ 'A', 'N', 'D', 'H', 'I', 'i', '8', 'i', '1', '6', 0,
  /* 3482 */ 'O', 'R', 'H', 'I', 'i', '8', 'i', '1', '6', 0,
  /* 3492 */ 'L', 'Q', 'A', 'v', '8', 'i', '1', '6', 0,
  /* 3501 */ 'S', 'T', 'Q', 'A', 'v', '8', 'i', '1', '6', 0,
  /* 3511 */ 'S', 'H', 'U', 'F', 'B', 'v', '8', 'i', '1', '6', 0,
  /* 3522 */ 'S', 'E', 'L', 'B', 'v', '8', 'i', '1', '6', 0,
  /* 3532 */ 'C', 'N', 'T', 'B', 'v', '8', 'i', '1', '6', 0,
  /* 3542 */ 'A', 'N', 'D', 'C', 'v', '8', 'i', '1', '6', 0,
  /* 3552 */ 'O', 'R', 'C', 'v', '8', 'i', '1', '6', 0,
  /* 3561 */ 'N', 'A', 'N', 'D', 'v', '8', 'i', '1', '6', 0,
  /* 3571 */ 'L', 'Q', 'D', 'v', '8', 'i', '1', '6', 0,
  /* 3580 */ 'S', 'T', 'Q', 'D', 'v', '8', 'i', '1', '6', 0,
  /* 3590 */ 'R', 'O', 'T', 'M', 'A', 'H', 'v', '8', 'i', '1', '6', 0,
  /* 3602 */ 'G', 'B', 'H', 'v', '8', 'i', '1', '6', 0,
  /* 3611 */ 'M', 'P', 'Y', 'H', 'H', 'v', '8', 'i', '1', '6', 0,
  /* 3622 */ 'S', 'H', 'L', 'H', 'v', '8', 'i', '1', '6', 0,
  /* 3632 */ 'I', 'L', 'H', 'v', '8', 'i', '1', '6', 0,
  /* 3641 */ 'F', 'S', 'M', 'H', 'v', '8', 'i', '1', '6', 0,
  /* 3651 */ 'C', 'E', 'Q', 'H', 'v', '8', 'i', '1', '6', 0,
  /* 3661 */ 'C', 'G', 'T', 'H', 'v', '8', 'i', '1', '6', 0,
  /* 3671 */ 'C', 'L', 'G', 'T', 'H', 'v', '8', 'i', '1', '6', 0,
  /* 3682 */ 'R', 'O', 'T', 'H', 'v', '8', 'i', '1', '6', 0,
  /* 3692 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'I', 'v', '8', 'i', '1', '6', 0,
  /* 3705 */ 'F', 'S', 'M', 'B', 'I', 'v', '8', 'i', '1', '6', 0,
  /* 3716 */ 'S', 'H', 'L', 'Q', 'B', 'I', 'v', '8', 'i', '1', '6', 0,
  /* 3728 */ 'R', 'O', 'T', 'Q', 'B', 'I', 'v', '8', 'i', '1', '6', 0,
  /* 3740 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'Y', 'B', 'I', 'v', '8', 'i', '1', '6', 0,
  /* 3755 */ 'S', 'H', 'L', 'Q', 'B', 'Y', 'B', 'I', 'v', '8', 'i', '1', '6', 0,
  /* 3769 */ 'R', 'O', 'T', 'M', 'A', 'H', 'I', 'v', '8', 'i', '1', '6', 0,
  /* 3782 */ 'A', 'N', 'D', 'H', 'I', 'v', '8', 'i', '1', '6', 0,
  /* 3793 */ 'S', 'H', 'L', 'H', 'I', 'v', '8', 'i', '1', '6', 0,
  /* 3804 */ 'C', 'E', 'Q', 'H', 'I', 'v', '8', 'i', '1', '6', 0,
  /* 3815 */ 'X', 'O', 'R', 'H', 'I', 'v', '8', 'i', '1', '6', 0,
  /* 3826 */ 'C', 'G', 'T', 'H', 'I', 'v', '8', 'i', '1', '6', 0,
  /* 3837 */ 'C', 'L', 'G', 'T', 'H', 'I', 'v', '8', 'i', '1', '6', 0,
  /* 3849 */ 'R', 'O', 'T', 'H', 'I', 'v', '8', 'i', '1', '6', 0,
  /* 3860 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'I', 'I', 'v', '8', 'i', '1', '6', 0,
  /* 3874 */ 'S', 'H', 'L', 'Q', 'B', 'I', 'I', 'v', '8', 'i', '1', '6', 0,
  /* 3887 */ 'R', 'O', 'T', 'Q', 'B', 'I', 'I', 'v', '8', 'i', '1', '6', 0,
  /* 3900 */ 'R', 'O', 'T', 'H', 'M', 'I', 'v', '8', 'i', '1', '6', 0,
  /* 3912 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'Y', 'I', 'v', '8', 'i', '1', '6', 0,
  /* 3926 */ 'S', 'H', 'L', 'Q', 'B', 'Y', 'I', 'v', '8', 'i', '1', '6', 0,
  /* 3939 */ 'R', 'O', 'T', 'Q', 'B', 'Y', 'I', 'v', '8', 'i', '1', '6', 0,
  /* 3952 */ 'R', 'O', 'T', 'H', 'M', 'v', '8', 'i', '1', '6', 0,
  /* 3963 */ 'L', 'R', 'v', '8', 'i', '1', '6', 0,
  /* 3971 */ 'N', 'O', 'R', 'v', '8', 'i', '1', '6', 0,
  /* 3980 */ 'X', 'O', 'R', 'v', '8', 'i', '1', '6', 0,
  /* 3989 */ 'E', 'Q', 'V', 'v', '8', 'i', '1', '6', 0,
  /* 3998 */ 'L', 'Q', 'X', 'v', '8', 'i', '1', '6', 0,
  /* 4007 */ 'S', 'T', 'Q', 'X', 'v', '8', 'i', '1', '6', 0,
  /* 4017 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'Y', 'v', '8', 'i', '1', '6', 0,
  /* 4030 */ 'S', 'H', 'L', 'Q', 'B', 'Y', 'v', '8', 'i', '1', '6', 0,
  /* 4042 */ 'R', 'O', 'T', 'Q', 'B', 'Y', 'v', '8', 'i', '1', '6', 0,
  /* 4054 */ 'M', 'P', 'Y', 'v', '8', 'i', '1', '6', 0,
  /* 4063 */ 'B', 'R', 'H', 'Z', 'v', '8', 'i', '1', '6', 0,
  /* 4073 */ 'B', 'R', 'H', 'N', 'Z', 'v', '8', 'i', '1', '6', 0,
  /* 4084 */ 'R', 'O', 'T', 'I', 'v', '4', 'i', '3', '2', '_', 'i', '1', '6', 0,
  /* 4098 */ 'R', 'O', 'T', 'I', 'r', '3', '2', '_', 'i', '1', '6', 0,
  /* 4110 */ 'F', 'S', 'M', '6', '4', 'r', '1', '6', 0,
  /* 4119 */ 'L', 'Q', 'A', 'r', '1', '6', 0,
  /* 4126 */ 'S', 'T', 'Q', 'A', 'r', '1', '6', 0,
  /* 4134 */ 'S', 'E', 'L', 'B', 'r', '1', '6', 0,
  /* 4142 */ 'A', 'N', 'D', 'C', 'r', '1', '6', 0,
  /* 4150 */ 'O', 'R', 'C', 'r', '1', '6', 0,
  /* 4157 */ 'N', 'A', 'N', 'D', 'r', '1', '6', 0,
  /* 4165 */ 'L', 'Q', 'D', 'r', '1', '6', 0,
  /* 4172 */ 'S', 'T', 'Q', 'D', 'r', '1', '6', 0,
  /* 4180 */ 'R', 'O', 'T', 'M', 'A', 'H', 'r', '1', '6', 0,
  /* 4190 */ 'X', 'S', 'B', 'H', 'r', '1', '6', 0,
  /* 4198 */ 'S', 'F', 'H', 'r', '1', '6', 0,
  /* 4205 */ 'S', 'H', 'L', 'H', 'r', '1', '6', 0,
  /* 4213 */ 'I', 'L', 'H', 'r', '1', '6', 0,
  /* 4220 */ 'C', 'E', 'Q', 'H', 'r', '1', '6', 0,
  /* 4228 */ 'C', 'G', 'T', 'H', 'r', '1', '6', 0,
  /* 4236 */ 'C', 'L', 'G', 'T', 'H', 'r', '1', '6', 0,
  /* 4245 */ 'R', 'O', 'T', 'H', 'r', '1', '6', 0,
  /* 4253 */ 'R', 'O', 'T', 'M', 'A', 'H', 'I', 'r', '1', '6', 0,
  /* 4264 */ 'A', 'N', 'D', 'H', 'I', 'r', '1', '6', 0,
  /* 4273 */ 'S', 'F', 'H', 'I', 'r', '1', '6', 0,
  /* 4281 */ 'S', 'H', 'L', 'H', 'I', 'r', '1', '6', 0,
  /* 4290 */ 'C', 'E', 'Q', 'H', 'I', 'r', '1', '6', 0,
  /* 4299 */ 'X', 'O', 'R', 'H', 'I', 'r', '1', '6', 0,
  /* 4308 */ 'C', 'G', 'T', 'H', 'I', 'r', '1', '6', 0,
  /* 4317 */ 'C', 'L', 'G', 'T', 'H', 'I', 'r', '1', '6', 0,
  /* 4327 */ 'R', 'O', 'T', 'H', 'I', 'r', '1', '6', 0,
  /* 4336 */ 'R', 'O', 'T', 'H', 'M', 'I', 'r', '1', '6', 0,
  /* 4346 */ 'M', 'P', 'Y', 'U', 'I', 'r', '1', '6', 0,
  /* 4355 */ 'M', 'P', 'Y', 'I', 'r', '1', '6', 0,
  /* 4363 */ 'R', 'O', 'T', 'H', 'M', 'r', '1', '6', 0,
  /* 4372 */ 'F', 'S', 'M', 'r', '1', '6', 0,
  /* 4379 */ 'L', 'R', 'r', '1', '6', 0,
  /* 4385 */ 'N', 'O', 'R', 'r', '1', '6', 0,
  /* 4392 */ 'X', 'O', 'R', 'r', '1', '6', 0,
  /* 4399 */ 'M', 'P', 'Y', 'S', 'r', '1', '6', 0,
  /* 4407 */ 'M', 'P', 'Y', 'U', 'r', '1', '6', 0,
  /* 4415 */ 'E', 'Q', 'V', 'r', '1', '6', 0,
  /* 4422 */ 'X', 'S', 'H', 'W', 'r', '1', '6', 0,
  /* 4430 */ 'L', 'Q', 'X', 'r', '1', '6', 0,
  /* 4437 */ 'S', 'T', 'Q', 'X', 'r', '1', '6', 0,
  /* 4445 */ 'M', 'P', 'Y', 'r', '1', '6', 0,
  /* 4452 */ 'B', 'R', 'H', 'Z', 'r', '1', '6', 0,
  /* 4460 */ 'B', 'R', 'H', 'N', 'Z', 'r', '1', '6', 0,
  /* 4469 */ 'G', 'B', 'v', '4', 'i', '3', '2', '_', 'r', '1', '6', 0,
  /* 4481 */ 'G', 'B', 'H', 'v', '8', 'i', '1', '6', '_', 'r', '1', '6', 0,
  /* 4494 */ 'F', 'S', 'M', 'H', 'v', '8', 'i', '1', '6', '_', 'r', '1', '6', 0,
  /* 4508 */ 'G', 'B', 'B', 'v', '1', '6', 'i', '8', '_', 'r', '1', '6', 0,
  /* 4521 */ 'F', 'S', 'M', 'B', 'v', '1', '6', 'i', '8', '_', 'r', '1', '6', 0,
  /* 4535 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'Y', 'I', 'r', '1', '2', '8', '_', 'z', 'e', 'x', 't', '_', 'r', '1', '6', 0,
  /* 4557 */ 'R', 'O', 'T', 'Q', 'B', 'Y', 'I', 'i', '1', '2', '8', 0,
  /* 4569 */ 'R', 'O', 'T', 'Q', 'B', 'Y', 'i', '1', '2', '8', 0,
  /* 4580 */ 'L', 'Q', 'A', 'r', '1', '2', '8', 0,
  /* 4588 */ 'S', 'T', 'Q', 'A', 'r', '1', '2', '8', 0,
  /* 4597 */ 'S', 'E', 'L', 'B', 'r', '1', '2', '8', 0,
  /* 4606 */ 'A', 'N', 'D', 'C', 'r', '1', '2', '8', 0,
  /* 4615 */ 'O', 'R', 'C', 'r', '1', '2', '8', 0,
  /* 4623 */ 'N', 'A', 'N', 'D', 'r', '1', '2', '8', 0,
  /* 4632 */ 'L', 'Q', 'D', 'r', '1', '2', '8', 0,
  /* 4640 */ 'S', 'T', 'Q', 'D', 'r', '1', '2', '8', 0,
  /* 4649 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'I', 'r', '1', '2', '8', 0,
  /* 4661 */ 'S', 'H', 'L', 'Q', 'B', 'I', 'r', '1', '2', '8', 0,
  /* 4672 */ 'R', 'O', 'T', 'Q', 'B', 'I', 'r', '1', '2', '8', 0,
  /* 4683 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'Y', 'B', 'I', 'r', '1', '2', '8', 0,
  /* 4697 */ 'S', 'H', 'L', 'Q', 'B', 'Y', 'B', 'I', 'r', '1', '2', '8', 0,
  /* 4710 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'I', 'I', 'r', '1', '2', '8', 0,
  /* 4723 */ 'R', 'O', 'T', 'Q', 'B', 'I', 'I', 'r', '1', '2', '8', 0,
  /* 4735 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'Y', 'I', 'r', '1', '2', '8', 0,
  /* 4748 */ 'S', 'H', 'L', 'Q', 'B', 'Y', 'I', 'r', '1', '2', '8', 0,
  /* 4760 */ 'L', 'R', 'r', '1', '2', '8', 0,
  /* 4767 */ 'N', 'O', 'R', 'r', '1', '2', '8', 0,
  /* 4775 */ 'X', 'O', 'R', 'r', '1', '2', '8', 0,
  /* 4783 */ 'E', 'Q', 'V', 'r', '1', '2', '8', 0,
  /* 4791 */ 'L', 'Q', 'X', 'r', '1', '2', '8', 0,
  /* 4799 */ 'S', 'T', 'Q', 'X', 'r', '1', '2', '8', 0,
  /* 4808 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'Y', 'r', '1', '2', '8', 0,
  /* 4820 */ 'S', 'H', 'L', 'Q', 'B', 'Y', 'r', '1', '2', '8', 0,
  /* 4831 */ 'L', 'Q', 'A', 'v', '1', '6', 'i', '8', 0,
  /* 4840 */ 'S', 'T', 'Q', 'A', 'v', '1', '6', 'i', '8', 0,
  /* 4850 */ 'G', 'B', 'B', 'v', '1', '6', 'i', '8', 0,
  /* 4859 */ 'S', 'H', 'U', 'F', 'B', 'v', '1', '6', 'i', '8', 0,
  /* 4870 */ 'S', 'E', 'L', 'B', 'v', '1', '6', 'i', '8', 0,
  /* 4880 */ 'F', 'S', 'M', 'B', 'v', '1', '6', 'i', '8', 0,
  /* 4890 */ 'C', 'E', 'Q', 'B', 'v', '1', '6', 'i', '8', 0,
  /* 4900 */ 'C', 'G', 'T', 'B', 'v', '1', '6', 'i', '8', 0,
  /* 4910 */ 'C', 'L', 'G', 'T', 'B', 'v', '1', '6', 'i', '8', 0,
  /* 4921 */ 'C', 'N', 'T', 'B', 'v', '1', '6', 'i', '8', 0,
  /* 4931 */ 'A', 'N', 'D', 'C', 'v', '1', '6', 'i', '8', 0,
  /* 4941 */ 'O', 'R', 'C', 'v', '1', '6', 'i', '8', 0,
  /* 4950 */ 'N', 'A', 'N', 'D', 'v', '1', '6', 'i', '8', 0,
  /* 4960 */ 'L', 'Q', 'D', 'v', '1', '6', 'i', '8', 0,
  /* 4969 */ 'S', 'T', 'Q', 'D', 'v', '1', '6', 'i', '8', 0,
  /* 4979 */ 'X', 'S', 'B', 'H', 'v', '1', '6', 'i', '8', 0,
  /* 4989 */ 'A', 'N', 'D', 'B', 'I', 'v', '1', '6', 'i', '8', 0,
  /* 5000 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'I', 'v', '1', '6', 'i', '8', 0,
  /* 5013 */ 'F', 'S', 'M', 'B', 'I', 'v', '1', '6', 'i', '8', 0,
  /* 5024 */ 'C', 'E', 'Q', 'B', 'I', 'v', '1', '6', 'i', '8', 0,
  /* 5035 */ 'S', 'H', 'L', 'Q', 'B', 'I', 'v', '1', '6', 'i', '8', 0,
  /* 5047 */ 'R', 'O', 'T', 'Q', 'B', 'I', 'v', '1', '6', 'i', '8', 0,
  /* 5059 */ 'X', 'O', 'R', 'B', 'I', 'v', '1', '6', 'i', '8', 0,
  /* 5070 */ 'C', 'G', 'T', 'B', 'I', 'v', '1', '6', 'i', '8', 0,
  /* 5081 */ 'C', 'L', 'G', 'T', 'B', 'I', 'v', '1', '6', 'i', '8', 0,
  /* 5093 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'Y', 'B', 'I', 'v', '1', '6', 'i', '8', 0,
  /* 5108 */ 'S', 'H', 'L', 'Q', 'B', 'Y', 'B', 'I', 'v', '1', '6', 'i', '8', 0,
  /* 5122 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'I', 'I', 'v', '1', '6', 'i', '8', 0,
  /* 5136 */ 'S', 'H', 'L', 'Q', 'B', 'I', 'I', 'v', '1', '6', 'i', '8', 0,
  /* 5149 */ 'R', 'O', 'T', 'Q', 'B', 'I', 'I', 'v', '1', '6', 'i', '8', 0,
  /* 5162 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'Y', 'I', 'v', '1', '6', 'i', '8', 0,
  /* 5176 */ 'S', 'H', 'L', 'Q', 'B', 'Y', 'I', 'v', '1', '6', 'i', '8', 0,
  /* 5189 */ 'R', 'O', 'T', 'Q', 'B', 'Y', 'I', 'v', '1', '6', 'i', '8', 0,
  /* 5202 */ 'L', 'R', 'v', '1', '6', 'i', '8', 0,
  /* 5210 */ 'N', 'O', 'R', 'v', '1', '6', 'i', '8', 0,
  /* 5219 */ 'X', 'O', 'R', 'v', '1', '6', 'i', '8', 0,
  /* 5228 */ 'E', 'Q', 'V', 'v', '1', '6', 'i', '8', 0,
  /* 5237 */ 'L', 'Q', 'X', 'v', '1', '6', 'i', '8', 0,
  /* 5246 */ 'S', 'T', 'Q', 'X', 'v', '1', '6', 'i', '8', 0,
  /* 5256 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'Y', 'v', '1', '6', 'i', '8', 0,
  /* 5269 */ 'S', 'H', 'L', 'Q', 'B', 'Y', 'v', '1', '6', 'i', '8', 0,
  /* 5281 */ 'R', 'O', 'T', 'Q', 'B', 'Y', 'v', '1', '6', 'i', '8', 0,
  /* 5293 */ 'R', 'O', 'T', 'I', 'v', '4', 'i', '3', '2', '_', 'i', '8', 0,
  /* 5306 */ 'R', 'O', 'T', 'I', 'r', '3', '2', '_', 'i', '8', 0,
  /* 5317 */ 'L', 'Q', 'A', 'r', '8', 0,
  /* 5323 */ 'S', 'T', 'Q', 'A', 'r', '8', 0,
  /* 5330 */ 'S', 'E', 'L', 'B', 'r', '8', 0,
  /* 5337 */ 'C', 'E', 'Q', 'B', 'r', '8', 0,
  /* 5344 */ 'C', 'G', 'T', 'B', 'r', '8', 0,
  /* 5351 */ 'C', 'L', 'G', 'T', 'B', 'r', '8', 0,
  /* 5359 */ 'A', 'N', 'D', 'C', 'r', '8', 0,
  /* 5366 */ 'O', 'R', 'C', 'r', '8', 0,
  /* 5372 */ 'N', 'A', 'N', 'D', 'r', '8', 0,
  /* 5379 */ 'L', 'Q', 'D', 'r', '8', 0,
  /* 5385 */ 'S', 'T', 'Q', 'D', 'r', '8', 0,
  /* 5392 */ 'X', 'S', 'B', 'H', 'r', '8', 0,
  /* 5399 */ 'I', 'L', 'H', 'r', '8', 0,
  /* 5405 */ 'A', 'N', 'D', 'B', 'I', 'r', '8', 0,
  /* 5413 */ 'C', 'E', 'Q', 'B', 'I', 'r', '8', 0,
  /* 5421 */ 'X', 'O', 'R', 'B', 'I', 'r', '8', 0,
  /* 5429 */ 'C', 'G', 'T', 'B', 'I', 'r', '8', 0,
  /* 5437 */ 'C', 'L', 'G', 'T', 'B', 'I', 'r', '8', 0,
  /* 5446 */ 'L', 'R', 'r', '8', 0,
  /* 5451 */ 'N', 'O', 'R', 'r', '8', 0,
  /* 5457 */ 'X', 'O', 'R', 'r', '8', 0,
  /* 5463 */ 'E', 'Q', 'V', 'r', '8', 0,
  /* 5469 */ 'L', 'Q', 'X', 'r', '8', 0,
  /* 5475 */ 'S', 'T', 'Q', 'X', 'r', '8', 0,
  /* 5482 */ 'R', 'O', 'T', 'Q', 'M', 'B', 'Y', 'I', 'r', '1', '2', '8', '_', 'z', 'e', 'x', 't', '_', 'r', '8', 0,
  /* 5503 */ 'H', 'B', 'R', 'A', 0,
  /* 5508 */ 'A', 'B', 'S', 'D', 'B', 0,
  /* 5514 */ 'A', 'V', 'G', 'B', 0,
  /* 5519 */ 'S', 'U', 'M', 'B', 0,
  /* 5524 */ 'B', 'I', 'S', 'L', 'E', 'D', '_', '0', 'D', 0,
  /* 5534 */ 'C', 'B', 'D', 0,
  /* 5538 */ 'C', 'D', 'D', 0,
  /* 5542 */ 'B', 'I', 'S', 'L', 'E', 'D', '_', 'E', 'D', 0,
  /* 5552 */ 'C', 'H', 'D', 0,
  /* 5556 */ 'C', 'W', 'D', 0,
  /* 5560 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 5573 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 5580 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 5590 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 5603 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 5618 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 5632 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 5646 */ 'B', 'I', 0,
  /* 5649 */ 'P', 'H', 'I', 0,
  /* 5653 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 5662 */ 'P', 'R', 'O', 'L', 'O', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 5675 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 5684 */ 'H', 'B', 'R', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 5694 */ 'K', 'I', 'L', 'L', 0,
  /* 5699 */ 'B', 'R', 'A', 'S', 'L', 0,
  /* 5705 */ 'B', 'I', 'S', 'L', 0,
  /* 5710 */ 'B', 'R', 'S', 'L', 0,
  /* 5715 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 5725 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 5742 */ 'E', 'N', 'O', 'P', 0,
  /* 5747 */ 'L', 'N', 'O', 'P', 0,
  /* 5752 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 5767 */ 'B', 'R', 0,
  /* 5770 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 5787 */ 'R', 'E', 'T', 0,
  /* 5791 */ 'C', 'B', 'X', 0,
  /* 5795 */ 'C', 'D', 'X', 0,
  /* 5799 */ 'C', 'H', 'X', 0,
  /* 5803 */ 'C', 'W', 'X', 0,
  /* 5807 */ 'C', 'O', 'P', 'Y', 0,
  /* 5812 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'a', 0,
  /* 5821 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'f', 'a', 0,
  /* 5831 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'd', 'f', 'a', 0,
  /* 5842 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'm', 'p', 'y', 'h', 'h', 'a', 0,
  /* 5856 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'f', 'm', 'a', 0,
  /* 5867 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'd', 'f', 'm', 'a', 0,
  /* 5879 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'd', 'f', 'n', 'm', 'a', 0,
  /* 5892 */ 'I', 'L', 'A', 'l', 's', 'a', 0,
  /* 5899 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'm', 'p', 'y', 'a', 0,
  /* 5911 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'c', 'e', 'q', 'b', 0,
  /* 5923 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'c', 'g', 't', 'b', 0,
  /* 5935 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'c', 'l', 'g', 't', 'b', 0,
  /* 5948 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'a', 'n', 'd', 'c', 0,
  /* 5960 */ 'M', 'P', 'Y', 'H', 'H', 'A', 'v', 'e', 'c', 0,
  /* 5970 */ 'F', 'E', 'S', 'D', 'v', 'e', 'c', 0,
  /* 5978 */ 'S', 'F', 'v', 'e', 'c', 0,
  /* 5984 */ 'S', 'F', 'H', 'v', 'e', 'c', 0,
  /* 5991 */ 'S', 'F', 'I', 'v', 'e', 'c', 0,
  /* 5998 */ 'A', 'H', 'I', 'v', 'e', 'c', 0,
  /* 6005 */ 'S', 'F', 'H', 'I', 'v', 'e', 'c', 0,
  /* 6013 */ 'M', 'P', 'Y', 'U', 'I', 'v', 'e', 'c', 0,
  /* 6022 */ 'M', 'P', 'Y', 'I', 'v', 'e', 'c', 0,
  /* 6030 */ 'M', 'P', 'Y', 'H', 'H', 'A', 'U', 'v', 'e', 'c', 0,
  /* 6041 */ 'B', 'G', 'X', 'v', 'e', 'c', 0,
  /* 6048 */ 'X', 'O', 'R', 'f', 'n', 'e', 'g', 'v', 'e', 'c', 0,
  /* 6059 */ 'A', 'N', 'D', 'f', 'a', 'b', 's', 'v', 'e', 'c', 0,
  /* 6070 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'o', 'r', 'c', 0,
  /* 6081 */ 'S', 'H', 'U', 'F', 'B', 'g', 'p', 'r', 'c', 0,
  /* 6091 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'a', 'n', 'd', 0,
  /* 6102 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'n', 'a', 'n', 'd', 0,
  /* 6114 */ 'S', 'E', 'L', 'B', 'v', '4', 'f', '3', '2', '_', 'c', 'o', 'n', 'd', 0,
  /* 6129 */ 'S', 'E', 'L', 'B', 'f', '3', '2', '_', 'c', 'o', 'n', 'd', 0,
  /* 6142 */ 'S', 'E', 'L', 'B', 'v', '4', 'i', '3', '2', '_', 'c', 'o', 'n', 'd', 0,
  /* 6157 */ 'S', 'E', 'L', 'B', 'r', '3', '2', '_', 'c', 'o', 'n', 'd', 0,
  /* 6170 */ 'S', 'E', 'L', 'B', 'f', '6', '4', '_', 'c', 'o', 'n', 'd', 0,
  /* 6183 */ 'S', 'E', 'L', 'B', 'v', '2', 'i', '6', '4', '_', 'c', 'o', 'n', 'd', 0,
  /* 6198 */ 'S', 'E', 'L', 'B', 'r', '6', '4', '_', 'c', 'o', 'n', 'd', 0,
  /* 6211 */ 'S', 'E', 'L', 'B', 'v', '8', 'i', '1', '6', '_', 'c', 'o', 'n', 'd', 0,
  /* 6226 */ 'S', 'E', 'L', 'B', 'r', '1', '6', '_', 'c', 'o', 'n', 'd', 0,
  /* 6239 */ 'S', 'E', 'L', 'B', 'v', '1', '6', 'i', '8', '_', 'c', 'o', 'n', 'd', 0,
  /* 6254 */ 'S', 'E', 'L', 'B', 'r', '8', '_', 'c', 'o', 'n', 'd', 0,
  /* 6266 */ 'S', 'E', 'L', 'B', 'v', '4', 'i', '3', '2', '_', 'v', 'c', 'o', 'n', 'd', 0,
  /* 6282 */ 'S', 'E', 'L', 'B', 'v', '2', 'i', '6', '4', '_', 'v', 'c', 'o', 'n', 'd', 0,
  /* 6298 */ 'S', 'E', 'L', 'B', 'v', '8', 'i', '1', '6', '_', 'v', 'c', 'o', 'n', 'd', 0,
  /* 6314 */ 'S', 'E', 'L', 'B', 'v', '1', '6', 'i', '8', '_', 'v', 'c', 'o', 'n', 'd', 0,
  /* 6330 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 's', 'f', 0,
  /* 6340 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'b', 'g', 0,
  /* 6350 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'c', 'g', 0,
  /* 6360 */ 'X', 'S', 'W', 'D', 'r', '6', '4', '_', 'i', 'n', 'r', 'e', 'g', 0,
  /* 6374 */ 'M', 'P', 'Y', 'A', 'r', '3', '2', '_', 's', 'e', 'x', 't', 'i', 'n', 'r', 'e', 'g', 0,
  /* 6392 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'a', 'h', 0,
  /* 6402 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 's', 'f', 'h', 0,
  /* 6413 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'm', 'p', 'y', 'h', 'h', 0,
  /* 6426 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'c', 'e', 'q', 'h', 0,
  /* 6438 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'c', 'g', 't', 'h', 0,
  /* 6450 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'c', 'l', 'g', 't', 'h', 0,
  /* 6463 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'm', 'p', 'y', 'h', 0,
  /* 6475 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'a', 'i', 0,
  /* 6485 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'a', 'n', 'd', 'b', 'i', 0,
  /* 6498 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'c', 'e', 'q', 'b', 'i', 0,
  /* 6511 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'o', 'r', 'b', 'i', 0,
  /* 6523 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'x', 'o', 'r', 'b', 'i', 0,
  /* 6536 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'c', 'g', 't', 'b', 'i', 0,
  /* 6549 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'c', 'l', 'g', 't', 'b', 'i', 0,
  /* 6563 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'a', 'n', 'd', 'i', 0,
  /* 6575 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 's', 'f', 'i', 0,
  /* 6586 */ 'I', 'L', 'A', 'h', 'i', 0,
  /* 6592 */ 'I', 'L', 'H', 'U', 'h', 'i', 0,
  /* 6599 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'a', 'h', 'i', 0,
  /* 6610 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'a', 'n', 'd', 'h', 'i', 0,
  /* 6623 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 's', 'f', 'h', 'i', 0,
  /* 6635 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'c', 'e', 'q', 'h', 'i', 0,
  /* 6648 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'o', 'r', 'h', 'i', 0,
  /* 6660 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'x', 'o', 'r', 'h', 'i', 0,
  /* 6673 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'c', 'g', 't', 'h', 'i', 0,
  /* 6686 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'c', 'l', 'g', 't', 'h', 'i', 0,
  /* 6700 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'c', 'e', 'q', 'i', 0,
  /* 6712 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'o', 'r', 'i', 0,
  /* 6723 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'x', 'o', 'r', 'i', 0,
  /* 6735 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'c', 'g', 't', 'i', 0,
  /* 6747 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'c', 'l', 'g', 't', 'i', 0,
  /* 6760 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'm', 'p', 'y', 'u', 'i', 0,
  /* 6773 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'm', 'p', 'y', 'i', 0,
  /* 6785 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'f', 'm', 0,
  /* 6795 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'd', 'f', 'm', 0,
  /* 6806 */ 'I', 'L', 'A', 'l', 'o', 0,
  /* 6812 */ 'I', 'O', 'H', 'L', 'l', 'o', 0,
  /* 6819 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'c', 'e', 'q', 0,
  /* 6830 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'f', 'c', 'e', 'q', 0,
  /* 6842 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'f', 'c', 'm', 'e', 'q', 0,
  /* 6855 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'o', 'r', 0,
  /* 6865 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'n', 'o', 'r', 0,
  /* 6876 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'x', 'o', 'r', 0,
  /* 6887 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'f', 's', 0,
  /* 6897 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'd', 'f', 's', 0,
  /* 6908 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'f', 'm', 's', 0,
  /* 6919 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'd', 'f', 'm', 's', 0,
  /* 6931 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'f', 'n', 'm', 's', 0,
  /* 6943 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'd', 'f', 'n', 'm', 's', 0,
  /* 6956 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'm', 'p', 'y', 's', 0,
  /* 6968 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'c', 'g', 't', 0,
  /* 6979 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'f', 'c', 'g', 't', 0,
  /* 6991 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'c', 'l', 'g', 't', 0,
  /* 7003 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'f', 'c', 'm', 'g', 't', 0,
  /* 7016 */ 'M', 'P', 'Y', 'A', 'r', '3', '2', '_', 's', 'e', 'x', 't', 0,
  /* 7029 */ 'R', 'O', 'T', 'r', '3', '2', '_', 'r', '1', '6', '_', 'a', 'n', 'y', 'e', 'x', 't', 0,
  /* 7047 */ 'R', 'O', 'T', 'r', '3', '2', '_', 'r', '8', '_', 'a', 'n', 'y', 'e', 'x', 't', 0,
  /* 7064 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'm', 'p', 'y', 'h', 'h', 'a', 'u', 0,
  /* 7079 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'm', 'p', 'y', 'h', 'h', 'u', 0,
  /* 7093 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'm', 'p', 'y', 'u', 0,
  /* 7105 */ 'A', 'N', 'D', 'C', 'v', '1', '6', 'i', '8', '_', 'c', 'o', 'n', 'v', 0,
  /* 7120 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'a', 'd', 'd', 'x', 0,
  /* 7132 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 's', 'f', 'x', 0,
  /* 7143 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'b', 'g', 'x', 0,
  /* 7154 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'c', 'g', 'x', 0,
  /* 7165 */ 'C', 'e', 'l', 'l', 'S', 'D', 'K', 'm', 'p', 'y', 0,
};

extern const unsigned SPUInstrNameIndices[] = {
    5649U, 5715U, 5662U, 5675U, 5653U, 5694U, 5603U, 5618U, 
    5590U, 5632U, 5770U, 5580U, 5560U, 5807U, 5573U, 5508U, 
    1983U, 3398U, 3109U, 1261U, 5725U, 5752U, 4257U, 5998U, 
    4184U, 3594U, 492U, 1720U, 195U, 844U, 5405U, 4989U, 
    4606U, 4142U, 1639U, 3227U, 5359U, 4931U, 7105U, 2815U, 
    770U, 3542U, 3471U, 4264U, 3782U, 1383U, 1404U, 1726U, 
    929U, 2204U, 3461U, 6059U, 1373U, 4624U, 4158U, 1655U, 
    3243U, 5373U, 4951U, 2835U, 790U, 3562U, 5514U, 1587U, 
    4833U, 684U, 6041U, 1683U, 3273U, 2873U, 818U, 5646U, 
    5705U, 0U, 5524U, 10U, 5542U, 5767U, 5504U, 5699U, 
    4460U, 4073U, 4452U, 4063U, 2020U, 1354U, 5710U, 2028U, 
    1364U, 5534U, 5791U, 5538U, 2658U, 5795U, 2734U, 5413U, 
    5024U, 5337U, 4890U, 4290U, 3804U, 4220U, 3651U, 1758U, 
    1000U, 1860U, 1137U, 656U, 391U, 664U, 401U, 5429U, 
    5070U, 5344U, 4900U, 4308U, 3826U, 4228U, 3661U, 504U, 
    1782U, 250U, 1020U, 1894U, 1182U, 1689U, 3279U, 2881U, 
    826U, 5552U, 5799U, 5437U, 5081U, 5351U, 4910U, 4317U, 
    3837U, 4236U, 3671U, 1798U, 1030U, 1908U, 1191U, 2013U, 
    1345U, 4921U, 760U, 3532U, 476U, 175U, 484U, 185U, 
    5556U, 469U, 5803U, 649U, 5812U, 7120U, 6392U, 6599U, 
    6475U, 6091U, 6485U, 5948U, 6610U, 6563U, 6340U, 7143U, 
    6819U, 5911U, 6498U, 6426U, 6635U, 6700U, 6350U, 6968U, 
    5923U, 6536U, 6438U, 6673U, 6735U, 7154U, 6991U, 5935U, 
    6549U, 6450U, 6686U, 6747U, 5831U, 6795U, 5867U, 6919U, 
    5879U, 6943U, 6897U, 5821U, 6830U, 6979U, 6842U, 7003U, 
    6785U, 5856U, 6908U, 6931U, 6887U, 7165U, 5899U, 6463U, 
    6413U, 5842U, 7064U, 7079U, 6773U, 6956U, 7093U, 6760U, 
    6102U, 6865U, 6855U, 6511U, 6070U, 6648U, 6712U, 6330U, 
    6402U, 6623U, 6575U, 7132U, 6876U, 6523U, 6660U, 6723U, 
    2725U, 2561U, 5742U, 4783U, 80U, 2274U, 2363U, 4415U, 
    71U, 2265U, 2354U, 1968U, 31U, 2225U, 2314U, 3383U, 
    51U, 2245U, 2334U, 5463U, 101U, 2295U, 2384U, 5228U, 
    90U, 2284U, 2373U, 3100U, 40U, 2234U, 2323U, 1242U, 
    20U, 2214U, 2303U, 3989U, 60U, 2254U, 2343U, 411U, 
    2615U, 2392U, 109U, 532U, 591U, 540U, 599U, 461U, 
    5970U, 498U, 229U, 424U, 2628U, 2400U, 117U, 576U, 
    2718U, 2552U, 318U, 526U, 2686U, 2520U, 286U, 2635U, 
    2409U, 583U, 327U, 2704U, 608U, 337U, 561U, 625U, 
    4110U, 1573U, 5013U, 2902U, 865U, 3705U, 4880U, 4521U, 
    3641U, 4494U, 4372U, 1845U, 1118U, 570U, 2712U, 2544U, 
    310U, 4850U, 4508U, 2151U, 3602U, 4481U, 2083U, 742U, 
    4469U, 2035U, 5503U, 5684U, 1766U, 1867U, 1790U, 1901U, 
    1807U, 1916U, 417U, 2621U, 6586U, 6806U, 5892U, 1592U, 
    3197U, 2766U, 682U, 617U, 6592U, 1952U, 3375U, 3090U, 
    1222U, 4213U, 5399U, 3632U, 520U, 2680U, 1839U, 3349U, 
    3056U, 1110U, 512U, 6812U, 1824U, 3046U, 1091U, 5747U, 
    431U, 2643U, 4580U, 4119U, 1608U, 3204U, 5317U, 4831U, 
    2419U, 2775U, 126U, 702U, 3492U, 446U, 2665U, 4632U, 
    4165U, 1662U, 3250U, 5379U, 4960U, 2449U, 2844U, 156U, 
    799U, 3571U, 634U, 2741U, 4791U, 4430U, 1998U, 3413U, 
    5469U, 5237U, 2572U, 3128U, 348U, 1280U, 3998U, 549U, 
    2692U, 4760U, 4379U, 1874U, 3355U, 5446U, 5202U, 2528U, 
    3064U, 294U, 1146U, 3963U, 1623U, 7016U, 6374U, 721U, 
    1931U, 6030U, 1582U, 5960U, 1942U, 1210U, 1703U, 3611U, 
    1712U, 834U, 4355U, 6022U, 4399U, 1172U, 4346U, 6013U, 
    4407U, 1960U, 1232U, 4445U, 4054U, 4623U, 4157U, 1654U, 
    3242U, 5372U, 4950U, 2834U, 789U, 3561U, 4767U, 4385U, 
    1880U, 3361U, 5451U, 5210U, 3072U, 1154U, 3971U, 5422U, 
    5060U, 4615U, 4150U, 1647U, 3235U, 5366U, 4941U, 2825U, 
    780U, 3552U, 3482U, 4300U, 3816U, 1394U, 1414U, 1775U, 
    1011U, 1299U, 555U, 2698U, 4768U, 4386U, 1881U, 3362U, 
    5452U, 5211U, 2536U, 3073U, 302U, 1155U, 3972U, 5787U, 
    4327U, 2138U, 3849U, 4336U, 3900U, 4363U, 3952U, 4245U, 
    2126U, 3682U, 1816U, 4098U, 5306U, 1041U, 4084U, 5293U, 
    4253U, 3769U, 4180U, 3590U, 1439U, 1469U, 1453U, 1423U, 
    1599U, 691U, 1749U, 989U, 1852U, 1127U, 4723U, 3326U, 
    5149U, 2993U, 966U, 3887U, 4672U, 3304U, 5047U, 2925U, 
    888U, 3728U, 2164U, 2065U, 2047U, 2096U, 4557U, 5189U, 
    3033U, 273U, 1078U, 3939U, 3184U, 4569U, 5281U, 2603U, 
    3172U, 379U, 1333U, 4042U, 4710U, 3314U, 5122U, 2966U, 
    939U, 3860U, 4649U, 3293U, 5000U, 2889U, 852U, 3692U, 
    4683U, 5093U, 2937U, 900U, 3740U, 4735U, 4535U, 2182U, 
    3439U, 5482U, 3337U, 5162U, 3006U, 1051U, 3912U, 4808U, 
    3428U, 5256U, 3147U, 1308U, 4017U, 1924U, 7029U, 7047U, 
    1201U, 6129U, 6170U, 4597U, 4134U, 6226U, 1631U, 6157U, 
    3219U, 6198U, 5330U, 6254U, 4870U, 6239U, 6314U, 2805U, 
    6183U, 6282U, 6114U, 750U, 6142U, 6266U, 3522U, 6211U, 
    6298U, 4273U, 6005U, 4198U, 5984U, 1734U, 5991U, 1991U, 
    3406U, 3119U, 1271U, 1677U, 5978U, 4281U, 3793U, 4205U, 
    2114U, 3622U, 1741U, 979U, 5136U, 2494U, 2980U, 237U, 
    953U, 3874U, 4661U, 5035U, 2468U, 2913U, 203U, 876U, 
    3716U, 4697U, 5108U, 2480U, 2952U, 215U, 915U, 3755U, 
    4748U, 5176U, 2507U, 3020U, 260U, 1065U, 3926U, 4820U, 
    5269U, 2591U, 3160U, 367U, 1321U, 4030U, 1832U, 1101U, 
    6081U, 4859U, 1558U, 2438U, 1513U, 2794U, 1528U, 145U, 
    1483U, 731U, 1498U, 3511U, 1543U, 438U, 2650U, 4588U, 
    4126U, 1615U, 3211U, 5323U, 4840U, 2428U, 2784U, 135U, 
    711U, 3501U, 453U, 2672U, 4640U, 4172U, 1669U, 3257U, 
    5385U, 4969U, 2458U, 2853U, 165U, 808U, 3580U, 641U, 
    2748U, 4799U, 4437U, 2005U, 3420U, 5475U, 5246U, 2581U, 
    3137U, 357U, 1289U, 4007U, 5519U, 5421U, 5059U, 4299U, 
    3815U, 1774U, 1010U, 672U, 2756U, 6048U, 4775U, 4392U, 
    1887U, 3368U, 5457U, 5219U, 3081U, 1163U, 3980U, 4190U, 
    1695U, 3285U, 5392U, 4979U, 4422U, 1975U, 3390U, 1251U, 
    3265U, 6360U, 2863U, 
};

static inline void InitSPUMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(SPUInsts, SPUInstrNameIndices, SPUInstrNameData, 755);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct SPUGenInstrInfo : public TargetInstrInfoImpl {
  explicit SPUGenInstrInfo(int SO = -1, int DO = -1);
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR
#undef GET_INSTRINFO_CTOR
namespace llvm {
extern const MCInstrDesc SPUInsts[];
extern const unsigned SPUInstrNameIndices[];
extern const char SPUInstrNameData[];
SPUGenInstrInfo::SPUGenInstrInfo(int SO, int DO)
  : TargetInstrInfoImpl(SO, DO) {
  InitMCInstrInfo(SPUInsts, SPUInstrNameIndices, SPUInstrNameData, 755);
}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR

