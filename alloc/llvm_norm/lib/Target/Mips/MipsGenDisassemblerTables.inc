/*===- TableGen'erated file ---------------------------------------*- C -*-===*
 *
 * Mips Disassembler
 *
 * Automatically generated file, do not edit!
 *
 *===----------------------------------------------------------------------===*/
#include "llvm/MC/MCInst.h"
#include "llvm/Support/DataTypes.h"
#include <assert.h>

namespace llvm {


static uint32_t fieldFromInstruction32(uint32_t insn, unsigned startBit, unsigned numBits)
{
  assert(startBit + numBits <= 32 && "Instruction field out of bounds!");

  uint32_t fieldMask;

  if (numBits == 32)
    fieldMask = (uint32_t)-1;
  else
    fieldMask = ((1 << numBits) - 1) << startBit;

  return (insn & fieldMask) >> startBit;
}

static MCDisassembler::DecodeStatus decodeMipsInstruction32(MCInst &MI, uint32_t insn, uint64_t Address, const void *Decoder, const MCSubtargetInfo &STI) {
  unsigned tmp = 0;
  (void)tmp;

  uint64_t Bits = STI.getFeatureBits();
  (void)Bits;
  // Check Inst{31-26} ...
  switch (fieldFromInstruction32(insn, 26, 6)) {
  case 0:
    // Check Inst{5-0} ...
    switch (fieldFromInstruction32(insn, 0, 6)) {
    case 0:
      // Check Inst{25-21} ...
      switch (fieldFromInstruction32(insn, 21, 5)) {
      case 0:
        // Check Inst{20-6} for singleton decoding...
        if (fieldFromInstruction32(insn, 6, 15) == 0) {
          MI.setOpcode(304);
          return MCDisassembler::Success; // NOP
        }
        else
          if (1) {
            MI.setOpcode(348);
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 16, 5);
            if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 6, 5);
            MI.addOperand(MCOperand::CreateImm(tmp));
            return MCDisassembler::Success; // SLL
          }
        break;
      }
      break;
    case 1:
      // Check Inst{20-16} ...
      switch (fieldFromInstruction32(insn, 16, 5)) {
      case 0:
        // Check Inst{10-6} for singleton decoding...
        if (fieldFromInstruction32(insn, 6, 5) == 0) {
          MI.setOpcode(259);
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 21, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // MOVF_I
        }
        break;
      case 1:
        // Check Inst{10-6} for singleton decoding...
        if (fieldFromInstruction32(insn, 6, 5) == 0) {
          MI.setOpcode(273);
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 21, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // MOVT_I
        }
        break;
      }
      break;
    case 2:
      // Check Inst{25-21} ...
      switch (fieldFromInstruction32(insn, 21, 5)) {
      case 0:
        if (1) {
          MI.setOpcode(362);
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 16, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 6, 5);
          MI.addOperand(MCOperand::CreateImm(tmp));
          return MCDisassembler::Success; // SRL
        }
        break;
      case 1:
        if ((Bits & Mips::FeatureMips32r2)) {
          MI.setOpcode(314);
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 16, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 6, 5);
          MI.addOperand(MCOperand::CreateImm(tmp));
          return MCDisassembler::Success; // ROTR
        }
        break;
      }
      break;
    case 3:
      // Check Inst{25-21} for singleton decoding...
      if (fieldFromInstruction32(insn, 21, 5) == 0) {
        MI.setOpcode(360);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 6, 5);
        MI.addOperand(MCOperand::CreateImm(tmp));
        return MCDisassembler::Success; // SRA
      }
      break;
    case 4:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(351);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // SLLV
      }
      break;
    case 6:
      // Check Inst{10-6} ...
      switch (fieldFromInstruction32(insn, 6, 5)) {
      case 0:
        if (1) {
          MI.setOpcode(363);
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 21, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 16, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // SRLV
        }
        break;
      case 1:
        if ((Bits & Mips::FeatureMips32r2)) {
          MI.setOpcode(315);
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 21, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 16, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // ROTRV
        }
        break;
      }
      break;
    case 7:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(361);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // SRAV
      }
      break;
    case 8:
      // Check Inst{20-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 15) == 0) {
        MI.setOpcode(196);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // JR
      }
      break;
    case 9:
      // Check Inst{20-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 15) == 992) {
        MI.setOpcode(194);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // JALR
      }
      break;
    case 10:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(282);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MOVZ_I_I
      }
      break;
    case 11:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(268);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MOVN_I_I
      }
      break;
    case 15:
      // Check Inst{25-11} for singleton decoding...
      if (fieldFromInstruction32(insn, 11, 15) == 0) {
        MI.setOpcode(380);
        tmp = fieldFromInstruction32(insn, 6, 5);
        MI.addOperand(MCOperand::CreateImm(tmp));
        return MCDisassembler::Success; // SYNC
      }
      break;
    case 16:
      // Check Inst{25-16}  && Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 16, 10) == 0 && fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(252);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MFHI
      }
      break;
    case 17:
      // Check Inst{20-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 15) == 0) {
        MI.setOpcode(291);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MTHI
      }
      break;
    case 18:
      // Check Inst{25-16}  && Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 16, 10) == 0 && fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(254);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MFLO
      }
      break;
    case 19:
      // Check Inst{20-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 15) == 0) {
        MI.setOpcode(293);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MTLO
      }
      break;
    case 24:
      // Check Inst{15-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 10) == 0) {
        MI.setOpcode(296);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MULT
      }
      break;
    case 25:
      // Check Inst{15-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 10) == 0) {
        MI.setOpcode(297);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MULTu
      }
      break;
    case 26:
      // Check Inst{15-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 10) == 0) {
        MI.setOpcode(333);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // SDIV
      }
      break;
    case 27:
      // Check Inst{15-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 10) == 0) {
        MI.setOpcode(386);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // UDIV
      }
      break;
    case 32:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(15);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // ADD
      }
      break;
    case 33:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(18);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // ADDu
      }
      break;
    case 34:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(364);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // SUB
      }
      break;
    case 35:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(365);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // SUBu
      }
      break;
    case 36:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(21);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // AND
      }
      break;
    case 37:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(307);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // OR
      }
      break;
    case 38:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(412);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // XOR
      }
      break;
    case 39:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(305);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // NOR
      }
      break;
    case 42:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(352);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // SLT
      }
      break;
    case 43:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(358);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // SLTu
      }
      break;
    }
    break;
  case 1:
    // Check Inst{20-16} ...
    switch (fieldFromInstruction32(insn, 16, 5)) {
    case 0:
      if (1) {
        MI.setOpcode(100);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 0, 16);
        if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // BLTZ
      }
      break;
    case 1:
      if (1) {
        MI.setOpcode(93);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 0, 16);
        if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // BGEZ
      }
      break;
    case 16:
      if (1) {
        MI.setOpcode(102);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 0, 16);
        if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // BLTZAL
      }
      break;
    case 17:
      if (1) {
        MI.setOpcode(95);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 0, 16);
        if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // BGEZAL
      }
      break;
    }
    break;
  case 2:
    if ((Bits & Mips::FeatureMips32)) {
      MI.setOpcode(192);
      if (DecodeJumpTarget(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // J
    }
    break;
  case 3:
    if (1) {
      MI.setOpcode(193);
      if (DecodeJumpTarget(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // JAL
    }
    break;
  case 4:
    // Check Inst{25-16} for singleton decoding...
    if ((Bits & Mips::FeatureMips32) &&
        fieldFromInstruction32(insn, 16, 10) == 0) {
      MI.setOpcode(88);
      tmp = fieldFromInstruction32(insn, 0, 16);
      if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // B
    }
    else
      if (1) {
        MI.setOpcode(91);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 0, 16);
        if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // BEQ
      }
    break;
  case 5:
    if (1) {
      MI.setOpcode(103);
      tmp = fieldFromInstruction32(insn, 21, 5);
      if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 16, 5);
      if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 0, 16);
      if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // BNE
    }
    break;
  case 6:
    // Check Inst{20-16} for singleton decoding...
    if (fieldFromInstruction32(insn, 16, 5) == 0) {
      MI.setOpcode(98);
      tmp = fieldFromInstruction32(insn, 21, 5);
      if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 0, 16);
      if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // BLEZ
    }
    break;
  case 7:
    // Check Inst{20-16} for singleton decoding...
    if (fieldFromInstruction32(insn, 16, 5) == 0) {
      MI.setOpcode(96);
      tmp = fieldFromInstruction32(insn, 21, 5);
      if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 0, 16);
      if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // BGTZ
    }
    break;
  case 8:
    if (1) {
      MI.setOpcode(16);
      tmp = fieldFromInstruction32(insn, 16, 5);
      if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 21, 5);
      if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 0, 16);
      if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // ADDi
    }
    break;
  case 9:
    if (1) {
      MI.setOpcode(17);
      tmp = fieldFromInstruction32(insn, 16, 5);
      if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 21, 5);
      if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 0, 16);
      if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // ADDiu
    }
    break;
  case 10:
    if (1) {
      MI.setOpcode(354);
      tmp = fieldFromInstruction32(insn, 16, 5);
      if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 21, 5);
      if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 0, 16);
      if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // SLTi
    }
    break;
  case 11:
    if (1) {
      MI.setOpcode(356);
      tmp = fieldFromInstruction32(insn, 16, 5);
      if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 21, 5);
      if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 0, 16);
      if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // SLTiu
    }
    break;
  case 12:
    if (1) {
      MI.setOpcode(23);
      tmp = fieldFromInstruction32(insn, 16, 5);
      if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 21, 5);
      if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 0, 16);
      MI.addOperand(MCOperand::CreateImm(tmp));
      return MCDisassembler::Success; // ANDi
    }
    break;
  case 13:
    if (1) {
      MI.setOpcode(309);
      tmp = fieldFromInstruction32(insn, 16, 5);
      if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 21, 5);
      if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 0, 16);
      MI.addOperand(MCOperand::CreateImm(tmp));
      return MCDisassembler::Success; // ORi
    }
    break;
  case 14:
    if (1) {
      MI.setOpcode(414);
      tmp = fieldFromInstruction32(insn, 16, 5);
      if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 21, 5);
      if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 0, 16);
      MI.addOperand(MCOperand::CreateImm(tmp));
      return MCDisassembler::Success; // XORi
    }
    break;
  case 15:
    // Check Inst{25-21} for singleton decoding...
    if (fieldFromInstruction32(insn, 21, 5) == 0) {
      MI.setOpcode(230);
      tmp = fieldFromInstruction32(insn, 16, 5);
      if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 0, 16);
      MI.addOperand(MCOperand::CreateImm(tmp));
      return MCDisassembler::Success; // LUi
    }
    break;
  case 17:
    // Check Inst{25-21} ...
    switch (fieldFromInstruction32(insn, 21, 5)) {
    case 0:
      // Check Inst{10-0} for singleton decoding...
      if (fieldFromInstruction32(insn, 0, 11) == 0) {
        MI.setOpcode(251);
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MFC1
      }
      break;
    case 1:
      // Check Inst{10-0} for singleton decoding...
      if (fieldFromInstruction32(insn, 0, 11) == 0) {
        MI.setOpcode(137);
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // DMFC1
      }
      break;
    case 2:
      // Check Inst{10-0} for singleton decoding...
      if (fieldFromInstruction32(insn, 0, 11) == 0) {
        MI.setOpcode(111);
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // CFC1
      }
      break;
    case 4:
      // Check Inst{10-0} for singleton decoding...
      if (fieldFromInstruction32(insn, 0, 11) == 0) {
        MI.setOpcode(290);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MTC1
      }
      break;
    case 5:
      // Check Inst{10-0} for singleton decoding...
      if (fieldFromInstruction32(insn, 0, 11) == 0) {
        MI.setOpcode(138);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // DMTC1
      }
      break;
    case 6:
      // Check Inst{10-0} for singleton decoding...
      if (fieldFromInstruction32(insn, 0, 11) == 0) {
        MI.setOpcode(115);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // CTC1
      }
      break;
    case 8:
      // Check Inst{20-16} ...
      switch (fieldFromInstruction32(insn, 16, 5)) {
      case 0:
        if (1) {
          MI.setOpcode(89);
          if (DecodeBC1(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // BC1F
        }
        break;
      case 1:
        if (1) {
          MI.setOpcode(90);
          if (DecodeBC1(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // BC1T
        }
        break;
      }
      break;
    case 16:
      // Check Inst{5-4} ...
      switch (fieldFromInstruction32(insn, 4, 2)) {
      case 0:
        // Check Inst{3-0} ...
        switch (fieldFromInstruction32(insn, 0, 4)) {
        case 0:
          if (1) {
            MI.setOpcode(164);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 16, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // FADD_S
          }
          break;
        case 1:
          if (1) {
            MI.setOpcode(190);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 16, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // FSUB_S
          }
          break;
        case 2:
          if (1) {
            MI.setOpcode(181);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 16, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // FMUL_S
          }
          break;
        case 3:
          if (1) {
            MI.setOpcode(170);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 16, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // FDIV_S
          }
          break;
        case 4:
          // Check Inst{20-16} for singleton decoding...
          if (fieldFromInstruction32(insn, 16, 5) == 0) {
            MI.setOpcode(187);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // FSQRT_S
          }
          break;
        case 5:
          // Check Inst{20-16} for singleton decoding...
          if ((Bits & Mips::FeatureMips32) &&
              fieldFromInstruction32(insn, 16, 5) == 0) {
            MI.setOpcode(161);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // FABS_S
          }
          break;
        case 6:
          // Check Inst{20-16} for singleton decoding...
          if (fieldFromInstruction32(insn, 16, 5) == 0) {
            MI.setOpcode(178);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // FMOV_S
          }
          break;
        case 7:
          // Check Inst{20-16} for singleton decoding...
          if ((Bits & Mips::FeatureMips32) &&
              fieldFromInstruction32(insn, 16, 5) == 0) {
            MI.setOpcode(184);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // FNEG_S
          }
          break;
        case 12:
          // Check Inst{20-16} for singleton decoding...
          if (fieldFromInstruction32(insn, 16, 5) == 0) {
            MI.setOpcode(320);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // ROUND_W_S
          }
          break;
        case 13:
          // Check Inst{20-16} for singleton decoding...
          if (fieldFromInstruction32(insn, 16, 5) == 0) {
            MI.setOpcode(385);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // TRUNC_W_S
          }
          break;
        case 14:
          // Check Inst{20-16} for singleton decoding...
          if (fieldFromInstruction32(insn, 16, 5) == 0) {
            MI.setOpcode(110);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // CEIL_W_S
          }
          break;
        case 15:
          // Check Inst{20-16} for singleton decoding...
          if (fieldFromInstruction32(insn, 16, 5) == 0) {
            MI.setOpcode(175);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // FLOOR_W_S
          }
          break;
        }
        break;
      case 1:
        // Check Inst{3-0} ...
        switch (fieldFromInstruction32(insn, 0, 4)) {
        case 1:
          // Check Inst{20-16} ...
          switch (fieldFromInstruction32(insn, 16, 5)) {
          case 0:
            if (1) {
              MI.setOpcode(261);
              tmp = fieldFromInstruction32(insn, 6, 5);
              if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
              tmp = fieldFromInstruction32(insn, 11, 5);
              if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
              tmp = fieldFromInstruction32(insn, 6, 5);
              if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
              return MCDisassembler::Success; // MOVF_S
            }
            break;
          case 1:
            if (1) {
              MI.setOpcode(275);
              tmp = fieldFromInstruction32(insn, 6, 5);
              if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
              tmp = fieldFromInstruction32(insn, 11, 5);
              if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
              tmp = fieldFromInstruction32(insn, 6, 5);
              if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
              return MCDisassembler::Success; // MOVT_S
            }
            break;
          }
          break;
        case 2:
          if (1) {
            MI.setOpcode(284);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 16, 5);
            if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // MOVZ_I_S
          }
          break;
        case 3:
          if (1) {
            MI.setOpcode(270);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 16, 5);
            if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // MOVN_I_S
          }
          break;
        }
        break;
      case 2:
        // Check Inst{3-0} ...
        switch (fieldFromInstruction32(insn, 0, 4)) {
        case 1:
          // Check Inst{20-16} for singleton decoding...
          if (!(Bits & Mips::FeatureFP64Bit) &&
              fieldFromInstruction32(insn, 16, 5) == 0) {
            MI.setOpcode(116);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // CVT_D32_S
          }
          break;
        case 4:
          // Check Inst{20-16} for singleton decoding...
          if (fieldFromInstruction32(insn, 16, 5) == 0) {
            MI.setOpcode(129);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // CVT_W_S
          }
          break;
        case 5:
          // Check Inst{20-16} for singleton decoding...
          if (fieldFromInstruction32(insn, 16, 5) == 0) {
            MI.setOpcode(122);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // CVT_L_S
          }
          break;
        }
        break;
      case 3:
        // Check Inst{10-6} for singleton decoding...
        if (fieldFromInstruction32(insn, 6, 5) == 0) {
          MI.setOpcode(167);
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 16, 5);
          if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 0, 4);
          if (DecodeCondCode(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // FCMP_S32
        }
        break;
      }
      break;
    case 17:
      // Check Inst{5-4} ...
      switch (fieldFromInstruction32(insn, 4, 2)) {
      case 0:
        // Check Inst{3-0} ...
        switch (fieldFromInstruction32(insn, 0, 4)) {
        case 0:
          if (!(Bits & Mips::FeatureFP64Bit)) {
            MI.setOpcode(162);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 16, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // FADD_D32
          }
          break;
        case 1:
          if (!(Bits & Mips::FeatureFP64Bit)) {
            MI.setOpcode(188);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 16, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // FSUB_D32
          }
          break;
        case 2:
          if (!(Bits & Mips::FeatureFP64Bit)) {
            MI.setOpcode(179);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 16, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // FMUL_D32
          }
          break;
        case 3:
          if (!(Bits & Mips::FeatureFP64Bit)) {
            MI.setOpcode(168);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 16, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // FDIV_D32
          }
          break;
        case 4:
          // Check Inst{20-16} for singleton decoding...
          if (!(Bits & Mips::FeatureFP64Bit) &&
              fieldFromInstruction32(insn, 16, 5) == 0) {
            MI.setOpcode(185);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // FSQRT_D32
          }
          break;
        case 5:
          // Check Inst{20-16} for singleton decoding...
          if ((Bits & Mips::FeatureMips32) &&
              fieldFromInstruction32(insn, 16, 5) == 0) {
            MI.setOpcode(159);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // FABS_D32
          }
          break;
        case 6:
          // Check Inst{20-16} for singleton decoding...
          if (!(Bits & Mips::FeatureFP64Bit) &&
              fieldFromInstruction32(insn, 16, 5) == 0) {
            MI.setOpcode(176);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // FMOV_D32
          }
          break;
        case 7:
          // Check Inst{20-16} for singleton decoding...
          if ((Bits & Mips::FeatureMips32) &&
              fieldFromInstruction32(insn, 16, 5) == 0) {
            MI.setOpcode(182);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // FNEG_D32
          }
          break;
        case 12:
          // Check Inst{20-16} for singleton decoding...
          if (!(Bits & Mips::FeatureFP64Bit) &&
              fieldFromInstruction32(insn, 16, 5) == 0) {
            MI.setOpcode(318);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // ROUND_W_D32
          }
          break;
        case 13:
          // Check Inst{20-16} for singleton decoding...
          if (!(Bits & Mips::FeatureFP64Bit) &&
              fieldFromInstruction32(insn, 16, 5) == 0) {
            MI.setOpcode(383);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // TRUNC_W_D32
          }
          break;
        case 14:
          // Check Inst{20-16} for singleton decoding...
          if (!(Bits & Mips::FeatureFP64Bit) &&
              fieldFromInstruction32(insn, 16, 5) == 0) {
            MI.setOpcode(108);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // CEIL_W_D32
          }
          break;
        case 15:
          // Check Inst{20-16} for singleton decoding...
          if (!(Bits & Mips::FeatureFP64Bit) &&
              fieldFromInstruction32(insn, 16, 5) == 0) {
            MI.setOpcode(173);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // FLOOR_W_D32
          }
          break;
        }
        break;
      case 1:
        // Check Inst{3-0} ...
        switch (fieldFromInstruction32(insn, 0, 4)) {
        case 1:
          // Check Inst{20-16} ...
          switch (fieldFromInstruction32(insn, 16, 5)) {
          case 0:
            if (!(Bits & Mips::FeatureFP64Bit)) {
              MI.setOpcode(257);
              tmp = fieldFromInstruction32(insn, 6, 5);
              if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
              tmp = fieldFromInstruction32(insn, 11, 5);
              if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
              tmp = fieldFromInstruction32(insn, 6, 5);
              if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
              return MCDisassembler::Success; // MOVF_D32
            }
            break;
          case 1:
            if (!(Bits & Mips::FeatureFP64Bit)) {
              MI.setOpcode(271);
              tmp = fieldFromInstruction32(insn, 6, 5);
              if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
              tmp = fieldFromInstruction32(insn, 11, 5);
              if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
              tmp = fieldFromInstruction32(insn, 6, 5);
              if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
              return MCDisassembler::Success; // MOVT_D32
            }
            break;
          }
          break;
        case 2:
          if (!(Bits & Mips::FeatureFP64Bit)) {
            MI.setOpcode(280);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 16, 5);
            if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // MOVZ_I_D32
          }
          break;
        case 3:
          if (!(Bits & Mips::FeatureFP64Bit)) {
            MI.setOpcode(266);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 16, 5);
            if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // MOVN_I_D32
          }
          break;
        }
        break;
      case 2:
        // Check Inst{3-0} ...
        switch (fieldFromInstruction32(insn, 0, 4)) {
        case 0:
          // Check Inst{20-16} for singleton decoding...
          if (!(Bits & Mips::FeatureFP64Bit) &&
              fieldFromInstruction32(insn, 16, 5) == 0) {
            MI.setOpcode(123);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // CVT_S_D32
          }
          break;
        case 4:
          // Check Inst{20-16} for singleton decoding...
          if (!(Bits & Mips::FeatureFP64Bit) &&
              fieldFromInstruction32(insn, 16, 5) == 0) {
            MI.setOpcode(127);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // CVT_W_D32
          }
          break;
        case 5:
          // Check Inst{20-16} for singleton decoding...
          if (fieldFromInstruction32(insn, 16, 5) == 0) {
            MI.setOpcode(121);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // CVT_L_D64
          }
          break;
        }
        break;
      case 3:
        // Check Inst{10-6} for singleton decoding...
        if (!(Bits & Mips::FeatureFP64Bit) &&
            fieldFromInstruction32(insn, 6, 5) == 0) {
          MI.setOpcode(165);
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 16, 5);
          if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 0, 4);
          if (DecodeCondCode(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // FCMP_D32
        }
        break;
      }
      break;
    case 20:
      // Check Inst{5-0} ...
      switch (fieldFromInstruction32(insn, 0, 6)) {
      case 32:
        // Check Inst{20-16} for singleton decoding...
        if (fieldFromInstruction32(insn, 16, 5) == 0) {
          MI.setOpcode(126);
          tmp = fieldFromInstruction32(insn, 6, 5);
          if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // CVT_S_W
        }
        break;
      case 33:
        // Check Inst{20-16} for singleton decoding...
        if (!(Bits & Mips::FeatureFP64Bit) &&
            fieldFromInstruction32(insn, 16, 5) == 0) {
          MI.setOpcode(117);
          tmp = fieldFromInstruction32(insn, 6, 5);
          if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // CVT_D32_W
        }
        break;
      }
      break;
    }
    break;
  case 19:
    // Check Inst{5-0} ...
    switch (fieldFromInstruction32(insn, 0, 6)) {
    case 0:
      // Check Inst{15-11} for singleton decoding...
      if ((Bits & Mips::FeatureMips32r2) && (Bits & Mips::FeatureMips64) &&
          fieldFromInstruction32(insn, 11, 5) == 0) {
        MI.setOpcode(241);
        tmp = fieldFromInstruction32(insn, 6, 5);
        if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // LWXC1
      }
      break;
    case 1:
      // Check Inst{15-11} for singleton decoding...
      if ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureMips64) &&
          fieldFromInstruction32(insn, 11, 5) == 0) {
        MI.setOpcode(210);
        tmp = fieldFromInstruction32(insn, 6, 5);
        if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // LDXC1
      }
      break;
    case 5:
      // Check Inst{15-11} for singleton decoding...
      if ((Bits & Mips::FeatureMips32r2) && (Bits & Mips::FeatureMips64) &&
          fieldFromInstruction32(insn, 11, 5) == 0) {
        MI.setOpcode(228);
        tmp = fieldFromInstruction32(insn, 6, 5);
        if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // LUXC1
      }
      break;
    case 8:
      // Check Inst{10-6} for singleton decoding...
      if ((Bits & Mips::FeatureMips32r2) && (Bits & Mips::FeatureMips64) &&
          fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(377);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // SWXC1
      }
      break;
    case 9:
      // Check Inst{10-6} for singleton decoding...
      if ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureMips64) &&
          fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(334);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // SDXC1
      }
      break;
    case 13:
      // Check Inst{10-6} for singleton decoding...
      if ((Bits & Mips::FeatureMips32r2) && (Bits & Mips::FeatureMips64) &&
          fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(366);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // SUXC1
      }
      break;
    case 32:
      if ((Bits & Mips::FeatureMips32r2)) {
        MI.setOpcode(250);
        tmp = fieldFromInstruction32(insn, 6, 5);
        if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MADD_S
      }
      break;
    case 33:
      if ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureFP64Bit)) {
        MI.setOpcode(248);
        tmp = fieldFromInstruction32(insn, 6, 5);
        if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MADD_D32
      }
      break;
    case 40:
      if ((Bits & Mips::FeatureMips32r2)) {
        MI.setOpcode(289);
        tmp = fieldFromInstruction32(insn, 6, 5);
        if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MSUB_S
      }
      break;
    case 41:
      if ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureFP64Bit)) {
        MI.setOpcode(287);
        tmp = fieldFromInstruction32(insn, 6, 5);
        if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MSUB_D32
      }
      break;
    case 48:
      if ((Bits & Mips::FeatureMips32r2) && (Bits & Mips::FeatureMips32)) {
        MI.setOpcode(300);
        tmp = fieldFromInstruction32(insn, 6, 5);
        if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // NMADD_S
      }
      break;
    case 49:
      if ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips32)) {
        MI.setOpcode(298);
        tmp = fieldFromInstruction32(insn, 6, 5);
        if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // NMADD_D32
      }
      break;
    case 56:
      if ((Bits & Mips::FeatureMips32r2) && (Bits & Mips::FeatureMips32)) {
        MI.setOpcode(303);
        tmp = fieldFromInstruction32(insn, 6, 5);
        if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // NMSUB_S
      }
      break;
    case 57:
      if ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips32)) {
        MI.setOpcode(301);
        tmp = fieldFromInstruction32(insn, 6, 5);
        if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // NMSUB_D32
      }
      break;
    }
    break;
  case 28:
    // Check Inst{10-0} ...
    switch (fieldFromInstruction32(insn, 0, 11)) {
    case 0:
      // Check Inst{15-11} for singleton decoding...
      if (fieldFromInstruction32(insn, 11, 5) == 0) {
        MI.setOpcode(246);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MADD
      }
      break;
    case 1:
      // Check Inst{15-11} for singleton decoding...
      if (fieldFromInstruction32(insn, 11, 5) == 0) {
        MI.setOpcode(247);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MADDU
      }
      break;
    case 2:
      if ((Bits & Mips::FeatureMips32)) {
        MI.setOpcode(295);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MUL
      }
      break;
    case 4:
      // Check Inst{15-11} for singleton decoding...
      if (fieldFromInstruction32(insn, 11, 5) == 0) {
        MI.setOpcode(285);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MSUB
      }
      break;
    case 5:
      // Check Inst{15-11} for singleton decoding...
      if (fieldFromInstruction32(insn, 11, 5) == 0) {
        MI.setOpcode(286);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MSUBU
      }
      break;
    case 32:
      if ((Bits & Mips::FeatureBitCount)) {
        MI.setOpcode(113);
        tmp = 0;
        tmp |= (fieldFromInstruction32(insn, 11, 5) << 0);
        tmp |= (fieldFromInstruction32(insn, 16, 5) << 0);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // CLZ
      }
      break;
    case 33:
      if ((Bits & Mips::FeatureBitCount)) {
        MI.setOpcode(112);
        tmp = 0;
        tmp |= (fieldFromInstruction32(insn, 11, 5) << 0);
        tmp |= (fieldFromInstruction32(insn, 16, 5) << 0);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // CLO
      }
      break;
    }
    break;
  case 31:
    // Check Inst{5-0} ...
    switch (fieldFromInstruction32(insn, 0, 6)) {
    case 0:
      if ((Bits & Mips::FeatureMips32r2)) {
        MI.setOpcode(157);
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 6, 5);
        MI.addOperand(MCOperand::CreateImm(tmp));
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // EXT
      }
      break;
    case 4:
      if ((Bits & Mips::FeatureMips32r2)) {
        MI.setOpcode(191);
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 6, 5);
        MI.addOperand(MCOperand::CreateImm(tmp));
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // INS
      }
      break;
    case 32:
      // Check Inst{10-6} ...
      switch (fieldFromInstruction32(insn, 6, 5)) {
      case 2:
        // Check Inst{25-21} for singleton decoding...
        if ((Bits & Mips::FeatureSwap) &&
            fieldFromInstruction32(insn, 21, 5) == 0) {
          MI.setOpcode(411);
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 16, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // WSBH
        }
        break;
      case 16:
        // Check Inst{25-21} for singleton decoding...
        if ((Bits & Mips::FeatureSEInReg) &&
            fieldFromInstruction32(insn, 21, 5) == 0) {
          MI.setOpcode(338);
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 16, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // SEB
        }
        break;
      case 24:
        // Check Inst{25-21} for singleton decoding...
        if ((Bits & Mips::FeatureSEInReg) &&
            fieldFromInstruction32(insn, 21, 5) == 0) {
          MI.setOpcode(340);
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 16, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // SEH
        }
        break;
      }
      break;
    case 59:
      // Check Inst{25-21}  && Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 21, 5) == 0 && fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(311);
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // RDHWR
      }
      break;
    }
    break;
  case 32:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(198);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // LB
    }
    break;
  case 33:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(216);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // LH
    }
    break;
  case 34:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(237);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // LWL
    }
    break;
  case 35:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(232);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // LW
    }
    break;
  case 36:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(202);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // LBu
    }
    break;
  case 37:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(220);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // LHu
    }
    break;
  case 38:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(239);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // LWR
    }
    break;
  case 40:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(321);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // SB
    }
    break;
  case 41:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(344);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // SH
    }
    break;
  case 42:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(373);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // SWL
    }
    break;
  case 43:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(368);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // SW
    }
    break;
  case 46:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(375);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // SWR
    }
    break;
  case 48:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(224);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // LL
    }
    break;
  case 49:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(235);
      if (DecodeFMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // LWC1
    }
    break;
  case 53:
    if (!(Bits & Mips::FeatureN64) && !(Bits & Mips::FeatureMips64)) {
      MI.setOpcode(207);
      if (DecodeFMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // LDC1
    }
    break;
  case 56:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(325);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // SC
    }
    break;
  case 57:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(371);
      if (DecodeFMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // SWC1
    }
    break;
  case 61:
    if (!(Bits & Mips::FeatureN64) && !(Bits & Mips::FeatureMips64)) {
      MI.setOpcode(330);
      if (DecodeFMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // SDC1
    }
    break;
  }

  return MCDisassembler::Fail;
}

static MCDisassembler::DecodeStatus decodeMips64Instruction32(MCInst &MI, uint32_t insn, uint64_t Address, const void *Decoder, const MCSubtargetInfo &STI) {
  unsigned tmp = 0;
  (void)tmp;

  uint64_t Bits = STI.getFeatureBits();
  (void)Bits;
  // Check Inst{31-26} ...
  switch (fieldFromInstruction32(insn, 26, 6)) {
  case 0:
    // Check Inst{5-0} ...
    switch (fieldFromInstruction32(insn, 0, 6)) {
    case 0:
      if (1) {
        MI.setOpcode(349);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // SLL64_32
      }
      break;
    case 1:
      // Check Inst{20-16} ...
      switch (fieldFromInstruction32(insn, 16, 5)) {
      case 0:
        // Check Inst{10-6} for singleton decoding...
        if ((Bits & Mips::FeatureMips64) &&
            fieldFromInstruction32(insn, 6, 5) == 0) {
          MI.setOpcode(260);
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 21, 5);
          if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // MOVF_I64
        }
        break;
      case 1:
        // Check Inst{10-6} for singleton decoding...
        if ((Bits & Mips::FeatureMips64) &&
            fieldFromInstruction32(insn, 6, 5) == 0) {
          MI.setOpcode(274);
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 21, 5);
          if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // MOVT_I64
        }
        break;
      }
      break;
    case 8:
      // Check Inst{20-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 15) == 0) {
        MI.setOpcode(197);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // JR64
      }
      break;
    case 9:
      // Check Inst{20-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 15) == 992) {
        MI.setOpcode(195);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // JALR64
      }
      break;
    case 10:
      // Check Inst{10-6} for singleton decoding...
      if ((Bits & Mips::FeatureMips64) &&
          fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(283);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MOVZ_I_I64
      }
      break;
    case 11:
      // Check Inst{10-6} for singleton decoding...
      if ((Bits & Mips::FeatureMips64) &&
          fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(269);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MOVN_I_I64
      }
      break;
    case 16:
      // Check Inst{25-16}  && Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 16, 10) == 0 && fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(253);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MFHI64
      }
      break;
    case 17:
      // Check Inst{20-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 15) == 0) {
        MI.setOpcode(292);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MTHI64
      }
      break;
    case 18:
      // Check Inst{25-16}  && Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 16, 10) == 0 && fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(255);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MFLO64
      }
      break;
    case 19:
      // Check Inst{20-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 15) == 0) {
        MI.setOpcode(294);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // MTLO64
      }
      break;
    case 20:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(148);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // DSLLV
      }
      break;
    case 22:
      // Check Inst{10-6} ...
      switch (fieldFromInstruction32(insn, 6, 5)) {
      case 0:
        if (1) {
          MI.setOpcode(152);
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 21, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 16, 5);
          if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // DSRLV
        }
        break;
      case 1:
        if ((Bits & Mips::FeatureMips64r2)) {
          MI.setOpcode(142);
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 21, 5);
          if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 16, 5);
          if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // DROTRV
        }
        break;
      }
      break;
    case 23:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(150);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // DSRAV
      }
      break;
    case 28:
      // Check Inst{15-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 10) == 0) {
        MI.setOpcode(139);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // DMULT
      }
      break;
    case 29:
      // Check Inst{15-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 10) == 0) {
        MI.setOpcode(140);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // DMULTu
      }
      break;
    case 30:
      // Check Inst{15-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 10) == 0) {
        MI.setOpcode(144);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // DSDIV
      }
      break;
    case 31:
      // Check Inst{15-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 10) == 0) {
        MI.setOpcode(154);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // DUDIV
      }
      break;
    case 36:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(22);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // AND64
      }
      break;
    case 37:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(308);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // OR64
      }
      break;
    case 38:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(413);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // XOR64
      }
      break;
    case 39:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(306);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // NOR64
      }
      break;
    case 42:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(353);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // SLT64
      }
      break;
    case 43:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(359);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // SLTu64
      }
      break;
    case 45:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(131);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // DADDu
      }
      break;
    case 47:
      // Check Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(153);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // DSUBu
      }
      break;
    case 56:
      // Check Inst{25-21} for singleton decoding...
      if (fieldFromInstruction32(insn, 21, 5) == 0) {
        MI.setOpcode(146);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 6, 5);
        MI.addOperand(MCOperand::CreateImm(tmp));
        return MCDisassembler::Success; // DSLL
      }
      break;
    case 58:
      // Check Inst{25-21} ...
      switch (fieldFromInstruction32(insn, 21, 5)) {
      case 0:
        if (1) {
          MI.setOpcode(151);
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 16, 5);
          if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 6, 5);
          MI.addOperand(MCOperand::CreateImm(tmp));
          return MCDisassembler::Success; // DSRL
        }
        break;
      case 1:
        if ((Bits & Mips::FeatureMips64r2)) {
          MI.setOpcode(141);
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 16, 5);
          if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 6, 5);
          MI.addOperand(MCOperand::CreateImm(tmp));
          return MCDisassembler::Success; // DROTR
        }
        break;
      }
      break;
    case 59:
      // Check Inst{25-21} for singleton decoding...
      if (fieldFromInstruction32(insn, 21, 5) == 0) {
        MI.setOpcode(149);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 6, 5);
        MI.addOperand(MCOperand::CreateImm(tmp));
        return MCDisassembler::Success; // DSRA
      }
      break;
    }
    break;
  case 1:
    // Check Inst{20-16} ...
    switch (fieldFromInstruction32(insn, 16, 5)) {
    case 0:
      if (1) {
        MI.setOpcode(101);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 0, 16);
        if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // BLTZ64
      }
      break;
    case 1:
      if (1) {
        MI.setOpcode(94);
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 0, 16);
        if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // BGEZ64
      }
      break;
    }
    break;
  case 4:
    if (1) {
      MI.setOpcode(92);
      tmp = fieldFromInstruction32(insn, 21, 5);
      if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 16, 5);
      if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 0, 16);
      if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // BEQ64
    }
    break;
  case 5:
    if (1) {
      MI.setOpcode(104);
      tmp = fieldFromInstruction32(insn, 21, 5);
      if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 16, 5);
      if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 0, 16);
      if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // BNE64
    }
    break;
  case 6:
    // Check Inst{20-16} for singleton decoding...
    if (fieldFromInstruction32(insn, 16, 5) == 0) {
      MI.setOpcode(99);
      tmp = fieldFromInstruction32(insn, 21, 5);
      if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 0, 16);
      if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // BLEZ64
    }
    break;
  case 7:
    // Check Inst{20-16} for singleton decoding...
    if (fieldFromInstruction32(insn, 16, 5) == 0) {
      MI.setOpcode(97);
      tmp = fieldFromInstruction32(insn, 21, 5);
      if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 0, 16);
      if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // BGTZ64
    }
    break;
  case 9:
    if (1) {
      MI.setOpcode(215);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // LEA_ADDiu64
    }
    break;
  case 10:
    if (1) {
      MI.setOpcode(355);
      tmp = fieldFromInstruction32(insn, 16, 5);
      if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 21, 5);
      if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 0, 16);
      MI.addOperand(MCOperand::CreateImm(tmp));
      return MCDisassembler::Success; // SLTi64
    }
    break;
  case 11:
    if (1) {
      MI.setOpcode(357);
      tmp = fieldFromInstruction32(insn, 16, 5);
      if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 21, 5);
      if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 0, 16);
      MI.addOperand(MCOperand::CreateImm(tmp));
      return MCDisassembler::Success; // SLTiu64
    }
    break;
  case 12:
    if (1) {
      MI.setOpcode(132);
      tmp = fieldFromInstruction32(insn, 16, 5);
      if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 21, 5);
      if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 0, 16);
      MI.addOperand(MCOperand::CreateImm(tmp));
      return MCDisassembler::Success; // DANDi
    }
    break;
  case 13:
    if (1) {
      MI.setOpcode(310);
      tmp = fieldFromInstruction32(insn, 16, 5);
      if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 21, 5);
      if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 0, 16);
      MI.addOperand(MCOperand::CreateImm(tmp));
      return MCDisassembler::Success; // ORi64
    }
    break;
  case 14:
    if (1) {
      MI.setOpcode(415);
      tmp = fieldFromInstruction32(insn, 16, 5);
      if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 21, 5);
      if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 0, 16);
      MI.addOperand(MCOperand::CreateImm(tmp));
      return MCDisassembler::Success; // XORi64
    }
    break;
  case 15:
    // Check Inst{25-21} for singleton decoding...
    if (fieldFromInstruction32(insn, 21, 5) == 0) {
      MI.setOpcode(231);
      tmp = fieldFromInstruction32(insn, 16, 5);
      if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 0, 16);
      MI.addOperand(MCOperand::CreateImm(tmp));
      return MCDisassembler::Success; // LUi64
    }
    break;
  case 17:
    // Check Inst{5-4} ...
    switch (fieldFromInstruction32(insn, 4, 2)) {
    case 0:
      // Check Inst{3-0} ...
      switch (fieldFromInstruction32(insn, 0, 4)) {
      case 0:
        // Check Inst{25-21} for singleton decoding...
        if ((Bits & Mips::FeatureFP64Bit) &&
            fieldFromInstruction32(insn, 21, 5) == 17) {
          MI.setOpcode(163);
          tmp = fieldFromInstruction32(insn, 6, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 16, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // FADD_D64
        }
        break;
      case 1:
        // Check Inst{25-21} for singleton decoding...
        if ((Bits & Mips::FeatureFP64Bit) &&
            fieldFromInstruction32(insn, 21, 5) == 17) {
          MI.setOpcode(189);
          tmp = fieldFromInstruction32(insn, 6, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 16, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // FSUB_D64
        }
        break;
      case 2:
        // Check Inst{25-21} for singleton decoding...
        if ((Bits & Mips::FeatureFP64Bit) &&
            fieldFromInstruction32(insn, 21, 5) == 17) {
          MI.setOpcode(180);
          tmp = fieldFromInstruction32(insn, 6, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 16, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // FMUL_D64
        }
        break;
      case 3:
        // Check Inst{25-21} for singleton decoding...
        if ((Bits & Mips::FeatureFP64Bit) &&
            fieldFromInstruction32(insn, 21, 5) == 17) {
          MI.setOpcode(169);
          tmp = fieldFromInstruction32(insn, 6, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 16, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // FDIV_D64
        }
        break;
      case 4:
        // Check Inst{25-16} for singleton decoding...
        if ((Bits & Mips::FeatureFP64Bit) &&
            fieldFromInstruction32(insn, 16, 10) == 544) {
          MI.setOpcode(186);
          tmp = fieldFromInstruction32(insn, 6, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // FSQRT_D64
        }
        break;
      case 5:
        // Check Inst{25-16} for singleton decoding...
        if ((Bits & Mips::FeatureMips32) &&
            fieldFromInstruction32(insn, 16, 10) == 544) {
          MI.setOpcode(160);
          tmp = fieldFromInstruction32(insn, 6, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // FABS_D64
        }
        break;
      case 6:
        // Check Inst{25-16} for singleton decoding...
        if ((Bits & Mips::FeatureFP64Bit) &&
            fieldFromInstruction32(insn, 16, 10) == 544) {
          MI.setOpcode(177);
          tmp = fieldFromInstruction32(insn, 6, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // FMOV_D64
        }
        break;
      case 7:
        // Check Inst{25-16} for singleton decoding...
        if ((Bits & Mips::FeatureMips32) &&
            fieldFromInstruction32(insn, 16, 10) == 544) {
          MI.setOpcode(183);
          tmp = fieldFromInstruction32(insn, 6, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // FNEG_D64
        }
        break;
      case 8:
        // Check Inst{25-16} ...
        switch (fieldFromInstruction32(insn, 16, 10)) {
        case 512:
          if ((Bits & Mips::FeatureFP64Bit)) {
            MI.setOpcode(317);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // ROUND_L_S
          }
          break;
        case 544:
          if ((Bits & Mips::FeatureFP64Bit)) {
            MI.setOpcode(316);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // ROUND_L_D64
          }
          break;
        }
        break;
      case 9:
        // Check Inst{25-16} ...
        switch (fieldFromInstruction32(insn, 16, 10)) {
        case 512:
          if ((Bits & Mips::FeatureFP64Bit)) {
            MI.setOpcode(382);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // TRUNC_L_S
          }
          break;
        case 544:
          if ((Bits & Mips::FeatureFP64Bit)) {
            MI.setOpcode(381);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // TRUNC_L_D64
          }
          break;
        }
        break;
      case 10:
        // Check Inst{25-16} ...
        switch (fieldFromInstruction32(insn, 16, 10)) {
        case 512:
          if ((Bits & Mips::FeatureFP64Bit)) {
            MI.setOpcode(107);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // CEIL_L_S
          }
          break;
        case 544:
          if ((Bits & Mips::FeatureFP64Bit)) {
            MI.setOpcode(106);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // CEIL_L_D64
          }
          break;
        }
        break;
      case 11:
        // Check Inst{25-16} ...
        switch (fieldFromInstruction32(insn, 16, 10)) {
        case 512:
          if ((Bits & Mips::FeatureFP64Bit)) {
            MI.setOpcode(172);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // FLOOR_L_S
          }
          break;
        case 544:
          if ((Bits & Mips::FeatureFP64Bit)) {
            MI.setOpcode(171);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // FLOOR_L_D64
          }
          break;
        }
        break;
      case 12:
        // Check Inst{25-16} for singleton decoding...
        if ((Bits & Mips::FeatureFP64Bit) &&
            fieldFromInstruction32(insn, 16, 10) == 544) {
          MI.setOpcode(319);
          tmp = fieldFromInstruction32(insn, 6, 5);
          if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // ROUND_W_D64
        }
        break;
      case 13:
        // Check Inst{25-16} for singleton decoding...
        if ((Bits & Mips::FeatureFP64Bit) &&
            fieldFromInstruction32(insn, 16, 10) == 544) {
          MI.setOpcode(384);
          tmp = fieldFromInstruction32(insn, 6, 5);
          if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // TRUNC_W_D64
        }
        break;
      case 14:
        // Check Inst{25-16} for singleton decoding...
        if ((Bits & Mips::FeatureFP64Bit) &&
            fieldFromInstruction32(insn, 16, 10) == 544) {
          MI.setOpcode(109);
          tmp = fieldFromInstruction32(insn, 6, 5);
          if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // CEIL_W_D64
        }
        break;
      case 15:
        // Check Inst{25-16} for singleton decoding...
        if ((Bits & Mips::FeatureFP64Bit) &&
            fieldFromInstruction32(insn, 16, 10) == 544) {
          MI.setOpcode(174);
          tmp = fieldFromInstruction32(insn, 6, 5);
          if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // FLOOR_W_D64
        }
        break;
      }
      break;
    case 1:
      // Check Inst{3-0} ...
      switch (fieldFromInstruction32(insn, 0, 4)) {
      case 1:
        // Check Inst{25-16} ...
        switch (fieldFromInstruction32(insn, 16, 10)) {
        case 544:
          if ((Bits & Mips::FeatureFP64Bit)) {
            MI.setOpcode(258);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // MOVF_D64
          }
          break;
        case 545:
          if ((Bits & Mips::FeatureFP64Bit)) {
            MI.setOpcode(272);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // MOVT_D64
          }
          break;
        }
        break;
      case 2:
        // Check Inst{25-21} ...
        switch (fieldFromInstruction32(insn, 21, 5)) {
        case 16:
          if ((Bits & Mips::FeatureMips64)) {
            MI.setOpcode(279);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 16, 5);
            if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // MOVZ_I64_S
          }
          break;
        case 17:
          if ((Bits & Mips::FeatureFP64Bit)) {
            MI.setOpcode(281);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 16, 5);
            if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // MOVZ_I_D64
          }
          break;
        }
        break;
      case 3:
        // Check Inst{25-21} ...
        switch (fieldFromInstruction32(insn, 21, 5)) {
        case 16:
          if ((Bits & Mips::FeatureMips64)) {
            MI.setOpcode(265);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 16, 5);
            if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // MOVN_I64_S
          }
          break;
        case 17:
          if ((Bits & Mips::FeatureFP64Bit)) {
            MI.setOpcode(267);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 16, 5);
            if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // MOVN_I_D64
          }
          break;
        }
        break;
      }
      break;
    case 2:
      // Check Inst{25-16} ...
      switch (fieldFromInstruction32(insn, 16, 10)) {
      case 512:
        // Check Inst{3-0} for singleton decoding...
        if ((Bits & Mips::FeatureFP64Bit) &&
            fieldFromInstruction32(insn, 0, 4) == 1) {
          MI.setOpcode(119);
          tmp = fieldFromInstruction32(insn, 6, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // CVT_D64_S
        }
        break;
      case 544:
        // Check Inst{3-0} ...
        switch (fieldFromInstruction32(insn, 0, 4)) {
        case 0:
          if ((Bits & Mips::FeatureFP64Bit)) {
            MI.setOpcode(124);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // CVT_S_D64
          }
          break;
        case 4:
          if ((Bits & Mips::FeatureFP64Bit)) {
            MI.setOpcode(128);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // CVT_W_D64
          }
          break;
        }
        break;
      case 640:
        // Check Inst{3-0} for singleton decoding...
        if ((Bits & Mips::FeatureFP64Bit) &&
            fieldFromInstruction32(insn, 0, 4) == 1) {
          MI.setOpcode(120);
          tmp = fieldFromInstruction32(insn, 6, 5);
          if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // CVT_D64_W
        }
        break;
      case 672:
        // Check Inst{3-0} ...
        switch (fieldFromInstruction32(insn, 0, 4)) {
        case 0:
          if ((Bits & Mips::FeatureFP64Bit)) {
            MI.setOpcode(125);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // CVT_S_L
          }
          break;
        case 1:
          if ((Bits & Mips::FeatureFP64Bit)) {
            MI.setOpcode(118);
            tmp = fieldFromInstruction32(insn, 6, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            tmp = fieldFromInstruction32(insn, 11, 5);
            if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
            return MCDisassembler::Success; // CVT_D64_L
          }
          break;
        }
        break;
      }
      break;
    case 3:
      // Check Inst{25-21}  && Inst{10-6} for singleton decoding...
      if ((Bits & Mips::FeatureFP64Bit) &&
          fieldFromInstruction32(insn, 21, 5) == 17 && fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(166);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 0, 4);
        if (DecodeCondCode(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // FCMP_D64
      }
      break;
    }
    break;
  case 19:
    // Check Inst{5-0} ...
    switch (fieldFromInstruction32(insn, 0, 6)) {
    case 1:
      // Check Inst{15-11} for singleton decoding...
      if ((Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureN64) &&
          fieldFromInstruction32(insn, 11, 5) == 0) {
        MI.setOpcode(211);
        tmp = fieldFromInstruction32(insn, 6, 5);
        if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // LDXC164
      }
      break;
    case 9:
      // Check Inst{10-6} for singleton decoding...
      if ((Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureN64) &&
          fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(335);
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // SDXC164
      }
      break;
    }
    break;
  case 25:
    if (1) {
      MI.setOpcode(130);
      tmp = fieldFromInstruction32(insn, 16, 5);
      if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 21, 5);
      if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 0, 16);
      MI.addOperand(MCOperand::CreateImm(tmp));
      return MCDisassembler::Success; // DADDiu
    }
    break;
  case 28:
    // Check Inst{10-0} ...
    switch (fieldFromInstruction32(insn, 0, 11)) {
    case 36:
      if ((Bits & Mips::FeatureBitCount)) {
        MI.setOpcode(134);
        tmp = 0;
        tmp |= (fieldFromInstruction32(insn, 11, 5) << 0);
        tmp |= (fieldFromInstruction32(insn, 16, 5) << 0);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // DCLZ
      }
      break;
    case 37:
      if ((Bits & Mips::FeatureBitCount)) {
        MI.setOpcode(133);
        tmp = 0;
        tmp |= (fieldFromInstruction32(insn, 11, 5) << 0);
        tmp |= (fieldFromInstruction32(insn, 16, 5) << 0);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // DCLO
      }
      break;
    }
    break;
  case 31:
    // Check Inst{5-0} ...
    switch (fieldFromInstruction32(insn, 0, 6)) {
    case 3:
      if ((Bits & Mips::FeatureMips32r2)) {
        MI.setOpcode(135);
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 6, 5);
        MI.addOperand(MCOperand::CreateImm(tmp));
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // DEXT
      }
      break;
    case 7:
      if ((Bits & Mips::FeatureMips32r2)) {
        MI.setOpcode(136);
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 21, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 6, 5);
        MI.addOperand(MCOperand::CreateImm(tmp));
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // DINS
      }
      break;
    case 32:
      // Check Inst{10-6} ...
      switch (fieldFromInstruction32(insn, 6, 5)) {
      case 16:
        // Check Inst{25-21} for singleton decoding...
        if ((Bits & Mips::FeatureSEInReg) &&
            fieldFromInstruction32(insn, 21, 5) == 0) {
          MI.setOpcode(339);
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 16, 5);
          if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // SEB64
        }
        break;
      case 24:
        // Check Inst{25-21} for singleton decoding...
        if ((Bits & Mips::FeatureSEInReg) &&
            fieldFromInstruction32(insn, 21, 5) == 0) {
          MI.setOpcode(341);
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 16, 5);
          if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // SEH64
        }
        break;
      }
      break;
    case 36:
      // Check Inst{10-6} ...
      switch (fieldFromInstruction32(insn, 6, 5)) {
      case 2:
        // Check Inst{25-21} for singleton decoding...
        if ((Bits & Mips::FeatureSwap) &&
            fieldFromInstruction32(insn, 21, 5) == 0) {
          MI.setOpcode(143);
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 16, 5);
          if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // DSBH
        }
        break;
      case 5:
        // Check Inst{25-21} for singleton decoding...
        if ((Bits & Mips::FeatureSwap) &&
            fieldFromInstruction32(insn, 21, 5) == 0) {
          MI.setOpcode(145);
          tmp = fieldFromInstruction32(insn, 11, 5);
          if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          tmp = fieldFromInstruction32(insn, 16, 5);
          if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
          return MCDisassembler::Success; // DSHD
        }
        break;
      }
      break;
    case 59:
      // Check Inst{25-21}  && Inst{10-6} for singleton decoding...
      if (fieldFromInstruction32(insn, 21, 5) == 0 && fieldFromInstruction32(insn, 6, 5) == 0) {
        MI.setOpcode(312);
        tmp = fieldFromInstruction32(insn, 16, 5);
        if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        tmp = fieldFromInstruction32(insn, 11, 5);
        if (DecodeHWRegs64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // RDHWR64
      }
      break;
    }
    break;
  case 32:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(199);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // LB64
    }
    break;
  case 33:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(217);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // LH64
    }
    break;
  case 35:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(233);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // LW64
    }
    break;
  case 36:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(203);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // LBu64
    }
    break;
  case 37:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(221);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // LHu64
    }
    break;
  case 39:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(244);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // LWu64
    }
    break;
  case 40:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(322);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // SB64
    }
    break;
  case 41:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(345);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // SH64
    }
    break;
  case 43:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(369);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // SW64
    }
    break;
  case 48:
    if ((Bits & Mips::FeatureN64)) {
      MI.setOpcode(227);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // LL_P8
    }
    break;
  case 49:
    if ((Bits & Mips::FeatureN64)) {
      MI.setOpcode(236);
      if (DecodeFMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // LWC1_P8
    }
    break;
  case 52:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(225);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // LLD
    }
    break;
  case 53:
    if (!(Bits & Mips::FeatureN64) && (Bits & Mips::FeatureMips64)) {
      MI.setOpcode(208);
      if (DecodeFMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // LDC164
    }
    break;
  case 55:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(206);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // LD
    }
    break;
  case 56:
    if ((Bits & Mips::FeatureN64)) {
      MI.setOpcode(328);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // SC_P8
    }
    break;
  case 57:
    if ((Bits & Mips::FeatureN64)) {
      MI.setOpcode(372);
      if (DecodeFMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // SWC1_P8
    }
    break;
  case 60:
    // Check Inst{5-0} for singleton decoding...
    if (fieldFromInstruction32(insn, 0, 6) == 0) {
      MI.setOpcode(147);
      tmp = fieldFromInstruction32(insn, 11, 5);
      if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      tmp = fieldFromInstruction32(insn, 16, 5);
      if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // DSLL64_32
    }
    else
      if (!(Bits & Mips::FeatureN64)) {
        MI.setOpcode(326);
        if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
        return MCDisassembler::Success; // SCD
      }
    break;
  case 61:
    if (!(Bits & Mips::FeatureN64) && (Bits & Mips::FeatureMips64)) {
      MI.setOpcode(331);
      if (DecodeFMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // SDC164
    }
    break;
  case 63:
    if (!(Bits & Mips::FeatureN64)) {
      MI.setOpcode(329);
      if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
      return MCDisassembler::Success; // SD
    }
    break;
  }

  return MCDisassembler::Fail;
}


} // End llvm namespace 
