//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Assembly Matcher Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//


#ifdef GET_ASSEMBLER_HEADER
#undef GET_ASSEMBLER_HEADER
  // This should be included into the middle of the declaration of
  // your subclasses implementation of MCTargetAsmParser.
  unsigned ComputeAvailableFeatures(uint64_t FeatureBits) const;
  bool ConvertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                       const SmallVectorImpl<MCParsedAsmOperand*> &Operands);
  bool MnemonicIsValid(StringRef Mnemonic);
  unsigned MatchInstructionImpl(
    const SmallVectorImpl<MCParsedAsmOperand*> &Operands,
    MCInst &Inst, unsigned &ErrorInfo, unsigned VariantID = 0);

  enum OperandMatchResultTy {
    MatchOperand_Success,    // operand matched successfully
    MatchOperand_NoMatch,    // operand did not match
    MatchOperand_ParseFail   // operand matched but had errors
  };
  OperandMatchResultTy MatchOperandParserImpl(
    SmallVectorImpl<MCParsedAsmOperand*> &Operands,
    StringRef Mnemonic);
  OperandMatchResultTy tryCustomParseOperand(
    SmallVectorImpl<MCParsedAsmOperand*> &Operands,
    unsigned MCK);

#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag {
  Feature_HasV4T = (1 << 7),
  Feature_HasV5TE = (1 << 8),
  Feature_HasV6 = (1 << 9),
  Feature_HasV6T2 = (1 << 10),
  Feature_HasV7 = (1 << 11),
  Feature_HasVFP2 = (1 << 12),
  Feature_HasVFP3 = (1 << 13),
  Feature_HasVFP4 = (1 << 14),
  Feature_HasNEON = (1 << 4),
  Feature_HasFP16 = (1 << 2),
  Feature_HasDivide = (1 << 1),
  Feature_HasT2ExtractPack = (1 << 5),
  Feature_HasThumb2DSP = (1 << 6),
  Feature_HasDB = (1 << 0),
  Feature_HasMP = (1 << 3),
  Feature_IsThumb = (1 << 18),
  Feature_IsThumb2 = (1 << 19),
  Feature_IsMClass = (1 << 17),
  Feature_IsARClass = (1 << 15),
  Feature_IsARM = (1 << 16),
  Feature_None = 0
};

static unsigned MatchRegisterName(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 2:	 // 43 strings to match.
    switch (Name[0]) {
    default: break;
    case 'd':	 // 10 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 3;	 // "d0"
      case '1':	 // 1 string to match.
        return 4;	 // "d1"
      case '2':	 // 1 string to match.
        return 5;	 // "d2"
      case '3':	 // 1 string to match.
        return 6;	 // "d3"
      case '4':	 // 1 string to match.
        return 7;	 // "d4"
      case '5':	 // 1 string to match.
        return 8;	 // "d5"
      case '6':	 // 1 string to match.
        return 9;	 // "d6"
      case '7':	 // 1 string to match.
        return 10;	 // "d7"
      case '8':	 // 1 string to match.
        return 11;	 // "d8"
      case '9':	 // 1 string to match.
        return 12;	 // "d9"
      }
      break;
    case 'l':	 // 1 string to match.
      if (Name[1] != 'r')
        break;
      return 40;	 // "lr"
    case 'p':	 // 1 string to match.
      if (Name[1] != 'c')
        break;
      return 43;	 // "pc"
    case 'q':	 // 10 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 44;	 // "q0"
      case '1':	 // 1 string to match.
        return 45;	 // "q1"
      case '2':	 // 1 string to match.
        return 46;	 // "q2"
      case '3':	 // 1 string to match.
        return 47;	 // "q3"
      case '4':	 // 1 string to match.
        return 48;	 // "q4"
      case '5':	 // 1 string to match.
        return 49;	 // "q5"
      case '6':	 // 1 string to match.
        return 50;	 // "q6"
      case '7':	 // 1 string to match.
        return 51;	 // "q7"
      case '8':	 // 1 string to match.
        return 52;	 // "q8"
      case '9':	 // 1 string to match.
        return 53;	 // "q9"
      }
      break;
    case 'r':	 // 10 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 60;	 // "r0"
      case '1':	 // 1 string to match.
        return 61;	 // "r1"
      case '2':	 // 1 string to match.
        return 62;	 // "r2"
      case '3':	 // 1 string to match.
        return 63;	 // "r3"
      case '4':	 // 1 string to match.
        return 64;	 // "r4"
      case '5':	 // 1 string to match.
        return 65;	 // "r5"
      case '6':	 // 1 string to match.
        return 66;	 // "r6"
      case '7':	 // 1 string to match.
        return 67;	 // "r7"
      case '8':	 // 1 string to match.
        return 68;	 // "r8"
      case '9':	 // 1 string to match.
        return 69;	 // "r9"
      }
      break;
    case 's':	 // 11 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 73;	 // "s0"
      case '1':	 // 1 string to match.
        return 74;	 // "s1"
      case '2':	 // 1 string to match.
        return 75;	 // "s2"
      case '3':	 // 1 string to match.
        return 76;	 // "s3"
      case '4':	 // 1 string to match.
        return 77;	 // "s4"
      case '5':	 // 1 string to match.
        return 78;	 // "s5"
      case '6':	 // 1 string to match.
        return 79;	 // "s6"
      case '7':	 // 1 string to match.
        return 80;	 // "s7"
      case '8':	 // 1 string to match.
        return 81;	 // "s8"
      case '9':	 // 1 string to match.
        return 82;	 // "s9"
      case 'p':	 // 1 string to match.
        return 105;	 // "sp"
      }
      break;
    }
    break;
  case 3:	 // 53 strings to match.
    switch (Name[0]) {
    default: break;
    case 'd':	 // 22 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 13;	 // "d10"
        case '1':	 // 1 string to match.
          return 14;	 // "d11"
        case '2':	 // 1 string to match.
          return 15;	 // "d12"
        case '3':	 // 1 string to match.
          return 16;	 // "d13"
        case '4':	 // 1 string to match.
          return 17;	 // "d14"
        case '5':	 // 1 string to match.
          return 18;	 // "d15"
        case '6':	 // 1 string to match.
          return 19;	 // "d16"
        case '7':	 // 1 string to match.
          return 20;	 // "d17"
        case '8':	 // 1 string to match.
          return 21;	 // "d18"
        case '9':	 // 1 string to match.
          return 22;	 // "d19"
        }
        break;
      case '2':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 23;	 // "d20"
        case '1':	 // 1 string to match.
          return 24;	 // "d21"
        case '2':	 // 1 string to match.
          return 25;	 // "d22"
        case '3':	 // 1 string to match.
          return 26;	 // "d23"
        case '4':	 // 1 string to match.
          return 27;	 // "d24"
        case '5':	 // 1 string to match.
          return 28;	 // "d25"
        case '6':	 // 1 string to match.
          return 29;	 // "d26"
        case '7':	 // 1 string to match.
          return 30;	 // "d27"
        case '8':	 // 1 string to match.
          return 31;	 // "d28"
        case '9':	 // 1 string to match.
          return 32;	 // "d29"
        }
        break;
      case '3':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 33;	 // "d30"
        case '1':	 // 1 string to match.
          return 34;	 // "d31"
        }
        break;
      }
      break;
    case 'q':	 // 6 strings to match.
      if (Name[1] != '1')
        break;
      switch (Name[2]) {
      default: break;
      case '0':	 // 1 string to match.
        return 54;	 // "q10"
      case '1':	 // 1 string to match.
        return 55;	 // "q11"
      case '2':	 // 1 string to match.
        return 56;	 // "q12"
      case '3':	 // 1 string to match.
        return 57;	 // "q13"
      case '4':	 // 1 string to match.
        return 58;	 // "q14"
      case '5':	 // 1 string to match.
        return 59;	 // "q15"
      }
      break;
    case 'r':	 // 3 strings to match.
      if (Name[1] != '1')
        break;
      switch (Name[2]) {
      default: break;
      case '0':	 // 1 string to match.
        return 70;	 // "r10"
      case '1':	 // 1 string to match.
        return 71;	 // "r11"
      case '2':	 // 1 string to match.
        return 72;	 // "r12"
      }
      break;
    case 's':	 // 22 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 83;	 // "s10"
        case '1':	 // 1 string to match.
          return 84;	 // "s11"
        case '2':	 // 1 string to match.
          return 85;	 // "s12"
        case '3':	 // 1 string to match.
          return 86;	 // "s13"
        case '4':	 // 1 string to match.
          return 87;	 // "s14"
        case '5':	 // 1 string to match.
          return 88;	 // "s15"
        case '6':	 // 1 string to match.
          return 89;	 // "s16"
        case '7':	 // 1 string to match.
          return 90;	 // "s17"
        case '8':	 // 1 string to match.
          return 91;	 // "s18"
        case '9':	 // 1 string to match.
          return 92;	 // "s19"
        }
        break;
      case '2':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 93;	 // "s20"
        case '1':	 // 1 string to match.
          return 94;	 // "s21"
        case '2':	 // 1 string to match.
          return 95;	 // "s22"
        case '3':	 // 1 string to match.
          return 96;	 // "s23"
        case '4':	 // 1 string to match.
          return 97;	 // "s24"
        case '5':	 // 1 string to match.
          return 98;	 // "s25"
        case '6':	 // 1 string to match.
          return 99;	 // "s26"
        case '7':	 // 1 string to match.
          return 100;	 // "s27"
        case '8':	 // 1 string to match.
          return 101;	 // "s28"
        case '9':	 // 1 string to match.
          return 102;	 // "s29"
        }
        break;
      case '3':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 103;	 // "s30"
        case '1':	 // 1 string to match.
          return 104;	 // "s31"
        }
        break;
      }
      break;
    }
    break;
  case 4:	 // 3 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (Name.substr(1, 3) != "psr")
        break;
      return 1;	 // "apsr"
    case 'c':	 // 1 string to match.
      if (Name.substr(1, 3) != "psr")
        break;
      return 2;	 // "cpsr"
    case 's':	 // 1 string to match.
      if (Name.substr(1, 3) != "psr")
        break;
      return 106;	 // "spsr"
    }
    break;
  case 5:	 // 5 strings to match.
    switch (Name[0]) {
    default: break;
    case 'f':	 // 3 strings to match.
      if (Name[1] != 'p')
        break;
      switch (Name[2]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (Name.substr(3, 2) != "xc")
          break;
        return 35;	 // "fpexc"
      case 's':	 // 2 strings to match.
        switch (Name[3]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (Name[4] != 'r')
            break;
          return 36;	 // "fpscr"
        case 'i':	 // 1 string to match.
          if (Name[4] != 'd')
            break;
          return 38;	 // "fpsid"
        }
        break;
      }
      break;
    case 'm':	 // 2 strings to match.
      if (Name.substr(1, 3) != "vfr")
        break;
      switch (Name[4]) {
      default: break;
      case '0':	 // 1 string to match.
        return 41;	 // "mvfr0"
      case '1':	 // 1 string to match.
        return 42;	 // "mvfr1"
      }
      break;
    }
    break;
  case 7:	 // 1 string to match.
    if (Name.substr(0, 7) != "itstate")
      break;
    return 39;	 // "itstate"
  case 10:	 // 1 string to match.
    if (Name.substr(0, 10) != "fpscr_nzcv")
      break;
    return 37;	 // "fpscr_nzcv"
  }
  return 0;
}

#endif // GET_REGISTER_MATCHER


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

static void applyMnemonicAliases(StringRef &Mnemonic, unsigned Features) {
  switch (Mnemonic.size()) {
  default: break;
  case 3:	 // 3 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 'r':	 // 1 string to match.
      if (Mnemonic.substr(1, 2) != "fe")
        break;
      Mnemonic = "rfeia";	 // "rfe"
      return;
    case 's':	 // 2 strings to match.
      switch (Mnemonic[1]) {
      default: break;
      case 'r':	 // 1 string to match.
        if (Mnemonic[2] != 's')
          break;
        Mnemonic = "srsia";	 // "srs"
        return;
      case 'w':	 // 1 string to match.
        if (Mnemonic[2] != 'i')
          break;
        Mnemonic = "svc";	 // "swi"
        return;
      }
      break;
    }
    break;
  case 4:	 // 10 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 'f':	 // 8 strings to match.
      switch (Mnemonic[1]) {
      default: break;
      case 'l':	 // 2 strings to match.
        if (Mnemonic[2] != 'd')
          break;
        switch (Mnemonic[3]) {
        default: break;
        case 'd':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fldd"
            Mnemonic = "vldr";
          return;
        case 's':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "flds"
            Mnemonic = "vldr";
          return;
        }
        break;
      case 'm':	 // 4 strings to match.
        switch (Mnemonic[2]) {
        default: break;
        case 'r':	 // 2 strings to match.
          switch (Mnemonic[3]) {
          default: break;
          case 's':	 // 1 string to match.
            if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmrs"
              Mnemonic = "vmov";
            return;
          case 'x':	 // 1 string to match.
            if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmrx"
              Mnemonic = "vmrs";
            return;
          }
          break;
        case 's':	 // 1 string to match.
          if (Mnemonic[3] != 'r')
            break;
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmsr"
            Mnemonic = "vmov";
          return;
        case 'x':	 // 1 string to match.
          if (Mnemonic[3] != 'r')
            break;
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmxr"
            Mnemonic = "vmsr";
          return;
        }
        break;
      case 's':	 // 2 strings to match.
        if (Mnemonic[2] != 't')
          break;
        switch (Mnemonic[3]) {
        default: break;
        case 'd':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fstd"
            Mnemonic = "vstr";
          return;
        case 's':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fsts"
            Mnemonic = "vstr";
          return;
        }
        break;
      }
      break;
    case 'v':	 // 2 strings to match.
      switch (Mnemonic[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (Mnemonic.substr(2, 2) != "dm")
          break;
        Mnemonic = "vldmia";	 // "vldm"
        return;
      case 's':	 // 1 string to match.
        if (Mnemonic.substr(2, 2) != "tm")
          break;
        Mnemonic = "vstmia";	 // "vstm"
        return;
      }
      break;
    }
    break;
  case 5:	 // 51 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 'f':	 // 18 strings to match.
      switch (Mnemonic[1]) {
      default: break;
      case 'a':	 // 2 strings to match.
        if (Mnemonic.substr(2, 2) != "dd")
          break;
        switch (Mnemonic[4]) {
        default: break;
        case 'd':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "faddd"
            Mnemonic = "vadd.f64";
          return;
        case 's':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fadds"
            Mnemonic = "vadd.f32";
          return;
        }
        break;
      case 'c':	 // 4 strings to match.
        switch (Mnemonic[2]) {
        default: break;
        case 'm':	 // 2 strings to match.
          if (Mnemonic[3] != 'p')
            break;
          switch (Mnemonic[4]) {
          default: break;
          case 'd':	 // 1 string to match.
            if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fcmpd"
              Mnemonic = "vcmp.f64";
            return;
          case 's':	 // 1 string to match.
            if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fcmps"
              Mnemonic = "vcmp.f32";
            return;
          }
          break;
        case 'p':	 // 2 strings to match.
          if (Mnemonic[3] != 'y')
            break;
          switch (Mnemonic[4]) {
          default: break;
          case 'd':	 // 1 string to match.
            if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fcpyd"
              Mnemonic = "vmov.f64";
            return;
          case 's':	 // 1 string to match.
            if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fcpys"
              Mnemonic = "vmov.f32";
            return;
          }
          break;
        }
        break;
      case 'd':	 // 2 strings to match.
        if (Mnemonic.substr(2, 2) != "iv")
          break;
        switch (Mnemonic[4]) {
        default: break;
        case 'd':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fdivd"
            Mnemonic = "vdiv.f64";
          return;
        case 's':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fdivs"
            Mnemonic = "vdiv.f32";
          return;
        }
        break;
      case 'm':	 // 8 strings to match.
        switch (Mnemonic[2]) {
        default: break;
        case 'a':	 // 2 strings to match.
          if (Mnemonic[3] != 'c')
            break;
          switch (Mnemonic[4]) {
          default: break;
          case 'd':	 // 1 string to match.
            if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmacd"
              Mnemonic = "vmla.f64";
            return;
          case 's':	 // 1 string to match.
            if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmacs"
              Mnemonic = "vmla.f32";
            return;
          }
          break;
        case 'd':	 // 1 string to match.
          if (Mnemonic.substr(3, 2) != "rr")
            break;
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmdrr"
            Mnemonic = "vmov";
          return;
        case 'r':	 // 3 strings to match.
          switch (Mnemonic[3]) {
          default: break;
          case 'd':	 // 2 strings to match.
            switch (Mnemonic[4]) {
            default: break;
            case 'd':	 // 1 string to match.
              if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmrdd"
                Mnemonic = "vmov";
              return;
            case 's':	 // 1 string to match.
              if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmrds"
                Mnemonic = "vmov";
              return;
            }
            break;
          case 'r':	 // 1 string to match.
            if (Mnemonic[4] != 'd')
              break;
            if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmrrd"
              Mnemonic = "vmov";
            return;
          }
          break;
        case 'u':	 // 2 strings to match.
          if (Mnemonic[3] != 'l')
            break;
          switch (Mnemonic[4]) {
          default: break;
          case 'd':	 // 1 string to match.
            if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmuld"
              Mnemonic = "vmul.f64";
            return;
          case 's':	 // 1 string to match.
            if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmuls"
              Mnemonic = "vmul.f32";
            return;
          }
          break;
        }
        break;
      case 'n':	 // 2 strings to match.
        if (Mnemonic.substr(2, 2) != "eg")
          break;
        switch (Mnemonic[4]) {
        default: break;
        case 'd':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fnegd"
            Mnemonic = "vneg.f64";
          return;
        case 's':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fnegs"
            Mnemonic = "vneg.f32";
          return;
        }
        break;
      }
      break;
    case 'l':	 // 3 strings to match.
      if (Mnemonic.substr(1, 2) != "dm")
        break;
      switch (Mnemonic[3]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (Mnemonic[4] != 'a')
          break;
        Mnemonic = "ldmdb";	 // "ldmea"
        return;
      case 'f':	 // 1 string to match.
        if (Mnemonic[4] != 'd')
          break;
        Mnemonic = "ldm";	 // "ldmfd"
        return;
      case 'i':	 // 1 string to match.
        if (Mnemonic[4] != 'a')
          break;
        Mnemonic = "ldm";	 // "ldmia"
        return;
      }
      break;
    case 'r':	 // 4 strings to match.
      if (Mnemonic.substr(1, 2) != "fe")
        break;
      switch (Mnemonic[3]) {
      default: break;
      case 'e':	 // 2 strings to match.
        switch (Mnemonic[4]) {
        default: break;
        case 'a':	 // 1 string to match.
          Mnemonic = "rfedb";	 // "rfeea"
          return;
        case 'd':	 // 1 string to match.
          Mnemonic = "rfeib";	 // "rfeed"
          return;
        }
        break;
      case 'f':	 // 2 strings to match.
        switch (Mnemonic[4]) {
        default: break;
        case 'a':	 // 1 string to match.
          Mnemonic = "rfeda";	 // "rfefa"
          return;
        case 'd':	 // 1 string to match.
          Mnemonic = "rfeia";	 // "rfefd"
          return;
        }
        break;
      }
      break;
    case 's':	 // 7 strings to match.
      switch (Mnemonic[1]) {
      default: break;
      case 'r':	 // 4 strings to match.
        if (Mnemonic[2] != 's')
          break;
        switch (Mnemonic[3]) {
        default: break;
        case 'e':	 // 2 strings to match.
          switch (Mnemonic[4]) {
          default: break;
          case 'a':	 // 1 string to match.
            Mnemonic = "srsdb";	 // "srsea"
            return;
          case 'd':	 // 1 string to match.
            Mnemonic = "srsib";	 // "srsed"
            return;
          }
          break;
        case 'f':	 // 2 strings to match.
          switch (Mnemonic[4]) {
          default: break;
          case 'a':	 // 1 string to match.
            Mnemonic = "srsda";	 // "srsfa"
            return;
          case 'd':	 // 1 string to match.
            Mnemonic = "srsia";	 // "srsfd"
            return;
          }
          break;
        }
        break;
      case 't':	 // 3 strings to match.
        if (Mnemonic[2] != 'm')
          break;
        switch (Mnemonic[3]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (Mnemonic[4] != 'a')
            break;
          Mnemonic = "stm";	 // "stmea"
          return;
        case 'f':	 // 1 string to match.
          if (Mnemonic[4] != 'd')
            break;
          Mnemonic = "stmdb";	 // "stmfd"
          return;
        case 'i':	 // 1 string to match.
          if (Mnemonic[4] != 'a')
            break;
          Mnemonic = "stm";	 // "stmia"
          return;
        }
        break;
      }
      break;
    case 'v':	 // 19 strings to match.
      switch (Mnemonic[1]) {
      default: break;
      case 'a':	 // 3 strings to match.
        switch (Mnemonic[2]) {
        default: break;
        case 'b':	 // 1 string to match.
          if (Mnemonic.substr(3, 2) != "sq")
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vabsq"
            Mnemonic = "vabs";
          return;
        case 'd':	 // 1 string to match.
          if (Mnemonic.substr(3, 2) != "dq")
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vaddq"
            Mnemonic = "vadd";
          return;
        case 'n':	 // 1 string to match.
          if (Mnemonic.substr(3, 2) != "dq")
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vandq"
            Mnemonic = "vand";
          return;
        }
        break;
      case 'b':	 // 1 string to match.
        if (Mnemonic.substr(2, 3) != "icq")
          break;
        if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vbicq"
          Mnemonic = "vbic";
        return;
      case 'c':	 // 3 strings to match.
        switch (Mnemonic[2]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (Mnemonic.substr(3, 2) != "qq")
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vceqq"
            Mnemonic = "vceq";
          return;
        case 'l':	 // 1 string to match.
          if (Mnemonic.substr(3, 2) != "eq")
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vcleq"
            Mnemonic = "vcle";
          return;
        case 'v':	 // 1 string to match.
          if (Mnemonic.substr(3, 2) != "tq")
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vcvtq"
            Mnemonic = "vcvt";
          return;
        }
        break;
      case 'e':	 // 1 string to match.
        if (Mnemonic.substr(2, 3) != "orq")
          break;
        if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "veorq"
          Mnemonic = "veor";
        return;
      case 'm':	 // 5 strings to match.
        switch (Mnemonic[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Mnemonic.substr(3, 2) != "xq")
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vmaxq"
            Mnemonic = "vmax";
          return;
        case 'i':	 // 1 string to match.
          if (Mnemonic.substr(3, 2) != "nq")
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vminq"
            Mnemonic = "vmin";
          return;
        case 'o':	 // 1 string to match.
          if (Mnemonic.substr(3, 2) != "vq")
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vmovq"
            Mnemonic = "vmov";
          return;
        case 'u':	 // 1 string to match.
          if (Mnemonic.substr(3, 2) != "lq")
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vmulq"
            Mnemonic = "vmul";
          return;
        case 'v':	 // 1 string to match.
          if (Mnemonic.substr(3, 2) != "nq")
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vmvnq"
            Mnemonic = "vmvn";
          return;
        }
        break;
      case 'o':	 // 1 string to match.
        if (Mnemonic.substr(2, 3) != "rrq")
          break;
        if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vorrq"
          Mnemonic = "vorr";
        return;
      case 's':	 // 4 strings to match.
        switch (Mnemonic[2]) {
        default: break;
        case 'h':	 // 2 strings to match.
          switch (Mnemonic[3]) {
          default: break;
          case 'l':	 // 1 string to match.
            if (Mnemonic[4] != 'q')
              break;
            if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vshlq"
              Mnemonic = "vshl";
            return;
          case 'r':	 // 1 string to match.
            if (Mnemonic[4] != 'q')
              break;
            if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vshrq"
              Mnemonic = "vshr";
            return;
          }
          break;
        case 'u':	 // 1 string to match.
          if (Mnemonic.substr(3, 2) != "bq")
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vsubq"
            Mnemonic = "vsub";
          return;
        case 'w':	 // 1 string to match.
          if (Mnemonic.substr(3, 2) != "pq")
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vswpq"
            Mnemonic = "vswp";
          return;
        }
        break;
      case 'z':	 // 1 string to match.
        if (Mnemonic.substr(2, 3) != "ipq")
          break;
        if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vzipq"
          Mnemonic = "vzip";
        return;
      }
      break;
    }
    break;
  case 6:	 // 10 strings to match.
    if (Mnemonic[0] != 'f')
      break;
    switch (Mnemonic[1]) {
    default: break;
    case 's':	 // 4 strings to match.
      switch (Mnemonic[2]) {
      default: break;
      case 'i':	 // 2 strings to match.
        if (Mnemonic.substr(3, 2) != "to")
          break;
        switch (Mnemonic[5]) {
        default: break;
        case 'd':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fsitod"
            Mnemonic = "vcvt.f64.s32";
          return;
        case 's':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fsitos"
            Mnemonic = "vcvt.f32.s32";
          return;
        }
        break;
      case 'q':	 // 2 strings to match.
        if (Mnemonic.substr(3, 2) != "rt")
          break;
        switch (Mnemonic[5]) {
        default: break;
        case 'd':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fsqrtd"
            Mnemonic = "vsqrt";
          return;
        case 's':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fsqrts"
            Mnemonic = "vsqrt";
          return;
        }
        break;
      }
      break;
    case 't':	 // 4 strings to match.
      if (Mnemonic[2] != 'o')
        break;
      switch (Mnemonic[3]) {
      default: break;
      case 's':	 // 2 strings to match.
        if (Mnemonic[4] != 'i')
          break;
        switch (Mnemonic[5]) {
        default: break;
        case 'd':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "ftosid"
            Mnemonic = "vcvtr.s32.f64";
          return;
        case 's':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "ftosis"
            Mnemonic = "vcvtr.s32.f32";
          return;
        }
        break;
      case 'u':	 // 2 strings to match.
        if (Mnemonic[4] != 'i')
          break;
        switch (Mnemonic[5]) {
        default: break;
        case 'd':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "ftouid"
            Mnemonic = "vcvtr.u32.f64";
          return;
        case 's':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "ftouis"
            Mnemonic = "vcvtr.u32.f32";
          return;
        }
        break;
      }
      break;
    case 'u':	 // 2 strings to match.
      if (Mnemonic.substr(2, 3) != "ito")
        break;
      switch (Mnemonic[5]) {
      default: break;
      case 'd':	 // 1 string to match.
        if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fuitod"
          Mnemonic = "vcvt.f64.u32";
        return;
      case 's':	 // 1 string to match.
        if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fuitos"
          Mnemonic = "vcvt.f32.u32";
        return;
      }
      break;
    }
    break;
  case 7:	 // 4 strings to match.
    if (Mnemonic.substr(0, 3) != "fto")
      break;
    switch (Mnemonic[3]) {
    default: break;
    case 's':	 // 2 strings to match.
      if (Mnemonic.substr(4, 2) != "iz")
        break;
      switch (Mnemonic[6]) {
      default: break;
      case 'd':	 // 1 string to match.
        if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "ftosizd"
          Mnemonic = "vcvt.s32.f64";
        return;
      case 's':	 // 1 string to match.
        if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "ftosizs"
          Mnemonic = "vcvt.s32.f32";
        return;
      }
      break;
    case 'u':	 // 2 strings to match.
      if (Mnemonic.substr(4, 2) != "iz")
        break;
      switch (Mnemonic[6]) {
      default: break;
      case 'd':	 // 1 string to match.
        if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "ftouizd"
          Mnemonic = "vcvt.u32.f64";
        return;
      case 's':	 // 1 string to match.
        if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "ftouizs"
          Mnemonic = "vcvt.u32.f32";
        return;
      }
      break;
    }
    break;
  case 8:	 // 5 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 'q':	 // 1 string to match.
      if (Mnemonic.substr(1, 7) != "subaddx")
        break;
      Mnemonic = "qsax";	 // "qsubaddx"
      return;
    case 's':	 // 2 strings to match.
      switch (Mnemonic[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (Mnemonic.substr(2, 6) != "ddsubx")
          break;
        Mnemonic = "sasx";	 // "saddsubx"
        return;
      case 's':	 // 1 string to match.
        if (Mnemonic.substr(2, 6) != "ubaddx")
          break;
        Mnemonic = "ssax";	 // "ssubaddx"
        return;
      }
      break;
    case 'u':	 // 2 strings to match.
      switch (Mnemonic[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (Mnemonic.substr(2, 6) != "ddsubx")
          break;
        Mnemonic = "uasx";	 // "uaddsubx"
        return;
      case 's':	 // 1 string to match.
        if (Mnemonic.substr(2, 6) != "ubaddx")
          break;
        Mnemonic = "usax";	 // "usubaddx"
        return;
      }
      break;
    }
    break;
  case 9:	 // 8 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 's':	 // 2 strings to match.
      if (Mnemonic[1] != 'h')
        break;
      switch (Mnemonic[2]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (Mnemonic.substr(3, 6) != "ddsubx")
          break;
        Mnemonic = "shasx";	 // "shaddsubx"
        return;
      case 's':	 // 1 string to match.
        if (Mnemonic.substr(3, 6) != "ubaddx")
          break;
        Mnemonic = "shsax";	 // "shsubaddx"
        return;
      }
      break;
    case 'u':	 // 4 strings to match.
      switch (Mnemonic[1]) {
      default: break;
      case 'h':	 // 2 strings to match.
        switch (Mnemonic[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Mnemonic.substr(3, 6) != "ddsubx")
            break;
          Mnemonic = "uhasx";	 // "uhaddsubx"
          return;
        case 's':	 // 1 string to match.
          if (Mnemonic.substr(3, 6) != "ubaddx")
            break;
          Mnemonic = "uhsax";	 // "uhsubaddx"
          return;
        }
        break;
      case 'q':	 // 2 strings to match.
        switch (Mnemonic[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Mnemonic.substr(3, 6) != "ddsubx")
            break;
          Mnemonic = "uqasx";	 // "uqaddsubx"
          return;
        case 's':	 // 1 string to match.
          if (Mnemonic.substr(3, 6) != "ubaddx")
            break;
          Mnemonic = "uqsax";	 // "uqsubaddx"
          return;
        }
        break;
      }
      break;
    case 'v':	 // 2 strings to match.
      if (Mnemonic.substr(1, 6) != "movq.f")
        break;
      switch (Mnemonic[7]) {
      default: break;
      case '3':	 // 1 string to match.
        if (Mnemonic[8] != '2')
          break;
        if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vmovq.f32"
          Mnemonic = "vmov.f32";
        return;
      case '6':	 // 1 string to match.
        if (Mnemonic[8] != '4')
          break;
        if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vmovq.f64"
          Mnemonic = "vmov.f64";
        return;
      }
      break;
    }
    break;
  case 11:	 // 2 strings to match.
    if (Mnemonic.substr(0, 8) != "vrecpeq.")
      break;
    switch (Mnemonic[8]) {
    default: break;
    case 'f':	 // 1 string to match.
      if (Mnemonic.substr(9, 2) != "32")
        break;
      if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vrecpeq.f32"
        Mnemonic = "vrecpe.f32";
      return;
    case 'u':	 // 1 string to match.
      if (Mnemonic.substr(9, 2) != "32")
        break;
      if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vrecpeq.u32"
        Mnemonic = "vrecpe.u32";
      return;
    }
    break;
  }
}

// Unified function for converting operands to MCInst instances.

enum ConversionKind {
  Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1,
  Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__Reg1_4__RegShiftedImm2_5__CondCode2_1__CCOut1_0,
  Convert__Reg1_1__Tie0__Reg1_2__CondCode2_0,
  Convert__Reg1_1__Tie0__Imm0_508s41_2__CondCode2_0,
  Convert__regSP__Tie0__Imm0_508s4Neg1_2__CondCode2_0,
  Convert__Reg1_1__Reg1_1__Imm0_40951_2__CondCode2_0,
  Convert__Reg1_1__Reg1_1__Imm0_4095Neg1_2__CondCode2_0,
  Convert__Reg1_2__CCOut1_0__Tie0__Imm0_2551_3__CondCode2_1,
  Convert__Reg1_2__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_2__T2SOImmNeg1_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_2__ARMSOImmNeg1_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_1__Reg1_2__Imm0_1020s41_3__CondCode2_0,
  Convert__Reg1_1__Imm0_40951_3__CondCode2_0,
  Convert__regSP__Tie0__Imm0_508s41_3__CondCode2_0,
  Convert__regSP__Tie0__Imm0_508s4Neg1_3__CondCode2_0,
  Convert__Reg1_1__Reg1_2__Imm0_40951_3__CondCode2_0,
  Convert__Reg1_1__Reg1_2__Imm0_4095Neg1_3__CondCode2_0,
  Convert__Reg1_2__CCOut1_0__Reg1_3__Reg1_4__CondCode2_1,
  Convert__Reg1_2__CCOut1_0__Reg1_3__Imm0_71_4__CondCode2_1,
  Convert__Reg1_2__Reg1_3__T2SOImmNeg1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_3__ARMSOImmNeg1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__Reg1_4__T2SOImm1_5__CondCode2_1__CCOut1_0,
  Convert__Reg1_1__Imm1_2__CondCode2_0,
  Convert__Reg1_2__Imm1_3__CondCode2_0,
  Convert__Reg1_2__Reg1_2__ARMSOImmNot1_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_3__ARMSOImmNot1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__CCOut1_0__Reg1_2__ImmThumbSR1_3__CondCode2_1,
  Convert__Reg1_2__Reg1_2__ImmThumbSR1_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_2__Imm0_321_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__Reg1_3__ImmThumbSR1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__CCOut1_0__Reg1_3__ImmThumbSR1_4__CondCode2_1,
  Convert__Reg1_2__Reg1_3__ImmThumbSR1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_3__Imm0_321_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__Reg1_4__ImmThumbSR1_5__CondCode2_1__CCOut1_0,
  Convert__Imm1_1__CondCode2_0,
  Convert__Imm1_2__CondCode2_0,
  Convert__Reg1_1__Tie0__Bitfield1_2__CondCode2_0,
  Convert__Reg1_1__Tie0__Reg1_2__Bitfield1_3__CondCode2_0,
  Convert__Imm0_2551_0,
  Convert__Imm0_655351_1__CondCode2_0,
  Convert__Imm1_0,
  Convert__CondCode2_0__Imm1_1,
  Convert__Reg1_0,
  Convert__Reg1_1__CondCode2_0,
  Convert__CondCode2_0__Reg1_1,
  Convert__CondCode2_0,
  Convert__Reg1_0__Imm1_1,
  Convert__CoprocNum1_0__Imm0_151_1__CoprocReg1_2__CoprocReg1_3__CoprocReg1_4__Imm0_71_5,
  Convert__CoprocNum1_1__Imm0_151_2__CoprocReg1_3__CoprocReg1_4__CoprocReg1_5__Imm0_71_6__CondCode2_0,
  Convert,
  Convert__Reg1_1__Reg1_2__CondCode2_0,
  Convert__Reg1_1__ARMSOImmNeg1_2__CondCode2_0,
  Convert__Reg1_1__T2SOImmNeg1_2__CondCode2_0,
  Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0,
  Convert__Reg1_1__RegShiftedReg3_2__CondCode2_0,
  Convert__Reg1_1__T2SOImm1_2__CondCode2_0,
  Convert__Reg1_1__ARMSOImm1_2__CondCode2_0,
  Convert__Reg1_2__Reg1_3__CondCode2_0,
  Convert__Reg1_2__RegShiftedImm2_3__CondCode2_0,
  Convert__Reg1_2__T2SOImm1_3__CondCode2_0,
  Convert__Reg1_1__Imm0_2551_2__CondCode2_0,
  Convert__Imm0_311_0,
  Convert__Imm1_0__imm0,
  Convert__Imm1_0__ProcIFlags1_1,
  Convert__Imm1_0__ProcIFlags1_2,
  Convert__Imm1_0__ProcIFlags1_1__Imm0_311_2,
  Convert__Imm1_0__ProcIFlags1_2__Imm1_3,
  Convert__Imm0_151_1__CondCode2_0,
  Convert__imm15,
  Convert__MemBarrierOpt1_0,
  Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0,
  Convert__Reg1_1__Tie0__Reg1_2__imm1__CondCode2_0,
  Convert__Reg1_1__Tie0__Reg1_2__imm0__CondCode2_0,
  Convert__ITCondCode1_1__ITMask1_0,
  Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0,
  Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0,
  Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0,
  Convert__CoprocNum1_0__CoprocReg1_1__AddrMode52_2,
  Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__CoprocOption1_3,
  Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__PostIdxImm8s41_3,
  Convert__Reg1_1__CondCode2_0__RegList1_2,
  Convert__Reg1_2__CondCode2_0__RegList1_3,
  Convert__Reg1_1__CondCode2_0__RegList1_3,
  Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3,
  Convert__Reg1_2__Tie0__CondCode2_0__RegList1_4,
  Convert__Reg1_1__MemThumbRIs42_2__CondCode2_0,
  Convert__Reg1_1__MemThumbRR2_2__CondCode2_0,
  Convert__Reg1_1__MemThumbSPI2_2__CondCode2_0,
  Convert__Reg1_1__MemPCRelImm121_2__CondCode2_0,
  Convert__Reg1_1__MemImm12Offset2_2__CondCode2_0,
  Convert__Reg1_1__MemNegImm8Offset2_2__CondCode2_0,
  Convert__Reg1_1__MemRegOffset3_2__CondCode2_0,
  Convert__Reg1_1__MemUImm12Offset2_2__CondCode2_0,
  Convert__Reg1_1__T2MemRegOffset3_2__CondCode2_0,
  Convert__Reg1_2__MemPCRelImm121_3__CondCode2_0,
  Convert__Reg1_2__MemUImm12Offset2_3__CondCode2_0,
  Convert__Reg1_2__T2MemRegOffset3_3__CondCode2_0,
  ConvertCustom_cvtLdWriteBackRegAddrModeImm12,
  ConvertCustom_cvtLdWriteBackRegT2AddrModeImm8,
  Convert__Reg1_1__MemNoOffset1_2__Tie1__AM2OffsetImm2_3__CondCode2_0,
  Convert__Reg1_1__MemNoOffset1_2__Tie1__Imm1_3__CondCode2_0,
  Convert__Reg1_1__MemNoOffset1_2__Tie1__PostIdxRegShifted2_3__CondCode2_0,
  ConvertCustom_cvtLdWriteBackRegAddrMode2,
  Convert__Reg1_1__MemThumbRIs12_2__CondCode2_0,
  Convert__Reg1_1__MemPosImm8Offset2_2__CondCode2_0,
  Convert__Reg1_1__Reg1_2__MemImm8s4Offset2_3__CondCode2_0,
  Convert__Reg1_1__Reg1_2__AddrMode33_3__CondCode2_0,
  ConvertCustom_cvtT2LdrdPre,
  Convert__Reg1_1__Reg1_2__MemNoOffset1_3__Tie2__Imm1_4__CondCode2_0,
  ConvertCustom_cvtLdrdPre,
  Convert__Reg1_1__Reg1_2__MemNoOffset1_3__Tie2__AM3Offset2_4__CondCode2_0,
  Convert__Reg1_1__MemImm0_1020s4Offset2_2__CondCode2_0,
  Convert__Reg1_1__MemNoOffset1_2__CondCode2_0,
  Convert__Reg1_1__Reg1_2__MemNoOffset1_3__CondCode2_0,
  Convert__Reg1_1__MemThumbRIs22_2__CondCode2_0,
  Convert__Reg1_1__AddrMode33_2__CondCode2_0,
  ConvertCustom_cvtLdWriteBackRegAddrMode3,
  Convert__Reg1_1__MemNoOffset1_2__Tie1__AM3Offset2_3__CondCode2_0,
  ConvertCustom_cvtLdExtTWriteBackReg,
  ConvertCustom_cvtLdExtTWriteBackImm,
  Convert__Reg1_2__CCOut1_0__Reg1_2__Imm0_311_3__CondCode2_1,
  Convert__Reg1_2__Reg1_2__Imm0_311_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__Reg1_3__Imm0_311_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__CCOut1_0__Reg1_3__Imm0_311_4__CondCode2_1,
  Convert__Reg1_2__Reg1_3__Imm0_311_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__Reg1_4__Imm0_311_5__CondCode2_1__CCOut1_0,
  Convert__CoprocNum1_0__Imm0_71_1__Reg1_2__CoprocReg1_3__CoprocReg1_4__imm0,
  Convert__CoprocNum1_1__Imm0_71_2__Reg1_3__CoprocReg1_4__CoprocReg1_5__imm0__CondCode2_0,
  Convert__CoprocNum1_0__Imm0_71_1__Reg1_2__CoprocReg1_3__CoprocReg1_4__Imm0_71_5,
  Convert__CoprocNum1_1__Imm0_71_2__Reg1_3__CoprocReg1_4__CoprocReg1_5__Imm0_71_6__CondCode2_0,
  Convert__CoprocNum1_0__Imm0_151_1__Reg1_2__Reg1_3__CoprocReg1_4,
  Convert__CoprocNum1_1__Imm0_151_2__Reg1_3__Reg1_4__CoprocReg1_5__CondCode2_0,
  Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0,
  Convert__Reg1_1__T2SOImm1_2__CondCode2_0__reg0,
  Convert__Reg1_1__T2SOImmNot1_2__CondCode2_0__reg0,
  Convert__Reg1_1__Imm0_65535Expr1_2__CondCode2_0,
  Convert__Reg1_2__CCOut1_0__Imm0_2551_3__CondCode2_1,
  Convert__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__ARMSOImmNot1_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__T2SOImm1_3__CondCode2_0__reg0,
  Convert__Reg1_2__Reg1_3__CondCode2_0__reg0,
  Convert__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_0__Reg1_1,
  Convert__Reg1_0__regCPSR__Imm0_2551_1__imm14__imm0,
  Convert__Reg1_1__T2SOImm1_2__CondCode2_0__regCPSR,
  Convert__Reg1_1__Reg1_2__CondCode2_0__regCPSR,
  Convert__Reg1_2__T2SOImm1_3__CondCode2_0__regCPSR,
  Convert__Reg1_2__Reg1_3__CondCode2_0__regCPSR,
  Convert__Reg1_1__Tie0__Imm0_65535Expr1_2__CondCode2_0,
  Convert__Reg1_2__CoprocNum1_0__Imm0_71_1__CoprocReg1_3__CoprocReg1_4__imm0,
  Convert__Reg1_3__CoprocNum1_1__Imm0_71_2__CoprocReg1_4__CoprocReg1_5__imm0__CondCode2_0,
  Convert__Reg1_2__CoprocNum1_0__Imm0_71_1__CoprocReg1_3__CoprocReg1_4__Imm0_71_5,
  Convert__Reg1_3__CoprocNum1_1__Imm0_71_2__CoprocReg1_4__CoprocReg1_5__Imm0_71_6__CondCode2_0,
  Convert__Reg1_1__MSRMask1_2__CondCode2_0,
  Convert__MSRMask1_1__Reg1_2__CondCode2_0,
  Convert__MSRMask1_1__ARMSOImm1_2__CondCode2_0,
  Convert__Reg1_1__Reg1_2__Reg1_1__CondCode2_0,
  ConvertCustom_cvtThumbMultiply,
  Convert__Reg1_2__Reg1_3__Reg1_2__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__CCOut1_0__Reg1_3__CondCode2_1,
  Convert__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_3__imm0__CondCode2_1__CCOut1_0,
  Convert__regR8__regR8__imm14__imm0,
  Convert__regR0__regR0__CondCode2_0__reg0,
  Convert__Reg1_1__Reg1_2__Reg1_3__imm0__CondCode2_0,
  Convert__Reg1_1__Reg1_2__Reg1_3__PKHLSLImm1_4__CondCode2_0,
  Convert__Reg1_1__Reg1_2__Reg1_3__PKHASRImm1_4__CondCode2_0,
  Convert__MemImm12Offset2_0,
  Convert__MemRegOffset3_0,
  Convert__MemNegImm8Offset2_1__CondCode2_0,
  Convert__MemUImm12Offset2_1__CondCode2_0,
  Convert__T2MemRegOffset3_1__CondCode2_0,
  Convert__CondCode2_0__RegList1_1,
  Convert__regSP__Tie0__CondCode2_0__RegList1_1,
  Convert__regSP__Tie0__CondCode2_0__RegList1_2,
  Convert__Reg1_1__Reg1_2__Imm0_311_3__Imm1_321_4__CondCode2_0,
  Convert__SetEndImm1_0,
  Convert__Reg1_1__Reg1_2__Reg1_4__Reg1_3__CondCode2_0,
  Convert__Imm0_311_1,
  Convert__Imm0_311_2,
  Convert__Imm0_311_2__CondCode2_0,
  Convert__Imm0_311_3__CondCode2_0,
  Convert__Reg1_1__Imm1_321_2__Reg1_3__imm0__CondCode2_0,
  Convert__Reg1_1__Imm1_321_2__Reg1_3__ShifterImm1_4__CondCode2_0,
  Convert__Reg1_1__Imm1_161_2__Reg1_3__CondCode2_0,
  ConvertCustom_cvtStWriteBackRegT2AddrModeImm8,
  Convert__MemNoOffset1_2__Reg1_1__Tie0__Imm1_3__CondCode2_0,
  ConvertCustom_cvtStWriteBackRegAddrModeImm12,
  Convert__MemNoOffset1_2__Reg1_1__Tie0__AM2OffsetImm2_3__CondCode2_0,
  Convert__MemNoOffset1_2__Reg1_1__Tie0__PostIdxRegShifted2_3__CondCode2_0,
  ConvertCustom_cvtStWriteBackRegAddrMode2,
  Convert__Reg1_1__MemImm8Offset2_2__CondCode2_0,
  ConvertCustom_cvtT2StrdPre,
  Convert__MemNoOffset1_3__Reg1_1__Reg1_2__Tie0__Imm1_4__CondCode2_0,
  ConvertCustom_cvtStrdPre,
  Convert__MemNoOffset1_3__Reg1_1__Reg1_2__Tie0__AM3Offset2_4__CondCode2_0,
  Convert__Reg1_1__Reg1_2__MemImm0_1020s4Offset2_3__CondCode2_0,
  Convert__Reg1_1__Reg1_2__Reg1_3__MemNoOffset1_4__CondCode2_0,
  ConvertCustom_cvtStWriteBackRegAddrMode3,
  Convert__MemNoOffset1_2__Reg1_1__Tie0__AM3Offset2_3__CondCode2_0,
  ConvertCustom_cvtStExtTWriteBackImm,
  ConvertCustom_cvtStExtTWriteBackReg,
  Convert__Imm0_2551_1__CondCode2_0,
  Convert__Imm24bit1_1__CondCode2_0,
  Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0,
  Convert__Reg1_1__Reg1_2__imm0__CondCode2_0,
  Convert__Reg1_2__Reg1_3__imm0__CondCode2_0,
  Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0,
  Convert__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0,
  Convert__MemTBB2_1__CondCode2_0,
  Convert__MemTBH2_1__CondCode2_0,
  Convert__Reg1_1__Imm0_311_2__Reg1_3__imm0__CondCode2_0,
  Convert__Reg1_1__Imm0_311_2__Reg1_3__ShifterImm1_4__CondCode2_0,
  Convert__Reg1_1__Imm0_151_2__Reg1_3__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0,
  Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0,
  Convert__Reg1_1__Reg1_1__Reg1_2__CondCode2_0,
  Convert__Reg1_2__NEONi16splat1_3__Tie0__CondCode2_0,
  Convert__Reg1_2__NEONi32splat1_3__Tie0__CondCode2_0,
  Convert__Reg1_1__Tie0__Reg1_2__Reg1_3__CondCode2_0,
  Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0,
  Convert__Reg1_2__CondCode2_0,
  Convert__Reg1_3__Reg1_4__CondCode2_0,
  Convert__Reg1_3__Tie0__FBits161_5__CondCode2_0,
  Convert__Reg1_3__Tie0__FBits321_5__CondCode2_0,
  Convert__Reg1_3__Reg1_4__Imm1_5__CondCode2_0,
  Convert__Reg1_2__Reg1_3__VectorIndex161_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__VectorIndex321_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__VectorIndex81_4__CondCode2_0,
  Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_31_4__CondCode2_0,
  Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_71_4__CondCode2_0,
  Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_11_4__CondCode2_0,
  Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_151_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_31_5__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_151_5__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_11_5__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_71_5__CondCode2_0,
  Convert__VecListDPairAllLanes1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListDPair1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListOneDAllLanes1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListOneD1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListOneDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListOneDWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListOneDByteIndexed2_2__AlignedMemory2_3__CondCode2_0,
  ConvertCustom_cvtVLDwbFixed,
  ConvertCustom_cvtVLDwbRegister,
  Convert__VecListOneDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListOneDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListOneDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__Reg1_3__AlignedMemory2_8__Tie0__Imm1_5__CondCode2_0,
  Convert__Reg1_3__AlignedMemory1_8__Tie1__Imm1_9__Tie0__Imm1_5__CondCode2_0,
  Convert__Reg1_3__Reg1_8__Imm1_9__Tie0__Imm1_5__CondCode2_0,
  Convert__VecListDPairSpacedAllLanes1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListDPairSpaced1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListTwoDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListTwoQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListTwoDWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListTwoQWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListTwoDByteIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListTwoDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListTwoQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListTwoDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListTwoQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListTwoDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListThreeDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListThreeQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListThreeDWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListThreeQWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListThreeDByteIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListThreeD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListThreeDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListThreeQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListThreeQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListThreeDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListThreeQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListThreeDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory2_7__CondCode2_0,
  Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory1_7__Tie3__Imm1_8__CondCode2_0,
  Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory2_13__CondCode2_0,
  Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory1_13__Tie3__Imm1_14__CondCode2_0,
  Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListFourDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListFourQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListFourDWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListFourQWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListFourDByteIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListFourD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListFourDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListFourQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListFourQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListFourDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListFourQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListFourDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory2_8__CondCode2_0,
  Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory1_8__Tie4__Imm1_9__CondCode2_0,
  Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory2_16__CondCode2_0,
  Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory1_16__Tie4__Imm1_17__CondCode2_0,
  Convert__Reg1_1__Tie0__CondCode2_0__DPRRegList1_3,
  Convert__Reg1_1__Tie0__CondCode2_0__SPRRegList1_3,
  Convert__Reg1_1__CondCode2_0__DPRRegList1_2,
  Convert__Reg1_1__CondCode2_0__SPRRegList1_2,
  Convert__Reg1_1__AddrMode52_2__CondCode2_0,
  Convert__Reg1_2__AddrMode52_3__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0,
  Convert__Reg1_1__Reg1_2__Reg1_2__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Reg1_3__CondCode2_0,
  Convert__Reg1_2__FPImm1_3__CondCode2_0,
  Convert__Reg1_2__NEONi32vmov1_3__CondCode2_0,
  Convert__Reg1_2__NEONi16splat1_3__CondCode2_0,
  Convert__Reg1_2__NEONi32vmovNeg1_3__CondCode2_0,
  Convert__Reg1_2__NEONi64splat1_3__CondCode2_0,
  Convert__Reg1_2__NEONi8splat1_3__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_4__VectorIndex161_3__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_4__VectorIndex321_3__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_4__VectorIndex81_3__CondCode2_0,
  Convert__Reg1_2__Reg1_2__Reg1_3__VectorIndex321_4__CondCode2_0,
  Convert__Reg1_2__Reg1_2__Reg1_3__VectorIndex161_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0,
  Convert__regSP__Tie0__CondCode2_0__DPRRegList1_1,
  Convert__regSP__Tie0__CondCode2_0__SPRRegList1_1,
  Convert__regSP__Tie0__CondCode2_0__DPRRegList1_2,
  Convert__regSP__Tie0__CondCode2_0__SPRRegList1_2,
  Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0,
  Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0,
  Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0,
  Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0,
  Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0,
  Convert__Reg1_2__Reg1_3__ShrImm641_4__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0,
  Convert__Reg1_2__Reg1_2__Imm0_151_3__CondCode2_0,
  Convert__Reg1_2__Reg1_2__Imm0_311_3__CondCode2_0,
  Convert__Reg1_2__Reg1_2__Imm0_631_3__CondCode2_0,
  Convert__Reg1_2__Reg1_2__Imm0_71_3__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Imm161_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Imm321_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Imm1_71_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Imm81_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Imm1_151_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Imm1_311_4__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_2__ShrImm161_3__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_2__ShrImm321_3__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_2__ShrImm641_3__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_2__ShrImm81_3__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_3__Imm1_4__CondCode2_0,
  Convert__AlignedMemory2_3__VecListDPair1_2__CondCode2_0,
  Convert__AlignedMemory2_3__VecListFourD1_2__CondCode2_0,
  Convert__AlignedMemory2_3__VecListOneD1_2__CondCode2_0,
  Convert__AlignedMemory2_3__VecListThreeD1_2__CondCode2_0,
  ConvertCustom_cvtVSTwbFixed,
  ConvertCustom_cvtVSTwbRegister,
  Convert__AlignedMemory2_8__Reg1_3__Imm1_5__CondCode2_0,
  Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Imm1_5__CondCode2_0,
  Convert__Reg1_8__Imm1_9__Reg1_3__Imm1_5__CondCode2_0,
  Convert__Reg1_8__Tie0__Imm1_10__Reg1_3__Imm1_5__CondCode2_0,
  Convert__AlignedMemory2_3__VecListDPairSpaced1_2__CondCode2_0,
  Convert__AlignedMemory2_7__Reg1_3__Reg1_4__Reg1_5__CondCode2_0,
  Convert__AlignedMemory1_7__Tie0__Imm1_8__Reg1_3__Reg1_4__Reg1_5__CondCode2_0,
  Convert__AlignedMemory2_8__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0,
  Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0,
  Convert__Reg1_1__Reg1_2__Tie0__Tie1__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0,
  Convert__Reg1_2__VecListDPair1_3__Reg1_4__CondCode2_0,
  Convert__Reg1_2__VecListFourD1_3__Reg1_4__CondCode2_0,
  Convert__Reg1_2__VecListOneD1_3__Reg1_4__CondCode2_0,
  Convert__Reg1_2__VecListThreeD1_3__Reg1_4__CondCode2_0,
  Convert__Reg1_2__Tie0__VecListDPair1_3__Reg1_4__CondCode2_0,
  Convert__Reg1_2__Tie0__VecListFourD1_3__Reg1_4__CondCode2_0,
  Convert__Reg1_2__Tie0__VecListOneD1_3__Reg1_4__CondCode2_0,
  Convert__Reg1_2__Tie0__VecListThreeD1_3__Reg1_4__CondCode2_0,
  NumConversionVariants
};

bool ARMAsmParser::
ConvertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                      const SmallVectorImpl<MCParsedAsmOperand*> &Operands) {
  Inst.setOpcode(Opcode);
  switch (Kind) {
  default:
  case Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegShiftedRegOperands(Inst, 3);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegShiftedImmOperands(Inst, 2);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegShiftedImmOperands(Inst, 2);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegShiftedRegOperands(Inst, 3);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_3__Reg1_4__RegShiftedImm2_5__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addRegShiftedImmOperands(Inst, 2);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_1__Tie0__Reg1_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Tie0__Imm0_508s41_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[3])->addImm0_508s4Operands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__regSP__Tie0__Imm0_508s4Neg1_2__CondCode2_0:
    Inst.addOperand(MCOperand::CreateReg(ARM::SP));
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[3])->addImm0_508s4NegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Reg1_1__Imm0_40951_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Reg1_1__Imm0_4095Neg1_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addImm0_4095NegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__CCOut1_0__Tie0__Imm0_2551_3__CondCode2_1:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__Reg1_2__T2SOImmNeg1_3__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addT2SOImmNegOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__Reg1_2__ARMSOImmNeg1_3__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addARMSOImmNegOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_1__Reg1_2__Imm0_1020s41_3__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImm0_1020s4Operands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Imm0_40951_3__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__regSP__Tie0__Imm0_508s41_3__CondCode2_0:
    Inst.addOperand(MCOperand::CreateReg(ARM::SP));
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[4])->addImm0_508s4Operands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__regSP__Tie0__Imm0_508s4Neg1_3__CondCode2_0:
    Inst.addOperand(MCOperand::CreateReg(ARM::SP));
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[4])->addImm0_508s4NegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Reg1_2__Imm0_40951_3__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Reg1_2__Imm0_4095Neg1_3__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImm0_4095NegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__CCOut1_0__Reg1_3__Reg1_4__CondCode2_1:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__CCOut1_0__Reg1_3__Imm0_71_4__CondCode2_1:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__T2SOImmNeg1_4__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addT2SOImmNegOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__Reg1_3__ARMSOImmNeg1_4__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addARMSOImmNegOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_3__Reg1_4__T2SOImm1_5__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_1__Imm1_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Imm1_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_2__ARMSOImmNot1_3__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addARMSOImmNotOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_3__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_3__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegShiftedImmOperands(Inst, 2);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_3__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__Reg1_3__ARMSOImmNot1_4__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addARMSOImmNotOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__CCOut1_0__Reg1_2__ImmThumbSR1_3__CondCode2_1:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmThumbSROperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_2__ImmThumbSR1_3__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmThumbSROperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__Reg1_2__Imm0_321_3__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_3__Reg1_3__ImmThumbSR1_4__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmThumbSROperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__CCOut1_0__Reg1_3__ImmThumbSR1_4__CondCode2_1:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmThumbSROperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__ImmThumbSR1_4__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmThumbSROperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__Reg1_3__Imm0_321_4__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_3__Reg1_4__ImmThumbSR1_5__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addImmThumbSROperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Imm1_1__CondCode2_0:
    ((ARMOperand*)Operands[2])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Imm1_2__CondCode2_0:
    ((ARMOperand*)Operands[3])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Tie0__Bitfield1_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[3])->addBitfieldOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Tie0__Reg1_2__Bitfield1_3__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addBitfieldOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Imm0_2551_0:
    ((ARMOperand*)Operands[1])->addImmOperands(Inst, 1);
    return true;
  case Convert__Imm0_655351_1__CondCode2_0:
    ((ARMOperand*)Operands[2])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Imm1_0:
    ((ARMOperand*)Operands[1])->addImmOperands(Inst, 1);
    return true;
  case Convert__CondCode2_0__Imm1_1:
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[2])->addImmOperands(Inst, 1);
    return true;
  case Convert__Reg1_0:
    ((ARMOperand*)Operands[1])->addRegOperands(Inst, 1);
    return true;
  case Convert__Reg1_1__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__CondCode2_0__Reg1_1:
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    return true;
  case Convert__CondCode2_0:
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_0__Imm1_1:
    ((ARMOperand*)Operands[1])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addImmOperands(Inst, 1);
    return true;
  case Convert__CoprocNum1_0__Imm0_151_1__CoprocReg1_2__CoprocReg1_3__CoprocReg1_4__Imm0_71_5:
    ((ARMOperand*)Operands[1])->addCoprocNumOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addImmOperands(Inst, 1);
    return true;
  case Convert__CoprocNum1_1__Imm0_151_2__CoprocReg1_3__CoprocReg1_4__CoprocReg1_5__Imm0_71_6__CondCode2_0:
    ((ARMOperand*)Operands[2])->addCoprocNumOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[7])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert:
    return true;
  case Convert__Reg1_1__Reg1_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__ARMSOImmNeg1_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addARMSOImmNegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__T2SOImmNeg1_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addT2SOImmNegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegShiftedImmOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__RegShiftedReg3_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegShiftedRegOperands(Inst, 3);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__T2SOImm1_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__ARMSOImm1_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__RegShiftedImm2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegShiftedImmOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__T2SOImm1_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Imm0_2551_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Imm0_311_0:
    ((ARMOperand*)Operands[1])->addImmOperands(Inst, 1);
    return true;
  case Convert__Imm1_0__imm0:
    ((ARMOperand*)Operands[1])->addImmOperands(Inst, 1);
    Inst.addOperand(MCOperand::CreateImm(0));
    return true;
  case Convert__Imm1_0__ProcIFlags1_1:
    ((ARMOperand*)Operands[1])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addProcIFlagsOperands(Inst, 1);
    return true;
  case Convert__Imm1_0__ProcIFlags1_2:
    ((ARMOperand*)Operands[1])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addProcIFlagsOperands(Inst, 1);
    return true;
  case Convert__Imm1_0__ProcIFlags1_1__Imm0_311_2:
    ((ARMOperand*)Operands[1])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addProcIFlagsOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addImmOperands(Inst, 1);
    return true;
  case Convert__Imm1_0__ProcIFlags1_2__Imm1_3:
    ((ARMOperand*)Operands[1])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addProcIFlagsOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    return true;
  case Convert__Imm0_151_1__CondCode2_0:
    ((ARMOperand*)Operands[2])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__imm15:
    Inst.addOperand(MCOperand::CreateImm(15));
    return true;
  case Convert__MemBarrierOpt1_0:
    ((ARMOperand*)Operands[1])->addMemBarrierOptOperands(Inst, 1);
    return true;
  case Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Tie0__Reg1_2__imm1__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(MCOperand::CreateImm(1));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Tie0__Reg1_2__imm0__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(MCOperand::CreateImm(0));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__ITCondCode1_1__ITMask1_0:
    ((ARMOperand*)Operands[2])->addITCondCodeOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addITMaskOperands(Inst, 1);
    return true;
  case Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0:
    ((ARMOperand*)Operands[2])->addCoprocNumOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAddrMode5Operands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0:
    ((ARMOperand*)Operands[2])->addCoprocNumOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addMemNoOffsetOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addCoprocOptionOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0:
    ((ARMOperand*)Operands[2])->addCoprocNumOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addMemNoOffsetOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addPostIdxImm8s4Operands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__CoprocNum1_0__CoprocReg1_1__AddrMode52_2:
    ((ARMOperand*)Operands[1])->addCoprocNumOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addAddrMode5Operands(Inst, 2);
    return true;
  case Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__CoprocOption1_3:
    ((ARMOperand*)Operands[1])->addCoprocNumOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addMemNoOffsetOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addCoprocOptionOperands(Inst, 1);
    return true;
  case Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__PostIdxImm8s41_3:
    ((ARMOperand*)Operands[1])->addCoprocNumOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addMemNoOffsetOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addPostIdxImm8s4Operands(Inst, 1);
    return true;
  case Convert__Reg1_1__CondCode2_0__RegList1_2:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[3])->addRegListOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__CondCode2_0__RegList1_3:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addRegListOperands(Inst, 1);
    return true;
  case Convert__Reg1_1__CondCode2_0__RegList1_3:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addRegListOperands(Inst, 1);
    return true;
  case Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addRegListOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__Tie0__CondCode2_0__RegList1_4:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegListOperands(Inst, 1);
    return true;
  case Convert__Reg1_1__MemThumbRIs42_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addMemThumbRIs4Operands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__MemThumbRR2_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addMemThumbRROperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__MemThumbSPI2_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addMemThumbSPIOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__MemPCRelImm121_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addMemPCRelImm12Operands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__MemImm12Offset2_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addMemImm12OffsetOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__MemNegImm8Offset2_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addMemNegImm8OffsetOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__MemRegOffset3_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addMemRegOffsetOperands(Inst, 3);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__MemUImm12Offset2_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addMemUImm12OffsetOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__T2MemRegOffset3_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addT2MemRegOffsetOperands(Inst, 3);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__MemPCRelImm121_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addMemPCRelImm12Operands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__MemUImm12Offset2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addMemUImm12OffsetOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__T2MemRegOffset3_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addT2MemRegOffsetOperands(Inst, 3);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case ConvertCustom_cvtLdWriteBackRegAddrModeImm12:
    return cvtLdWriteBackRegAddrModeImm12(Inst, Opcode, Operands);
  case ConvertCustom_cvtLdWriteBackRegT2AddrModeImm8:
    return cvtLdWriteBackRegT2AddrModeImm8(Inst, Opcode, Operands);
  case Convert__Reg1_1__MemNoOffset1_2__Tie1__AM2OffsetImm2_3__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addMemNoOffsetOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(1));
    ((ARMOperand*)Operands[4])->addAM2OffsetImmOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__MemNoOffset1_2__Tie1__Imm1_3__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addMemNoOffsetOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(1));
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__MemNoOffset1_2__Tie1__PostIdxRegShifted2_3__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addMemNoOffsetOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(1));
    ((ARMOperand*)Operands[4])->addPostIdxRegShiftedOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case ConvertCustom_cvtLdWriteBackRegAddrMode2:
    return cvtLdWriteBackRegAddrMode2(Inst, Opcode, Operands);
  case Convert__Reg1_1__MemThumbRIs12_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addMemThumbRIs1Operands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__MemPosImm8Offset2_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addMemPosImm8OffsetOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Reg1_2__MemImm8s4Offset2_3__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addMemImm8s4OffsetOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Reg1_2__AddrMode33_3__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAddrMode3Operands(Inst, 3);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case ConvertCustom_cvtT2LdrdPre:
    return cvtT2LdrdPre(Inst, Opcode, Operands);
  case Convert__Reg1_1__Reg1_2__MemNoOffset1_3__Tie2__Imm1_4__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addMemNoOffsetOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(2));
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case ConvertCustom_cvtLdrdPre:
    return cvtLdrdPre(Inst, Opcode, Operands);
  case Convert__Reg1_1__Reg1_2__MemNoOffset1_3__Tie2__AM3Offset2_4__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addMemNoOffsetOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(2));
    ((ARMOperand*)Operands[5])->addAM3OffsetOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__MemImm0_1020s4Offset2_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addMemImm0_1020s4OffsetOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__MemNoOffset1_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addMemNoOffsetOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Reg1_2__MemNoOffset1_3__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addMemNoOffsetOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__MemThumbRIs22_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addMemThumbRIs2Operands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__AddrMode33_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addAddrMode3Operands(Inst, 3);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case ConvertCustom_cvtLdWriteBackRegAddrMode3:
    return cvtLdWriteBackRegAddrMode3(Inst, Opcode, Operands);
  case Convert__Reg1_1__MemNoOffset1_2__Tie1__AM3Offset2_3__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addMemNoOffsetOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(1));
    ((ARMOperand*)Operands[4])->addAM3OffsetOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case ConvertCustom_cvtLdExtTWriteBackReg:
    return cvtLdExtTWriteBackReg(Inst, Opcode, Operands);
  case ConvertCustom_cvtLdExtTWriteBackImm:
    return cvtLdExtTWriteBackImm(Inst, Opcode, Operands);
  case Convert__Reg1_2__CCOut1_0__Reg1_2__Imm0_311_3__CondCode2_1:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_2__Imm0_311_3__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_3__Reg1_3__Imm0_311_4__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__CCOut1_0__Reg1_3__Imm0_311_4__CondCode2_1:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__Imm0_311_4__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_3__Reg1_4__Imm0_311_5__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__CoprocNum1_0__Imm0_71_1__Reg1_2__CoprocReg1_3__CoprocReg1_4__imm0:
    ((ARMOperand*)Operands[1])->addCoprocNumOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addCoprocRegOperands(Inst, 1);
    Inst.addOperand(MCOperand::CreateImm(0));
    return true;
  case Convert__CoprocNum1_1__Imm0_71_2__Reg1_3__CoprocReg1_4__CoprocReg1_5__imm0__CondCode2_0:
    ((ARMOperand*)Operands[2])->addCoprocNumOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addCoprocRegOperands(Inst, 1);
    Inst.addOperand(MCOperand::CreateImm(0));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__CoprocNum1_0__Imm0_71_1__Reg1_2__CoprocReg1_3__CoprocReg1_4__Imm0_71_5:
    ((ARMOperand*)Operands[1])->addCoprocNumOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addImmOperands(Inst, 1);
    return true;
  case Convert__CoprocNum1_1__Imm0_71_2__Reg1_3__CoprocReg1_4__CoprocReg1_5__Imm0_71_6__CondCode2_0:
    ((ARMOperand*)Operands[2])->addCoprocNumOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[7])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__CoprocNum1_0__Imm0_151_1__Reg1_2__Reg1_3__CoprocReg1_4:
    ((ARMOperand*)Operands[1])->addCoprocNumOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addCoprocRegOperands(Inst, 1);
    return true;
  case Convert__CoprocNum1_1__Imm0_151_2__Reg1_3__Reg1_4__CoprocReg1_5__CondCode2_0:
    ((ARMOperand*)Operands[2])->addCoprocNumOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_1__T2SOImm1_2__CondCode2_0__reg0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    Inst.addOperand(MCOperand::CreateReg(0));
    return true;
  case Convert__Reg1_1__T2SOImmNot1_2__CondCode2_0__reg0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addT2SOImmNotOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    Inst.addOperand(MCOperand::CreateReg(0));
    return true;
  case Convert__Reg1_1__Imm0_65535Expr1_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__CCOut1_0__Imm0_2551_3__CondCode2_1:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__ARMSOImmNot1_3__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addARMSOImmNotOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegShiftedRegOperands(Inst, 3);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegShiftedImmOperands(Inst, 2);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__T2SOImm1_3__CondCode2_0__reg0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    Inst.addOperand(MCOperand::CreateReg(0));
    return true;
  case Convert__Reg1_2__Reg1_3__CondCode2_0__reg0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    Inst.addOperand(MCOperand::CreateReg(0));
    return true;
  case Convert__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_0__Reg1_1:
    ((ARMOperand*)Operands[1])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    return true;
  case Convert__Reg1_0__regCPSR__Imm0_2551_1__imm14__imm0:
    ((ARMOperand*)Operands[1])->addRegOperands(Inst, 1);
    Inst.addOperand(MCOperand::CreateReg(ARM::CPSR));
    ((ARMOperand*)Operands[2])->addImmOperands(Inst, 1);
    Inst.addOperand(MCOperand::CreateImm(14));
    Inst.addOperand(MCOperand::CreateImm(0));
    return true;
  case Convert__Reg1_1__T2SOImm1_2__CondCode2_0__regCPSR:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    Inst.addOperand(MCOperand::CreateReg(ARM::CPSR));
    return true;
  case Convert__Reg1_1__Reg1_2__CondCode2_0__regCPSR:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    Inst.addOperand(MCOperand::CreateReg(ARM::CPSR));
    return true;
  case Convert__Reg1_2__T2SOImm1_3__CondCode2_0__regCPSR:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    Inst.addOperand(MCOperand::CreateReg(ARM::CPSR));
    return true;
  case Convert__Reg1_2__Reg1_3__CondCode2_0__regCPSR:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    Inst.addOperand(MCOperand::CreateReg(ARM::CPSR));
    return true;
  case Convert__Reg1_1__Tie0__Imm0_65535Expr1_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[3])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__CoprocNum1_0__Imm0_71_1__CoprocReg1_3__CoprocReg1_4__imm0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCoprocNumOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addCoprocRegOperands(Inst, 1);
    Inst.addOperand(MCOperand::CreateImm(0));
    return true;
  case Convert__Reg1_3__CoprocNum1_1__Imm0_71_2__CoprocReg1_4__CoprocReg1_5__imm0__CondCode2_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCoprocNumOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addCoprocRegOperands(Inst, 1);
    Inst.addOperand(MCOperand::CreateImm(0));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__CoprocNum1_0__Imm0_71_1__CoprocReg1_3__CoprocReg1_4__Imm0_71_5:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCoprocNumOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addImmOperands(Inst, 1);
    return true;
  case Convert__Reg1_3__CoprocNum1_1__Imm0_71_2__CoprocReg1_4__CoprocReg1_5__Imm0_71_6__CondCode2_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCoprocNumOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addCoprocRegOperands(Inst, 1);
    ((ARMOperand*)Operands[7])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__MSRMask1_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addMSRMaskOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__MSRMask1_1__Reg1_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addMSRMaskOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__MSRMask1_1__ARMSOImm1_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addMSRMaskOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Reg1_2__Reg1_1__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case ConvertCustom_cvtThumbMultiply:
    return cvtThumbMultiply(Inst, Opcode, Operands);
  case Convert__Reg1_2__Reg1_3__Reg1_2__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__CCOut1_0__Reg1_3__CondCode2_1:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegShiftedImmOperands(Inst, 2);
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__Reg1_3__imm0__CondCode2_1__CCOut1_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    Inst.addOperand(MCOperand::CreateImm(0));
    ((ARMOperand*)Operands[2])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCCOutOperands(Inst, 1);
    return true;
  case Convert__regR8__regR8__imm14__imm0:
    Inst.addOperand(MCOperand::CreateReg(ARM::R8));
    Inst.addOperand(MCOperand::CreateReg(ARM::R8));
    Inst.addOperand(MCOperand::CreateImm(14));
    Inst.addOperand(MCOperand::CreateImm(0));
    return true;
  case Convert__regR0__regR0__CondCode2_0__reg0:
    Inst.addOperand(MCOperand::CreateReg(ARM::R0));
    Inst.addOperand(MCOperand::CreateReg(ARM::R0));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    Inst.addOperand(MCOperand::CreateReg(0));
    return true;
  case Convert__Reg1_1__Reg1_2__Reg1_3__imm0__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    Inst.addOperand(MCOperand::CreateImm(0));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Reg1_2__Reg1_3__PKHLSLImm1_4__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Reg1_2__Reg1_3__PKHASRImm1_4__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addPKHASRImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__MemImm12Offset2_0:
    ((ARMOperand*)Operands[1])->addMemImm12OffsetOperands(Inst, 2);
    return true;
  case Convert__MemRegOffset3_0:
    ((ARMOperand*)Operands[1])->addMemRegOffsetOperands(Inst, 3);
    return true;
  case Convert__MemNegImm8Offset2_1__CondCode2_0:
    ((ARMOperand*)Operands[2])->addMemNegImm8OffsetOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__MemUImm12Offset2_1__CondCode2_0:
    ((ARMOperand*)Operands[2])->addMemUImm12OffsetOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__T2MemRegOffset3_1__CondCode2_0:
    ((ARMOperand*)Operands[2])->addT2MemRegOffsetOperands(Inst, 3);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__CondCode2_0__RegList1_1:
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[2])->addRegListOperands(Inst, 1);
    return true;
  case Convert__regSP__Tie0__CondCode2_0__RegList1_1:
    Inst.addOperand(MCOperand::CreateReg(ARM::SP));
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[2])->addRegListOperands(Inst, 1);
    return true;
  case Convert__regSP__Tie0__CondCode2_0__RegList1_2:
    Inst.addOperand(MCOperand::CreateReg(ARM::SP));
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[3])->addRegListOperands(Inst, 1);
    return true;
  case Convert__Reg1_1__Reg1_2__Imm0_311_3__Imm1_321_4__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImm1_32Operands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__SetEndImm1_0:
    ((ARMOperand*)Operands[1])->addImmOperands(Inst, 1);
    return true;
  case Convert__Reg1_1__Reg1_2__Reg1_4__Reg1_3__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Imm0_311_1:
    ((ARMOperand*)Operands[2])->addImmOperands(Inst, 1);
    return true;
  case Convert__Imm0_311_2:
    ((ARMOperand*)Operands[3])->addImmOperands(Inst, 1);
    return true;
  case Convert__Imm0_311_2__CondCode2_0:
    ((ARMOperand*)Operands[3])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Imm0_311_3__CondCode2_0:
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Imm1_321_2__Reg1_3__imm0__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addImm1_32Operands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    Inst.addOperand(MCOperand::CreateImm(0));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Imm1_321_2__Reg1_3__ShifterImm1_4__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addImm1_32Operands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addShifterImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Imm1_161_2__Reg1_3__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addImm1_16Operands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case ConvertCustom_cvtStWriteBackRegT2AddrModeImm8:
    return cvtStWriteBackRegT2AddrModeImm8(Inst, Opcode, Operands);
  case Convert__MemNoOffset1_2__Reg1_1__Tie0__Imm1_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addMemNoOffsetOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case ConvertCustom_cvtStWriteBackRegAddrModeImm12:
    return cvtStWriteBackRegAddrModeImm12(Inst, Opcode, Operands);
  case Convert__MemNoOffset1_2__Reg1_1__Tie0__AM2OffsetImm2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addMemNoOffsetOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[4])->addAM2OffsetImmOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__MemNoOffset1_2__Reg1_1__Tie0__PostIdxRegShifted2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addMemNoOffsetOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[4])->addPostIdxRegShiftedOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case ConvertCustom_cvtStWriteBackRegAddrMode2:
    return cvtStWriteBackRegAddrMode2(Inst, Opcode, Operands);
  case Convert__Reg1_1__MemImm8Offset2_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addMemImm8OffsetOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case ConvertCustom_cvtT2StrdPre:
    return cvtT2StrdPre(Inst, Opcode, Operands);
  case Convert__MemNoOffset1_3__Reg1_1__Reg1_2__Tie0__Imm1_4__CondCode2_0:
    ((ARMOperand*)Operands[4])->addMemNoOffsetOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case ConvertCustom_cvtStrdPre:
    return cvtStrdPre(Inst, Opcode, Operands);
  case Convert__MemNoOffset1_3__Reg1_1__Reg1_2__Tie0__AM3Offset2_4__CondCode2_0:
    ((ARMOperand*)Operands[4])->addMemNoOffsetOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[5])->addAM3OffsetOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Reg1_2__MemImm0_1020s4Offset2_3__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addMemImm0_1020s4OffsetOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Reg1_2__Reg1_3__MemNoOffset1_4__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addMemNoOffsetOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case ConvertCustom_cvtStWriteBackRegAddrMode3:
    return cvtStWriteBackRegAddrMode3(Inst, Opcode, Operands);
  case Convert__MemNoOffset1_2__Reg1_1__Tie0__AM3Offset2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addMemNoOffsetOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[4])->addAM3OffsetOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case ConvertCustom_cvtStExtTWriteBackImm:
    return cvtStExtTWriteBackImm(Inst, Opcode, Operands);
  case ConvertCustom_cvtStExtTWriteBackReg:
    return cvtStExtTWriteBackReg(Inst, Opcode, Operands);
  case Convert__Imm0_2551_1__CondCode2_0:
    ((ARMOperand*)Operands[2])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Imm24bit1_1__CondCode2_0:
    ((ARMOperand*)Operands[2])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRotImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Reg1_2__imm0__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(MCOperand::CreateImm(0));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__imm0__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    Inst.addOperand(MCOperand::CreateImm(0));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRotImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRotImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__MemTBB2_1__CondCode2_0:
    ((ARMOperand*)Operands[2])->addMemTBBOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__MemTBH2_1__CondCode2_0:
    ((ARMOperand*)Operands[2])->addMemTBHOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Imm0_311_2__Reg1_3__imm0__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    Inst.addOperand(MCOperand::CreateImm(0));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Imm0_311_2__Reg1_3__ShifterImm1_4__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addShifterImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Imm0_151_2__Reg1_3__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Reg1_1__Reg1_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__NEONi16splat1_3__Tie0__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addNEONi16splatOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__NEONi32splat1_3__Tie0__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addNEONi32splatOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Tie0__Reg1_2__Reg1_3__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_3__Tie0__FBits161_5__CondCode2_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[6])->addFBits16Operands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_3__Tie0__FBits321_5__CondCode2_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[6])->addFBits32Operands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_3__Reg1_4__Imm1_5__CondCode2_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__VectorIndex161_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addVectorIndex16Operands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__VectorIndex321_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addVectorIndex32Operands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__VectorIndex81_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addVectorIndex8Operands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_31_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_71_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_11_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_151_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_31_5__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_151_5__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_11_5__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_71_5__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListDPairAllLanes1_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListDPair1_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListOneDAllLanes1_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListOneD1_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListOneDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListOneDWordIndexed2_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListOneDByteIndexed2_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case ConvertCustom_cvtVLDwbFixed:
    return cvtVLDwbFixed(Inst, Opcode, Operands);
  case ConvertCustom_cvtVLDwbRegister:
    return cvtVLDwbRegister(Inst, Opcode, Operands);
  case Convert__VecListOneDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListOneDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListOneDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_3__AlignedMemory2_8__Tie0__Imm1_5__CondCode2_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[9])->addAlignedMemoryOperands(Inst, 2);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[6])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_3__AlignedMemory1_8__Tie1__Imm1_9__Tie0__Imm1_5__CondCode2_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[9])->addAlignedMemoryOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(1));
    ((ARMOperand*)Operands[10])->addImmOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[6])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_3__Reg1_8__Imm1_9__Tie0__Imm1_5__CondCode2_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[9])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[10])->addImmOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[6])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListDPairSpacedAllLanes1_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListDPairSpaced1_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListTwoDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListTwoQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListTwoDWordIndexed2_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListTwoQWordIndexed2_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListTwoDByteIndexed2_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListTwoDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListTwoQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListTwoDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListTwoQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListTwoDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListThreeDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListThreeQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListThreeDWordIndexed2_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListThreeQWordIndexed2_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListThreeDByteIndexed2_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListThreeD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListThreeDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListThreeQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListThreeQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListThreeDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListThreeQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListThreeDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory2_7__CondCode2_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[8])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory1_7__Tie3__Imm1_8__CondCode2_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[8])->addAlignedMemoryOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(3));
    ((ARMOperand*)Operands[9])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory2_13__CondCode2_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[7])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[10])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[14])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory1_13__Tie3__Imm1_14__CondCode2_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[7])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[10])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[14])->addAlignedMemoryOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(3));
    ((ARMOperand*)Operands[15])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListFourDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListFourQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListFourDWordIndexed2_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListFourQWordIndexed2_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListFourDByteIndexed2_2__AlignedMemory2_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListFourD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListFourDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListFourQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListFourQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListFourDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListFourQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__VecListFourDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addVecListIndexedOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory2_8__CondCode2_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[7])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[9])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory1_8__Tie4__Imm1_9__CondCode2_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[7])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[9])->addAlignedMemoryOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(4));
    ((ARMOperand*)Operands[10])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory2_16__CondCode2_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[7])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[10])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[13])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[17])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory1_16__Tie4__Imm1_17__CondCode2_0:
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[7])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[10])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[13])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[17])->addAlignedMemoryOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(4));
    ((ARMOperand*)Operands[18])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Tie0__CondCode2_0__DPRRegList1_3:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addDPRRegListOperands(Inst, 1);
    return true;
  case Convert__Reg1_1__Tie0__CondCode2_0__SPRRegList1_3:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addSPRRegListOperands(Inst, 1);
    return true;
  case Convert__Reg1_1__CondCode2_0__DPRRegList1_2:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[3])->addDPRRegListOperands(Inst, 1);
    return true;
  case Convert__Reg1_1__CondCode2_0__SPRRegList1_2:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[3])->addSPRRegListOperands(Inst, 1);
    return true;
  case Convert__Reg1_1__AddrMode52_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addAddrMode5Operands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__AddrMode52_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addAddrMode5Operands(Inst, 2);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addVectorIndex32Operands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addVectorIndex16Operands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Reg1_2__Reg1_2__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__Reg1_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__FPImm1_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addFPImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__NEONi32vmov1_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addNEONi32vmovOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__NEONi16splat1_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addNEONi16splatOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__NEONi32vmovNeg1_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addNEONi32vmovNegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__NEONi64splat1_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addNEONi64splatOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__NEONi8splat1_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addNEONi8splatOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Tie0__Reg1_4__VectorIndex161_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addVectorIndex16Operands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Tie0__Reg1_4__VectorIndex321_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addVectorIndex32Operands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Tie0__Reg1_4__VectorIndex81_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addVectorIndex8Operands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_2__Reg1_3__VectorIndex321_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addVectorIndex32Operands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_2__Reg1_3__VectorIndex161_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addVectorIndex16Operands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addVectorIndex32Operands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addVectorIndex16Operands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__regSP__Tie0__CondCode2_0__DPRRegList1_1:
    Inst.addOperand(MCOperand::CreateReg(ARM::SP));
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[2])->addDPRRegListOperands(Inst, 1);
    return true;
  case Convert__regSP__Tie0__CondCode2_0__SPRRegList1_1:
    Inst.addOperand(MCOperand::CreateReg(ARM::SP));
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[2])->addSPRRegListOperands(Inst, 1);
    return true;
  case Convert__regSP__Tie0__CondCode2_0__DPRRegList1_2:
    Inst.addOperand(MCOperand::CreateReg(ARM::SP));
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[3])->addDPRRegListOperands(Inst, 1);
    return true;
  case Convert__regSP__Tie0__CondCode2_0__SPRRegList1_2:
    Inst.addOperand(MCOperand::CreateReg(ARM::SP));
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    ((ARMOperand*)Operands[3])->addSPRRegListOperands(Inst, 1);
    return true;
  case Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__ShrImm641_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_2__Imm0_151_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_2__Imm0_311_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_2__Imm0_631_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_2__Imm0_71_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__Imm161_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__Imm321_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__Imm1_71_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__Imm81_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__Imm1_151_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__Imm1_311_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Tie0__Reg1_2__ShrImm161_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Tie0__Reg1_2__ShrImm321_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Tie0__Reg1_2__ShrImm641_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Tie0__Reg1_2__ShrImm81_3__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Tie0__Reg1_3__Imm1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__AlignedMemory2_3__VecListDPair1_2__CondCode2_0:
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__AlignedMemory2_3__VecListFourD1_2__CondCode2_0:
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__AlignedMemory2_3__VecListOneD1_2__CondCode2_0:
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__AlignedMemory2_3__VecListThreeD1_2__CondCode2_0:
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case ConvertCustom_cvtVSTwbFixed:
    return cvtVSTwbFixed(Inst, Opcode, Operands);
  case ConvertCustom_cvtVSTwbRegister:
    return cvtVSTwbRegister(Inst, Opcode, Operands);
  case Convert__AlignedMemory2_8__Reg1_3__Imm1_5__CondCode2_0:
    ((ARMOperand*)Operands[9])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Imm1_5__CondCode2_0:
    ((ARMOperand*)Operands[9])->addAlignedMemoryOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[10])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_8__Imm1_9__Reg1_3__Imm1_5__CondCode2_0:
    ((ARMOperand*)Operands[9])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[10])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_8__Tie0__Imm1_10__Reg1_3__Imm1_5__CondCode2_0:
    ((ARMOperand*)Operands[9])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[11])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__AlignedMemory2_3__VecListDPairSpaced1_2__CondCode2_0:
    ((ARMOperand*)Operands[4])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[3])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__AlignedMemory2_7__Reg1_3__Reg1_4__Reg1_5__CondCode2_0:
    ((ARMOperand*)Operands[8])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__AlignedMemory1_7__Tie0__Imm1_8__Reg1_3__Reg1_4__Reg1_5__CondCode2_0:
    ((ARMOperand*)Operands[8])->addAlignedMemoryOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[9])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__AlignedMemory2_8__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0:
    ((ARMOperand*)Operands[9])->addAlignedMemoryOperands(Inst, 2);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[7])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0:
    ((ARMOperand*)Operands[9])->addAlignedMemoryOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[10])->addImmOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[6])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[7])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_1__Reg1_2__Tie0__Tie1__CondCode2_0:
    ((ARMOperand*)Operands[2])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    Inst.addOperand(Inst.getOperand(1));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    Inst.addOperand(Inst.getOperand(1));
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__VecListDPair1_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__VecListFourD1_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__VecListOneD1_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__VecListThreeD1_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[4])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Tie0__VecListDPair1_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[4])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Tie0__VecListFourD1_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[4])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Tie0__VecListOneD1_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[4])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  case Convert__Reg1_2__Tie0__VecListThreeD1_3__Reg1_4__CondCode2_0:
    ((ARMOperand*)Operands[3])->addRegOperands(Inst, 1);
    Inst.addOperand(Inst.getOperand(0));
    ((ARMOperand*)Operands[4])->addVecListOperands(Inst, 1);
    ((ARMOperand*)Operands[5])->addRegOperands(Inst, 1);
    ((ARMOperand*)Operands[1])->addCondCodeOperands(Inst, 2);
    return true;
  }
  return false;
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  MCK__EXCLAIM_, // '!'
  MCK__35_0, // '#0'
  MCK__DOT_16, // '.16'
  MCK__DOT_32, // '.32'
  MCK__DOT_8, // '.8'
  MCK__DOT_d, // '.d'
  MCK__DOT_f32, // '.f32'
  MCK__DOT_f64, // '.f64'
  MCK__DOT_i32, // '.i32'
  MCK__DOT_i64, // '.i64'
  MCK__DOT_64, // '.64'
  MCK__DOT_f, // '.f'
  MCK__DOT_f16, // '.f16'
  MCK__DOT_i16, // '.i16'
  MCK__DOT_s8, // '.s8'
  MCK__DOT_u8, // '.u8'
  MCK__DOT_i8, // '.i8'
  MCK__DOT_p16, // '.p16'
  MCK__DOT_p8, // '.p8'
  MCK__DOT_s16, // '.s16'
  MCK__DOT_s32, // '.s32'
  MCK__DOT_s64, // '.s64'
  MCK__DOT_u16, // '.u16'
  MCK__DOT_u32, // '.u32'
  MCK__DOT_u64, // '.u64'
  MCK__DOT_w, // '.w'
  MCK_APSR_95_nzcv, // 'APSR_nzcv'
  MCK__91_, // '['
  MCK__93_, // ']'
  MCK__94_, // '^'
  MCK__123_, // '{'
  MCK__125_, // '}'
  MCK_Reg0, // derived register class
  MCK_tGPR, // register class 'tGPR'
  MCK_Reg9, // derived register class
  MCK_Reg8, // derived register class
  MCK_Reg6, // derived register class
  MCK_tcGPR, // register class 'tcGPR'
  MCK_rGPR, // register class 'rGPR'
  MCK_GPRsp, // register class 'GPRsp,SP'
  MCK_LR, // register class 'LR'
  MCK_GPRnopc, // register class 'GPRnopc'
  MCK_PC, // register class 'PC'
  MCK_hGPR, // register class 'hGPR'
  MCK_GPR, // register class 'GPR'
  MCK_SPR_8, // register class 'SPR_8'
  MCK_SPR, // register class 'SPR'
  MCK_DPR_8, // register class 'DPR_8'
  MCK_DPR_VFP2, // register class 'DPR_VFP2'
  MCK_DPR, // register class 'DPR'
  MCK_QPR_8, // register class 'QPR_8'
  MCK_Reg24, // derived register class
  MCK_Reg25, // derived register class
  MCK_QPR_VFP2, // register class 'QPR_VFP2'
  MCK_Reg22, // derived register class
  MCK_Reg23, // derived register class
  MCK_QPR, // register class 'QPR'
  MCK_DPair, // register class 'DPair'
  MCK_CCR, // register class 'CCR,CPSR'
  MCK_APSR, // register class 'APSR'
  MCK_SPSR, // register class 'SPSR'
  MCK_FPSCR, // register class 'FPSCR'
  MCK_FPSID, // register class 'FPSID'
  MCK_MVFR1, // register class 'MVFR1'
  MCK_MVFR0, // register class 'MVFR0'
  MCK_FPEXC, // register class 'FPEXC'
  MCK_Reg34, // derived register class
  MCK_Reg35, // derived register class
  MCK_Reg36, // derived register class
  MCK_Reg37, // derived register class
  MCK_DPairSpc, // register class 'DPairSpc'
  MCK_Reg39, // derived register class
  MCK_Reg40, // derived register class
  MCK_Reg41, // derived register class
  MCK_Reg51, // derived register class
  MCK_Reg52, // derived register class
  MCK_Reg49, // derived register class
  MCK_Reg50, // derived register class
  MCK_Reg47, // derived register class
  MCK_Reg48, // derived register class
  MCK_Reg42, // derived register class
  MCK_Reg45, // derived register class
  MCK_Reg46, // derived register class
  MCK_QQPR, // register class 'QQPR'
  MCK_DQuad, // register class 'DQuad'
  MCK_Reg53, // derived register class
  MCK_Reg54, // derived register class
  MCK_Reg55, // derived register class
  MCK_Reg56, // derived register class
  MCK_Reg57, // derived register class
  MCK_Reg58, // derived register class
  MCK_Reg59, // derived register class
  MCK_Reg60, // derived register class
  MCK_QQQQPR, // register class 'QQQQPR'
  MCK_Reg62, // derived register class
  MCK_Reg63, // derived register class
  MCK_Reg64, // derived register class
  MCK_Reg65, // derived register class
  MCK_Reg66, // derived register class
  MCK_Reg67, // derived register class
  MCK_DTriple, // register class 'DTriple'
  MCK_Reg69, // derived register class
  MCK_Reg70, // derived register class
  MCK_Reg71, // derived register class
  MCK_Reg72, // derived register class
  MCK_Reg73, // derived register class
  MCK_Reg74, // derived register class
  MCK_DTripleSpc, // register class 'DTripleSpc,DQuadSpc'
  MCK_AM2OffsetImm, // user defined class 'AM2OffsetImmAsmOperand'
  MCK_AM3Offset, // user defined class 'AM3OffsetAsmOperand'
  MCK_AddrMode2, // user defined class 'AddrMode2AsmOperand'
  MCK_AddrMode3, // user defined class 'AddrMode3AsmOperand'
  MCK_AddrMode5, // user defined class 'AddrMode5AsmOperand'
  MCK_AlignedMemory, // user defined class 'AddrMode6AsmOperand'
  MCK_Bitfield, // user defined class 'BitfieldAsmOperand'
  MCK_CCOut, // user defined class 'CCOutOperand'
  MCK_CondCode, // user defined class 'CondCodeOperand'
  MCK_CoprocNum, // user defined class 'CoprocNumAsmOperand'
  MCK_CoprocOption, // user defined class 'CoprocOptionAsmOperand'
  MCK_CoprocReg, // user defined class 'CoprocRegAsmOperand'
  MCK_DPRRegList, // user defined class 'DPRRegListAsmOperand'
  MCK_FPImm, // user defined class 'FPImmOperand'
  MCK_Imm0_15, // user defined class 'Imm0_15AsmOperand'
  MCK_Imm0_1, // user defined class 'Imm0_1AsmOperand'
  MCK_Imm0_255, // user defined class 'Imm0_255AsmOperand'
  MCK_Imm0_31, // user defined class 'Imm0_31AsmOperand'
  MCK_Imm0_32, // user defined class 'Imm0_32AsmOperand'
  MCK_Imm0_3, // user defined class 'Imm0_3AsmOperand'
  MCK_Imm0_63, // user defined class 'Imm0_63AsmOperand'
  MCK_Imm0_65535, // user defined class 'Imm0_65535AsmOperand'
  MCK_Imm0_65535Expr, // user defined class 'Imm0_65535ExprAsmOperand'
  MCK_Imm0_7, // user defined class 'Imm0_7AsmOperand'
  MCK_Imm16, // user defined class 'Imm16AsmOperand'
  MCK_Imm1_15, // user defined class 'Imm1_15AsmOperand'
  MCK_Imm1_16, // user defined class 'Imm1_16AsmOperand'
  MCK_Imm1_31, // user defined class 'Imm1_31AsmOperand'
  MCK_Imm1_32, // user defined class 'Imm1_32AsmOperand'
  MCK_Imm1_7, // user defined class 'Imm1_7AsmOperand'
  MCK_Imm24bit, // user defined class 'Imm24bitAsmOperand'
  MCK_Imm32, // user defined class 'Imm32AsmOperand'
  MCK_Imm8, // user defined class 'Imm8AsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_MSRMask, // user defined class 'MSRMaskOperand'
  MCK_MemBarrierOpt, // user defined class 'MemBarrierOptOperand'
  MCK_MemImm0_1020s4Offset, // user defined class 'MemImm0_1020s4OffsetAsmOperand'
  MCK_MemImm12Offset, // user defined class 'MemImm12OffsetAsmOperand'
  MCK_MemImm8Offset, // user defined class 'MemImm8OffsetAsmOperand'
  MCK_MemImm8s4Offset, // user defined class 'MemImm8s4OffsetAsmOperand'
  MCK_MemNegImm8Offset, // user defined class 'MemNegImm8OffsetAsmOperand'
  MCK_MemNoOffset, // user defined class 'MemNoOffsetAsmOperand'
  MCK_MemPosImm8Offset, // user defined class 'MemPosImm8OffsetAsmOperand'
  MCK_MemRegOffset, // user defined class 'MemRegOffsetAsmOperand'
  MCK_PKHASRImm, // user defined class 'PKHASRAsmOperand'
  MCK_PKHLSLImm, // user defined class 'PKHLSLAsmOperand'
  MCK_PostIdxImm8, // user defined class 'PostIdxImm8AsmOperand'
  MCK_PostIdxImm8s4, // user defined class 'PostIdxImm8s4AsmOperand'
  MCK_PostIdxReg, // user defined class 'PostIdxRegAsmOperand'
  MCK_PostIdxRegShifted, // user defined class 'PostIdxRegShiftedAsmOperand'
  MCK_ProcIFlags, // user defined class 'ProcIFlagsOperand'
  MCK_RegList, // user defined class 'RegListAsmOperand'
  MCK_RotImm, // user defined class 'RotImmAsmOperand'
  MCK_ARMSOImm, // user defined class 'SOImmAsmOperand'
  MCK_SPRRegList, // user defined class 'SPRRegListAsmOperand'
  MCK_SetEndImm, // user defined class 'SetEndAsmOperand'
  MCK_RegShiftedImm, // user defined class 'ShiftedImmAsmOperand'
  MCK_RegShiftedReg, // user defined class 'ShiftedRegAsmOperand'
  MCK_ShifterImm, // user defined class 'ShifterImmAsmOperand'
  MCK_ImmThumbSR, // user defined class 'ThumbSRImmAsmOperand'
  MCK_VecListDPairAllLanes, // user defined class 'VecListDPairAllLanesAsmOperand'
  MCK_VecListDPair, // user defined class 'VecListDPairAsmOperand'
  MCK_VecListDPairSpacedAllLanes, // user defined class 'VecListDPairSpacedAllLanesAsmOperand'
  MCK_VecListDPairSpaced, // user defined class 'VecListDPairSpacedAsmOperand'
  MCK_VecListFourDAllLanes, // user defined class 'VecListFourDAllLanesAsmOperand'
  MCK_VecListFourD, // user defined class 'VecListFourDAsmOperand'
  MCK_VecListFourDByteIndexed, // user defined class 'VecListFourDByteIndexAsmOperand'
  MCK_VecListFourDHWordIndexed, // user defined class 'VecListFourDHWordIndexAsmOperand'
  MCK_VecListFourDWordIndexed, // user defined class 'VecListFourDWordIndexAsmOperand'
  MCK_VecListFourQAllLanes, // user defined class 'VecListFourQAllLanesAsmOperand'
  MCK_VecListFourQ, // user defined class 'VecListFourQAsmOperand'
  MCK_VecListFourQHWordIndexed, // user defined class 'VecListFourQHWordIndexAsmOperand'
  MCK_VecListFourQWordIndexed, // user defined class 'VecListFourQWordIndexAsmOperand'
  MCK_VecListOneDAllLanes, // user defined class 'VecListOneDAllLanesAsmOperand'
  MCK_VecListOneD, // user defined class 'VecListOneDAsmOperand'
  MCK_VecListOneDByteIndexed, // user defined class 'VecListOneDByteIndexAsmOperand'
  MCK_VecListOneDHWordIndexed, // user defined class 'VecListOneDHWordIndexAsmOperand'
  MCK_VecListOneDWordIndexed, // user defined class 'VecListOneDWordIndexAsmOperand'
  MCK_VecListThreeDAllLanes, // user defined class 'VecListThreeDAllLanesAsmOperand'
  MCK_VecListThreeD, // user defined class 'VecListThreeDAsmOperand'
  MCK_VecListThreeDByteIndexed, // user defined class 'VecListThreeDByteIndexAsmOperand'
  MCK_VecListThreeDHWordIndexed, // user defined class 'VecListThreeDHWordIndexAsmOperand'
  MCK_VecListThreeDWordIndexed, // user defined class 'VecListThreeDWordIndexAsmOperand'
  MCK_VecListThreeQAllLanes, // user defined class 'VecListThreeQAllLanesAsmOperand'
  MCK_VecListThreeQ, // user defined class 'VecListThreeQAsmOperand'
  MCK_VecListThreeQHWordIndexed, // user defined class 'VecListThreeQHWordIndexAsmOperand'
  MCK_VecListThreeQWordIndexed, // user defined class 'VecListThreeQWordIndexAsmOperand'
  MCK_VecListTwoDByteIndexed, // user defined class 'VecListTwoDByteIndexAsmOperand'
  MCK_VecListTwoDHWordIndexed, // user defined class 'VecListTwoDHWordIndexAsmOperand'
  MCK_VecListTwoDWordIndexed, // user defined class 'VecListTwoDWordIndexAsmOperand'
  MCK_VecListTwoQHWordIndexed, // user defined class 'VecListTwoQHWordIndexAsmOperand'
  MCK_VecListTwoQWordIndexed, // user defined class 'VecListTwoQWordIndexAsmOperand'
  MCK_VectorIndex16, // user defined class 'VectorIndex16Operand'
  MCK_VectorIndex32, // user defined class 'VectorIndex32Operand'
  MCK_VectorIndex8, // user defined class 'VectorIndex8Operand'
  MCK_MemTBB, // user defined class 'addrmode_tbb_asmoperand'
  MCK_MemTBH, // user defined class 'addrmode_tbh_asmoperand'
  MCK_FBits16, // user defined class 'fbits16_asm_operand'
  MCK_FBits32, // user defined class 'fbits32_asm_operand'
  MCK_Imm0_4095, // user defined class 'imm0_4095_asmoperand'
  MCK_Imm0_4095Neg, // user defined class 'imm0_4095_neg_asmoperand'
  MCK_ITMask, // user defined class 'it_mask_asmoperand'
  MCK_ITCondCode, // user defined class 'it_pred_asmoperand'
  MCK_NEONi16splat, // user defined class 'nImmSplatI16AsmOperand'
  MCK_NEONi32splat, // user defined class 'nImmSplatI32AsmOperand'
  MCK_NEONi64splat, // user defined class 'nImmSplatI64AsmOperand'
  MCK_NEONi8splat, // user defined class 'nImmSplatI8AsmOperand'
  MCK_NEONi32vmov, // user defined class 'nImmVMOVI32AsmOperand'
  MCK_NEONi32vmovNeg, // user defined class 'nImmVMOVI32NegAsmOperand'
  MCK_ShrImm16, // user defined class 'shr_imm16_asm_operand'
  MCK_ShrImm32, // user defined class 'shr_imm32_asm_operand'
  MCK_ShrImm64, // user defined class 'shr_imm64_asm_operand'
  MCK_ShrImm8, // user defined class 'shr_imm8_asm_operand'
  MCK_ARMSOImmNeg, // user defined class 'so_imm_neg_asmoperand'
  MCK_ARMSOImmNot, // user defined class 'so_imm_not_asmoperand'
  MCK_T2SOImm, // user defined class 't2_so_imm_asmoperand'
  MCK_T2SOImmNeg, // user defined class 't2_so_imm_neg_asmoperand'
  MCK_T2SOImmNot, // user defined class 't2_so_imm_not_asmoperand'
  MCK_MemUImm12Offset, // user defined class 't2addrmode_imm12_asmoperand'
  MCK_T2MemRegOffset, // user defined class 't2addrmode_so_reg_asmoperand'
  MCK_Imm8s4, // user defined class 't2am_imm8s4_offset_asmoperand'
  MCK_MemPCRelImm12, // user defined class 't2ldr_pcrel_imm12_asmoperand'
  MCK_MemThumbRIs1, // user defined class 't_addrmode_is1_asm_operand'
  MCK_MemThumbRIs2, // user defined class 't_addrmode_is2_asm_operand'
  MCK_MemThumbRIs4, // user defined class 't_addrmode_is4_asm_operand'
  MCK_MemThumbRR, // user defined class 't_addrmode_rr_asm_operand'
  MCK_MemThumbSPI, // user defined class 't_addrmode_sp_asm_operand'
  MCK_Imm0_1020s4, // user defined class 't_imm0_1020s4_asmoperand'
  MCK_Imm0_508s4, // user defined class 't_imm0_508s4_asmoperand'
  MCK_Imm0_508s4Neg, // user defined class 't_imm0_508s4_neg_asmoperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 6 strings to match.
    switch (Name[0]) {
    default: break;
    case '!':	 // 1 string to match.
      return MCK__EXCLAIM_;	 // "!"
    case '[':	 // 1 string to match.
      return MCK__91_;	 // "["
    case ']':	 // 1 string to match.
      return MCK__93_;	 // "]"
    case '^':	 // 1 string to match.
      return MCK__94_;	 // "^"
    case '{':	 // 1 string to match.
      return MCK__123_;	 // "{"
    case '}':	 // 1 string to match.
      return MCK__125_;	 // "}"
    }
    break;
  case 2:	 // 5 strings to match.
    switch (Name[0]) {
    default: break;
    case '#':	 // 1 string to match.
      if (Name[1] != '0')
        break;
      return MCK__35_0;	 // "#0"
    case '.':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case '8':	 // 1 string to match.
        return MCK__DOT_8;	 // ".8"
      case 'd':	 // 1 string to match.
        return MCK__DOT_d;	 // ".d"
      case 'f':	 // 1 string to match.
        return MCK__DOT_f;	 // ".f"
      case 'w':	 // 1 string to match.
        return MCK__DOT_w;	 // ".w"
      }
      break;
    }
    break;
  case 3:	 // 7 strings to match.
    if (Name[0] != '.')
      break;
    switch (Name[1]) {
    default: break;
    case '1':	 // 1 string to match.
      if (Name[2] != '6')
        break;
      return MCK__DOT_16;	 // ".16"
    case '3':	 // 1 string to match.
      if (Name[2] != '2')
        break;
      return MCK__DOT_32;	 // ".32"
    case '6':	 // 1 string to match.
      if (Name[2] != '4')
        break;
      return MCK__DOT_64;	 // ".64"
    case 'i':	 // 1 string to match.
      if (Name[2] != '8')
        break;
      return MCK__DOT_i8;	 // ".i8"
    case 'p':	 // 1 string to match.
      if (Name[2] != '8')
        break;
      return MCK__DOT_p8;	 // ".p8"
    case 's':	 // 1 string to match.
      if (Name[2] != '8')
        break;
      return MCK__DOT_s8;	 // ".s8"
    case 'u':	 // 1 string to match.
      if (Name[2] != '8')
        break;
      return MCK__DOT_u8;	 // ".u8"
    }
    break;
  case 4:	 // 13 strings to match.
    if (Name[0] != '.')
      break;
    switch (Name[1]) {
    default: break;
    case 'f':	 // 3 strings to match.
      switch (Name[2]) {
      default: break;
      case '1':	 // 1 string to match.
        if (Name[3] != '6')
          break;
        return MCK__DOT_f16;	 // ".f16"
      case '3':	 // 1 string to match.
        if (Name[3] != '2')
          break;
        return MCK__DOT_f32;	 // ".f32"
      case '6':	 // 1 string to match.
        if (Name[3] != '4')
          break;
        return MCK__DOT_f64;	 // ".f64"
      }
      break;
    case 'i':	 // 3 strings to match.
      switch (Name[2]) {
      default: break;
      case '1':	 // 1 string to match.
        if (Name[3] != '6')
          break;
        return MCK__DOT_i16;	 // ".i16"
      case '3':	 // 1 string to match.
        if (Name[3] != '2')
          break;
        return MCK__DOT_i32;	 // ".i32"
      case '6':	 // 1 string to match.
        if (Name[3] != '4')
          break;
        return MCK__DOT_i64;	 // ".i64"
      }
      break;
    case 'p':	 // 1 string to match.
      if (Name.substr(2, 2) != "16")
        break;
      return MCK__DOT_p16;	 // ".p16"
    case 's':	 // 3 strings to match.
      switch (Name[2]) {
      default: break;
      case '1':	 // 1 string to match.
        if (Name[3] != '6')
          break;
        return MCK__DOT_s16;	 // ".s16"
      case '3':	 // 1 string to match.
        if (Name[3] != '2')
          break;
        return MCK__DOT_s32;	 // ".s32"
      case '6':	 // 1 string to match.
        if (Name[3] != '4')
          break;
        return MCK__DOT_s64;	 // ".s64"
      }
      break;
    case 'u':	 // 3 strings to match.
      switch (Name[2]) {
      default: break;
      case '1':	 // 1 string to match.
        if (Name[3] != '6')
          break;
        return MCK__DOT_u16;	 // ".u16"
      case '3':	 // 1 string to match.
        if (Name[3] != '2')
          break;
        return MCK__DOT_u32;	 // ".u32"
      case '6':	 // 1 string to match.
        if (Name[3] != '4')
          break;
        return MCK__DOT_u64;	 // ".u64"
      }
      break;
    }
    break;
  case 9:	 // 1 string to match.
    if (Name.substr(0, 9) != "APSR_nzcv")
      break;
    return MCK_APSR_95_nzcv;	 // "APSR_nzcv"
  }
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \arg A is a subclass of \arg B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK__DOT_d:
    switch (B) {
    default: return false;
    case MCK__DOT_f64: return true;
    case MCK__DOT_64: return true;
    }

  case MCK__DOT_f32:
    return B == MCK__DOT_32;

  case MCK__DOT_f64:
    return B == MCK__DOT_64;

  case MCK__DOT_i32:
    return B == MCK__DOT_32;

  case MCK__DOT_i64:
    return B == MCK__DOT_64;

  case MCK__DOT_f:
    switch (B) {
    default: return false;
    case MCK__DOT_32: return true;
    case MCK__DOT_f32: return true;
    }

  case MCK__DOT_i16:
    return B == MCK__DOT_16;

  case MCK__DOT_s8:
    switch (B) {
    default: return false;
    case MCK__DOT_8: return true;
    case MCK__DOT_i8: return true;
    }

  case MCK__DOT_u8:
    switch (B) {
    default: return false;
    case MCK__DOT_8: return true;
    case MCK__DOT_i8: return true;
    }

  case MCK__DOT_i8:
    return B == MCK__DOT_8;

  case MCK__DOT_p16:
    return B == MCK__DOT_16;

  case MCK__DOT_p8:
    return B == MCK__DOT_8;

  case MCK__DOT_s16:
    switch (B) {
    default: return false;
    case MCK__DOT_16: return true;
    case MCK__DOT_i16: return true;
    }

  case MCK__DOT_s32:
    switch (B) {
    default: return false;
    case MCK__DOT_32: return true;
    case MCK__DOT_i32: return true;
    }

  case MCK__DOT_s64:
    switch (B) {
    default: return false;
    case MCK__DOT_i64: return true;
    case MCK__DOT_64: return true;
    }

  case MCK__DOT_u16:
    switch (B) {
    default: return false;
    case MCK__DOT_16: return true;
    case MCK__DOT_i16: return true;
    }

  case MCK__DOT_u32:
    switch (B) {
    default: return false;
    case MCK__DOT_32: return true;
    case MCK__DOT_i32: return true;
    }

  case MCK__DOT_u64:
    switch (B) {
    default: return false;
    case MCK__DOT_i64: return true;
    case MCK__DOT_64: return true;
    }

  case MCK_Reg0:
    switch (B) {
    default: return false;
    case MCK_tGPR: return true;
    case MCK_tcGPR: return true;
    case MCK_rGPR: return true;
    case MCK_GPRnopc: return true;
    case MCK_GPR: return true;
    }

  case MCK_tGPR:
    switch (B) {
    default: return false;
    case MCK_rGPR: return true;
    case MCK_GPRnopc: return true;
    case MCK_GPR: return true;
    }

  case MCK_Reg9:
    switch (B) {
    default: return false;
    case MCK_Reg8: return true;
    case MCK_Reg6: return true;
    case MCK_tcGPR: return true;
    case MCK_rGPR: return true;
    case MCK_GPRnopc: return true;
    case MCK_hGPR: return true;
    case MCK_GPR: return true;
    }

  case MCK_Reg8:
    switch (B) {
    default: return false;
    case MCK_Reg6: return true;
    case MCK_rGPR: return true;
    case MCK_GPRnopc: return true;
    case MCK_hGPR: return true;
    case MCK_GPR: return true;
    }

  case MCK_Reg6:
    switch (B) {
    default: return false;
    case MCK_GPRnopc: return true;
    case MCK_hGPR: return true;
    case MCK_GPR: return true;
    }

  case MCK_tcGPR:
    switch (B) {
    default: return false;
    case MCK_rGPR: return true;
    case MCK_GPRnopc: return true;
    case MCK_GPR: return true;
    }

  case MCK_rGPR:
    switch (B) {
    default: return false;
    case MCK_GPRnopc: return true;
    case MCK_GPR: return true;
    }

  case MCK_GPRsp:
    switch (B) {
    default: return false;
    case MCK_Reg6: return true;
    case MCK_GPRnopc: return true;
    case MCK_hGPR: return true;
    case MCK_GPR: return true;
    }

  case MCK_LR:
    switch (B) {
    default: return false;
    case MCK_Reg8: return true;
    case MCK_Reg6: return true;
    case MCK_rGPR: return true;
    case MCK_GPRnopc: return true;
    case MCK_hGPR: return true;
    case MCK_GPR: return true;
    }

  case MCK_GPRnopc:
    return B == MCK_GPR;

  case MCK_PC:
    switch (B) {
    default: return false;
    case MCK_hGPR: return true;
    case MCK_GPR: return true;
    }

  case MCK_hGPR:
    return B == MCK_GPR;

  case MCK_SPR_8:
    return B == MCK_SPR;

  case MCK_DPR_8:
    switch (B) {
    default: return false;
    case MCK_DPR_VFP2: return true;
    case MCK_DPR: return true;
    }

  case MCK_DPR_VFP2:
    return B == MCK_DPR;

  case MCK_QPR_8:
    switch (B) {
    default: return false;
    case MCK_Reg24: return true;
    case MCK_Reg25: return true;
    case MCK_QPR_VFP2: return true;
    case MCK_Reg22: return true;
    case MCK_Reg23: return true;
    case MCK_QPR: return true;
    case MCK_DPair: return true;
    }

  case MCK_Reg24:
    switch (B) {
    default: return false;
    case MCK_Reg25: return true;
    case MCK_Reg22: return true;
    case MCK_Reg23: return true;
    case MCK_DPair: return true;
    }

  case MCK_Reg25:
    switch (B) {
    default: return false;
    case MCK_Reg22: return true;
    case MCK_Reg23: return true;
    case MCK_DPair: return true;
    }

  case MCK_QPR_VFP2:
    switch (B) {
    default: return false;
    case MCK_Reg22: return true;
    case MCK_Reg23: return true;
    case MCK_QPR: return true;
    case MCK_DPair: return true;
    }

  case MCK_Reg22:
    switch (B) {
    default: return false;
    case MCK_Reg23: return true;
    case MCK_DPair: return true;
    }

  case MCK_Reg23:
    return B == MCK_DPair;

  case MCK_QPR:
    return B == MCK_DPair;

  case MCK_Reg34:
    switch (B) {
    default: return false;
    case MCK_Reg35: return true;
    case MCK_Reg36: return true;
    case MCK_Reg37: return true;
    case MCK_DPairSpc: return true;
    }

  case MCK_Reg35:
    switch (B) {
    default: return false;
    case MCK_Reg36: return true;
    case MCK_Reg37: return true;
    case MCK_DPairSpc: return true;
    }

  case MCK_Reg36:
    switch (B) {
    default: return false;
    case MCK_Reg37: return true;
    case MCK_DPairSpc: return true;
    }

  case MCK_Reg37:
    return B == MCK_DPairSpc;

  case MCK_Reg39:
    switch (B) {
    default: return false;
    case MCK_Reg40: return true;
    case MCK_Reg41: return true;
    case MCK_Reg51: return true;
    case MCK_Reg52: return true;
    case MCK_Reg49: return true;
    case MCK_Reg50: return true;
    case MCK_Reg47: return true;
    case MCK_Reg48: return true;
    case MCK_Reg42: return true;
    case MCK_Reg45: return true;
    case MCK_Reg46: return true;
    case MCK_QQPR: return true;
    case MCK_DQuad: return true;
    }

  case MCK_Reg40:
    switch (B) {
    default: return false;
    case MCK_Reg41: return true;
    case MCK_Reg49: return true;
    case MCK_Reg50: return true;
    case MCK_Reg47: return true;
    case MCK_Reg48: return true;
    case MCK_Reg42: return true;
    case MCK_Reg45: return true;
    case MCK_Reg46: return true;
    case MCK_QQPR: return true;
    case MCK_DQuad: return true;
    }

  case MCK_Reg41:
    switch (B) {
    default: return false;
    case MCK_Reg47: return true;
    case MCK_Reg48: return true;
    case MCK_Reg42: return true;
    case MCK_Reg45: return true;
    case MCK_Reg46: return true;
    case MCK_QQPR: return true;
    case MCK_DQuad: return true;
    }

  case MCK_Reg51:
    switch (B) {
    default: return false;
    case MCK_Reg52: return true;
    case MCK_Reg49: return true;
    case MCK_Reg50: return true;
    case MCK_Reg47: return true;
    case MCK_Reg48: return true;
    case MCK_Reg45: return true;
    case MCK_Reg46: return true;
    case MCK_DQuad: return true;
    }

  case MCK_Reg52:
    switch (B) {
    default: return false;
    case MCK_Reg49: return true;
    case MCK_Reg50: return true;
    case MCK_Reg47: return true;
    case MCK_Reg48: return true;
    case MCK_Reg45: return true;
    case MCK_Reg46: return true;
    case MCK_DQuad: return true;
    }

  case MCK_Reg49:
    switch (B) {
    default: return false;
    case MCK_Reg50: return true;
    case MCK_Reg47: return true;
    case MCK_Reg48: return true;
    case MCK_Reg45: return true;
    case MCK_Reg46: return true;
    case MCK_DQuad: return true;
    }

  case MCK_Reg50:
    switch (B) {
    default: return false;
    case MCK_Reg47: return true;
    case MCK_Reg48: return true;
    case MCK_Reg45: return true;
    case MCK_Reg46: return true;
    case MCK_DQuad: return true;
    }

  case MCK_Reg47:
    switch (B) {
    default: return false;
    case MCK_Reg48: return true;
    case MCK_Reg45: return true;
    case MCK_Reg46: return true;
    case MCK_DQuad: return true;
    }

  case MCK_Reg48:
    switch (B) {
    default: return false;
    case MCK_Reg45: return true;
    case MCK_Reg46: return true;
    case MCK_DQuad: return true;
    }

  case MCK_Reg42:
    switch (B) {
    default: return false;
    case MCK_Reg45: return true;
    case MCK_Reg46: return true;
    case MCK_QQPR: return true;
    case MCK_DQuad: return true;
    }

  case MCK_Reg45:
    switch (B) {
    default: return false;
    case MCK_Reg46: return true;
    case MCK_DQuad: return true;
    }

  case MCK_Reg46:
    return B == MCK_DQuad;

  case MCK_QQPR:
    return B == MCK_DQuad;

  case MCK_Reg53:
    switch (B) {
    default: return false;
    case MCK_Reg54: return true;
    case MCK_Reg55: return true;
    case MCK_Reg56: return true;
    case MCK_Reg57: return true;
    case MCK_Reg58: return true;
    case MCK_Reg59: return true;
    case MCK_Reg60: return true;
    case MCK_QQQQPR: return true;
    }

  case MCK_Reg54:
    switch (B) {
    default: return false;
    case MCK_Reg55: return true;
    case MCK_Reg56: return true;
    case MCK_Reg57: return true;
    case MCK_Reg58: return true;
    case MCK_Reg59: return true;
    case MCK_Reg60: return true;
    case MCK_QQQQPR: return true;
    }

  case MCK_Reg55:
    switch (B) {
    default: return false;
    case MCK_Reg56: return true;
    case MCK_Reg57: return true;
    case MCK_Reg58: return true;
    case MCK_Reg59: return true;
    case MCK_Reg60: return true;
    case MCK_QQQQPR: return true;
    }

  case MCK_Reg56:
    switch (B) {
    default: return false;
    case MCK_Reg57: return true;
    case MCK_Reg58: return true;
    case MCK_Reg59: return true;
    case MCK_Reg60: return true;
    case MCK_QQQQPR: return true;
    }

  case MCK_Reg57:
    switch (B) {
    default: return false;
    case MCK_Reg58: return true;
    case MCK_Reg59: return true;
    case MCK_Reg60: return true;
    case MCK_QQQQPR: return true;
    }

  case MCK_Reg58:
    switch (B) {
    default: return false;
    case MCK_Reg59: return true;
    case MCK_Reg60: return true;
    case MCK_QQQQPR: return true;
    }

  case MCK_Reg59:
    switch (B) {
    default: return false;
    case MCK_Reg60: return true;
    case MCK_QQQQPR: return true;
    }

  case MCK_Reg60:
    return B == MCK_QQQQPR;

  case MCK_Reg62:
    switch (B) {
    default: return false;
    case MCK_Reg63: return true;
    case MCK_Reg64: return true;
    case MCK_Reg65: return true;
    case MCK_Reg66: return true;
    case MCK_Reg67: return true;
    case MCK_DTriple: return true;
    }

  case MCK_Reg63:
    switch (B) {
    default: return false;
    case MCK_Reg64: return true;
    case MCK_Reg65: return true;
    case MCK_Reg66: return true;
    case MCK_Reg67: return true;
    case MCK_DTriple: return true;
    }

  case MCK_Reg64:
    switch (B) {
    default: return false;
    case MCK_Reg65: return true;
    case MCK_Reg66: return true;
    case MCK_Reg67: return true;
    case MCK_DTriple: return true;
    }

  case MCK_Reg65:
    switch (B) {
    default: return false;
    case MCK_Reg66: return true;
    case MCK_Reg67: return true;
    case MCK_DTriple: return true;
    }

  case MCK_Reg66:
    switch (B) {
    default: return false;
    case MCK_Reg67: return true;
    case MCK_DTriple: return true;
    }

  case MCK_Reg67:
    return B == MCK_DTriple;

  case MCK_Reg69:
    switch (B) {
    default: return false;
    case MCK_Reg70: return true;
    case MCK_Reg71: return true;
    case MCK_Reg72: return true;
    case MCK_Reg73: return true;
    case MCK_Reg74: return true;
    case MCK_DTripleSpc: return true;
    }

  case MCK_Reg70:
    switch (B) {
    default: return false;
    case MCK_Reg71: return true;
    case MCK_Reg72: return true;
    case MCK_Reg73: return true;
    case MCK_Reg74: return true;
    case MCK_DTripleSpc: return true;
    }

  case MCK_Reg71:
    switch (B) {
    default: return false;
    case MCK_Reg72: return true;
    case MCK_Reg73: return true;
    case MCK_Reg74: return true;
    case MCK_DTripleSpc: return true;
    }

  case MCK_Reg72:
    switch (B) {
    default: return false;
    case MCK_Reg73: return true;
    case MCK_Reg74: return true;
    case MCK_DTripleSpc: return true;
    }

  case MCK_Reg73:
    switch (B) {
    default: return false;
    case MCK_Reg74: return true;
    case MCK_DTripleSpc: return true;
    }

  case MCK_Reg74:
    return B == MCK_DTripleSpc;
  }
}

static bool validateOperandClass(MCParsedAsmOperand *GOp, MatchClassKind Kind) {
  ARMOperand &Operand = *(ARMOperand*)GOp;
  if (Kind == InvalidMatchClass)
    return false;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind);

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case ARM::R0: OpKind = MCK_Reg0; break;
    case ARM::R1: OpKind = MCK_Reg0; break;
    case ARM::R2: OpKind = MCK_Reg0; break;
    case ARM::R3: OpKind = MCK_Reg0; break;
    case ARM::R4: OpKind = MCK_tGPR; break;
    case ARM::R5: OpKind = MCK_tGPR; break;
    case ARM::R6: OpKind = MCK_tGPR; break;
    case ARM::R7: OpKind = MCK_tGPR; break;
    case ARM::R8: OpKind = MCK_Reg8; break;
    case ARM::R9: OpKind = MCK_Reg9; break;
    case ARM::R10: OpKind = MCK_Reg8; break;
    case ARM::R11: OpKind = MCK_Reg8; break;
    case ARM::R12: OpKind = MCK_Reg9; break;
    case ARM::SP: OpKind = MCK_GPRsp; break;
    case ARM::LR: OpKind = MCK_LR; break;
    case ARM::PC: OpKind = MCK_PC; break;
    case ARM::S0: OpKind = MCK_SPR_8; break;
    case ARM::S1: OpKind = MCK_SPR_8; break;
    case ARM::S2: OpKind = MCK_SPR_8; break;
    case ARM::S3: OpKind = MCK_SPR_8; break;
    case ARM::S4: OpKind = MCK_SPR_8; break;
    case ARM::S5: OpKind = MCK_SPR_8; break;
    case ARM::S6: OpKind = MCK_SPR_8; break;
    case ARM::S7: OpKind = MCK_SPR_8; break;
    case ARM::S8: OpKind = MCK_SPR_8; break;
    case ARM::S9: OpKind = MCK_SPR_8; break;
    case ARM::S10: OpKind = MCK_SPR_8; break;
    case ARM::S11: OpKind = MCK_SPR_8; break;
    case ARM::S12: OpKind = MCK_SPR_8; break;
    case ARM::S13: OpKind = MCK_SPR_8; break;
    case ARM::S14: OpKind = MCK_SPR_8; break;
    case ARM::S15: OpKind = MCK_SPR_8; break;
    case ARM::S16: OpKind = MCK_SPR; break;
    case ARM::S17: OpKind = MCK_SPR; break;
    case ARM::S18: OpKind = MCK_SPR; break;
    case ARM::S19: OpKind = MCK_SPR; break;
    case ARM::S20: OpKind = MCK_SPR; break;
    case ARM::S21: OpKind = MCK_SPR; break;
    case ARM::S22: OpKind = MCK_SPR; break;
    case ARM::S23: OpKind = MCK_SPR; break;
    case ARM::S24: OpKind = MCK_SPR; break;
    case ARM::S25: OpKind = MCK_SPR; break;
    case ARM::S26: OpKind = MCK_SPR; break;
    case ARM::S27: OpKind = MCK_SPR; break;
    case ARM::S28: OpKind = MCK_SPR; break;
    case ARM::S29: OpKind = MCK_SPR; break;
    case ARM::S30: OpKind = MCK_SPR; break;
    case ARM::S31: OpKind = MCK_SPR; break;
    case ARM::D0: OpKind = MCK_DPR_8; break;
    case ARM::D1: OpKind = MCK_DPR_8; break;
    case ARM::D2: OpKind = MCK_DPR_8; break;
    case ARM::D3: OpKind = MCK_DPR_8; break;
    case ARM::D4: OpKind = MCK_DPR_8; break;
    case ARM::D5: OpKind = MCK_DPR_8; break;
    case ARM::D6: OpKind = MCK_DPR_8; break;
    case ARM::D7: OpKind = MCK_DPR_8; break;
    case ARM::D8: OpKind = MCK_DPR_VFP2; break;
    case ARM::D9: OpKind = MCK_DPR_VFP2; break;
    case ARM::D10: OpKind = MCK_DPR_VFP2; break;
    case ARM::D11: OpKind = MCK_DPR_VFP2; break;
    case ARM::D12: OpKind = MCK_DPR_VFP2; break;
    case ARM::D13: OpKind = MCK_DPR_VFP2; break;
    case ARM::D14: OpKind = MCK_DPR_VFP2; break;
    case ARM::D15: OpKind = MCK_DPR_VFP2; break;
    case ARM::D16: OpKind = MCK_DPR; break;
    case ARM::D17: OpKind = MCK_DPR; break;
    case ARM::D18: OpKind = MCK_DPR; break;
    case ARM::D19: OpKind = MCK_DPR; break;
    case ARM::D20: OpKind = MCK_DPR; break;
    case ARM::D21: OpKind = MCK_DPR; break;
    case ARM::D22: OpKind = MCK_DPR; break;
    case ARM::D23: OpKind = MCK_DPR; break;
    case ARM::D24: OpKind = MCK_DPR; break;
    case ARM::D25: OpKind = MCK_DPR; break;
    case ARM::D26: OpKind = MCK_DPR; break;
    case ARM::D27: OpKind = MCK_DPR; break;
    case ARM::D28: OpKind = MCK_DPR; break;
    case ARM::D29: OpKind = MCK_DPR; break;
    case ARM::D30: OpKind = MCK_DPR; break;
    case ARM::D31: OpKind = MCK_DPR; break;
    case ARM::Q0: OpKind = MCK_QPR_8; break;
    case ARM::Q1: OpKind = MCK_QPR_8; break;
    case ARM::Q2: OpKind = MCK_QPR_8; break;
    case ARM::Q3: OpKind = MCK_QPR_8; break;
    case ARM::Q4: OpKind = MCK_QPR_VFP2; break;
    case ARM::Q5: OpKind = MCK_QPR_VFP2; break;
    case ARM::Q6: OpKind = MCK_QPR_VFP2; break;
    case ARM::Q7: OpKind = MCK_QPR_VFP2; break;
    case ARM::Q8: OpKind = MCK_QPR; break;
    case ARM::Q9: OpKind = MCK_QPR; break;
    case ARM::Q10: OpKind = MCK_QPR; break;
    case ARM::Q11: OpKind = MCK_QPR; break;
    case ARM::Q12: OpKind = MCK_QPR; break;
    case ARM::Q13: OpKind = MCK_QPR; break;
    case ARM::Q14: OpKind = MCK_QPR; break;
    case ARM::Q15: OpKind = MCK_QPR; break;
    case ARM::CPSR: OpKind = MCK_CCR; break;
    case ARM::APSR: OpKind = MCK_APSR; break;
    case ARM::SPSR: OpKind = MCK_SPSR; break;
    case ARM::FPSCR: OpKind = MCK_FPSCR; break;
    case ARM::FPSID: OpKind = MCK_FPSID; break;
    case ARM::MVFR1: OpKind = MCK_MVFR1; break;
    case ARM::MVFR0: OpKind = MCK_MVFR0; break;
    case ARM::FPEXC: OpKind = MCK_FPEXC; break;
    case ARM::D0_D2: OpKind = MCK_Reg34; break;
    case ARM::Q0_Q1: OpKind = MCK_Reg39; break;
    case ARM::D1_D3: OpKind = MCK_Reg34; break;
    case ARM::D2_D4: OpKind = MCK_Reg34; break;
    case ARM::D3_D5: OpKind = MCK_Reg34; break;
    case ARM::D4_D6: OpKind = MCK_Reg34; break;
    case ARM::D5_D7: OpKind = MCK_Reg34; break;
    case ARM::D6_D8: OpKind = MCK_Reg35; break;
    case ARM::D7_D9: OpKind = MCK_Reg35; break;
    case ARM::D8_D10: OpKind = MCK_Reg36; break;
    case ARM::D9_D11: OpKind = MCK_Reg36; break;
    case ARM::D10_D12: OpKind = MCK_Reg36; break;
    case ARM::D11_D13: OpKind = MCK_Reg36; break;
    case ARM::D12_D14: OpKind = MCK_Reg36; break;
    case ARM::D13_D15: OpKind = MCK_Reg36; break;
    case ARM::D14_D16: OpKind = MCK_Reg37; break;
    case ARM::D15_D17: OpKind = MCK_Reg37; break;
    case ARM::D16_D18: OpKind = MCK_DPairSpc; break;
    case ARM::D17_D19: OpKind = MCK_DPairSpc; break;
    case ARM::D18_D20: OpKind = MCK_DPairSpc; break;
    case ARM::D19_D21: OpKind = MCK_DPairSpc; break;
    case ARM::D20_D22: OpKind = MCK_DPairSpc; break;
    case ARM::D21_D23: OpKind = MCK_DPairSpc; break;
    case ARM::D22_D24: OpKind = MCK_DPairSpc; break;
    case ARM::D23_D25: OpKind = MCK_DPairSpc; break;
    case ARM::D24_D26: OpKind = MCK_DPairSpc; break;
    case ARM::D25_D27: OpKind = MCK_DPairSpc; break;
    case ARM::D26_D28: OpKind = MCK_DPairSpc; break;
    case ARM::D27_D29: OpKind = MCK_DPairSpc; break;
    case ARM::D28_D30: OpKind = MCK_DPairSpc; break;
    case ARM::D29_D31: OpKind = MCK_DPairSpc; break;
    case ARM::Q1_Q2: OpKind = MCK_Reg39; break;
    case ARM::Q2_Q3: OpKind = MCK_Reg39; break;
    case ARM::Q3_Q4: OpKind = MCK_Reg40; break;
    case ARM::Q4_Q5: OpKind = MCK_Reg41; break;
    case ARM::Q5_Q6: OpKind = MCK_Reg41; break;
    case ARM::Q6_Q7: OpKind = MCK_Reg41; break;
    case ARM::Q7_Q8: OpKind = MCK_Reg42; break;
    case ARM::Q8_Q9: OpKind = MCK_QQPR; break;
    case ARM::Q9_Q10: OpKind = MCK_QQPR; break;
    case ARM::Q10_Q11: OpKind = MCK_QQPR; break;
    case ARM::Q11_Q12: OpKind = MCK_QQPR; break;
    case ARM::Q12_Q13: OpKind = MCK_QQPR; break;
    case ARM::Q13_Q14: OpKind = MCK_QQPR; break;
    case ARM::Q14_Q15: OpKind = MCK_QQPR; break;
    case ARM::Q0_Q1_Q2_Q3: OpKind = MCK_Reg53; break;
    case ARM::Q1_Q2_Q3_Q4: OpKind = MCK_Reg54; break;
    case ARM::Q2_Q3_Q4_Q5: OpKind = MCK_Reg55; break;
    case ARM::Q3_Q4_Q5_Q6: OpKind = MCK_Reg56; break;
    case ARM::Q4_Q5_Q6_Q7: OpKind = MCK_Reg57; break;
    case ARM::Q5_Q6_Q7_Q8: OpKind = MCK_Reg58; break;
    case ARM::Q6_Q7_Q8_Q9: OpKind = MCK_Reg59; break;
    case ARM::Q7_Q8_Q9_Q10: OpKind = MCK_Reg60; break;
    case ARM::Q8_Q9_Q10_Q11: OpKind = MCK_QQQQPR; break;
    case ARM::Q9_Q10_Q11_Q12: OpKind = MCK_QQQQPR; break;
    case ARM::Q10_Q11_Q12_Q13: OpKind = MCK_QQQQPR; break;
    case ARM::Q11_Q12_Q13_Q14: OpKind = MCK_QQQQPR; break;
    case ARM::Q12_Q13_Q14_Q15: OpKind = MCK_QQQQPR; break;
    case ARM::D0_D1_D2: OpKind = MCK_Reg62; break;
    case ARM::D1_D2_D3: OpKind = MCK_Reg62; break;
    case ARM::D2_D3_D4: OpKind = MCK_Reg62; break;
    case ARM::D3_D4_D5: OpKind = MCK_Reg62; break;
    case ARM::D4_D5_D6: OpKind = MCK_Reg62; break;
    case ARM::D5_D6_D7: OpKind = MCK_Reg62; break;
    case ARM::D6_D7_D8: OpKind = MCK_Reg63; break;
    case ARM::D7_D8_D9: OpKind = MCK_Reg64; break;
    case ARM::D8_D9_D10: OpKind = MCK_Reg65; break;
    case ARM::D9_D10_D11: OpKind = MCK_Reg65; break;
    case ARM::D10_D11_D12: OpKind = MCK_Reg65; break;
    case ARM::D11_D12_D13: OpKind = MCK_Reg65; break;
    case ARM::D12_D13_D14: OpKind = MCK_Reg65; break;
    case ARM::D13_D14_D15: OpKind = MCK_Reg65; break;
    case ARM::D14_D15_D16: OpKind = MCK_Reg66; break;
    case ARM::D15_D16_D17: OpKind = MCK_Reg67; break;
    case ARM::D16_D17_D18: OpKind = MCK_DTriple; break;
    case ARM::D17_D18_D19: OpKind = MCK_DTriple; break;
    case ARM::D18_D19_D20: OpKind = MCK_DTriple; break;
    case ARM::D19_D20_D21: OpKind = MCK_DTriple; break;
    case ARM::D20_D21_D22: OpKind = MCK_DTriple; break;
    case ARM::D21_D22_D23: OpKind = MCK_DTriple; break;
    case ARM::D22_D23_D24: OpKind = MCK_DTriple; break;
    case ARM::D23_D24_D25: OpKind = MCK_DTriple; break;
    case ARM::D24_D25_D26: OpKind = MCK_DTriple; break;
    case ARM::D25_D26_D27: OpKind = MCK_DTriple; break;
    case ARM::D26_D27_D28: OpKind = MCK_DTriple; break;
    case ARM::D27_D28_D29: OpKind = MCK_DTriple; break;
    case ARM::D28_D29_D30: OpKind = MCK_DTriple; break;
    case ARM::D29_D30_D31: OpKind = MCK_DTriple; break;
    case ARM::D0_D2_D4: OpKind = MCK_Reg69; break;
    case ARM::D1_D3_D5: OpKind = MCK_Reg69; break;
    case ARM::D3_D5_D7: OpKind = MCK_Reg69; break;
    case ARM::D2_D4_D6: OpKind = MCK_Reg69; break;
    case ARM::D4_D6_D8: OpKind = MCK_Reg70; break;
    case ARM::D5_D7_D9: OpKind = MCK_Reg70; break;
    case ARM::D6_D8_D10: OpKind = MCK_Reg71; break;
    case ARM::D7_D9_D11: OpKind = MCK_Reg71; break;
    case ARM::D8_D10_D12: OpKind = MCK_Reg72; break;
    case ARM::D9_D11_D13: OpKind = MCK_Reg72; break;
    case ARM::D10_D12_D14: OpKind = MCK_Reg72; break;
    case ARM::D11_D13_D15: OpKind = MCK_Reg72; break;
    case ARM::D12_D14_D16: OpKind = MCK_Reg73; break;
    case ARM::D13_D15_D17: OpKind = MCK_Reg73; break;
    case ARM::D14_D16_D18: OpKind = MCK_Reg74; break;
    case ARM::D15_D17_D19: OpKind = MCK_Reg74; break;
    case ARM::D16_D18_D20: OpKind = MCK_DTripleSpc; break;
    case ARM::D17_D19_D21: OpKind = MCK_DTripleSpc; break;
    case ARM::D18_D20_D22: OpKind = MCK_DTripleSpc; break;
    case ARM::D19_D21_D23: OpKind = MCK_DTripleSpc; break;
    case ARM::D20_D22_D24: OpKind = MCK_DTripleSpc; break;
    case ARM::D21_D23_D25: OpKind = MCK_DTripleSpc; break;
    case ARM::D22_D24_D26: OpKind = MCK_DTripleSpc; break;
    case ARM::D23_D25_D27: OpKind = MCK_DTripleSpc; break;
    case ARM::D24_D26_D28: OpKind = MCK_DTripleSpc; break;
    case ARM::D25_D27_D29: OpKind = MCK_DTripleSpc; break;
    case ARM::D26_D28_D30: OpKind = MCK_DTripleSpc; break;
    case ARM::D27_D29_D31: OpKind = MCK_DTripleSpc; break;
    case ARM::D1_D2: OpKind = MCK_Reg24; break;
    case ARM::D3_D4: OpKind = MCK_Reg24; break;
    case ARM::D5_D6: OpKind = MCK_Reg24; break;
    case ARM::D7_D8: OpKind = MCK_Reg25; break;
    case ARM::D9_D10: OpKind = MCK_Reg22; break;
    case ARM::D11_D12: OpKind = MCK_Reg22; break;
    case ARM::D13_D14: OpKind = MCK_Reg22; break;
    case ARM::D15_D16: OpKind = MCK_Reg23; break;
    case ARM::D17_D18: OpKind = MCK_DPair; break;
    case ARM::D19_D20: OpKind = MCK_DPair; break;
    case ARM::D21_D22: OpKind = MCK_DPair; break;
    case ARM::D23_D24: OpKind = MCK_DPair; break;
    case ARM::D25_D26: OpKind = MCK_DPair; break;
    case ARM::D27_D28: OpKind = MCK_DPair; break;
    case ARM::D29_D30: OpKind = MCK_DPair; break;
    case ARM::D1_D2_D3_D4: OpKind = MCK_Reg51; break;
    case ARM::D3_D4_D5_D6: OpKind = MCK_Reg51; break;
    case ARM::D5_D6_D7_D8: OpKind = MCK_Reg52; break;
    case ARM::D7_D8_D9_D10: OpKind = MCK_Reg50; break;
    case ARM::D9_D10_D11_D12: OpKind = MCK_Reg47; break;
    case ARM::D11_D12_D13_D14: OpKind = MCK_Reg47; break;
    case ARM::D13_D14_D15_D16: OpKind = MCK_Reg48; break;
    case ARM::D15_D16_D17_D18: OpKind = MCK_Reg46; break;
    case ARM::D17_D18_D19_D20: OpKind = MCK_DQuad; break;
    case ARM::D19_D20_D21_D22: OpKind = MCK_DQuad; break;
    case ARM::D21_D22_D23_D24: OpKind = MCK_DQuad; break;
    case ARM::D23_D24_D25_D26: OpKind = MCK_DQuad; break;
    case ARM::D25_D26_D27_D28: OpKind = MCK_DQuad; break;
    case ARM::D27_D28_D29_D30: OpKind = MCK_DQuad; break;
    }
    return isSubclass(OpKind, Kind);
  }

  // 'AM2OffsetImm' class
  if (Kind == MCK_AM2OffsetImm && Operand.isAM2OffsetImm()) {
    return true;
  }

  // 'AM3Offset' class
  if (Kind == MCK_AM3Offset && Operand.isAM3Offset()) {
    return true;
  }

  // 'AddrMode2' class
  if (Kind == MCK_AddrMode2 && Operand.isAddrMode2()) {
    return true;
  }

  // 'AddrMode3' class
  if (Kind == MCK_AddrMode3 && Operand.isAddrMode3()) {
    return true;
  }

  // 'AddrMode5' class
  if (Kind == MCK_AddrMode5 && Operand.isAddrMode5()) {
    return true;
  }

  // 'AlignedMemory' class
  if (Kind == MCK_AlignedMemory && Operand.isAlignedMemory()) {
    return true;
  }

  // 'Bitfield' class
  if (Kind == MCK_Bitfield && Operand.isBitfield()) {
    return true;
  }

  // 'CCOut' class
  if (Kind == MCK_CCOut && Operand.isCCOut()) {
    return true;
  }

  // 'CondCode' class
  if (Kind == MCK_CondCode && Operand.isCondCode()) {
    return true;
  }

  // 'CoprocNum' class
  if (Kind == MCK_CoprocNum && Operand.isCoprocNum()) {
    return true;
  }

  // 'CoprocOption' class
  if (Kind == MCK_CoprocOption && Operand.isCoprocOption()) {
    return true;
  }

  // 'CoprocReg' class
  if (Kind == MCK_CoprocReg && Operand.isCoprocReg()) {
    return true;
  }

  // 'DPRRegList' class
  if (Kind == MCK_DPRRegList && Operand.isDPRRegList()) {
    return true;
  }

  // 'FPImm' class
  if (Kind == MCK_FPImm && Operand.isFPImm()) {
    return true;
  }

  // 'Imm0_15' class
  if (Kind == MCK_Imm0_15 && Operand.isImm0_15()) {
    return true;
  }

  // 'Imm0_1' class
  if (Kind == MCK_Imm0_1 && Operand.isImm0_1()) {
    return true;
  }

  // 'Imm0_255' class
  if (Kind == MCK_Imm0_255 && Operand.isImm0_255()) {
    return true;
  }

  // 'Imm0_31' class
  if (Kind == MCK_Imm0_31 && Operand.isImm0_31()) {
    return true;
  }

  // 'Imm0_32' class
  if (Kind == MCK_Imm0_32 && Operand.isImm0_32()) {
    return true;
  }

  // 'Imm0_3' class
  if (Kind == MCK_Imm0_3 && Operand.isImm0_3()) {
    return true;
  }

  // 'Imm0_63' class
  if (Kind == MCK_Imm0_63 && Operand.isImm0_63()) {
    return true;
  }

  // 'Imm0_65535' class
  if (Kind == MCK_Imm0_65535 && Operand.isImm0_65535()) {
    return true;
  }

  // 'Imm0_65535Expr' class
  if (Kind == MCK_Imm0_65535Expr && Operand.isImm0_65535Expr()) {
    return true;
  }

  // 'Imm0_7' class
  if (Kind == MCK_Imm0_7 && Operand.isImm0_7()) {
    return true;
  }

  // 'Imm16' class
  if (Kind == MCK_Imm16 && Operand.isImm16()) {
    return true;
  }

  // 'Imm1_15' class
  if (Kind == MCK_Imm1_15 && Operand.isImm1_15()) {
    return true;
  }

  // 'Imm1_16' class
  if (Kind == MCK_Imm1_16 && Operand.isImm1_16()) {
    return true;
  }

  // 'Imm1_31' class
  if (Kind == MCK_Imm1_31 && Operand.isImm1_31()) {
    return true;
  }

  // 'Imm1_32' class
  if (Kind == MCK_Imm1_32 && Operand.isImm1_32()) {
    return true;
  }

  // 'Imm1_7' class
  if (Kind == MCK_Imm1_7 && Operand.isImm1_7()) {
    return true;
  }

  // 'Imm24bit' class
  if (Kind == MCK_Imm24bit && Operand.isImm24bit()) {
    return true;
  }

  // 'Imm32' class
  if (Kind == MCK_Imm32 && Operand.isImm32()) {
    return true;
  }

  // 'Imm8' class
  if (Kind == MCK_Imm8 && Operand.isImm8()) {
    return true;
  }

  // 'Imm' class
  if (Kind == MCK_Imm && Operand.isImm()) {
    return true;
  }

  // 'MSRMask' class
  if (Kind == MCK_MSRMask && Operand.isMSRMask()) {
    return true;
  }

  // 'MemBarrierOpt' class
  if (Kind == MCK_MemBarrierOpt && Operand.isMemBarrierOpt()) {
    return true;
  }

  // 'MemImm0_1020s4Offset' class
  if (Kind == MCK_MemImm0_1020s4Offset && Operand.isMemImm0_1020s4Offset()) {
    return true;
  }

  // 'MemImm12Offset' class
  if (Kind == MCK_MemImm12Offset && Operand.isMemImm12Offset()) {
    return true;
  }

  // 'MemImm8Offset' class
  if (Kind == MCK_MemImm8Offset && Operand.isMemImm8Offset()) {
    return true;
  }

  // 'MemImm8s4Offset' class
  if (Kind == MCK_MemImm8s4Offset && Operand.isMemImm8s4Offset()) {
    return true;
  }

  // 'MemNegImm8Offset' class
  if (Kind == MCK_MemNegImm8Offset && Operand.isMemNegImm8Offset()) {
    return true;
  }

  // 'MemNoOffset' class
  if (Kind == MCK_MemNoOffset && Operand.isMemNoOffset()) {
    return true;
  }

  // 'MemPosImm8Offset' class
  if (Kind == MCK_MemPosImm8Offset && Operand.isMemPosImm8Offset()) {
    return true;
  }

  // 'MemRegOffset' class
  if (Kind == MCK_MemRegOffset && Operand.isMemRegOffset()) {
    return true;
  }

  // 'PKHASRImm' class
  if (Kind == MCK_PKHASRImm && Operand.isPKHASRImm()) {
    return true;
  }

  // 'PKHLSLImm' class
  if (Kind == MCK_PKHLSLImm && Operand.isPKHLSLImm()) {
    return true;
  }

  // 'PostIdxImm8' class
  if (Kind == MCK_PostIdxImm8 && Operand.isPostIdxImm8()) {
    return true;
  }

  // 'PostIdxImm8s4' class
  if (Kind == MCK_PostIdxImm8s4 && Operand.isPostIdxImm8s4()) {
    return true;
  }

  // 'PostIdxReg' class
  if (Kind == MCK_PostIdxReg && Operand.isPostIdxReg()) {
    return true;
  }

  // 'PostIdxRegShifted' class
  if (Kind == MCK_PostIdxRegShifted && Operand.isPostIdxRegShifted()) {
    return true;
  }

  // 'ProcIFlags' class
  if (Kind == MCK_ProcIFlags && Operand.isProcIFlags()) {
    return true;
  }

  // 'RegList' class
  if (Kind == MCK_RegList && Operand.isRegList()) {
    return true;
  }

  // 'RotImm' class
  if (Kind == MCK_RotImm && Operand.isRotImm()) {
    return true;
  }

  // 'ARMSOImm' class
  if (Kind == MCK_ARMSOImm && Operand.isARMSOImm()) {
    return true;
  }

  // 'SPRRegList' class
  if (Kind == MCK_SPRRegList && Operand.isSPRRegList()) {
    return true;
  }

  // 'SetEndImm' class
  if (Kind == MCK_SetEndImm && Operand.isSetEndImm()) {
    return true;
  }

  // 'RegShiftedImm' class
  if (Kind == MCK_RegShiftedImm && Operand.isRegShiftedImm()) {
    return true;
  }

  // 'RegShiftedReg' class
  if (Kind == MCK_RegShiftedReg && Operand.isRegShiftedReg()) {
    return true;
  }

  // 'ShifterImm' class
  if (Kind == MCK_ShifterImm && Operand.isShifterImm()) {
    return true;
  }

  // 'ImmThumbSR' class
  if (Kind == MCK_ImmThumbSR && Operand.isImmThumbSR()) {
    return true;
  }

  // 'VecListDPairAllLanes' class
  if (Kind == MCK_VecListDPairAllLanes && Operand.isVecListDPairAllLanes()) {
    return true;
  }

  // 'VecListDPair' class
  if (Kind == MCK_VecListDPair && Operand.isVecListDPair()) {
    return true;
  }

  // 'VecListDPairSpacedAllLanes' class
  if (Kind == MCK_VecListDPairSpacedAllLanes && Operand.isVecListDPairSpacedAllLanes()) {
    return true;
  }

  // 'VecListDPairSpaced' class
  if (Kind == MCK_VecListDPairSpaced && Operand.isVecListDPairSpaced()) {
    return true;
  }

  // 'VecListFourDAllLanes' class
  if (Kind == MCK_VecListFourDAllLanes && Operand.isVecListFourDAllLanes()) {
    return true;
  }

  // 'VecListFourD' class
  if (Kind == MCK_VecListFourD && Operand.isVecListFourD()) {
    return true;
  }

  // 'VecListFourDByteIndexed' class
  if (Kind == MCK_VecListFourDByteIndexed && Operand.isVecListFourDByteIndexed()) {
    return true;
  }

  // 'VecListFourDHWordIndexed' class
  if (Kind == MCK_VecListFourDHWordIndexed && Operand.isVecListFourDHWordIndexed()) {
    return true;
  }

  // 'VecListFourDWordIndexed' class
  if (Kind == MCK_VecListFourDWordIndexed && Operand.isVecListFourDWordIndexed()) {
    return true;
  }

  // 'VecListFourQAllLanes' class
  if (Kind == MCK_VecListFourQAllLanes && Operand.isVecListFourQAllLanes()) {
    return true;
  }

  // 'VecListFourQ' class
  if (Kind == MCK_VecListFourQ && Operand.isVecListFourQ()) {
    return true;
  }

  // 'VecListFourQHWordIndexed' class
  if (Kind == MCK_VecListFourQHWordIndexed && Operand.isVecListFourQHWordIndexed()) {
    return true;
  }

  // 'VecListFourQWordIndexed' class
  if (Kind == MCK_VecListFourQWordIndexed && Operand.isVecListFourQWordIndexed()) {
    return true;
  }

  // 'VecListOneDAllLanes' class
  if (Kind == MCK_VecListOneDAllLanes && Operand.isVecListOneDAllLanes()) {
    return true;
  }

  // 'VecListOneD' class
  if (Kind == MCK_VecListOneD && Operand.isVecListOneD()) {
    return true;
  }

  // 'VecListOneDByteIndexed' class
  if (Kind == MCK_VecListOneDByteIndexed && Operand.isVecListOneDByteIndexed()) {
    return true;
  }

  // 'VecListOneDHWordIndexed' class
  if (Kind == MCK_VecListOneDHWordIndexed && Operand.isVecListOneDHWordIndexed()) {
    return true;
  }

  // 'VecListOneDWordIndexed' class
  if (Kind == MCK_VecListOneDWordIndexed && Operand.isVecListOneDWordIndexed()) {
    return true;
  }

  // 'VecListThreeDAllLanes' class
  if (Kind == MCK_VecListThreeDAllLanes && Operand.isVecListThreeDAllLanes()) {
    return true;
  }

  // 'VecListThreeD' class
  if (Kind == MCK_VecListThreeD && Operand.isVecListThreeD()) {
    return true;
  }

  // 'VecListThreeDByteIndexed' class
  if (Kind == MCK_VecListThreeDByteIndexed && Operand.isVecListThreeDByteIndexed()) {
    return true;
  }

  // 'VecListThreeDHWordIndexed' class
  if (Kind == MCK_VecListThreeDHWordIndexed && Operand.isVecListThreeDHWordIndexed()) {
    return true;
  }

  // 'VecListThreeDWordIndexed' class
  if (Kind == MCK_VecListThreeDWordIndexed && Operand.isVecListThreeDWordIndexed()) {
    return true;
  }

  // 'VecListThreeQAllLanes' class
  if (Kind == MCK_VecListThreeQAllLanes && Operand.isVecListThreeQAllLanes()) {
    return true;
  }

  // 'VecListThreeQ' class
  if (Kind == MCK_VecListThreeQ && Operand.isVecListThreeQ()) {
    return true;
  }

  // 'VecListThreeQHWordIndexed' class
  if (Kind == MCK_VecListThreeQHWordIndexed && Operand.isVecListThreeQHWordIndexed()) {
    return true;
  }

  // 'VecListThreeQWordIndexed' class
  if (Kind == MCK_VecListThreeQWordIndexed && Operand.isVecListThreeQWordIndexed()) {
    return true;
  }

  // 'VecListTwoDByteIndexed' class
  if (Kind == MCK_VecListTwoDByteIndexed && Operand.isVecListTwoDByteIndexed()) {
    return true;
  }

  // 'VecListTwoDHWordIndexed' class
  if (Kind == MCK_VecListTwoDHWordIndexed && Operand.isVecListTwoDHWordIndexed()) {
    return true;
  }

  // 'VecListTwoDWordIndexed' class
  if (Kind == MCK_VecListTwoDWordIndexed && Operand.isVecListTwoDWordIndexed()) {
    return true;
  }

  // 'VecListTwoQHWordIndexed' class
  if (Kind == MCK_VecListTwoQHWordIndexed && Operand.isVecListTwoQHWordIndexed()) {
    return true;
  }

  // 'VecListTwoQWordIndexed' class
  if (Kind == MCK_VecListTwoQWordIndexed && Operand.isVecListTwoQWordIndexed()) {
    return true;
  }

  // 'VectorIndex16' class
  if (Kind == MCK_VectorIndex16 && Operand.isVectorIndex16()) {
    return true;
  }

  // 'VectorIndex32' class
  if (Kind == MCK_VectorIndex32 && Operand.isVectorIndex32()) {
    return true;
  }

  // 'VectorIndex8' class
  if (Kind == MCK_VectorIndex8 && Operand.isVectorIndex8()) {
    return true;
  }

  // 'MemTBB' class
  if (Kind == MCK_MemTBB && Operand.isMemTBB()) {
    return true;
  }

  // 'MemTBH' class
  if (Kind == MCK_MemTBH && Operand.isMemTBH()) {
    return true;
  }

  // 'FBits16' class
  if (Kind == MCK_FBits16 && Operand.isFBits16()) {
    return true;
  }

  // 'FBits32' class
  if (Kind == MCK_FBits32 && Operand.isFBits32()) {
    return true;
  }

  // 'Imm0_4095' class
  if (Kind == MCK_Imm0_4095 && Operand.isImm0_4095()) {
    return true;
  }

  // 'Imm0_4095Neg' class
  if (Kind == MCK_Imm0_4095Neg && Operand.isImm0_4095Neg()) {
    return true;
  }

  // 'ITMask' class
  if (Kind == MCK_ITMask && Operand.isITMask()) {
    return true;
  }

  // 'ITCondCode' class
  if (Kind == MCK_ITCondCode && Operand.isITCondCode()) {
    return true;
  }

  // 'NEONi16splat' class
  if (Kind == MCK_NEONi16splat && Operand.isNEONi16splat()) {
    return true;
  }

  // 'NEONi32splat' class
  if (Kind == MCK_NEONi32splat && Operand.isNEONi32splat()) {
    return true;
  }

  // 'NEONi64splat' class
  if (Kind == MCK_NEONi64splat && Operand.isNEONi64splat()) {
    return true;
  }

  // 'NEONi8splat' class
  if (Kind == MCK_NEONi8splat && Operand.isNEONi8splat()) {
    return true;
  }

  // 'NEONi32vmov' class
  if (Kind == MCK_NEONi32vmov && Operand.isNEONi32vmov()) {
    return true;
  }

  // 'NEONi32vmovNeg' class
  if (Kind == MCK_NEONi32vmovNeg && Operand.isNEONi32vmovNeg()) {
    return true;
  }

  // 'ShrImm16' class
  if (Kind == MCK_ShrImm16 && Operand.isShrImm16()) {
    return true;
  }

  // 'ShrImm32' class
  if (Kind == MCK_ShrImm32 && Operand.isShrImm32()) {
    return true;
  }

  // 'ShrImm64' class
  if (Kind == MCK_ShrImm64 && Operand.isShrImm64()) {
    return true;
  }

  // 'ShrImm8' class
  if (Kind == MCK_ShrImm8 && Operand.isShrImm8()) {
    return true;
  }

  // 'ARMSOImmNeg' class
  if (Kind == MCK_ARMSOImmNeg && Operand.isARMSOImmNeg()) {
    return true;
  }

  // 'ARMSOImmNot' class
  if (Kind == MCK_ARMSOImmNot && Operand.isARMSOImmNot()) {
    return true;
  }

  // 'T2SOImm' class
  if (Kind == MCK_T2SOImm && Operand.isT2SOImm()) {
    return true;
  }

  // 'T2SOImmNeg' class
  if (Kind == MCK_T2SOImmNeg && Operand.isT2SOImmNeg()) {
    return true;
  }

  // 'T2SOImmNot' class
  if (Kind == MCK_T2SOImmNot && Operand.isT2SOImmNot()) {
    return true;
  }

  // 'MemUImm12Offset' class
  if (Kind == MCK_MemUImm12Offset && Operand.isMemUImm12Offset()) {
    return true;
  }

  // 'T2MemRegOffset' class
  if (Kind == MCK_T2MemRegOffset && Operand.isT2MemRegOffset()) {
    return true;
  }

  // 'Imm8s4' class
  if (Kind == MCK_Imm8s4 && Operand.isImm8s4()) {
    return true;
  }

  // 'MemPCRelImm12' class
  if (Kind == MCK_MemPCRelImm12 && Operand.isMemPCRelImm12()) {
    return true;
  }

  // 'MemThumbRIs1' class
  if (Kind == MCK_MemThumbRIs1 && Operand.isMemThumbRIs1()) {
    return true;
  }

  // 'MemThumbRIs2' class
  if (Kind == MCK_MemThumbRIs2 && Operand.isMemThumbRIs2()) {
    return true;
  }

  // 'MemThumbRIs4' class
  if (Kind == MCK_MemThumbRIs4 && Operand.isMemThumbRIs4()) {
    return true;
  }

  // 'MemThumbRR' class
  if (Kind == MCK_MemThumbRR && Operand.isMemThumbRR()) {
    return true;
  }

  // 'MemThumbSPI' class
  if (Kind == MCK_MemThumbSPI && Operand.isMemThumbSPI()) {
    return true;
  }

  // 'Imm0_1020s4' class
  if (Kind == MCK_Imm0_1020s4 && Operand.isImm0_1020s4()) {
    return true;
  }

  // 'Imm0_508s4' class
  if (Kind == MCK_Imm0_508s4 && Operand.isImm0_508s4()) {
    return true;
  }

  // 'Imm0_508s4Neg' class
  if (Kind == MCK_Imm0_508s4Neg && Operand.isImm0_508s4Neg()) {
    return true;
  }

  return false;
}

unsigned ARMAsmParser::
ComputeAvailableFeatures(uint64_t FB) const {
  unsigned Features = 0;
  if (((FB & ARM::HasV4TOps) != 0))
    Features |= Feature_HasV4T;
  if (((FB & ARM::HasV5TEOps) != 0))
    Features |= Feature_HasV5TE;
  if (((FB & ARM::HasV6Ops) != 0))
    Features |= Feature_HasV6;
  if (((FB & ARM::HasV6T2Ops) != 0))
    Features |= Feature_HasV6T2;
  if (((FB & ARM::HasV7Ops) != 0))
    Features |= Feature_HasV7;
  if (((FB & ARM::FeatureVFP2) != 0))
    Features |= Feature_HasVFP2;
  if (((FB & ARM::FeatureVFP3) != 0))
    Features |= Feature_HasVFP3;
  if (((FB & ARM::FeatureVFP4) != 0))
    Features |= Feature_HasVFP4;
  if (((FB & ARM::FeatureNEON) != 0))
    Features |= Feature_HasNEON;
  if (((FB & ARM::FeatureFP16) != 0))
    Features |= Feature_HasFP16;
  if (((FB & ARM::FeatureHWDiv) != 0))
    Features |= Feature_HasDivide;
  if (((FB & ARM::FeatureT2XtPk) != 0))
    Features |= Feature_HasT2ExtractPack;
  if (((FB & ARM::FeatureDSPThumb2) != 0))
    Features |= Feature_HasThumb2DSP;
  if (((FB & ARM::FeatureDB) != 0))
    Features |= Feature_HasDB;
  if (((FB & ARM::FeatureMP) != 0))
    Features |= Feature_HasMP;
  if (((FB & ARM::ModeThumb) != 0))
    Features |= Feature_IsThumb;
  if (((FB & ARM::ModeThumb) != 0) && ((FB & ARM::FeatureThumb2) != 0))
    Features |= Feature_IsThumb2;
  if (((FB & ARM::FeatureMClass) != 0))
    Features |= Feature_IsMClass;
  if (((FB & ARM::FeatureMClass) == 0))
    Features |= Feature_IsARClass;
  if (((FB & ARM::ModeThumb) == 0))
    Features |= Feature_IsARM;
  return Features;
}

namespace {
  struct MatchEntry {
    static const char *const MnemonicTable;
    uint32_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint32_t RequiredFeatures;
    uint8_t Classes[18];
    uint8_t AsmVariantID;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcode {
    bool operator()(const MatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic() < RHS;
    }
    bool operator()(StringRef LHS, const MatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const MatchEntry &LHS, const MatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const MatchEntry MatchTable[2994] = {
  { 0 /* adc */, ARM::tADC, Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 0 /* adc */, ARM::ADCrsr, Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedReg }, 0},
  { 0 /* adc */, ARM::ADCrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 0 /* adc */, ARM::ADCri, Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 0 /* adc */, ARM::ADCrsi, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 0 /* adc */, ARM::t2ADCrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 0 /* adc */, ARM::t2ADCrs, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 0 /* adc */, ARM::t2ADCri, Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 0 /* adc */, ARM::ADCrsr, Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_RegShiftedReg }, 0},
  { 0 /* adc */, ARM::ADCrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 0 /* adc */, ARM::ADCri, Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_ARMSOImm }, 0},
  { 0 /* adc */, ARM::ADCrsi, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 0 /* adc */, ARM::t2ADCrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 0 /* adc */, ARM::t2ADCrs, Convert__Reg1_3__Reg1_4__RegShiftedImm2_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 4 /* add */, ARM::tADDspr, Convert__Reg1_1__Tie0__Reg1_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPRsp, MCK_GPR }, 0},
  { 4 /* add */, ARM::tADDspi, Convert__Reg1_1__Tie0__Imm0_508s41_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPRsp, MCK_Imm0_508s4 }, 0},
  { 4 /* add */, ARM::tSUBspi, Convert__regSP__Tie0__Imm0_508s4Neg1_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPRsp, MCK_Imm0_508s4Neg }, 0},
  { 4 /* add */, ARM::t2ADDri12, Convert__Reg1_1__Reg1_1__Imm0_40951_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_Imm0_4095 }, 0},
  { 4 /* add */, ARM::t2SUBri12, Convert__Reg1_1__Reg1_1__Imm0_4095Neg1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_Imm0_4095Neg }, 0},
  { 4 /* add */, ARM::tADDhirr, Convert__Reg1_1__Tie0__Reg1_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 4 /* add */, ARM::tADDi8, Convert__Reg1_2__CCOut1_0__Tie0__Imm0_2551_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_Imm0_255 }, 0},
  { 4 /* add */, ARM::t2ADDrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_rGPR }, 0},
  { 4 /* add */, ARM::t2ADDrs, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 4 /* add */, ARM::t2ADDri, Convert__Reg1_2__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 4 /* add */, ARM::t2SUBri, Convert__Reg1_2__Reg1_2__T2SOImmNeg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_T2SOImmNeg }, 0},
  { 4 /* add */, ARM::t2SUBri, Convert__Reg1_2__Reg1_2__T2SOImmNeg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_T2SOImmNeg }, 0},
  { 4 /* add */, ARM::ADDrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 4 /* add */, ARM::ADDri, Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 4 /* add */, ARM::ADDrsi, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 4 /* add */, ARM::ADDrsr, Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 4 /* add */, ARM::SUBri, Convert__Reg1_2__Reg1_2__ARMSOImmNeg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImmNeg }, 0},
  { 4 /* add */, ARM::tADDrSPi, Convert__Reg1_1__Reg1_2__Imm0_1020s41_3__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_GPRsp, MCK_Imm0_1020s4 }, 0},
  { 4 /* add */, ARM::t2ADR, Convert__Reg1_1__Imm0_40951_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_PC, MCK_Imm0_4095 }, 0},
  { 4 /* add */, ARM::tADDspi, Convert__regSP__Tie0__Imm0_508s41_3__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPRsp, MCK_GPRsp, MCK_Imm0_508s4 }, 0},
  { 4 /* add */, ARM::tSUBspi, Convert__regSP__Tie0__Imm0_508s4Neg1_3__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPRsp, MCK_GPRsp, MCK_Imm0_508s4Neg }, 0},
  { 4 /* add */, ARM::t2ADDri12, Convert__Reg1_1__Reg1_2__Imm0_40951_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_Imm0_4095 }, 0},
  { 4 /* add */, ARM::t2SUBri12, Convert__Reg1_1__Reg1_2__Imm0_4095Neg1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_Imm0_4095Neg }, 0},
  { 4 /* add */, ARM::tADDrSP, Convert__Reg1_1__Tie0__Reg1_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPR, MCK_GPRsp, MCK_GPR }, 0},
  { 4 /* add */, ARM::tADDrr, Convert__Reg1_2__CCOut1_0__Reg1_3__Reg1_4__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR, MCK_tGPR }, 0},
  { 4 /* add */, ARM::tADDi3, Convert__Reg1_2__CCOut1_0__Reg1_3__Imm0_71_4__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR, MCK_Imm0_7 }, 0},
  { 4 /* add */, ARM::t2ADDrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_rGPR }, 0},
  { 4 /* add */, ARM::t2ADDrs, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 4 /* add */, ARM::t2ADDri, Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 4 /* add */, ARM::t2SUBri, Convert__Reg1_2__Reg1_3__T2SOImmNeg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_T2SOImmNeg }, 0},
  { 4 /* add */, ARM::t2SUBri, Convert__Reg1_2__Reg1_3__T2SOImmNeg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_T2SOImmNeg }, 0},
  { 4 /* add */, ARM::ADDrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 4 /* add */, ARM::ADDri, Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_ARMSOImm }, 0},
  { 4 /* add */, ARM::ADDrsi, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 4 /* add */, ARM::ADDrsr, Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 4 /* add */, ARM::SUBri, Convert__Reg1_2__Reg1_3__ARMSOImmNeg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_ARMSOImmNeg }, 0},
  { 4 /* add */, ARM::t2ADDrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_GPRnopc, MCK_rGPR }, 0},
  { 4 /* add */, ARM::t2ADDrs, Convert__Reg1_3__Reg1_4__RegShiftedImm2_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 4 /* add */, ARM::t2ADDri, Convert__Reg1_3__Reg1_4__T2SOImm1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 8 /* addw */, ARM::t2ADDri12, Convert__Reg1_1__Reg1_2__Imm0_40951_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_Imm0_4095 }, 0},
  { 13 /* adr */, ARM::tADR, Convert__Reg1_1__Imm1_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_Imm }, 0},
  { 13 /* adr */, ARM::t2ADR, Convert__Reg1_1__Imm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Imm }, 0},
  { 13 /* adr */, ARM::ADR, Convert__Reg1_1__Imm1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_Imm }, 0},
  { 13 /* adr */, ARM::t2ADR, Convert__Reg1_2__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_Imm }, 0},
  { 17 /* and */, ARM::tAND, Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 17 /* and */, ARM::t2ANDrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 17 /* and */, ARM::t2ANDrs, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 17 /* and */, ARM::BICri, Convert__Reg1_2__Reg1_2__ARMSOImmNot1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_ARMSOImmNot }, 0},
  { 17 /* and */, ARM::t2BICri, Convert__Reg1_2__Reg1_2__ARMSOImmNot1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_ARMSOImmNot }, 0},
  { 17 /* and */, ARM::t2ANDri, Convert__Reg1_2__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_T2SOImm }, 0},
  { 17 /* and */, ARM::ANDrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 17 /* and */, ARM::ANDri, Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 17 /* and */, ARM::ANDrsi, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 17 /* and */, ARM::ANDrsr, Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 17 /* and */, ARM::t2ANDrr, Convert__Reg1_3__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 17 /* and */, ARM::t2ANDrs, Convert__Reg1_3__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 17 /* and */, ARM::t2ANDri, Convert__Reg1_3__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2SOImm }, 0},
  { 17 /* and */, ARM::t2ANDrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 17 /* and */, ARM::t2ANDrs, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 17 /* and */, ARM::BICri, Convert__Reg1_2__Reg1_3__ARMSOImmNot1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_ARMSOImmNot }, 0},
  { 17 /* and */, ARM::t2BICri, Convert__Reg1_2__Reg1_3__ARMSOImmNot1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_ARMSOImmNot }, 0},
  { 17 /* and */, ARM::t2ANDri, Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 17 /* and */, ARM::ANDrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 17 /* and */, ARM::ANDri, Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_ARMSOImm }, 0},
  { 17 /* and */, ARM::ANDrsi, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 17 /* and */, ARM::ANDrsr, Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 17 /* and */, ARM::t2ANDrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 17 /* and */, ARM::t2ANDrs, Convert__Reg1_3__Reg1_4__RegShiftedImm2_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 17 /* and */, ARM::t2ANDri, Convert__Reg1_3__Reg1_4__T2SOImm1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 21 /* asr */, ARM::tASRrr, Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 21 /* asr */, ARM::tASRri, Convert__Reg1_2__CCOut1_0__Reg1_2__ImmThumbSR1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_ImmThumbSR }, 0},
  { 21 /* asr */, ARM::t2ASRrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 21 /* asr */, ARM::t2ASRri, Convert__Reg1_2__Reg1_2__ImmThumbSR1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_ImmThumbSR }, 0},
  { 21 /* asr */, ARM::ASRr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 21 /* asr */, ARM::ASRi, Convert__Reg1_2__Reg1_2__Imm0_321_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_Imm0_32 }, 0},
  { 21 /* asr */, ARM::t2ASRrr, Convert__Reg1_3__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 21 /* asr */, ARM::t2ASRri, Convert__Reg1_3__Reg1_3__ImmThumbSR1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_ImmThumbSR }, 0},
  { 21 /* asr */, ARM::tASRri, Convert__Reg1_2__CCOut1_0__Reg1_3__ImmThumbSR1_4__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR, MCK_ImmThumbSR }, 0},
  { 21 /* asr */, ARM::t2ASRrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 21 /* asr */, ARM::t2ASRri, Convert__Reg1_2__Reg1_3__ImmThumbSR1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_ImmThumbSR }, 0},
  { 21 /* asr */, ARM::ASRr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 21 /* asr */, ARM::ASRi, Convert__Reg1_2__Reg1_3__Imm0_321_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_Imm0_32 }, 0},
  { 21 /* asr */, ARM::t2ASRrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 21 /* asr */, ARM::t2ASRri, Convert__Reg1_3__Reg1_4__ImmThumbSR1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_ImmThumbSR }, 0},
  { 25 /* b */, ARM::Bcc, Convert__Imm1_1__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_Imm }, 0},
  { 25 /* b */, ARM::tB, Convert__Imm1_1__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_Imm }, 0},
  { 25 /* b */, ARM::tBcc, Convert__Imm1_1__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_Imm }, 0},
  { 25 /* b */, ARM::t2B, Convert__Imm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_Imm }, 0},
  { 25 /* b */, ARM::t2Bcc, Convert__Imm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_Imm }, 0},
  { 27 /* bfc */, ARM::t2BFC, Convert__Reg1_1__Tie0__Bitfield1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Bitfield }, 0},
  { 27 /* bfc */, ARM::BFC, Convert__Reg1_1__Tie0__Bitfield1_2__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode, MCK_GPR, MCK_Bitfield }, 0},
  { 31 /* bfi */, ARM::t2BFI, Convert__Reg1_1__Tie0__Reg1_2__Bitfield1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_Bitfield }, 0},
  { 31 /* bfi */, ARM::BFI, Convert__Reg1_1__Tie0__Reg1_2__Bitfield1_3__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_Bitfield }, 0},
  { 35 /* bic */, ARM::tBIC, Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 35 /* bic */, ARM::t2BICrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 35 /* bic */, ARM::t2BICrs, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 35 /* bic */, ARM::ANDri, Convert__Reg1_2__Reg1_2__ARMSOImmNot1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_ARMSOImmNot }, 0},
  { 35 /* bic */, ARM::t2ANDri, Convert__Reg1_2__Reg1_2__ARMSOImmNot1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_ARMSOImmNot }, 0},
  { 35 /* bic */, ARM::t2BICri, Convert__Reg1_2__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_T2SOImm }, 0},
  { 35 /* bic */, ARM::BICrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 35 /* bic */, ARM::BICri, Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 35 /* bic */, ARM::BICrsi, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 35 /* bic */, ARM::BICrsr, Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 35 /* bic */, ARM::t2BICrr, Convert__Reg1_3__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 35 /* bic */, ARM::t2BICrs, Convert__Reg1_3__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 35 /* bic */, ARM::t2BICri, Convert__Reg1_3__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2SOImm }, 0},
  { 35 /* bic */, ARM::t2BICrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 35 /* bic */, ARM::t2BICrs, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 35 /* bic */, ARM::ANDri, Convert__Reg1_2__Reg1_3__ARMSOImmNot1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_ARMSOImmNot }, 0},
  { 35 /* bic */, ARM::t2ANDri, Convert__Reg1_2__Reg1_3__ARMSOImmNot1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_ARMSOImmNot }, 0},
  { 35 /* bic */, ARM::t2BICri, Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 35 /* bic */, ARM::BICrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 35 /* bic */, ARM::BICri, Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_ARMSOImm }, 0},
  { 35 /* bic */, ARM::BICrsi, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 35 /* bic */, ARM::BICrsr, Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 35 /* bic */, ARM::t2BICrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 35 /* bic */, ARM::t2BICrs, Convert__Reg1_3__Reg1_4__RegShiftedImm2_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 35 /* bic */, ARM::t2BICri, Convert__Reg1_3__Reg1_4__T2SOImm1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 39 /* bkpt */, ARM::tBKPT, Convert__Imm0_2551_0, Feature_IsThumb, { MCK_Imm0_255 }, 0},
  { 39 /* bkpt */, ARM::BKPT, Convert__Imm0_655351_1__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_Imm0_65535 }, 0},
  { 44 /* bl */, ARM::BL, Convert__Imm1_0, Feature_IsARM, { MCK_Imm }, 0},
  { 44 /* bl */, ARM::BL_pred, Convert__Imm1_1__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_Imm }, 0},
  { 44 /* bl */, ARM::tBL, Convert__CondCode2_0__Imm1_1, Feature_IsThumb, { MCK_CondCode, MCK_Imm }, 0},
  { 47 /* blx */, ARM::BLX, Convert__Reg1_0, Feature_IsARM, { MCK_GPR }, 0},
  { 47 /* blx */, ARM::BLXi, Convert__Imm1_0, Feature_IsARM, { MCK_Imm }, 0},
  { 47 /* blx */, ARM::BLX_pred, Convert__Reg1_1__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR }, 0},
  { 47 /* blx */, ARM::tBLXr, Convert__CondCode2_0__Reg1_1, Feature_IsThumb, { MCK_CondCode, MCK_GPR }, 0},
  { 47 /* blx */, ARM::tBLXi, Convert__CondCode2_0__Imm1_1, Feature_IsThumb, { MCK_CondCode, MCK_Imm }, 0},
  { 51 /* bx */, ARM::BX, Convert__Reg1_0, Feature_IsARM|Feature_HasV4T, { MCK_GPR }, 0},
  { 51 /* bx */, ARM::BX_RET, Convert__CondCode2_0, Feature_IsARM|Feature_HasV4T, { MCK_CondCode, MCK_LR }, 0},
  { 51 /* bx */, ARM::BX_pred, Convert__Reg1_1__CondCode2_0, Feature_IsARM|Feature_HasV4T, { MCK_CondCode, MCK_GPR }, 0},
  { 51 /* bx */, ARM::tBX, Convert__Reg1_1__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPR }, 0},
  { 54 /* bxj */, ARM::t2BXJ, Convert__Reg1_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR }, 0},
  { 54 /* bxj */, ARM::BXJ, Convert__Reg1_1__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR }, 0},
  { 58 /* cbnz */, ARM::tCBNZ, Convert__Reg1_0__Imm1_1, Feature_IsThumb2, { MCK_tGPR, MCK_Imm }, 0},
  { 63 /* cbz */, ARM::tCBZ, Convert__Reg1_0__Imm1_1, Feature_IsThumb2, { MCK_tGPR, MCK_Imm }, 0},
  { 67 /* cdp */, ARM::tCDP, Convert__CoprocNum1_0__Imm0_151_1__CoprocReg1_2__CoprocReg1_3__CoprocReg1_4__Imm0_71_5, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_15, MCK_CoprocReg, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 67 /* cdp */, ARM::CDP, Convert__CoprocNum1_1__Imm0_151_2__CoprocReg1_3__CoprocReg1_4__CoprocReg1_5__Imm0_71_6__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_Imm0_15, MCK_CoprocReg, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 71 /* cdp2 */, ARM::CDP2, Convert__CoprocNum1_0__Imm0_151_1__CoprocReg1_2__CoprocReg1_3__CoprocReg1_4__Imm0_71_5, Feature_IsARM, { MCK_CoprocNum, MCK_Imm0_15, MCK_CoprocReg, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 71 /* cdp2 */, ARM::t2CDP2, Convert__CoprocNum1_0__Imm0_151_1__CoprocReg1_2__CoprocReg1_3__CoprocReg1_4__Imm0_71_5, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_15, MCK_CoprocReg, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 76 /* clrex */, ARM::CLREX, Convert, Feature_IsARM|Feature_HasV7, {  }, 0},
  { 76 /* clrex */, ARM::t2CLREX, Convert__CondCode2_0, Feature_IsThumb2|Feature_HasV7, { MCK_CondCode }, 0},
  { 82 /* clz */, ARM::t2CLZ, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 82 /* clz */, ARM::CLZ, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 86 /* cmn */, ARM::tCMNz, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 86 /* cmn */, ARM::CMPri, Convert__Reg1_1__ARMSOImmNeg1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_rGPR, MCK_ARMSOImmNeg }, 0},
  { 86 /* cmn */, ARM::t2CMPri, Convert__Reg1_1__T2SOImmNeg1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2SOImmNeg }, 0},
  { 86 /* cmn */, ARM::t2CMNzrr, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_rGPR }, 0},
  { 86 /* cmn */, ARM::t2CMNzrs, Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 86 /* cmn */, ARM::CMNzrsr, Convert__Reg1_1__RegShiftedReg3_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedReg }, 0},
  { 86 /* cmn */, ARM::t2CMNzri, Convert__Reg1_1__T2SOImm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 86 /* cmn */, ARM::CMNzrr, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 86 /* cmn */, ARM::CMNzri, Convert__Reg1_1__ARMSOImm1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 86 /* cmn */, ARM::CMNzrsi, Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 86 /* cmn */, ARM::t2CMNzrr, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_rGPR }, 0},
  { 86 /* cmn */, ARM::t2CMNzrs, Convert__Reg1_2__RegShiftedImm2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 86 /* cmn */, ARM::t2CMNzri, Convert__Reg1_2__T2SOImm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 90 /* cmp */, ARM::tCMPr, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 90 /* cmp */, ARM::tCMPi8, Convert__Reg1_1__Imm0_2551_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_Imm0_255 }, 0},
  { 90 /* cmp */, ARM::CMNzri, Convert__Reg1_1__ARMSOImmNeg1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_rGPR, MCK_ARMSOImmNeg }, 0},
  { 90 /* cmp */, ARM::t2CMNzri, Convert__Reg1_1__T2SOImmNeg1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2SOImmNeg }, 0},
  { 90 /* cmp */, ARM::t2CMPrs, Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 90 /* cmp */, ARM::CMPrsr, Convert__Reg1_1__RegShiftedReg3_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedReg }, 0},
  { 90 /* cmp */, ARM::t2CMPri, Convert__Reg1_1__T2SOImm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 90 /* cmp */, ARM::CMPrr, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 90 /* cmp */, ARM::tCMPhir, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 90 /* cmp */, ARM::CMPri, Convert__Reg1_1__ARMSOImm1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 90 /* cmp */, ARM::CMPrsi, Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 90 /* cmp */, ARM::t2CMPrr, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_rGPR }, 0},
  { 90 /* cmp */, ARM::t2CMPrs, Convert__Reg1_2__RegShiftedImm2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 90 /* cmp */, ARM::t2CMPri, Convert__Reg1_2__T2SOImm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 94 /* cps */, ARM::CPS1p, Convert__Imm0_311_0, Feature_IsARM, { MCK_Imm0_31 }, 0},
  { 94 /* cps */, ARM::t2CPS1p, Convert__Imm0_311_0, Feature_IsThumb2, { MCK_Imm0_31 }, 0},
  { 94 /* cps */, ARM::tCPS, Convert__Imm1_0__imm0, Feature_IsThumb, { MCK_Imm }, 0},
  { 94 /* cps */, ARM::tCPS, Convert__Imm1_0__imm0, Feature_IsThumb, { MCK_Imm }, 0},
  { 94 /* cps */, ARM::CPS2p, Convert__Imm1_0__ProcIFlags1_1, Feature_IsARM, { MCK_Imm, MCK_ProcIFlags }, 0},
  { 94 /* cps */, ARM::tCPS, Convert__Imm1_0__ProcIFlags1_1, Feature_IsThumb, { MCK_Imm, MCK_ProcIFlags }, 0},
  { 94 /* cps */, ARM::t2CPS2p, Convert__Imm1_0__ProcIFlags1_2, Feature_IsThumb2, { MCK_Imm, MCK__DOT_w, MCK_ProcIFlags }, 0},
  { 94 /* cps */, ARM::CPS3p, Convert__Imm1_0__ProcIFlags1_1__Imm0_311_2, Feature_IsARM, { MCK_Imm, MCK_ProcIFlags, MCK_Imm0_31 }, 0},
  { 94 /* cps */, ARM::t2CPS3p, Convert__Imm1_0__ProcIFlags1_2__Imm1_3, Feature_IsThumb2, { MCK_Imm, MCK__DOT_w, MCK_ProcIFlags, MCK_Imm }, 0},
  { 98 /* dbg */, ARM::DBG, Convert__Imm0_151_1__CondCode2_0, Feature_IsARM|Feature_HasV7, { MCK_CondCode, MCK_Imm0_15 }, 0},
  { 98 /* dbg */, ARM::t2DBG, Convert__Imm0_151_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_Imm0_15 }, 0},
  { 102 /* dmb */, ARM::DMB, Convert__imm15, Feature_IsARM|Feature_HasDB, {  }, 0},
  { 102 /* dmb */, ARM::t2DMB, Convert__imm15, Feature_IsThumb2|Feature_HasDB, {  }, 0},
  { 102 /* dmb */, ARM::DMB, Convert__MemBarrierOpt1_0, Feature_IsARM|Feature_HasDB, { MCK_MemBarrierOpt }, 0},
  { 102 /* dmb */, ARM::t2DMB, Convert__MemBarrierOpt1_0, Feature_IsThumb|Feature_HasDB, { MCK_MemBarrierOpt }, 0},
  { 106 /* dsb */, ARM::DSB, Convert__imm15, Feature_IsARM|Feature_HasDB, {  }, 0},
  { 106 /* dsb */, ARM::t2DSB, Convert__imm15, Feature_IsThumb2|Feature_HasDB, {  }, 0},
  { 106 /* dsb */, ARM::DSB, Convert__MemBarrierOpt1_0, Feature_IsARM|Feature_HasDB, { MCK_MemBarrierOpt }, 0},
  { 106 /* dsb */, ARM::t2DSB, Convert__MemBarrierOpt1_0, Feature_IsThumb|Feature_HasDB, { MCK_MemBarrierOpt }, 0},
  { 110 /* eor */, ARM::tEOR, Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 110 /* eor */, ARM::t2EORrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 110 /* eor */, ARM::t2EORrs, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 110 /* eor */, ARM::t2EORri, Convert__Reg1_2__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_T2SOImm }, 0},
  { 110 /* eor */, ARM::EORrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 110 /* eor */, ARM::EORri, Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 110 /* eor */, ARM::EORrsi, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 110 /* eor */, ARM::EORrsr, Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 110 /* eor */, ARM::t2EORrr, Convert__Reg1_3__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 110 /* eor */, ARM::t2EORrs, Convert__Reg1_3__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 110 /* eor */, ARM::t2EORri, Convert__Reg1_3__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2SOImm }, 0},
  { 110 /* eor */, ARM::t2EORrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 110 /* eor */, ARM::t2EORrs, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 110 /* eor */, ARM::t2EORri, Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 110 /* eor */, ARM::EORrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 110 /* eor */, ARM::EORri, Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_ARMSOImm }, 0},
  { 110 /* eor */, ARM::EORrsi, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 110 /* eor */, ARM::EORrsr, Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 110 /* eor */, ARM::t2EORrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 110 /* eor */, ARM::t2EORrs, Convert__Reg1_3__Reg1_4__RegShiftedImm2_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 110 /* eor */, ARM::t2EORri, Convert__Reg1_3__Reg1_4__T2SOImm1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 114 /* faddd */, ARM::VADDD, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 120 /* fadds */, ARM::VADDS, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 126 /* fcmpzd */, ARM::VCMPZD, Convert__Reg1_1__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_DPR }, 0},
  { 133 /* fcmpzs */, ARM::VCMPZS, Convert__Reg1_1__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_SPR }, 0},
  { 140 /* fmdhr */, ARM::VSETLNi32, Convert__Reg1_1__Tie0__Reg1_2__imm1__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_DPR, MCK_GPR }, 0},
  { 146 /* fmdlr */, ARM::VSETLNi32, Convert__Reg1_1__Tie0__Reg1_2__imm0__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_DPR, MCK_GPR }, 0},
  { 152 /* fmstat */, ARM::FMSTAT, Convert__CondCode2_0, Feature_HasVFP2, { MCK_CondCode }, 0},
  { 159 /* fsubd */, ARM::VSUBD, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 165 /* fsubs */, ARM::VSUBS, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 171 /* isb */, ARM::ISB, Convert__imm15, Feature_IsARM|Feature_HasDB, {  }, 0},
  { 171 /* isb */, ARM::t2ISB, Convert__imm15, Feature_IsThumb2|Feature_HasDB, {  }, 0},
  { 171 /* isb */, ARM::ISB, Convert__MemBarrierOpt1_0, Feature_IsARM|Feature_HasDB, { MCK_MemBarrierOpt }, 0},
  { 171 /* isb */, ARM::t2ISB, Convert__MemBarrierOpt1_0, Feature_IsThumb2|Feature_HasDB, { MCK_MemBarrierOpt }, 0},
  { 175 /* it */, ARM::ITasm, Convert__ITCondCode1_1__ITMask1_0, Feature_IsARM, { MCK_ITMask, MCK_ITCondCode }, 0},
  { 175 /* it */, ARM::t2IT, Convert__ITCondCode1_1__ITMask1_0, Feature_IsThumb2, { MCK_ITMask, MCK_ITCondCode }, 0},
  { 178 /* ldc */, ARM::LDC_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 178 /* ldc */, ARM::t2LDC_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 178 /* ldc */, ARM::LDC_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 178 /* ldc */, ARM::t2LDC_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 178 /* ldc */, ARM::LDC_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 178 /* ldc */, ARM::t2LDC_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 178 /* ldc */, ARM::LDC_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 178 /* ldc */, ARM::t2LDC_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 182 /* ldc2 */, ARM::LDC2_OFFSET, Convert__CoprocNum1_0__CoprocReg1_1__AddrMode52_2, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 182 /* ldc2 */, ARM::t2LDC2_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 182 /* ldc2 */, ARM::LDC2_PRE, Convert__CoprocNum1_0__CoprocReg1_1__AddrMode52_2, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 182 /* ldc2 */, ARM::LDC2_OPTION, Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__CoprocOption1_3, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 182 /* ldc2 */, ARM::LDC2_POST, Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__PostIdxImm8s41_3, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 182 /* ldc2 */, ARM::t2LDC2_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 182 /* ldc2 */, ARM::t2LDC2_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 182 /* ldc2 */, ARM::t2LDC2_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 187 /* ldc2l */, ARM::LDC2L_OFFSET, Convert__CoprocNum1_0__CoprocReg1_1__AddrMode52_2, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 187 /* ldc2l */, ARM::t2LDC2L_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 187 /* ldc2l */, ARM::LDC2L_PRE, Convert__CoprocNum1_0__CoprocReg1_1__AddrMode52_2, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 187 /* ldc2l */, ARM::LDC2L_OPTION, Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__CoprocOption1_3, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 187 /* ldc2l */, ARM::LDC2L_POST, Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__PostIdxImm8s41_3, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 187 /* ldc2l */, ARM::t2LDC2L_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 187 /* ldc2l */, ARM::t2LDC2L_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 187 /* ldc2l */, ARM::t2LDC2L_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 193 /* ldcl */, ARM::LDCL_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 193 /* ldcl */, ARM::t2LDCL_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 193 /* ldcl */, ARM::LDCL_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 193 /* ldcl */, ARM::t2LDCL_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 193 /* ldcl */, ARM::LDCL_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 193 /* ldcl */, ARM::t2LDCL_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 193 /* ldcl */, ARM::LDCL_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 193 /* ldcl */, ARM::t2LDCL_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 198 /* ldm */, ARM::tLDMIA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_RegList }, 0},
  { 198 /* ldm */, ARM::LDMIA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 198 /* ldm */, ARM::t2LDMIA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 198 /* ldm */, ARM::t2LDMIA, Convert__Reg1_2__CondCode2_0__RegList1_3, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK_RegList }, 0},
  { 198 /* ldm */, ARM::tLDMIA, Convert__Reg1_1__CondCode2_0__RegList1_3, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 198 /* ldm */, ARM::LDMIA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 198 /* ldm */, ARM::t2LDMIA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 198 /* ldm */, ARM::sysLDMIA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList, MCK__94_ }, 0},
  { 198 /* ldm */, ARM::t2LDMIA_UPD, Convert__Reg1_2__Tie0__CondCode2_0__RegList1_4, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 198 /* ldm */, ARM::sysLDMIA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList, MCK__94_ }, 0},
  { 202 /* ldmda */, ARM::LDMDA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 202 /* ldmda */, ARM::LDMDA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 202 /* ldmda */, ARM::sysLDMDA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList, MCK__94_ }, 0},
  { 202 /* ldmda */, ARM::sysLDMDA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList, MCK__94_ }, 0},
  { 208 /* ldmdb */, ARM::LDMDB, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 208 /* ldmdb */, ARM::t2LDMDB, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 208 /* ldmdb */, ARM::t2LDMDB, Convert__Reg1_2__CondCode2_0__RegList1_3, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK_RegList }, 0},
  { 208 /* ldmdb */, ARM::LDMDB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 208 /* ldmdb */, ARM::t2LDMDB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 208 /* ldmdb */, ARM::sysLDMDB, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList, MCK__94_ }, 0},
  { 208 /* ldmdb */, ARM::t2LDMDB_UPD, Convert__Reg1_2__Tie0__CondCode2_0__RegList1_4, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 208 /* ldmdb */, ARM::sysLDMDB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList, MCK__94_ }, 0},
  { 214 /* ldmib */, ARM::LDMIB, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 214 /* ldmib */, ARM::LDMIB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 214 /* ldmib */, ARM::sysLDMIB, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList, MCK__94_ }, 0},
  { 214 /* ldmib */, ARM::sysLDMIB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList, MCK__94_ }, 0},
  { 220 /* ldr */, ARM::tLDRpciASM, Convert__Reg1_1__Imm1_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_Imm }, 0},
  { 220 /* ldr */, ARM::tLDRi, Convert__Reg1_1__MemThumbRIs42_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRIs4 }, 0},
  { 220 /* ldr */, ARM::tLDRr, Convert__Reg1_1__MemThumbRR2_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRR }, 0},
  { 220 /* ldr */, ARM::tLDRspi, Convert__Reg1_1__MemThumbSPI2_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbSPI }, 0},
  { 220 /* ldr */, ARM::t2LDRpcrel, Convert__Reg1_1__MemPCRelImm121_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_MemPCRelImm12 }, 0},
  { 220 /* ldr */, ARM::t2LDRpci, Convert__Reg1_1__Imm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_Imm }, 0},
  { 220 /* ldr */, ARM::LDRi12, Convert__Reg1_1__MemImm12Offset2_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemImm12Offset }, 0},
  { 220 /* ldr */, ARM::t2LDRi8, Convert__Reg1_1__MemNegImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemNegImm8Offset }, 0},
  { 220 /* ldr */, ARM::LDRrs, Convert__Reg1_1__MemRegOffset3_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemRegOffset }, 0},
  { 220 /* ldr */, ARM::t2LDRi12, Convert__Reg1_1__MemUImm12Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemUImm12Offset }, 0},
  { 220 /* ldr */, ARM::t2LDRs, Convert__Reg1_1__T2MemRegOffset3_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_T2MemRegOffset }, 0},
  { 220 /* ldr */, ARM::t2LDRpcrel, Convert__Reg1_2__MemPCRelImm121_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_MemPCRelImm12 }, 0},
  { 220 /* ldr */, ARM::t2LDRpci, Convert__Reg1_2__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK_Imm }, 0},
  { 220 /* ldr */, ARM::t2LDRi12, Convert__Reg1_2__MemUImm12Offset2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK_MemUImm12Offset }, 0},
  { 220 /* ldr */, ARM::t2LDRs, Convert__Reg1_2__T2MemRegOffset3_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK_T2MemRegOffset }, 0},
  { 220 /* ldr */, ARM::LDR_PRE_IMM, ConvertCustom_cvtLdWriteBackRegAddrModeImm12, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemImm12Offset, MCK__EXCLAIM_ }, 0},
  { 220 /* ldr */, ARM::t2LDR_PRE, ConvertCustom_cvtLdWriteBackRegT2AddrModeImm8, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemImm8Offset, MCK__EXCLAIM_ }, 0},
  { 220 /* ldr */, ARM::LDR_POST_IMM, Convert__Reg1_1__MemNoOffset1_2__Tie1__AM2OffsetImm2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM2OffsetImm }, 0},
  { 220 /* ldr */, ARM::t2LDR_POST, Convert__Reg1_1__MemNoOffset1_2__Tie1__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_Imm }, 0},
  { 220 /* ldr */, ARM::LDR_POST_REG, Convert__Reg1_1__MemNoOffset1_2__Tie1__PostIdxRegShifted2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxRegShifted }, 0},
  { 220 /* ldr */, ARM::LDR_PRE_REG, ConvertCustom_cvtLdWriteBackRegAddrMode2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemRegOffset, MCK__EXCLAIM_ }, 0},
  { 224 /* ldrb */, ARM::tLDRBi, Convert__Reg1_1__MemThumbRIs12_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRIs1 }, 0},
  { 224 /* ldrb */, ARM::tLDRBr, Convert__Reg1_1__MemThumbRR2_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRR }, 0},
  { 224 /* ldrb */, ARM::t2LDRBpci, Convert__Reg1_1__Imm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Imm }, 0},
  { 224 /* ldrb */, ARM::t2LDRBi8, Convert__Reg1_1__MemNegImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemNegImm8Offset }, 0},
  { 224 /* ldrb */, ARM::t2LDRBi12, Convert__Reg1_1__MemUImm12Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 224 /* ldrb */, ARM::t2LDRBs, Convert__Reg1_1__T2MemRegOffset3_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 224 /* ldrb */, ARM::LDRBi12, Convert__Reg1_1__MemImm12Offset2_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_MemImm12Offset }, 0},
  { 224 /* ldrb */, ARM::LDRBrs, Convert__Reg1_1__MemRegOffset3_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_MemRegOffset }, 0},
  { 224 /* ldrb */, ARM::t2LDRBpcrel, Convert__Reg1_1__MemPCRelImm121_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_MemPCRelImm12 }, 0},
  { 224 /* ldrb */, ARM::t2LDRBpci, Convert__Reg1_2__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_Imm }, 0},
  { 224 /* ldrb */, ARM::t2LDRBi12, Convert__Reg1_2__MemUImm12Offset2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 224 /* ldrb */, ARM::t2LDRBs, Convert__Reg1_2__T2MemRegOffset3_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 224 /* ldrb */, ARM::t2LDRBpcrel, Convert__Reg1_2__MemPCRelImm121_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_MemPCRelImm12 }, 0},
  { 224 /* ldrb */, ARM::LDRB_PRE_IMM, ConvertCustom_cvtLdWriteBackRegAddrModeImm12, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemImm12Offset, MCK__EXCLAIM_ }, 0},
  { 224 /* ldrb */, ARM::t2LDRB_PRE, ConvertCustom_cvtLdWriteBackRegT2AddrModeImm8, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemImm8Offset, MCK__EXCLAIM_ }, 0},
  { 224 /* ldrb */, ARM::LDRB_POST_IMM, Convert__Reg1_1__MemNoOffset1_2__Tie1__AM2OffsetImm2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM2OffsetImm }, 0},
  { 224 /* ldrb */, ARM::t2LDRB_POST, Convert__Reg1_1__MemNoOffset1_2__Tie1__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_Imm }, 0},
  { 224 /* ldrb */, ARM::LDRB_POST_REG, Convert__Reg1_1__MemNoOffset1_2__Tie1__PostIdxRegShifted2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxRegShifted }, 0},
  { 224 /* ldrb */, ARM::LDRB_PRE_REG, ConvertCustom_cvtLdWriteBackRegAddrMode2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemRegOffset, MCK__EXCLAIM_ }, 0},
  { 229 /* ldrbt */, ARM::t2LDRBT, Convert__Reg1_1__MemPosImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemPosImm8Offset }, 0},
  { 229 /* ldrbt */, ARM::LDRBT_POST_IMM, Convert__Reg1_1__MemNoOffset1_2__Tie1__AM2OffsetImm2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM2OffsetImm }, 0},
  { 229 /* ldrbt */, ARM::LDRBT_POST_REG, Convert__Reg1_1__MemNoOffset1_2__Tie1__PostIdxRegShifted2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxRegShifted }, 0},
  { 235 /* ldrd */, ARM::t2LDRDi8, Convert__Reg1_1__Reg1_2__MemImm8s4Offset2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_MemImm8s4Offset }, 0},
  { 235 /* ldrd */, ARM::LDRD, Convert__Reg1_1__Reg1_2__AddrMode33_3__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_AddrMode3 }, 0},
  { 235 /* ldrd */, ARM::t2LDRD_PRE, ConvertCustom_cvtT2LdrdPre, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_MemImm8s4Offset, MCK__EXCLAIM_ }, 0},
  { 235 /* ldrd */, ARM::t2LDRD_POST, Convert__Reg1_1__Reg1_2__MemNoOffset1_3__Tie2__Imm1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_MemNoOffset, MCK_Imm }, 0},
  { 235 /* ldrd */, ARM::LDRD_PRE, ConvertCustom_cvtLdrdPre, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_AddrMode3, MCK__EXCLAIM_ }, 0},
  { 235 /* ldrd */, ARM::LDRD_POST, Convert__Reg1_1__Reg1_2__MemNoOffset1_3__Tie2__AM3Offset2_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_MemNoOffset, MCK_AM3Offset }, 0},
  { 240 /* ldrex */, ARM::t2LDREX, Convert__Reg1_1__MemImm0_1020s4Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemImm0_1020s4Offset }, 0},
  { 240 /* ldrex */, ARM::LDREX, Convert__Reg1_1__MemNoOffset1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset }, 0},
  { 246 /* ldrexb */, ARM::t2LDREXB, Convert__Reg1_1__MemNoOffset1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemNoOffset }, 0},
  { 246 /* ldrexb */, ARM::LDREXB, Convert__Reg1_1__MemNoOffset1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset }, 0},
  { 253 /* ldrexd */, ARM::t2LDREXD, Convert__Reg1_1__Reg1_2__MemNoOffset1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_MemNoOffset }, 0},
  { 253 /* ldrexd */, ARM::LDREXD, Convert__Reg1_1__Reg1_2__MemNoOffset1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_MemNoOffset }, 0},
  { 260 /* ldrexh */, ARM::t2LDREXH, Convert__Reg1_1__MemNoOffset1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemNoOffset }, 0},
  { 260 /* ldrexh */, ARM::LDREXH, Convert__Reg1_1__MemNoOffset1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset }, 0},
  { 267 /* ldrh */, ARM::tLDRHi, Convert__Reg1_1__MemThumbRIs22_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRIs2 }, 0},
  { 267 /* ldrh */, ARM::tLDRHr, Convert__Reg1_1__MemThumbRR2_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRR }, 0},
  { 267 /* ldrh */, ARM::t2LDRHpci, Convert__Reg1_1__Imm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Imm }, 0},
  { 267 /* ldrh */, ARM::t2LDRHi8, Convert__Reg1_1__MemNegImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemNegImm8Offset }, 0},
  { 267 /* ldrh */, ARM::t2LDRHi12, Convert__Reg1_1__MemUImm12Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 267 /* ldrh */, ARM::t2LDRHs, Convert__Reg1_1__T2MemRegOffset3_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 267 /* ldrh */, ARM::t2LDRHpcrel, Convert__Reg1_1__MemPCRelImm121_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_MemPCRelImm12 }, 0},
  { 267 /* ldrh */, ARM::LDRH, Convert__Reg1_1__AddrMode33_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_AddrMode3 }, 0},
  { 267 /* ldrh */, ARM::t2LDRHpci, Convert__Reg1_2__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_Imm }, 0},
  { 267 /* ldrh */, ARM::t2LDRHi12, Convert__Reg1_2__MemUImm12Offset2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 267 /* ldrh */, ARM::t2LDRHs, Convert__Reg1_2__T2MemRegOffset3_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 267 /* ldrh */, ARM::t2LDRHpcrel, Convert__Reg1_2__MemPCRelImm121_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_MemPCRelImm12 }, 0},
  { 267 /* ldrh */, ARM::LDRH_PRE, ConvertCustom_cvtLdWriteBackRegAddrMode3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_AddrMode3, MCK__EXCLAIM_ }, 0},
  { 267 /* ldrh */, ARM::t2LDRH_PRE, ConvertCustom_cvtLdWriteBackRegT2AddrModeImm8, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemImm8Offset, MCK__EXCLAIM_ }, 0},
  { 267 /* ldrh */, ARM::LDRH_POST, Convert__Reg1_1__MemNoOffset1_2__Tie1__AM3Offset2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM3Offset }, 0},
  { 267 /* ldrh */, ARM::t2LDRH_POST, Convert__Reg1_1__MemNoOffset1_2__Tie1__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_Imm }, 0},
  { 272 /* ldrht */, ARM::t2LDRHT, Convert__Reg1_1__MemPosImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemPosImm8Offset }, 0},
  { 272 /* ldrht */, ARM::LDRHTr, ConvertCustom_cvtLdExtTWriteBackReg, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_MemNoOffset, MCK_PostIdxReg }, 0},
  { 272 /* ldrht */, ARM::LDRHTi, ConvertCustom_cvtLdExtTWriteBackImm, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxImm8 }, 0},
  { 278 /* ldrsb */, ARM::tLDRSB, Convert__Reg1_1__MemThumbRR2_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRR }, 0},
  { 278 /* ldrsb */, ARM::t2LDRSBpci, Convert__Reg1_1__Imm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Imm }, 0},
  { 278 /* ldrsb */, ARM::t2LDRSBi8, Convert__Reg1_1__MemNegImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemNegImm8Offset }, 0},
  { 278 /* ldrsb */, ARM::t2LDRSBi12, Convert__Reg1_1__MemUImm12Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 278 /* ldrsb */, ARM::t2LDRSBs, Convert__Reg1_1__T2MemRegOffset3_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 278 /* ldrsb */, ARM::t2LDRSBpcrel, Convert__Reg1_1__MemPCRelImm121_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_MemPCRelImm12 }, 0},
  { 278 /* ldrsb */, ARM::LDRSB, Convert__Reg1_1__AddrMode33_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_AddrMode3 }, 0},
  { 278 /* ldrsb */, ARM::t2LDRSBpci, Convert__Reg1_2__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_Imm }, 0},
  { 278 /* ldrsb */, ARM::t2LDRSBi12, Convert__Reg1_2__MemUImm12Offset2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 278 /* ldrsb */, ARM::t2LDRSBs, Convert__Reg1_2__T2MemRegOffset3_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 278 /* ldrsb */, ARM::t2LDRSBpcrel, Convert__Reg1_2__MemPCRelImm121_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_MemPCRelImm12 }, 0},
  { 278 /* ldrsb */, ARM::LDRSB_PRE, ConvertCustom_cvtLdWriteBackRegAddrMode3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_AddrMode3, MCK__EXCLAIM_ }, 0},
  { 278 /* ldrsb */, ARM::t2LDRSB_PRE, ConvertCustom_cvtLdWriteBackRegT2AddrModeImm8, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemImm8Offset, MCK__EXCLAIM_ }, 0},
  { 278 /* ldrsb */, ARM::LDRSB_POST, Convert__Reg1_1__MemNoOffset1_2__Tie1__AM3Offset2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM3Offset }, 0},
  { 278 /* ldrsb */, ARM::t2LDRSB_POST, Convert__Reg1_1__MemNoOffset1_2__Tie1__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_Imm }, 0},
  { 284 /* ldrsbt */, ARM::t2LDRSBT, Convert__Reg1_1__MemPosImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemPosImm8Offset }, 0},
  { 284 /* ldrsbt */, ARM::LDRSBTr, ConvertCustom_cvtLdExtTWriteBackReg, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_MemNoOffset, MCK_PostIdxReg }, 0},
  { 284 /* ldrsbt */, ARM::LDRSBTi, ConvertCustom_cvtLdExtTWriteBackImm, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxImm8 }, 0},
  { 291 /* ldrsh */, ARM::tLDRSH, Convert__Reg1_1__MemThumbRR2_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRR }, 0},
  { 291 /* ldrsh */, ARM::t2LDRSHpci, Convert__Reg1_1__Imm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Imm }, 0},
  { 291 /* ldrsh */, ARM::t2LDRSHi8, Convert__Reg1_1__MemNegImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemNegImm8Offset }, 0},
  { 291 /* ldrsh */, ARM::t2LDRSHi12, Convert__Reg1_1__MemUImm12Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 291 /* ldrsh */, ARM::t2LDRSHs, Convert__Reg1_1__T2MemRegOffset3_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 291 /* ldrsh */, ARM::t2LDRSHpcrel, Convert__Reg1_1__MemPCRelImm121_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_MemPCRelImm12 }, 0},
  { 291 /* ldrsh */, ARM::LDRSH, Convert__Reg1_1__AddrMode33_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_AddrMode3 }, 0},
  { 291 /* ldrsh */, ARM::t2LDRSHpci, Convert__Reg1_2__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_Imm }, 0},
  { 291 /* ldrsh */, ARM::t2LDRSHi12, Convert__Reg1_2__MemUImm12Offset2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 291 /* ldrsh */, ARM::t2LDRSHs, Convert__Reg1_2__T2MemRegOffset3_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 291 /* ldrsh */, ARM::t2LDRSHpcrel, Convert__Reg1_2__MemPCRelImm121_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_MemPCRelImm12 }, 0},
  { 291 /* ldrsh */, ARM::LDRSH_PRE, ConvertCustom_cvtLdWriteBackRegAddrMode3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_AddrMode3, MCK__EXCLAIM_ }, 0},
  { 291 /* ldrsh */, ARM::t2LDRSH_PRE, ConvertCustom_cvtLdWriteBackRegT2AddrModeImm8, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemImm8Offset, MCK__EXCLAIM_ }, 0},
  { 291 /* ldrsh */, ARM::LDRSH_POST, Convert__Reg1_1__MemNoOffset1_2__Tie1__AM3Offset2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM3Offset }, 0},
  { 291 /* ldrsh */, ARM::t2LDRSH_POST, Convert__Reg1_1__MemNoOffset1_2__Tie1__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_Imm }, 0},
  { 297 /* ldrsht */, ARM::t2LDRSHT, Convert__Reg1_1__MemPosImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemPosImm8Offset }, 0},
  { 297 /* ldrsht */, ARM::LDRSHTr, ConvertCustom_cvtLdExtTWriteBackReg, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_MemNoOffset, MCK_PostIdxReg }, 0},
  { 297 /* ldrsht */, ARM::LDRSHTi, ConvertCustom_cvtLdExtTWriteBackImm, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxImm8 }, 0},
  { 304 /* ldrt */, ARM::t2LDRT, Convert__Reg1_1__MemPosImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemPosImm8Offset }, 0},
  { 304 /* ldrt */, ARM::LDRT_POST_IMM, Convert__Reg1_1__MemNoOffset1_2__Tie1__AM2OffsetImm2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM2OffsetImm }, 0},
  { 304 /* ldrt */, ARM::LDRT_POST_REG, Convert__Reg1_1__MemNoOffset1_2__Tie1__PostIdxRegShifted2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxRegShifted }, 0},
  { 309 /* lsl */, ARM::tLSLrr, Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 309 /* lsl */, ARM::tLSLri, Convert__Reg1_2__CCOut1_0__Reg1_2__Imm0_311_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_Imm0_31 }, 0},
  { 309 /* lsl */, ARM::t2LSLrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 309 /* lsl */, ARM::t2LSLri, Convert__Reg1_2__Reg1_2__Imm0_311_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_Imm0_31 }, 0},
  { 309 /* lsl */, ARM::LSLr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 309 /* lsl */, ARM::LSLi, Convert__Reg1_2__Reg1_2__Imm0_311_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_Imm0_31 }, 0},
  { 309 /* lsl */, ARM::t2LSLrr, Convert__Reg1_3__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 309 /* lsl */, ARM::t2LSLri, Convert__Reg1_3__Reg1_3__Imm0_311_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_Imm0_31 }, 0},
  { 309 /* lsl */, ARM::tLSLri, Convert__Reg1_2__CCOut1_0__Reg1_3__Imm0_311_4__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR, MCK_Imm0_31 }, 0},
  { 309 /* lsl */, ARM::t2LSLrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 309 /* lsl */, ARM::t2LSLri, Convert__Reg1_2__Reg1_3__Imm0_311_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_Imm0_31 }, 0},
  { 309 /* lsl */, ARM::LSLr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 309 /* lsl */, ARM::LSLi, Convert__Reg1_2__Reg1_3__Imm0_311_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_Imm0_31 }, 0},
  { 309 /* lsl */, ARM::t2LSLrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 309 /* lsl */, ARM::t2LSLri, Convert__Reg1_3__Reg1_4__Imm0_311_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_Imm0_31 }, 0},
  { 313 /* lsr */, ARM::tLSRrr, Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 313 /* lsr */, ARM::tLSRri, Convert__Reg1_2__CCOut1_0__Reg1_2__ImmThumbSR1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_ImmThumbSR }, 0},
  { 313 /* lsr */, ARM::t2LSRrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 313 /* lsr */, ARM::t2LSRri, Convert__Reg1_2__Reg1_2__ImmThumbSR1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_ImmThumbSR }, 0},
  { 313 /* lsr */, ARM::LSRr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 313 /* lsr */, ARM::LSRi, Convert__Reg1_2__Reg1_2__Imm0_321_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_Imm0_32 }, 0},
  { 313 /* lsr */, ARM::t2LSRrr, Convert__Reg1_3__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 313 /* lsr */, ARM::t2LSRri, Convert__Reg1_3__Reg1_3__ImmThumbSR1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_ImmThumbSR }, 0},
  { 313 /* lsr */, ARM::tLSRri, Convert__Reg1_2__CCOut1_0__Reg1_3__ImmThumbSR1_4__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR, MCK_ImmThumbSR }, 0},
  { 313 /* lsr */, ARM::t2LSRrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 313 /* lsr */, ARM::t2LSRri, Convert__Reg1_2__Reg1_3__ImmThumbSR1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_ImmThumbSR }, 0},
  { 313 /* lsr */, ARM::LSRr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 313 /* lsr */, ARM::LSRi, Convert__Reg1_2__Reg1_3__Imm0_321_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_Imm0_32 }, 0},
  { 313 /* lsr */, ARM::t2LSRrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 313 /* lsr */, ARM::t2LSRri, Convert__Reg1_3__Reg1_4__ImmThumbSR1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_ImmThumbSR }, 0},
  { 317 /* mcr */, ARM::t2MCR, Convert__CoprocNum1_0__Imm0_71_1__Reg1_2__CoprocReg1_3__CoprocReg1_4__imm0, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg }, 0},
  { 317 /* mcr */, ARM::MCR, Convert__CoprocNum1_1__Imm0_71_2__Reg1_3__CoprocReg1_4__CoprocReg1_5__imm0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg }, 0},
  { 317 /* mcr */, ARM::t2MCR, Convert__CoprocNum1_0__Imm0_71_1__Reg1_2__CoprocReg1_3__CoprocReg1_4__Imm0_71_5, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 317 /* mcr */, ARM::MCR, Convert__CoprocNum1_1__Imm0_71_2__Reg1_3__CoprocReg1_4__CoprocReg1_5__Imm0_71_6__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 321 /* mcr2 */, ARM::MCR2, Convert__CoprocNum1_0__Imm0_71_1__Reg1_2__CoprocReg1_3__CoprocReg1_4__imm0, Feature_IsARM, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg }, 0},
  { 321 /* mcr2 */, ARM::t2MCR2, Convert__CoprocNum1_0__Imm0_71_1__Reg1_2__CoprocReg1_3__CoprocReg1_4__imm0, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg }, 0},
  { 321 /* mcr2 */, ARM::MCR2, Convert__CoprocNum1_0__Imm0_71_1__Reg1_2__CoprocReg1_3__CoprocReg1_4__Imm0_71_5, Feature_IsARM, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 321 /* mcr2 */, ARM::t2MCR2, Convert__CoprocNum1_0__Imm0_71_1__Reg1_2__CoprocReg1_3__CoprocReg1_4__Imm0_71_5, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 326 /* mcrr */, ARM::t2MCRR, Convert__CoprocNum1_0__Imm0_151_1__Reg1_2__Reg1_3__CoprocReg1_4, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_15, MCK_GPR, MCK_GPR, MCK_CoprocReg }, 0},
  { 326 /* mcrr */, ARM::MCRR, Convert__CoprocNum1_1__Imm0_151_2__Reg1_3__Reg1_4__CoprocReg1_5__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_Imm0_15, MCK_GPRnopc, MCK_GPRnopc, MCK_CoprocReg }, 0},
  { 331 /* mcrr2 */, ARM::MCRR2, Convert__CoprocNum1_0__Imm0_151_1__Reg1_2__Reg1_3__CoprocReg1_4, Feature_IsARM, { MCK_CoprocNum, MCK_Imm0_15, MCK_GPRnopc, MCK_GPRnopc, MCK_CoprocReg }, 0},
  { 331 /* mcrr2 */, ARM::t2MCRR2, Convert__CoprocNum1_0__Imm0_151_1__Reg1_2__Reg1_3__CoprocReg1_4, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_15, MCK_GPR, MCK_GPR, MCK_CoprocReg }, 0},
  { 337 /* mla */, ARM::t2MLA, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 337 /* mla */, ARM::MLA, Convert__Reg1_2__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsARM|Feature_HasV6, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 341 /* mls */, ARM::t2MLS, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 341 /* mls */, ARM::MLS, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 345 /* mov */, ARM::t2MOVsi, Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 345 /* mov */, ARM::t2MOVsr, Convert__Reg1_1__RegShiftedReg3_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_RegShiftedReg }, 0},
  { 345 /* mov */, ARM::t2MOVi, Convert__Reg1_1__T2SOImm1_2__CondCode2_0__reg0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2SOImm }, 0},
  { 345 /* mov */, ARM::t2MVNi, Convert__Reg1_1__T2SOImmNot1_2__CondCode2_0__reg0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2SOImmNot }, 0},
  { 345 /* mov */, ARM::MOVPCLR, Convert__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_PC, MCK_LR }, 0},
  { 345 /* mov */, ARM::tMOVr, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 345 /* mov */, ARM::MOVi16, Convert__Reg1_1__Imm0_65535Expr1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_Imm0_65535Expr }, 0},
  { 345 /* mov */, ARM::tMOVi8, Convert__Reg1_2__CCOut1_0__Imm0_2551_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_Imm0_255 }, 0},
  { 345 /* mov */, ARM::MOVr_TC, Convert__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_tcGPR, MCK_tcGPR }, 0},
  { 345 /* mov */, ARM::MVNi, Convert__Reg1_2__ARMSOImmNot1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_ARMSOImmNot }, 0},
  { 345 /* mov */, ARM::MOVsr, Convert__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedReg }, 0},
  { 345 /* mov */, ARM::MOVr, Convert__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 345 /* mov */, ARM::MOVi, Convert__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 345 /* mov */, ARM::MOVsi, Convert__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 345 /* mov */, ARM::t2MOVi, Convert__Reg1_2__T2SOImm1_3__CondCode2_0__reg0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2SOImm }, 0},
  { 345 /* mov */, ARM::t2MOVr, Convert__Reg1_2__Reg1_3__CondCode2_0__reg0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_GPR }, 0},
  { 345 /* mov */, ARM::t2MOVi, Convert__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2SOImm }, 0},
  { 345 /* mov */, ARM::t2MOVr, Convert__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_GPR }, 0},
  { 349 /* movs */, ARM::tMOVSr, Convert__Reg1_0__Reg1_1, Feature_IsThumb, { MCK_tGPR, MCK_tGPR }, 0},
  { 349 /* movs */, ARM::tMOVi8, Convert__Reg1_0__regCPSR__Imm0_2551_1__imm14__imm0, Feature_IsThumb, { MCK_tGPR, MCK_Imm0_255 }, 0},
  { 349 /* movs */, ARM::t2MOVSsi, Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 349 /* movs */, ARM::t2MOVSsr, Convert__Reg1_1__RegShiftedReg3_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_RegShiftedReg }, 0},
  { 349 /* movs */, ARM::t2MOVi, Convert__Reg1_1__T2SOImm1_2__CondCode2_0__regCPSR, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2SOImm }, 0},
  { 349 /* movs */, ARM::t2MOVr, Convert__Reg1_1__Reg1_2__CondCode2_0__regCPSR, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_GPR }, 0},
  { 349 /* movs */, ARM::MOVr, Convert__Reg1_1__Reg1_2__CondCode2_0__regCPSR, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 349 /* movs */, ARM::t2MOVi, Convert__Reg1_2__T2SOImm1_3__CondCode2_0__regCPSR, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2SOImm }, 0},
  { 349 /* movs */, ARM::t2MOVr, Convert__Reg1_2__Reg1_3__CondCode2_0__regCPSR, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_GPR }, 0},
  { 354 /* movt */, ARM::t2MOVTi16, Convert__Reg1_1__Tie0__Imm0_65535Expr1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Imm0_65535Expr }, 0},
  { 354 /* movt */, ARM::MOVTi16, Convert__Reg1_1__Tie0__Imm0_65535Expr1_2__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode, MCK_GPRnopc, MCK_Imm0_65535Expr }, 0},
  { 359 /* movw */, ARM::t2MOVi16, Convert__Reg1_1__Imm0_65535Expr1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Imm0_65535Expr }, 0},
  { 359 /* movw */, ARM::MOVi16, Convert__Reg1_1__Imm0_65535Expr1_2__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode, MCK_GPR, MCK_Imm0_65535Expr }, 0},
  { 364 /* mrc */, ARM::t2MRC, Convert__Reg1_2__CoprocNum1_0__Imm0_71_1__CoprocReg1_3__CoprocReg1_4__imm0, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg }, 0},
  { 364 /* mrc */, ARM::MRC, Convert__Reg1_3__CoprocNum1_1__Imm0_71_2__CoprocReg1_4__CoprocReg1_5__imm0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg }, 0},
  { 364 /* mrc */, ARM::t2MRC, Convert__Reg1_2__CoprocNum1_0__Imm0_71_1__CoprocReg1_3__CoprocReg1_4__Imm0_71_5, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 364 /* mrc */, ARM::MRC, Convert__Reg1_3__CoprocNum1_1__Imm0_71_2__CoprocReg1_4__CoprocReg1_5__Imm0_71_6__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 368 /* mrc2 */, ARM::MRC2, Convert__Reg1_2__CoprocNum1_0__Imm0_71_1__CoprocReg1_3__CoprocReg1_4__imm0, Feature_IsARM, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg }, 0},
  { 368 /* mrc2 */, ARM::t2MRC2, Convert__Reg1_2__CoprocNum1_0__Imm0_71_1__CoprocReg1_3__CoprocReg1_4__imm0, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg }, 0},
  { 368 /* mrc2 */, ARM::MRC2, Convert__Reg1_2__CoprocNum1_0__Imm0_71_1__CoprocReg1_3__CoprocReg1_4__Imm0_71_5, Feature_IsARM, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 368 /* mrc2 */, ARM::t2MRC2, Convert__Reg1_2__CoprocNum1_0__Imm0_71_1__CoprocReg1_3__CoprocReg1_4__Imm0_71_5, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 373 /* mrrc */, ARM::t2MRRC, Convert__CoprocNum1_0__Imm0_151_1__Reg1_2__Reg1_3__CoprocReg1_4, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_15, MCK_GPR, MCK_GPR, MCK_CoprocReg }, 0},
  { 373 /* mrrc */, ARM::MRRC, Convert__CoprocNum1_1__Imm0_151_2__Reg1_3__Reg1_4__CoprocReg1_5__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_Imm0_15, MCK_GPRnopc, MCK_GPRnopc, MCK_CoprocReg }, 0},
  { 378 /* mrrc2 */, ARM::MRRC2, Convert__CoprocNum1_0__Imm0_151_1__Reg1_2__Reg1_3__CoprocReg1_4, Feature_IsARM, { MCK_CoprocNum, MCK_Imm0_15, MCK_GPRnopc, MCK_GPRnopc, MCK_CoprocReg }, 0},
  { 378 /* mrrc2 */, ARM::t2MRRC2, Convert__CoprocNum1_0__Imm0_151_1__Reg1_2__Reg1_3__CoprocReg1_4, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_15, MCK_GPR, MCK_GPR, MCK_CoprocReg }, 0},
  { 384 /* mrs */, ARM::t2MRS_M, Convert__Reg1_1__MSRMask1_2__CondCode2_0, Feature_IsThumb2|Feature_IsMClass, { MCK_CondCode, MCK_rGPR, MCK_MSRMask }, 0},
  { 384 /* mrs */, ARM::MRS, Convert__Reg1_1__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_CCR }, 0},
  { 384 /* mrs */, ARM::MRS, Convert__Reg1_1__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_APSR }, 0},
  { 384 /* mrs */, ARM::MRSsys, Convert__Reg1_1__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_SPSR }, 0},
  { 384 /* mrs */, ARM::t2MRS_AR, Convert__Reg1_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_CCR }, 0},
  { 384 /* mrs */, ARM::t2MRS_AR, Convert__Reg1_1__CondCode2_0, Feature_IsThumb2|Feature_IsARClass, { MCK_CondCode, MCK_GPR, MCK_APSR }, 0},
  { 384 /* mrs */, ARM::t2MRSsys_AR, Convert__Reg1_1__CondCode2_0, Feature_IsThumb2|Feature_IsARClass, { MCK_CondCode, MCK_GPR, MCK_SPSR }, 0},
  { 388 /* msr */, ARM::t2MSR_AR, Convert__MSRMask1_1__Reg1_2__CondCode2_0, Feature_IsThumb2|Feature_IsARClass, { MCK_CondCode, MCK_MSRMask, MCK_rGPR }, 0},
  { 388 /* msr */, ARM::t2MSR_M, Convert__MSRMask1_1__Reg1_2__CondCode2_0, Feature_IsThumb2|Feature_IsMClass, { MCK_CondCode, MCK_MSRMask, MCK_rGPR }, 0},
  { 388 /* msr */, ARM::MSR, Convert__MSRMask1_1__Reg1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_MSRMask, MCK_GPR }, 0},
  { 388 /* msr */, ARM::MSRi, Convert__MSRMask1_1__ARMSOImm1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_MSRMask, MCK_ARMSOImm }, 0},
  { 392 /* mul */, ARM::t2MUL, Convert__Reg1_1__Reg1_2__Reg1_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 392 /* mul */, ARM::tMUL, ConvertCustom_cvtThumbMultiply, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 392 /* mul */, ARM::MUL, Convert__Reg1_2__Reg1_3__Reg1_2__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 392 /* mul */, ARM::t2MUL, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 392 /* mul */, ARM::tMUL, ConvertCustom_cvtThumbMultiply, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR, MCK_tGPR }, 0},
  { 392 /* mul */, ARM::MUL, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM|Feature_HasV6, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 396 /* mvn */, ARM::t2MOVi, Convert__Reg1_1__T2SOImmNot1_2__CondCode2_0__reg0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2SOImmNot }, 0},
  { 396 /* mvn */, ARM::tMVN, Convert__Reg1_2__CCOut1_0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 396 /* mvn */, ARM::t2MVNr, Convert__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 396 /* mvn */, ARM::t2MVNs, Convert__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 396 /* mvn */, ARM::MOVi, Convert__Reg1_2__ARMSOImmNot1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_ARMSOImmNot }, 0},
  { 396 /* mvn */, ARM::t2MVNi, Convert__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_T2SOImm }, 0},
  { 396 /* mvn */, ARM::MVNr, Convert__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 396 /* mvn */, ARM::MVNi, Convert__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 396 /* mvn */, ARM::MVNsi, Convert__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 396 /* mvn */, ARM::MVNsr, Convert__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 396 /* mvn */, ARM::t2MVNr, Convert__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 396 /* mvn */, ARM::t2MVNs, Convert__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 396 /* mvn */, ARM::t2MVNi, Convert__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2SOImm }, 0},
  { 400 /* neg */, ARM::tRSB, Convert__Reg1_2__CCOut1_0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 400 /* neg */, ARM::t2RSBri, Convert__Reg1_2__Reg1_3__imm0__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 400 /* neg */, ARM::RSBri, Convert__Reg1_2__Reg1_3__imm0__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 404 /* nop */, ARM::tMOVr, Convert__regR8__regR8__imm14__imm0, Feature_IsThumb, {  }, 0},
  { 404 /* nop */, ARM::NOP, Convert__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode }, 0},
  { 404 /* nop */, ARM::tNOP, Convert__CondCode2_0, Feature_IsThumb2, { MCK_CondCode }, 0},
  { 404 /* nop */, ARM::MOVr, Convert__regR0__regR0__CondCode2_0__reg0, Feature_IsARM, { MCK_CondCode }, 0},
  { 404 /* nop */, ARM::t2NOP, Convert__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w }, 0},
  { 408 /* orn */, ARM::t2ORNrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 408 /* orn */, ARM::t2ORNrs, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 408 /* orn */, ARM::t2ORNri, Convert__Reg1_2__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_T2SOImm }, 0},
  { 408 /* orn */, ARM::t2ORNrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 408 /* orn */, ARM::t2ORNrs, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 408 /* orn */, ARM::t2ORNri, Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 412 /* orr */, ARM::tORR, Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 412 /* orr */, ARM::t2ORRrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 412 /* orr */, ARM::t2ORRrs, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 412 /* orr */, ARM::t2ORRri, Convert__Reg1_2__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_T2SOImm }, 0},
  { 412 /* orr */, ARM::ORRrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 412 /* orr */, ARM::ORRri, Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 412 /* orr */, ARM::ORRrsi, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 412 /* orr */, ARM::ORRrsr, Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 412 /* orr */, ARM::t2ORRrr, Convert__Reg1_3__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 412 /* orr */, ARM::t2ORRrs, Convert__Reg1_3__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 412 /* orr */, ARM::t2ORRri, Convert__Reg1_3__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2SOImm }, 0},
  { 412 /* orr */, ARM::t2ORRrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 412 /* orr */, ARM::t2ORRrs, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 412 /* orr */, ARM::t2ORRri, Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 412 /* orr */, ARM::ORRrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 412 /* orr */, ARM::ORRri, Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_ARMSOImm }, 0},
  { 412 /* orr */, ARM::ORRrsi, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 412 /* orr */, ARM::ORRrsr, Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 412 /* orr */, ARM::t2ORRrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 412 /* orr */, ARM::t2ORRrs, Convert__Reg1_3__Reg1_4__RegShiftedImm2_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 412 /* orr */, ARM::t2ORRri, Convert__Reg1_3__Reg1_4__T2SOImm1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 416 /* pkhbt */, ARM::t2PKHBT, Convert__Reg1_1__Reg1_2__Reg1_3__imm0__CondCode2_0, Feature_HasT2ExtractPack|Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 416 /* pkhbt */, ARM::PKHBT, Convert__Reg1_1__Reg1_2__Reg1_3__imm0__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 416 /* pkhbt */, ARM::t2PKHBT, Convert__Reg1_1__Reg1_2__Reg1_3__PKHLSLImm1_4__CondCode2_0, Feature_HasT2ExtractPack|Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_PKHLSLImm }, 0},
  { 416 /* pkhbt */, ARM::PKHBT, Convert__Reg1_1__Reg1_2__Reg1_3__PKHLSLImm1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_PKHLSLImm }, 0},
  { 422 /* pkhtb */, ARM::t2PKHBT, Convert__Reg1_1__Reg1_2__Reg1_3__imm0__CondCode2_0, Feature_HasT2ExtractPack|Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 422 /* pkhtb */, ARM::PKHBT, Convert__Reg1_1__Reg1_2__Reg1_3__imm0__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 422 /* pkhtb */, ARM::t2PKHTB, Convert__Reg1_1__Reg1_2__Reg1_3__PKHASRImm1_4__CondCode2_0, Feature_HasT2ExtractPack|Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_PKHASRImm }, 0},
  { 422 /* pkhtb */, ARM::PKHTB, Convert__Reg1_1__Reg1_2__Reg1_3__PKHASRImm1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_PKHASRImm }, 0},
  { 428 /* pld */, ARM::PLDi12, Convert__MemImm12Offset2_0, Feature_IsARM, { MCK_MemImm12Offset }, 0},
  { 428 /* pld */, ARM::PLDrs, Convert__MemRegOffset3_0, Feature_IsARM, { MCK_MemRegOffset }, 0},
  { 428 /* pld */, ARM::t2PLDi8, Convert__MemNegImm8Offset2_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_MemNegImm8Offset }, 0},
  { 428 /* pld */, ARM::t2PLDi12, Convert__MemUImm12Offset2_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_MemUImm12Offset }, 0},
  { 428 /* pld */, ARM::t2PLDs, Convert__T2MemRegOffset3_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_T2MemRegOffset }, 0},
  { 432 /* pldw */, ARM::PLDWi12, Convert__MemImm12Offset2_0, Feature_IsARM|Feature_HasV7|Feature_HasMP, { MCK_MemImm12Offset }, 0},
  { 432 /* pldw */, ARM::PLDWrs, Convert__MemRegOffset3_0, Feature_IsARM|Feature_HasV7|Feature_HasMP, { MCK_MemRegOffset }, 0},
  { 432 /* pldw */, ARM::t2PLDWi8, Convert__MemNegImm8Offset2_1__CondCode2_0, Feature_IsThumb2|Feature_HasV7|Feature_HasMP, { MCK_CondCode, MCK_MemNegImm8Offset }, 0},
  { 432 /* pldw */, ARM::t2PLDWi12, Convert__MemUImm12Offset2_1__CondCode2_0, Feature_IsThumb2|Feature_HasV7|Feature_HasMP, { MCK_CondCode, MCK_MemUImm12Offset }, 0},
  { 432 /* pldw */, ARM::t2PLDWs, Convert__T2MemRegOffset3_1__CondCode2_0, Feature_IsThumb2|Feature_HasV7|Feature_HasMP, { MCK_CondCode, MCK_T2MemRegOffset }, 0},
  { 437 /* pli */, ARM::PLIi12, Convert__MemImm12Offset2_0, Feature_IsARM|Feature_HasV7, { MCK_MemImm12Offset }, 0},
  { 437 /* pli */, ARM::PLIrs, Convert__MemRegOffset3_0, Feature_IsARM|Feature_HasV7, { MCK_MemRegOffset }, 0},
  { 437 /* pli */, ARM::t2PLIi8, Convert__MemNegImm8Offset2_1__CondCode2_0, Feature_IsThumb2|Feature_HasV7, { MCK_CondCode, MCK_MemNegImm8Offset }, 0},
  { 437 /* pli */, ARM::t2PLIi12, Convert__MemUImm12Offset2_1__CondCode2_0, Feature_IsThumb2|Feature_HasV7, { MCK_CondCode, MCK_MemUImm12Offset }, 0},
  { 437 /* pli */, ARM::t2PLIs, Convert__T2MemRegOffset3_1__CondCode2_0, Feature_IsThumb2|Feature_HasV7, { MCK_CondCode, MCK_T2MemRegOffset }, 0},
  { 441 /* pop */, ARM::tPOP, Convert__CondCode2_0__RegList1_1, Feature_IsThumb, { MCK_CondCode, MCK_RegList }, 0},
  { 441 /* pop */, ARM::LDMIA_UPD, Convert__regSP__Tie0__CondCode2_0__RegList1_1, Feature_IsARM, { MCK_CondCode, MCK_RegList }, 0},
  { 441 /* pop */, ARM::t2LDMIA_UPD, Convert__regSP__Tie0__CondCode2_0__RegList1_1, Feature_IsThumb2, { MCK_CondCode, MCK_RegList }, 0},
  { 441 /* pop */, ARM::t2LDMIA_UPD, Convert__regSP__Tie0__CondCode2_0__RegList1_2, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_RegList }, 0},
  { 445 /* push */, ARM::tPUSH, Convert__CondCode2_0__RegList1_1, Feature_IsThumb, { MCK_CondCode, MCK_RegList }, 0},
  { 445 /* push */, ARM::STMDB_UPD, Convert__regSP__Tie0__CondCode2_0__RegList1_1, Feature_IsARM, { MCK_CondCode, MCK_RegList }, 0},
  { 445 /* push */, ARM::t2STMDB_UPD, Convert__regSP__Tie0__CondCode2_0__RegList1_1, Feature_IsThumb2, { MCK_CondCode, MCK_RegList }, 0},
  { 445 /* push */, ARM::t2STMDB_UPD, Convert__regSP__Tie0__CondCode2_0__RegList1_2, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_RegList }, 0},
  { 450 /* qadd */, ARM::t2QADD, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 450 /* qadd */, ARM::QADD, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 455 /* qadd16 */, ARM::t2QADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 455 /* qadd16 */, ARM::QADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 462 /* qadd8 */, ARM::t2QADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 462 /* qadd8 */, ARM::QADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 468 /* qasx */, ARM::t2QASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 468 /* qasx */, ARM::QASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 473 /* qdadd */, ARM::t2QDADD, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 473 /* qdadd */, ARM::QDADD, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 479 /* qdsub */, ARM::t2QDSUB, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 479 /* qdsub */, ARM::QDSUB, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 485 /* qsax */, ARM::t2QSAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 485 /* qsax */, ARM::QSAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 490 /* qsub */, ARM::t2QSUB, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 490 /* qsub */, ARM::QSUB, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 495 /* qsub16 */, ARM::t2QSUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 495 /* qsub16 */, ARM::QSUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 502 /* qsub8 */, ARM::t2QSUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 502 /* qsub8 */, ARM::QSUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 508 /* rbit */, ARM::t2RBIT, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 508 /* rbit */, ARM::RBIT, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 513 /* rev */, ARM::tREV, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb|Feature_HasV6, { MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 513 /* rev */, ARM::t2REV, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 513 /* rev */, ARM::REV, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 513 /* rev */, ARM::t2REV, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 517 /* rev16 */, ARM::tREV16, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb|Feature_HasV6, { MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 517 /* rev16 */, ARM::t2REV16, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 517 /* rev16 */, ARM::REV16, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 517 /* rev16 */, ARM::t2REV16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 523 /* revsh */, ARM::tREVSH, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb|Feature_HasV6, { MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 523 /* revsh */, ARM::t2REVSH, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 523 /* revsh */, ARM::REVSH, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 523 /* revsh */, ARM::t2REVSH, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 529 /* rfeda */, ARM::RFEDA, Convert__Reg1_0, Feature_IsARM, { MCK_GPR }, 0},
  { 529 /* rfeda */, ARM::RFEDA_UPD, Convert__Reg1_0, Feature_IsARM, { MCK_GPR, MCK__EXCLAIM_ }, 0},
  { 535 /* rfedb */, ARM::RFEDB, Convert__Reg1_0, Feature_IsARM, { MCK_GPR }, 0},
  { 535 /* rfedb */, ARM::RFEDB_UPD, Convert__Reg1_0, Feature_IsARM, { MCK_GPR, MCK__EXCLAIM_ }, 0},
  { 535 /* rfedb */, ARM::t2RFEDB, Convert__Reg1_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR }, 0},
  { 535 /* rfedb */, ARM::t2RFEDBW, Convert__Reg1_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_ }, 0},
  { 541 /* rfeia */, ARM::RFEIA, Convert__Reg1_0, Feature_IsARM, { MCK_GPR }, 0},
  { 541 /* rfeia */, ARM::RFEIA_UPD, Convert__Reg1_0, Feature_IsARM, { MCK_GPR, MCK__EXCLAIM_ }, 0},
  { 541 /* rfeia */, ARM::t2RFEIA, Convert__Reg1_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR }, 0},
  { 541 /* rfeia */, ARM::t2RFEIAW, Convert__Reg1_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_ }, 0},
  { 547 /* rfeib */, ARM::RFEIB, Convert__Reg1_0, Feature_IsARM, { MCK_GPR }, 0},
  { 547 /* rfeib */, ARM::RFEIB_UPD, Convert__Reg1_0, Feature_IsARM, { MCK_GPR, MCK__EXCLAIM_ }, 0},
  { 553 /* ror */, ARM::tROR, Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 553 /* ror */, ARM::t2RORrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 553 /* ror */, ARM::t2RORri, Convert__Reg1_2__Reg1_2__Imm0_311_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_Imm0_31 }, 0},
  { 553 /* ror */, ARM::RORr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 553 /* ror */, ARM::RORi, Convert__Reg1_2__Reg1_2__Imm0_311_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_Imm0_31 }, 0},
  { 553 /* ror */, ARM::t2RORrr, Convert__Reg1_3__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 553 /* ror */, ARM::t2RORri, Convert__Reg1_3__Reg1_3__Imm0_311_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_Imm0_31 }, 0},
  { 553 /* ror */, ARM::t2RORrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 553 /* ror */, ARM::t2RORri, Convert__Reg1_2__Reg1_3__Imm0_311_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_Imm0_31 }, 0},
  { 553 /* ror */, ARM::RORr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 553 /* ror */, ARM::RORi, Convert__Reg1_2__Reg1_3__Imm0_311_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_Imm0_31 }, 0},
  { 553 /* ror */, ARM::t2RORrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 553 /* ror */, ARM::t2RORri, Convert__Reg1_3__Reg1_4__Imm0_311_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_Imm0_31 }, 0},
  { 557 /* rrx */, ARM::t2RRX, Convert__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 557 /* rrx */, ARM::RRXi, Convert__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 561 /* rsb */, ARM::t2RSBrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 561 /* rsb */, ARM::t2RSBrs, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 561 /* rsb */, ARM::t2RSBri, Convert__Reg1_2__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_T2SOImm }, 0},
  { 561 /* rsb */, ARM::RSBrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 561 /* rsb */, ARM::RSBri, Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 561 /* rsb */, ARM::RSBrsi, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 561 /* rsb */, ARM::RSBrsr, Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 561 /* rsb */, ARM::tRSB, Convert__Reg1_2__CCOut1_0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR, MCK__35_0 }, 0},
  { 561 /* rsb */, ARM::t2RSBrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 561 /* rsb */, ARM::t2RSBrs, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 561 /* rsb */, ARM::t2RSBri, Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 561 /* rsb */, ARM::RSBrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 561 /* rsb */, ARM::RSBri, Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_ARMSOImm }, 0},
  { 561 /* rsb */, ARM::RSBrsi, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 561 /* rsb */, ARM::RSBrsr, Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 561 /* rsb */, ARM::t2RSBri, Convert__Reg1_3__Reg1_4__T2SOImm1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 565 /* rsc */, ARM::RSCrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 565 /* rsc */, ARM::RSCri, Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 565 /* rsc */, ARM::RSCrsi, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 565 /* rsc */, ARM::RSCrsr, Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 565 /* rsc */, ARM::RSCrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 565 /* rsc */, ARM::RSCri, Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_ARMSOImm }, 0},
  { 565 /* rsc */, ARM::RSCrsi, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 565 /* rsc */, ARM::RSCrsr, Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 569 /* sadd16 */, ARM::t2SADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 569 /* sadd16 */, ARM::SADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 576 /* sadd8 */, ARM::t2SADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 576 /* sadd8 */, ARM::SADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 582 /* sasx */, ARM::t2SASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 582 /* sasx */, ARM::SASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 587 /* sbc */, ARM::tSBC, Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 587 /* sbc */, ARM::SBCrsr, Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedReg }, 0},
  { 587 /* sbc */, ARM::SBCrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 587 /* sbc */, ARM::SBCri, Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 587 /* sbc */, ARM::SBCrsi, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 587 /* sbc */, ARM::t2SBCrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 587 /* sbc */, ARM::t2SBCrs, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 587 /* sbc */, ARM::t2SBCri, Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 587 /* sbc */, ARM::SBCrsr, Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_RegShiftedReg }, 0},
  { 587 /* sbc */, ARM::SBCrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 587 /* sbc */, ARM::SBCri, Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_ARMSOImm }, 0},
  { 587 /* sbc */, ARM::SBCrsi, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 587 /* sbc */, ARM::t2SBCrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 587 /* sbc */, ARM::t2SBCrs, Convert__Reg1_3__Reg1_4__RegShiftedImm2_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 591 /* sbfx */, ARM::t2SBFX, Convert__Reg1_1__Reg1_2__Imm0_311_3__Imm1_321_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_Imm0_31, MCK_Imm1_32 }, 0},
  { 591 /* sbfx */, ARM::SBFX, Convert__Reg1_1__Reg1_2__Imm0_311_3__Imm1_321_4__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_Imm0_31, MCK_Imm1_32 }, 0},
  { 596 /* sdiv */, ARM::t2SDIV, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasDivide|Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 601 /* sel */, ARM::SEL, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 601 /* sel */, ARM::t2SEL, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 605 /* setend */, ARM::SETEND, Convert__SetEndImm1_0, Feature_IsARM, { MCK_SetEndImm }, 0},
  { 605 /* setend */, ARM::tSETEND, Convert__SetEndImm1_0, Feature_IsThumb, { MCK_SetEndImm }, 0},
  { 612 /* sev */, ARM::SEV, Convert__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode }, 0},
  { 612 /* sev */, ARM::tSEV, Convert__CondCode2_0, Feature_IsThumb, { MCK_CondCode }, 0},
  { 612 /* sev */, ARM::t2SEV, Convert__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w }, 0},
  { 616 /* shadd16 */, ARM::t2SHADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 616 /* shadd16 */, ARM::SHADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 624 /* shadd8 */, ARM::t2SHADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 624 /* shadd8 */, ARM::SHADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 631 /* shasx */, ARM::t2SHASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 631 /* shasx */, ARM::SHASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 637 /* shsax */, ARM::t2SHSAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 637 /* shsax */, ARM::SHSAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 643 /* shsub16 */, ARM::t2SHSUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 643 /* shsub16 */, ARM::SHSUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 651 /* shsub8 */, ARM::t2SHSUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 651 /* shsub8 */, ARM::SHSUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 658 /* smc */, ARM::SMC, Convert__Imm0_151_1__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_Imm0_15 }, 0},
  { 658 /* smc */, ARM::t2SMC, Convert__Imm0_151_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_Imm0_15 }, 0},
  { 662 /* smlabb */, ARM::t2SMLABB, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 662 /* smlabb */, ARM::SMLABB, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPR }, 0},
  { 669 /* smlabt */, ARM::t2SMLABT, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 669 /* smlabt */, ARM::SMLABT, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPR }, 0},
  { 676 /* smlad */, ARM::t2SMLAD, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 676 /* smlad */, ARM::SMLAD, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPR }, 0},
  { 682 /* smladx */, ARM::t2SMLADX, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 682 /* smladx */, ARM::SMLADX, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPR }, 0},
  { 689 /* smlal */, ARM::t2SMLAL, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 689 /* smlal */, ARM::SMLAL, Convert__Reg1_2__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsARM|Feature_HasV6, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 695 /* smlalbb */, ARM::t2SMLALBB, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 695 /* smlalbb */, ARM::SMLALBB, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 703 /* smlalbt */, ARM::t2SMLALBT, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 703 /* smlalbt */, ARM::SMLALBT, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 711 /* smlald */, ARM::t2SMLALD, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 711 /* smlald */, ARM::SMLALD, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 718 /* smlaldx */, ARM::t2SMLALDX, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 718 /* smlaldx */, ARM::SMLALDX, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 726 /* smlaltb */, ARM::t2SMLALTB, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 726 /* smlaltb */, ARM::SMLALTB, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 734 /* smlaltt */, ARM::t2SMLALTT, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 734 /* smlaltt */, ARM::SMLALTT, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 742 /* smlatb */, ARM::t2SMLATB, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 742 /* smlatb */, ARM::SMLATB, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPR }, 0},
  { 749 /* smlatt */, ARM::t2SMLATT, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 749 /* smlatt */, ARM::SMLATT, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPR }, 0},
  { 756 /* smlawb */, ARM::t2SMLAWB, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 756 /* smlawb */, ARM::SMLAWB, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPR }, 0},
  { 763 /* smlawt */, ARM::t2SMLAWT, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 763 /* smlawt */, ARM::SMLAWT, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPR }, 0},
  { 770 /* smlsd */, ARM::t2SMLSD, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 770 /* smlsd */, ARM::SMLSD, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPR }, 0},
  { 776 /* smlsdx */, ARM::t2SMLSDX, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 776 /* smlsdx */, ARM::SMLSDX, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPR }, 0},
  { 783 /* smlsld */, ARM::t2SMLSLD, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 783 /* smlsld */, ARM::SMLSLD, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 790 /* smlsldx */, ARM::t2SMLSLDX, Convert__Reg1_1__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 790 /* smlsldx */, ARM::SMLSLDX, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 798 /* smmla */, ARM::t2SMMLA, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 798 /* smmla */, ARM::SMMLA, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 804 /* smmlar */, ARM::t2SMMLAR, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 804 /* smmlar */, ARM::SMMLAR, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 811 /* smmls */, ARM::t2SMMLS, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 811 /* smmls */, ARM::SMMLS, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 817 /* smmlsr */, ARM::t2SMMLSR, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 817 /* smmlsr */, ARM::SMMLSR, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 824 /* smmul */, ARM::t2SMMUL, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 824 /* smmul */, ARM::SMMUL, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 830 /* smmulr */, ARM::t2SMMULR, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 830 /* smmulr */, ARM::SMMULR, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 837 /* smuad */, ARM::t2SMUAD, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 837 /* smuad */, ARM::SMUAD, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 843 /* smuadx */, ARM::t2SMUADX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 843 /* smuadx */, ARM::SMUADX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 850 /* smulbb */, ARM::t2SMULBB, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 850 /* smulbb */, ARM::SMULBB, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 857 /* smulbt */, ARM::t2SMULBT, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 857 /* smulbt */, ARM::SMULBT, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 864 /* smull */, ARM::t2SMULL, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 864 /* smull */, ARM::SMULL, Convert__Reg1_2__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsARM|Feature_HasV6, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 864 /* smull */, ARM::SMULL, Convert__Reg1_2__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 870 /* smultb */, ARM::t2SMULTB, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 870 /* smultb */, ARM::SMULTB, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 877 /* smultt */, ARM::t2SMULTT, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 877 /* smultt */, ARM::SMULTT, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 884 /* smulwb */, ARM::t2SMULWB, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 884 /* smulwb */, ARM::SMULWB, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 891 /* smulwt */, ARM::t2SMULWT, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 891 /* smulwt */, ARM::SMULWT, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 898 /* smusd */, ARM::t2SMUSD, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 898 /* smusd */, ARM::SMUSD, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 904 /* smusdx */, ARM::t2SMUSDX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 904 /* smusdx */, ARM::SMUSDX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 911 /* srsda */, ARM::SRSDA, Convert__Imm0_311_1, Feature_IsARM, { MCK_GPRsp, MCK_Imm0_31 }, 0},
  { 911 /* srsda */, ARM::SRSDA_UPD, Convert__Imm0_311_2, Feature_IsARM, { MCK_GPRsp, MCK__EXCLAIM_, MCK_Imm0_31 }, 0},
  { 917 /* srsdb */, ARM::SRSDB, Convert__Imm0_311_1, Feature_IsARM, { MCK_GPRsp, MCK_Imm0_31 }, 0},
  { 917 /* srsdb */, ARM::SRSDB_UPD, Convert__Imm0_311_2, Feature_IsARM, { MCK_GPRsp, MCK__EXCLAIM_, MCK_Imm0_31 }, 0},
  { 917 /* srsdb */, ARM::t2SRSDB, Convert__Imm0_311_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRsp, MCK_Imm0_31 }, 0},
  { 917 /* srsdb */, ARM::t2SRSDB_UPD, Convert__Imm0_311_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRsp, MCK__EXCLAIM_, MCK_Imm0_31 }, 0},
  { 923 /* srsia */, ARM::SRSIA, Convert__Imm0_311_1, Feature_IsARM, { MCK_GPRsp, MCK_Imm0_31 }, 0},
  { 923 /* srsia */, ARM::SRSIA_UPD, Convert__Imm0_311_2, Feature_IsARM, { MCK_GPRsp, MCK__EXCLAIM_, MCK_Imm0_31 }, 0},
  { 923 /* srsia */, ARM::t2SRSIA, Convert__Imm0_311_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRsp, MCK_Imm0_31 }, 0},
  { 923 /* srsia */, ARM::t2SRSIA_UPD, Convert__Imm0_311_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRsp, MCK__EXCLAIM_, MCK_Imm0_31 }, 0},
  { 929 /* srsib */, ARM::SRSIB, Convert__Imm0_311_1, Feature_IsARM, { MCK_GPRsp, MCK_Imm0_31 }, 0},
  { 929 /* srsib */, ARM::SRSIB_UPD, Convert__Imm0_311_2, Feature_IsARM, { MCK_GPRsp, MCK__EXCLAIM_, MCK_Imm0_31 }, 0},
  { 935 /* ssat */, ARM::t2SSAT, Convert__Reg1_1__Imm1_321_2__Reg1_3__imm0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Imm1_32, MCK_rGPR }, 0},
  { 935 /* ssat */, ARM::SSAT, Convert__Reg1_1__Imm1_321_2__Reg1_3__imm0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_Imm1_32, MCK_GPRnopc }, 0},
  { 935 /* ssat */, ARM::t2SSAT, Convert__Reg1_1__Imm1_321_2__Reg1_3__ShifterImm1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Imm1_32, MCK_rGPR, MCK_ShifterImm }, 0},
  { 935 /* ssat */, ARM::SSAT, Convert__Reg1_1__Imm1_321_2__Reg1_3__ShifterImm1_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_Imm1_32, MCK_GPRnopc, MCK_ShifterImm }, 0},
  { 940 /* ssat16 */, ARM::t2SSAT16, Convert__Reg1_1__Imm1_161_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_Imm1_16, MCK_rGPR }, 0},
  { 940 /* ssat16 */, ARM::SSAT16, Convert__Reg1_1__Imm1_161_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_Imm1_16, MCK_GPRnopc }, 0},
  { 947 /* ssax */, ARM::t2SSAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 947 /* ssax */, ARM::SSAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 952 /* ssub16 */, ARM::t2SSUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 952 /* ssub16 */, ARM::SSUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 959 /* ssub8 */, ARM::t2SSUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 959 /* ssub8 */, ARM::SSUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 965 /* stc */, ARM::STC_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 965 /* stc */, ARM::t2STC_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 965 /* stc */, ARM::STC_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 965 /* stc */, ARM::t2STC_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 965 /* stc */, ARM::STC_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 965 /* stc */, ARM::t2STC_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 965 /* stc */, ARM::STC_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 965 /* stc */, ARM::t2STC_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 969 /* stc2 */, ARM::STC2_OFFSET, Convert__CoprocNum1_0__CoprocReg1_1__AddrMode52_2, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 969 /* stc2 */, ARM::t2STC2_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 969 /* stc2 */, ARM::STC2_PRE, Convert__CoprocNum1_0__CoprocReg1_1__AddrMode52_2, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 969 /* stc2 */, ARM::STC2_OPTION, Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__CoprocOption1_3, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 969 /* stc2 */, ARM::STC2_POST, Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__PostIdxImm8s41_3, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 969 /* stc2 */, ARM::t2STC2_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 969 /* stc2 */, ARM::t2STC2_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 969 /* stc2 */, ARM::t2STC2_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 974 /* stc2l */, ARM::STC2L_OFFSET, Convert__CoprocNum1_0__CoprocReg1_1__AddrMode52_2, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 974 /* stc2l */, ARM::t2STC2L_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 974 /* stc2l */, ARM::STC2L_PRE, Convert__CoprocNum1_0__CoprocReg1_1__AddrMode52_2, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 974 /* stc2l */, ARM::STC2L_OPTION, Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__CoprocOption1_3, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 974 /* stc2l */, ARM::STC2L_POST, Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__PostIdxImm8s41_3, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 974 /* stc2l */, ARM::t2STC2L_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 974 /* stc2l */, ARM::t2STC2L_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 974 /* stc2l */, ARM::t2STC2L_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 980 /* stcl */, ARM::STCL_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 980 /* stcl */, ARM::t2STCL_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 980 /* stcl */, ARM::STCL_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 980 /* stcl */, ARM::t2STCL_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 980 /* stcl */, ARM::STCL_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 980 /* stcl */, ARM::t2STCL_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 980 /* stcl */, ARM::STCL_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 980 /* stcl */, ARM::t2STCL_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 985 /* stm */, ARM::STMIA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 985 /* stm */, ARM::t2STMIA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 985 /* stm */, ARM::t2STMIA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 985 /* stm */, ARM::t2STMIA, Convert__Reg1_2__CondCode2_0__RegList1_3, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK_RegList }, 0},
  { 985 /* stm */, ARM::tSTMIA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 985 /* stm */, ARM::STMIA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 985 /* stm */, ARM::t2STMIA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 985 /* stm */, ARM::sysSTMIA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList, MCK__94_ }, 0},
  { 985 /* stm */, ARM::t2STMIA_UPD, Convert__Reg1_2__Tie0__CondCode2_0__RegList1_4, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 985 /* stm */, ARM::sysSTMIA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList, MCK__94_ }, 0},
  { 989 /* stmda */, ARM::STMDA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 989 /* stmda */, ARM::STMDA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 989 /* stmda */, ARM::sysSTMDA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList, MCK__94_ }, 0},
  { 989 /* stmda */, ARM::sysSTMDA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList, MCK__94_ }, 0},
  { 995 /* stmdb */, ARM::STMDB, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 995 /* stmdb */, ARM::t2STMDB, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 995 /* stmdb */, ARM::t2STMDB, Convert__Reg1_2__CondCode2_0__RegList1_3, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK_RegList }, 0},
  { 995 /* stmdb */, ARM::STMDB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 995 /* stmdb */, ARM::t2STMDB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 995 /* stmdb */, ARM::sysSTMDB, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList, MCK__94_ }, 0},
  { 995 /* stmdb */, ARM::t2STMDB_UPD, Convert__Reg1_2__Tie0__CondCode2_0__RegList1_4, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 995 /* stmdb */, ARM::sysSTMDB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList, MCK__94_ }, 0},
  { 1001 /* stmib */, ARM::STMIB, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 1001 /* stmib */, ARM::STMIB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 1001 /* stmib */, ARM::sysSTMIB, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList, MCK__94_ }, 0},
  { 1001 /* stmib */, ARM::sysSTMIB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList, MCK__94_ }, 0},
  { 1007 /* str */, ARM::tSTRi, Convert__Reg1_1__MemThumbRIs42_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRIs4 }, 0},
  { 1007 /* str */, ARM::tSTRr, Convert__Reg1_1__MemThumbRR2_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRR }, 0},
  { 1007 /* str */, ARM::tSTRspi, Convert__Reg1_1__MemThumbSPI2_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbSPI }, 0},
  { 1007 /* str */, ARM::STRi12, Convert__Reg1_1__MemImm12Offset2_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemImm12Offset }, 0},
  { 1007 /* str */, ARM::t2STRi8, Convert__Reg1_1__MemNegImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemNegImm8Offset }, 0},
  { 1007 /* str */, ARM::STRrs, Convert__Reg1_1__MemRegOffset3_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemRegOffset }, 0},
  { 1007 /* str */, ARM::t2STRi12, Convert__Reg1_1__MemUImm12Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemUImm12Offset }, 0},
  { 1007 /* str */, ARM::t2STRs, Convert__Reg1_1__T2MemRegOffset3_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_T2MemRegOffset }, 0},
  { 1007 /* str */, ARM::t2STRi12, Convert__Reg1_2__MemUImm12Offset2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK_MemUImm12Offset }, 0},
  { 1007 /* str */, ARM::t2STRs, Convert__Reg1_2__T2MemRegOffset3_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK_T2MemRegOffset }, 0},
  { 1007 /* str */, ARM::t2STR_PRE, ConvertCustom_cvtStWriteBackRegT2AddrModeImm8, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_MemImm8Offset, MCK__EXCLAIM_ }, 0},
  { 1007 /* str */, ARM::t2STR_POST, Convert__MemNoOffset1_2__Reg1_1__Tie0__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_MemNoOffset, MCK_Imm }, 0},
  { 1007 /* str */, ARM::STR_PRE_IMM, ConvertCustom_cvtStWriteBackRegAddrModeImm12, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemImm12Offset, MCK__EXCLAIM_ }, 0},
  { 1007 /* str */, ARM::STR_POST_IMM, Convert__MemNoOffset1_2__Reg1_1__Tie0__AM2OffsetImm2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM2OffsetImm }, 0},
  { 1007 /* str */, ARM::STR_POST_REG, Convert__MemNoOffset1_2__Reg1_1__Tie0__PostIdxRegShifted2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxRegShifted }, 0},
  { 1007 /* str */, ARM::STR_PRE_REG, ConvertCustom_cvtStWriteBackRegAddrMode2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemRegOffset, MCK__EXCLAIM_ }, 0},
  { 1011 /* strb */, ARM::tSTRBi, Convert__Reg1_1__MemThumbRIs12_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRIs1 }, 0},
  { 1011 /* strb */, ARM::tSTRBr, Convert__Reg1_1__MemThumbRR2_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRR }, 0},
  { 1011 /* strb */, ARM::t2STRBi8, Convert__Reg1_1__MemNegImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemNegImm8Offset }, 0},
  { 1011 /* strb */, ARM::t2STRBi12, Convert__Reg1_1__MemUImm12Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 1011 /* strb */, ARM::t2STRBs, Convert__Reg1_1__T2MemRegOffset3_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 1011 /* strb */, ARM::STRBi12, Convert__Reg1_1__MemImm12Offset2_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_MemImm12Offset }, 0},
  { 1011 /* strb */, ARM::STRBrs, Convert__Reg1_1__MemRegOffset3_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_MemRegOffset }, 0},
  { 1011 /* strb */, ARM::t2STRBi12, Convert__Reg1_2__MemUImm12Offset2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 1011 /* strb */, ARM::t2STRBs, Convert__Reg1_2__T2MemRegOffset3_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 1011 /* strb */, ARM::t2STRB_PRE, ConvertCustom_cvtStWriteBackRegT2AddrModeImm8, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemImm8Offset, MCK__EXCLAIM_ }, 0},
  { 1011 /* strb */, ARM::t2STRB_POST, Convert__MemNoOffset1_2__Reg1_1__Tie0__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemNoOffset, MCK_Imm }, 0},
  { 1011 /* strb */, ARM::STRB_PRE_IMM, ConvertCustom_cvtStWriteBackRegAddrModeImm12, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemImm12Offset, MCK__EXCLAIM_ }, 0},
  { 1011 /* strb */, ARM::STRB_POST_IMM, Convert__MemNoOffset1_2__Reg1_1__Tie0__AM2OffsetImm2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM2OffsetImm }, 0},
  { 1011 /* strb */, ARM::STRB_POST_REG, Convert__MemNoOffset1_2__Reg1_1__Tie0__PostIdxRegShifted2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxRegShifted }, 0},
  { 1011 /* strb */, ARM::STRB_PRE_REG, ConvertCustom_cvtStWriteBackRegAddrMode2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemRegOffset, MCK__EXCLAIM_ }, 0},
  { 1016 /* strbt */, ARM::t2STRBT, Convert__Reg1_1__MemImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemImm8Offset }, 0},
  { 1016 /* strbt */, ARM::STRBT_POST_IMM, Convert__MemNoOffset1_2__Reg1_1__Tie0__AM2OffsetImm2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM2OffsetImm }, 0},
  { 1016 /* strbt */, ARM::STRBT_POST_REG, Convert__MemNoOffset1_2__Reg1_1__Tie0__PostIdxRegShifted2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxRegShifted }, 0},
  { 1022 /* strd */, ARM::STRD, Convert__Reg1_1__Reg1_2__AddrMode33_3__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_AddrMode3 }, 0},
  { 1022 /* strd */, ARM::t2STRDi8, Convert__Reg1_1__Reg1_2__MemImm8s4Offset2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_MemImm8s4Offset }, 0},
  { 1022 /* strd */, ARM::t2STRD_PRE, ConvertCustom_cvtT2StrdPre, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_MemImm8s4Offset, MCK__EXCLAIM_ }, 0},
  { 1022 /* strd */, ARM::t2STRD_POST, Convert__MemNoOffset1_3__Reg1_1__Reg1_2__Tie0__Imm1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_MemNoOffset, MCK_Imm }, 0},
  { 1022 /* strd */, ARM::STRD_PRE, ConvertCustom_cvtStrdPre, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_AddrMode3, MCK__EXCLAIM_ }, 0},
  { 1022 /* strd */, ARM::STRD_POST, Convert__MemNoOffset1_3__Reg1_1__Reg1_2__Tie0__AM3Offset2_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_MemNoOffset, MCK_AM3Offset }, 0},
  { 1027 /* strex */, ARM::t2STREX, Convert__Reg1_1__Reg1_2__MemImm0_1020s4Offset2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_MemImm0_1020s4Offset }, 0},
  { 1027 /* strex */, ARM::STREX, Convert__Reg1_1__Reg1_2__MemNoOffset1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_MemNoOffset }, 0},
  { 1033 /* strexb */, ARM::t2STREXB, Convert__Reg1_1__Reg1_2__MemNoOffset1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_MemNoOffset }, 0},
  { 1033 /* strexb */, ARM::STREXB, Convert__Reg1_1__Reg1_2__MemNoOffset1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_MemNoOffset }, 0},
  { 1040 /* strexd */, ARM::t2STREXD, Convert__Reg1_1__Reg1_2__Reg1_3__MemNoOffset1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_MemNoOffset }, 0},
  { 1040 /* strexd */, ARM::STREXD, Convert__Reg1_1__Reg1_2__Reg1_3__MemNoOffset1_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_MemNoOffset }, 0},
  { 1047 /* strexh */, ARM::t2STREXH, Convert__Reg1_1__Reg1_2__MemNoOffset1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_MemNoOffset }, 0},
  { 1047 /* strexh */, ARM::STREXH, Convert__Reg1_1__Reg1_2__MemNoOffset1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_MemNoOffset }, 0},
  { 1054 /* strh */, ARM::tSTRHi, Convert__Reg1_1__MemThumbRIs22_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRIs2 }, 0},
  { 1054 /* strh */, ARM::tSTRHr, Convert__Reg1_1__MemThumbRR2_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRR }, 0},
  { 1054 /* strh */, ARM::t2STRHi8, Convert__Reg1_1__MemNegImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemNegImm8Offset }, 0},
  { 1054 /* strh */, ARM::t2STRHi12, Convert__Reg1_1__MemUImm12Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 1054 /* strh */, ARM::t2STRHs, Convert__Reg1_1__T2MemRegOffset3_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 1054 /* strh */, ARM::STRH, Convert__Reg1_1__AddrMode33_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_AddrMode3 }, 0},
  { 1054 /* strh */, ARM::t2STRHi12, Convert__Reg1_2__MemUImm12Offset2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 1054 /* strh */, ARM::t2STRHs, Convert__Reg1_2__T2MemRegOffset3_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 1054 /* strh */, ARM::t2STRH_PRE, ConvertCustom_cvtStWriteBackRegT2AddrModeImm8, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemImm8Offset, MCK__EXCLAIM_ }, 0},
  { 1054 /* strh */, ARM::t2STRH_POST, Convert__MemNoOffset1_2__Reg1_1__Tie0__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemNoOffset, MCK_Imm }, 0},
  { 1054 /* strh */, ARM::STRH_PRE, ConvertCustom_cvtStWriteBackRegAddrMode3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_AddrMode3, MCK__EXCLAIM_ }, 0},
  { 1054 /* strh */, ARM::STRH_POST, Convert__MemNoOffset1_2__Reg1_1__Tie0__AM3Offset2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM3Offset }, 0},
  { 1059 /* strht */, ARM::t2STRHT, Convert__Reg1_1__MemImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemImm8Offset }, 0},
  { 1059 /* strht */, ARM::STRHTi, ConvertCustom_cvtStExtTWriteBackImm, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxImm8 }, 0},
  { 1059 /* strht */, ARM::STRHTr, ConvertCustom_cvtStExtTWriteBackReg, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxReg }, 0},
  { 1065 /* strt */, ARM::t2STRT, Convert__Reg1_1__MemImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemImm8Offset }, 0},
  { 1065 /* strt */, ARM::STRT_POST_IMM, Convert__MemNoOffset1_2__Reg1_1__Tie0__AM2OffsetImm2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM2OffsetImm }, 0},
  { 1065 /* strt */, ARM::STRT_POST_REG, Convert__MemNoOffset1_2__Reg1_1__Tie0__PostIdxRegShifted2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxRegShifted }, 0},
  { 1070 /* sub */, ARM::tSUBspi, Convert__Reg1_1__Tie0__Imm0_508s41_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPRsp, MCK_Imm0_508s4 }, 0},
  { 1070 /* sub */, ARM::t2SUBri12, Convert__Reg1_1__Reg1_1__Imm0_40951_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_Imm0_4095 }, 0},
  { 1070 /* sub */, ARM::tSUBi8, Convert__Reg1_2__CCOut1_0__Tie0__Imm0_2551_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_Imm0_255 }, 0},
  { 1070 /* sub */, ARM::t2SUBrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_rGPR }, 0},
  { 1070 /* sub */, ARM::t2SUBrs, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 1070 /* sub */, ARM::t2SUBri, Convert__Reg1_2__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 1070 /* sub */, ARM::SUBrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 1070 /* sub */, ARM::SUBri, Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 1070 /* sub */, ARM::SUBrsi, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 1070 /* sub */, ARM::SUBrsr, Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 1070 /* sub */, ARM::tSUBspi, Convert__regSP__Tie0__Imm0_508s41_3__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPRsp, MCK_GPRsp, MCK_Imm0_508s4 }, 0},
  { 1070 /* sub */, ARM::t2SUBri12, Convert__Reg1_1__Reg1_2__Imm0_40951_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_Imm0_4095 }, 0},
  { 1070 /* sub */, ARM::t2SUBrr, Convert__Reg1_3__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_rGPR }, 0},
  { 1070 /* sub */, ARM::tSUBrr, Convert__Reg1_2__CCOut1_0__Reg1_3__Reg1_4__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR, MCK_tGPR }, 0},
  { 1070 /* sub */, ARM::tSUBi3, Convert__Reg1_2__CCOut1_0__Reg1_3__Imm0_71_4__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR, MCK_Imm0_7 }, 0},
  { 1070 /* sub */, ARM::t2SUBrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_rGPR }, 0},
  { 1070 /* sub */, ARM::t2SUBrs, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 1070 /* sub */, ARM::t2SUBri, Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 1070 /* sub */, ARM::SUBrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 1070 /* sub */, ARM::SUBri, Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_ARMSOImm }, 0},
  { 1070 /* sub */, ARM::SUBrsi, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 1070 /* sub */, ARM::SUBrsr, Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 1070 /* sub */, ARM::t2SUBrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_GPRnopc, MCK_rGPR }, 0},
  { 1070 /* sub */, ARM::t2SUBrs, Convert__Reg1_3__Reg1_4__RegShiftedImm2_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 1070 /* sub */, ARM::t2SUBri, Convert__Reg1_3__Reg1_4__T2SOImm1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 1074 /* subw */, ARM::t2SUBri12, Convert__Reg1_1__Reg1_2__Imm0_40951_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_Imm0_4095 }, 0},
  { 1079 /* svc */, ARM::tSVC, Convert__Imm0_2551_1__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_Imm0_255 }, 0},
  { 1079 /* svc */, ARM::SVC, Convert__Imm24bit1_1__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_Imm24bit }, 0},
  { 1083 /* swp */, ARM::SWP, Convert__Reg1_1__Reg1_2__MemNoOffset1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_MemNoOffset }, 0},
  { 1087 /* swpb */, ARM::SWPB, Convert__Reg1_1__Reg1_2__MemNoOffset1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_MemNoOffset }, 0},
  { 1092 /* sxtab */, ARM::t2SXTAB, Convert__Reg1_1__Reg1_2__Reg1_3__imm0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1092 /* sxtab */, ARM::SXTAB, Convert__Reg1_1__Reg1_2__Reg1_3__imm0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc }, 0},
  { 1092 /* sxtab */, ARM::t2SXTAB, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_HasT2ExtractPack|Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1092 /* sxtab */, ARM::SXTAB, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1098 /* sxtab16 */, ARM::t2SXTAB16, Convert__Reg1_1__Reg1_2__Reg1_3__imm0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1098 /* sxtab16 */, ARM::SXTAB16, Convert__Reg1_1__Reg1_2__Reg1_3__imm0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc }, 0},
  { 1098 /* sxtab16 */, ARM::t2SXTAB16, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1098 /* sxtab16 */, ARM::SXTAB16, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1106 /* sxtah */, ARM::t2SXTAH, Convert__Reg1_1__Reg1_2__Reg1_3__imm0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1106 /* sxtah */, ARM::SXTAH, Convert__Reg1_1__Reg1_2__Reg1_3__imm0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc }, 0},
  { 1106 /* sxtah */, ARM::t2SXTAH, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_HasT2ExtractPack|Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1106 /* sxtah */, ARM::SXTAH, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1112 /* sxtb */, ARM::tSXTB, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb|Feature_HasV6, { MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 1112 /* sxtb */, ARM::t2SXTB, Convert__Reg1_1__Reg1_2__imm0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 1112 /* sxtb */, ARM::SXTB, Convert__Reg1_1__Reg1_2__imm0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1112 /* sxtb */, ARM::t2SXTB, Convert__Reg1_2__Reg1_3__imm0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 1112 /* sxtb */, ARM::t2SXTB, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1112 /* sxtb */, ARM::SXTB, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1112 /* sxtb */, ARM::t2SXTB, Convert__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1117 /* sxtb16 */, ARM::t2SXTB16, Convert__Reg1_1__Reg1_2__imm0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 1117 /* sxtb16 */, ARM::SXTB16, Convert__Reg1_1__Reg1_2__imm0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1117 /* sxtb16 */, ARM::t2SXTB16, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsThumb2|Feature_HasT2ExtractPack, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1117 /* sxtb16 */, ARM::t2SXTB16, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1117 /* sxtb16 */, ARM::SXTB16, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1124 /* sxth */, ARM::tSXTH, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb|Feature_HasV6, { MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 1124 /* sxth */, ARM::t2SXTH, Convert__Reg1_1__Reg1_2__imm0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 1124 /* sxth */, ARM::SXTH, Convert__Reg1_1__Reg1_2__imm0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1124 /* sxth */, ARM::t2SXTH, Convert__Reg1_2__Reg1_3__imm0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 1124 /* sxth */, ARM::t2SXTH, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1124 /* sxth */, ARM::SXTH, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1124 /* sxth */, ARM::t2SXTH, Convert__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1129 /* tbb */, ARM::t2TBB, Convert__MemTBB2_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_MemTBB }, 0},
  { 1133 /* tbh */, ARM::t2TBH, Convert__MemTBH2_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_MemTBH }, 0},
  { 1137 /* teq */, ARM::t2TEQrr, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_rGPR }, 0},
  { 1137 /* teq */, ARM::t2TEQrs, Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 1137 /* teq */, ARM::TEQrsr, Convert__Reg1_1__RegShiftedReg3_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedReg }, 0},
  { 1137 /* teq */, ARM::t2TEQri, Convert__Reg1_1__T2SOImm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 1137 /* teq */, ARM::TEQrr, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 1137 /* teq */, ARM::TEQri, Convert__Reg1_1__ARMSOImm1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 1137 /* teq */, ARM::TEQrsi, Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 1137 /* teq */, ARM::t2TEQrr, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_rGPR }, 0},
  { 1137 /* teq */, ARM::t2TEQrs, Convert__Reg1_2__RegShiftedImm2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 1137 /* teq */, ARM::t2TEQri, Convert__Reg1_2__T2SOImm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 1141 /* trap */, ARM::TRAP, Convert, Feature_IsARM, {  }, 0},
  { 1141 /* trap */, ARM::tTRAP, Convert, Feature_IsThumb, {  }, 0},
  { 1146 /* tst */, ARM::tTST, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 1146 /* tst */, ARM::t2TSTrr, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_rGPR }, 0},
  { 1146 /* tst */, ARM::t2TSTrs, Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 1146 /* tst */, ARM::TSTrsr, Convert__Reg1_1__RegShiftedReg3_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedReg }, 0},
  { 1146 /* tst */, ARM::t2TSTri, Convert__Reg1_1__T2SOImm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 1146 /* tst */, ARM::TSTrr, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 1146 /* tst */, ARM::TSTri, Convert__Reg1_1__ARMSOImm1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 1146 /* tst */, ARM::TSTrsi, Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 1146 /* tst */, ARM::t2TSTrr, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_rGPR }, 0},
  { 1146 /* tst */, ARM::t2TSTrs, Convert__Reg1_2__RegShiftedImm2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 1146 /* tst */, ARM::t2TSTri, Convert__Reg1_2__T2SOImm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 1150 /* uadd16 */, ARM::t2UADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1150 /* uadd16 */, ARM::UADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1157 /* uadd8 */, ARM::t2UADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1157 /* uadd8 */, ARM::UADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1163 /* uasx */, ARM::t2UASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1163 /* uasx */, ARM::UASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1168 /* ubfx */, ARM::t2UBFX, Convert__Reg1_1__Reg1_2__Imm0_311_3__Imm1_321_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_Imm0_31, MCK_Imm1_32 }, 0},
  { 1168 /* ubfx */, ARM::UBFX, Convert__Reg1_1__Reg1_2__Imm0_311_3__Imm1_321_4__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_Imm0_31, MCK_Imm1_32 }, 0},
  { 1173 /* udiv */, ARM::t2UDIV, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasDivide|Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1178 /* uhadd16 */, ARM::t2UHADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1178 /* uhadd16 */, ARM::UHADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1186 /* uhadd8 */, ARM::t2UHADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1186 /* uhadd8 */, ARM::UHADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1193 /* uhasx */, ARM::t2UHASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1193 /* uhasx */, ARM::UHASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1199 /* uhsax */, ARM::t2UHSAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1199 /* uhsax */, ARM::UHSAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1205 /* uhsub16 */, ARM::t2UHSUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1205 /* uhsub16 */, ARM::UHSUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1213 /* uhsub8 */, ARM::t2UHSUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1213 /* uhsub8 */, ARM::UHSUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1220 /* umaal */, ARM::t2UMAAL, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1220 /* umaal */, ARM::UMAAL, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 1226 /* umlal */, ARM::t2UMLAL, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1226 /* umlal */, ARM::UMLAL, Convert__Reg1_2__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsARM|Feature_HasV6, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 1232 /* umull */, ARM::t2UMULL, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1232 /* umull */, ARM::UMULL, Convert__Reg1_2__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsARM|Feature_HasV6, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 1232 /* umull */, ARM::UMULL, Convert__Reg1_2__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 1238 /* uqadd16 */, ARM::t2UQADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1238 /* uqadd16 */, ARM::UQADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1246 /* uqadd8 */, ARM::t2UQADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1246 /* uqadd8 */, ARM::UQADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1253 /* uqasx */, ARM::t2UQASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1253 /* uqasx */, ARM::UQASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1259 /* uqsax */, ARM::t2UQSAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1259 /* uqsax */, ARM::UQSAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1265 /* uqsub16 */, ARM::t2UQSUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1265 /* uqsub16 */, ARM::UQSUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1273 /* uqsub8 */, ARM::t2UQSUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1273 /* uqsub8 */, ARM::UQSUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1280 /* usad8 */, ARM::t2USAD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1280 /* usad8 */, ARM::USAD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 1286 /* usada8 */, ARM::t2USADA8, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1286 /* usada8 */, ARM::USADA8, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 1293 /* usat */, ARM::t2USAT, Convert__Reg1_1__Imm0_311_2__Reg1_3__imm0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Imm0_31, MCK_rGPR }, 0},
  { 1293 /* usat */, ARM::USAT, Convert__Reg1_1__Imm0_311_2__Reg1_3__imm0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_Imm0_31, MCK_GPRnopc }, 0},
  { 1293 /* usat */, ARM::t2USAT, Convert__Reg1_1__Imm0_311_2__Reg1_3__ShifterImm1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Imm0_31, MCK_rGPR, MCK_ShifterImm }, 0},
  { 1293 /* usat */, ARM::USAT, Convert__Reg1_1__Imm0_311_2__Reg1_3__ShifterImm1_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_Imm0_31, MCK_GPRnopc, MCK_ShifterImm }, 0},
  { 1298 /* usat16 */, ARM::t2USAT16, Convert__Reg1_1__Imm0_151_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_Imm0_15, MCK_rGPR }, 0},
  { 1298 /* usat16 */, ARM::USAT16, Convert__Reg1_1__Imm0_151_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_Imm0_15, MCK_GPRnopc }, 0},
  { 1305 /* usax */, ARM::t2USAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1305 /* usax */, ARM::USAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1310 /* usub16 */, ARM::t2USUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1310 /* usub16 */, ARM::USUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1317 /* usub8 */, ARM::t2USUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1317 /* usub8 */, ARM::USUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1323 /* uxtab */, ARM::t2UXTAB, Convert__Reg1_1__Reg1_2__Reg1_3__imm0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1323 /* uxtab */, ARM::UXTAB, Convert__Reg1_1__Reg1_2__Reg1_3__imm0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc }, 0},
  { 1323 /* uxtab */, ARM::t2UXTAB, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_HasT2ExtractPack|Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1323 /* uxtab */, ARM::UXTAB, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1329 /* uxtab16 */, ARM::t2UXTAB16, Convert__Reg1_1__Reg1_2__Reg1_3__imm0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1329 /* uxtab16 */, ARM::UXTAB16, Convert__Reg1_1__Reg1_2__Reg1_3__imm0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc }, 0},
  { 1329 /* uxtab16 */, ARM::t2UXTAB16, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1329 /* uxtab16 */, ARM::UXTAB16, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1337 /* uxtah */, ARM::t2UXTAH, Convert__Reg1_1__Reg1_2__Reg1_3__imm0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1337 /* uxtah */, ARM::UXTAH, Convert__Reg1_1__Reg1_2__Reg1_3__imm0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc }, 0},
  { 1337 /* uxtah */, ARM::t2UXTAH, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_HasT2ExtractPack|Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1337 /* uxtah */, ARM::UXTAH, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1343 /* uxtb */, ARM::tUXTB, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb|Feature_HasV6, { MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 1343 /* uxtb */, ARM::t2UXTB, Convert__Reg1_1__Reg1_2__imm0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 1343 /* uxtb */, ARM::UXTB, Convert__Reg1_1__Reg1_2__imm0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1343 /* uxtb */, ARM::t2UXTB, Convert__Reg1_2__Reg1_3__imm0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 1343 /* uxtb */, ARM::t2UXTB, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1343 /* uxtb */, ARM::UXTB, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1343 /* uxtb */, ARM::t2UXTB, Convert__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1348 /* uxtb16 */, ARM::t2UXTB16, Convert__Reg1_1__Reg1_2__imm0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 1348 /* uxtb16 */, ARM::UXTB16, Convert__Reg1_1__Reg1_2__imm0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1348 /* uxtb16 */, ARM::t2UXTB16, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_HasT2ExtractPack|Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1348 /* uxtb16 */, ARM::t2UXTB16, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1348 /* uxtb16 */, ARM::UXTB16, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1355 /* uxth */, ARM::tUXTH, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb|Feature_HasV6, { MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 1355 /* uxth */, ARM::t2UXTH, Convert__Reg1_1__Reg1_2__imm0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 1355 /* uxth */, ARM::UXTH, Convert__Reg1_1__Reg1_2__imm0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1355 /* uxth */, ARM::t2UXTH, Convert__Reg1_2__Reg1_3__imm0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 1355 /* uxth */, ARM::t2UXTH, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1355 /* uxth */, ARM::UXTH, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1355 /* uxth */, ARM::t2UXTH, Convert__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1360 /* vaba */, ARM::VABAsv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1360 /* vaba */, ARM::VABAsv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1360 /* vaba */, ARM::VABAsv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1360 /* vaba */, ARM::VABAsv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1360 /* vaba */, ARM::VABAsv8i8, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1360 /* vaba */, ARM::VABAsv16i8, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1360 /* vaba */, ARM::VABAuv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1360 /* vaba */, ARM::VABAuv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1360 /* vaba */, ARM::VABAuv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1360 /* vaba */, ARM::VABAuv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1360 /* vaba */, ARM::VABAuv8i8, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1360 /* vaba */, ARM::VABAuv16i8, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1365 /* vabal */, ARM::VABALsv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1365 /* vabal */, ARM::VABALsv2i64, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1365 /* vabal */, ARM::VABALsv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1365 /* vabal */, ARM::VABALuv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1365 /* vabal */, ARM::VABALuv2i64, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1365 /* vabal */, ARM::VABALuv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1371 /* vabd */, ARM::VABDfd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1371 /* vabd */, ARM::VABDfq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1371 /* vabd */, ARM::VABDsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1371 /* vabd */, ARM::VABDsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1371 /* vabd */, ARM::VABDsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1371 /* vabd */, ARM::VABDsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1371 /* vabd */, ARM::VABDsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1371 /* vabd */, ARM::VABDsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1371 /* vabd */, ARM::VABDuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1371 /* vabd */, ARM::VABDuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1371 /* vabd */, ARM::VABDuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1371 /* vabd */, ARM::VABDuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1371 /* vabd */, ARM::VABDuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1371 /* vabd */, ARM::VABDuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1376 /* vabdl */, ARM::VABDLsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1376 /* vabdl */, ARM::VABDLsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1376 /* vabdl */, ARM::VABDLsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1376 /* vabdl */, ARM::VABDLuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1376 /* vabdl */, ARM::VABDLuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1376 /* vabdl */, ARM::VABDLuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1382 /* vabs */, ARM::VABSS, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1382 /* vabs */, ARM::VABSfd, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1382 /* vabs */, ARM::VABSfq, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1382 /* vabs */, ARM::VABSD, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR }, 0},
  { 1382 /* vabs */, ARM::VABSv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1382 /* vabs */, ARM::VABSv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1382 /* vabs */, ARM::VABSv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1382 /* vabs */, ARM::VABSv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1382 /* vabs */, ARM::VABSv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1382 /* vabs */, ARM::VABSv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1387 /* vacge */, ARM::VACGEd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1387 /* vacge */, ARM::VACGEq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1393 /* vacgt */, ARM::VACGTd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1393 /* vacgt */, ARM::VACGTq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1399 /* vadd */, ARM::VADDS, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1399 /* vadd */, ARM::VADDfd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1399 /* vadd */, ARM::VADDfq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1399 /* vadd */, ARM::VADDD, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR }, 0},
  { 1399 /* vadd */, ARM::VADDv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR }, 0},
  { 1399 /* vadd */, ARM::VADDv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR }, 0},
  { 1399 /* vadd */, ARM::VADDv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR }, 0},
  { 1399 /* vadd */, ARM::VADDv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR }, 0},
  { 1399 /* vadd */, ARM::VADDv1i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_DPR }, 0},
  { 1399 /* vadd */, ARM::VADDv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_QPR, MCK_QPR }, 0},
  { 1399 /* vadd */, ARM::VADDv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR }, 0},
  { 1399 /* vadd */, ARM::VADDv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR }, 0},
  { 1399 /* vadd */, ARM::VADDS, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1399 /* vadd */, ARM::VADDfd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1399 /* vadd */, ARM::VADDfq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1399 /* vadd */, ARM::VADDD, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1399 /* vadd */, ARM::VADDv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1399 /* vadd */, ARM::VADDv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1399 /* vadd */, ARM::VADDv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1399 /* vadd */, ARM::VADDv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1399 /* vadd */, ARM::VADDv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1399 /* vadd */, ARM::VADDv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1399 /* vadd */, ARM::VADDv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1399 /* vadd */, ARM::VADDv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1404 /* vaddhn */, ARM::VADDHNv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 1404 /* vaddhn */, ARM::VADDHNv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 1404 /* vaddhn */, ARM::VADDHNv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 1411 /* vaddl */, ARM::VADDLsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1411 /* vaddl */, ARM::VADDLsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1411 /* vaddl */, ARM::VADDLsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1411 /* vaddl */, ARM::VADDLuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1411 /* vaddl */, ARM::VADDLuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1411 /* vaddl */, ARM::VADDLuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1417 /* vaddw */, ARM::VADDWsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR }, 0},
  { 1417 /* vaddw */, ARM::VADDWsv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR }, 0},
  { 1417 /* vaddw */, ARM::VADDWsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_DPR }, 0},
  { 1417 /* vaddw */, ARM::VADDWuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR }, 0},
  { 1417 /* vaddw */, ARM::VADDWuv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR }, 0},
  { 1417 /* vaddw */, ARM::VADDWuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_DPR }, 0},
  { 1417 /* vaddw */, ARM::VADDWsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 1417 /* vaddw */, ARM::VADDWsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 1417 /* vaddw */, ARM::VADDWsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 1417 /* vaddw */, ARM::VADDWuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 1417 /* vaddw */, ARM::VADDWuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 1417 /* vaddw */, ARM::VADDWuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 1423 /* vand */, ARM::VANDd, Convert__Reg1_1__Reg1_1__Reg1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR }, 0},
  { 1423 /* vand */, ARM::VANDq, Convert__Reg1_1__Reg1_1__Reg1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR }, 0},
  { 1423 /* vand */, ARM::VANDd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR }, 0},
  { 1423 /* vand */, ARM::VANDq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR }, 0},
  { 1423 /* vand */, ARM::VANDd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR }, 0},
  { 1423 /* vand */, ARM::VANDq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR }, 0},
  { 1423 /* vand */, ARM::VANDd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR }, 0},
  { 1423 /* vand */, ARM::VANDq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR }, 0},
  { 1423 /* vand */, ARM::VANDd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 1423 /* vand */, ARM::VANDq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 1423 /* vand */, ARM::VANDd, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1423 /* vand */, ARM::VANDq, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1423 /* vand */, ARM::VANDd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1423 /* vand */, ARM::VANDq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1423 /* vand */, ARM::VANDd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1423 /* vand */, ARM::VANDq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1423 /* vand */, ARM::VANDd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1423 /* vand */, ARM::VANDq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1423 /* vand */, ARM::VANDd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1423 /* vand */, ARM::VANDq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1428 /* vbic */, ARM::VBICd, Convert__Reg1_1__Reg1_1__Reg1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR }, 0},
  { 1428 /* vbic */, ARM::VBICq, Convert__Reg1_1__Reg1_1__Reg1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR }, 0},
  { 1428 /* vbic */, ARM::VBICiv4i16, Convert__Reg1_2__NEONi16splat1_3__Tie0__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_NEONi16splat }, 0},
  { 1428 /* vbic */, ARM::VBICiv8i16, Convert__Reg1_2__NEONi16splat1_3__Tie0__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_NEONi16splat }, 0},
  { 1428 /* vbic */, ARM::VBICiv2i32, Convert__Reg1_2__NEONi32splat1_3__Tie0__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_NEONi32splat }, 0},
  { 1428 /* vbic */, ARM::VBICiv4i32, Convert__Reg1_2__NEONi32splat1_3__Tie0__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_NEONi32splat }, 0},
  { 1428 /* vbic */, ARM::VBICd, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1428 /* vbic */, ARM::VBICq, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1428 /* vbic */, ARM::VBICd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1428 /* vbic */, ARM::VBICq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1428 /* vbic */, ARM::VBICd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1428 /* vbic */, ARM::VBICq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1428 /* vbic */, ARM::VBICd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1428 /* vbic */, ARM::VBICq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1428 /* vbic */, ARM::VBICd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1428 /* vbic */, ARM::VBICq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1433 /* vbif */, ARM::VBIFd, Convert__Reg1_1__Tie0__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1433 /* vbif */, ARM::VBIFq, Convert__Reg1_1__Tie0__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1433 /* vbif */, ARM::VBIFd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1433 /* vbif */, ARM::VBIFq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1433 /* vbif */, ARM::VBIFd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1433 /* vbif */, ARM::VBIFq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1433 /* vbif */, ARM::VBIFd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1433 /* vbif */, ARM::VBIFq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1433 /* vbif */, ARM::VBIFd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1433 /* vbif */, ARM::VBIFq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1438 /* vbit */, ARM::VBITd, Convert__Reg1_1__Tie0__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1438 /* vbit */, ARM::VBITq, Convert__Reg1_1__Tie0__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1438 /* vbit */, ARM::VBITd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1438 /* vbit */, ARM::VBITq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1438 /* vbit */, ARM::VBITd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1438 /* vbit */, ARM::VBITq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1438 /* vbit */, ARM::VBITd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1438 /* vbit */, ARM::VBITq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1438 /* vbit */, ARM::VBITd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1438 /* vbit */, ARM::VBITq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1443 /* vbsl */, ARM::VBSLd, Convert__Reg1_1__Tie0__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1443 /* vbsl */, ARM::VBSLq, Convert__Reg1_1__Tie0__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1443 /* vbsl */, ARM::VBSLd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1443 /* vbsl */, ARM::VBSLq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1443 /* vbsl */, ARM::VBSLd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1443 /* vbsl */, ARM::VBSLq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1443 /* vbsl */, ARM::VBSLd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1443 /* vbsl */, ARM::VBSLq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1443 /* vbsl */, ARM::VBSLd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1443 /* vbsl */, ARM::VBSLq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1448 /* vceq */, ARM::VCEQzv2f32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1448 /* vceq */, ARM::VCEQfd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1448 /* vceq */, ARM::VCEQzv4f32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1448 /* vceq */, ARM::VCEQfq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1448 /* vceq */, ARM::VCEQzv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1448 /* vceq */, ARM::VCEQv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1448 /* vceq */, ARM::VCEQzv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1448 /* vceq */, ARM::VCEQv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1448 /* vceq */, ARM::VCEQzv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1448 /* vceq */, ARM::VCEQv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1448 /* vceq */, ARM::VCEQzv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1448 /* vceq */, ARM::VCEQv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1448 /* vceq */, ARM::VCEQzv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1448 /* vceq */, ARM::VCEQv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1448 /* vceq */, ARM::VCEQzv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1448 /* vceq */, ARM::VCEQv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1453 /* vcge */, ARM::VCGEzv2f32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1453 /* vcge */, ARM::VCGEfd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1453 /* vcge */, ARM::VCGEzv4f32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1453 /* vcge */, ARM::VCGEfq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1453 /* vcge */, ARM::VCGEzv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1453 /* vcge */, ARM::VCGEsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1453 /* vcge */, ARM::VCGEzv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1453 /* vcge */, ARM::VCGEsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1453 /* vcge */, ARM::VCGEzv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1453 /* vcge */, ARM::VCGEsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1453 /* vcge */, ARM::VCGEzv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1453 /* vcge */, ARM::VCGEsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1453 /* vcge */, ARM::VCGEzv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1453 /* vcge */, ARM::VCGEsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1453 /* vcge */, ARM::VCGEzv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1453 /* vcge */, ARM::VCGEsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1453 /* vcge */, ARM::VCGEuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1453 /* vcge */, ARM::VCGEuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1453 /* vcge */, ARM::VCGEuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1453 /* vcge */, ARM::VCGEuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1453 /* vcge */, ARM::VCGEuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1453 /* vcge */, ARM::VCGEuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1458 /* vcgt */, ARM::VCGTzv2f32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1458 /* vcgt */, ARM::VCGTfd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1458 /* vcgt */, ARM::VCGTzv4f32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1458 /* vcgt */, ARM::VCGTfq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1458 /* vcgt */, ARM::VCGTzv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1458 /* vcgt */, ARM::VCGTsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1458 /* vcgt */, ARM::VCGTzv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1458 /* vcgt */, ARM::VCGTsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1458 /* vcgt */, ARM::VCGTzv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1458 /* vcgt */, ARM::VCGTsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1458 /* vcgt */, ARM::VCGTzv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1458 /* vcgt */, ARM::VCGTsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1458 /* vcgt */, ARM::VCGTzv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1458 /* vcgt */, ARM::VCGTsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1458 /* vcgt */, ARM::VCGTzv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1458 /* vcgt */, ARM::VCGTsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1458 /* vcgt */, ARM::VCGTuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1458 /* vcgt */, ARM::VCGTuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1458 /* vcgt */, ARM::VCGTuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1458 /* vcgt */, ARM::VCGTuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1458 /* vcgt */, ARM::VCGTuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1458 /* vcgt */, ARM::VCGTuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1463 /* vcle */, ARM::VCLEzv2f32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1463 /* vcle */, ARM::VCGEfd, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1463 /* vcle */, ARM::VCLEzv4f32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1463 /* vcle */, ARM::VCGEfq, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1463 /* vcle */, ARM::VCLEzv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1463 /* vcle */, ARM::VCGEsv4i16, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1463 /* vcle */, ARM::VCLEzv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1463 /* vcle */, ARM::VCGEsv8i16, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1463 /* vcle */, ARM::VCLEzv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1463 /* vcle */, ARM::VCGEsv2i32, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1463 /* vcle */, ARM::VCLEzv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1463 /* vcle */, ARM::VCGEsv4i32, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1463 /* vcle */, ARM::VCLEzv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1463 /* vcle */, ARM::VCGEsv8i8, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1463 /* vcle */, ARM::VCLEzv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1463 /* vcle */, ARM::VCGEsv16i8, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1463 /* vcle */, ARM::VCGEuv4i16, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1463 /* vcle */, ARM::VCGEuv8i16, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1463 /* vcle */, ARM::VCGEuv2i32, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1463 /* vcle */, ARM::VCGEuv4i32, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1463 /* vcle */, ARM::VCGEuv8i8, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1463 /* vcle */, ARM::VCGEuv16i8, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1468 /* vcls */, ARM::VCLSv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1468 /* vcls */, ARM::VCLSv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1468 /* vcls */, ARM::VCLSv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1468 /* vcls */, ARM::VCLSv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1468 /* vcls */, ARM::VCLSv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1468 /* vcls */, ARM::VCLSv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1473 /* vclt */, ARM::VCLTzv2f32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1473 /* vclt */, ARM::VCGTfd, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1473 /* vclt */, ARM::VCLTzv4f32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1473 /* vclt */, ARM::VCGTfq, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1473 /* vclt */, ARM::VCLTzv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1473 /* vclt */, ARM::VCGTsv4i16, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1473 /* vclt */, ARM::VCLTzv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1473 /* vclt */, ARM::VCGTsv8i16, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1473 /* vclt */, ARM::VCLTzv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1473 /* vclt */, ARM::VCGTsv2i32, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1473 /* vclt */, ARM::VCLTzv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1473 /* vclt */, ARM::VCGTsv4i32, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1473 /* vclt */, ARM::VCLTzv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1473 /* vclt */, ARM::VCGTsv8i8, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1473 /* vclt */, ARM::VCLTzv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1473 /* vclt */, ARM::VCGTsv16i8, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1473 /* vclt */, ARM::VCGTuv4i16, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1473 /* vclt */, ARM::VCGTuv8i16, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1473 /* vclt */, ARM::VCGTuv2i32, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1473 /* vclt */, ARM::VCGTuv4i32, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1473 /* vclt */, ARM::VCGTuv8i8, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1473 /* vclt */, ARM::VCGTuv16i8, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1478 /* vclz */, ARM::VCLZv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR }, 0},
  { 1478 /* vclz */, ARM::VCLZv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR }, 0},
  { 1478 /* vclz */, ARM::VCLZv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR }, 0},
  { 1478 /* vclz */, ARM::VCLZv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR }, 0},
  { 1478 /* vclz */, ARM::VCLZv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR }, 0},
  { 1478 /* vclz */, ARM::VCLZv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR }, 0},
  { 1483 /* vcmp */, ARM::VCMPZS, Convert__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK__35_0 }, 0},
  { 1483 /* vcmp */, ARM::VCMPS, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1483 /* vcmp */, ARM::VCMPZD, Convert__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK__35_0 }, 0},
  { 1483 /* vcmp */, ARM::VCMPD, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR }, 0},
  { 1488 /* vcmpe */, ARM::VCMPEZS, Convert__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK__35_0 }, 0},
  { 1488 /* vcmpe */, ARM::VCMPES, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1488 /* vcmpe */, ARM::VCMPEZD, Convert__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK__35_0 }, 0},
  { 1488 /* vcmpe */, ARM::VCMPED, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR }, 0},
  { 1494 /* vcnt */, ARM::VCNTd, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 1494 /* vcnt */, ARM::VCNTq, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 1499 /* vcvt */, ARM::VCVTf2h, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON|Feature_HasFP16, { MCK_CondCode, MCK__DOT_f16, MCK__DOT_f32, MCK_DPR, MCK_QPR }, 0},
  { 1499 /* vcvt */, ARM::VCVTh2f, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON|Feature_HasFP16, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_f16, MCK_QPR, MCK_DPR }, 0},
  { 1499 /* vcvt */, ARM::VCVTSD, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_f64, MCK_SPR, MCK_DPR }, 0},
  { 1499 /* vcvt */, ARM::VSITOS, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_s32, MCK_SPR, MCK_SPR }, 0},
  { 1499 /* vcvt */, ARM::VCVTs2fd, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1499 /* vcvt */, ARM::VCVTs2fq, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1499 /* vcvt */, ARM::VUITOS, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_u32, MCK_SPR, MCK_SPR }, 0},
  { 1499 /* vcvt */, ARM::VCVTu2fd, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1499 /* vcvt */, ARM::VCVTu2fq, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1499 /* vcvt */, ARM::VCVTDS, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK__DOT_f32, MCK_DPR, MCK_SPR }, 0},
  { 1499 /* vcvt */, ARM::VSITOD, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK__DOT_s32, MCK_DPR, MCK_SPR }, 0},
  { 1499 /* vcvt */, ARM::VUITOD, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK__DOT_u32, MCK_DPR, MCK_SPR }, 0},
  { 1499 /* vcvt */, ARM::VTOSIZS, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_s32, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1499 /* vcvt */, ARM::VCVTf2sd, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1499 /* vcvt */, ARM::VCVTf2sq, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1499 /* vcvt */, ARM::VTOSIZD, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_s32, MCK__DOT_f64, MCK_SPR, MCK_DPR }, 0},
  { 1499 /* vcvt */, ARM::VTOUIZS, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_u32, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1499 /* vcvt */, ARM::VCVTf2ud, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1499 /* vcvt */, ARM::VCVTf2uq, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1499 /* vcvt */, ARM::VTOUIZD, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_u32, MCK__DOT_f64, MCK_SPR, MCK_DPR }, 0},
  { 1499 /* vcvt */, ARM::VSHTOS, Convert__Reg1_3__Tie0__FBits161_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_s16, MCK_SPR, MCK_SPR, MCK_FBits16 }, 0},
  { 1499 /* vcvt */, ARM::VSLTOS, Convert__Reg1_3__Tie0__FBits321_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_s32, MCK_SPR, MCK_SPR, MCK_FBits32 }, 0},
  { 1499 /* vcvt */, ARM::VCVTxs2fd, Convert__Reg1_3__Reg1_4__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1499 /* vcvt */, ARM::VCVTxs2fq, Convert__Reg1_3__Reg1_4__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1499 /* vcvt */, ARM::VUHTOS, Convert__Reg1_3__Tie0__FBits161_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_u16, MCK_SPR, MCK_SPR, MCK_FBits16 }, 0},
  { 1499 /* vcvt */, ARM::VULTOS, Convert__Reg1_3__Tie0__FBits321_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_u32, MCK_SPR, MCK_SPR, MCK_FBits32 }, 0},
  { 1499 /* vcvt */, ARM::VCVTxu2fd, Convert__Reg1_3__Reg1_4__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1499 /* vcvt */, ARM::VCVTxu2fq, Convert__Reg1_3__Reg1_4__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1499 /* vcvt */, ARM::VSHTOD, Convert__Reg1_3__Tie0__FBits161_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_FBits16 }, 0},
  { 1499 /* vcvt */, ARM::VSLTOD, Convert__Reg1_3__Tie0__FBits321_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_FBits32 }, 0},
  { 1499 /* vcvt */, ARM::VUHTOD, Convert__Reg1_3__Tie0__FBits161_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_FBits16 }, 0},
  { 1499 /* vcvt */, ARM::VULTOD, Convert__Reg1_3__Tie0__FBits321_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_FBits32 }, 0},
  { 1499 /* vcvt */, ARM::VTOSHS, Convert__Reg1_3__Tie0__FBits161_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_s16, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_FBits16 }, 0},
  { 1499 /* vcvt */, ARM::VTOSHD, Convert__Reg1_3__Tie0__FBits161_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_s16, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_FBits16 }, 0},
  { 1499 /* vcvt */, ARM::VTOSLS, Convert__Reg1_3__Tie0__FBits321_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_s32, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_FBits32 }, 0},
  { 1499 /* vcvt */, ARM::VCVTf2xsd, Convert__Reg1_3__Reg1_4__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1499 /* vcvt */, ARM::VCVTf2xsq, Convert__Reg1_3__Reg1_4__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1499 /* vcvt */, ARM::VTOSLD, Convert__Reg1_3__Tie0__FBits321_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_s32, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_FBits32 }, 0},
  { 1499 /* vcvt */, ARM::VTOUHS, Convert__Reg1_3__Tie0__FBits161_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_u16, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_FBits16 }, 0},
  { 1499 /* vcvt */, ARM::VTOUHD, Convert__Reg1_3__Tie0__FBits161_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_u16, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_FBits16 }, 0},
  { 1499 /* vcvt */, ARM::VTOULS, Convert__Reg1_3__Tie0__FBits321_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_u32, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_FBits32 }, 0},
  { 1499 /* vcvt */, ARM::VCVTf2xud, Convert__Reg1_3__Reg1_4__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1499 /* vcvt */, ARM::VCVTf2xuq, Convert__Reg1_3__Reg1_4__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1499 /* vcvt */, ARM::VTOULD, Convert__Reg1_3__Tie0__FBits321_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_u32, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_FBits32 }, 0},
  { 1504 /* vcvtb */, ARM::VCVTBHS, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f16, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1504 /* vcvtb */, ARM::VCVTBSH, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_f16, MCK_SPR, MCK_SPR }, 0},
  { 1510 /* vcvtr */, ARM::VTOSIRS, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_s32, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1510 /* vcvtr */, ARM::VTOSIRD, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_s32, MCK__DOT_f64, MCK_SPR, MCK_DPR }, 0},
  { 1510 /* vcvtr */, ARM::VTOUIRS, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_u32, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1510 /* vcvtr */, ARM::VTOUIRD, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_u32, MCK__DOT_f64, MCK_SPR, MCK_DPR }, 0},
  { 1516 /* vcvtt */, ARM::VCVTTHS, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f16, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1516 /* vcvtt */, ARM::VCVTTSH, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_f16, MCK_SPR, MCK_SPR }, 0},
  { 1522 /* vdiv */, ARM::VDIVS, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1522 /* vdiv */, ARM::VDIVD, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1527 /* vdup */, ARM::VDUP16d, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_GPR }, 0},
  { 1527 /* vdup */, ARM::VDUP16q, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_GPR }, 0},
  { 1527 /* vdup */, ARM::VDUP32d, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_GPR }, 0},
  { 1527 /* vdup */, ARM::VDUP32q, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_GPR }, 0},
  { 1527 /* vdup */, ARM::VDUP8d, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_GPR }, 0},
  { 1527 /* vdup */, ARM::VDUP8q, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_GPR }, 0},
  { 1527 /* vdup */, ARM::VDUPLN16d, Convert__Reg1_2__Reg1_3__VectorIndex161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_VectorIndex16 }, 0},
  { 1527 /* vdup */, ARM::VDUPLN16q, Convert__Reg1_2__Reg1_3__VectorIndex161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_DPR, MCK_VectorIndex16 }, 0},
  { 1527 /* vdup */, ARM::VDUPLN32d, Convert__Reg1_2__Reg1_3__VectorIndex321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_VectorIndex32 }, 0},
  { 1527 /* vdup */, ARM::VDUPLN32q, Convert__Reg1_2__Reg1_3__VectorIndex321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_DPR, MCK_VectorIndex32 }, 0},
  { 1527 /* vdup */, ARM::VDUPLN8d, Convert__Reg1_2__Reg1_3__VectorIndex81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_VectorIndex8 }, 0},
  { 1527 /* vdup */, ARM::VDUPLN8q, Convert__Reg1_2__Reg1_3__VectorIndex81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_DPR, MCK_VectorIndex8 }, 0},
  { 1532 /* veor */, ARM::VEORd, Convert__Reg1_1__Reg1_1__Reg1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR }, 0},
  { 1532 /* veor */, ARM::VEORq, Convert__Reg1_1__Reg1_1__Reg1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR }, 0},
  { 1532 /* veor */, ARM::VEORd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR }, 0},
  { 1532 /* veor */, ARM::VEORq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR }, 0},
  { 1532 /* veor */, ARM::VEORd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR }, 0},
  { 1532 /* veor */, ARM::VEORq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR }, 0},
  { 1532 /* veor */, ARM::VEORd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR }, 0},
  { 1532 /* veor */, ARM::VEORq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR }, 0},
  { 1532 /* veor */, ARM::VEORd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 1532 /* veor */, ARM::VEORq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 1532 /* veor */, ARM::VEORd, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1532 /* veor */, ARM::VEORq, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1532 /* veor */, ARM::VEORd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1532 /* veor */, ARM::VEORq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1532 /* veor */, ARM::VEORd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1532 /* veor */, ARM::VEORq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1532 /* veor */, ARM::VEORd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1532 /* veor */, ARM::VEORq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1532 /* veor */, ARM::VEORd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1532 /* veor */, ARM::VEORq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1537 /* vext */, ARM::VEXTd16, Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_31_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_Imm0_3 }, 0},
  { 1537 /* vext */, ARM::VEXTq16, Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_71_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_Imm0_7 }, 0},
  { 1537 /* vext */, ARM::VEXTd32, Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_11_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_Imm0_1 }, 0},
  { 1537 /* vext */, ARM::VEXTq32, Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_31_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_Imm0_3 }, 0},
  { 1537 /* vext */, ARM::VEXTq64, Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_11_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR, MCK_Imm0_1 }, 0},
  { 1537 /* vext */, ARM::VEXTd8, Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_71_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_Imm0_7 }, 0},
  { 1537 /* vext */, ARM::VEXTq8, Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_151_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_Imm0_15 }, 0},
  { 1537 /* vext */, ARM::VEXTd16, Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_31_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_DPR, MCK_Imm0_3 }, 0},
  { 1537 /* vext */, ARM::VEXTq16, Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_151_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_QPR, MCK_Imm0_15 }, 0},
  { 1537 /* vext */, ARM::VEXTd32, Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_11_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_DPR, MCK_Imm0_1 }, 0},
  { 1537 /* vext */, ARM::VEXTq32, Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_151_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_QPR, MCK_Imm0_15 }, 0},
  { 1537 /* vext */, ARM::VEXTq64, Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_151_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR, MCK_QPR, MCK_Imm0_15 }, 0},
  { 1537 /* vext */, ARM::VEXTd8, Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_71_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_DPR, MCK_Imm0_7 }, 0},
  { 1537 /* vext */, ARM::VEXTq8, Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_151_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_QPR, MCK_Imm0_15 }, 0},
  { 1542 /* vfma */, ARM::VFMAS, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1542 /* vfma */, ARM::VFMAfd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1542 /* vfma */, ARM::VFMAfq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1542 /* vfma */, ARM::VFMAD, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1547 /* vfms */, ARM::VFMSS, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1547 /* vfms */, ARM::VFMSfd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1547 /* vfms */, ARM::VFMSfq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1547 /* vfms */, ARM::VFMSD, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1552 /* vfnma */, ARM::VFNMAS, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1552 /* vfnma */, ARM::VFNMAD, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1558 /* vfnms */, ARM::VFNMSS, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1558 /* vfnms */, ARM::VFNMSD, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDsv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDsv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDsv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDsv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDuv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDuv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDuv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDuv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1564 /* vhadd */, ARM::VHADDuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBsv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBsv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBsv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBsv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBuv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBuv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBuv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBuv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1570 /* vhsub */, ARM::VHSUBuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1DUPq16, Convert__VecListDPairAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairAllLanes, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1q16, Convert__VecListDPair1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1d16Q, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1DUPd16, Convert__VecListOneDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneDAllLanes, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1d16, Convert__VecListOneD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneD, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1LNdAsm_16, Convert__VecListOneDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneDHWordIndexed, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1d16T, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1DUPq32, Convert__VecListDPairAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairAllLanes, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1q32, Convert__VecListDPair1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1d32Q, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1DUPd32, Convert__VecListOneDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneDAllLanes, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1d32, Convert__VecListOneD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneD, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1LNdAsm_32, Convert__VecListOneDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneDWordIndexed, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1d32T, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1q64, Convert__VecListDPair1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1d64Q, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1d64, Convert__VecListOneD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListOneD, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1d64T, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1DUPq8, Convert__VecListDPairAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairAllLanes, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1q8, Convert__VecListDPair1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1d8Q, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1DUPd8, Convert__VecListOneDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneDAllLanes, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1d8, Convert__VecListOneD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneD, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1LNdAsm_8, Convert__VecListOneDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneDByteIndexed, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1d8T, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1DUPq16wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1DUPq16wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1q16wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1q16wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1d16Qwb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1d16Qwb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1DUPd16wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneDAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1DUPd16wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneDAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1d16wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1d16wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1LNdWB_fixed_Asm_16, Convert__VecListOneDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneDHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1LNdWB_register_Asm_16, Convert__VecListOneDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneDHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1d16Twb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1d16Twb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1DUPq32wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1DUPq32wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1q32wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1q32wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1d32Qwb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1d32Qwb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1DUPd32wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneDAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1DUPd32wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneDAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1d32wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1d32wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1LNdWB_fixed_Asm_32, Convert__VecListOneDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneDWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1LNdWB_register_Asm_32, Convert__VecListOneDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneDWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1d32Twb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1d32Twb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1q64wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1q64wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1d64Qwb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1d64Qwb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1d64wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListOneD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1d64wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListOneD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1d64Twb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1d64Twb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1DUPq8wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1DUPq8wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1q8wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1q8wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1d8Qwb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1d8Qwb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1DUPd8wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneDAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1DUPd8wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneDAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1d8wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1d8wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1LNdWB_fixed_Asm_8, Convert__VecListOneDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneDByteIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1LNdWB_register_Asm_8, Convert__VecListOneDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneDByteIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1d8Twb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1576 /* vld1 */, ARM::VLD1d8Twb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1576 /* vld1 */, ARM::VLD1LNd16, Convert__Reg1_3__AlignedMemory2_8__Tie0__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1LNd8, Convert__Reg1_3__AlignedMemory2_8__Tie0__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1576 /* vld1 */, ARM::VLD1LNd16_UPD, Convert__Reg1_3__AlignedMemory1_8__Tie1__Imm1_9__Tie0__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1576 /* vld1 */, ARM::VLD1LNd32, Convert__Reg1_3__Reg1_8__Imm1_9__Tie0__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_GPR, MCK_Imm }, 0},
  { 1576 /* vld1 */, ARM::VLD1LNd32_UPD, Convert__Reg1_3__AlignedMemory1_8__Tie1__Imm1_9__Tie0__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1576 /* vld1 */, ARM::VLD1LNd8_UPD, Convert__Reg1_3__AlignedMemory1_8__Tie1__Imm1_9__Tie0__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1581 /* vld2 */, ARM::VLD2DUPd16, Convert__VecListDPairAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairAllLanes, MCK_AlignedMemory }, 0},
  { 1581 /* vld2 */, ARM::VLD2d16, Convert__VecListDPair1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 1581 /* vld2 */, ARM::VLD2DUPd16x2, Convert__VecListDPairSpacedAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairSpacedAllLanes, MCK_AlignedMemory }, 0},
  { 1581 /* vld2 */, ARM::VLD2b16, Convert__VecListDPairSpaced1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairSpaced, MCK_AlignedMemory }, 0},
  { 1581 /* vld2 */, ARM::VLD2q16, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 1581 /* vld2 */, ARM::VLD2LNdAsm_16, Convert__VecListTwoDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoDHWordIndexed, MCK_AlignedMemory }, 0},
  { 1581 /* vld2 */, ARM::VLD2LNqAsm_16, Convert__VecListTwoQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoQHWordIndexed, MCK_AlignedMemory }, 0},
  { 1581 /* vld2 */, ARM::VLD2DUPd32, Convert__VecListDPairAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairAllLanes, MCK_AlignedMemory }, 0},
  { 1581 /* vld2 */, ARM::VLD2d32, Convert__VecListDPair1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 1581 /* vld2 */, ARM::VLD2DUPd32x2, Convert__VecListDPairSpacedAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairSpacedAllLanes, MCK_AlignedMemory }, 0},
  { 1581 /* vld2 */, ARM::VLD2b32, Convert__VecListDPairSpaced1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairSpaced, MCK_AlignedMemory }, 0},
  { 1581 /* vld2 */, ARM::VLD2q32, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 1581 /* vld2 */, ARM::VLD2LNdAsm_32, Convert__VecListTwoDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoDWordIndexed, MCK_AlignedMemory }, 0},
  { 1581 /* vld2 */, ARM::VLD2LNqAsm_32, Convert__VecListTwoQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoQWordIndexed, MCK_AlignedMemory }, 0},
  { 1581 /* vld2 */, ARM::VLD2DUPd8, Convert__VecListDPairAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairAllLanes, MCK_AlignedMemory }, 0},
  { 1581 /* vld2 */, ARM::VLD2d8, Convert__VecListDPair1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 1581 /* vld2 */, ARM::VLD2DUPd8x2, Convert__VecListDPairSpacedAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairSpacedAllLanes, MCK_AlignedMemory }, 0},
  { 1581 /* vld2 */, ARM::VLD2b8, Convert__VecListDPairSpaced1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairSpaced, MCK_AlignedMemory }, 0},
  { 1581 /* vld2 */, ARM::VLD2q8, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 1581 /* vld2 */, ARM::VLD2LNdAsm_8, Convert__VecListTwoDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListTwoDByteIndexed, MCK_AlignedMemory }, 0},
  { 1581 /* vld2 */, ARM::VLD2DUPd16wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld2 */, ARM::VLD2DUPd16wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld2 */, ARM::VLD2d16wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld2 */, ARM::VLD2d16wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld2 */, ARM::VLD2DUPd16x2wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairSpacedAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld2 */, ARM::VLD2DUPd16x2wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairSpacedAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld2 */, ARM::VLD2b16wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld2 */, ARM::VLD2b16wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld2 */, ARM::VLD2q16wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld2 */, ARM::VLD2q16wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld2 */, ARM::VLD2LNdWB_fixed_Asm_16, Convert__VecListTwoDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoDHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld2 */, ARM::VLD2LNdWB_register_Asm_16, Convert__VecListTwoDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoDHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld2 */, ARM::VLD2LNqWB_fixed_Asm_16, Convert__VecListTwoQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoQHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld2 */, ARM::VLD2LNqWB_register_Asm_16, Convert__VecListTwoQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoQHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld2 */, ARM::VLD2DUPd32wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld2 */, ARM::VLD2DUPd32wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld2 */, ARM::VLD2d32wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld2 */, ARM::VLD2d32wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld2 */, ARM::VLD2DUPd32x2wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairSpacedAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld2 */, ARM::VLD2DUPd32x2wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairSpacedAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld2 */, ARM::VLD2b32wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld2 */, ARM::VLD2b32wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld2 */, ARM::VLD2q32wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld2 */, ARM::VLD2q32wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld2 */, ARM::VLD2LNdWB_fixed_Asm_32, Convert__VecListTwoDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoDWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld2 */, ARM::VLD2LNdWB_register_Asm_32, Convert__VecListTwoDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoDWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld2 */, ARM::VLD2LNqWB_fixed_Asm_32, Convert__VecListTwoQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoQWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld2 */, ARM::VLD2LNqWB_register_Asm_32, Convert__VecListTwoQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoQWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld2 */, ARM::VLD2DUPd8wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld2 */, ARM::VLD2DUPd8wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld2 */, ARM::VLD2d8wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld2 */, ARM::VLD2d8wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld2 */, ARM::VLD2DUPd8x2wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairSpacedAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld2 */, ARM::VLD2DUPd8x2wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairSpacedAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld2 */, ARM::VLD2b8wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld2 */, ARM::VLD2b8wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld2 */, ARM::VLD2q8wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld2 */, ARM::VLD2q8wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld2 */, ARM::VLD2LNdWB_fixed_Asm_8, Convert__VecListTwoDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListTwoDByteIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld2 */, ARM::VLD2LNdWB_register_Asm_8, Convert__VecListTwoDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListTwoDByteIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPdAsm_16, Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeDAllLanes, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3dAsm_16, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3LNdAsm_16, Convert__VecListThreeDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeDHWordIndexed, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPqAsm_16, Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQAllLanes, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3qAsm_16, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQ, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3LNqAsm_16, Convert__VecListThreeQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQHWordIndexed, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPdAsm_32, Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeDAllLanes, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3dAsm_32, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3LNdAsm_32, Convert__VecListThreeDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeDWordIndexed, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPqAsm_32, Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQAllLanes, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3qAsm_32, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQ, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3LNqAsm_32, Convert__VecListThreeQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQWordIndexed, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPdAsm_8, Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeDAllLanes, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3dAsm_8, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3LNdAsm_8, Convert__VecListThreeDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeDByteIndexed, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPqAsm_8, Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeQAllLanes, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3qAsm_8, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeQ, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPdWB_fixed_Asm_16, Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeDAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPdWB_register_Asm_16, Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeDAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld3 */, ARM::VLD3dWB_fixed_Asm_16, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld3 */, ARM::VLD3dWB_register_Asm_16, Convert__VecListThreeD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld3 */, ARM::VLD3LNdWB_fixed_Asm_16, Convert__VecListThreeDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeDHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld3 */, ARM::VLD3LNdWB_register_Asm_16, Convert__VecListThreeDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeDHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPqWB_fixed_Asm_16, Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPqWB_register_Asm_16, Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld3 */, ARM::VLD3qWB_fixed_Asm_16, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld3 */, ARM::VLD3qWB_register_Asm_16, Convert__VecListThreeQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld3 */, ARM::VLD3LNqWB_fixed_Asm_16, Convert__VecListThreeQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld3 */, ARM::VLD3LNqWB_register_Asm_16, Convert__VecListThreeQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPdWB_fixed_Asm_32, Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeDAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPdWB_register_Asm_32, Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeDAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld3 */, ARM::VLD3dWB_fixed_Asm_32, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld3 */, ARM::VLD3dWB_register_Asm_32, Convert__VecListThreeD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld3 */, ARM::VLD3LNdWB_fixed_Asm_32, Convert__VecListThreeDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeDWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld3 */, ARM::VLD3LNdWB_register_Asm_32, Convert__VecListThreeDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeDWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPqWB_fixed_Asm_32, Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPqWB_register_Asm_32, Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld3 */, ARM::VLD3qWB_fixed_Asm_32, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld3 */, ARM::VLD3qWB_register_Asm_32, Convert__VecListThreeQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld3 */, ARM::VLD3LNqWB_fixed_Asm_32, Convert__VecListThreeQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld3 */, ARM::VLD3LNqWB_register_Asm_32, Convert__VecListThreeQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPdWB_fixed_Asm_8, Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeDAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPdWB_register_Asm_8, Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeDAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld3 */, ARM::VLD3dWB_fixed_Asm_8, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld3 */, ARM::VLD3dWB_register_Asm_8, Convert__VecListThreeD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld3 */, ARM::VLD3LNdWB_fixed_Asm_8, Convert__VecListThreeDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeDByteIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld3 */, ARM::VLD3LNdWB_register_Asm_8, Convert__VecListThreeDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeDByteIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPqWB_fixed_Asm_8, Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeQAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPqWB_register_Asm_8, Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeQAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld3 */, ARM::VLD3qWB_fixed_Asm_8, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld3 */, ARM::VLD3qWB_register_Asm_8, Convert__VecListThreeQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld3 */, ARM::VLD3d16, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory2_7__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3q16, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory2_7__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3d32, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory2_7__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3q32, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory2_7__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3d8, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory2_7__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3q8, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory2_7__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3d16_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory1_7__Tie3__Imm1_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1586 /* vld3 */, ARM::VLD3q16_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory1_7__Tie3__Imm1_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1586 /* vld3 */, ARM::VLD3d32_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory1_7__Tie3__Imm1_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1586 /* vld3 */, ARM::VLD3q32_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory1_7__Tie3__Imm1_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1586 /* vld3 */, ARM::VLD3d8_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory1_7__Tie3__Imm1_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1586 /* vld3 */, ARM::VLD3q8_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory1_7__Tie3__Imm1_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPd16, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory2_13__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPq16, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory2_13__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPd32, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory2_13__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPq32, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory2_13__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPd8, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory2_13__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPq8, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory2_13__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPd16_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory1_13__Tie3__Imm1_14__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPq16_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory1_13__Tie3__Imm1_14__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPd32_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory1_13__Tie3__Imm1_14__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPq32_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory1_13__Tie3__Imm1_14__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPd8_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory1_13__Tie3__Imm1_14__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1586 /* vld3 */, ARM::VLD3DUPq8_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory1_13__Tie3__Imm1_14__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPdAsm_16, Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourDAllLanes, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4dAsm_16, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4LNdAsm_16, Convert__VecListFourDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourDHWordIndexed, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPqAsm_16, Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQAllLanes, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4qAsm_16, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQ, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4LNqAsm_16, Convert__VecListFourQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQHWordIndexed, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPdAsm_32, Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourDAllLanes, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4dAsm_32, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4LNdAsm_32, Convert__VecListFourDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourDWordIndexed, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPqAsm_32, Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQAllLanes, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4qAsm_32, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQ, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4LNqAsm_32, Convert__VecListFourQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQWordIndexed, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPdAsm_8, Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourDAllLanes, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4dAsm_8, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4LNdAsm_8, Convert__VecListFourDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourDByteIndexed, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPqAsm_8, Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourQAllLanes, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4qAsm_8, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourQ, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPdWB_fixed_Asm_16, Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourDAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPdWB_register_Asm_16, Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourDAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld4 */, ARM::VLD4dWB_fixed_Asm_16, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld4 */, ARM::VLD4dWB_register_Asm_16, Convert__VecListFourD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld4 */, ARM::VLD4LNdWB_fixed_Asm_16, Convert__VecListFourDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourDHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld4 */, ARM::VLD4LNdWB_register_Asm_16, Convert__VecListFourDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourDHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPqWB_fixed_Asm_16, Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPqWB_register_Asm_16, Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld4 */, ARM::VLD4qWB_fixed_Asm_16, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld4 */, ARM::VLD4qWB_register_Asm_16, Convert__VecListFourQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld4 */, ARM::VLD4LNqWB_fixed_Asm_16, Convert__VecListFourQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld4 */, ARM::VLD4LNqWB_register_Asm_16, Convert__VecListFourQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPdWB_fixed_Asm_32, Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourDAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPdWB_register_Asm_32, Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourDAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld4 */, ARM::VLD4dWB_fixed_Asm_32, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld4 */, ARM::VLD4dWB_register_Asm_32, Convert__VecListFourD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld4 */, ARM::VLD4LNdWB_fixed_Asm_32, Convert__VecListFourDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourDWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld4 */, ARM::VLD4LNdWB_register_Asm_32, Convert__VecListFourDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourDWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPqWB_fixed_Asm_32, Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPqWB_register_Asm_32, Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld4 */, ARM::VLD4qWB_fixed_Asm_32, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld4 */, ARM::VLD4qWB_register_Asm_32, Convert__VecListFourQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld4 */, ARM::VLD4LNqWB_fixed_Asm_32, Convert__VecListFourQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld4 */, ARM::VLD4LNqWB_register_Asm_32, Convert__VecListFourQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPdWB_fixed_Asm_8, Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourDAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPdWB_register_Asm_8, Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourDAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld4 */, ARM::VLD4dWB_fixed_Asm_8, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld4 */, ARM::VLD4dWB_register_Asm_8, Convert__VecListFourD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld4 */, ARM::VLD4LNdWB_fixed_Asm_8, Convert__VecListFourDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourDByteIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld4 */, ARM::VLD4LNdWB_register_Asm_8, Convert__VecListFourDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourDByteIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPqWB_fixed_Asm_8, Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourQAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPqWB_register_Asm_8, Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourQAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld4 */, ARM::VLD4qWB_fixed_Asm_8, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld4 */, ARM::VLD4qWB_register_Asm_8, Convert__VecListFourQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld4 */, ARM::VLD4d16, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory2_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4q16, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory2_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4d32, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory2_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4q32, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory2_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4d8, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory2_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4q8, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory2_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4d16_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory1_8__Tie4__Imm1_9__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1591 /* vld4 */, ARM::VLD4q16_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory1_8__Tie4__Imm1_9__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1591 /* vld4 */, ARM::VLD4d32_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory1_8__Tie4__Imm1_9__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1591 /* vld4 */, ARM::VLD4q32_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory1_8__Tie4__Imm1_9__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1591 /* vld4 */, ARM::VLD4d8_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory1_8__Tie4__Imm1_9__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1591 /* vld4 */, ARM::VLD4q8_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory1_8__Tie4__Imm1_9__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPd16, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory2_16__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPq16, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory2_16__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPd32, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory2_16__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPq32, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory2_16__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPd8, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory2_16__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPq8, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory2_16__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPd16_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory1_16__Tie4__Imm1_17__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPq16_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory1_16__Tie4__Imm1_17__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPd32_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory1_16__Tie4__Imm1_17__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPq32_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory1_16__Tie4__Imm1_17__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPd8_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory1_16__Tie4__Imm1_17__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1591 /* vld4 */, ARM::VLD4DUPq8_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory1_16__Tie4__Imm1_17__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1596 /* vldmdb */, ARM::VLDMDDB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__DPRRegList1_3, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_DPRRegList }, 0},
  { 1596 /* vldmdb */, ARM::VLDMSDB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__SPRRegList1_3, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_SPRRegList }, 0},
  { 1603 /* vldmia */, ARM::VLDMDIA, Convert__Reg1_1__CondCode2_0__DPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_DPRRegList }, 0},
  { 1603 /* vldmia */, ARM::VLDMSIA, Convert__Reg1_1__CondCode2_0__SPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_SPRRegList }, 0},
  { 1603 /* vldmia */, ARM::VLDMDIA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__DPRRegList1_3, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_DPRRegList }, 0},
  { 1603 /* vldmia */, ARM::VLDMSIA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__SPRRegList1_3, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_SPRRegList }, 0},
  { 1610 /* vldr */, ARM::VLDRS, Convert__Reg1_1__AddrMode52_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_SPR, MCK_AddrMode5 }, 0},
  { 1610 /* vldr */, ARM::VLDRD, Convert__Reg1_1__AddrMode52_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_DPR, MCK_AddrMode5 }, 0},
  { 1610 /* vldr */, ARM::VLDRS, Convert__Reg1_2__AddrMode52_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_32, MCK_SPR, MCK_AddrMode5 }, 0},
  { 1610 /* vldr */, ARM::VLDRD, Convert__Reg1_2__AddrMode52_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_AddrMode5 }, 0},
  { 1615 /* vmax */, ARM::VMAXfd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1615 /* vmax */, ARM::VMAXfq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1615 /* vmax */, ARM::VMAXsv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1615 /* vmax */, ARM::VMAXsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1615 /* vmax */, ARM::VMAXsv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1615 /* vmax */, ARM::VMAXsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1615 /* vmax */, ARM::VMAXsv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1615 /* vmax */, ARM::VMAXsv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1615 /* vmax */, ARM::VMAXuv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1615 /* vmax */, ARM::VMAXuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1615 /* vmax */, ARM::VMAXuv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1615 /* vmax */, ARM::VMAXuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1615 /* vmax */, ARM::VMAXuv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1615 /* vmax */, ARM::VMAXuv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1615 /* vmax */, ARM::VMAXfd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1615 /* vmax */, ARM::VMAXfq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1615 /* vmax */, ARM::VMAXsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1615 /* vmax */, ARM::VMAXsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1615 /* vmax */, ARM::VMAXsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1615 /* vmax */, ARM::VMAXsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1615 /* vmax */, ARM::VMAXsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1615 /* vmax */, ARM::VMAXsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1615 /* vmax */, ARM::VMAXuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1615 /* vmax */, ARM::VMAXuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1615 /* vmax */, ARM::VMAXuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1615 /* vmax */, ARM::VMAXuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1615 /* vmax */, ARM::VMAXuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1615 /* vmax */, ARM::VMAXuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmin */, ARM::VMINfd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmin */, ARM::VMINfq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmin */, ARM::VMINsv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmin */, ARM::VMINsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmin */, ARM::VMINsv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmin */, ARM::VMINsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmin */, ARM::VMINsv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmin */, ARM::VMINsv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmin */, ARM::VMINuv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmin */, ARM::VMINuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmin */, ARM::VMINuv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmin */, ARM::VMINuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmin */, ARM::VMINuv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmin */, ARM::VMINuv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmin */, ARM::VMINfd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmin */, ARM::VMINfq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmin */, ARM::VMINsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmin */, ARM::VMINsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmin */, ARM::VMINsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmin */, ARM::VMINsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmin */, ARM::VMINsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmin */, ARM::VMINsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmin */, ARM::VMINuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmin */, ARM::VMINuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmin */, ARM::VMINuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmin */, ARM::VMINuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmin */, ARM::VMINuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmin */, ARM::VMINuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1625 /* vmla */, ARM::VMLAS, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1625 /* vmla */, ARM::VMLAfd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1625 /* vmla */, ARM::VMLAfq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1625 /* vmla */, ARM::VMLAD, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1625 /* vmla */, ARM::VMLAv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1625 /* vmla */, ARM::VMLAv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1625 /* vmla */, ARM::VMLAv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1625 /* vmla */, ARM::VMLAv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1625 /* vmla */, ARM::VMLAv8i8, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1625 /* vmla */, ARM::VMLAv16i8, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1625 /* vmla */, ARM::VMLAslfd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1625 /* vmla */, ARM::VMLAslfq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1625 /* vmla */, ARM::VMLAslv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1625 /* vmla */, ARM::VMLAslv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1625 /* vmla */, ARM::VMLAslv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1625 /* vmla */, ARM::VMLAslv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1630 /* vmlal */, ARM::VMLALsv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1630 /* vmlal */, ARM::VMLALsv2i64, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1630 /* vmlal */, ARM::VMLALsv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1630 /* vmlal */, ARM::VMLALuv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1630 /* vmlal */, ARM::VMLALuv2i64, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1630 /* vmlal */, ARM::VMLALuv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1630 /* vmlal */, ARM::VMLALslsv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1630 /* vmlal */, ARM::VMLALslsv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1630 /* vmlal */, ARM::VMLALsluv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1630 /* vmlal */, ARM::VMLALsluv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1636 /* vmls */, ARM::VMLSS, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1636 /* vmls */, ARM::VMLSfd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1636 /* vmls */, ARM::VMLSfq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1636 /* vmls */, ARM::VMLSD, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1636 /* vmls */, ARM::VMLSv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1636 /* vmls */, ARM::VMLSv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1636 /* vmls */, ARM::VMLSv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1636 /* vmls */, ARM::VMLSv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1636 /* vmls */, ARM::VMLSv8i8, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1636 /* vmls */, ARM::VMLSv16i8, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1636 /* vmls */, ARM::VMLSslfd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1636 /* vmls */, ARM::VMLSslfq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1636 /* vmls */, ARM::VMLSslv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1636 /* vmls */, ARM::VMLSslv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1636 /* vmls */, ARM::VMLSslv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1636 /* vmls */, ARM::VMLSslv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1641 /* vmlsl */, ARM::VMLSLsv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1641 /* vmlsl */, ARM::VMLSLsv2i64, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1641 /* vmlsl */, ARM::VMLSLsv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1641 /* vmlsl */, ARM::VMLSLuv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1641 /* vmlsl */, ARM::VMLSLuv2i64, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1641 /* vmlsl */, ARM::VMLSLuv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1641 /* vmlsl */, ARM::VMLSLslsv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1641 /* vmlsl */, ARM::VMLSLslsv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1641 /* vmlsl */, ARM::VMLSLsluv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1641 /* vmlsl */, ARM::VMLSLsluv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1647 /* vmov */, ARM::VMOVRS, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_SPR }, 0},
  { 1647 /* vmov */, ARM::VMOVSR, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_SPR, MCK_GPR }, 0},
  { 1647 /* vmov */, ARM::VMOVS, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_SPR, MCK_SPR }, 0},
  { 1647 /* vmov */, ARM::VORRd, Convert__Reg1_1__Reg1_2__Reg1_2__CondCode2_0, 0, { MCK_CondCode, MCK_DPR, MCK_DPR }, 0},
  { 1647 /* vmov */, ARM::VORRq, Convert__Reg1_1__Reg1_2__Reg1_2__CondCode2_0, 0, { MCK_CondCode, MCK_QPR, MCK_QPR }, 0},
  { 1647 /* vmov */, ARM::VMOVRS, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_16, MCK_GPR, MCK_SPR }, 0},
  { 1647 /* vmov */, ARM::VMOVSR, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_16, MCK_SPR, MCK_GPR }, 0},
  { 1647 /* vmov */, ARM::VORRd, Convert__Reg1_2__Reg1_3__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR }, 0},
  { 1647 /* vmov */, ARM::VORRq, Convert__Reg1_2__Reg1_3__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR }, 0},
  { 1647 /* vmov */, ARM::VMOVS, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1647 /* vmov */, ARM::FCONSTS, Convert__Reg1_2__FPImm1_3__CondCode2_0, Feature_HasVFP3, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_FPImm }, 0},
  { 1647 /* vmov */, ARM::VMOVv2f32, Convert__Reg1_2__FPImm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_FPImm }, 0},
  { 1647 /* vmov */, ARM::VMOVv2i32, Convert__Reg1_2__NEONi32vmov1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_NEONi32vmov }, 0},
  { 1647 /* vmov */, ARM::VMOVv4f32, Convert__Reg1_2__FPImm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_FPImm }, 0},
  { 1647 /* vmov */, ARM::VMOVv4i32, Convert__Reg1_2__NEONi32vmov1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_NEONi32vmov }, 0},
  { 1647 /* vmov */, ARM::VMOVD, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR }, 0},
  { 1647 /* vmov */, ARM::FCONSTD, Convert__Reg1_2__FPImm1_3__CondCode2_0, Feature_HasVFP3, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_FPImm }, 0},
  { 1647 /* vmov */, ARM::VMOVv4i16, Convert__Reg1_2__NEONi16splat1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_NEONi16splat }, 0},
  { 1647 /* vmov */, ARM::VMOVv8i16, Convert__Reg1_2__NEONi16splat1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_NEONi16splat }, 0},
  { 1647 /* vmov */, ARM::VMOVv2i32, Convert__Reg1_2__NEONi32vmov1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_NEONi32vmov }, 0},
  { 1647 /* vmov */, ARM::VMVNv2i32, Convert__Reg1_2__NEONi32vmovNeg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_NEONi32vmovNeg }, 0},
  { 1647 /* vmov */, ARM::VMOVv4i32, Convert__Reg1_2__NEONi32vmov1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_NEONi32vmov }, 0},
  { 1647 /* vmov */, ARM::VMVNv4i32, Convert__Reg1_2__NEONi32vmovNeg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_NEONi32vmovNeg }, 0},
  { 1647 /* vmov */, ARM::VMOVRS, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_32, MCK_GPR, MCK_SPR }, 0},
  { 1647 /* vmov */, ARM::VMOVSR, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_32, MCK_SPR, MCK_GPR }, 0},
  { 1647 /* vmov */, ARM::VORRd, Convert__Reg1_2__Reg1_3__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR }, 0},
  { 1647 /* vmov */, ARM::VORRq, Convert__Reg1_2__Reg1_3__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR }, 0},
  { 1647 /* vmov */, ARM::VMOVv1i64, Convert__Reg1_2__NEONi64splat1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_NEONi64splat }, 0},
  { 1647 /* vmov */, ARM::VMOVv2i64, Convert__Reg1_2__NEONi64splat1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_QPR, MCK_NEONi64splat }, 0},
  { 1647 /* vmov */, ARM::VORRd, Convert__Reg1_2__Reg1_3__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR }, 0},
  { 1647 /* vmov */, ARM::VORRq, Convert__Reg1_2__Reg1_3__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR }, 0},
  { 1647 /* vmov */, ARM::VMOVv8i8, Convert__Reg1_2__NEONi8splat1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_NEONi8splat }, 0},
  { 1647 /* vmov */, ARM::VMOVv16i8, Convert__Reg1_2__NEONi8splat1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_NEONi8splat }, 0},
  { 1647 /* vmov */, ARM::VMOVRS, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_8, MCK_GPR, MCK_SPR }, 0},
  { 1647 /* vmov */, ARM::VMOVSR, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_8, MCK_SPR, MCK_GPR }, 0},
  { 1647 /* vmov */, ARM::VORRd, Convert__Reg1_2__Reg1_3__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 1647 /* vmov */, ARM::VORRq, Convert__Reg1_2__Reg1_3__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 1647 /* vmov */, ARM::VMOVRRD, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_DPR }, 0},
  { 1647 /* vmov */, ARM::VMOVDRR, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_DPR, MCK_GPR, MCK_GPR }, 0},
  { 1647 /* vmov */, ARM::VSETLNi16, Convert__Reg1_2__Tie0__Reg1_4__VectorIndex161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_VectorIndex16, MCK_GPR }, 0},
  { 1647 /* vmov */, ARM::VGETLNi32, Convert__Reg1_2__Reg1_3__VectorIndex321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_GPR, MCK_DPR, MCK_VectorIndex32 }, 0},
  { 1647 /* vmov */, ARM::VSETLNi32, Convert__Reg1_2__Tie0__Reg1_4__VectorIndex321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_VectorIndex32, MCK_GPR }, 0},
  { 1647 /* vmov */, ARM::VSETLNi8, Convert__Reg1_2__Tie0__Reg1_4__VectorIndex81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_VectorIndex8, MCK_GPR }, 0},
  { 1647 /* vmov */, ARM::VMOVRRD, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_GPR, MCK_GPR, MCK_DPR }, 0},
  { 1647 /* vmov */, ARM::VMOVDRR, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_GPR, MCK_GPR }, 0},
  { 1647 /* vmov */, ARM::VGETLNs16, Convert__Reg1_2__Reg1_3__VectorIndex161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_GPR, MCK_DPR, MCK_VectorIndex16 }, 0},
  { 1647 /* vmov */, ARM::VGETLNs8, Convert__Reg1_2__Reg1_3__VectorIndex81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_GPR, MCK_DPR, MCK_VectorIndex8 }, 0},
  { 1647 /* vmov */, ARM::VGETLNu16, Convert__Reg1_2__Reg1_3__VectorIndex161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_GPR, MCK_DPR, MCK_VectorIndex16 }, 0},
  { 1647 /* vmov */, ARM::VGETLNu8, Convert__Reg1_2__Reg1_3__VectorIndex81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_GPR, MCK_DPR, MCK_VectorIndex8 }, 0},
  { 1647 /* vmov */, ARM::VMOVRRS, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_SPR, MCK_SPR }, 0},
  { 1647 /* vmov */, ARM::VMOVSRR, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_SPR, MCK_SPR, MCK_GPR, MCK_GPR }, 0},
  { 1652 /* vmovl */, ARM::VMOVLsv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR }, 0},
  { 1652 /* vmovl */, ARM::VMOVLsv2i64, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR }, 0},
  { 1652 /* vmovl */, ARM::VMOVLsv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_DPR }, 0},
  { 1652 /* vmovl */, ARM::VMOVLuv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR }, 0},
  { 1652 /* vmovl */, ARM::VMOVLuv2i64, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR }, 0},
  { 1652 /* vmovl */, ARM::VMOVLuv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_DPR }, 0},
  { 1658 /* vmovn */, ARM::VMOVNv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_QPR }, 0},
  { 1658 /* vmovn */, ARM::VMOVNv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_QPR }, 0},
  { 1658 /* vmovn */, ARM::VMOVNv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_QPR }, 0},
  { 1664 /* vmrs */, ARM::FMSTAT, Convert__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_APSR_95_nzcv, MCK_FPSCR }, 0},
  { 1664 /* vmrs */, ARM::VMRS, Convert__Reg1_1__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_FPSCR }, 0},
  { 1664 /* vmrs */, ARM::VMRS_FPSID, Convert__Reg1_1__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_FPSID }, 0},
  { 1664 /* vmrs */, ARM::VMRS_MVFR1, Convert__Reg1_1__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_MVFR1 }, 0},
  { 1664 /* vmrs */, ARM::VMRS_MVFR0, Convert__Reg1_1__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_MVFR0 }, 0},
  { 1664 /* vmrs */, ARM::VMRS_FPEXC, Convert__Reg1_1__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_FPEXC }, 0},
  { 1669 /* vmsr */, ARM::VMSR, Convert__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_FPSCR, MCK_GPR }, 0},
  { 1669 /* vmsr */, ARM::VMSR_FPSID, Convert__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_FPSID, MCK_GPR }, 0},
  { 1669 /* vmsr */, ARM::VMSR_FPEXC, Convert__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_FPEXC, MCK_GPR }, 0},
  { 1674 /* vmul */, ARM::VMULS, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1674 /* vmul */, ARM::VMULfd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1674 /* vmul */, ARM::VMULfq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1674 /* vmul */, ARM::VMULD, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR }, 0},
  { 1674 /* vmul */, ARM::VMULv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR }, 0},
  { 1674 /* vmul */, ARM::VMULv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR }, 0},
  { 1674 /* vmul */, ARM::VMULv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR }, 0},
  { 1674 /* vmul */, ARM::VMULv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR }, 0},
  { 1674 /* vmul */, ARM::VMULv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR }, 0},
  { 1674 /* vmul */, ARM::VMULv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR }, 0},
  { 1674 /* vmul */, ARM::VMULpd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_p8, MCK_DPR, MCK_DPR }, 0},
  { 1674 /* vmul */, ARM::VMULpq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_p8, MCK_QPR, MCK_QPR }, 0},
  { 1674 /* vmul */, ARM::VMULS, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1674 /* vmul */, ARM::VMULslfd, Convert__Reg1_2__Reg1_2__Reg1_3__VectorIndex321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1674 /* vmul */, ARM::VMULfd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1674 /* vmul */, ARM::VMULslfq, Convert__Reg1_2__Reg1_2__Reg1_3__VectorIndex321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1674 /* vmul */, ARM::VMULfq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1674 /* vmul */, ARM::VMULD, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1674 /* vmul */, ARM::VMULslv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__VectorIndex161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1674 /* vmul */, ARM::VMULv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1674 /* vmul */, ARM::VMULslv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__VectorIndex161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1674 /* vmul */, ARM::VMULv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1674 /* vmul */, ARM::VMULslv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__VectorIndex321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1674 /* vmul */, ARM::VMULv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1674 /* vmul */, ARM::VMULslv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__VectorIndex321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1674 /* vmul */, ARM::VMULv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1674 /* vmul */, ARM::VMULv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1674 /* vmul */, ARM::VMULv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1674 /* vmul */, ARM::VMULpd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_p8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1674 /* vmul */, ARM::VMULpq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_p8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1674 /* vmul */, ARM::VMULslfd, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1674 /* vmul */, ARM::VMULslfq, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1674 /* vmul */, ARM::VMULslv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1674 /* vmul */, ARM::VMULslv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1674 /* vmul */, ARM::VMULslv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1674 /* vmul */, ARM::VMULslv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1679 /* vmull */, ARM::VMULLp, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_p8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1679 /* vmull */, ARM::VMULLsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1679 /* vmull */, ARM::VMULLsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1679 /* vmull */, ARM::VMULLsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1679 /* vmull */, ARM::VMULLuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1679 /* vmull */, ARM::VMULLuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1679 /* vmull */, ARM::VMULLuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1679 /* vmull */, ARM::VMULLslsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1679 /* vmull */, ARM::VMULLslsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1679 /* vmull */, ARM::VMULLsluv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1679 /* vmull */, ARM::VMULLsluv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1685 /* vmvn */, ARM::VMVNd, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR }, 0},
  { 1685 /* vmvn */, ARM::VMVNq, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR }, 0},
  { 1685 /* vmvn */, ARM::VMVNv4i16, Convert__Reg1_2__NEONi16splat1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_NEONi16splat }, 0},
  { 1685 /* vmvn */, ARM::VMVNv8i16, Convert__Reg1_2__NEONi16splat1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_NEONi16splat }, 0},
  { 1685 /* vmvn */, ARM::VMVNv2i32, Convert__Reg1_2__NEONi32vmov1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_NEONi32vmov }, 0},
  { 1685 /* vmvn */, ARM::VMOVv2i32, Convert__Reg1_2__NEONi32vmovNeg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_NEONi32vmovNeg }, 0},
  { 1685 /* vmvn */, ARM::VMVNv4i32, Convert__Reg1_2__NEONi32vmov1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_NEONi32vmov }, 0},
  { 1685 /* vmvn */, ARM::VMOVv4i32, Convert__Reg1_2__NEONi32vmovNeg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_NEONi32vmovNeg }, 0},
  { 1690 /* vneg */, ARM::VNEGS, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1690 /* vneg */, ARM::VNEGfd, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1690 /* vneg */, ARM::VNEGf32q, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1690 /* vneg */, ARM::VNEGD, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR }, 0},
  { 1690 /* vneg */, ARM::VNEGs16d, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1690 /* vneg */, ARM::VNEGs16q, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1690 /* vneg */, ARM::VNEGs32d, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1690 /* vneg */, ARM::VNEGs32q, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1690 /* vneg */, ARM::VNEGs8d, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1690 /* vneg */, ARM::VNEGs8q, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1695 /* vnmla */, ARM::VNMLAS, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1695 /* vnmla */, ARM::VNMLAD, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1701 /* vnmls */, ARM::VNMLSS, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1701 /* vnmls */, ARM::VNMLSD, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1707 /* vnmul */, ARM::VNMULS, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1707 /* vnmul */, ARM::VNMULD, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1713 /* vorn */, ARM::VORNd, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1713 /* vorn */, ARM::VORNq, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1718 /* vorr */, ARM::VORRd, Convert__Reg1_1__Reg1_1__Reg1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR }, 0},
  { 1718 /* vorr */, ARM::VORRq, Convert__Reg1_1__Reg1_1__Reg1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR }, 0},
  { 1718 /* vorr */, ARM::VORRiv4i16, Convert__Reg1_2__NEONi16splat1_3__Tie0__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_NEONi16splat }, 0},
  { 1718 /* vorr */, ARM::VORRiv8i16, Convert__Reg1_2__NEONi16splat1_3__Tie0__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_NEONi16splat }, 0},
  { 1718 /* vorr */, ARM::VORRd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR }, 0},
  { 1718 /* vorr */, ARM::VORRq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR }, 0},
  { 1718 /* vorr */, ARM::VORRiv2i32, Convert__Reg1_2__NEONi32splat1_3__Tie0__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_NEONi32splat }, 0},
  { 1718 /* vorr */, ARM::VORRiv4i32, Convert__Reg1_2__NEONi32splat1_3__Tie0__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_NEONi32splat }, 0},
  { 1718 /* vorr */, ARM::VORRd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR }, 0},
  { 1718 /* vorr */, ARM::VORRq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR }, 0},
  { 1718 /* vorr */, ARM::VORRd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR }, 0},
  { 1718 /* vorr */, ARM::VORRq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR }, 0},
  { 1718 /* vorr */, ARM::VORRd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 1718 /* vorr */, ARM::VORRq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 1718 /* vorr */, ARM::VORRd, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1718 /* vorr */, ARM::VORRq, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1718 /* vorr */, ARM::VORRd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1718 /* vorr */, ARM::VORRq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1718 /* vorr */, ARM::VORRd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1718 /* vorr */, ARM::VORRq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1718 /* vorr */, ARM::VORRd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1718 /* vorr */, ARM::VORRq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1718 /* vorr */, ARM::VORRd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1718 /* vorr */, ARM::VORRq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1723 /* vpadal */, ARM::VPADALsv4i16, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1723 /* vpadal */, ARM::VPADALsv8i16, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1723 /* vpadal */, ARM::VPADALsv2i32, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1723 /* vpadal */, ARM::VPADALsv4i32, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1723 /* vpadal */, ARM::VPADALsv8i8, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1723 /* vpadal */, ARM::VPADALsv16i8, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1723 /* vpadal */, ARM::VPADALuv4i16, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1723 /* vpadal */, ARM::VPADALuv8i16, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1723 /* vpadal */, ARM::VPADALuv2i32, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1723 /* vpadal */, ARM::VPADALuv4i32, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1723 /* vpadal */, ARM::VPADALuv8i8, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1723 /* vpadal */, ARM::VPADALuv16i8, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1730 /* vpadd */, ARM::VPADDf, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1730 /* vpadd */, ARM::VPADDi16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR }, 0},
  { 1730 /* vpadd */, ARM::VPADDi32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR }, 0},
  { 1730 /* vpadd */, ARM::VPADDi8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR }, 0},
  { 1730 /* vpadd */, ARM::VPADDf, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1730 /* vpadd */, ARM::VPADDi16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1730 /* vpadd */, ARM::VPADDi32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1730 /* vpadd */, ARM::VPADDi8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1736 /* vpaddl */, ARM::VPADDLsv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1736 /* vpaddl */, ARM::VPADDLsv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1736 /* vpaddl */, ARM::VPADDLsv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1736 /* vpaddl */, ARM::VPADDLsv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1736 /* vpaddl */, ARM::VPADDLsv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1736 /* vpaddl */, ARM::VPADDLsv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1736 /* vpaddl */, ARM::VPADDLuv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1736 /* vpaddl */, ARM::VPADDLuv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1736 /* vpaddl */, ARM::VPADDLuv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1736 /* vpaddl */, ARM::VPADDLuv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1736 /* vpaddl */, ARM::VPADDLuv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1736 /* vpaddl */, ARM::VPADDLuv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1743 /* vpmax */, ARM::VPMAXf, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1743 /* vpmax */, ARM::VPMAXs16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1743 /* vpmax */, ARM::VPMAXs32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1743 /* vpmax */, ARM::VPMAXs8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1743 /* vpmax */, ARM::VPMAXu16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1743 /* vpmax */, ARM::VPMAXu32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1743 /* vpmax */, ARM::VPMAXu8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1749 /* vpmin */, ARM::VPMINf, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1749 /* vpmin */, ARM::VPMINs16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1749 /* vpmin */, ARM::VPMINs32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1749 /* vpmin */, ARM::VPMINs8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1749 /* vpmin */, ARM::VPMINu16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1749 /* vpmin */, ARM::VPMINu32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1749 /* vpmin */, ARM::VPMINu8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1755 /* vpop */, ARM::VLDMDIA_UPD, Convert__regSP__Tie0__CondCode2_0__DPRRegList1_1, Feature_HasVFP2, { MCK_CondCode, MCK_DPRRegList }, 0},
  { 1755 /* vpop */, ARM::VLDMSIA_UPD, Convert__regSP__Tie0__CondCode2_0__SPRRegList1_1, Feature_HasVFP2, { MCK_CondCode, MCK_SPRRegList }, 0},
  { 1755 /* vpop */, ARM::VLDMDIA_UPD, Convert__regSP__Tie0__CondCode2_0__DPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_16, MCK_DPRRegList }, 0},
  { 1755 /* vpop */, ARM::VLDMSIA_UPD, Convert__regSP__Tie0__CondCode2_0__SPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_16, MCK_SPRRegList }, 0},
  { 1755 /* vpop */, ARM::VLDMDIA_UPD, Convert__regSP__Tie0__CondCode2_0__DPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_32, MCK_DPRRegList }, 0},
  { 1755 /* vpop */, ARM::VLDMSIA_UPD, Convert__regSP__Tie0__CondCode2_0__SPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_32, MCK_SPRRegList }, 0},
  { 1755 /* vpop */, ARM::VLDMDIA_UPD, Convert__regSP__Tie0__CondCode2_0__DPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_64, MCK_DPRRegList }, 0},
  { 1755 /* vpop */, ARM::VLDMSIA_UPD, Convert__regSP__Tie0__CondCode2_0__SPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_64, MCK_SPRRegList }, 0},
  { 1755 /* vpop */, ARM::VLDMDIA_UPD, Convert__regSP__Tie0__CondCode2_0__DPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_8, MCK_DPRRegList }, 0},
  { 1755 /* vpop */, ARM::VLDMSIA_UPD, Convert__regSP__Tie0__CondCode2_0__SPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_8, MCK_SPRRegList }, 0},
  { 1760 /* vpush */, ARM::VSTMDDB_UPD, Convert__regSP__Tie0__CondCode2_0__DPRRegList1_1, Feature_HasVFP2, { MCK_CondCode, MCK_DPRRegList }, 0},
  { 1760 /* vpush */, ARM::VSTMSDB_UPD, Convert__regSP__Tie0__CondCode2_0__SPRRegList1_1, Feature_HasVFP2, { MCK_CondCode, MCK_SPRRegList }, 0},
  { 1760 /* vpush */, ARM::VSTMDDB_UPD, Convert__regSP__Tie0__CondCode2_0__DPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_16, MCK_DPRRegList }, 0},
  { 1760 /* vpush */, ARM::VSTMSDB_UPD, Convert__regSP__Tie0__CondCode2_0__SPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_16, MCK_SPRRegList }, 0},
  { 1760 /* vpush */, ARM::VSTMDDB_UPD, Convert__regSP__Tie0__CondCode2_0__DPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_32, MCK_DPRRegList }, 0},
  { 1760 /* vpush */, ARM::VSTMSDB_UPD, Convert__regSP__Tie0__CondCode2_0__SPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_32, MCK_SPRRegList }, 0},
  { 1760 /* vpush */, ARM::VSTMDDB_UPD, Convert__regSP__Tie0__CondCode2_0__DPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_64, MCK_DPRRegList }, 0},
  { 1760 /* vpush */, ARM::VSTMSDB_UPD, Convert__regSP__Tie0__CondCode2_0__SPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_64, MCK_SPRRegList }, 0},
  { 1760 /* vpush */, ARM::VSTMDDB_UPD, Convert__regSP__Tie0__CondCode2_0__DPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_8, MCK_DPRRegList }, 0},
  { 1760 /* vpush */, ARM::VSTMSDB_UPD, Convert__regSP__Tie0__CondCode2_0__SPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_8, MCK_SPRRegList }, 0},
  { 1766 /* vqabs */, ARM::VQABSv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1766 /* vqabs */, ARM::VQABSv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1766 /* vqabs */, ARM::VQABSv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1766 /* vqabs */, ARM::VQABSv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1766 /* vqabs */, ARM::VQABSv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1766 /* vqabs */, ARM::VQABSv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDsv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDsv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDsv1i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDsv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDsv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDsv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDuv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDuv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDuv1i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDuv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDuv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDuv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDsv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDuv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1772 /* vqadd */, ARM::VQADDuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1778 /* vqdmlal */, ARM::VQDMLALv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1778 /* vqdmlal */, ARM::VQDMLALv2i64, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1778 /* vqdmlal */, ARM::VQDMLALslv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1778 /* vqdmlal */, ARM::VQDMLALslv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1786 /* vqdmlsl */, ARM::VQDMLSLv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1786 /* vqdmlsl */, ARM::VQDMLSLv2i64, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1786 /* vqdmlsl */, ARM::VQDMLSLslv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1786 /* vqdmlsl */, ARM::VQDMLSLslv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1794 /* vqdmulh */, ARM::VQDMULHv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1794 /* vqdmulh */, ARM::VQDMULHv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1794 /* vqdmulh */, ARM::VQDMULHv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1794 /* vqdmulh */, ARM::VQDMULHv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1794 /* vqdmulh */, ARM::VQDMULHv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1794 /* vqdmulh */, ARM::VQDMULHv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1794 /* vqdmulh */, ARM::VQDMULHv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1794 /* vqdmulh */, ARM::VQDMULHv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1794 /* vqdmulh */, ARM::VQDMULHslv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1794 /* vqdmulh */, ARM::VQDMULHslv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1794 /* vqdmulh */, ARM::VQDMULHslv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1794 /* vqdmulh */, ARM::VQDMULHslv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1802 /* vqdmull */, ARM::VQDMULLv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1802 /* vqdmull */, ARM::VQDMULLv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1802 /* vqdmull */, ARM::VQDMULLslv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1802 /* vqdmull */, ARM::VQDMULLslv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1810 /* vqmovn */, ARM::VQMOVNsv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_QPR }, 0},
  { 1810 /* vqmovn */, ARM::VQMOVNsv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_QPR }, 0},
  { 1810 /* vqmovn */, ARM::VQMOVNsv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_QPR }, 0},
  { 1810 /* vqmovn */, ARM::VQMOVNuv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_QPR }, 0},
  { 1810 /* vqmovn */, ARM::VQMOVNuv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_QPR }, 0},
  { 1810 /* vqmovn */, ARM::VQMOVNuv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_QPR }, 0},
  { 1817 /* vqmovun */, ARM::VQMOVNsuv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_QPR }, 0},
  { 1817 /* vqmovun */, ARM::VQMOVNsuv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_QPR }, 0},
  { 1817 /* vqmovun */, ARM::VQMOVNsuv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_QPR }, 0},
  { 1825 /* vqneg */, ARM::VQNEGv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1825 /* vqneg */, ARM::VQNEGv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1825 /* vqneg */, ARM::VQNEGv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1825 /* vqneg */, ARM::VQNEGv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1825 /* vqneg */, ARM::VQNEGv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1825 /* vqneg */, ARM::VQNEGv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1831 /* vqrdmulh */, ARM::VQRDMULHv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1831 /* vqrdmulh */, ARM::VQRDMULHv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1831 /* vqrdmulh */, ARM::VQRDMULHv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1831 /* vqrdmulh */, ARM::VQRDMULHv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1831 /* vqrdmulh */, ARM::VQRDMULHslv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1831 /* vqrdmulh */, ARM::VQRDMULHslv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1831 /* vqrdmulh */, ARM::VQRDMULHslv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1831 /* vqrdmulh */, ARM::VQRDMULHslv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1840 /* vqrshl */, ARM::VQRSHLsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1840 /* vqrshl */, ARM::VQRSHLsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1840 /* vqrshl */, ARM::VQRSHLsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1840 /* vqrshl */, ARM::VQRSHLsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1840 /* vqrshl */, ARM::VQRSHLsv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1840 /* vqrshl */, ARM::VQRSHLsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1840 /* vqrshl */, ARM::VQRSHLsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1840 /* vqrshl */, ARM::VQRSHLsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1840 /* vqrshl */, ARM::VQRSHLuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1840 /* vqrshl */, ARM::VQRSHLuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1840 /* vqrshl */, ARM::VQRSHLuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1840 /* vqrshl */, ARM::VQRSHLuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1840 /* vqrshl */, ARM::VQRSHLuv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1840 /* vqrshl */, ARM::VQRSHLuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1840 /* vqrshl */, ARM::VQRSHLuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1840 /* vqrshl */, ARM::VQRSHLuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1847 /* vqrshrn */, ARM::VQRSHRNsv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1847 /* vqrshrn */, ARM::VQRSHRNsv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1847 /* vqrshrn */, ARM::VQRSHRNsv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1847 /* vqrshrn */, ARM::VQRSHRNuv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1847 /* vqrshrn */, ARM::VQRSHRNuv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1847 /* vqrshrn */, ARM::VQRSHRNuv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1855 /* vqrshrun */, ARM::VQRSHRUNv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1855 /* vqrshrun */, ARM::VQRSHRUNv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1855 /* vqrshrun */, ARM::VQRSHRUNv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1864 /* vqshl */, ARM::VQSHLsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1864 /* vqshl */, ARM::VQSHLsiv4i16, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1864 /* vqshl */, ARM::VQSHLsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1864 /* vqshl */, ARM::VQSHLsiv8i16, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1864 /* vqshl */, ARM::VQSHLsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1864 /* vqshl */, ARM::VQSHLsiv2i32, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1864 /* vqshl */, ARM::VQSHLsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1864 /* vqshl */, ARM::VQSHLsiv4i32, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1864 /* vqshl */, ARM::VQSHLsv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1864 /* vqshl */, ARM::VQSHLsiv1i64, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1864 /* vqshl */, ARM::VQSHLsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1864 /* vqshl */, ARM::VQSHLsiv2i64, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1864 /* vqshl */, ARM::VQSHLsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1864 /* vqshl */, ARM::VQSHLsiv8i8, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1864 /* vqshl */, ARM::VQSHLsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1864 /* vqshl */, ARM::VQSHLsiv16i8, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1864 /* vqshl */, ARM::VQSHLuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1864 /* vqshl */, ARM::VQSHLuiv4i16, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1864 /* vqshl */, ARM::VQSHLuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1864 /* vqshl */, ARM::VQSHLuiv8i16, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1864 /* vqshl */, ARM::VQSHLuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1864 /* vqshl */, ARM::VQSHLuiv2i32, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1864 /* vqshl */, ARM::VQSHLuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1864 /* vqshl */, ARM::VQSHLuiv4i32, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1864 /* vqshl */, ARM::VQSHLuv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1864 /* vqshl */, ARM::VQSHLuiv1i64, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1864 /* vqshl */, ARM::VQSHLuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1864 /* vqshl */, ARM::VQSHLuiv2i64, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1864 /* vqshl */, ARM::VQSHLuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1864 /* vqshl */, ARM::VQSHLuiv8i8, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1864 /* vqshl */, ARM::VQSHLuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1864 /* vqshl */, ARM::VQSHLuiv16i8, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1870 /* vqshlu */, ARM::VQSHLsuv4i16, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1870 /* vqshlu */, ARM::VQSHLsuv8i16, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1870 /* vqshlu */, ARM::VQSHLsuv2i32, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1870 /* vqshlu */, ARM::VQSHLsuv4i32, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1870 /* vqshlu */, ARM::VQSHLsuv1i64, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1870 /* vqshlu */, ARM::VQSHLsuv2i64, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1870 /* vqshlu */, ARM::VQSHLsuv8i8, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1870 /* vqshlu */, ARM::VQSHLsuv16i8, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1877 /* vqshrn */, ARM::VQSHRNsv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1877 /* vqshrn */, ARM::VQSHRNsv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1877 /* vqshrn */, ARM::VQSHRNsv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1877 /* vqshrn */, ARM::VQSHRNuv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1877 /* vqshrn */, ARM::VQSHRNuv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1877 /* vqshrn */, ARM::VQSHRNuv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1884 /* vqshrun */, ARM::VQSHRUNv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1884 /* vqshrun */, ARM::VQSHRUNv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1884 /* vqshrun */, ARM::VQSHRUNv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1892 /* vqsub */, ARM::VQSUBsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1892 /* vqsub */, ARM::VQSUBsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1892 /* vqsub */, ARM::VQSUBsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1892 /* vqsub */, ARM::VQSUBsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1892 /* vqsub */, ARM::VQSUBsv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1892 /* vqsub */, ARM::VQSUBsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1892 /* vqsub */, ARM::VQSUBsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1892 /* vqsub */, ARM::VQSUBsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1892 /* vqsub */, ARM::VQSUBuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1892 /* vqsub */, ARM::VQSUBuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1892 /* vqsub */, ARM::VQSUBuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1892 /* vqsub */, ARM::VQSUBuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1892 /* vqsub */, ARM::VQSUBuv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1892 /* vqsub */, ARM::VQSUBuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1892 /* vqsub */, ARM::VQSUBuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1892 /* vqsub */, ARM::VQSUBuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1898 /* vraddhn */, ARM::VRADDHNv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 1898 /* vraddhn */, ARM::VRADDHNv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 1898 /* vraddhn */, ARM::VRADDHNv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 1906 /* vrecpe */, ARM::VRECPEfd, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1906 /* vrecpe */, ARM::VRECPEfq, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1906 /* vrecpe */, ARM::VRECPEd, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1906 /* vrecpe */, ARM::VRECPEq, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1913 /* vrecps */, ARM::VRECPSfd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1913 /* vrecps */, ARM::VRECPSfq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1920 /* vrev16 */, ARM::VREV16d8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 1920 /* vrev16 */, ARM::VREV16q8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 1927 /* vrev32 */, ARM::VREV32d16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR }, 0},
  { 1927 /* vrev32 */, ARM::VREV32q16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR }, 0},
  { 1927 /* vrev32 */, ARM::VREV32d8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 1927 /* vrev32 */, ARM::VREV32q8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 1934 /* vrev64 */, ARM::VREV64d16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR }, 0},
  { 1934 /* vrev64 */, ARM::VREV64q16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR }, 0},
  { 1934 /* vrev64 */, ARM::VREV64d32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR }, 0},
  { 1934 /* vrev64 */, ARM::VREV64q32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR }, 0},
  { 1934 /* vrev64 */, ARM::VREV64d8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 1934 /* vrev64 */, ARM::VREV64q8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDsv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDsv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDsv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDsv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDuv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDuv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDuv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDuv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1941 /* vrhadd */, ARM::VRHADDuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLsv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLsv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLsv1i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLsv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLsv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLsv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLuv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLuv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLuv1i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLuv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLuv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLuv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLsv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLuv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1948 /* vrshl */, ARM::VRSHLuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1954 /* vrshr */, ARM::VRSHRsv4i16, Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_ShrImm16 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRsv8i16, Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRsv2i32, Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_ShrImm32 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRsv4i32, Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRsv1i64, Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_ShrImm64 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRsv2i64, Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_ShrImm64 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRsv8i8, Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_ShrImm8 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRsv16i8, Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRuv4i16, Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_ShrImm16 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRuv8i16, Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRuv2i32, Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_ShrImm32 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRuv4i32, Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRuv1i64, Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_ShrImm64 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRuv2i64, Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_ShrImm64 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRuv8i8, Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_ShrImm8 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRuv16i8, Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRsv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_ShrImm16 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRsv8i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRsv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_ShrImm32 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRsv4i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRsv1i64, Convert__Reg1_2__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_ShrImm64 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRsv2i64, Convert__Reg1_2__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_ShrImm64 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRsv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_ShrImm8 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRsv16i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRuv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_ShrImm16 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRuv8i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRuv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_ShrImm32 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRuv4i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRuv1i64, Convert__Reg1_2__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR, MCK_ShrImm64 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRuv2i64, Convert__Reg1_2__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR, MCK_ShrImm64 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRuv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_ShrImm8 }, 0},
  { 1954 /* vrshr */, ARM::VRSHRuv16i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1960 /* vrshrn */, ARM::VRSHRNv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1960 /* vrshrn */, ARM::VRSHRNv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1960 /* vrshrn */, ARM::VRSHRNv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1967 /* vrsqrte */, ARM::VRSQRTEfd, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1967 /* vrsqrte */, ARM::VRSQRTEfq, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1967 /* vrsqrte */, ARM::VRSQRTEd, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1967 /* vrsqrte */, ARM::VRSQRTEq, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1975 /* vrsqrts */, ARM::VRSQRTSfd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1975 /* vrsqrts */, ARM::VRSQRTSfq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1983 /* vrsra */, ARM::VRSRAsv4i16, Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_ShrImm16 }, 0},
  { 1983 /* vrsra */, ARM::VRSRAsv8i16, Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1983 /* vrsra */, ARM::VRSRAsv2i32, Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_ShrImm32 }, 0},
  { 1983 /* vrsra */, ARM::VRSRAsv4i32, Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1983 /* vrsra */, ARM::VRSRAsv1i64, Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_ShrImm64 }, 0},
  { 1983 /* vrsra */, ARM::VRSRAsv2i64, Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_ShrImm64 }, 0},
  { 1983 /* vrsra */, ARM::VRSRAsv8i8, Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_ShrImm8 }, 0},
  { 1983 /* vrsra */, ARM::VRSRAsv16i8, Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1983 /* vrsra */, ARM::VRSRAuv4i16, Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_ShrImm16 }, 0},
  { 1983 /* vrsra */, ARM::VRSRAuv8i16, Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1983 /* vrsra */, ARM::VRSRAuv2i32, Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_ShrImm32 }, 0},
  { 1983 /* vrsra */, ARM::VRSRAuv4i32, Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1983 /* vrsra */, ARM::VRSRAuv1i64, Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR, MCK_ShrImm64 }, 0},
  { 1983 /* vrsra */, ARM::VRSRAuv2i64, Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR, MCK_ShrImm64 }, 0},
  { 1983 /* vrsra */, ARM::VRSRAuv8i8, Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_ShrImm8 }, 0},
  { 1983 /* vrsra */, ARM::VRSRAuv16i8, Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1989 /* vrsubhn */, ARM::VRSUBHNv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 1989 /* vrsubhn */, ARM::VRSUBHNv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 1989 /* vrsubhn */, ARM::VRSUBHNv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 1997 /* vshl */, ARM::VSHLsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1997 /* vshl */, ARM::VSHLiv4i16, Convert__Reg1_2__Reg1_2__Imm0_151_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_Imm0_15 }, 0},
  { 1997 /* vshl */, ARM::VSHLiv8i16, Convert__Reg1_2__Reg1_2__Imm0_151_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_Imm0_15 }, 0},
  { 1997 /* vshl */, ARM::VSHLsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1997 /* vshl */, ARM::VSHLiv2i32, Convert__Reg1_2__Reg1_2__Imm0_311_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_Imm0_31 }, 0},
  { 1997 /* vshl */, ARM::VSHLiv4i32, Convert__Reg1_2__Reg1_2__Imm0_311_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_Imm0_31 }, 0},
  { 1997 /* vshl */, ARM::VSHLsv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR }, 0},
  { 1997 /* vshl */, ARM::VSHLiv1i64, Convert__Reg1_2__Reg1_2__Imm0_631_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_Imm0_63 }, 0},
  { 1997 /* vshl */, ARM::VSHLiv2i64, Convert__Reg1_2__Reg1_2__Imm0_631_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_QPR, MCK_Imm0_63 }, 0},
  { 1997 /* vshl */, ARM::VSHLsv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1997 /* vshl */, ARM::VSHLiv8i8, Convert__Reg1_2__Reg1_2__Imm0_71_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_Imm0_7 }, 0},
  { 1997 /* vshl */, ARM::VSHLiv16i8, Convert__Reg1_2__Reg1_2__Imm0_71_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_Imm0_7 }, 0},
  { 1997 /* vshl */, ARM::VSHLsv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1997 /* vshl */, ARM::VSHLsv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1997 /* vshl */, ARM::VSHLsv1i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR }, 0},
  { 1997 /* vshl */, ARM::VSHLsv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1997 /* vshl */, ARM::VSHLuv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1997 /* vshl */, ARM::VSHLuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1997 /* vshl */, ARM::VSHLuv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1997 /* vshl */, ARM::VSHLuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1997 /* vshl */, ARM::VSHLuv1i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR }, 0},
  { 1997 /* vshl */, ARM::VSHLuv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR }, 0},
  { 1997 /* vshl */, ARM::VSHLuv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1997 /* vshl */, ARM::VSHLuv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1997 /* vshl */, ARM::VSHLiv2i32, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1997 /* vshl */, ARM::VSHLiv1i64, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1997 /* vshl */, ARM::VSHLiv16i8, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1997 /* vshl */, ARM::VSHLsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1997 /* vshl */, ARM::VSHLsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1997 /* vshl */, ARM::VSHLuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1997 /* vshl */, ARM::VSHLuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1997 /* vshl */, ARM::VSHLiv4i16, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1997 /* vshl */, ARM::VSHLiv8i16, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1997 /* vshl */, ARM::VSHLsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1997 /* vshl */, ARM::VSHLsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1997 /* vshl */, ARM::VSHLuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1997 /* vshl */, ARM::VSHLuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1997 /* vshl */, ARM::VSHLiv4i32, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1997 /* vshl */, ARM::VSHLsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1997 /* vshl */, ARM::VSHLuv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1997 /* vshl */, ARM::VSHLuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1997 /* vshl */, ARM::VSHLiv2i64, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1997 /* vshl */, ARM::VSHLsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1997 /* vshl */, ARM::VSHLsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1997 /* vshl */, ARM::VSHLuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1997 /* vshl */, ARM::VSHLuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1997 /* vshl */, ARM::VSHLiv8i8, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1997 /* vshl */, ARM::VSHLsv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2002 /* vshll */, ARM::VSHLLi16, Convert__Reg1_2__Reg1_3__Imm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_DPR, MCK_Imm16 }, 0},
  { 2002 /* vshll */, ARM::VSHLLi32, Convert__Reg1_2__Reg1_3__Imm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_DPR, MCK_Imm32 }, 0},
  { 2002 /* vshll */, ARM::VSHLLsv8i16, Convert__Reg1_2__Reg1_3__Imm1_71_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_DPR, MCK_Imm1_7 }, 0},
  { 2002 /* vshll */, ARM::VSHLLi8, Convert__Reg1_2__Reg1_3__Imm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_DPR, MCK_Imm8 }, 0},
  { 2002 /* vshll */, ARM::VSHLLsv4i32, Convert__Reg1_2__Reg1_3__Imm1_151_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_Imm1_15 }, 0},
  { 2002 /* vshll */, ARM::VSHLLsv2i64, Convert__Reg1_2__Reg1_3__Imm1_311_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_Imm1_31 }, 0},
  { 2002 /* vshll */, ARM::VSHLLuv4i32, Convert__Reg1_2__Reg1_3__Imm1_151_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR, MCK_Imm1_15 }, 0},
  { 2002 /* vshll */, ARM::VSHLLuv2i64, Convert__Reg1_2__Reg1_3__Imm1_311_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR, MCK_Imm1_31 }, 0},
  { 2002 /* vshll */, ARM::VSHLLuv8i16, Convert__Reg1_2__Reg1_3__Imm1_71_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_DPR, MCK_Imm1_7 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv4i16, Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_ShrImm16 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv4i16, Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_ShrImm16 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv8i16, Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv8i16, Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv2i32, Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_ShrImm32 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv2i32, Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_ShrImm32 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv4i32, Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv4i32, Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv1i64, Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_ShrImm64 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv1i64, Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_ShrImm64 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv2i64, Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_ShrImm64 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv2i64, Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_ShrImm64 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv8i8, Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_ShrImm8 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv8i8, Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_ShrImm8 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv16i8, Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv16i8, Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv4i16, Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_ShrImm16 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv4i16, Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_ShrImm16 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv8i16, Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv8i16, Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv2i32, Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_ShrImm32 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv2i32, Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_ShrImm32 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv4i32, Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv4i32, Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv1i64, Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_ShrImm64 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv1i64, Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_ShrImm64 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv2i64, Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_ShrImm64 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv2i64, Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_ShrImm64 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv8i8, Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_ShrImm8 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv8i8, Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_ShrImm8 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv16i8, Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv16i8, Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_ShrImm16 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv8i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_ShrImm32 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv4i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv1i64, Convert__Reg1_2__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_ShrImm64 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv2i64, Convert__Reg1_2__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_ShrImm64 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_ShrImm8 }, 0},
  { 2008 /* vshr */, ARM::VSHRsv16i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_ShrImm16 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv8i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_ShrImm32 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv4i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv1i64, Convert__Reg1_2__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR, MCK_ShrImm64 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv2i64, Convert__Reg1_2__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR, MCK_ShrImm64 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_ShrImm8 }, 0},
  { 2008 /* vshr */, ARM::VSHRuv16i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2013 /* vshrn */, ARM::VSHRNv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2013 /* vshrn */, ARM::VSHRNv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2013 /* vshrn */, ARM::VSHRNv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2019 /* vsli */, ARM::VSLIv4i16, Convert__Reg1_2__Tie0__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_ShrImm16 }, 0},
  { 2019 /* vsli */, ARM::VSLIv8i16, Convert__Reg1_2__Tie0__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2019 /* vsli */, ARM::VSLIv2i32, Convert__Reg1_2__Tie0__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_ShrImm32 }, 0},
  { 2019 /* vsli */, ARM::VSLIv4i32, Convert__Reg1_2__Tie0__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2019 /* vsli */, ARM::VSLIv1i64, Convert__Reg1_2__Tie0__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_ShrImm64 }, 0},
  { 2019 /* vsli */, ARM::VSLIv2i64, Convert__Reg1_2__Tie0__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_ShrImm64 }, 0},
  { 2019 /* vsli */, ARM::VSLIv8i8, Convert__Reg1_2__Tie0__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_ShrImm8 }, 0},
  { 2019 /* vsli */, ARM::VSLIv16i8, Convert__Reg1_2__Tie0__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2019 /* vsli */, ARM::VSLIv4i16, Convert__Reg1_2__Tie0__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 2019 /* vsli */, ARM::VSLIv8i16, Convert__Reg1_2__Tie0__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 2019 /* vsli */, ARM::VSLIv2i32, Convert__Reg1_2__Tie0__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 2019 /* vsli */, ARM::VSLIv4i32, Convert__Reg1_2__Tie0__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 2019 /* vsli */, ARM::VSLIv1i64, Convert__Reg1_2__Tie0__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 2019 /* vsli */, ARM::VSLIv2i64, Convert__Reg1_2__Tie0__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 2019 /* vsli */, ARM::VSLIv8i8, Convert__Reg1_2__Tie0__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 2019 /* vsli */, ARM::VSLIv16i8, Convert__Reg1_2__Tie0__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 2024 /* vsqrt */, ARM::VSQRTS, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_SPR, MCK_SPR }, 0},
  { 2024 /* vsqrt */, ARM::VSQRTD, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_DPR, MCK_DPR }, 0},
  { 2024 /* vsqrt */, ARM::VSQRTS, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 2024 /* vsqrt */, ARM::VSQRTD, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR }, 0},
  { 2030 /* vsra */, ARM::VSRAsv4i16, Convert__Reg1_2__Tie0__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_ShrImm16 }, 0},
  { 2030 /* vsra */, ARM::VSRAsv8i16, Convert__Reg1_2__Tie0__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2030 /* vsra */, ARM::VSRAsv2i32, Convert__Reg1_2__Tie0__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_ShrImm32 }, 0},
  { 2030 /* vsra */, ARM::VSRAsv4i32, Convert__Reg1_2__Tie0__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2030 /* vsra */, ARM::VSRAsv1i64, Convert__Reg1_2__Tie0__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_ShrImm64 }, 0},
  { 2030 /* vsra */, ARM::VSRAsv2i64, Convert__Reg1_2__Tie0__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_ShrImm64 }, 0},
  { 2030 /* vsra */, ARM::VSRAsv8i8, Convert__Reg1_2__Tie0__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_ShrImm8 }, 0},
  { 2030 /* vsra */, ARM::VSRAsv16i8, Convert__Reg1_2__Tie0__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2030 /* vsra */, ARM::VSRAuv4i16, Convert__Reg1_2__Tie0__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_ShrImm16 }, 0},
  { 2030 /* vsra */, ARM::VSRAuv8i16, Convert__Reg1_2__Tie0__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2030 /* vsra */, ARM::VSRAuv2i32, Convert__Reg1_2__Tie0__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_ShrImm32 }, 0},
  { 2030 /* vsra */, ARM::VSRAuv4i32, Convert__Reg1_2__Tie0__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2030 /* vsra */, ARM::VSRAuv1i64, Convert__Reg1_2__Tie0__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_ShrImm64 }, 0},
  { 2030 /* vsra */, ARM::VSRAuv2i64, Convert__Reg1_2__Tie0__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_ShrImm64 }, 0},
  { 2030 /* vsra */, ARM::VSRAuv8i8, Convert__Reg1_2__Tie0__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_ShrImm8 }, 0},
  { 2030 /* vsra */, ARM::VSRAuv16i8, Convert__Reg1_2__Tie0__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2030 /* vsra */, ARM::VSRAsv4i16, Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_ShrImm16 }, 0},
  { 2030 /* vsra */, ARM::VSRAsv8i16, Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2030 /* vsra */, ARM::VSRAsv2i32, Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_ShrImm32 }, 0},
  { 2030 /* vsra */, ARM::VSRAsv4i32, Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2030 /* vsra */, ARM::VSRAsv1i64, Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_ShrImm64 }, 0},
  { 2030 /* vsra */, ARM::VSRAsv2i64, Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_ShrImm64 }, 0},
  { 2030 /* vsra */, ARM::VSRAsv8i8, Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_ShrImm8 }, 0},
  { 2030 /* vsra */, ARM::VSRAsv16i8, Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2030 /* vsra */, ARM::VSRAuv4i16, Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_ShrImm16 }, 0},
  { 2030 /* vsra */, ARM::VSRAuv8i16, Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2030 /* vsra */, ARM::VSRAuv2i32, Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_ShrImm32 }, 0},
  { 2030 /* vsra */, ARM::VSRAuv4i32, Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2030 /* vsra */, ARM::VSRAuv1i64, Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR, MCK_ShrImm64 }, 0},
  { 2030 /* vsra */, ARM::VSRAuv2i64, Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR, MCK_ShrImm64 }, 0},
  { 2030 /* vsra */, ARM::VSRAuv8i8, Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_ShrImm8 }, 0},
  { 2030 /* vsra */, ARM::VSRAuv16i8, Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2035 /* vsri */, ARM::VSRIv4i16, Convert__Reg1_2__Tie0__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_ShrImm16 }, 0},
  { 2035 /* vsri */, ARM::VSRIv8i16, Convert__Reg1_2__Tie0__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2035 /* vsri */, ARM::VSRIv2i32, Convert__Reg1_2__Tie0__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_ShrImm32 }, 0},
  { 2035 /* vsri */, ARM::VSRIv4i32, Convert__Reg1_2__Tie0__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2035 /* vsri */, ARM::VSRIv1i64, Convert__Reg1_2__Tie0__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_ShrImm64 }, 0},
  { 2035 /* vsri */, ARM::VSRIv2i64, Convert__Reg1_2__Tie0__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_ShrImm64 }, 0},
  { 2035 /* vsri */, ARM::VSRIv8i8, Convert__Reg1_2__Tie0__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_ShrImm8 }, 0},
  { 2035 /* vsri */, ARM::VSRIv16i8, Convert__Reg1_2__Tie0__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2035 /* vsri */, ARM::VSRIv4i16, Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_ShrImm16 }, 0},
  { 2035 /* vsri */, ARM::VSRIv8i16, Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2035 /* vsri */, ARM::VSRIv2i32, Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_ShrImm32 }, 0},
  { 2035 /* vsri */, ARM::VSRIv4i32, Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2035 /* vsri */, ARM::VSRIv1i64, Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR, MCK_ShrImm64 }, 0},
  { 2035 /* vsri */, ARM::VSRIv2i64, Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR, MCK_ShrImm64 }, 0},
  { 2035 /* vsri */, ARM::VSRIv8i8, Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_ShrImm8 }, 0},
  { 2035 /* vsri */, ARM::VSRIv16i8, Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2040 /* vst1 */, ARM::VST1q16, Convert__AlignedMemory2_3__VecListDPair1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 2040 /* vst1 */, ARM::VST1d16Q, Convert__AlignedMemory2_3__VecListFourD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 2040 /* vst1 */, ARM::VST1d16, Convert__AlignedMemory2_3__VecListOneD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneD, MCK_AlignedMemory }, 0},
  { 2040 /* vst1 */, ARM::VST1LNdAsm_16, Convert__VecListOneDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneDHWordIndexed, MCK_AlignedMemory }, 0},
  { 2040 /* vst1 */, ARM::VST1d16T, Convert__AlignedMemory2_3__VecListThreeD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 2040 /* vst1 */, ARM::VST1q32, Convert__AlignedMemory2_3__VecListDPair1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 2040 /* vst1 */, ARM::VST1d32Q, Convert__AlignedMemory2_3__VecListFourD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 2040 /* vst1 */, ARM::VST1d32, Convert__AlignedMemory2_3__VecListOneD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneD, MCK_AlignedMemory }, 0},
  { 2040 /* vst1 */, ARM::VST1LNdAsm_32, Convert__VecListOneDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneDWordIndexed, MCK_AlignedMemory }, 0},
  { 2040 /* vst1 */, ARM::VST1d32T, Convert__AlignedMemory2_3__VecListThreeD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 2040 /* vst1 */, ARM::VST1q64, Convert__AlignedMemory2_3__VecListDPair1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 2040 /* vst1 */, ARM::VST1d64Q, Convert__AlignedMemory2_3__VecListFourD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 2040 /* vst1 */, ARM::VST1d64, Convert__AlignedMemory2_3__VecListOneD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListOneD, MCK_AlignedMemory }, 0},
  { 2040 /* vst1 */, ARM::VST1d64T, Convert__AlignedMemory2_3__VecListThreeD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 2040 /* vst1 */, ARM::VST1q8, Convert__AlignedMemory2_3__VecListDPair1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 2040 /* vst1 */, ARM::VST1d8Q, Convert__AlignedMemory2_3__VecListFourD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 2040 /* vst1 */, ARM::VST1d8, Convert__AlignedMemory2_3__VecListOneD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneD, MCK_AlignedMemory }, 0},
  { 2040 /* vst1 */, ARM::VST1LNdAsm_8, Convert__VecListOneDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneDByteIndexed, MCK_AlignedMemory }, 0},
  { 2040 /* vst1 */, ARM::VST1d8T, Convert__AlignedMemory2_3__VecListThreeD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 2040 /* vst1 */, ARM::VST1q16wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2040 /* vst1 */, ARM::VST1q16wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2040 /* vst1 */, ARM::VST1d16Qwb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2040 /* vst1 */, ARM::VST1d16Qwb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2040 /* vst1 */, ARM::VST1d16wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2040 /* vst1 */, ARM::VST1d16wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2040 /* vst1 */, ARM::VST1LNdWB_fixed_Asm_16, Convert__VecListOneDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneDHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2040 /* vst1 */, ARM::VST1LNdWB_register_Asm_16, Convert__VecListOneDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneDHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2040 /* vst1 */, ARM::VST1d16Twb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2040 /* vst1 */, ARM::VST1d16Twb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2040 /* vst1 */, ARM::VST1q32wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2040 /* vst1 */, ARM::VST1q32wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2040 /* vst1 */, ARM::VST1d32Qwb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2040 /* vst1 */, ARM::VST1d32Qwb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2040 /* vst1 */, ARM::VST1d32wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2040 /* vst1 */, ARM::VST1d32wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2040 /* vst1 */, ARM::VST1LNdWB_fixed_Asm_32, Convert__VecListOneDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneDWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2040 /* vst1 */, ARM::VST1LNdWB_register_Asm_32, Convert__VecListOneDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneDWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2040 /* vst1 */, ARM::VST1d32Twb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2040 /* vst1 */, ARM::VST1d32Twb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2040 /* vst1 */, ARM::VST1q64wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2040 /* vst1 */, ARM::VST1q64wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2040 /* vst1 */, ARM::VST1d64Qwb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2040 /* vst1 */, ARM::VST1d64Qwb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2040 /* vst1 */, ARM::VST1d64wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListOneD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2040 /* vst1 */, ARM::VST1d64wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListOneD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2040 /* vst1 */, ARM::VST1d64Twb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2040 /* vst1 */, ARM::VST1d64Twb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2040 /* vst1 */, ARM::VST1q8wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2040 /* vst1 */, ARM::VST1q8wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2040 /* vst1 */, ARM::VST1d8Qwb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2040 /* vst1 */, ARM::VST1d8Qwb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2040 /* vst1 */, ARM::VST1d8wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2040 /* vst1 */, ARM::VST1d8wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2040 /* vst1 */, ARM::VST1LNdWB_fixed_Asm_8, Convert__VecListOneDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneDByteIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2040 /* vst1 */, ARM::VST1LNdWB_register_Asm_8, Convert__VecListOneDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneDByteIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2040 /* vst1 */, ARM::VST1d8Twb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2040 /* vst1 */, ARM::VST1d8Twb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2040 /* vst1 */, ARM::VST1LNd16, Convert__AlignedMemory2_8__Reg1_3__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 2040 /* vst1 */, ARM::VST1LNd8, Convert__AlignedMemory2_8__Reg1_3__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 2040 /* vst1 */, ARM::VST1LNd16_UPD, Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2040 /* vst1 */, ARM::VST1LNd32, Convert__Reg1_8__Imm1_9__Reg1_3__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_GPR, MCK_Imm }, 0},
  { 2040 /* vst1 */, ARM::VST1LNd8_UPD, Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2040 /* vst1 */, ARM::VST1LNd32_UPD, Convert__Reg1_8__Tie0__Imm1_10__Reg1_3__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_GPR, MCK_Imm, MCK_Imm }, 0},
  { 2045 /* vst2 */, ARM::VST2d16, Convert__AlignedMemory2_3__VecListDPair1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 2045 /* vst2 */, ARM::VST2b16, Convert__AlignedMemory2_3__VecListDPairSpaced1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairSpaced, MCK_AlignedMemory }, 0},
  { 2045 /* vst2 */, ARM::VST2q16, Convert__AlignedMemory2_3__VecListFourD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 2045 /* vst2 */, ARM::VST2LNdAsm_16, Convert__VecListTwoDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoDHWordIndexed, MCK_AlignedMemory }, 0},
  { 2045 /* vst2 */, ARM::VST2LNqAsm_16, Convert__VecListTwoQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoQHWordIndexed, MCK_AlignedMemory }, 0},
  { 2045 /* vst2 */, ARM::VST2d32, Convert__AlignedMemory2_3__VecListDPair1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 2045 /* vst2 */, ARM::VST2b32, Convert__AlignedMemory2_3__VecListDPairSpaced1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairSpaced, MCK_AlignedMemory }, 0},
  { 2045 /* vst2 */, ARM::VST2q32, Convert__AlignedMemory2_3__VecListFourD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 2045 /* vst2 */, ARM::VST2LNdAsm_32, Convert__VecListTwoDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoDWordIndexed, MCK_AlignedMemory }, 0},
  { 2045 /* vst2 */, ARM::VST2LNqAsm_32, Convert__VecListTwoQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoQWordIndexed, MCK_AlignedMemory }, 0},
  { 2045 /* vst2 */, ARM::VST2d8, Convert__AlignedMemory2_3__VecListDPair1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 2045 /* vst2 */, ARM::VST2b8, Convert__AlignedMemory2_3__VecListDPairSpaced1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairSpaced, MCK_AlignedMemory }, 0},
  { 2045 /* vst2 */, ARM::VST2q8, Convert__AlignedMemory2_3__VecListFourD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 2045 /* vst2 */, ARM::VST2LNdAsm_8, Convert__VecListTwoDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListTwoDByteIndexed, MCK_AlignedMemory }, 0},
  { 2045 /* vst2 */, ARM::VST2d16wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst2 */, ARM::VST2d16wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst2 */, ARM::VST2b16wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst2 */, ARM::VST2b16wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst2 */, ARM::VST2q16wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst2 */, ARM::VST2q16wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst2 */, ARM::VST2LNdWB_fixed_Asm_16, Convert__VecListTwoDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoDHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst2 */, ARM::VST2LNdWB_register_Asm_16, Convert__VecListTwoDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoDHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst2 */, ARM::VST2LNqWB_fixed_Asm_16, Convert__VecListTwoQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoQHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst2 */, ARM::VST2LNqWB_register_Asm_16, Convert__VecListTwoQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoQHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst2 */, ARM::VST2d32wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst2 */, ARM::VST2d32wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst2 */, ARM::VST2b32wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst2 */, ARM::VST2b32wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst2 */, ARM::VST2q32wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst2 */, ARM::VST2q32wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst2 */, ARM::VST2LNdWB_fixed_Asm_32, Convert__VecListTwoDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoDWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst2 */, ARM::VST2LNdWB_register_Asm_32, Convert__VecListTwoDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoDWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst2 */, ARM::VST2LNqWB_fixed_Asm_32, Convert__VecListTwoQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoQWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst2 */, ARM::VST2LNqWB_register_Asm_32, Convert__VecListTwoQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoQWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst2 */, ARM::VST2d8wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst2 */, ARM::VST2d8wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst2 */, ARM::VST2b8wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst2 */, ARM::VST2b8wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst2 */, ARM::VST2q8wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst2 */, ARM::VST2q8wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst2 */, ARM::VST2LNdWB_fixed_Asm_8, Convert__VecListTwoDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListTwoDByteIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst2 */, ARM::VST2LNdWB_register_Asm_8, Convert__VecListTwoDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListTwoDByteIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst3 */, ARM::VST3dAsm_16, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 2050 /* vst3 */, ARM::VST3LNdAsm_16, Convert__VecListThreeDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeDHWordIndexed, MCK_AlignedMemory }, 0},
  { 2050 /* vst3 */, ARM::VST3qAsm_16, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQ, MCK_AlignedMemory }, 0},
  { 2050 /* vst3 */, ARM::VST3LNqAsm_16, Convert__VecListThreeQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQHWordIndexed, MCK_AlignedMemory }, 0},
  { 2050 /* vst3 */, ARM::VST3dAsm_32, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 2050 /* vst3 */, ARM::VST3LNdAsm_32, Convert__VecListThreeDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeDWordIndexed, MCK_AlignedMemory }, 0},
  { 2050 /* vst3 */, ARM::VST3qAsm_32, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQ, MCK_AlignedMemory }, 0},
  { 2050 /* vst3 */, ARM::VST3LNqAsm_32, Convert__VecListThreeQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQWordIndexed, MCK_AlignedMemory }, 0},
  { 2050 /* vst3 */, ARM::VST3dAsm_8, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 2050 /* vst3 */, ARM::VST3LNdAsm_8, Convert__VecListThreeDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeDByteIndexed, MCK_AlignedMemory }, 0},
  { 2050 /* vst3 */, ARM::VST3qAsm_8, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeQ, MCK_AlignedMemory }, 0},
  { 2050 /* vst3 */, ARM::VST3dWB_fixed_Asm_16, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst3 */, ARM::VST3dWB_register_Asm_16, Convert__VecListThreeD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst3 */, ARM::VST3LNdWB_fixed_Asm_16, Convert__VecListThreeDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeDHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst3 */, ARM::VST3LNdWB_register_Asm_16, Convert__VecListThreeDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeDHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst3 */, ARM::VST3qWB_fixed_Asm_16, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst3 */, ARM::VST3qWB_register_Asm_16, Convert__VecListThreeQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst3 */, ARM::VST3LNqWB_fixed_Asm_16, Convert__VecListThreeQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst3 */, ARM::VST3LNqWB_register_Asm_16, Convert__VecListThreeQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst3 */, ARM::VST3dWB_fixed_Asm_32, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst3 */, ARM::VST3dWB_register_Asm_32, Convert__VecListThreeD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst3 */, ARM::VST3LNdWB_fixed_Asm_32, Convert__VecListThreeDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeDWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst3 */, ARM::VST3LNdWB_register_Asm_32, Convert__VecListThreeDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeDWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst3 */, ARM::VST3qWB_fixed_Asm_32, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst3 */, ARM::VST3qWB_register_Asm_32, Convert__VecListThreeQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst3 */, ARM::VST3LNqWB_fixed_Asm_32, Convert__VecListThreeQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst3 */, ARM::VST3LNqWB_register_Asm_32, Convert__VecListThreeQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst3 */, ARM::VST3dWB_fixed_Asm_8, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst3 */, ARM::VST3dWB_register_Asm_8, Convert__VecListThreeD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst3 */, ARM::VST3LNdWB_fixed_Asm_8, Convert__VecListThreeDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeDByteIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst3 */, ARM::VST3LNdWB_register_Asm_8, Convert__VecListThreeDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeDByteIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst3 */, ARM::VST3qWB_fixed_Asm_8, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst3 */, ARM::VST3qWB_register_Asm_8, Convert__VecListThreeQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst3 */, ARM::VST3d16, Convert__AlignedMemory2_7__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2050 /* vst3 */, ARM::VST3q16, Convert__AlignedMemory2_7__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2050 /* vst3 */, ARM::VST3d32, Convert__AlignedMemory2_7__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2050 /* vst3 */, ARM::VST3q32, Convert__AlignedMemory2_7__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2050 /* vst3 */, ARM::VST3d8, Convert__AlignedMemory2_7__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2050 /* vst3 */, ARM::VST3q8, Convert__AlignedMemory2_7__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2050 /* vst3 */, ARM::VST3d16_UPD, Convert__AlignedMemory1_7__Tie0__Imm1_8__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2050 /* vst3 */, ARM::VST3q16_UPD, Convert__AlignedMemory1_7__Tie0__Imm1_8__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2050 /* vst3 */, ARM::VST3d32_UPD, Convert__AlignedMemory1_7__Tie0__Imm1_8__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2050 /* vst3 */, ARM::VST3q32_UPD, Convert__AlignedMemory1_7__Tie0__Imm1_8__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2050 /* vst3 */, ARM::VST3d8_UPD, Convert__AlignedMemory1_7__Tie0__Imm1_8__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2050 /* vst3 */, ARM::VST3q8_UPD, Convert__AlignedMemory1_7__Tie0__Imm1_8__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2055 /* vst4 */, ARM::VST4dAsm_16, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 2055 /* vst4 */, ARM::VST4LNdAsm_16, Convert__VecListFourDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourDHWordIndexed, MCK_AlignedMemory }, 0},
  { 2055 /* vst4 */, ARM::VST4qAsm_16, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQ, MCK_AlignedMemory }, 0},
  { 2055 /* vst4 */, ARM::VST4LNqAsm_16, Convert__VecListFourQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQHWordIndexed, MCK_AlignedMemory }, 0},
  { 2055 /* vst4 */, ARM::VST4dAsm_32, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 2055 /* vst4 */, ARM::VST4LNdAsm_32, Convert__VecListFourDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourDWordIndexed, MCK_AlignedMemory }, 0},
  { 2055 /* vst4 */, ARM::VST4qAsm_32, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQ, MCK_AlignedMemory }, 0},
  { 2055 /* vst4 */, ARM::VST4LNqAsm_32, Convert__VecListFourQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQWordIndexed, MCK_AlignedMemory }, 0},
  { 2055 /* vst4 */, ARM::VST4dAsm_8, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 2055 /* vst4 */, ARM::VST4LNdAsm_8, Convert__VecListFourDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourDByteIndexed, MCK_AlignedMemory }, 0},
  { 2055 /* vst4 */, ARM::VST4qAsm_8, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourQ, MCK_AlignedMemory }, 0},
  { 2055 /* vst4 */, ARM::VST4dWB_fixed_Asm_16, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2055 /* vst4 */, ARM::VST4dWB_register_Asm_16, Convert__VecListFourD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2055 /* vst4 */, ARM::VST4LNdWB_fixed_Asm_16, Convert__VecListFourDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourDHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2055 /* vst4 */, ARM::VST4LNdWB_register_Asm_16, Convert__VecListFourDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourDHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2055 /* vst4 */, ARM::VST4qWB_fixed_Asm_16, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2055 /* vst4 */, ARM::VST4qWB_register_Asm_16, Convert__VecListFourQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2055 /* vst4 */, ARM::VST4LNqWB_fixed_Asm_16, Convert__VecListFourQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2055 /* vst4 */, ARM::VST4LNqWB_register_Asm_16, Convert__VecListFourQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2055 /* vst4 */, ARM::VST4dWB_fixed_Asm_32, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2055 /* vst4 */, ARM::VST4dWB_register_Asm_32, Convert__VecListFourD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2055 /* vst4 */, ARM::VST4LNdWB_fixed_Asm_32, Convert__VecListFourDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourDWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2055 /* vst4 */, ARM::VST4LNdWB_register_Asm_32, Convert__VecListFourDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourDWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2055 /* vst4 */, ARM::VST4qWB_fixed_Asm_32, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2055 /* vst4 */, ARM::VST4qWB_register_Asm_32, Convert__VecListFourQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2055 /* vst4 */, ARM::VST4LNqWB_fixed_Asm_32, Convert__VecListFourQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2055 /* vst4 */, ARM::VST4LNqWB_register_Asm_32, Convert__VecListFourQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2055 /* vst4 */, ARM::VST4dWB_fixed_Asm_8, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2055 /* vst4 */, ARM::VST4dWB_register_Asm_8, Convert__VecListFourD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2055 /* vst4 */, ARM::VST4LNdWB_fixed_Asm_8, Convert__VecListFourDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourDByteIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2055 /* vst4 */, ARM::VST4LNdWB_register_Asm_8, Convert__VecListFourDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourDByteIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2055 /* vst4 */, ARM::VST4qWB_fixed_Asm_8, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2055 /* vst4 */, ARM::VST4qWB_register_Asm_8, Convert__VecListFourQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2055 /* vst4 */, ARM::VST4d16, Convert__AlignedMemory2_8__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2055 /* vst4 */, ARM::VST4q16, Convert__AlignedMemory2_8__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2055 /* vst4 */, ARM::VST4d32, Convert__AlignedMemory2_8__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2055 /* vst4 */, ARM::VST4q32, Convert__AlignedMemory2_8__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2055 /* vst4 */, ARM::VST4d8, Convert__AlignedMemory2_8__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2055 /* vst4 */, ARM::VST4q8, Convert__AlignedMemory2_8__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2055 /* vst4 */, ARM::VST4d16_UPD, Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2055 /* vst4 */, ARM::VST4q16_UPD, Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2055 /* vst4 */, ARM::VST4d32_UPD, Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2055 /* vst4 */, ARM::VST4q32_UPD, Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2055 /* vst4 */, ARM::VST4d8_UPD, Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2055 /* vst4 */, ARM::VST4q8_UPD, Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2060 /* vstmdb */, ARM::VSTMDDB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__DPRRegList1_3, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_DPRRegList }, 0},
  { 2060 /* vstmdb */, ARM::VSTMSDB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__SPRRegList1_3, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_SPRRegList }, 0},
  { 2067 /* vstmia */, ARM::VSTMDIA, Convert__Reg1_1__CondCode2_0__DPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_DPRRegList }, 0},
  { 2067 /* vstmia */, ARM::VSTMSIA, Convert__Reg1_1__CondCode2_0__SPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_SPRRegList }, 0},
  { 2067 /* vstmia */, ARM::VSTMDIA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__DPRRegList1_3, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_DPRRegList }, 0},
  { 2067 /* vstmia */, ARM::VSTMSIA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__SPRRegList1_3, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_SPRRegList }, 0},
  { 2074 /* vstr */, ARM::VSTRS, Convert__Reg1_1__AddrMode52_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_SPR, MCK_AddrMode5 }, 0},
  { 2074 /* vstr */, ARM::VSTRD, Convert__Reg1_1__AddrMode52_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_DPR, MCK_AddrMode5 }, 0},
  { 2074 /* vstr */, ARM::VSTRS, Convert__Reg1_2__AddrMode52_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_32, MCK_SPR, MCK_AddrMode5 }, 0},
  { 2074 /* vstr */, ARM::VSTRD, Convert__Reg1_2__AddrMode52_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_AddrMode5 }, 0},
  { 2079 /* vsub */, ARM::VSUBS, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 2079 /* vsub */, ARM::VSUBfd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 2079 /* vsub */, ARM::VSUBfq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 2079 /* vsub */, ARM::VSUBD, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR }, 0},
  { 2079 /* vsub */, ARM::VSUBv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR }, 0},
  { 2079 /* vsub */, ARM::VSUBv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR }, 0},
  { 2079 /* vsub */, ARM::VSUBv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR }, 0},
  { 2079 /* vsub */, ARM::VSUBv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR }, 0},
  { 2079 /* vsub */, ARM::VSUBv1i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_DPR }, 0},
  { 2079 /* vsub */, ARM::VSUBv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_QPR, MCK_QPR }, 0},
  { 2079 /* vsub */, ARM::VSUBv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR }, 0},
  { 2079 /* vsub */, ARM::VSUBv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR }, 0},
  { 2079 /* vsub */, ARM::VSUBS, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 2079 /* vsub */, ARM::VSUBfd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2079 /* vsub */, ARM::VSUBfq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2079 /* vsub */, ARM::VSUBD, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2079 /* vsub */, ARM::VSUBv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2079 /* vsub */, ARM::VSUBv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2079 /* vsub */, ARM::VSUBv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2079 /* vsub */, ARM::VSUBv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2079 /* vsub */, ARM::VSUBv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2079 /* vsub */, ARM::VSUBv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2079 /* vsub */, ARM::VSUBv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2079 /* vsub */, ARM::VSUBv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2084 /* vsubhn */, ARM::VSUBHNv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 2084 /* vsubhn */, ARM::VSUBHNv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 2084 /* vsubhn */, ARM::VSUBHNv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 2091 /* vsubl */, ARM::VSUBLsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 2091 /* vsubl */, ARM::VSUBLsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 2091 /* vsubl */, ARM::VSUBLsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 2091 /* vsubl */, ARM::VSUBLuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 2091 /* vsubl */, ARM::VSUBLuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 2091 /* vsubl */, ARM::VSUBLuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 2097 /* vsubw */, ARM::VSUBWsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 2097 /* vsubw */, ARM::VSUBWsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 2097 /* vsubw */, ARM::VSUBWsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 2097 /* vsubw */, ARM::VSUBWuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 2097 /* vsubw */, ARM::VSUBWuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 2097 /* vsubw */, ARM::VSUBWuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 2103 /* vswp */, ARM::VSWPd, Convert__Reg1_1__Reg1_2__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR }, 0},
  { 2103 /* vswp */, ARM::VSWPq, Convert__Reg1_1__Reg1_2__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR }, 0},
  { 2103 /* vswp */, ARM::VSWPd, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR }, 0},
  { 2103 /* vswp */, ARM::VSWPq, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR }, 0},
  { 2103 /* vswp */, ARM::VSWPd, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR }, 0},
  { 2103 /* vswp */, ARM::VSWPq, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR }, 0},
  { 2103 /* vswp */, ARM::VSWPd, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR }, 0},
  { 2103 /* vswp */, ARM::VSWPq, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR }, 0},
  { 2103 /* vswp */, ARM::VSWPd, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 2103 /* vswp */, ARM::VSWPq, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 2108 /* vtbl */, ARM::VTBL2, Convert__Reg1_2__VecListDPair1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_VecListDPair, MCK_DPR }, 0},
  { 2108 /* vtbl */, ARM::VTBL4, Convert__Reg1_2__VecListFourD1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_VecListFourD, MCK_DPR }, 0},
  { 2108 /* vtbl */, ARM::VTBL1, Convert__Reg1_2__VecListOneD1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_VecListOneD, MCK_DPR }, 0},
  { 2108 /* vtbl */, ARM::VTBL3, Convert__Reg1_2__VecListThreeD1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_VecListThreeD, MCK_DPR }, 0},
  { 2113 /* vtbx */, ARM::VTBX2, Convert__Reg1_2__Tie0__VecListDPair1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_VecListDPair, MCK_DPR }, 0},
  { 2113 /* vtbx */, ARM::VTBX4, Convert__Reg1_2__Tie0__VecListFourD1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_VecListFourD, MCK_DPR }, 0},
  { 2113 /* vtbx */, ARM::VTBX1, Convert__Reg1_2__Tie0__VecListOneD1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_VecListOneD, MCK_DPR }, 0},
  { 2113 /* vtbx */, ARM::VTBX3, Convert__Reg1_2__Tie0__VecListThreeD1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_VecListThreeD, MCK_DPR }, 0},
  { 2118 /* vtrn */, ARM::VTRNd16, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR }, 0},
  { 2118 /* vtrn */, ARM::VTRNq16, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR }, 0},
  { 2118 /* vtrn */, ARM::VTRNd32, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR }, 0},
  { 2118 /* vtrn */, ARM::VTRNq32, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR }, 0},
  { 2118 /* vtrn */, ARM::VTRNd8, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 2118 /* vtrn */, ARM::VTRNq8, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 2123 /* vtst */, ARM::VTSTv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2123 /* vtst */, ARM::VTSTv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2123 /* vtst */, ARM::VTSTv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2123 /* vtst */, ARM::VTSTv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2123 /* vtst */, ARM::VTSTv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2123 /* vtst */, ARM::VTSTv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2128 /* vuzp */, ARM::VUZPd16, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR }, 0},
  { 2128 /* vuzp */, ARM::VUZPq16, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR }, 0},
  { 2128 /* vuzp */, ARM::VTRNd32, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR }, 0},
  { 2128 /* vuzp */, ARM::VUZPq32, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR }, 0},
  { 2128 /* vuzp */, ARM::VUZPd8, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 2128 /* vuzp */, ARM::VUZPq8, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 2133 /* vzip */, ARM::VZIPd16, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR }, 0},
  { 2133 /* vzip */, ARM::VZIPq16, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR }, 0},
  { 2133 /* vzip */, ARM::VTRNd32, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR }, 0},
  { 2133 /* vzip */, ARM::VZIPq32, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR }, 0},
  { 2133 /* vzip */, ARM::VZIPd8, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 2133 /* vzip */, ARM::VZIPq8, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 2138 /* wfe */, ARM::WFE, Convert__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode }, 0},
  { 2138 /* wfe */, ARM::tWFE, Convert__CondCode2_0, Feature_IsThumb, { MCK_CondCode }, 0},
  { 2138 /* wfe */, ARM::t2WFE, Convert__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w }, 0},
  { 2142 /* wfi */, ARM::WFI, Convert__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode }, 0},
  { 2142 /* wfi */, ARM::tWFI, Convert__CondCode2_0, Feature_IsThumb, { MCK_CondCode }, 0},
  { 2142 /* wfi */, ARM::t2WFI, Convert__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w }, 0},
  { 2146 /* yield */, ARM::YIELD, Convert__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode }, 0},
  { 2146 /* yield */, ARM::tYIELD, Convert__CondCode2_0, Feature_IsThumb, { MCK_CondCode }, 0},
  { 2146 /* yield */, ARM::t2YIELD, Convert__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w }, 0},
};

const char *const MatchEntry::MnemonicTable =
    "\003adc\003add\004addw\003adr\003and\003asr\001b\003bfc\003bfi\003bic\004"
    "bkpt\002bl\003blx\002bx\003bxj\004cbnz\003cbz\003cdp\004cdp2\005clrex\003"
    "clz\003cmn\003cmp\003cps\003dbg\003dmb\003dsb\003eor\005faddd\005fadds\006"
    "fcmpzd\006fcmpzs\005fmdhr\005fmdlr\006fmstat\005fsubd\005fsubs\003isb\002"
    "it\003ldc\004ldc2\005ldc2l\004ldcl\003ldm\005ldmda\005ldmdb\005ldmib\003"
    "ldr\004ldrb\005ldrbt\004ldrd\005ldrex\006ldrexb\006ldrexd\006ldrexh\004"
    "ldrh\005ldrht\005ldrsb\006ldrsbt\005ldrsh\006ldrsht\004ldrt\003lsl\003l"
    "sr\003mcr\004mcr2\004mcrr\005mcrr2\003mla\003mls\003mov\004movs\004movt"
    "\004movw\003mrc\004mrc2\004mrrc\005mrrc2\003mrs\003msr\003mul\003mvn\003"
    "neg\003nop\003orn\003orr\005pkhbt\005pkhtb\003pld\004pldw\003pli\003pop"
    "\004push\004qadd\006qadd16\005qadd8\004qasx\005qdadd\005qdsub\004qsax\004"
    "qsub\006qsub16\005qsub8\004rbit\003rev\005rev16\005revsh\005rfeda\005rf"
    "edb\005rfeia\005rfeib\003ror\003rrx\003rsb\003rsc\006sadd16\005sadd8\004"
    "sasx\003sbc\004sbfx\004sdiv\003sel\006setend\003sev\007shadd16\006shadd"
    "8\005shasx\005shsax\007shsub16\006shsub8\003smc\006smlabb\006smlabt\005"
    "smlad\006smladx\005smlal\007smlalbb\007smlalbt\006smlald\007smlaldx\007"
    "smlaltb\007smlaltt\006smlatb\006smlatt\006smlawb\006smlawt\005smlsd\006"
    "smlsdx\006smlsld\007smlsldx\005smmla\006smmlar\005smmls\006smmlsr\005sm"
    "mul\006smmulr\005smuad\006smuadx\006smulbb\006smulbt\005smull\006smultb"
    "\006smultt\006smulwb\006smulwt\005smusd\006smusdx\005srsda\005srsdb\005"
    "srsia\005srsib\004ssat\006ssat16\004ssax\006ssub16\005ssub8\003stc\004s"
    "tc2\005stc2l\004stcl\003stm\005stmda\005stmdb\005stmib\003str\004strb\005"
    "strbt\004strd\005strex\006strexb\006strexd\006strexh\004strh\005strht\004"
    "strt\003sub\004subw\003svc\003swp\004swpb\005sxtab\007sxtab16\005sxtah\004"
    "sxtb\006sxtb16\004sxth\003tbb\003tbh\003teq\004trap\003tst\006uadd16\005"
    "uadd8\004uasx\004ubfx\004udiv\007uhadd16\006uhadd8\005uhasx\005uhsax\007"
    "uhsub16\006uhsub8\005umaal\005umlal\005umull\007uqadd16\006uqadd8\005uq"
    "asx\005uqsax\007uqsub16\006uqsub8\005usad8\006usada8\004usat\006usat16\004"
    "usax\006usub16\005usub8\005uxtab\007uxtab16\005uxtah\004uxtb\006uxtb16\004"
    "uxth\004vaba\005vabal\004vabd\005vabdl\004vabs\005vacge\005vacgt\004vad"
    "d\006vaddhn\005vaddl\005vaddw\004vand\004vbic\004vbif\004vbit\004vbsl\004"
    "vceq\004vcge\004vcgt\004vcle\004vcls\004vclt\004vclz\004vcmp\005vcmpe\004"
    "vcnt\004vcvt\005vcvtb\005vcvtr\005vcvtt\004vdiv\004vdup\004veor\004vext"
    "\004vfma\004vfms\005vfnma\005vfnms\005vhadd\005vhsub\004vld1\004vld2\004"
    "vld3\004vld4\006vldmdb\006vldmia\004vldr\004vmax\004vmin\004vmla\005vml"
    "al\004vmls\005vmlsl\004vmov\005vmovl\005vmovn\004vmrs\004vmsr\004vmul\005"
    "vmull\004vmvn\004vneg\005vnmla\005vnmls\005vnmul\004vorn\004vorr\006vpa"
    "dal\005vpadd\006vpaddl\005vpmax\005vpmin\004vpop\005vpush\005vqabs\005v"
    "qadd\007vqdmlal\007vqdmlsl\007vqdmulh\007vqdmull\006vqmovn\007vqmovun\005"
    "vqneg\010vqrdmulh\006vqrshl\007vqrshrn\010vqrshrun\005vqshl\006vqshlu\006"
    "vqshrn\007vqshrun\005vqsub\007vraddhn\006vrecpe\006vrecps\006vrev16\006"
    "vrev32\006vrev64\006vrhadd\005vrshl\005vrshr\006vrshrn\007vrsqrte\007vr"
    "sqrts\005vrsra\007vrsubhn\004vshl\005vshll\004vshr\005vshrn\004vsli\005"
    "vsqrt\004vsra\004vsri\004vst1\004vst2\004vst3\004vst4\006vstmdb\006vstm"
    "ia\004vstr\004vsub\006vsubhn\005vsubl\005vsubw\004vswp\004vtbl\004vtbx\004"
    "vtrn\004vtst\004vuzp\004vzip\003wfe\003wfi\005yield";

bool ARMAsmParser::
MnemonicIsValid(StringRef Mnemonic) {
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(MatchTable, MatchTable+2994, Mnemonic, LessOpcode());
  return MnemonicRange.first != MnemonicRange.second;
}

unsigned ARMAsmParser::
MatchInstructionImpl(const SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                     MCInst &Inst, unsigned &ErrorInfo,
                     unsigned VariantID) {
  // Get the current feature set.
  unsigned AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((ARMOperand*)Operands[0])->getToken();

  // Process all MnemonicAliases to remap the mnemonic.
  // FIXME : Add an entry in AsmParserVariant to check this.
  if (!VariantID)
    applyMnemonicAliases(Mnemonic, AvailableFeatures);

  // Eliminate obvious mismatches.
  if (Operands.size() > 19) {
    ErrorInfo = 19;
    return Match_InvalidOperand;
  }

  // Some state to try to produce better error messages.
  bool HadMatchOtherThanFeatures = false;
  bool HadMatchOtherThanPredicate = false;
  unsigned RetCode = Match_InvalidOperand;
  // Set ErrorInfo to the operand that mismatches if it is
  // wrong for all instances of the instruction.
  ErrorInfo = ~0U;
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(MatchTable, MatchTable+2994, Mnemonic, LessOpcode());

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    if (VariantID != it->AsmVariantID) continue;
    bool OperandsValid = true;
    for (unsigned i = 0; i != 18; ++i) {
      if (i + 1 >= Operands.size()) {
        OperandsValid = (it->Classes[i] == InvalidMatchClass);
        break;
      }
      if (validateOperandClass(Operands[i+1], (MatchClassKind)it->Classes[i]))
        continue;
      // If this operand is broken for all of the instances of this
      // mnemonic, keep track of it so we can report loc info.
      if (it == MnemonicRange.first || ErrorInfo <= i+1)
        ErrorInfo = i+1;
      // Otherwise, just reject this instance of the mnemonic.
      OperandsValid = false;
      break;
    }

    if (!OperandsValid) continue;
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      HadMatchOtherThanFeatures = true;
      continue;
    }

    // We have selected a definite instruction, convert the parsed
    // operands into the appropriate MCInst.
    if (!ConvertToMCInst(it->ConvertFn, Inst,
                         it->Opcode, Operands))
      return Match_ConversionFail;

    // We have a potential match. Check the target predicate to
    // handle any context sensitive constraints.
    unsigned MatchResult;
    if ((MatchResult = checkTargetMatchPredicate(Inst)) != Match_Success) {
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    return Match_Success;
  }

  // Okay, we had no match.  Try to return a useful error code.
  if (HadMatchOtherThanPredicate || !HadMatchOtherThanFeatures) return RetCode;
  return Match_MissingFeature;
}

namespace {
  struct OperandMatchEntry {
    static const char *const MnemonicTable;
    uint32_t OperandMask;
    uint32_t Mnemonic;
    uint32_t RequiredFeatures;
    uint8_t Class;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcodeOperand {
    bool operator()(const OperandMatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic()  < RHS;
    }
    bool operator()(StringRef LHS, const OperandMatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const OperandMatchEntry &LHS, const OperandMatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const OperandMatchEntry OperandMatchTable[694] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { 4 /* 2 */, 0 /* bfc */, Feature_IsThumb2, MCK_Bitfield },
  { 4 /* 2 */, 0 /* bfc */, Feature_IsARM|Feature_HasV6T2, MCK_Bitfield },
  { 8 /* 3 */, 4 /* bfi */, Feature_IsThumb2, MCK_Bitfield },
  { 8 /* 3 */, 4 /* bfi */, Feature_IsARM|Feature_HasV6T2, MCK_Bitfield },
  { 28 /* 2, 3, 4 */, 8 /* cdp */, Feature_IsThumb2, MCK_CoprocReg },
  { 1 /* 0 */, 8 /* cdp */, Feature_IsThumb2, MCK_CoprocNum },
  { 56 /* 3, 4, 5 */, 8 /* cdp */, Feature_IsARM, MCK_CoprocReg },
  { 2 /* 1 */, 8 /* cdp */, Feature_IsARM, MCK_CoprocNum },
  { 28 /* 2, 3, 4 */, 12 /* cdp2 */, Feature_IsARM, MCK_CoprocReg },
  { 1 /* 0 */, 12 /* cdp2 */, Feature_IsARM, MCK_CoprocNum },
  { 28 /* 2, 3, 4 */, 12 /* cdp2 */, Feature_IsThumb2, MCK_CoprocReg },
  { 1 /* 0 */, 12 /* cdp2 */, Feature_IsThumb2, MCK_CoprocNum },
  { 2 /* 1 */, 17 /* cps */, Feature_IsARM, MCK_ProcIFlags },
  { 2 /* 1 */, 17 /* cps */, Feature_IsThumb, MCK_ProcIFlags },
  { 4 /* 2 */, 17 /* cps */, Feature_IsThumb2, MCK_ProcIFlags },
  { 2 /* 1 */, 17 /* cps */, Feature_IsARM, MCK_ProcIFlags },
  { 4 /* 2 */, 17 /* cps */, Feature_IsThumb2, MCK_ProcIFlags },
  { 1 /* 0 */, 21 /* dmb */, Feature_IsARM|Feature_HasDB, MCK_MemBarrierOpt },
  { 1 /* 0 */, 21 /* dmb */, Feature_IsThumb|Feature_HasDB, MCK_MemBarrierOpt },
  { 1 /* 0 */, 25 /* dsb */, Feature_IsARM|Feature_HasDB, MCK_MemBarrierOpt },
  { 1 /* 0 */, 25 /* dsb */, Feature_IsThumb|Feature_HasDB, MCK_MemBarrierOpt },
  { 1 /* 0 */, 29 /* isb */, Feature_IsARM|Feature_HasDB, MCK_MemBarrierOpt },
  { 1 /* 0 */, 29 /* isb */, Feature_IsThumb2|Feature_HasDB, MCK_MemBarrierOpt },
  { 2 /* 1 */, 33 /* it */, Feature_IsARM, MCK_ITCondCode },
  { 2 /* 1 */, 33 /* it */, Feature_IsThumb2, MCK_ITCondCode },
  { 4 /* 2 */, 36 /* ldc */, Feature_IsARM, MCK_CoprocReg },
  { 2 /* 1 */, 36 /* ldc */, Feature_IsARM, MCK_CoprocNum },
  { 4 /* 2 */, 36 /* ldc */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 36 /* ldc */, Feature_IsThumb2, MCK_CoprocNum },
  { 4 /* 2 */, 36 /* ldc */, Feature_IsARM, MCK_CoprocReg },
  { 2 /* 1 */, 36 /* ldc */, Feature_IsARM, MCK_CoprocNum },
  { 4 /* 2 */, 36 /* ldc */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 36 /* ldc */, Feature_IsThumb2, MCK_CoprocNum },
  { 4 /* 2 */, 36 /* ldc */, Feature_IsARM, MCK_CoprocReg },
  { 2 /* 1 */, 36 /* ldc */, Feature_IsARM, MCK_CoprocNum },
  { 16 /* 4 */, 36 /* ldc */, Feature_IsARM, MCK_CoprocOption },
  { 4 /* 2 */, 36 /* ldc */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 36 /* ldc */, Feature_IsThumb2, MCK_CoprocNum },
  { 16 /* 4 */, 36 /* ldc */, Feature_IsThumb2, MCK_CoprocOption },
  { 4 /* 2 */, 36 /* ldc */, Feature_IsARM, MCK_CoprocReg },
  { 2 /* 1 */, 36 /* ldc */, Feature_IsARM, MCK_CoprocNum },
  { 4 /* 2 */, 36 /* ldc */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 36 /* ldc */, Feature_IsThumb2, MCK_CoprocNum },
  { 2 /* 1 */, 40 /* ldc2 */, Feature_IsARM, MCK_CoprocReg },
  { 1 /* 0 */, 40 /* ldc2 */, Feature_IsARM, MCK_CoprocNum },
  { 4 /* 2 */, 40 /* ldc2 */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 40 /* ldc2 */, Feature_IsThumb2, MCK_CoprocNum },
  { 2 /* 1 */, 40 /* ldc2 */, Feature_IsARM, MCK_CoprocReg },
  { 1 /* 0 */, 40 /* ldc2 */, Feature_IsARM, MCK_CoprocNum },
  { 2 /* 1 */, 40 /* ldc2 */, Feature_IsARM, MCK_CoprocReg },
  { 1 /* 0 */, 40 /* ldc2 */, Feature_IsARM, MCK_CoprocNum },
  { 8 /* 3 */, 40 /* ldc2 */, Feature_IsARM, MCK_CoprocOption },
  { 2 /* 1 */, 40 /* ldc2 */, Feature_IsARM, MCK_CoprocReg },
  { 1 /* 0 */, 40 /* ldc2 */, Feature_IsARM, MCK_CoprocNum },
  { 4 /* 2 */, 40 /* ldc2 */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 40 /* ldc2 */, Feature_IsThumb2, MCK_CoprocNum },
  { 4 /* 2 */, 40 /* ldc2 */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 40 /* ldc2 */, Feature_IsThumb2, MCK_CoprocNum },
  { 16 /* 4 */, 40 /* ldc2 */, Feature_IsThumb2, MCK_CoprocOption },
  { 4 /* 2 */, 40 /* ldc2 */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 40 /* ldc2 */, Feature_IsThumb2, MCK_CoprocNum },
  { 2 /* 1 */, 45 /* ldc2l */, Feature_IsARM, MCK_CoprocReg },
  { 1 /* 0 */, 45 /* ldc2l */, Feature_IsARM, MCK_CoprocNum },
  { 4 /* 2 */, 45 /* ldc2l */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 45 /* ldc2l */, Feature_IsThumb2, MCK_CoprocNum },
  { 2 /* 1 */, 45 /* ldc2l */, Feature_IsARM, MCK_CoprocReg },
  { 1 /* 0 */, 45 /* ldc2l */, Feature_IsARM, MCK_CoprocNum },
  { 2 /* 1 */, 45 /* ldc2l */, Feature_IsARM, MCK_CoprocReg },
  { 1 /* 0 */, 45 /* ldc2l */, Feature_IsARM, MCK_CoprocNum },
  { 8 /* 3 */, 45 /* ldc2l */, Feature_IsARM, MCK_CoprocOption },
  { 2 /* 1 */, 45 /* ldc2l */, Feature_IsARM, MCK_CoprocReg },
  { 1 /* 0 */, 45 /* ldc2l */, Feature_IsARM, MCK_CoprocNum },
  { 4 /* 2 */, 45 /* ldc2l */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 45 /* ldc2l */, Feature_IsThumb2, MCK_CoprocNum },
  { 4 /* 2 */, 45 /* ldc2l */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 45 /* ldc2l */, Feature_IsThumb2, MCK_CoprocNum },
  { 16 /* 4 */, 45 /* ldc2l */, Feature_IsThumb2, MCK_CoprocOption },
  { 4 /* 2 */, 45 /* ldc2l */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 45 /* ldc2l */, Feature_IsThumb2, MCK_CoprocNum },
  { 4 /* 2 */, 51 /* ldcl */, Feature_IsARM, MCK_CoprocReg },
  { 2 /* 1 */, 51 /* ldcl */, Feature_IsARM, MCK_CoprocNum },
  { 4 /* 2 */, 51 /* ldcl */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 51 /* ldcl */, Feature_IsThumb2, MCK_CoprocNum },
  { 4 /* 2 */, 51 /* ldcl */, Feature_IsARM, MCK_CoprocReg },
  { 2 /* 1 */, 51 /* ldcl */, Feature_IsARM, MCK_CoprocNum },
  { 4 /* 2 */, 51 /* ldcl */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 51 /* ldcl */, Feature_IsThumb2, MCK_CoprocNum },
  { 4 /* 2 */, 51 /* ldcl */, Feature_IsARM, MCK_CoprocReg },
  { 2 /* 1 */, 51 /* ldcl */, Feature_IsARM, MCK_CoprocNum },
  { 16 /* 4 */, 51 /* ldcl */, Feature_IsARM, MCK_CoprocOption },
  { 4 /* 2 */, 51 /* ldcl */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 51 /* ldcl */, Feature_IsThumb2, MCK_CoprocNum },
  { 16 /* 4 */, 51 /* ldcl */, Feature_IsThumb2, MCK_CoprocOption },
  { 4 /* 2 */, 51 /* ldcl */, Feature_IsARM, MCK_CoprocReg },
  { 2 /* 1 */, 51 /* ldcl */, Feature_IsARM, MCK_CoprocNum },
  { 4 /* 2 */, 51 /* ldcl */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 51 /* ldcl */, Feature_IsThumb2, MCK_CoprocNum },
  { 8 /* 3 */, 56 /* ldr */, Feature_IsARM, MCK_PostIdxRegShifted },
  { 8 /* 3 */, 60 /* ldrb */, Feature_IsARM, MCK_PostIdxRegShifted },
  { 8 /* 3 */, 65 /* ldrbt */, Feature_IsARM, MCK_PostIdxRegShifted },
  { 16 /* 4 */, 71 /* ldrd */, Feature_IsARM, MCK_AM3Offset },
  { 8 /* 3 */, 76 /* ldrh */, Feature_IsARM, MCK_AM3Offset },
  { 8 /* 3 */, 81 /* ldrht */, Feature_IsARM, MCK_PostIdxReg },
  { 8 /* 3 */, 87 /* ldrsb */, Feature_IsARM, MCK_AM3Offset },
  { 8 /* 3 */, 93 /* ldrsbt */, Feature_IsARM, MCK_PostIdxReg },
  { 8 /* 3 */, 100 /* ldrsh */, Feature_IsARM, MCK_AM3Offset },
  { 8 /* 3 */, 106 /* ldrsht */, Feature_IsARM, MCK_PostIdxReg },
  { 8 /* 3 */, 113 /* ldrt */, Feature_IsARM, MCK_PostIdxRegShifted },
  { 24 /* 3, 4 */, 118 /* mcr */, Feature_IsThumb2, MCK_CoprocReg },
  { 1 /* 0 */, 118 /* mcr */, Feature_IsThumb2, MCK_CoprocNum },
  { 48 /* 4, 5 */, 118 /* mcr */, Feature_IsARM, MCK_CoprocReg },
  { 2 /* 1 */, 118 /* mcr */, Feature_IsARM, MCK_CoprocNum },
  { 24 /* 3, 4 */, 118 /* mcr */, Feature_IsThumb2, MCK_CoprocReg },
  { 1 /* 0 */, 118 /* mcr */, Feature_IsThumb2, MCK_CoprocNum },
  { 48 /* 4, 5 */, 118 /* mcr */, Feature_IsARM, MCK_CoprocReg },
  { 2 /* 1 */, 118 /* mcr */, Feature_IsARM, MCK_CoprocNum },
  { 24 /* 3, 4 */, 122 /* mcr2 */, Feature_IsARM, MCK_CoprocReg },
  { 1 /* 0 */, 122 /* mcr2 */, Feature_IsARM, MCK_CoprocNum },
  { 24 /* 3, 4 */, 122 /* mcr2 */, Feature_IsThumb2, MCK_CoprocReg },
  { 1 /* 0 */, 122 /* mcr2 */, Feature_IsThumb2, MCK_CoprocNum },
  { 24 /* 3, 4 */, 122 /* mcr2 */, Feature_IsARM, MCK_CoprocReg },
  { 1 /* 0 */, 122 /* mcr2 */, Feature_IsARM, MCK_CoprocNum },
  { 24 /* 3, 4 */, 122 /* mcr2 */, Feature_IsThumb2, MCK_CoprocReg },
  { 1 /* 0 */, 122 /* mcr2 */, Feature_IsThumb2, MCK_CoprocNum },
  { 16 /* 4 */, 127 /* mcrr */, Feature_IsThumb2, MCK_CoprocReg },
  { 1 /* 0 */, 127 /* mcrr */, Feature_IsThumb2, MCK_CoprocNum },
  { 32 /* 5 */, 127 /* mcrr */, Feature_IsARM, MCK_CoprocReg },
  { 2 /* 1 */, 127 /* mcrr */, Feature_IsARM, MCK_CoprocNum },
  { 16 /* 4 */, 132 /* mcrr2 */, Feature_IsARM, MCK_CoprocReg },
  { 1 /* 0 */, 132 /* mcrr2 */, Feature_IsARM, MCK_CoprocNum },
  { 16 /* 4 */, 132 /* mcrr2 */, Feature_IsThumb2, MCK_CoprocReg },
  { 1 /* 0 */, 132 /* mcrr2 */, Feature_IsThumb2, MCK_CoprocNum },
  { 24 /* 3, 4 */, 138 /* mrc */, Feature_IsThumb2, MCK_CoprocReg },
  { 1 /* 0 */, 138 /* mrc */, Feature_IsThumb2, MCK_CoprocNum },
  { 48 /* 4, 5 */, 138 /* mrc */, Feature_IsARM, MCK_CoprocReg },
  { 2 /* 1 */, 138 /* mrc */, Feature_IsARM, MCK_CoprocNum },
  { 24 /* 3, 4 */, 138 /* mrc */, Feature_IsThumb2, MCK_CoprocReg },
  { 1 /* 0 */, 138 /* mrc */, Feature_IsThumb2, MCK_CoprocNum },
  { 48 /* 4, 5 */, 138 /* mrc */, Feature_IsARM, MCK_CoprocReg },
  { 2 /* 1 */, 138 /* mrc */, Feature_IsARM, MCK_CoprocNum },
  { 24 /* 3, 4 */, 142 /* mrc2 */, Feature_IsARM, MCK_CoprocReg },
  { 1 /* 0 */, 142 /* mrc2 */, Feature_IsARM, MCK_CoprocNum },
  { 24 /* 3, 4 */, 142 /* mrc2 */, Feature_IsThumb2, MCK_CoprocReg },
  { 1 /* 0 */, 142 /* mrc2 */, Feature_IsThumb2, MCK_CoprocNum },
  { 24 /* 3, 4 */, 142 /* mrc2 */, Feature_IsARM, MCK_CoprocReg },
  { 1 /* 0 */, 142 /* mrc2 */, Feature_IsARM, MCK_CoprocNum },
  { 24 /* 3, 4 */, 142 /* mrc2 */, Feature_IsThumb2, MCK_CoprocReg },
  { 1 /* 0 */, 142 /* mrc2 */, Feature_IsThumb2, MCK_CoprocNum },
  { 16 /* 4 */, 147 /* mrrc */, Feature_IsThumb2, MCK_CoprocReg },
  { 1 /* 0 */, 147 /* mrrc */, Feature_IsThumb2, MCK_CoprocNum },
  { 32 /* 5 */, 147 /* mrrc */, Feature_IsARM, MCK_CoprocReg },
  { 2 /* 1 */, 147 /* mrrc */, Feature_IsARM, MCK_CoprocNum },
  { 16 /* 4 */, 152 /* mrrc2 */, Feature_IsARM, MCK_CoprocReg },
  { 1 /* 0 */, 152 /* mrrc2 */, Feature_IsARM, MCK_CoprocNum },
  { 16 /* 4 */, 152 /* mrrc2 */, Feature_IsThumb2, MCK_CoprocReg },
  { 1 /* 0 */, 152 /* mrrc2 */, Feature_IsThumb2, MCK_CoprocNum },
  { 4 /* 2 */, 158 /* mrs */, Feature_IsThumb2|Feature_IsMClass, MCK_MSRMask },
  { 2 /* 1 */, 162 /* msr */, Feature_IsThumb2|Feature_IsARClass, MCK_MSRMask },
  { 2 /* 1 */, 162 /* msr */, Feature_IsThumb2|Feature_IsMClass, MCK_MSRMask },
  { 2 /* 1 */, 162 /* msr */, Feature_IsARM, MCK_MSRMask },
  { 2 /* 1 */, 162 /* msr */, Feature_IsARM, MCK_MSRMask },
  { 16 /* 4 */, 166 /* pkhbt */, Feature_HasT2ExtractPack|Feature_IsThumb2, MCK_PKHLSLImm },
  { 16 /* 4 */, 166 /* pkhbt */, Feature_IsARM|Feature_HasV6, MCK_PKHLSLImm },
  { 16 /* 4 */, 172 /* pkhtb */, Feature_HasT2ExtractPack|Feature_IsThumb2, MCK_PKHASRImm },
  { 16 /* 4 */, 172 /* pkhtb */, Feature_IsARM|Feature_HasV6, MCK_PKHASRImm },
  { 1 /* 0 */, 178 /* setend */, Feature_IsARM, MCK_SetEndImm },
  { 1 /* 0 */, 178 /* setend */, Feature_IsThumb, MCK_SetEndImm },
  { 16 /* 4 */, 185 /* ssat */, Feature_IsThumb2, MCK_ShifterImm },
  { 16 /* 4 */, 185 /* ssat */, Feature_IsARM, MCK_ShifterImm },
  { 4 /* 2 */, 190 /* stc */, Feature_IsARM, MCK_CoprocReg },
  { 2 /* 1 */, 190 /* stc */, Feature_IsARM, MCK_CoprocNum },
  { 4 /* 2 */, 190 /* stc */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 190 /* stc */, Feature_IsThumb2, MCK_CoprocNum },
  { 4 /* 2 */, 190 /* stc */, Feature_IsARM, MCK_CoprocReg },
  { 2 /* 1 */, 190 /* stc */, Feature_IsARM, MCK_CoprocNum },
  { 4 /* 2 */, 190 /* stc */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 190 /* stc */, Feature_IsThumb2, MCK_CoprocNum },
  { 4 /* 2 */, 190 /* stc */, Feature_IsARM, MCK_CoprocReg },
  { 2 /* 1 */, 190 /* stc */, Feature_IsARM, MCK_CoprocNum },
  { 16 /* 4 */, 190 /* stc */, Feature_IsARM, MCK_CoprocOption },
  { 4 /* 2 */, 190 /* stc */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 190 /* stc */, Feature_IsThumb2, MCK_CoprocNum },
  { 16 /* 4 */, 190 /* stc */, Feature_IsThumb2, MCK_CoprocOption },
  { 4 /* 2 */, 190 /* stc */, Feature_IsARM, MCK_CoprocReg },
  { 2 /* 1 */, 190 /* stc */, Feature_IsARM, MCK_CoprocNum },
  { 4 /* 2 */, 190 /* stc */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 190 /* stc */, Feature_IsThumb2, MCK_CoprocNum },
  { 2 /* 1 */, 194 /* stc2 */, Feature_IsARM, MCK_CoprocReg },
  { 1 /* 0 */, 194 /* stc2 */, Feature_IsARM, MCK_CoprocNum },
  { 4 /* 2 */, 194 /* stc2 */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 194 /* stc2 */, Feature_IsThumb2, MCK_CoprocNum },
  { 2 /* 1 */, 194 /* stc2 */, Feature_IsARM, MCK_CoprocReg },
  { 1 /* 0 */, 194 /* stc2 */, Feature_IsARM, MCK_CoprocNum },
  { 2 /* 1 */, 194 /* stc2 */, Feature_IsARM, MCK_CoprocReg },
  { 1 /* 0 */, 194 /* stc2 */, Feature_IsARM, MCK_CoprocNum },
  { 8 /* 3 */, 194 /* stc2 */, Feature_IsARM, MCK_CoprocOption },
  { 2 /* 1 */, 194 /* stc2 */, Feature_IsARM, MCK_CoprocReg },
  { 1 /* 0 */, 194 /* stc2 */, Feature_IsARM, MCK_CoprocNum },
  { 4 /* 2 */, 194 /* stc2 */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 194 /* stc2 */, Feature_IsThumb2, MCK_CoprocNum },
  { 4 /* 2 */, 194 /* stc2 */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 194 /* stc2 */, Feature_IsThumb2, MCK_CoprocNum },
  { 16 /* 4 */, 194 /* stc2 */, Feature_IsThumb2, MCK_CoprocOption },
  { 4 /* 2 */, 194 /* stc2 */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 194 /* stc2 */, Feature_IsThumb2, MCK_CoprocNum },
  { 2 /* 1 */, 199 /* stc2l */, Feature_IsARM, MCK_CoprocReg },
  { 1 /* 0 */, 199 /* stc2l */, Feature_IsARM, MCK_CoprocNum },
  { 4 /* 2 */, 199 /* stc2l */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 199 /* stc2l */, Feature_IsThumb2, MCK_CoprocNum },
  { 2 /* 1 */, 199 /* stc2l */, Feature_IsARM, MCK_CoprocReg },
  { 1 /* 0 */, 199 /* stc2l */, Feature_IsARM, MCK_CoprocNum },
  { 2 /* 1 */, 199 /* stc2l */, Feature_IsARM, MCK_CoprocReg },
  { 1 /* 0 */, 199 /* stc2l */, Feature_IsARM, MCK_CoprocNum },
  { 8 /* 3 */, 199 /* stc2l */, Feature_IsARM, MCK_CoprocOption },
  { 2 /* 1 */, 199 /* stc2l */, Feature_IsARM, MCK_CoprocReg },
  { 1 /* 0 */, 199 /* stc2l */, Feature_IsARM, MCK_CoprocNum },
  { 4 /* 2 */, 199 /* stc2l */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 199 /* stc2l */, Feature_IsThumb2, MCK_CoprocNum },
  { 4 /* 2 */, 199 /* stc2l */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 199 /* stc2l */, Feature_IsThumb2, MCK_CoprocNum },
  { 16 /* 4 */, 199 /* stc2l */, Feature_IsThumb2, MCK_CoprocOption },
  { 4 /* 2 */, 199 /* stc2l */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 199 /* stc2l */, Feature_IsThumb2, MCK_CoprocNum },
  { 4 /* 2 */, 205 /* stcl */, Feature_IsARM, MCK_CoprocReg },
  { 2 /* 1 */, 205 /* stcl */, Feature_IsARM, MCK_CoprocNum },
  { 4 /* 2 */, 205 /* stcl */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 205 /* stcl */, Feature_IsThumb2, MCK_CoprocNum },
  { 4 /* 2 */, 205 /* stcl */, Feature_IsARM, MCK_CoprocReg },
  { 2 /* 1 */, 205 /* stcl */, Feature_IsARM, MCK_CoprocNum },
  { 4 /* 2 */, 205 /* stcl */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 205 /* stcl */, Feature_IsThumb2, MCK_CoprocNum },
  { 4 /* 2 */, 205 /* stcl */, Feature_IsARM, MCK_CoprocReg },
  { 2 /* 1 */, 205 /* stcl */, Feature_IsARM, MCK_CoprocNum },
  { 16 /* 4 */, 205 /* stcl */, Feature_IsARM, MCK_CoprocOption },
  { 4 /* 2 */, 205 /* stcl */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 205 /* stcl */, Feature_IsThumb2, MCK_CoprocNum },
  { 16 /* 4 */, 205 /* stcl */, Feature_IsThumb2, MCK_CoprocOption },
  { 4 /* 2 */, 205 /* stcl */, Feature_IsARM, MCK_CoprocReg },
  { 2 /* 1 */, 205 /* stcl */, Feature_IsARM, MCK_CoprocNum },
  { 4 /* 2 */, 205 /* stcl */, Feature_IsThumb2, MCK_CoprocReg },
  { 2 /* 1 */, 205 /* stcl */, Feature_IsThumb2, MCK_CoprocNum },
  { 8 /* 3 */, 210 /* str */, Feature_IsARM, MCK_PostIdxRegShifted },
  { 8 /* 3 */, 214 /* strb */, Feature_IsARM, MCK_PostIdxRegShifted },
  { 8 /* 3 */, 219 /* strbt */, Feature_IsARM, MCK_PostIdxRegShifted },
  { 16 /* 4 */, 225 /* strd */, Feature_IsARM, MCK_AM3Offset },
  { 8 /* 3 */, 230 /* strh */, Feature_IsARM, MCK_AM3Offset },
  { 8 /* 3 */, 235 /* strht */, Feature_IsARM, MCK_PostIdxReg },
  { 8 /* 3 */, 241 /* strt */, Feature_IsARM, MCK_PostIdxRegShifted },
  { 16 /* 4 */, 246 /* sxtab */, Feature_HasT2ExtractPack|Feature_IsThumb2, MCK_RotImm },
  { 16 /* 4 */, 246 /* sxtab */, Feature_IsARM|Feature_HasV6, MCK_RotImm },
  { 16 /* 4 */, 252 /* sxtab16 */, Feature_IsThumb2, MCK_RotImm },
  { 16 /* 4 */, 252 /* sxtab16 */, Feature_IsARM|Feature_HasV6, MCK_RotImm },
  { 16 /* 4 */, 260 /* sxtah */, Feature_HasT2ExtractPack|Feature_IsThumb2, MCK_RotImm },
  { 16 /* 4 */, 260 /* sxtah */, Feature_IsARM|Feature_HasV6, MCK_RotImm },
  { 8 /* 3 */, 266 /* sxtb */, Feature_IsThumb2, MCK_RotImm },
  { 8 /* 3 */, 266 /* sxtb */, Feature_IsARM|Feature_HasV6, MCK_RotImm },
  { 16 /* 4 */, 266 /* sxtb */, Feature_IsThumb2, MCK_RotImm },
  { 8 /* 3 */, 271 /* sxtb16 */, Feature_IsThumb2|Feature_HasT2ExtractPack, MCK_RotImm },
  { 8 /* 3 */, 271 /* sxtb16 */, Feature_IsThumb2, MCK_RotImm },
  { 8 /* 3 */, 271 /* sxtb16 */, Feature_IsARM|Feature_HasV6, MCK_RotImm },
  { 8 /* 3 */, 278 /* sxth */, Feature_IsThumb2, MCK_RotImm },
  { 8 /* 3 */, 278 /* sxth */, Feature_IsARM|Feature_HasV6, MCK_RotImm },
  { 16 /* 4 */, 278 /* sxth */, Feature_IsThumb2, MCK_RotImm },
  { 16 /* 4 */, 283 /* usat */, Feature_IsThumb2, MCK_ShifterImm },
  { 16 /* 4 */, 283 /* usat */, Feature_IsARM, MCK_ShifterImm },
  { 16 /* 4 */, 288 /* uxtab */, Feature_HasT2ExtractPack|Feature_IsThumb2, MCK_RotImm },
  { 16 /* 4 */, 288 /* uxtab */, Feature_IsARM|Feature_HasV6, MCK_RotImm },
  { 16 /* 4 */, 294 /* uxtab16 */, Feature_IsThumb2, MCK_RotImm },
  { 16 /* 4 */, 294 /* uxtab16 */, Feature_IsARM|Feature_HasV6, MCK_RotImm },
  { 16 /* 4 */, 302 /* uxtah */, Feature_HasT2ExtractPack|Feature_IsThumb2, MCK_RotImm },
  { 16 /* 4 */, 302 /* uxtah */, Feature_IsARM|Feature_HasV6, MCK_RotImm },
  { 8 /* 3 */, 308 /* uxtb */, Feature_IsThumb2, MCK_RotImm },
  { 8 /* 3 */, 308 /* uxtb */, Feature_IsARM|Feature_HasV6, MCK_RotImm },
  { 16 /* 4 */, 308 /* uxtb */, Feature_IsThumb2, MCK_RotImm },
  { 8 /* 3 */, 313 /* uxtb16 */, Feature_HasT2ExtractPack|Feature_IsThumb2, MCK_RotImm },
  { 8 /* 3 */, 313 /* uxtb16 */, Feature_IsThumb2, MCK_RotImm },
  { 8 /* 3 */, 313 /* uxtb16 */, Feature_IsARM|Feature_HasV6, MCK_RotImm },
  { 8 /* 3 */, 320 /* uxth */, Feature_IsThumb2, MCK_RotImm },
  { 8 /* 3 */, 320 /* uxth */, Feature_IsARM|Feature_HasV6, MCK_RotImm },
  { 16 /* 4 */, 320 /* uxth */, Feature_IsThumb2, MCK_RotImm },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListDPairAllLanes },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneDAllLanes },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneDHWordIndexed },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListDPairAllLanes },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneDAllLanes },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneDWordIndexed },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListDPairAllLanes },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneDAllLanes },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneDByteIndexed },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListDPairAllLanes },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListDPairAllLanes },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneDAllLanes },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneDAllLanes },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneDHWordIndexed },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneDHWordIndexed },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListDPairAllLanes },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListDPairAllLanes },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneDAllLanes },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneDAllLanes },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneDWordIndexed },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneDWordIndexed },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListDPairAllLanes },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListDPairAllLanes },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneDAllLanes },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneDAllLanes },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneDByteIndexed },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListOneDByteIndexed },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 325 /* vld1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairAllLanes },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairSpacedAllLanes },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairSpaced },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListTwoDHWordIndexed },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListTwoQHWordIndexed },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairAllLanes },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairSpacedAllLanes },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairSpaced },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListTwoDWordIndexed },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListTwoQWordIndexed },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairAllLanes },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairSpacedAllLanes },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairSpaced },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListTwoDByteIndexed },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairAllLanes },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairAllLanes },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairSpacedAllLanes },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairSpacedAllLanes },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairSpaced },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairSpaced },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListTwoDHWordIndexed },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListTwoDHWordIndexed },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListTwoQHWordIndexed },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListTwoQHWordIndexed },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairAllLanes },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairAllLanes },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairSpacedAllLanes },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairSpacedAllLanes },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairSpaced },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairSpaced },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListTwoDWordIndexed },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListTwoDWordIndexed },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListTwoQWordIndexed },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListTwoQWordIndexed },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairAllLanes },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairAllLanes },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairSpacedAllLanes },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairSpacedAllLanes },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairSpaced },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListDPairSpaced },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListTwoDByteIndexed },
  { 4 /* 2 */, 330 /* vld2 */, Feature_HasNEON, MCK_VecListTwoDByteIndexed },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeDAllLanes },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeDHWordIndexed },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQAllLanes },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQ },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQHWordIndexed },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeDAllLanes },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeDWordIndexed },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQAllLanes },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQ },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQWordIndexed },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeDAllLanes },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeDByteIndexed },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQAllLanes },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQ },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeDAllLanes },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeDAllLanes },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeDHWordIndexed },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeDHWordIndexed },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQAllLanes },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQAllLanes },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQ },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQ },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQHWordIndexed },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQHWordIndexed },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeDAllLanes },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeDAllLanes },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeDWordIndexed },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeDWordIndexed },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQAllLanes },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQAllLanes },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQ },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQ },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQWordIndexed },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQWordIndexed },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeDAllLanes },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeDAllLanes },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeDByteIndexed },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeDByteIndexed },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQAllLanes },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQAllLanes },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQ },
  { 4 /* 2 */, 335 /* vld3 */, Feature_HasNEON, MCK_VecListThreeQ },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourDAllLanes },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourDHWordIndexed },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQAllLanes },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQ },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQHWordIndexed },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourDAllLanes },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourDWordIndexed },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQAllLanes },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQ },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQWordIndexed },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourDAllLanes },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourDByteIndexed },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQAllLanes },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQ },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourDAllLanes },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourDAllLanes },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourDHWordIndexed },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourDHWordIndexed },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQAllLanes },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQAllLanes },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQ },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQ },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQHWordIndexed },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQHWordIndexed },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourDAllLanes },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourDAllLanes },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourDWordIndexed },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourDWordIndexed },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQAllLanes },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQAllLanes },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQ },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQ },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQWordIndexed },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQWordIndexed },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourDAllLanes },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourDAllLanes },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourDByteIndexed },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourDByteIndexed },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQAllLanes },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQAllLanes },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQ },
  { 4 /* 2 */, 340 /* vld4 */, Feature_HasNEON, MCK_VecListFourQ },
  { 8 /* 3 */, 345 /* vmov */, Feature_HasVFP3, MCK_FPImm },
  { 8 /* 3 */, 345 /* vmov */, Feature_HasNEON, MCK_FPImm },
  { 8 /* 3 */, 345 /* vmov */, Feature_HasNEON, MCK_FPImm },
  { 8 /* 3 */, 345 /* vmov */, Feature_HasVFP3, MCK_FPImm },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListOneDHWordIndexed },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListOneDWordIndexed },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListOneDByteIndexed },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListOneDHWordIndexed },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListOneDHWordIndexed },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListOneDWordIndexed },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListOneDWordIndexed },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListOneD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListOneDByteIndexed },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListOneDByteIndexed },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 350 /* vst1 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListDPairSpaced },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListTwoDHWordIndexed },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListTwoQHWordIndexed },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListDPairSpaced },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListTwoDWordIndexed },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListTwoQWordIndexed },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListDPairSpaced },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListTwoDByteIndexed },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListDPairSpaced },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListDPairSpaced },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListTwoDHWordIndexed },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListTwoDHWordIndexed },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListTwoQHWordIndexed },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListTwoQHWordIndexed },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListDPairSpaced },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListDPairSpaced },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListTwoDWordIndexed },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListTwoDWordIndexed },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListTwoQWordIndexed },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListTwoQWordIndexed },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListDPair },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListDPairSpaced },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListDPairSpaced },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListTwoDByteIndexed },
  { 4 /* 2 */, 355 /* vst2 */, Feature_HasNEON, MCK_VecListTwoDByteIndexed },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeDHWordIndexed },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeQ },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeQHWordIndexed },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeDWordIndexed },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeQ },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeQWordIndexed },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeDByteIndexed },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeQ },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeDHWordIndexed },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeDHWordIndexed },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeQ },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeQ },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeQHWordIndexed },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeQHWordIndexed },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeDWordIndexed },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeDWordIndexed },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeQ },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeQ },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeQWordIndexed },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeQWordIndexed },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeD },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeDByteIndexed },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeDByteIndexed },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeQ },
  { 4 /* 2 */, 360 /* vst3 */, Feature_HasNEON, MCK_VecListThreeQ },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourDHWordIndexed },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourQ },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourQHWordIndexed },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourDWordIndexed },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourQ },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourQWordIndexed },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourDByteIndexed },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourQ },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourDHWordIndexed },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourDHWordIndexed },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourQ },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourQ },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourQHWordIndexed },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourQHWordIndexed },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourDWordIndexed },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourDWordIndexed },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourQ },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourQ },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourQWordIndexed },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourQWordIndexed },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourD },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourDByteIndexed },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourDByteIndexed },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourQ },
  { 4 /* 2 */, 365 /* vst4 */, Feature_HasNEON, MCK_VecListFourQ },
  { 8 /* 3 */, 370 /* vtbl */, Feature_HasNEON, MCK_VecListDPair },
  { 8 /* 3 */, 370 /* vtbl */, Feature_HasNEON, MCK_VecListFourD },
  { 8 /* 3 */, 370 /* vtbl */, Feature_HasNEON, MCK_VecListOneD },
  { 8 /* 3 */, 370 /* vtbl */, Feature_HasNEON, MCK_VecListThreeD },
  { 8 /* 3 */, 375 /* vtbx */, Feature_HasNEON, MCK_VecListDPair },
  { 8 /* 3 */, 375 /* vtbx */, Feature_HasNEON, MCK_VecListFourD },
  { 8 /* 3 */, 375 /* vtbx */, Feature_HasNEON, MCK_VecListOneD },
  { 8 /* 3 */, 375 /* vtbx */, Feature_HasNEON, MCK_VecListThreeD },
};

const char *const OperandMatchEntry::MnemonicTable =
    "\003bfc\003bfi\003cdp\004cdp2\003cps\003dmb\003dsb\003isb\002it\003ldc\004"
    "ldc2\005ldc2l\004ldcl\003ldr\004ldrb\005ldrbt\004ldrd\004ldrh\005ldrht\005"
    "ldrsb\006ldrsbt\005ldrsh\006ldrsht\004ldrt\003mcr\004mcr2\004mcrr\005mc"
    "rr2\003mrc\004mrc2\004mrrc\005mrrc2\003mrs\003msr\005pkhbt\005pkhtb\006"
    "setend\004ssat\003stc\004stc2\005stc2l\004stcl\003str\004strb\005strbt\004"
    "strd\004strh\005strht\004strt\005sxtab\007sxtab16\005sxtah\004sxtb\006s"
    "xtb16\004sxth\004usat\005uxtab\007uxtab16\005uxtah\004uxtb\006uxtb16\004"
    "uxth\004vld1\004vld2\004vld3\004vld4\004vmov\004vst1\004vst2\004vst3\004"
    "vst4\004vtbl\004vtbx";

ARMAsmParser::OperandMatchResultTy ARMAsmParser::
tryCustomParseOperand(SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_AM3Offset:
    return parseAM3Offset(Operands);
  case MCK_Bitfield:
    return parseBitfield(Operands);
  case MCK_CoprocNum:
    return parseCoprocNumOperand(Operands);
  case MCK_CoprocOption:
    return parseCoprocOptionOperand(Operands);
  case MCK_CoprocReg:
    return parseCoprocRegOperand(Operands);
  case MCK_FPImm:
    return parseFPImm(Operands);
  case MCK_MSRMask:
    return parseMSRMaskOperand(Operands);
  case MCK_MemBarrierOpt:
    return parseMemBarrierOptOperand(Operands);
  case MCK_PKHASRImm:
    return parsePKHASRImm(Operands);
  case MCK_PKHLSLImm:
    return parsePKHLSLImm(Operands);
  case MCK_PostIdxReg:
    return parsePostIdxReg(Operands);
  case MCK_PostIdxRegShifted:
    return parsePostIdxReg(Operands);
  case MCK_ProcIFlags:
    return parseProcIFlagsOperand(Operands);
  case MCK_RotImm:
    return parseRotImm(Operands);
  case MCK_SetEndImm:
    return parseSetEndImm(Operands);
  case MCK_ShifterImm:
    return parseShifterImm(Operands);
  case MCK_VecListDPairAllLanes:
    return parseVectorList(Operands);
  case MCK_VecListDPair:
    return parseVectorList(Operands);
  case MCK_VecListDPairSpacedAllLanes:
    return parseVectorList(Operands);
  case MCK_VecListDPairSpaced:
    return parseVectorList(Operands);
  case MCK_VecListFourDAllLanes:
    return parseVectorList(Operands);
  case MCK_VecListFourD:
    return parseVectorList(Operands);
  case MCK_VecListFourDByteIndexed:
    return parseVectorList(Operands);
  case MCK_VecListFourDHWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListFourDWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListFourQAllLanes:
    return parseVectorList(Operands);
  case MCK_VecListFourQ:
    return parseVectorList(Operands);
  case MCK_VecListFourQHWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListFourQWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListOneDAllLanes:
    return parseVectorList(Operands);
  case MCK_VecListOneD:
    return parseVectorList(Operands);
  case MCK_VecListOneDByteIndexed:
    return parseVectorList(Operands);
  case MCK_VecListOneDHWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListOneDWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListThreeDAllLanes:
    return parseVectorList(Operands);
  case MCK_VecListThreeD:
    return parseVectorList(Operands);
  case MCK_VecListThreeDByteIndexed:
    return parseVectorList(Operands);
  case MCK_VecListThreeDHWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListThreeDWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListThreeQAllLanes:
    return parseVectorList(Operands);
  case MCK_VecListThreeQ:
    return parseVectorList(Operands);
  case MCK_VecListThreeQHWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListThreeQWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListTwoDByteIndexed:
    return parseVectorList(Operands);
  case MCK_VecListTwoDHWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListTwoDWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListTwoQHWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListTwoQWordIndexed:
    return parseVectorList(Operands);
  case MCK_ITCondCode:
    return parseITCondCode(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

ARMAsmParser::OperandMatchResultTy ARMAsmParser::
MatchOperandParserImpl(SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                       StringRef Mnemonic) {
  // Get the current feature set.
  unsigned AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size()-1;
  // Search the table.
  std::pair<const OperandMatchEntry*, const OperandMatchEntry*> MnemonicRange =
    std::equal_range(OperandMatchTable, OperandMatchTable+694, Mnemonic,
                     LessOpcodeOperand());

  if (MnemonicRange.first == MnemonicRange.second)
    return MatchOperand_NoMatch;

  for (const OperandMatchEntry *it = MnemonicRange.first,
       *ie = MnemonicRange.second; it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());

    // check if the available features match
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      continue;
    }

    // check if the operand in question has a custom parser.
    if (!(it->OperandMask & (1 << NextOpNum)))
      continue;

    // call custom parse method to handle the operand
    OperandMatchResultTy Result = tryCustomParseOperand(Operands, it->Class);
    if (Result != MatchOperand_NoMatch)
      return Result;
  }

  // Okay, we had no match.
  return MatchOperand_NoMatch;
}

#endif // GET_MATCHER_IMPLEMENTATION

