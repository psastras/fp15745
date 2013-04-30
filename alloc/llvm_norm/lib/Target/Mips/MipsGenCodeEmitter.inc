//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Machine Code Emitter
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

uint64_t MipsCodeEmitter::getBinaryCodeForInstr(const MachineInstr &MI) const {
  static const uint64_t InstBits[] = {
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(32),	// ADD
    UINT64_C(536870912),	// ADDi
    UINT64_C(603979776),	// ADDiu
    UINT64_C(33),	// ADDu
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(36),	// AND
    UINT64_C(36),	// AND64
    UINT64_C(805306368),	// ANDi
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(268435456),	// B
    UINT64_C(1157627904),	// BC1F
    UINT64_C(1157693440),	// BC1T
    UINT64_C(268435456),	// BEQ
    UINT64_C(268435456),	// BEQ64
    UINT64_C(67174400),	// BGEZ
    UINT64_C(67174400),	// BGEZ64
    UINT64_C(68222976),	// BGEZAL
    UINT64_C(469762048),	// BGTZ
    UINT64_C(469762048),	// BGTZ64
    UINT64_C(402653184),	// BLEZ
    UINT64_C(402653184),	// BLEZ64
    UINT64_C(67108864),	// BLTZ
    UINT64_C(67108864),	// BLTZ64
    UINT64_C(68157440),	// BLTZAL
    UINT64_C(335544320),	// BNE
    UINT64_C(335544320),	// BNE64
    UINT64_C(0),
    UINT64_C(1176502282),	// CEIL_L_D64
    UINT64_C(1174405130),	// CEIL_L_S
    UINT64_C(1176502286),	// CEIL_W_D32
    UINT64_C(1176502286),	// CEIL_W_D64
    UINT64_C(1174405134),	// CEIL_W_S
    UINT64_C(1145044992),	// CFC1
    UINT64_C(1879048225),	// CLO
    UINT64_C(1879048224),	// CLZ
    UINT64_C(0),
    UINT64_C(1153433600),	// CTC1
    UINT64_C(1174405153),	// CVT_D32_S
    UINT64_C(1182793761),	// CVT_D32_W
    UINT64_C(1184890913),	// CVT_D64_L
    UINT64_C(1174405153),	// CVT_D64_S
    UINT64_C(1182793761),	// CVT_D64_W
    UINT64_C(1176502309),	// CVT_L_D64
    UINT64_C(1174405157),	// CVT_L_S
    UINT64_C(1176502304),	// CVT_S_D32
    UINT64_C(1176502304),	// CVT_S_D64
    UINT64_C(1184890912),	// CVT_S_L
    UINT64_C(1182793760),	// CVT_S_W
    UINT64_C(1176502308),	// CVT_W_D32
    UINT64_C(1176502308),	// CVT_W_D64
    UINT64_C(1174405156),	// CVT_W_S
    UINT64_C(1677721600),	// DADDiu
    UINT64_C(45),	// DADDu
    UINT64_C(805306368),	// DANDi
    UINT64_C(1879048229),	// DCLO
    UINT64_C(1879048228),	// DCLZ
    UINT64_C(2080374787),	// DEXT
    UINT64_C(2080374791),	// DINS
    UINT64_C(1142947840),	// DMFC1
    UINT64_C(1151336448),	// DMTC1
    UINT64_C(28),	// DMULT
    UINT64_C(29),	// DMULTu
    UINT64_C(2097210),	// DROTR
    UINT64_C(86),	// DROTRV
    UINT64_C(2080374948),	// DSBH
    UINT64_C(30),	// DSDIV
    UINT64_C(2080375140),	// DSHD
    UINT64_C(56),	// DSLL
    UINT64_C(4026531840),	// DSLL64_32
    UINT64_C(20),	// DSLLV
    UINT64_C(59),	// DSRA
    UINT64_C(23),	// DSRAV
    UINT64_C(58),	// DSRL
    UINT64_C(22),	// DSRLV
    UINT64_C(47),	// DSUBu
    UINT64_C(31),	// DUDIV
    UINT64_C(603979776),	// DynAlloc
    UINT64_C(603979776),	// DynAlloc64
    UINT64_C(2080374784),	// EXT
    UINT64_C(0),
    UINT64_C(1176502277),	// FABS_D32
    UINT64_C(1176502277),	// FABS_D64
    UINT64_C(1174405125),	// FABS_S
    UINT64_C(1176502272),	// FADD_D32
    UINT64_C(1176502272),	// FADD_D64
    UINT64_C(1174405120),	// FADD_S
    UINT64_C(1176502320),	// FCMP_D32
    UINT64_C(1176502320),	// FCMP_D64
    UINT64_C(1174405168),	// FCMP_S32
    UINT64_C(1176502275),	// FDIV_D32
    UINT64_C(1176502275),	// FDIV_D64
    UINT64_C(1174405123),	// FDIV_S
    UINT64_C(1176502283),	// FLOOR_L_D64
    UINT64_C(1174405131),	// FLOOR_L_S
    UINT64_C(1176502287),	// FLOOR_W_D32
    UINT64_C(1176502287),	// FLOOR_W_D64
    UINT64_C(1174405135),	// FLOOR_W_S
    UINT64_C(1176502278),	// FMOV_D32
    UINT64_C(1176502278),	// FMOV_D64
    UINT64_C(1174405126),	// FMOV_S
    UINT64_C(1176502274),	// FMUL_D32
    UINT64_C(1176502274),	// FMUL_D64
    UINT64_C(1174405122),	// FMUL_S
    UINT64_C(1176502279),	// FNEG_D32
    UINT64_C(1176502279),	// FNEG_D64
    UINT64_C(1174405127),	// FNEG_S
    UINT64_C(1176502276),	// FSQRT_D32
    UINT64_C(1176502276),	// FSQRT_D64
    UINT64_C(1174405124),	// FSQRT_S
    UINT64_C(1176502273),	// FSUB_D32
    UINT64_C(1176502273),	// FSUB_D64
    UINT64_C(1174405121),	// FSUB_S
    UINT64_C(2080374788),	// INS
    UINT64_C(134217728),	// J
    UINT64_C(201326592),	// JAL
    UINT64_C(63497),	// JALR
    UINT64_C(63497),	// JALR64
    UINT64_C(8),	// JR
    UINT64_C(8),	// JR64
    UINT64_C(2147483648),	// LB
    UINT64_C(2147483648),	// LB64
    UINT64_C(2147483648),	// LB64_P8
    UINT64_C(2147483648),	// LB_P8
    UINT64_C(2415919104),	// LBu
    UINT64_C(2415919104),	// LBu64
    UINT64_C(2415919104),	// LBu64_P8
    UINT64_C(2415919104),	// LBu_P8
    UINT64_C(3690987520),	// LD
    UINT64_C(3556769792),	// LDC1
    UINT64_C(3556769792),	// LDC164
    UINT64_C(3556769792),	// LDC164_P8
    UINT64_C(1275068417),	// LDXC1
    UINT64_C(1275068417),	// LDXC164
    UINT64_C(1275068417),	// LDXC164_P8
    UINT64_C(3690987520),	// LD_P8
    UINT64_C(603979776),	// LEA_ADDiu
    UINT64_C(603979776),	// LEA_ADDiu64
    UINT64_C(2214592512),	// LH
    UINT64_C(2214592512),	// LH64
    UINT64_C(2214592512),	// LH64_P8
    UINT64_C(2214592512),	// LH_P8
    UINT64_C(2483027968),	// LHu
    UINT64_C(2483027968),	// LHu64
    UINT64_C(2483027968),	// LHu64_P8
    UINT64_C(2483027968),	// LHu_P8
    UINT64_C(3221225472),	// LL
    UINT64_C(3489660928),	// LLD
    UINT64_C(3489660928),	// LLD_P8
    UINT64_C(3221225472),	// LL_P8
    UINT64_C(1275068421),	// LUXC1
    UINT64_C(1275068421),	// LUXC1_P8
    UINT64_C(1006632960),	// LUi
    UINT64_C(1006632960),	// LUi64
    UINT64_C(2348810240),	// LW
    UINT64_C(2348810240),	// LW64
    UINT64_C(2348810240),	// LW64_P8
    UINT64_C(3288334336),	// LWC1
    UINT64_C(3288334336),	// LWC1_P8
    UINT64_C(2281701376),	// LWL
    UINT64_C(2281701376),	// LWL_P8
    UINT64_C(2550136832),	// LWR
    UINT64_C(2550136832),	// LWR_P8
    UINT64_C(1275068416),	// LWXC1
    UINT64_C(1275068416),	// LWXC1_P8
    UINT64_C(2348810240),	// LW_P8
    UINT64_C(2617245696),	// LWu64
    UINT64_C(2617245696),	// LWu64_P8
    UINT64_C(1879048192),	// MADD
    UINT64_C(1879048193),	// MADDU
    UINT64_C(1275068449),	// MADD_D32
    UINT64_C(1275068449),	// MADD_D64
    UINT64_C(1275068448),	// MADD_S
    UINT64_C(1140850688),	// MFC1
    UINT64_C(16),	// MFHI
    UINT64_C(16),	// MFHI64
    UINT64_C(18),	// MFLO
    UINT64_C(18),	// MFLO64
    UINT64_C(0),
    UINT64_C(1176502289),	// MOVF_D32
    UINT64_C(1176502289),	// MOVF_D64
    UINT64_C(1),	// MOVF_I
    UINT64_C(1),	// MOVF_I64
    UINT64_C(1174405137),	// MOVF_S
    UINT64_C(1176502291),	// MOVN_I64_D64
    UINT64_C(11),	// MOVN_I64_I
    UINT64_C(11),	// MOVN_I64_I64
    UINT64_C(1174405139),	// MOVN_I64_S
    UINT64_C(1176502291),	// MOVN_I_D32
    UINT64_C(1176502291),	// MOVN_I_D64
    UINT64_C(11),	// MOVN_I_I
    UINT64_C(11),	// MOVN_I_I64
    UINT64_C(1174405139),	// MOVN_I_S
    UINT64_C(1176567825),	// MOVT_D32
    UINT64_C(1176567825),	// MOVT_D64
    UINT64_C(65537),	// MOVT_I
    UINT64_C(65537),	// MOVT_I64
    UINT64_C(1174470673),	// MOVT_S
    UINT64_C(1176502290),	// MOVZ_I64_D64
    UINT64_C(10),	// MOVZ_I64_I
    UINT64_C(10),	// MOVZ_I64_I64
    UINT64_C(1174405138),	// MOVZ_I64_S
    UINT64_C(1176502290),	// MOVZ_I_D32
    UINT64_C(1176502290),	// MOVZ_I_D64
    UINT64_C(10),	// MOVZ_I_I
    UINT64_C(10),	// MOVZ_I_I64
    UINT64_C(1174405138),	// MOVZ_I_S
    UINT64_C(1879048196),	// MSUB
    UINT64_C(1879048197),	// MSUBU
    UINT64_C(1275068457),	// MSUB_D32
    UINT64_C(1275068457),	// MSUB_D64
    UINT64_C(1275068456),	// MSUB_S
    UINT64_C(1149239296),	// MTC1
    UINT64_C(17),	// MTHI
    UINT64_C(17),	// MTHI64
    UINT64_C(19),	// MTLO
    UINT64_C(19),	// MTLO64
    UINT64_C(1879048194),	// MUL
    UINT64_C(24),	// MULT
    UINT64_C(25),	// MULTu
    UINT64_C(1275068465),	// NMADD_D32
    UINT64_C(1275068465),	// NMADD_D64
    UINT64_C(1275068464),	// NMADD_S
    UINT64_C(1275068473),	// NMSUB_D32
    UINT64_C(1275068473),	// NMSUB_D64
    UINT64_C(1275068472),	// NMSUB_S
    UINT64_C(0),	// NOP
    UINT64_C(39),	// NOR
    UINT64_C(39),	// NOR64
    UINT64_C(37),	// OR
    UINT64_C(37),	// OR64
    UINT64_C(872415232),	// ORi
    UINT64_C(872415232),	// ORi64
    UINT64_C(2080374843),	// RDHWR
    UINT64_C(2080374843),	// RDHWR64
    UINT64_C(8),	// RET
    UINT64_C(2097154),	// ROTR
    UINT64_C(70),	// ROTRV
    UINT64_C(1176502280),	// ROUND_L_D64
    UINT64_C(1174405128),	// ROUND_L_S
    UINT64_C(1176502284),	// ROUND_W_D32
    UINT64_C(1176502284),	// ROUND_W_D64
    UINT64_C(1174405132),	// ROUND_W_S
    UINT64_C(2684354560),	// SB
    UINT64_C(2684354560),	// SB64
    UINT64_C(2684354560),	// SB64_P8
    UINT64_C(2684354560),	// SB_P8
    UINT64_C(3758096384),	// SC
    UINT64_C(4026531840),	// SCD
    UINT64_C(4026531840),	// SCD_P8
    UINT64_C(3758096384),	// SC_P8
    UINT64_C(4227858432),	// SD
    UINT64_C(4093640704),	// SDC1
    UINT64_C(4093640704),	// SDC164
    UINT64_C(4093640704),	// SDC164_P8
    UINT64_C(26),	// SDIV
    UINT64_C(1275068425),	// SDXC1
    UINT64_C(1275068425),	// SDXC164
    UINT64_C(1275068425),	// SDXC164_P8
    UINT64_C(4227858432),	// SD_P8
    UINT64_C(2080375840),	// SEB
    UINT64_C(2080375840),	// SEB64
    UINT64_C(2080376352),	// SEH
    UINT64_C(2080376352),	// SEH64
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(2751463424),	// SH
    UINT64_C(2751463424),	// SH64
    UINT64_C(2751463424),	// SH64_P8
    UINT64_C(2751463424),	// SH_P8
    UINT64_C(0),	// SLL
    UINT64_C(0),	// SLL64_32
    UINT64_C(0),	// SLL64_64
    UINT64_C(4),	// SLLV
    UINT64_C(42),	// SLT
    UINT64_C(42),	// SLT64
    UINT64_C(671088640),	// SLTi
    UINT64_C(671088640),	// SLTi64
    UINT64_C(738197504),	// SLTiu
    UINT64_C(738197504),	// SLTiu64
    UINT64_C(43),	// SLTu
    UINT64_C(43),	// SLTu64
    UINT64_C(3),	// SRA
    UINT64_C(7),	// SRAV
    UINT64_C(2),	// SRL
    UINT64_C(6),	// SRLV
    UINT64_C(34),	// SUB
    UINT64_C(35),	// SUBu
    UINT64_C(1275068429),	// SUXC1
    UINT64_C(1275068429),	// SUXC1_P8
    UINT64_C(2885681152),	// SW
    UINT64_C(2885681152),	// SW64
    UINT64_C(2885681152),	// SW64_P8
    UINT64_C(3825205248),	// SWC1
    UINT64_C(3825205248),	// SWC1_P8
    UINT64_C(2818572288),	// SWL
    UINT64_C(2818572288),	// SWL_P8
    UINT64_C(3087007744),	// SWR
    UINT64_C(3087007744),	// SWR_P8
    UINT64_C(1275068424),	// SWXC1
    UINT64_C(1275068424),	// SWXC1_P8
    UINT64_C(2885681152),	// SW_P8
    UINT64_C(15),	// SYNC
    UINT64_C(1176502281),	// TRUNC_L_D64
    UINT64_C(1174405129),	// TRUNC_L_S
    UINT64_C(1176502285),	// TRUNC_W_D32
    UINT64_C(1176502285),	// TRUNC_W_D64
    UINT64_C(1174405133),	// TRUNC_W_S
    UINT64_C(27),	// UDIV
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(2080374944),	// WSBH
    UINT64_C(38),	// XOR
    UINT64_C(38),	// XOR64
    UINT64_C(939524096),	// XORi
    UINT64_C(939524096),	// XORi64
    UINT64_C(0)
  };
  const unsigned opcode = MI.getOpcode();
  uint64_t Value = InstBits[opcode];
  uint64_t op = 0;
  (void)op;  // suppress warning
  switch (opcode) {
    case Mips::NOP: {
      break;
    }
    case Mips::J:
    case Mips::JAL: {
      // op: addr
      op = getJumpTargetOpValue(MI, 0);
      Value |= op & UINT64_C(67108863);
      break;
    }
    case Mips::LDXC1:
    case Mips::LDXC164:
    case Mips::LDXC164_P8:
    case Mips::LUXC1:
    case Mips::LUXC1_P8:
    case Mips::LWXC1:
    case Mips::LWXC1_P8: {
      // op: base
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(31)) << 21;
      // op: index
      op = getMachineOpValue(MI, MI.getOperand(2));
      Value |= (op & UINT64_C(31)) << 16;
      // op: fd
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 6;
      break;
    }
    case Mips::SDXC1:
    case Mips::SDXC164:
    case Mips::SDXC164_P8:
    case Mips::SUXC1:
    case Mips::SUXC1_P8:
    case Mips::SWXC1:
    case Mips::SWXC1_P8: {
      // op: base
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(31)) << 21;
      // op: index
      op = getMachineOpValue(MI, MI.getOperand(2));
      Value |= (op & UINT64_C(31)) << 16;
      // op: fs
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 11;
      break;
    }
    case Mips::MADD_D32:
    case Mips::MADD_D64:
    case Mips::MADD_S:
    case Mips::MSUB_D32:
    case Mips::MSUB_D64:
    case Mips::MSUB_S:
    case Mips::NMADD_D32:
    case Mips::NMADD_D64:
    case Mips::NMADD_S:
    case Mips::NMSUB_D32:
    case Mips::NMSUB_D64:
    case Mips::NMSUB_S: {
      // op: fd
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 6;
      // op: fr
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(31)) << 21;
      // op: fs
      op = getMachineOpValue(MI, MI.getOperand(2));
      Value |= (op & UINT64_C(31)) << 11;
      // op: ft
      op = getMachineOpValue(MI, MI.getOperand(3));
      Value |= (op & UINT64_C(31)) << 16;
      break;
    }
    case Mips::CEIL_L_D64:
    case Mips::CEIL_L_S:
    case Mips::CEIL_W_D32:
    case Mips::CEIL_W_D64:
    case Mips::CEIL_W_S:
    case Mips::CVT_D32_S:
    case Mips::CVT_D32_W:
    case Mips::CVT_D64_L:
    case Mips::CVT_D64_S:
    case Mips::CVT_D64_W:
    case Mips::CVT_L_D64:
    case Mips::CVT_L_S:
    case Mips::CVT_S_D32:
    case Mips::CVT_S_D64:
    case Mips::CVT_S_L:
    case Mips::CVT_S_W:
    case Mips::CVT_W_D32:
    case Mips::CVT_W_D64:
    case Mips::CVT_W_S:
    case Mips::FABS_D32:
    case Mips::FABS_D64:
    case Mips::FABS_S:
    case Mips::FLOOR_L_D64:
    case Mips::FLOOR_L_S:
    case Mips::FLOOR_W_D32:
    case Mips::FLOOR_W_D64:
    case Mips::FLOOR_W_S:
    case Mips::FMOV_D32:
    case Mips::FMOV_D64:
    case Mips::FMOV_S:
    case Mips::FNEG_D32:
    case Mips::FNEG_D64:
    case Mips::FNEG_S:
    case Mips::FSQRT_D32:
    case Mips::FSQRT_D64:
    case Mips::FSQRT_S:
    case Mips::MOVF_D32:
    case Mips::MOVF_D64:
    case Mips::MOVF_S:
    case Mips::MOVT_D32:
    case Mips::MOVT_D64:
    case Mips::MOVT_S:
    case Mips::ROUND_L_D64:
    case Mips::ROUND_L_S:
    case Mips::ROUND_W_D32:
    case Mips::ROUND_W_D64:
    case Mips::ROUND_W_S:
    case Mips::TRUNC_L_D64:
    case Mips::TRUNC_L_S:
    case Mips::TRUNC_W_D32:
    case Mips::TRUNC_W_D64:
    case Mips::TRUNC_W_S: {
      // op: fd
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 6;
      // op: fs
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(31)) << 11;
      break;
    }
    case Mips::FADD_D32:
    case Mips::FADD_D64:
    case Mips::FADD_S:
    case Mips::FDIV_D32:
    case Mips::FDIV_D64:
    case Mips::FDIV_S:
    case Mips::FMUL_D32:
    case Mips::FMUL_D64:
    case Mips::FMUL_S:
    case Mips::FSUB_D32:
    case Mips::FSUB_D64:
    case Mips::FSUB_S: {
      // op: fd
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 6;
      // op: fs
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(31)) << 11;
      // op: ft
      op = getMachineOpValue(MI, MI.getOperand(2));
      Value |= (op & UINT64_C(31)) << 16;
      break;
    }
    case Mips::MOVN_I64_D64:
    case Mips::MOVN_I64_S:
    case Mips::MOVN_I_D32:
    case Mips::MOVN_I_D64:
    case Mips::MOVN_I_S:
    case Mips::MOVZ_I64_D64:
    case Mips::MOVZ_I64_S:
    case Mips::MOVZ_I_D32:
    case Mips::MOVZ_I_D64:
    case Mips::MOVZ_I_S: {
      // op: fd
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 6;
      // op: fs
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(31)) << 11;
      // op: rt
      op = getMachineOpValue(MI, MI.getOperand(2));
      Value |= (op & UINT64_C(31)) << 16;
      break;
    }
    case Mips::FCMP_D32:
    case Mips::FCMP_D64:
    case Mips::FCMP_S32: {
      // op: fs
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 11;
      // op: ft
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(31)) << 16;
      // op: cc
      op = getMachineOpValue(MI, MI.getOperand(2));
      Value |= op & UINT64_C(15);
      break;
    }
    case Mips::CTC1:
    case Mips::DMTC1:
    case Mips::MTC1: {
      // op: fs
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 11;
      // op: rt
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(31)) << 16;
      break;
    }
    case Mips::CFC1:
    case Mips::DMFC1:
    case Mips::MFC1: {
      // op: fs
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(31)) << 11;
      // op: rt
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 16;
      break;
    }
    case Mips::LB64_P8:
    case Mips::LB_P8:
    case Mips::LBu64_P8:
    case Mips::LBu_P8:
    case Mips::LDC164_P8:
    case Mips::LD_P8:
    case Mips::LH64_P8:
    case Mips::LH_P8:
    case Mips::LHu64_P8:
    case Mips::LHu_P8:
    case Mips::LLD_P8:
    case Mips::LL_P8:
    case Mips::LW64_P8:
    case Mips::LWC1_P8:
    case Mips::LWL_P8:
    case Mips::LWR_P8:
    case Mips::LW_P8:
    case Mips::LWu64_P8:
    case Mips::SB64_P8:
    case Mips::SB_P8:
    case Mips::SDC164_P8:
    case Mips::SD_P8:
    case Mips::SH64_P8:
    case Mips::SH_P8:
    case Mips::SW64_P8:
    case Mips::SWC1_P8:
    case Mips::SWL_P8:
    case Mips::SWR_P8:
    case Mips::SW_P8: {
      // op: ft
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 16;
      // op: addr
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(2031616)) << 5;
      Value |= op & UINT64_C(65535);
      break;
    }
    case Mips::SCD_P8:
    case Mips::SC_P8: {
      // op: ft
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 16;
      // op: addr
      op = getMachineOpValue(MI, MI.getOperand(2));
      Value |= (op & UINT64_C(2031616)) << 5;
      Value |= op & UINT64_C(65535);
      break;
    }
    case Mips::DynAlloc:
    case Mips::DynAlloc64:
    case Mips::LB:
    case Mips::LB64:
    case Mips::LBu:
    case Mips::LBu64:
    case Mips::LD:
    case Mips::LDC1:
    case Mips::LDC164:
    case Mips::LEA_ADDiu:
    case Mips::LEA_ADDiu64:
    case Mips::LH:
    case Mips::LH64:
    case Mips::LHu:
    case Mips::LHu64:
    case Mips::LL:
    case Mips::LLD:
    case Mips::LW:
    case Mips::LW64:
    case Mips::LWC1:
    case Mips::LWL:
    case Mips::LWR:
    case Mips::LWu64:
    case Mips::SB:
    case Mips::SB64:
    case Mips::SD:
    case Mips::SDC1:
    case Mips::SDC164:
    case Mips::SH:
    case Mips::SH64:
    case Mips::SW:
    case Mips::SW64:
    case Mips::SWC1:
    case Mips::SWL:
    case Mips::SWR: {
      // op: ft
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 16;
      // op: addr
      op = getMemEncoding(MI, 1);
      Value |= (op & UINT64_C(2031616)) << 5;
      Value |= op & UINT64_C(65535);
      break;
    }
    case Mips::SC:
    case Mips::SCD: {
      // op: ft
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 16;
      // op: addr
      op = getMemEncoding(MI, 2);
      Value |= (op & UINT64_C(2031616)) << 5;
      Value |= op & UINT64_C(65535);
      break;
    }
    case Mips::B:
    case Mips::BC1F:
    case Mips::BC1T: {
      // op: imm16
      op = getBranchTargetOpValue(MI, 0);
      Value |= op & UINT64_C(65535);
      break;
    }
    case Mips::MFHI:
    case Mips::MFHI64:
    case Mips::MFLO:
    case Mips::MFLO64: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 11;
      break;
    }
    case Mips::DSLL64_32:
    case Mips::SLL64_32:
    case Mips::SLL64_64: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 11;
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 21;
      // op: rt
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(31)) << 16;
      // op: shamt
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(31)) << 6;
      break;
    }
    case Mips::MOVF_I:
    case Mips::MOVF_I64:
    case Mips::MOVT_I:
    case Mips::MOVT_I64: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 11;
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(31)) << 21;
      break;
    }
    case Mips::ADD:
    case Mips::ADDu:
    case Mips::AND:
    case Mips::AND64:
    case Mips::DADDu:
    case Mips::DROTRV:
    case Mips::DSLLV:
    case Mips::DSRAV:
    case Mips::DSRLV:
    case Mips::DSUBu:
    case Mips::MOVN_I64_I:
    case Mips::MOVN_I64_I64:
    case Mips::MOVN_I_I:
    case Mips::MOVN_I_I64:
    case Mips::MOVZ_I64_I:
    case Mips::MOVZ_I64_I64:
    case Mips::MOVZ_I_I:
    case Mips::MOVZ_I_I64:
    case Mips::MUL:
    case Mips::NOR:
    case Mips::NOR64:
    case Mips::OR:
    case Mips::OR64:
    case Mips::ROTRV:
    case Mips::SLLV:
    case Mips::SLT:
    case Mips::SLT64:
    case Mips::SLTu:
    case Mips::SLTu64:
    case Mips::SRAV:
    case Mips::SRLV:
    case Mips::SUB:
    case Mips::SUBu:
    case Mips::XOR:
    case Mips::XOR64: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 11;
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(31)) << 21;
      // op: rt
      op = getMachineOpValue(MI, MI.getOperand(2));
      Value |= (op & UINT64_C(31)) << 16;
      break;
    }
    case Mips::DSBH:
    case Mips::DSHD:
    case Mips::SEB:
    case Mips::SEB64:
    case Mips::SEH:
    case Mips::SEH64:
    case Mips::WSBH: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 11;
      // op: rt
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(31)) << 16;
      break;
    }
    case Mips::DROTR:
    case Mips::DSLL:
    case Mips::DSRA:
    case Mips::DSRL:
    case Mips::ROTR:
    case Mips::SLL:
    case Mips::SRA:
    case Mips::SRL: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 11;
      // op: rt
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(31)) << 16;
      // op: shamt
      op = getMachineOpValue(MI, MI.getOperand(2));
      Value |= (op & UINT64_C(31)) << 6;
      break;
    }
    case Mips::CLO:
    case Mips::CLZ:
    case Mips::DCLO:
    case Mips::DCLZ: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 16;
      Value |= (op & UINT64_C(31)) << 11;
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(31)) << 21;
      break;
    }
    case Mips::RDHWR:
    case Mips::RDHWR64: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(31)) << 11;
      // op: rt
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 16;
      break;
    }
    case Mips::JALR:
    case Mips::JALR64:
    case Mips::JR:
    case Mips::JR64:
    case Mips::MTHI:
    case Mips::MTHI64:
    case Mips::MTLO:
    case Mips::MTLO64:
    case Mips::RET: {
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 21;
      break;
    }
    case Mips::BGEZ:
    case Mips::BGEZ64:
    case Mips::BGEZAL:
    case Mips::BGTZ:
    case Mips::BGTZ64:
    case Mips::BLEZ:
    case Mips::BLEZ64:
    case Mips::BLTZ:
    case Mips::BLTZ64:
    case Mips::BLTZAL: {
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 21;
      // op: imm16
      op = getBranchTargetOpValue(MI, 1);
      Value |= op & UINT64_C(65535);
      break;
    }
    case Mips::DMULT:
    case Mips::DMULTu:
    case Mips::DSDIV:
    case Mips::DUDIV:
    case Mips::MADD:
    case Mips::MADDU:
    case Mips::MSUB:
    case Mips::MSUBU:
    case Mips::MULT:
    case Mips::MULTu:
    case Mips::SDIV:
    case Mips::UDIV: {
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 21;
      // op: rt
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(31)) << 16;
      break;
    }
    case Mips::BEQ:
    case Mips::BEQ64:
    case Mips::BNE:
    case Mips::BNE64: {
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 21;
      // op: rt
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(31)) << 16;
      // op: imm16
      op = getBranchTargetOpValue(MI, 2);
      Value |= op & UINT64_C(65535);
      break;
    }
    case Mips::DEXT:
    case Mips::EXT: {
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(31)) << 21;
      // op: rt
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 16;
      // op: pos
      op = getMachineOpValue(MI, MI.getOperand(2));
      Value |= (op & UINT64_C(31)) << 6;
      // op: sz
      op = getSizeExtEncoding(MI, 3);
      Value |= (op & UINT64_C(31)) << 11;
      break;
    }
    case Mips::DINS:
    case Mips::INS: {
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(31)) << 21;
      // op: rt
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 16;
      // op: pos
      op = getMachineOpValue(MI, MI.getOperand(2));
      Value |= (op & UINT64_C(31)) << 6;
      // op: sz
      op = getSizeInsEncoding(MI, 3);
      Value |= (op & UINT64_C(31)) << 11;
      break;
    }
    case Mips::LUi:
    case Mips::LUi64: {
      // op: rt
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 16;
      // op: imm16
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= op & UINT64_C(65535);
      break;
    }
    case Mips::ADDi:
    case Mips::ADDiu:
    case Mips::ANDi:
    case Mips::DADDiu:
    case Mips::DANDi:
    case Mips::ORi:
    case Mips::ORi64:
    case Mips::SLTi:
    case Mips::SLTi64:
    case Mips::SLTiu:
    case Mips::SLTiu64:
    case Mips::XORi:
    case Mips::XORi64: {
      // op: rt
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 16;
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(31)) << 21;
      // op: imm16
      op = getMachineOpValue(MI, MI.getOperand(2));
      Value |= op & UINT64_C(65535);
      break;
    }
    case Mips::SYNC: {
      // op: stype
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(31)) << 6;
      break;
    }
  default:
    std::string msg;
    raw_string_ostream Msg(msg);
    Msg << "Not supported instr: " << MI;
    report_fatal_error(Msg.str());
  }
  return Value;
}

