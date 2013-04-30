//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Pseudo-instruction MC lowering Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

bool ARMAsmPrinter::
emitPseudoExpansionLowering(MCStreamer &OutStreamer,
                            const MachineInstr *MI) {
  switch (MI->getOpcode()) {
    default: return false;
    case ARM::ANDCCri: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::ANDri);
      // Operand: Rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::ANDCCrr: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::ANDrr);
      // Operand: Rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::ANDCCrsi: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::ANDrsi);
      // Operand: Rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: shift
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(6), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::ANDCCrsr: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::ANDrsr);
      // Operand: Rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: shift
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(6), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(7), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::B: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::Bcc);
      // Operand: target
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      TmpInst.addOperand(MCOperand::CreateImm(14));
      TmpInst.addOperand(MCOperand::CreateReg(0));
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::EORCCri: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::EORri);
      // Operand: Rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::EORCCrr: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::EORrr);
      // Operand: Rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::EORCCrsi: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::EORrsi);
      // Operand: Rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: shift
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(6), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::EORCCrsr: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::EORrsr);
      // Operand: Rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: shift
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(6), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(7), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::LDMIA_RET: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::LDMIA_UPD);
      // Operand: wb
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: regs
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      // variable_ops
      for (unsigned i = 5, e = MI->getNumOperands(); i != e; ++i)
        if (lowerOperand(MI->getOperand(i), MCOp))
          TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::MLAv5: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::MLA);
      // Operand: Rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Ra
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(6), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::MOVPCRX: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::MOVr);
      // Operand: Rd
      TmpInst.addOperand(MCOperand::CreateReg(ARM::PC));
      // Operand: Rm
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      TmpInst.addOperand(MCOperand::CreateImm(14));
      TmpInst.addOperand(MCOperand::CreateReg(0));
      // Operand: s
      TmpInst.addOperand(MCOperand::CreateReg(0));
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::MULv5: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::MUL);
      // Operand: Rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::ORRCCri: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::ORRri);
      // Operand: Rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::ORRCCrr: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::ORRrr);
      // Operand: Rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::ORRCCrsi: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::ORRrsi);
      // Operand: Rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: shift
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(6), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::ORRCCrsr: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::ORRrsr);
      // Operand: Rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: shift
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(6), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(7), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::SMLALv5: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::SMLAL);
      // Operand: RdLo
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: RdHi
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(6), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::SMULLv5: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::SMULL);
      // Operand: RdLo
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: RdHi
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(6), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::TAILJMPd: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::Bcc);
      // Operand: target
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      TmpInst.addOperand(MCOperand::CreateImm(14));
      TmpInst.addOperand(MCOperand::CreateReg(0));
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::TAILJMPr: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::BX);
      // Operand: dst
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::UMAALv5: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::UMAAL);
      // Operand: RdLo
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: RdHi
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::UMLALv5: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::UMLAL);
      // Operand: RdLo
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: RdHi
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(6), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::UMULLv5: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::UMULL);
      // Operand: RdLo
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: RdHi
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(6), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::t2ANDCCri: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::t2ANDri);
      // Operand: Rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::t2ANDCCrr: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::t2ANDrr);
      // Operand: Rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::t2ANDCCrs: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::t2ANDrs);
      // Operand: Rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: ShiftedRm
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(6), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::t2EORCCri: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::t2EORri);
      // Operand: Rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::t2EORCCrr: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::t2EORrr);
      // Operand: Rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::t2EORCCrs: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::t2EORrs);
      // Operand: Rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: ShiftedRm
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(6), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::t2LDMIA_RET: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::t2LDMIA_UPD);
      // Operand: wb
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: regs
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      // variable_ops
      for (unsigned i = 5, e = MI->getNumOperands(); i != e; ++i)
        if (lowerOperand(MI->getOperand(i), MCOp))
          TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::t2ORRCCri: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::t2ORRri);
      // Operand: Rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: imm
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::t2ORRCCrr: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::t2ORRrr);
      // Operand: Rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rm
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::t2ORRCCrs: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::t2ORRrs);
      // Operand: Rd
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: ShiftedRm
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(5), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: s
      lowerOperand(MI->getOperand(6), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::tBRIND: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::tMOVr);
      // Operand: Rd
      TmpInst.addOperand(MCOperand::CreateReg(ARM::PC));
      // Operand: Rm
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::tBX_RET: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::tBX);
      // Operand: Rm
      TmpInst.addOperand(MCOperand::CreateReg(ARM::LR));
      // Operand: p
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::tBX_RET_vararg: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::tBX);
      // Operand: Rm
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::tBfar: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::tBL);
      // Operand: p
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: func
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // variable_ops
      for (unsigned i = 3, e = MI->getNumOperands(); i != e; ++i)
        if (lowerOperand(MI->getOperand(i), MCOp))
          TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::tLDMIA_UPD: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::tLDMIA);
      // Operand: Rn
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(3), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: regs
      lowerOperand(MI->getOperand(4), MCOp);
      TmpInst.addOperand(MCOp);
      // variable_ops
      for (unsigned i = 4, e = MI->getNumOperands(); i != e; ++i)
        if (lowerOperand(MI->getOperand(i), MCOp))
          TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::tPOP_RET: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::tPOP);
      // Operand: p
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: regs
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      // variable_ops
      for (unsigned i = 3, e = MI->getNumOperands(); i != e; ++i)
        if (lowerOperand(MI->getOperand(i), MCOp))
          TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::tTAILJMPd: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::t2B);
      // Operand: target
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::tTAILJMPdND: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::tB);
      // Operand: target
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      lowerOperand(MI->getOperand(1), MCOp);
      TmpInst.addOperand(MCOp);
      lowerOperand(MI->getOperand(2), MCOp);
      TmpInst.addOperand(MCOp);
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
    case ARM::tTAILJMPr: {
      MCInst TmpInst;
      MCOperand MCOp;
      TmpInst.setOpcode(ARM::tBX);
      // Operand: Rm
      lowerOperand(MI->getOperand(0), MCOp);
      TmpInst.addOperand(MCOp);
      // Operand: p
      TmpInst.addOperand(MCOperand::CreateImm(14));
      TmpInst.addOperand(MCOperand::CreateReg(0));
      OutStreamer.EmitInstruction(TmpInst);
      break;
    }
  }
  return true;
}

