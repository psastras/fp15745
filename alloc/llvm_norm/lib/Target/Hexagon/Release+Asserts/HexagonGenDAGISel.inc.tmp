//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the Hexagon target
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// The main instruction selector code.
SDNode *SelectCode(SDNode *N) {
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*0*/     OPC_SwitchOpcode /*37 cases */, 47|128,4/*559*/,  TARGET_VAL(ISD::SELECT),// ->564
/*5*/       OPC_Scope, 73, /*->80*/ // 6 children in Scope
/*7*/         OPC_MoveChild, 0,
/*9*/         OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*12*/        OPC_RecordChild0, // #0 = $src2
/*13*/        OPC_CheckChild0Type, MVT::i64,
/*15*/        OPC_RecordChild1, // #1 = $src1
/*16*/        OPC_MoveChild, 2,
/*18*/        OPC_Scope, 29, /*->49*/ // 2 children in Scope
/*20*/          OPC_CheckCondCode, ISD::SETLT,
/*22*/          OPC_MoveParent,
/*23*/          OPC_CheckType, MVT::i1,
/*25*/          OPC_MoveParent,
/*26*/          OPC_MoveChild, 1,
/*28*/          OPC_CheckSame, 1,
/*30*/          OPC_MoveParent,
/*31*/          OPC_MoveChild, 2,
/*33*/          OPC_CheckSame, 0,
/*35*/          OPC_MoveParent,
/*36*/          OPC_CheckType, MVT::i64,
/*38*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasV3TOps())
/*40*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::MAXw_dd), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (select:i64 (setcc:i1 DoubleRegs:i64:$src2, DoubleRegs:i64:$src1, SETLT:Other), DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 206
                // Dst: (MAXw_dd:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*49*/        /*Scope*/ 29, /*->79*/
/*50*/          OPC_CheckCondCode, ISD::SETGT,
/*52*/          OPC_MoveParent,
/*53*/          OPC_CheckType, MVT::i1,
/*55*/          OPC_MoveParent,
/*56*/          OPC_MoveChild, 1,
/*58*/          OPC_CheckSame, 1,
/*60*/          OPC_MoveParent,
/*61*/          OPC_MoveChild, 2,
/*63*/          OPC_CheckSame, 0,
/*65*/          OPC_MoveParent,
/*66*/          OPC_CheckType, MVT::i64,
/*68*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasV3TOps())
/*70*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::MINw_dd), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (select:i64 (setcc:i1 DoubleRegs:i64:$src2, DoubleRegs:i64:$src1, SETGT:Other), DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 206
                // Dst: (MINw_dd:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*79*/        0, /*End of Scope*/
/*80*/      /*Scope*/ 102, /*->183*/
/*81*/        OPC_RecordChild0, // #0 = $src1
/*82*/        OPC_CheckChild0Type, MVT::i1,
/*84*/        OPC_RecordChild1, // #1 = $src2
/*85*/        OPC_Scope, 33, /*->120*/ // 4 children in Scope
/*87*/          OPC_MoveChild, 1,
/*89*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*92*/          OPC_CheckPredicate, 0, // Predicate_s12ImmPred
/*94*/          OPC_MoveParent,
/*95*/          OPC_RecordChild2, // #2 = $src3
/*96*/          OPC_MoveChild, 2,
/*98*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*101*/         OPC_CheckPredicate, 0, // Predicate_s12ImmPred
/*103*/         OPC_MoveParent,
/*104*/         OPC_CheckType, MVT::i32,
/*106*/         OPC_EmitConvertToTarget, 1,
/*108*/         OPC_EmitConvertToTarget, 2,
/*110*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::TFR_condset_ii), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 3, 4, 
                // Src: (select:i32 PredRegs:i1:$src1, (imm:i32)<<P:Predicate_s12ImmPred>>:$src2, (imm:i32)<<P:Predicate_s12ImmPred>>:$src3) - Complexity = 111
                // Dst: (TFR_condset_ii:i32 PredRegs:i1:$src1, (imm:i32):$src2, (imm:i32):$src3)
/*120*/       /*Scope*/ 23, /*->144*/
/*121*/         OPC_RecordChild2, // #2 = $src3
/*122*/         OPC_MoveChild, 2,
/*124*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*127*/         OPC_CheckPredicate, 0, // Predicate_s12ImmPred
/*129*/         OPC_MoveParent,
/*130*/         OPC_CheckType, MVT::i32,
/*132*/         OPC_EmitConvertToTarget, 2,
/*134*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::TFR_condset_ri), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (select:i32 PredRegs:i1:$src1, IntRegs:i32:$src2, (imm:i32)<<P:Predicate_s12ImmPred>>:$src3) - Complexity = 107
                // Dst: (TFR_condset_ri:i32 PredRegs:i1:$src1, IntRegs:i32:$src2, (imm:i32):$src3)
/*144*/       /*Scope*/ 23, /*->168*/
/*145*/         OPC_MoveChild, 1,
/*147*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*150*/         OPC_CheckPredicate, 0, // Predicate_s12ImmPred
/*152*/         OPC_MoveParent,
/*153*/         OPC_RecordChild2, // #2 = $src3
/*154*/         OPC_CheckType, MVT::i32,
/*156*/         OPC_EmitConvertToTarget, 1,
/*158*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::TFR_condset_ir), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 3, 2, 
                // Src: (select:i32 PredRegs:i1:$src1, (imm:i32)<<P:Predicate_s12ImmPred>>:$src2, IntRegs:i32:$src3) - Complexity = 107
                // Dst: (TFR_condset_ir:i32 PredRegs:i1:$src1, (imm:i32):$src2, IntRegs:i32:$src3)
/*168*/       /*Scope*/ 13, /*->182*/
/*169*/         OPC_RecordChild2, // #2 = $src3
/*170*/         OPC_CheckType, MVT::i32,
/*172*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::TFR_condset_rr), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (select:i32 PredRegs:i1:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 103
                // Dst: (TFR_condset_rr:i32 PredRegs:i1:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*182*/       0, /*End of Scope*/
/*183*/     /*Scope*/ 57, /*->241*/
/*184*/       OPC_MoveChild, 0,
/*186*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*189*/       OPC_RecordChild0, // #0 = $src1
/*190*/       OPC_MoveChild, 1,
/*192*/       OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*203*/       OPC_MoveParent,
/*204*/       OPC_CheckType, MVT::i1,
/*206*/       OPC_MoveParent,
/*207*/       OPC_RecordChild1, // #1 = $src2
/*208*/       OPC_MoveChild, 1,
/*210*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*213*/       OPC_CheckPredicate, 1, // Predicate_s8ImmPred
/*215*/       OPC_MoveParent,
/*216*/       OPC_RecordChild2, // #2 = $src3
/*217*/       OPC_MoveChild, 2,
/*219*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*222*/       OPC_CheckPredicate, 1, // Predicate_s8ImmPred
/*224*/       OPC_MoveParent,
/*225*/       OPC_CheckType, MVT::i32,
/*227*/       OPC_EmitConvertToTarget, 2,
/*229*/       OPC_EmitConvertToTarget, 1,
/*231*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::TFR_condset_ii), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 3, 4, 
              // Src: (select:i32 (xor:i1 PredRegs:i1:$src1, -1:i1), (imm:i32)<<P:Predicate_s8ImmPred>>:$src2, (imm:i32)<<P:Predicate_s8ImmPred>>:$src3) - Complexity = 19
              // Dst: (TFR_condset_ii:i32 PredRegs:i1:$src1, (imm:i32)<<P:Predicate_s8ImmPred>>:$src3, (imm:i32)<<P:Predicate_s8ImmPred>>:$src2)
/*241*/     /*Scope*/ 82, /*->324*/
/*242*/       OPC_RecordChild0, // #0 = $src1
/*243*/       OPC_CheckChild0Type, MVT::i1,
/*245*/       OPC_RecordChild1, // #1 = $src2
/*246*/       OPC_Scope, 51, /*->299*/ // 2 children in Scope
/*248*/         OPC_MoveChild, 1,
/*250*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*253*/         OPC_CheckPredicate, 1, // Predicate_s8ImmPred
/*255*/         OPC_MoveParent,
/*256*/         OPC_RecordChild2, // #2 = $src3
/*257*/         OPC_Scope, 24, /*->283*/ // 2 children in Scope
/*259*/           OPC_MoveChild, 2,
/*261*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*264*/           OPC_CheckPredicate, 1, // Predicate_s8ImmPred
/*266*/           OPC_MoveParent,
/*267*/           OPC_CheckType, MVT::i32,
/*269*/           OPC_EmitConvertToTarget, 1,
/*271*/           OPC_EmitConvertToTarget, 2,
/*273*/           OPC_MorphNodeTo, TARGET_VAL(Hexagon::MUX_ii), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (select:i32 PredRegs:i1:$src1, (imm:i32)<<P:Predicate_s8ImmPred>>:$src2, (imm:i32)<<P:Predicate_s8ImmPred>>:$src3) - Complexity = 11
                  // Dst: (MUX_ii:i32 PredRegs:i1:$src1, (imm:i32):$src2, (imm:i32):$src3)
/*283*/         /*Scope*/ 14, /*->298*/
/*284*/           OPC_CheckType, MVT::i32,
/*286*/           OPC_EmitConvertToTarget, 1,
/*288*/           OPC_MorphNodeTo, TARGET_VAL(Hexagon::MUX_ir), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 3, 2, 
                  // Src: (select:i32 PredRegs:i1:$src1, (imm:i32)<<P:Predicate_s8ImmPred>>:$src2, IntRegs:i32:$src3) - Complexity = 7
                  // Dst: (MUX_ir:i32 PredRegs:i1:$src1, (imm:i32):$src2, IntRegs:i32:$src3)
/*298*/         0, /*End of Scope*/
/*299*/       /*Scope*/ 23, /*->323*/
/*300*/         OPC_RecordChild2, // #2 = $src3
/*301*/         OPC_MoveChild, 2,
/*303*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*306*/         OPC_CheckPredicate, 1, // Predicate_s8ImmPred
/*308*/         OPC_MoveParent,
/*309*/         OPC_CheckType, MVT::i32,
/*311*/         OPC_EmitConvertToTarget, 2,
/*313*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::MUX_ri), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (select:i32 PredRegs:i1:$src1, IntRegs:i32:$src2, (imm:i32)<<P:Predicate_s8ImmPred>>:$src3) - Complexity = 7
                // Dst: (MUX_ri:i32 PredRegs:i1:$src1, IntRegs:i32:$src2, (imm:i32):$src3)
/*323*/       0, /*End of Scope*/
/*324*/     /*Scope*/ 101, /*->426*/
/*325*/       OPC_MoveChild, 0,
/*327*/       OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*330*/       OPC_RecordChild0, // #0 = $src2
/*331*/       OPC_CheckChild0Type, MVT::i32,
/*333*/       OPC_RecordChild1, // #1 = $src1
/*334*/       OPC_MoveChild, 2,
/*336*/       OPC_Scope, 27, /*->365*/ // 3 children in Scope
/*338*/         OPC_CheckCondCode, ISD::SETLT,
/*340*/         OPC_MoveParent,
/*341*/         OPC_CheckType, MVT::i1,
/*343*/         OPC_MoveParent,
/*344*/         OPC_MoveChild, 1,
/*346*/         OPC_CheckSame, 1,
/*348*/         OPC_MoveParent,
/*349*/         OPC_MoveChild, 2,
/*351*/         OPC_CheckSame, 0,
/*353*/         OPC_MoveParent,
/*354*/         OPC_CheckType, MVT::i32,
/*356*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::MAXw_rr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (select:i32 (setcc:i1 IntRegs:i32:$src2, IntRegs:i32:$src1, SETLT:Other), IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 6
                // Dst: (MAXw_rr:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*365*/       /*Scope*/ 27, /*->393*/
/*366*/         OPC_CheckCondCode, ISD::SETGT,
/*368*/         OPC_MoveParent,
/*369*/         OPC_CheckType, MVT::i1,
/*371*/         OPC_MoveParent,
/*372*/         OPC_MoveChild, 1,
/*374*/         OPC_CheckSame, 1,
/*376*/         OPC_MoveParent,
/*377*/         OPC_MoveChild, 2,
/*379*/         OPC_CheckSame, 0,
/*381*/         OPC_MoveParent,
/*382*/         OPC_CheckType, MVT::i32,
/*384*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::MINw_rr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (select:i32 (setcc:i1 IntRegs:i32:$src2, IntRegs:i32:$src1, SETGT:Other), IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 6
                // Dst: (MINw_rr:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*393*/       /*Scope*/ 31, /*->425*/
/*394*/         OPC_CheckCondCode, ISD::SETLT,
/*396*/         OPC_MoveParent,
/*397*/         OPC_CheckType, MVT::i1,
/*399*/         OPC_MoveParent,
/*400*/         OPC_RecordChild1, // #2 = $src3
/*401*/         OPC_RecordChild2, // #3 = $src4
/*402*/         OPC_CheckType, MVT::i32,
/*404*/         OPC_CheckPatternPredicate, 1, // (Subtarget.hasV2TOpsOnly())
/*406*/         OPC_EmitNode, TARGET_VAL(Hexagon::CMPLTrr), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1,  // Results = #4 
/*415*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::TFR_condset_rr), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                // Src: (select:i32 (setcc:i1 IntRegs:i32:$src1, IntRegs:i32:$src2, SETLT:Other), IntRegs:i32:$src3, IntRegs:i32:$src4) - Complexity = 6
                // Dst: (TFR_condset_rr:i32 (CMPLTrr:i1 IntRegs:i32:$src1, IntRegs:i32:$src2), IntRegs:i32:$src4, IntRegs:i32:$src3)
/*425*/       0, /*End of Scope*/
/*426*/     /*Scope*/ 7|128,1/*135*/, /*->563*/
/*428*/       OPC_RecordChild0, // #0 = $src1
/*429*/       OPC_CheckChild0Type, MVT::i1,
/*431*/       OPC_RecordChild1, // #1 = $src2
/*432*/       OPC_RecordChild2, // #2 = $src3
/*433*/       OPC_SwitchType /*3 cases */, 10,  MVT::i32,// ->446
/*436*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::MUX_rr), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (select:i32 PredRegs:i1:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 3
                // Dst: (MUX_rr:i32 PredRegs:i1:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
              /*SwitchType*/ 35,  MVT::i1,// ->483
/*448*/         OPC_EmitNode, TARGET_VAL(Hexagon::AND_pp), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1,  // Results = #3 
/*457*/         OPC_EmitNode, TARGET_VAL(Hexagon::NOT_p), 0,
                    1/*#VTs*/, MVT::i1, 1/*#Ops*/, 0,  // Results = #4 
/*465*/         OPC_EmitNode, TARGET_VAL(Hexagon::AND_pp), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 4, 2,  // Results = #5 
/*474*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::OR_pp), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 3, 5, 
                // Src: (select:i1 PredRegs:i1:$src1, PredRegs:i1:$src2, PredRegs:i1:$src3) - Complexity = 3
                // Dst: (OR_pp:i1 (AND_pp:i1 PredRegs:i1:$src1, PredRegs:i1:$src2), (AND_pp:i1 (NOT_p:i1 PredRegs:i1:$src1), PredRegs:i1:$src3))
              /*SwitchType*/ 77,  MVT::i64,// ->562
/*485*/         OPC_EmitInteger, MVT::i32, Hexagon::subreg_hireg,
/*488*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4 
/*497*/         OPC_EmitInteger, MVT::i32, Hexagon::subreg_hireg,
/*500*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 5,  // Results = #6 
/*509*/         OPC_EmitNode, TARGET_VAL(Hexagon::MUX_rr), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 4, 6,  // Results = #7 
/*519*/         OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*522*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 8,  // Results = #9 
/*531*/         OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*534*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 10,  // Results = #11 
/*543*/         OPC_EmitNode, TARGET_VAL(Hexagon::MUX_rr), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 9, 11,  // Results = #12 
/*553*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::COMBINE_rr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 7, 12, 
                // Src: (select:i64 PredRegs:i1:$src1, DoubleRegs:i64:$src2, DoubleRegs:i64:$src3) - Complexity = 3
                // Dst: (COMBINE_rr:i64 (MUX_rr:i32 PredRegs:i1:$src1, (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src2, subreg_hireg:i32), (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src3, subreg_hireg:i32)), (MUX_rr:i32 PredRegs:i1:$src1, (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src2, subreg_loreg:i32), (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src3, subreg_loreg:i32)))
              0, // EndSwitchType
/*563*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 107|128,32/*4203*/,  TARGET_VAL(ISD::STORE),// ->4771
/*568*/     OPC_RecordMemRef,
/*569*/     OPC_RecordNode,   // #0 = 'st' chained node
/*570*/     OPC_Scope, 11|128,1/*139*/, /*->712*/ // 7 children in Scope
/*573*/       OPC_RecordChild1, // #1 = $src1
/*574*/       OPC_Scope, 48, /*->624*/ // 2 children in Scope
/*576*/         OPC_CheckChild1Type, MVT::i64,
/*578*/         OPC_MoveChild, 2,
/*580*/         OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*583*/         OPC_MoveChild, 0,
/*585*/         OPC_CheckOpcode, TARGET_VAL(HexagonISD::CONST32_GP),
/*588*/         OPC_RecordChild0, // #2 = $global
/*589*/         OPC_MoveChild, 0,
/*591*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*594*/         OPC_MoveParent,
/*595*/         OPC_MoveParent,
/*596*/         OPC_RecordChild1, // #3 = $offset
/*597*/         OPC_MoveChild, 1,
/*599*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*602*/         OPC_CheckPredicate, 2, // Predicate_u16ImmPred
/*604*/         OPC_MoveParent,
/*605*/         OPC_CheckType, MVT::i32,
/*607*/         OPC_MoveParent,
/*608*/         OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*610*/         OPC_CheckPredicate, 4, // Predicate_store
/*612*/         OPC_EmitMergeInputChains1_0,
/*613*/         OPC_EmitConvertToTarget, 3,
/*615*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrid_GP), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 2, 4, 1, 
                // Src: (st DoubleRegs:i64:$src1, (add:i32 (HexagonCONST32_GP:i32 (tglobaladdr:i32):$global), (imm:i32)<<P:Predicate_u16ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 117
                // Dst: (STrid_GP (tglobaladdr:i32):$global, (imm:i32)<<P:Predicate_u16ImmPred>>:$offset, DoubleRegs:i64:$src1)
/*624*/       /*Scope*/ 86, /*->711*/
/*625*/         OPC_CheckChild1Type, MVT::i32,
/*627*/         OPC_MoveChild, 2,
/*629*/         OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*632*/         OPC_MoveChild, 0,
/*634*/         OPC_CheckOpcode, TARGET_VAL(HexagonISD::CONST32_GP),
/*637*/         OPC_RecordChild0, // #2 = $global
/*638*/         OPC_MoveChild, 0,
/*640*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*643*/         OPC_MoveParent,
/*644*/         OPC_MoveParent,
/*645*/         OPC_RecordChild1, // #3 = $offset
/*646*/         OPC_MoveChild, 1,
/*648*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*651*/         OPC_CheckPredicate, 2, // Predicate_u16ImmPred
/*653*/         OPC_MoveParent,
/*654*/         OPC_CheckType, MVT::i32,
/*656*/         OPC_MoveParent,
/*657*/         OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*659*/         OPC_Scope, 14, /*->675*/ // 2 children in Scope
/*661*/           OPC_CheckPredicate, 4, // Predicate_store
/*663*/           OPC_EmitMergeInputChains1_0,
/*664*/           OPC_EmitConvertToTarget, 3,
/*666*/           OPC_MorphNodeTo, TARGET_VAL(Hexagon::STriw_GP), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 2, 4, 1, 
                  // Src: (st IntRegs:i32:$src1, (add:i32 (HexagonCONST32_GP:i32 (tglobaladdr:i32):$global), (imm:i32)<<P:Predicate_u16ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 117
                  // Dst: (STriw_GP (tglobaladdr:i32):$global, (imm:i32)<<P:Predicate_u16ImmPred>>:$offset, IntRegs:i32:$src1)
/*675*/         /*Scope*/ 34, /*->710*/
/*676*/           OPC_CheckPredicate, 5, // Predicate_truncstore
/*678*/           OPC_Scope, 14, /*->694*/ // 2 children in Scope
/*680*/             OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*682*/             OPC_EmitMergeInputChains1_0,
/*683*/             OPC_EmitConvertToTarget, 3,
/*685*/             OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrih_GP), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 4, 1, 
                    // Src: (st IntRegs:i32:$src1, (add:i32 (HexagonCONST32_GP:i32 (tglobaladdr:i32):$global), (imm:i32)<<P:Predicate_u16ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 117
                    // Dst: (STrih_GP (tglobaladdr:i32):$global, (imm:i32)<<P:Predicate_u16ImmPred>>:$offset, IntRegs:i32:$src1)
/*694*/           /*Scope*/ 14, /*->709*/
/*695*/             OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*697*/             OPC_EmitMergeInputChains1_0,
/*698*/             OPC_EmitConvertToTarget, 3,
/*700*/             OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrib_GP), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 4, 1, 
                    // Src: (st IntRegs:i32:$src1, (add:i32 (HexagonCONST32_GP:i32 (tglobaladdr:i32):$global), (imm:i32)<<P:Predicate_u16ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 117
                    // Dst: (STrib_GP (tglobaladdr:i32):$global, (imm:i32)<<P:Predicate_u16ImmPred>>:$offset, IntRegs:i32:$src1)
/*709*/           0, /*End of Scope*/
/*710*/         0, /*End of Scope*/
/*711*/       0, /*End of Scope*/
/*712*/     /*Scope*/ 53, /*->766*/
/*713*/       OPC_MoveChild, 1,
/*715*/       OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*726*/       OPC_CheckType, MVT::i1,
/*728*/       OPC_MoveParent,
/*729*/       OPC_MoveChild, 2,
/*731*/       OPC_CheckOpcode, TARGET_VAL(HexagonISD::CONST32_GP),
/*734*/       OPC_RecordChild0, // #1 = $global
/*735*/       OPC_MoveChild, 0,
/*737*/       OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*740*/       OPC_MoveParent,
/*741*/       OPC_MoveParent,
/*742*/       OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*744*/       OPC_CheckPredicate, 4, // Predicate_store
/*746*/       OPC_EmitMergeInputChains1_0,
/*747*/       OPC_EmitInteger, MVT::i32, 1, 
/*750*/       OPC_EmitNode, TARGET_VAL(Hexagon::TFRI), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3 
/*758*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::STb_GP), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (st -1:i1, (HexagonCONST32_GP:iPTR (tglobaladdr:iPTR):$global))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 115
              // Dst: (STb_GP (tglobaladdr:i32):$global, (TFRI:i32 1:i32))
/*766*/     /*Scope*/ 101, /*->868*/
/*767*/       OPC_RecordChild1, // #1 = $src1
/*768*/       OPC_Scope, 32, /*->802*/ // 2 children in Scope
/*770*/         OPC_CheckChild1Type, MVT::i64,
/*772*/         OPC_MoveChild, 2,
/*774*/         OPC_CheckOpcode, TARGET_VAL(HexagonISD::CONST32_GP),
/*777*/         OPC_RecordChild0, // #2 = $global
/*778*/         OPC_MoveChild, 0,
/*780*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*783*/         OPC_MoveParent,
/*784*/         OPC_MoveParent,
/*785*/         OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*787*/         OPC_CheckPredicate, 4, // Predicate_store
/*789*/         OPC_EmitMergeInputChains1_0,
/*790*/         OPC_EmitInteger, MVT::i32, 0, 
/*793*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrid_GP), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 2, 3, 1, 
                // Src: (st DoubleRegs:i64:$src1, (HexagonCONST32_GP:iPTR (tglobaladdr:iPTR):$global))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 110
                // Dst: (STrid_GP (tglobaladdr:i32):$global, 0:i32, DoubleRegs:i64:$src1)
/*802*/       /*Scope*/ 64, /*->867*/
/*803*/         OPC_CheckChild1Type, MVT::i32,
/*805*/         OPC_MoveChild, 2,
/*807*/         OPC_CheckOpcode, TARGET_VAL(HexagonISD::CONST32_GP),
/*810*/         OPC_RecordChild0, // #2 = $global
/*811*/         OPC_MoveChild, 0,
/*813*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*816*/         OPC_MoveParent,
/*817*/         OPC_MoveParent,
/*818*/         OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*820*/         OPC_Scope, 15, /*->837*/ // 2 children in Scope
/*822*/           OPC_CheckPredicate, 4, // Predicate_store
/*824*/           OPC_EmitMergeInputChains1_0,
/*825*/           OPC_EmitInteger, MVT::i32, 0, 
/*828*/           OPC_MorphNodeTo, TARGET_VAL(Hexagon::STriw_GP), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 2, 3, 1, 
                  // Src: (st IntRegs:i32:$src1, (HexagonCONST32_GP:iPTR (tglobaladdr:iPTR):$global))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 110
                  // Dst: (STriw_GP (tglobaladdr:i32):$global, 0:i32, IntRegs:i32:$src1)
/*837*/         /*Scope*/ 28, /*->866*/
/*838*/           OPC_CheckPredicate, 5, // Predicate_truncstore
/*840*/           OPC_Scope, 11, /*->853*/ // 2 children in Scope
/*842*/             OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*844*/             OPC_EmitMergeInputChains1_0,
/*845*/             OPC_MorphNodeTo, TARGET_VAL(Hexagon::STh_GP), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 2, 1, 
                    // Src: (st IntRegs:i32:$src1, (HexagonCONST32_GP:iPTR (tglobaladdr:iPTR):$global))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 110
                    // Dst: (STh_GP (tglobaladdr:i32):$global, IntRegs:i32:$src1)
/*853*/           /*Scope*/ 11, /*->865*/
/*854*/             OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*856*/             OPC_EmitMergeInputChains1_0,
/*857*/             OPC_MorphNodeTo, TARGET_VAL(Hexagon::STb_GP), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 2, 1, 
                    // Src: (st IntRegs:i32:$src1, (HexagonCONST32_GP:iPTR (tglobaladdr:iPTR):$global))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 110
                    // Dst: (STb_GP (tglobaladdr:i32):$global, IntRegs:i32:$src1)
/*865*/           0, /*End of Scope*/
/*866*/         0, /*End of Scope*/
/*867*/       0, /*End of Scope*/
/*868*/     /*Scope*/ 13|128,21/*2701*/, /*->3571*/
/*870*/       OPC_MoveChild, 1,
/*872*/       OPC_SwitchOpcode /*4 cases */, 30|128,8/*1054*/,  TARGET_VAL(ISD::ADD),// ->1931
/*877*/         OPC_Scope, 18|128,4/*530*/, /*->1410*/ // 4 children in Scope
/*880*/           OPC_MoveChild, 0,
/*882*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*885*/           OPC_RecordMemRef,
/*886*/           OPC_RecordNode, // #1 = 'ld' chained node
/*887*/           OPC_CheckFoldableChainNode,
/*888*/           OPC_Scope, 23|128,1/*151*/, /*->1042*/ // 7 children in Scope
/*891*/             OPC_RecordChild1, // #2 = $addr
/*892*/             OPC_CheckChild1Type, MVT::i32,
/*894*/             OPC_CheckPredicate, 8, // Predicate_unindexedload
/*896*/             OPC_Scope, 44, /*->942*/ // 2 children in Scope
/*898*/               OPC_CheckPredicate, 9, // Predicate_load
/*900*/               OPC_MoveParent,
/*901*/               OPC_RecordChild1, // #3 = $addend
/*902*/               OPC_MoveChild, 1,
/*904*/               OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*907*/               OPC_CheckPredicate, 10, // Predicate_m6ImmPred
/*909*/               OPC_MoveParent,
/*910*/               OPC_CheckType, MVT::i32,
/*912*/               OPC_MoveParent,
/*913*/               OPC_MoveChild, 2,
/*915*/               OPC_CheckSame, 2,
/*917*/               OPC_MoveParent,
/*918*/               OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*920*/               OPC_CheckPredicate, 4, // Predicate_store
/*922*/               OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*924*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRriU6_2:$addr #4 #5
/*927*/               OPC_EmitMergeInputChains, 2, 0, 1, 
/*931*/               OPC_EmitConvertToTarget, 3,
/*933*/               OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMw_ADDSUBi_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 6, 
                      // Src: (st (add:i32 (ld:i32 ADDRriU6_2:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32)<<P:Predicate_m6ImmPred>>:$addend), ADDRriU6_2:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 63
                      // Dst: (MEMw_ADDSUBi_MEM_V4 ADDRriU6_2:i32:$addr, (imm:i32):$addend)
/*942*/             /*Scope*/ 98, /*->1041*/
/*943*/               OPC_CheckPredicate, 11, // Predicate_sextload
/*945*/               OPC_Scope, 46, /*->993*/ // 2 children in Scope
/*947*/                 OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*949*/                 OPC_MoveParent,
/*950*/                 OPC_RecordChild1, // #3 = $addend
/*951*/                 OPC_MoveChild, 1,
/*953*/                 OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*956*/                 OPC_CheckPredicate, 10, // Predicate_m6ImmPred
/*958*/                 OPC_MoveParent,
/*959*/                 OPC_CheckType, MVT::i32,
/*961*/                 OPC_MoveParent,
/*962*/                 OPC_MoveChild, 2,
/*964*/                 OPC_CheckSame, 2,
/*966*/                 OPC_MoveParent,
/*967*/                 OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*969*/                 OPC_CheckPredicate, 5, // Predicate_truncstore
/*971*/                 OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*973*/                 OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*975*/                 OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRriU6_1:$addr #4 #5
/*978*/                 OPC_EmitMergeInputChains, 2, 0, 1, 
/*982*/                 OPC_EmitConvertToTarget, 3,
/*984*/                 OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMh_ADDSUBi_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                            0/*#VTs*/, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (add:i32 (ld:i32 ADDRriU6_1:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, (imm:i32)<<P:Predicate_m6ImmPred>>:$addend), ADDRriU6_1:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 63
                        // Dst: (MEMh_ADDSUBi_MEM_V4 ADDRriU6_1:i32:$addr, (imm:i32):$addend)
/*993*/               /*Scope*/ 46, /*->1040*/
/*994*/                 OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*996*/                 OPC_MoveParent,
/*997*/                 OPC_RecordChild1, // #3 = $addend
/*998*/                 OPC_MoveChild, 1,
/*1000*/                OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1003*/                OPC_CheckPredicate, 10, // Predicate_m6ImmPred
/*1005*/                OPC_MoveParent,
/*1006*/                OPC_CheckType, MVT::i32,
/*1008*/                OPC_MoveParent,
/*1009*/                OPC_MoveChild, 2,
/*1011*/                OPC_CheckSame, 2,
/*1013*/                OPC_MoveParent,
/*1014*/                OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1016*/                OPC_CheckPredicate, 5, // Predicate_truncstore
/*1018*/                OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1020*/                OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*1022*/                OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRriU6_0:$addr #4 #5
/*1025*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*1029*/                OPC_EmitConvertToTarget, 3,
/*1031*/                OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMb_ADDSUBi_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                            0/*#VTs*/, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (add:i32 (ld:i32 ADDRriU6_0:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i32)<<P:Predicate_m6ImmPred>>:$addend), ADDRriU6_0:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 63
                        // Dst: (MEMb_ADDSUBi_MEM_V4 ADDRriU6_0:i32:$addr, (imm:i32):$addend)
/*1040*/              0, /*End of Scope*/
/*1041*/            0, /*End of Scope*/
/*1042*/          /*Scope*/ 76, /*->1119*/
/*1043*/            OPC_MoveChild, 1,
/*1045*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1048*/            OPC_RecordChild0, // #2 = $base
/*1049*/            OPC_RecordChild1, // #3 = $offset
/*1050*/            OPC_MoveChild, 1,
/*1052*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1055*/            OPC_CheckPredicate, 14, // Predicate_u6_2ImmPred
/*1057*/            OPC_MoveParent,
/*1058*/            OPC_CheckType, MVT::i32,
/*1060*/            OPC_MoveParent,
/*1061*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*1063*/            OPC_CheckPredicate, 9, // Predicate_load
/*1065*/            OPC_MoveParent,
/*1066*/            OPC_RecordChild1, // #4 = $addend
/*1067*/            OPC_MoveChild, 1,
/*1069*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1072*/            OPC_CheckPredicate, 10, // Predicate_m6ImmPred
/*1074*/            OPC_MoveParent,
/*1075*/            OPC_CheckType, MVT::i32,
/*1077*/            OPC_MoveParent,
/*1078*/            OPC_MoveChild, 2,
/*1080*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1083*/            OPC_MoveChild, 0,
/*1085*/            OPC_CheckSame, 2,
/*1087*/            OPC_MoveParent,
/*1088*/            OPC_MoveChild, 1,
/*1090*/            OPC_CheckSame, 3,
/*1092*/            OPC_MoveParent,
/*1093*/            OPC_CheckType, MVT::i32,
/*1095*/            OPC_MoveParent,
/*1096*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1098*/            OPC_CheckPredicate, 4, // Predicate_store
/*1100*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*1102*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1106*/            OPC_EmitConvertToTarget, 3,
/*1108*/            OPC_EmitConvertToTarget, 4,
/*1110*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMw_ADDSUBi_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 5, 6, 
                    // Src: (st (add:i32 (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_2ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32)<<P:Predicate_m6ImmPred>>:$addend), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_2ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 59
                    // Dst: (MEMw_ADDSUBi_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, (imm:i32):$addend)
/*1119*/          /*Scope*/ 39, /*->1159*/
/*1120*/            OPC_RecordChild1, // #2 = $addr
/*1121*/            OPC_CheckChild1Type, MVT::i32,
/*1123*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*1125*/            OPC_CheckPredicate, 9, // Predicate_load
/*1127*/            OPC_MoveParent,
/*1128*/            OPC_RecordChild1, // #3 = $addend
/*1129*/            OPC_CheckType, MVT::i32,
/*1131*/            OPC_MoveParent,
/*1132*/            OPC_MoveChild, 2,
/*1134*/            OPC_CheckSame, 2,
/*1136*/            OPC_MoveParent,
/*1137*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1139*/            OPC_CheckPredicate, 4, // Predicate_store
/*1141*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*1143*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRriU6_2:$addr #4 #5
/*1146*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1150*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMw_ADDr_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                    // Src: (st (add:i32 (ld:i32 ADDRriU6_2:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>, IntRegs:i32:$addend), ADDRriU6_2:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 59
                    // Dst: (MEMw_ADDr_MEM_V4 ADDRriU6_2:i32:$addr, IntRegs:i32:$addend)
/*1159*/          /*Scope*/ 80, /*->1240*/
/*1160*/            OPC_MoveChild, 1,
/*1162*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1165*/            OPC_RecordChild0, // #2 = $base
/*1166*/            OPC_RecordChild1, // #3 = $offset
/*1167*/            OPC_MoveChild, 1,
/*1169*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1172*/            OPC_CheckPredicate, 15, // Predicate_u6_1ImmPred
/*1174*/            OPC_MoveParent,
/*1175*/            OPC_CheckType, MVT::i32,
/*1177*/            OPC_MoveParent,
/*1178*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*1180*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*1182*/            OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*1184*/            OPC_MoveParent,
/*1185*/            OPC_RecordChild1, // #4 = $addend
/*1186*/            OPC_MoveChild, 1,
/*1188*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1191*/            OPC_CheckPredicate, 10, // Predicate_m6ImmPred
/*1193*/            OPC_MoveParent,
/*1194*/            OPC_CheckType, MVT::i32,
/*1196*/            OPC_MoveParent,
/*1197*/            OPC_MoveChild, 2,
/*1199*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1202*/            OPC_MoveChild, 0,
/*1204*/            OPC_CheckSame, 2,
/*1206*/            OPC_MoveParent,
/*1207*/            OPC_MoveChild, 1,
/*1209*/            OPC_CheckSame, 3,
/*1211*/            OPC_MoveParent,
/*1212*/            OPC_CheckType, MVT::i32,
/*1214*/            OPC_MoveParent,
/*1215*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1217*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*1219*/            OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*1221*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*1223*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1227*/            OPC_EmitConvertToTarget, 3,
/*1229*/            OPC_EmitConvertToTarget, 4,
/*1231*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMh_ADDSUBi_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 5, 6, 
                    // Src: (st (add:i32 (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_1ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, (imm:i32)<<P:Predicate_m6ImmPred>>:$addend), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_1ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 59
                    // Dst: (MEMh_ADDSUBi_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, (imm:i32):$addend)
/*1240*/          /*Scope*/ 43, /*->1284*/
/*1241*/            OPC_RecordChild1, // #2 = $addr
/*1242*/            OPC_CheckChild1Type, MVT::i32,
/*1244*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*1246*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*1248*/            OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*1250*/            OPC_MoveParent,
/*1251*/            OPC_RecordChild1, // #3 = $addend
/*1252*/            OPC_CheckType, MVT::i32,
/*1254*/            OPC_MoveParent,
/*1255*/            OPC_MoveChild, 2,
/*1257*/            OPC_CheckSame, 2,
/*1259*/            OPC_MoveParent,
/*1260*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1262*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*1264*/            OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*1266*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*1268*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRriU6_1:$addr #4 #5
/*1271*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1275*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMh_ADDr_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                    // Src: (st (add:i32 (ld:i32 ADDRriU6_1:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, IntRegs:i32:$addend), ADDRriU6_1:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 59
                    // Dst: (MEMh_ADDr_MEM_V4 ADDRriU6_1:i32:$addr, IntRegs:i32:$addend)
/*1284*/          /*Scope*/ 80, /*->1365*/
/*1285*/            OPC_MoveChild, 1,
/*1287*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1290*/            OPC_RecordChild0, // #2 = $base
/*1291*/            OPC_RecordChild1, // #3 = $offset
/*1292*/            OPC_MoveChild, 1,
/*1294*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1297*/            OPC_CheckPredicate, 16, // Predicate_u6_0ImmPred
/*1299*/            OPC_MoveParent,
/*1300*/            OPC_CheckType, MVT::i32,
/*1302*/            OPC_MoveParent,
/*1303*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*1305*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*1307*/            OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*1309*/            OPC_MoveParent,
/*1310*/            OPC_RecordChild1, // #4 = $addend
/*1311*/            OPC_MoveChild, 1,
/*1313*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1316*/            OPC_CheckPredicate, 10, // Predicate_m6ImmPred
/*1318*/            OPC_MoveParent,
/*1319*/            OPC_CheckType, MVT::i32,
/*1321*/            OPC_MoveParent,
/*1322*/            OPC_MoveChild, 2,
/*1324*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1327*/            OPC_MoveChild, 0,
/*1329*/            OPC_CheckSame, 2,
/*1331*/            OPC_MoveParent,
/*1332*/            OPC_MoveChild, 1,
/*1334*/            OPC_CheckSame, 3,
/*1336*/            OPC_MoveParent,
/*1337*/            OPC_CheckType, MVT::i32,
/*1339*/            OPC_MoveParent,
/*1340*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1342*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*1344*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1346*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*1348*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1352*/            OPC_EmitConvertToTarget, 3,
/*1354*/            OPC_EmitConvertToTarget, 4,
/*1356*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMb_ADDSUBi_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 5, 6, 
                    // Src: (st (add:i32 (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_0ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, (imm:i32)<<P:Predicate_m6ImmPred>>:$addend), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_0ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 59
                    // Dst: (MEMb_ADDSUBi_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, (imm:i32):$addend)
/*1365*/          /*Scope*/ 43, /*->1409*/
/*1366*/            OPC_RecordChild1, // #2 = $addr
/*1367*/            OPC_CheckChild1Type, MVT::i32,
/*1369*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*1371*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*1373*/            OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*1375*/            OPC_MoveParent,
/*1376*/            OPC_RecordChild1, // #3 = $addend
/*1377*/            OPC_CheckType, MVT::i32,
/*1379*/            OPC_MoveParent,
/*1380*/            OPC_MoveChild, 2,
/*1382*/            OPC_CheckSame, 2,
/*1384*/            OPC_MoveParent,
/*1385*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1387*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*1389*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1391*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*1393*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRriU6_0:$addr #4 #5
/*1396*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1400*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMb_ADDr_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                    // Src: (st (add:i32 (ld:i32 ADDRriU6_0:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, IntRegs:i32:$addend), ADDRriU6_0:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 59
                    // Dst: (MEMb_ADDr_MEM_V4 ADDRriU6_0:i32:$addr, IntRegs:i32:$addend)
/*1409*/          0, /*End of Scope*/
/*1410*/        /*Scope*/ 127, /*->1538*/
/*1411*/          OPC_RecordChild0, // #1 = $addend
/*1412*/          OPC_MoveChild, 1,
/*1414*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1417*/          OPC_RecordMemRef,
/*1418*/          OPC_RecordNode, // #2 = 'ld' chained node
/*1419*/          OPC_CheckFoldableChainNode,
/*1420*/          OPC_RecordChild1, // #3 = $addr
/*1421*/          OPC_CheckChild1Type, MVT::i32,
/*1423*/          OPC_CheckPredicate, 8, // Predicate_unindexedload
/*1425*/          OPC_Scope, 33, /*->1460*/ // 2 children in Scope
/*1427*/            OPC_CheckPredicate, 9, // Predicate_load
/*1429*/            OPC_MoveParent,
/*1430*/            OPC_CheckType, MVT::i32,
/*1432*/            OPC_MoveParent,
/*1433*/            OPC_MoveChild, 2,
/*1435*/            OPC_CheckSame, 3,
/*1437*/            OPC_MoveParent,
/*1438*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1440*/            OPC_CheckPredicate, 4, // Predicate_store
/*1442*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*1444*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectADDRriU6_2:$addr #4 #5
/*1447*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*1451*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMw_ADDr_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 1, 
                    // Src: (st (add:i32 IntRegs:i32:$addend, (ld:i32 ADDRriU6_2:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>), ADDRriU6_2:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 59
                    // Dst: (MEMw_ADDr_MEM_V4 ADDRriU6_2:i32:$addr, IntRegs:i32:$addend)
/*1460*/          /*Scope*/ 76, /*->1537*/
/*1461*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*1463*/            OPC_Scope, 35, /*->1500*/ // 2 children in Scope
/*1465*/              OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*1467*/              OPC_MoveParent,
/*1468*/              OPC_CheckType, MVT::i32,
/*1470*/              OPC_MoveParent,
/*1471*/              OPC_MoveChild, 2,
/*1473*/              OPC_CheckSame, 3,
/*1475*/              OPC_MoveParent,
/*1476*/              OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1478*/              OPC_CheckPredicate, 5, // Predicate_truncstore
/*1480*/              OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*1482*/              OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*1484*/              OPC_CheckComplexPat, /*CP*/1, /*#*/3, // SelectADDRriU6_1:$addr #4 #5
/*1487*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*1491*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMh_ADDr_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (add:i32 IntRegs:i32:$addend, (ld:i32 ADDRriU6_1:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>), ADDRriU6_1:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 59
                      // Dst: (MEMh_ADDr_MEM_V4 ADDRriU6_1:i32:$addr, IntRegs:i32:$addend)
/*1500*/            /*Scope*/ 35, /*->1536*/
/*1501*/              OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*1503*/              OPC_MoveParent,
/*1504*/              OPC_CheckType, MVT::i32,
/*1506*/              OPC_MoveParent,
/*1507*/              OPC_MoveChild, 2,
/*1509*/              OPC_CheckSame, 3,
/*1511*/              OPC_MoveParent,
/*1512*/              OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1514*/              OPC_CheckPredicate, 5, // Predicate_truncstore
/*1516*/              OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1518*/              OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*1520*/              OPC_CheckComplexPat, /*CP*/2, /*#*/3, // SelectADDRriU6_0:$addr #4 #5
/*1523*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*1527*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMb_ADDr_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (add:i32 IntRegs:i32:$addend, (ld:i32 ADDRriU6_0:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>), ADDRriU6_0:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 59
                      // Dst: (MEMb_ADDr_MEM_V4 ADDRriU6_0:i32:$addr, IntRegs:i32:$addend)
/*1536*/            0, /*End of Scope*/
/*1537*/          0, /*End of Scope*/
/*1538*/        /*Scope*/ 67|128,1/*195*/, /*->1735*/
/*1540*/          OPC_MoveChild, 0,
/*1542*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1545*/          OPC_RecordMemRef,
/*1546*/          OPC_RecordNode, // #1 = 'ld' chained node
/*1547*/          OPC_CheckFoldableChainNode,
/*1548*/          OPC_MoveChild, 1,
/*1550*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1553*/          OPC_RecordChild0, // #2 = $base
/*1554*/          OPC_RecordChild1, // #3 = $offset
/*1555*/          OPC_MoveChild, 1,
/*1557*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1560*/          OPC_Scope, 54, /*->1616*/ // 3 children in Scope
/*1562*/            OPC_CheckPredicate, 14, // Predicate_u6_2ImmPred
/*1564*/            OPC_MoveParent,
/*1565*/            OPC_CheckType, MVT::i32,
/*1567*/            OPC_MoveParent,
/*1568*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*1570*/            OPC_CheckPredicate, 9, // Predicate_load
/*1572*/            OPC_MoveParent,
/*1573*/            OPC_RecordChild1, // #4 = $addend
/*1574*/            OPC_CheckType, MVT::i32,
/*1576*/            OPC_MoveParent,
/*1577*/            OPC_MoveChild, 2,
/*1579*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1582*/            OPC_MoveChild, 0,
/*1584*/            OPC_CheckSame, 2,
/*1586*/            OPC_MoveParent,
/*1587*/            OPC_MoveChild, 1,
/*1589*/            OPC_CheckSame, 3,
/*1591*/            OPC_MoveParent,
/*1592*/            OPC_CheckType, MVT::i32,
/*1594*/            OPC_MoveParent,
/*1595*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1597*/            OPC_CheckPredicate, 4, // Predicate_store
/*1599*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*1601*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1605*/            OPC_EmitConvertToTarget, 3,
/*1607*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMw_ADDr_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 5, 4, 
                    // Src: (st (add:i32 (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_2ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>>, IntRegs:i32:$addend), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_2ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 55
                    // Dst: (MEMw_ADDr_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, IntRegs:i32:$addend)
/*1616*/          /*Scope*/ 58, /*->1675*/
/*1617*/            OPC_CheckPredicate, 15, // Predicate_u6_1ImmPred
/*1619*/            OPC_MoveParent,
/*1620*/            OPC_CheckType, MVT::i32,
/*1622*/            OPC_MoveParent,
/*1623*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*1625*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*1627*/            OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*1629*/            OPC_MoveParent,
/*1630*/            OPC_RecordChild1, // #4 = $addend
/*1631*/            OPC_CheckType, MVT::i32,
/*1633*/            OPC_MoveParent,
/*1634*/            OPC_MoveChild, 2,
/*1636*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1639*/            OPC_MoveChild, 0,
/*1641*/            OPC_CheckSame, 2,
/*1643*/            OPC_MoveParent,
/*1644*/            OPC_MoveChild, 1,
/*1646*/            OPC_CheckSame, 3,
/*1648*/            OPC_MoveParent,
/*1649*/            OPC_CheckType, MVT::i32,
/*1651*/            OPC_MoveParent,
/*1652*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1654*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*1656*/            OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*1658*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*1660*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1664*/            OPC_EmitConvertToTarget, 3,
/*1666*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMh_ADDr_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 5, 4, 
                    // Src: (st (add:i32 (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_1ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, IntRegs:i32:$addend), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_1ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 55
                    // Dst: (MEMh_ADDr_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, IntRegs:i32:$addend)
/*1675*/          /*Scope*/ 58, /*->1734*/
/*1676*/            OPC_CheckPredicate, 16, // Predicate_u6_0ImmPred
/*1678*/            OPC_MoveParent,
/*1679*/            OPC_CheckType, MVT::i32,
/*1681*/            OPC_MoveParent,
/*1682*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*1684*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*1686*/            OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*1688*/            OPC_MoveParent,
/*1689*/            OPC_RecordChild1, // #4 = $addend
/*1690*/            OPC_CheckType, MVT::i32,
/*1692*/            OPC_MoveParent,
/*1693*/            OPC_MoveChild, 2,
/*1695*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1698*/            OPC_MoveChild, 0,
/*1700*/            OPC_CheckSame, 2,
/*1702*/            OPC_MoveParent,
/*1703*/            OPC_MoveChild, 1,
/*1705*/            OPC_CheckSame, 3,
/*1707*/            OPC_MoveParent,
/*1708*/            OPC_CheckType, MVT::i32,
/*1710*/            OPC_MoveParent,
/*1711*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1713*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*1715*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1717*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*1719*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1723*/            OPC_EmitConvertToTarget, 3,
/*1725*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMb_ADDr_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 5, 4, 
                    // Src: (st (add:i32 (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_0ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, IntRegs:i32:$addend), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_0ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 55
                    // Dst: (MEMb_ADDr_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, IntRegs:i32:$addend)
/*1734*/          0, /*End of Scope*/
/*1735*/        /*Scope*/ 65|128,1/*193*/, /*->1930*/
/*1737*/          OPC_RecordChild0, // #1 = $addend
/*1738*/          OPC_MoveChild, 1,
/*1740*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1743*/          OPC_RecordMemRef,
/*1744*/          OPC_RecordNode, // #2 = 'ld' chained node
/*1745*/          OPC_CheckFoldableChainNode,
/*1746*/          OPC_MoveChild, 1,
/*1748*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1751*/          OPC_RecordChild0, // #3 = $base
/*1752*/          OPC_RecordChild1, // #4 = $offset
/*1753*/          OPC_MoveChild, 1,
/*1755*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1758*/          OPC_Scope, 53, /*->1813*/ // 3 children in Scope
/*1760*/            OPC_CheckPredicate, 14, // Predicate_u6_2ImmPred
/*1762*/            OPC_MoveParent,
/*1763*/            OPC_CheckType, MVT::i32,
/*1765*/            OPC_MoveParent,
/*1766*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*1768*/            OPC_CheckPredicate, 9, // Predicate_load
/*1770*/            OPC_MoveParent,
/*1771*/            OPC_CheckType, MVT::i32,
/*1773*/            OPC_MoveParent,
/*1774*/            OPC_MoveChild, 2,
/*1776*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1779*/            OPC_MoveChild, 0,
/*1781*/            OPC_CheckSame, 3,
/*1783*/            OPC_MoveParent,
/*1784*/            OPC_MoveChild, 1,
/*1786*/            OPC_CheckSame, 4,
/*1788*/            OPC_MoveParent,
/*1789*/            OPC_CheckType, MVT::i32,
/*1791*/            OPC_MoveParent,
/*1792*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1794*/            OPC_CheckPredicate, 4, // Predicate_store
/*1796*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*1798*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*1802*/            OPC_EmitConvertToTarget, 4,
/*1804*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMw_ADDr_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 5, 1, 
                    // Src: (st (add:i32 IntRegs:i32:$addend, (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_2ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>>), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_2ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 55
                    // Dst: (MEMw_ADDr_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, IntRegs:i32:$addend)
/*1813*/          /*Scope*/ 57, /*->1871*/
/*1814*/            OPC_CheckPredicate, 15, // Predicate_u6_1ImmPred
/*1816*/            OPC_MoveParent,
/*1817*/            OPC_CheckType, MVT::i32,
/*1819*/            OPC_MoveParent,
/*1820*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*1822*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*1824*/            OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*1826*/            OPC_MoveParent,
/*1827*/            OPC_CheckType, MVT::i32,
/*1829*/            OPC_MoveParent,
/*1830*/            OPC_MoveChild, 2,
/*1832*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1835*/            OPC_MoveChild, 0,
/*1837*/            OPC_CheckSame, 3,
/*1839*/            OPC_MoveParent,
/*1840*/            OPC_MoveChild, 1,
/*1842*/            OPC_CheckSame, 4,
/*1844*/            OPC_MoveParent,
/*1845*/            OPC_CheckType, MVT::i32,
/*1847*/            OPC_MoveParent,
/*1848*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1850*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*1852*/            OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*1854*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*1856*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*1860*/            OPC_EmitConvertToTarget, 4,
/*1862*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMh_ADDr_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 5, 1, 
                    // Src: (st (add:i32 IntRegs:i32:$addend, (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_1ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_1ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 55
                    // Dst: (MEMh_ADDr_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, IntRegs:i32:$addend)
/*1871*/          /*Scope*/ 57, /*->1929*/
/*1872*/            OPC_CheckPredicate, 16, // Predicate_u6_0ImmPred
/*1874*/            OPC_MoveParent,
/*1875*/            OPC_CheckType, MVT::i32,
/*1877*/            OPC_MoveParent,
/*1878*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*1880*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*1882*/            OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*1884*/            OPC_MoveParent,
/*1885*/            OPC_CheckType, MVT::i32,
/*1887*/            OPC_MoveParent,
/*1888*/            OPC_MoveChild, 2,
/*1890*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1893*/            OPC_MoveChild, 0,
/*1895*/            OPC_CheckSame, 3,
/*1897*/            OPC_MoveParent,
/*1898*/            OPC_MoveChild, 1,
/*1900*/            OPC_CheckSame, 4,
/*1902*/            OPC_MoveParent,
/*1903*/            OPC_CheckType, MVT::i32,
/*1905*/            OPC_MoveParent,
/*1906*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1908*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*1910*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1912*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*1914*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*1918*/            OPC_EmitConvertToTarget, 4,
/*1920*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMb_ADDr_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 5, 1, 
                    // Src: (st (add:i32 IntRegs:i32:$addend, (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_0ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_0ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 55
                    // Dst: (MEMb_ADDr_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, IntRegs:i32:$addend)
/*1929*/          0, /*End of Scope*/
/*1930*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 65|128,2/*321*/,  TARGET_VAL(ISD::SUB),// ->2256
/*1935*/        OPC_MoveChild, 0,
/*1937*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1940*/        OPC_RecordMemRef,
/*1941*/        OPC_RecordNode, // #1 = 'ld' chained node
/*1942*/        OPC_CheckFoldableChainNode,
/*1943*/        OPC_Scope, 121, /*->2066*/ // 2 children in Scope
/*1945*/          OPC_RecordChild1, // #2 = $addr
/*1946*/          OPC_CheckChild1Type, MVT::i32,
/*1948*/          OPC_CheckPredicate, 8, // Predicate_unindexedload
/*1950*/          OPC_Scope, 34, /*->1986*/ // 2 children in Scope
/*1952*/            OPC_CheckPredicate, 9, // Predicate_load
/*1954*/            OPC_MoveParent,
/*1955*/            OPC_RecordChild1, // #3 = $subend
/*1956*/            OPC_CheckType, MVT::i32,
/*1958*/            OPC_MoveParent,
/*1959*/            OPC_MoveChild, 2,
/*1961*/            OPC_CheckSame, 2,
/*1963*/            OPC_MoveParent,
/*1964*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*1966*/            OPC_CheckPredicate, 4, // Predicate_store
/*1968*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*1970*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRriU6_2:$addr #4 #5
/*1973*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1977*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMw_SUBr_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                    // Src: (st (sub:i32 (ld:i32 ADDRriU6_2:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>, IntRegs:i32:$subend), ADDRriU6_2:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 59
                    // Dst: (MEMw_SUBr_MEM_V4 ADDRriU6_2:i32:$addr, IntRegs:i32:$subend)
/*1986*/          /*Scope*/ 78, /*->2065*/
/*1987*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*1989*/            OPC_Scope, 36, /*->2027*/ // 2 children in Scope
/*1991*/              OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*1993*/              OPC_MoveParent,
/*1994*/              OPC_RecordChild1, // #3 = $subend
/*1995*/              OPC_CheckType, MVT::i32,
/*1997*/              OPC_MoveParent,
/*1998*/              OPC_MoveChild, 2,
/*2000*/              OPC_CheckSame, 2,
/*2002*/              OPC_MoveParent,
/*2003*/              OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2005*/              OPC_CheckPredicate, 5, // Predicate_truncstore
/*2007*/              OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*2009*/              OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*2011*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRriU6_1:$addr #4 #5
/*2014*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*2018*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMh_SUBr_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (sub:i32 (ld:i32 ADDRriU6_1:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, IntRegs:i32:$subend), ADDRriU6_1:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 59
                      // Dst: (MEMh_SUBr_MEM_V4 ADDRriU6_1:i32:$addr, IntRegs:i32:$subend)
/*2027*/            /*Scope*/ 36, /*->2064*/
/*2028*/              OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*2030*/              OPC_MoveParent,
/*2031*/              OPC_RecordChild1, // #3 = $subend
/*2032*/              OPC_CheckType, MVT::i32,
/*2034*/              OPC_MoveParent,
/*2035*/              OPC_MoveChild, 2,
/*2037*/              OPC_CheckSame, 2,
/*2039*/              OPC_MoveParent,
/*2040*/              OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2042*/              OPC_CheckPredicate, 5, // Predicate_truncstore
/*2044*/              OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*2046*/              OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*2048*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRriU6_0:$addr #4 #5
/*2051*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*2055*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMb_SUBr_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (sub:i32 (ld:i32 ADDRriU6_0:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, IntRegs:i32:$subend), ADDRriU6_0:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 59
                      // Dst: (MEMb_SUBr_MEM_V4 ADDRriU6_0:i32:$addr, IntRegs:i32:$subend)
/*2064*/            0, /*End of Scope*/
/*2065*/          0, /*End of Scope*/
/*2066*/        /*Scope*/ 59|128,1/*187*/, /*->2255*/
/*2068*/          OPC_MoveChild, 1,
/*2070*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*2073*/          OPC_RecordChild0, // #2 = $base
/*2074*/          OPC_RecordChild1, // #3 = $offset
/*2075*/          OPC_MoveChild, 1,
/*2077*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2080*/          OPC_Scope, 54, /*->2136*/ // 3 children in Scope
/*2082*/            OPC_CheckPredicate, 14, // Predicate_u6_2ImmPred
/*2084*/            OPC_MoveParent,
/*2085*/            OPC_CheckType, MVT::i32,
/*2087*/            OPC_MoveParent,
/*2088*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*2090*/            OPC_CheckPredicate, 9, // Predicate_load
/*2092*/            OPC_MoveParent,
/*2093*/            OPC_RecordChild1, // #4 = $subend
/*2094*/            OPC_CheckType, MVT::i32,
/*2096*/            OPC_MoveParent,
/*2097*/            OPC_MoveChild, 2,
/*2099*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*2102*/            OPC_MoveChild, 0,
/*2104*/            OPC_CheckSame, 2,
/*2106*/            OPC_MoveParent,
/*2107*/            OPC_MoveChild, 1,
/*2109*/            OPC_CheckSame, 3,
/*2111*/            OPC_MoveParent,
/*2112*/            OPC_CheckType, MVT::i32,
/*2114*/            OPC_MoveParent,
/*2115*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2117*/            OPC_CheckPredicate, 4, // Predicate_store
/*2119*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*2121*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2125*/            OPC_EmitConvertToTarget, 3,
/*2127*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMw_SUBr_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 5, 4, 
                    // Src: (st (sub:i32 (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_2ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>>, IntRegs:i32:$subend), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_2ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 55
                    // Dst: (MEMw_SUBr_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, IntRegs:i32:$subend)
/*2136*/          /*Scope*/ 58, /*->2195*/
/*2137*/            OPC_CheckPredicate, 15, // Predicate_u6_1ImmPred
/*2139*/            OPC_MoveParent,
/*2140*/            OPC_CheckType, MVT::i32,
/*2142*/            OPC_MoveParent,
/*2143*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*2145*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*2147*/            OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*2149*/            OPC_MoveParent,
/*2150*/            OPC_RecordChild1, // #4 = $subend
/*2151*/            OPC_CheckType, MVT::i32,
/*2153*/            OPC_MoveParent,
/*2154*/            OPC_MoveChild, 2,
/*2156*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*2159*/            OPC_MoveChild, 0,
/*2161*/            OPC_CheckSame, 2,
/*2163*/            OPC_MoveParent,
/*2164*/            OPC_MoveChild, 1,
/*2166*/            OPC_CheckSame, 3,
/*2168*/            OPC_MoveParent,
/*2169*/            OPC_CheckType, MVT::i32,
/*2171*/            OPC_MoveParent,
/*2172*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2174*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*2176*/            OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*2178*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*2180*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2184*/            OPC_EmitConvertToTarget, 3,
/*2186*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMh_SUBr_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 5, 4, 
                    // Src: (st (sub:i32 (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_1ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, IntRegs:i32:$subend), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_1ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 55
                    // Dst: (MEMh_SUBr_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, IntRegs:i32:$subend)
/*2195*/          /*Scope*/ 58, /*->2254*/
/*2196*/            OPC_CheckPredicate, 16, // Predicate_u6_0ImmPred
/*2198*/            OPC_MoveParent,
/*2199*/            OPC_CheckType, MVT::i32,
/*2201*/            OPC_MoveParent,
/*2202*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*2204*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*2206*/            OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*2208*/            OPC_MoveParent,
/*2209*/            OPC_RecordChild1, // #4 = $subend
/*2210*/            OPC_CheckType, MVT::i32,
/*2212*/            OPC_MoveParent,
/*2213*/            OPC_MoveChild, 2,
/*2215*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*2218*/            OPC_MoveChild, 0,
/*2220*/            OPC_CheckSame, 2,
/*2222*/            OPC_MoveParent,
/*2223*/            OPC_MoveChild, 1,
/*2225*/            OPC_CheckSame, 3,
/*2227*/            OPC_MoveParent,
/*2228*/            OPC_CheckType, MVT::i32,
/*2230*/            OPC_MoveParent,
/*2231*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2233*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*2235*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*2237*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*2239*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2243*/            OPC_EmitConvertToTarget, 3,
/*2245*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMb_SUBr_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 5, 4, 
                    // Src: (st (sub:i32 (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_0ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, IntRegs:i32:$subend), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_0ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 55
                    // Dst: (MEMb_SUBr_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, IntRegs:i32:$subend)
/*2254*/          0, /*End of Scope*/
/*2255*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 13|128,5/*653*/,  TARGET_VAL(ISD::AND),// ->2913
/*2260*/        OPC_Scope, 1|128,1/*129*/, /*->2392*/ // 4 children in Scope
/*2263*/          OPC_MoveChild, 0,
/*2265*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2268*/          OPC_RecordMemRef,
/*2269*/          OPC_RecordNode, // #1 = 'ld' chained node
/*2270*/          OPC_CheckFoldableChainNode,
/*2271*/          OPC_RecordChild1, // #2 = $addr
/*2272*/          OPC_CheckChild1Type, MVT::i32,
/*2274*/          OPC_CheckPredicate, 8, // Predicate_unindexedload
/*2276*/          OPC_Scope, 34, /*->2312*/ // 2 children in Scope
/*2278*/            OPC_CheckPredicate, 9, // Predicate_load
/*2280*/            OPC_MoveParent,
/*2281*/            OPC_RecordChild1, // #3 = $andend
/*2282*/            OPC_CheckType, MVT::i32,
/*2284*/            OPC_MoveParent,
/*2285*/            OPC_MoveChild, 2,
/*2287*/            OPC_CheckSame, 2,
/*2289*/            OPC_MoveParent,
/*2290*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2292*/            OPC_CheckPredicate, 4, // Predicate_store
/*2294*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*2296*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRriU6_2:$addr #4 #5
/*2299*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2303*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMw_ANDr_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                    // Src: (st (and:i32 (ld:i32 ADDRriU6_2:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>, IntRegs:i32:$andend), ADDRriU6_2:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 59
                    // Dst: (MEMw_ANDr_MEM_V4 ADDRriU6_2:i32:$addr, IntRegs:i32:$andend)
/*2312*/          /*Scope*/ 78, /*->2391*/
/*2313*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*2315*/            OPC_Scope, 36, /*->2353*/ // 2 children in Scope
/*2317*/              OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*2319*/              OPC_MoveParent,
/*2320*/              OPC_RecordChild1, // #3 = $andend
/*2321*/              OPC_CheckType, MVT::i32,
/*2323*/              OPC_MoveParent,
/*2324*/              OPC_MoveChild, 2,
/*2326*/              OPC_CheckSame, 2,
/*2328*/              OPC_MoveParent,
/*2329*/              OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2331*/              OPC_CheckPredicate, 5, // Predicate_truncstore
/*2333*/              OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*2335*/              OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*2337*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRriU6_1:$addr #4 #5
/*2340*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*2344*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMh_ANDr_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (and:i32 (ld:i32 ADDRriU6_1:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, IntRegs:i32:$andend), ADDRriU6_1:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 59
                      // Dst: (MEMh_ANDr_MEM_V4 ADDRriU6_1:i32:$addr, IntRegs:i32:$andend)
/*2353*/            /*Scope*/ 36, /*->2390*/
/*2354*/              OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*2356*/              OPC_MoveParent,
/*2357*/              OPC_RecordChild1, // #3 = $andend
/*2358*/              OPC_CheckType, MVT::i32,
/*2360*/              OPC_MoveParent,
/*2361*/              OPC_MoveChild, 2,
/*2363*/              OPC_CheckSame, 2,
/*2365*/              OPC_MoveParent,
/*2366*/              OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2368*/              OPC_CheckPredicate, 5, // Predicate_truncstore
/*2370*/              OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*2372*/              OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*2374*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRriU6_0:$addr #4 #5
/*2377*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*2381*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMb_ANDr_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (and:i32 (ld:i32 ADDRriU6_0:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, IntRegs:i32:$andend), ADDRriU6_0:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 59
                      // Dst: (MEMb_ANDr_MEM_V4 ADDRriU6_0:i32:$addr, IntRegs:i32:$andend)
/*2390*/            0, /*End of Scope*/
/*2391*/          0, /*End of Scope*/
/*2392*/        /*Scope*/ 127, /*->2520*/
/*2393*/          OPC_RecordChild0, // #1 = $andend
/*2394*/          OPC_MoveChild, 1,
/*2396*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2399*/          OPC_RecordMemRef,
/*2400*/          OPC_RecordNode, // #2 = 'ld' chained node
/*2401*/          OPC_CheckFoldableChainNode,
/*2402*/          OPC_RecordChild1, // #3 = $addr
/*2403*/          OPC_CheckChild1Type, MVT::i32,
/*2405*/          OPC_CheckPredicate, 8, // Predicate_unindexedload
/*2407*/          OPC_Scope, 33, /*->2442*/ // 2 children in Scope
/*2409*/            OPC_CheckPredicate, 9, // Predicate_load
/*2411*/            OPC_MoveParent,
/*2412*/            OPC_CheckType, MVT::i32,
/*2414*/            OPC_MoveParent,
/*2415*/            OPC_MoveChild, 2,
/*2417*/            OPC_CheckSame, 3,
/*2419*/            OPC_MoveParent,
/*2420*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2422*/            OPC_CheckPredicate, 4, // Predicate_store
/*2424*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*2426*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectADDRriU6_2:$addr #4 #5
/*2429*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*2433*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMw_ANDr_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 1, 
                    // Src: (st (and:i32 IntRegs:i32:$andend, (ld:i32 ADDRriU6_2:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>), ADDRriU6_2:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 59
                    // Dst: (MEMw_ANDr_MEM_V4 ADDRriU6_2:i32:$addr, IntRegs:i32:$andend)
/*2442*/          /*Scope*/ 76, /*->2519*/
/*2443*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*2445*/            OPC_Scope, 35, /*->2482*/ // 2 children in Scope
/*2447*/              OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*2449*/              OPC_MoveParent,
/*2450*/              OPC_CheckType, MVT::i32,
/*2452*/              OPC_MoveParent,
/*2453*/              OPC_MoveChild, 2,
/*2455*/              OPC_CheckSame, 3,
/*2457*/              OPC_MoveParent,
/*2458*/              OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2460*/              OPC_CheckPredicate, 5, // Predicate_truncstore
/*2462*/              OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*2464*/              OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*2466*/              OPC_CheckComplexPat, /*CP*/1, /*#*/3, // SelectADDRriU6_1:$addr #4 #5
/*2469*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*2473*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMh_ANDr_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (and:i32 IntRegs:i32:$andend, (ld:i32 ADDRriU6_1:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>), ADDRriU6_1:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 59
                      // Dst: (MEMh_ANDr_MEM_V4 ADDRriU6_1:i32:$addr, IntRegs:i32:$andend)
/*2482*/            /*Scope*/ 35, /*->2518*/
/*2483*/              OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*2485*/              OPC_MoveParent,
/*2486*/              OPC_CheckType, MVT::i32,
/*2488*/              OPC_MoveParent,
/*2489*/              OPC_MoveChild, 2,
/*2491*/              OPC_CheckSame, 3,
/*2493*/              OPC_MoveParent,
/*2494*/              OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2496*/              OPC_CheckPredicate, 5, // Predicate_truncstore
/*2498*/              OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*2500*/              OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*2502*/              OPC_CheckComplexPat, /*CP*/2, /*#*/3, // SelectADDRriU6_0:$addr #4 #5
/*2505*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*2509*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMb_ANDr_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (and:i32 IntRegs:i32:$andend, (ld:i32 ADDRriU6_0:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>), ADDRriU6_0:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 59
                      // Dst: (MEMb_ANDr_MEM_V4 ADDRriU6_0:i32:$addr, IntRegs:i32:$andend)
/*2518*/            0, /*End of Scope*/
/*2519*/          0, /*End of Scope*/
/*2520*/        /*Scope*/ 67|128,1/*195*/, /*->2717*/
/*2522*/          OPC_MoveChild, 0,
/*2524*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2527*/          OPC_RecordMemRef,
/*2528*/          OPC_RecordNode, // #1 = 'ld' chained node
/*2529*/          OPC_CheckFoldableChainNode,
/*2530*/          OPC_MoveChild, 1,
/*2532*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*2535*/          OPC_RecordChild0, // #2 = $base
/*2536*/          OPC_RecordChild1, // #3 = $offset
/*2537*/          OPC_MoveChild, 1,
/*2539*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2542*/          OPC_Scope, 54, /*->2598*/ // 3 children in Scope
/*2544*/            OPC_CheckPredicate, 14, // Predicate_u6_2ImmPred
/*2546*/            OPC_MoveParent,
/*2547*/            OPC_CheckType, MVT::i32,
/*2549*/            OPC_MoveParent,
/*2550*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*2552*/            OPC_CheckPredicate, 9, // Predicate_load
/*2554*/            OPC_MoveParent,
/*2555*/            OPC_RecordChild1, // #4 = $andend
/*2556*/            OPC_CheckType, MVT::i32,
/*2558*/            OPC_MoveParent,
/*2559*/            OPC_MoveChild, 2,
/*2561*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*2564*/            OPC_MoveChild, 0,
/*2566*/            OPC_CheckSame, 2,
/*2568*/            OPC_MoveParent,
/*2569*/            OPC_MoveChild, 1,
/*2571*/            OPC_CheckSame, 3,
/*2573*/            OPC_MoveParent,
/*2574*/            OPC_CheckType, MVT::i32,
/*2576*/            OPC_MoveParent,
/*2577*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2579*/            OPC_CheckPredicate, 4, // Predicate_store
/*2581*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*2583*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2587*/            OPC_EmitConvertToTarget, 3,
/*2589*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMw_ANDr_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 5, 4, 
                    // Src: (st (and:i32 (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_2ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>>, IntRegs:i32:$andend), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_2ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 55
                    // Dst: (MEMw_ANDr_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, IntRegs:i32:$andend)
/*2598*/          /*Scope*/ 58, /*->2657*/
/*2599*/            OPC_CheckPredicate, 15, // Predicate_u6_1ImmPred
/*2601*/            OPC_MoveParent,
/*2602*/            OPC_CheckType, MVT::i32,
/*2604*/            OPC_MoveParent,
/*2605*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*2607*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*2609*/            OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*2611*/            OPC_MoveParent,
/*2612*/            OPC_RecordChild1, // #4 = $andend
/*2613*/            OPC_CheckType, MVT::i32,
/*2615*/            OPC_MoveParent,
/*2616*/            OPC_MoveChild, 2,
/*2618*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*2621*/            OPC_MoveChild, 0,
/*2623*/            OPC_CheckSame, 2,
/*2625*/            OPC_MoveParent,
/*2626*/            OPC_MoveChild, 1,
/*2628*/            OPC_CheckSame, 3,
/*2630*/            OPC_MoveParent,
/*2631*/            OPC_CheckType, MVT::i32,
/*2633*/            OPC_MoveParent,
/*2634*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2636*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*2638*/            OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*2640*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*2642*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2646*/            OPC_EmitConvertToTarget, 3,
/*2648*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMh_ANDr_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 5, 4, 
                    // Src: (st (and:i32 (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_1ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, IntRegs:i32:$andend), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_1ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 55
                    // Dst: (MEMh_ANDr_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, IntRegs:i32:$andend)
/*2657*/          /*Scope*/ 58, /*->2716*/
/*2658*/            OPC_CheckPredicate, 16, // Predicate_u6_0ImmPred
/*2660*/            OPC_MoveParent,
/*2661*/            OPC_CheckType, MVT::i32,
/*2663*/            OPC_MoveParent,
/*2664*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*2666*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*2668*/            OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*2670*/            OPC_MoveParent,
/*2671*/            OPC_RecordChild1, // #4 = $andend
/*2672*/            OPC_CheckType, MVT::i32,
/*2674*/            OPC_MoveParent,
/*2675*/            OPC_MoveChild, 2,
/*2677*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*2680*/            OPC_MoveChild, 0,
/*2682*/            OPC_CheckSame, 2,
/*2684*/            OPC_MoveParent,
/*2685*/            OPC_MoveChild, 1,
/*2687*/            OPC_CheckSame, 3,
/*2689*/            OPC_MoveParent,
/*2690*/            OPC_CheckType, MVT::i32,
/*2692*/            OPC_MoveParent,
/*2693*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2695*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*2697*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*2699*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*2701*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2705*/            OPC_EmitConvertToTarget, 3,
/*2707*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMb_ANDr_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 5, 4, 
                    // Src: (st (and:i32 (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_0ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, IntRegs:i32:$andend), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_0ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 55
                    // Dst: (MEMb_ANDr_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, IntRegs:i32:$andend)
/*2716*/          0, /*End of Scope*/
/*2717*/        /*Scope*/ 65|128,1/*193*/, /*->2912*/
/*2719*/          OPC_RecordChild0, // #1 = $andend
/*2720*/          OPC_MoveChild, 1,
/*2722*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2725*/          OPC_RecordMemRef,
/*2726*/          OPC_RecordNode, // #2 = 'ld' chained node
/*2727*/          OPC_CheckFoldableChainNode,
/*2728*/          OPC_MoveChild, 1,
/*2730*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*2733*/          OPC_RecordChild0, // #3 = $base
/*2734*/          OPC_RecordChild1, // #4 = $offset
/*2735*/          OPC_MoveChild, 1,
/*2737*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2740*/          OPC_Scope, 53, /*->2795*/ // 3 children in Scope
/*2742*/            OPC_CheckPredicate, 14, // Predicate_u6_2ImmPred
/*2744*/            OPC_MoveParent,
/*2745*/            OPC_CheckType, MVT::i32,
/*2747*/            OPC_MoveParent,
/*2748*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*2750*/            OPC_CheckPredicate, 9, // Predicate_load
/*2752*/            OPC_MoveParent,
/*2753*/            OPC_CheckType, MVT::i32,
/*2755*/            OPC_MoveParent,
/*2756*/            OPC_MoveChild, 2,
/*2758*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*2761*/            OPC_MoveChild, 0,
/*2763*/            OPC_CheckSame, 3,
/*2765*/            OPC_MoveParent,
/*2766*/            OPC_MoveChild, 1,
/*2768*/            OPC_CheckSame, 4,
/*2770*/            OPC_MoveParent,
/*2771*/            OPC_CheckType, MVT::i32,
/*2773*/            OPC_MoveParent,
/*2774*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2776*/            OPC_CheckPredicate, 4, // Predicate_store
/*2778*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*2780*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*2784*/            OPC_EmitConvertToTarget, 4,
/*2786*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMw_ANDr_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 5, 1, 
                    // Src: (st (and:i32 IntRegs:i32:$andend, (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_2ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>>), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_2ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 55
                    // Dst: (MEMw_ANDr_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, IntRegs:i32:$andend)
/*2795*/          /*Scope*/ 57, /*->2853*/
/*2796*/            OPC_CheckPredicate, 15, // Predicate_u6_1ImmPred
/*2798*/            OPC_MoveParent,
/*2799*/            OPC_CheckType, MVT::i32,
/*2801*/            OPC_MoveParent,
/*2802*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*2804*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*2806*/            OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*2808*/            OPC_MoveParent,
/*2809*/            OPC_CheckType, MVT::i32,
/*2811*/            OPC_MoveParent,
/*2812*/            OPC_MoveChild, 2,
/*2814*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*2817*/            OPC_MoveChild, 0,
/*2819*/            OPC_CheckSame, 3,
/*2821*/            OPC_MoveParent,
/*2822*/            OPC_MoveChild, 1,
/*2824*/            OPC_CheckSame, 4,
/*2826*/            OPC_MoveParent,
/*2827*/            OPC_CheckType, MVT::i32,
/*2829*/            OPC_MoveParent,
/*2830*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2832*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*2834*/            OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*2836*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*2838*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*2842*/            OPC_EmitConvertToTarget, 4,
/*2844*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMh_ANDr_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 5, 1, 
                    // Src: (st (and:i32 IntRegs:i32:$andend, (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_1ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_1ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 55
                    // Dst: (MEMh_ANDr_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, IntRegs:i32:$andend)
/*2853*/          /*Scope*/ 57, /*->2911*/
/*2854*/            OPC_CheckPredicate, 16, // Predicate_u6_0ImmPred
/*2856*/            OPC_MoveParent,
/*2857*/            OPC_CheckType, MVT::i32,
/*2859*/            OPC_MoveParent,
/*2860*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*2862*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*2864*/            OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*2866*/            OPC_MoveParent,
/*2867*/            OPC_CheckType, MVT::i32,
/*2869*/            OPC_MoveParent,
/*2870*/            OPC_MoveChild, 2,
/*2872*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*2875*/            OPC_MoveChild, 0,
/*2877*/            OPC_CheckSame, 3,
/*2879*/            OPC_MoveParent,
/*2880*/            OPC_MoveChild, 1,
/*2882*/            OPC_CheckSame, 4,
/*2884*/            OPC_MoveParent,
/*2885*/            OPC_CheckType, MVT::i32,
/*2887*/            OPC_MoveParent,
/*2888*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2890*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*2892*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*2894*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*2896*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*2900*/            OPC_EmitConvertToTarget, 4,
/*2902*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMb_ANDr_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 5, 1, 
                    // Src: (st (and:i32 IntRegs:i32:$andend, (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_0ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_0ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 55
                    // Dst: (MEMb_ANDr_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, IntRegs:i32:$andend)
/*2911*/          0, /*End of Scope*/
/*2912*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 13|128,5/*653*/,  TARGET_VAL(ISD::OR),// ->3570
/*2917*/        OPC_Scope, 1|128,1/*129*/, /*->3049*/ // 4 children in Scope
/*2920*/          OPC_MoveChild, 0,
/*2922*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2925*/          OPC_RecordMemRef,
/*2926*/          OPC_RecordNode, // #1 = 'ld' chained node
/*2927*/          OPC_CheckFoldableChainNode,
/*2928*/          OPC_RecordChild1, // #2 = $addr
/*2929*/          OPC_CheckChild1Type, MVT::i32,
/*2931*/          OPC_CheckPredicate, 8, // Predicate_unindexedload
/*2933*/          OPC_Scope, 34, /*->2969*/ // 2 children in Scope
/*2935*/            OPC_CheckPredicate, 9, // Predicate_load
/*2937*/            OPC_MoveParent,
/*2938*/            OPC_RecordChild1, // #3 = $orend
/*2939*/            OPC_CheckType, MVT::i32,
/*2941*/            OPC_MoveParent,
/*2942*/            OPC_MoveChild, 2,
/*2944*/            OPC_CheckSame, 2,
/*2946*/            OPC_MoveParent,
/*2947*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2949*/            OPC_CheckPredicate, 4, // Predicate_store
/*2951*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*2953*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRriU6_2:$addr #4 #5
/*2956*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2960*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMw_ORr_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                    // Src: (st (or:i32 (ld:i32 ADDRriU6_2:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>, IntRegs:i32:$orend), ADDRriU6_2:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 59
                    // Dst: (MEMw_ORr_MEM_V4 ADDRriU6_2:i32:$addr, IntRegs:i32:$orend)
/*2969*/          /*Scope*/ 78, /*->3048*/
/*2970*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*2972*/            OPC_Scope, 36, /*->3010*/ // 2 children in Scope
/*2974*/              OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*2976*/              OPC_MoveParent,
/*2977*/              OPC_RecordChild1, // #3 = $orend
/*2978*/              OPC_CheckType, MVT::i32,
/*2980*/              OPC_MoveParent,
/*2981*/              OPC_MoveChild, 2,
/*2983*/              OPC_CheckSame, 2,
/*2985*/              OPC_MoveParent,
/*2986*/              OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*2988*/              OPC_CheckPredicate, 5, // Predicate_truncstore
/*2990*/              OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*2992*/              OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*2994*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRriU6_1:$addr #4 #5
/*2997*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*3001*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMh_ORr_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (or:i32 (ld:i32 ADDRriU6_1:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, IntRegs:i32:$orend), ADDRriU6_1:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 59
                      // Dst: (MEMh_ORr_MEM_V4 ADDRriU6_1:i32:$addr, IntRegs:i32:$orend)
/*3010*/            /*Scope*/ 36, /*->3047*/
/*3011*/              OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*3013*/              OPC_MoveParent,
/*3014*/              OPC_RecordChild1, // #3 = $orend
/*3015*/              OPC_CheckType, MVT::i32,
/*3017*/              OPC_MoveParent,
/*3018*/              OPC_MoveChild, 2,
/*3020*/              OPC_CheckSame, 2,
/*3022*/              OPC_MoveParent,
/*3023*/              OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*3025*/              OPC_CheckPredicate, 5, // Predicate_truncstore
/*3027*/              OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*3029*/              OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*3031*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRriU6_0:$addr #4 #5
/*3034*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*3038*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMb_ORr_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (or:i32 (ld:i32 ADDRriU6_0:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, IntRegs:i32:$orend), ADDRriU6_0:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 59
                      // Dst: (MEMb_ORr_MEM_V4 ADDRriU6_0:i32:$addr, IntRegs:i32:$orend)
/*3047*/            0, /*End of Scope*/
/*3048*/          0, /*End of Scope*/
/*3049*/        /*Scope*/ 127, /*->3177*/
/*3050*/          OPC_RecordChild0, // #1 = $orend
/*3051*/          OPC_MoveChild, 1,
/*3053*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3056*/          OPC_RecordMemRef,
/*3057*/          OPC_RecordNode, // #2 = 'ld' chained node
/*3058*/          OPC_CheckFoldableChainNode,
/*3059*/          OPC_RecordChild1, // #3 = $addr
/*3060*/          OPC_CheckChild1Type, MVT::i32,
/*3062*/          OPC_CheckPredicate, 8, // Predicate_unindexedload
/*3064*/          OPC_Scope, 33, /*->3099*/ // 2 children in Scope
/*3066*/            OPC_CheckPredicate, 9, // Predicate_load
/*3068*/            OPC_MoveParent,
/*3069*/            OPC_CheckType, MVT::i32,
/*3071*/            OPC_MoveParent,
/*3072*/            OPC_MoveChild, 2,
/*3074*/            OPC_CheckSame, 3,
/*3076*/            OPC_MoveParent,
/*3077*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*3079*/            OPC_CheckPredicate, 4, // Predicate_store
/*3081*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*3083*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectADDRriU6_2:$addr #4 #5
/*3086*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*3090*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMw_ORr_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 4, 5, 1, 
                    // Src: (st (or:i32 IntRegs:i32:$orend, (ld:i32 ADDRriU6_2:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>), ADDRriU6_2:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 59
                    // Dst: (MEMw_ORr_MEM_V4 ADDRriU6_2:i32:$addr, IntRegs:i32:$orend)
/*3099*/          /*Scope*/ 76, /*->3176*/
/*3100*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*3102*/            OPC_Scope, 35, /*->3139*/ // 2 children in Scope
/*3104*/              OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*3106*/              OPC_MoveParent,
/*3107*/              OPC_CheckType, MVT::i32,
/*3109*/              OPC_MoveParent,
/*3110*/              OPC_MoveChild, 2,
/*3112*/              OPC_CheckSame, 3,
/*3114*/              OPC_MoveParent,
/*3115*/              OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*3117*/              OPC_CheckPredicate, 5, // Predicate_truncstore
/*3119*/              OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*3121*/              OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*3123*/              OPC_CheckComplexPat, /*CP*/1, /*#*/3, // SelectADDRriU6_1:$addr #4 #5
/*3126*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*3130*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMh_ORr_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (or:i32 IntRegs:i32:$orend, (ld:i32 ADDRriU6_1:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>), ADDRriU6_1:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 59
                      // Dst: (MEMh_ORr_MEM_V4 ADDRriU6_1:i32:$addr, IntRegs:i32:$orend)
/*3139*/            /*Scope*/ 35, /*->3175*/
/*3140*/              OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*3142*/              OPC_MoveParent,
/*3143*/              OPC_CheckType, MVT::i32,
/*3145*/              OPC_MoveParent,
/*3146*/              OPC_MoveChild, 2,
/*3148*/              OPC_CheckSame, 3,
/*3150*/              OPC_MoveParent,
/*3151*/              OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*3153*/              OPC_CheckPredicate, 5, // Predicate_truncstore
/*3155*/              OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*3157*/              OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*3159*/              OPC_CheckComplexPat, /*CP*/2, /*#*/3, // SelectADDRriU6_0:$addr #4 #5
/*3162*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*3166*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMb_ORr_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (or:i32 IntRegs:i32:$orend, (ld:i32 ADDRriU6_0:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>), ADDRriU6_0:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 59
                      // Dst: (MEMb_ORr_MEM_V4 ADDRriU6_0:i32:$addr, IntRegs:i32:$orend)
/*3175*/            0, /*End of Scope*/
/*3176*/          0, /*End of Scope*/
/*3177*/        /*Scope*/ 67|128,1/*195*/, /*->3374*/
/*3179*/          OPC_MoveChild, 0,
/*3181*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3184*/          OPC_RecordMemRef,
/*3185*/          OPC_RecordNode, // #1 = 'ld' chained node
/*3186*/          OPC_CheckFoldableChainNode,
/*3187*/          OPC_MoveChild, 1,
/*3189*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*3192*/          OPC_RecordChild0, // #2 = $base
/*3193*/          OPC_RecordChild1, // #3 = $offset
/*3194*/          OPC_MoveChild, 1,
/*3196*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3199*/          OPC_Scope, 54, /*->3255*/ // 3 children in Scope
/*3201*/            OPC_CheckPredicate, 14, // Predicate_u6_2ImmPred
/*3203*/            OPC_MoveParent,
/*3204*/            OPC_CheckType, MVT::i32,
/*3206*/            OPC_MoveParent,
/*3207*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*3209*/            OPC_CheckPredicate, 9, // Predicate_load
/*3211*/            OPC_MoveParent,
/*3212*/            OPC_RecordChild1, // #4 = $orend
/*3213*/            OPC_CheckType, MVT::i32,
/*3215*/            OPC_MoveParent,
/*3216*/            OPC_MoveChild, 2,
/*3218*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*3221*/            OPC_MoveChild, 0,
/*3223*/            OPC_CheckSame, 2,
/*3225*/            OPC_MoveParent,
/*3226*/            OPC_MoveChild, 1,
/*3228*/            OPC_CheckSame, 3,
/*3230*/            OPC_MoveParent,
/*3231*/            OPC_CheckType, MVT::i32,
/*3233*/            OPC_MoveParent,
/*3234*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*3236*/            OPC_CheckPredicate, 4, // Predicate_store
/*3238*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*3240*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*3244*/            OPC_EmitConvertToTarget, 3,
/*3246*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMw_ORr_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 5, 4, 
                    // Src: (st (or:i32 (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_2ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>>, IntRegs:i32:$orend), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_2ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 55
                    // Dst: (MEMw_ORr_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, IntRegs:i32:$orend)
/*3255*/          /*Scope*/ 58, /*->3314*/
/*3256*/            OPC_CheckPredicate, 15, // Predicate_u6_1ImmPred
/*3258*/            OPC_MoveParent,
/*3259*/            OPC_CheckType, MVT::i32,
/*3261*/            OPC_MoveParent,
/*3262*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*3264*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*3266*/            OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*3268*/            OPC_MoveParent,
/*3269*/            OPC_RecordChild1, // #4 = $orend
/*3270*/            OPC_CheckType, MVT::i32,
/*3272*/            OPC_MoveParent,
/*3273*/            OPC_MoveChild, 2,
/*3275*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*3278*/            OPC_MoveChild, 0,
/*3280*/            OPC_CheckSame, 2,
/*3282*/            OPC_MoveParent,
/*3283*/            OPC_MoveChild, 1,
/*3285*/            OPC_CheckSame, 3,
/*3287*/            OPC_MoveParent,
/*3288*/            OPC_CheckType, MVT::i32,
/*3290*/            OPC_MoveParent,
/*3291*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*3293*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*3295*/            OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*3297*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*3299*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*3303*/            OPC_EmitConvertToTarget, 3,
/*3305*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMh_ORr_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 5, 4, 
                    // Src: (st (or:i32 (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_1ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, IntRegs:i32:$orend), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_1ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 55
                    // Dst: (MEMh_ORr_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, IntRegs:i32:$orend)
/*3314*/          /*Scope*/ 58, /*->3373*/
/*3315*/            OPC_CheckPredicate, 16, // Predicate_u6_0ImmPred
/*3317*/            OPC_MoveParent,
/*3318*/            OPC_CheckType, MVT::i32,
/*3320*/            OPC_MoveParent,
/*3321*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*3323*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*3325*/            OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*3327*/            OPC_MoveParent,
/*3328*/            OPC_RecordChild1, // #4 = $orend
/*3329*/            OPC_CheckType, MVT::i32,
/*3331*/            OPC_MoveParent,
/*3332*/            OPC_MoveChild, 2,
/*3334*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*3337*/            OPC_MoveChild, 0,
/*3339*/            OPC_CheckSame, 2,
/*3341*/            OPC_MoveParent,
/*3342*/            OPC_MoveChild, 1,
/*3344*/            OPC_CheckSame, 3,
/*3346*/            OPC_MoveParent,
/*3347*/            OPC_CheckType, MVT::i32,
/*3349*/            OPC_MoveParent,
/*3350*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*3352*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*3354*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*3356*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*3358*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*3362*/            OPC_EmitConvertToTarget, 3,
/*3364*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMb_ORr_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 5, 4, 
                    // Src: (st (or:i32 (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_0ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>, IntRegs:i32:$orend), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_0ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 55
                    // Dst: (MEMb_ORr_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, IntRegs:i32:$orend)
/*3373*/          0, /*End of Scope*/
/*3374*/        /*Scope*/ 65|128,1/*193*/, /*->3569*/
/*3376*/          OPC_RecordChild0, // #1 = $orend
/*3377*/          OPC_MoveChild, 1,
/*3379*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3382*/          OPC_RecordMemRef,
/*3383*/          OPC_RecordNode, // #2 = 'ld' chained node
/*3384*/          OPC_CheckFoldableChainNode,
/*3385*/          OPC_MoveChild, 1,
/*3387*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*3390*/          OPC_RecordChild0, // #3 = $base
/*3391*/          OPC_RecordChild1, // #4 = $offset
/*3392*/          OPC_MoveChild, 1,
/*3394*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3397*/          OPC_Scope, 53, /*->3452*/ // 3 children in Scope
/*3399*/            OPC_CheckPredicate, 14, // Predicate_u6_2ImmPred
/*3401*/            OPC_MoveParent,
/*3402*/            OPC_CheckType, MVT::i32,
/*3404*/            OPC_MoveParent,
/*3405*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*3407*/            OPC_CheckPredicate, 9, // Predicate_load
/*3409*/            OPC_MoveParent,
/*3410*/            OPC_CheckType, MVT::i32,
/*3412*/            OPC_MoveParent,
/*3413*/            OPC_MoveChild, 2,
/*3415*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*3418*/            OPC_MoveChild, 0,
/*3420*/            OPC_CheckSame, 3,
/*3422*/            OPC_MoveParent,
/*3423*/            OPC_MoveChild, 1,
/*3425*/            OPC_CheckSame, 4,
/*3427*/            OPC_MoveParent,
/*3428*/            OPC_CheckType, MVT::i32,
/*3430*/            OPC_MoveParent,
/*3431*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*3433*/            OPC_CheckPredicate, 4, // Predicate_store
/*3435*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*3437*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*3441*/            OPC_EmitConvertToTarget, 4,
/*3443*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMw_ORr_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 5, 1, 
                    // Src: (st (or:i32 IntRegs:i32:$orend, (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_2ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>>), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_2ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 55
                    // Dst: (MEMw_ORr_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, IntRegs:i32:$orend)
/*3452*/          /*Scope*/ 57, /*->3510*/
/*3453*/            OPC_CheckPredicate, 15, // Predicate_u6_1ImmPred
/*3455*/            OPC_MoveParent,
/*3456*/            OPC_CheckType, MVT::i32,
/*3458*/            OPC_MoveParent,
/*3459*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*3461*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*3463*/            OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*3465*/            OPC_MoveParent,
/*3466*/            OPC_CheckType, MVT::i32,
/*3468*/            OPC_MoveParent,
/*3469*/            OPC_MoveChild, 2,
/*3471*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*3474*/            OPC_MoveChild, 0,
/*3476*/            OPC_CheckSame, 3,
/*3478*/            OPC_MoveParent,
/*3479*/            OPC_MoveChild, 1,
/*3481*/            OPC_CheckSame, 4,
/*3483*/            OPC_MoveParent,
/*3484*/            OPC_CheckType, MVT::i32,
/*3486*/            OPC_MoveParent,
/*3487*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*3489*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*3491*/            OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*3493*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*3495*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*3499*/            OPC_EmitConvertToTarget, 4,
/*3501*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMh_ORr_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 5, 1, 
                    // Src: (st (or:i32 IntRegs:i32:$orend, (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_1ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_1ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 55
                    // Dst: (MEMh_ORr_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, IntRegs:i32:$orend)
/*3510*/          /*Scope*/ 57, /*->3568*/
/*3511*/            OPC_CheckPredicate, 16, // Predicate_u6_0ImmPred
/*3513*/            OPC_MoveParent,
/*3514*/            OPC_CheckType, MVT::i32,
/*3516*/            OPC_MoveParent,
/*3517*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*3519*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*3521*/            OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*3523*/            OPC_MoveParent,
/*3524*/            OPC_CheckType, MVT::i32,
/*3526*/            OPC_MoveParent,
/*3527*/            OPC_MoveChild, 2,
/*3529*/            OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*3532*/            OPC_MoveChild, 0,
/*3534*/            OPC_CheckSame, 3,
/*3536*/            OPC_MoveParent,
/*3537*/            OPC_MoveChild, 1,
/*3539*/            OPC_CheckSame, 4,
/*3541*/            OPC_MoveParent,
/*3542*/            OPC_CheckType, MVT::i32,
/*3544*/            OPC_MoveParent,
/*3545*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*3547*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*3549*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*3551*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasV4TOps()) && (Subtarget.useMemOps())
/*3553*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*3557*/            OPC_EmitConvertToTarget, 4,
/*3559*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MEMb_ORr_indexed_MEM_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 5, 1, 
                    // Src: (st (or:i32 IntRegs:i32:$orend, (ld:i32 (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_0ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>), (add:i32 IntRegs:i32:$base, (imm:i32)<<P:Predicate_u6_0ImmPred>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 55
                    // Dst: (MEMb_ORr_indexed_MEM_V4 IntRegs:i32:$base, (imm:i32):$offset, IntRegs:i32:$orend)
/*3568*/          0, /*End of Scope*/
/*3569*/        0, /*End of Scope*/
              0, // EndSwitchOpcode
/*3571*/    /*Scope*/ 36|128,6/*804*/, /*->4377*/
/*3573*/      OPC_RecordChild1, // #1 = $src4
/*3574*/      OPC_Scope, 101, /*->3677*/ // 5 children in Scope
/*3576*/        OPC_CheckChild1Type, MVT::i64,
/*3578*/        OPC_MoveChild, 2,
/*3580*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*3583*/        OPC_RecordChild0, // #2 = $src1
/*3584*/        OPC_MoveChild, 1,
/*3586*/        OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*3589*/        OPC_RecordChild0, // #3 = $src2
/*3590*/        OPC_MoveChild, 0,
/*3592*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3595*/        OPC_Scope, 39, /*->3636*/ // 2 children in Scope
/*3597*/          OPC_CheckPredicate, 17, // Predicate_u2ImmPred
/*3599*/          OPC_MoveParent,
/*3600*/          OPC_RecordChild1, // #4 = $src3
/*3601*/          OPC_MoveChild, 1,
/*3603*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3606*/          OPC_CheckPredicate, 18, // Predicate_u6ImmPred
/*3608*/          OPC_MoveParent,
/*3609*/          OPC_CheckType, MVT::i32,
/*3611*/          OPC_MoveParent,
/*3612*/          OPC_CheckType, MVT::i32,
/*3614*/          OPC_MoveParent,
/*3615*/          OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*3617*/          OPC_CheckPredicate, 4, // Predicate_store
/*3619*/          OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*3621*/          OPC_EmitMergeInputChains1_0,
/*3622*/          OPC_EmitConvertToTarget, 3,
/*3624*/          OPC_EmitConvertToTarget, 4,
/*3626*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrid_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 2, 5, 6, 1, 
                  // Src: (st DoubleRegs:i64:$src4, (shl:i32 IntRegs:i32:$src1, (add:i32 (imm:i32)<<P:Predicate_u2ImmPred>>:$src2, (imm:i32)<<P:Predicate_u6ImmPred>>:$src3)))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 28
                  // Dst: (STrid_shl_V4 IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3, DoubleRegs:i64:$src4)
/*3636*/        /*Scope*/ 39, /*->3676*/
/*3637*/          OPC_CheckPredicate, 18, // Predicate_u6ImmPred
/*3639*/          OPC_MoveParent,
/*3640*/          OPC_RecordChild1, // #4 = $src2
/*3641*/          OPC_MoveChild, 1,
/*3643*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3646*/          OPC_CheckPredicate, 17, // Predicate_u2ImmPred
/*3648*/          OPC_MoveParent,
/*3649*/          OPC_CheckType, MVT::i32,
/*3651*/          OPC_MoveParent,
/*3652*/          OPC_CheckType, MVT::i32,
/*3654*/          OPC_MoveParent,
/*3655*/          OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*3657*/          OPC_CheckPredicate, 4, // Predicate_store
/*3659*/          OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*3661*/          OPC_EmitMergeInputChains1_0,
/*3662*/          OPC_EmitConvertToTarget, 4,
/*3664*/          OPC_EmitConvertToTarget, 3,
/*3666*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrid_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 2, 5, 6, 1, 
                  // Src: (st DoubleRegs:i64:$src4, (shl:i32 IntRegs:i32:$src1, (add:i32 (imm:i32)<<P:Predicate_u6ImmPred>>:$src3, (imm:i32)<<P:Predicate_u2ImmPred>>:$src2)))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 28
                  // Dst: (STrid_shl_V4 IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3, DoubleRegs:i64:$src4)
/*3676*/        0, /*End of Scope*/
/*3677*/      /*Scope*/ 69|128,1/*197*/, /*->3876*/
/*3679*/        OPC_CheckChild1Type, MVT::i32,
/*3681*/        OPC_MoveChild, 2,
/*3683*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*3686*/        OPC_RecordChild0, // #2 = $src1
/*3687*/        OPC_MoveChild, 1,
/*3689*/        OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*3692*/        OPC_RecordChild0, // #3 = $src2
/*3693*/        OPC_MoveChild, 0,
/*3695*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3698*/        OPC_Scope, 87, /*->3787*/ // 2 children in Scope
/*3700*/          OPC_CheckPredicate, 17, // Predicate_u2ImmPred
/*3702*/          OPC_MoveParent,
/*3703*/          OPC_RecordChild1, // #4 = $src3
/*3704*/          OPC_MoveChild, 1,
/*3706*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3709*/          OPC_CheckPredicate, 18, // Predicate_u6ImmPred
/*3711*/          OPC_MoveParent,
/*3712*/          OPC_CheckType, MVT::i32,
/*3714*/          OPC_MoveParent,
/*3715*/          OPC_CheckType, MVT::i32,
/*3717*/          OPC_MoveParent,
/*3718*/          OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*3720*/          OPC_Scope, 44, /*->3766*/ // 2 children in Scope
/*3722*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*3724*/            OPC_Scope, 19, /*->3745*/ // 2 children in Scope
/*3726*/              OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*3728*/              OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*3730*/              OPC_EmitMergeInputChains1_0,
/*3731*/              OPC_EmitConvertToTarget, 3,
/*3733*/              OPC_EmitConvertToTarget, 4,
/*3735*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrib_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 2, 5, 6, 1, 
                      // Src: (st IntRegs:i32:$src4, (shl:i32 IntRegs:i32:$src1, (add:i32 (imm:i32)<<P:Predicate_u2ImmPred>>:$src2, (imm:i32)<<P:Predicate_u6ImmPred>>:$src3)))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 28
                      // Dst: (STrib_shl_V4 IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3, IntRegs:i32:$src4)
/*3745*/            /*Scope*/ 19, /*->3765*/
/*3746*/              OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*3748*/              OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*3750*/              OPC_EmitMergeInputChains1_0,
/*3751*/              OPC_EmitConvertToTarget, 3,
/*3753*/              OPC_EmitConvertToTarget, 4,
/*3755*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrih_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 2, 5, 6, 1, 
                      // Src: (st IntRegs:i32:$src4, (shl:i32 IntRegs:i32:$src1, (add:i32 (imm:i32)<<P:Predicate_u2ImmPred>>:$src2, (imm:i32)<<P:Predicate_u6ImmPred>>:$src3)))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 28
                      // Dst: (STrih_shl_V4 IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3, IntRegs:i32:$src4)
/*3765*/            0, /*End of Scope*/
/*3766*/          /*Scope*/ 19, /*->3786*/
/*3767*/            OPC_CheckPredicate, 4, // Predicate_store
/*3769*/            OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*3771*/            OPC_EmitMergeInputChains1_0,
/*3772*/            OPC_EmitConvertToTarget, 3,
/*3774*/            OPC_EmitConvertToTarget, 4,
/*3776*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::STriw_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 2, 5, 6, 1, 
                    // Src: (st IntRegs:i32:$src4, (shl:i32 IntRegs:i32:$src1, (add:i32 (imm:i32)<<P:Predicate_u2ImmPred>>:$src2, (imm:i32)<<P:Predicate_u6ImmPred>>:$src3)))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 28
                    // Dst: (STriw_shl_V4 IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3, IntRegs:i32:$src4)
/*3786*/          0, /*End of Scope*/
/*3787*/        /*Scope*/ 87, /*->3875*/
/*3788*/          OPC_CheckPredicate, 18, // Predicate_u6ImmPred
/*3790*/          OPC_MoveParent,
/*3791*/          OPC_RecordChild1, // #4 = $src2
/*3792*/          OPC_MoveChild, 1,
/*3794*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3797*/          OPC_CheckPredicate, 17, // Predicate_u2ImmPred
/*3799*/          OPC_MoveParent,
/*3800*/          OPC_CheckType, MVT::i32,
/*3802*/          OPC_MoveParent,
/*3803*/          OPC_CheckType, MVT::i32,
/*3805*/          OPC_MoveParent,
/*3806*/          OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*3808*/          OPC_Scope, 44, /*->3854*/ // 2 children in Scope
/*3810*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*3812*/            OPC_Scope, 19, /*->3833*/ // 2 children in Scope
/*3814*/              OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*3816*/              OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*3818*/              OPC_EmitMergeInputChains1_0,
/*3819*/              OPC_EmitConvertToTarget, 4,
/*3821*/              OPC_EmitConvertToTarget, 3,
/*3823*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrib_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 2, 5, 6, 1, 
                      // Src: (st IntRegs:i32:$src4, (shl:i32 IntRegs:i32:$src1, (add:i32 (imm:i32)<<P:Predicate_u6ImmPred>>:$src3, (imm:i32)<<P:Predicate_u2ImmPred>>:$src2)))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 28
                      // Dst: (STrib_shl_V4 IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3, IntRegs:i32:$src4)
/*3833*/            /*Scope*/ 19, /*->3853*/
/*3834*/              OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*3836*/              OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*3838*/              OPC_EmitMergeInputChains1_0,
/*3839*/              OPC_EmitConvertToTarget, 4,
/*3841*/              OPC_EmitConvertToTarget, 3,
/*3843*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrih_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 2, 5, 6, 1, 
                      // Src: (st IntRegs:i32:$src4, (shl:i32 IntRegs:i32:$src1, (add:i32 (imm:i32)<<P:Predicate_u6ImmPred>>:$src3, (imm:i32)<<P:Predicate_u2ImmPred>>:$src2)))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 28
                      // Dst: (STrih_shl_V4 IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3, IntRegs:i32:$src4)
/*3853*/            0, /*End of Scope*/
/*3854*/          /*Scope*/ 19, /*->3874*/
/*3855*/            OPC_CheckPredicate, 4, // Predicate_store
/*3857*/            OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*3859*/            OPC_EmitMergeInputChains1_0,
/*3860*/            OPC_EmitConvertToTarget, 4,
/*3862*/            OPC_EmitConvertToTarget, 3,
/*3864*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::STriw_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 2, 5, 6, 1, 
                    // Src: (st IntRegs:i32:$src4, (shl:i32 IntRegs:i32:$src1, (add:i32 (imm:i32)<<P:Predicate_u6ImmPred>>:$src3, (imm:i32)<<P:Predicate_u2ImmPred>>:$src2)))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 28
                    // Dst: (STriw_shl_V4 IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3, IntRegs:i32:$src4)
/*3874*/          0, /*End of Scope*/
/*3875*/        0, /*End of Scope*/
/*3876*/      /*Scope*/ 109, /*->3986*/
/*3877*/        OPC_MoveChild, 1,
/*3879*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3882*/        OPC_CheckPredicate, 1, // Predicate_s8ImmPred
/*3884*/        OPC_CheckType, MVT::i32,
/*3886*/        OPC_MoveParent,
/*3887*/        OPC_MoveChild, 2,
/*3889*/        OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*3892*/        OPC_RecordChild0, // #2 = $src1
/*3893*/        OPC_RecordChild1, // #3 = $src2
/*3894*/        OPC_MoveChild, 1,
/*3896*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3899*/        OPC_Scope, 28, /*->3929*/ // 3 children in Scope
/*3901*/          OPC_CheckPredicate, 16, // Predicate_u6_0ImmPred
/*3903*/          OPC_MoveParent,
/*3904*/          OPC_CheckType, MVT::i32,
/*3906*/          OPC_MoveParent,
/*3907*/          OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*3909*/          OPC_CheckPredicate, 5, // Predicate_truncstore
/*3911*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*3913*/          OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*3915*/          OPC_EmitMergeInputChains1_0,
/*3916*/          OPC_EmitConvertToTarget, 3,
/*3918*/          OPC_EmitConvertToTarget, 1,
/*3920*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrib_imm_V4), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 2, 4, 5, 
                  // Src: (st (imm:i32)<<P:Predicate_s8ImmPred>>:$src3, (add:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_u6_0ImmPred>>:$src2))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 25
                  // Dst: (STrib_imm_V4 IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3)
/*3929*/        /*Scope*/ 28, /*->3958*/
/*3930*/          OPC_CheckPredicate, 15, // Predicate_u6_1ImmPred
/*3932*/          OPC_MoveParent,
/*3933*/          OPC_CheckType, MVT::i32,
/*3935*/          OPC_MoveParent,
/*3936*/          OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*3938*/          OPC_CheckPredicate, 5, // Predicate_truncstore
/*3940*/          OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*3942*/          OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*3944*/          OPC_EmitMergeInputChains1_0,
/*3945*/          OPC_EmitConvertToTarget, 3,
/*3947*/          OPC_EmitConvertToTarget, 1,
/*3949*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrih_imm_V4), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 2, 4, 5, 
                  // Src: (st (imm:i32)<<P:Predicate_s8ImmPred>>:$src3, (add:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_u6_1ImmPred>>:$src2))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 25
                  // Dst: (STrih_imm_V4 IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3)
/*3958*/        /*Scope*/ 26, /*->3985*/
/*3959*/          OPC_CheckPredicate, 14, // Predicate_u6_2ImmPred
/*3961*/          OPC_MoveParent,
/*3962*/          OPC_CheckType, MVT::i32,
/*3964*/          OPC_MoveParent,
/*3965*/          OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*3967*/          OPC_CheckPredicate, 4, // Predicate_store
/*3969*/          OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*3971*/          OPC_EmitMergeInputChains1_0,
/*3972*/          OPC_EmitConvertToTarget, 3,
/*3974*/          OPC_EmitConvertToTarget, 1,
/*3976*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::STriw_imm_V4), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 2, 4, 5, 
                  // Src: (st (imm:i32)<<P:Predicate_s8ImmPred>>:$src3, (add:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_u6_2ImmPred>>:$src2))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 25
                  // Dst: (STriw_imm_V4 IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3)
/*3985*/        0, /*End of Scope*/
/*3986*/      /*Scope*/ 123, /*->4110*/
/*3987*/        OPC_CheckChild1Type, MVT::i64,
/*3989*/        OPC_MoveChild, 2,
/*3991*/        OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*3994*/        OPC_Scope, 41, /*->4037*/ // 3 children in Scope
/*3996*/          OPC_RecordChild0, // #2 = $src1
/*3997*/          OPC_MoveChild, 1,
/*3999*/          OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*4002*/          OPC_RecordChild0, // #3 = $src2
/*4003*/          OPC_RecordChild1, // #4 = $src3
/*4004*/          OPC_MoveChild, 1,
/*4006*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4009*/          OPC_CheckPredicate, 17, // Predicate_u2ImmPred
/*4011*/          OPC_CheckType, MVT::i32,
/*4013*/          OPC_MoveParent,
/*4014*/          OPC_MoveParent,
/*4015*/          OPC_CheckType, MVT::i32,
/*4017*/          OPC_MoveParent,
/*4018*/          OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*4020*/          OPC_CheckPredicate, 4, // Predicate_store
/*4022*/          OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*4024*/          OPC_EmitMergeInputChains1_0,
/*4025*/          OPC_EmitConvertToTarget, 4,
/*4027*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrid_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 2, 3, 5, 1, 
                  // Src: (st DoubleRegs:i64:$src4, (add:i32 IntRegs:i32:$src1, (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$src3)))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 24
                  // Dst: (STrid_indexed_shl_V4 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3, DoubleRegs:i64:$src4)
/*4037*/        /*Scope*/ 41, /*->4079*/
/*4038*/          OPC_MoveChild, 0,
/*4040*/          OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*4043*/          OPC_RecordChild0, // #2 = $src2
/*4044*/          OPC_RecordChild1, // #3 = $src3
/*4045*/          OPC_MoveChild, 1,
/*4047*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4050*/          OPC_CheckPredicate, 17, // Predicate_u2ImmPred
/*4052*/          OPC_CheckType, MVT::i32,
/*4054*/          OPC_MoveParent,
/*4055*/          OPC_MoveParent,
/*4056*/          OPC_RecordChild1, // #4 = $src1
/*4057*/          OPC_CheckType, MVT::i32,
/*4059*/          OPC_MoveParent,
/*4060*/          OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*4062*/          OPC_CheckPredicate, 4, // Predicate_store
/*4064*/          OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*4066*/          OPC_EmitMergeInputChains1_0,
/*4067*/          OPC_EmitConvertToTarget, 3,
/*4069*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrid_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 4, 2, 5, 1, 
                  // Src: (st DoubleRegs:i64:$src4, (add:i32 (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$src3), IntRegs:i32:$src1))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 24
                  // Dst: (STrid_indexed_shl_V4 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3, DoubleRegs:i64:$src4)
/*4079*/        /*Scope*/ 29, /*->4109*/
/*4080*/          OPC_RecordChild0, // #2 = $src1
/*4081*/          OPC_RecordChild1, // #3 = $src2
/*4082*/          OPC_MoveChild, 1,
/*4084*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4087*/          OPC_CheckPredicate, 19, // Predicate_s11_3ImmPred
/*4089*/          OPC_MoveParent,
/*4090*/          OPC_CheckType, MVT::i32,
/*4092*/          OPC_MoveParent,
/*4093*/          OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*4095*/          OPC_CheckPredicate, 4, // Predicate_store
/*4097*/          OPC_EmitMergeInputChains1_0,
/*4098*/          OPC_EmitConvertToTarget, 3,
/*4100*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrid_indexed), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 2, 4, 1, 
                  // Src: (st DoubleRegs:i64:$src3, (add:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s11_3ImmPred>>:$src2))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 21
                  // Dst: (STrid_indexed IntRegs:i32:$src1, (imm:i32):$src2, DoubleRegs:i64:$src3)
/*4109*/        0, /*End of Scope*/
/*4110*/      /*Scope*/ 8|128,2/*264*/, /*->4376*/
/*4112*/        OPC_CheckChild1Type, MVT::i32,
/*4114*/        OPC_MoveChild, 2,
/*4116*/        OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*4119*/        OPC_Scope, 85, /*->4206*/ // 3 children in Scope
/*4121*/          OPC_RecordChild0, // #2 = $src1
/*4122*/          OPC_MoveChild, 1,
/*4124*/          OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*4127*/          OPC_RecordChild0, // #3 = $src2
/*4128*/          OPC_RecordChild1, // #4 = $src3
/*4129*/          OPC_MoveChild, 1,
/*4131*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4134*/          OPC_CheckPredicate, 17, // Predicate_u2ImmPred
/*4136*/          OPC_CheckType, MVT::i32,
/*4138*/          OPC_MoveParent,
/*4139*/          OPC_MoveParent,
/*4140*/          OPC_CheckType, MVT::i32,
/*4142*/          OPC_MoveParent,
/*4143*/          OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*4145*/          OPC_Scope, 40, /*->4187*/ // 2 children in Scope
/*4147*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*4149*/            OPC_Scope, 17, /*->4168*/ // 2 children in Scope
/*4151*/              OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*4153*/              OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*4155*/              OPC_EmitMergeInputChains1_0,
/*4156*/              OPC_EmitConvertToTarget, 4,
/*4158*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrib_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 2, 3, 5, 1, 
                      // Src: (st IntRegs:i32:$src4, (add:i32 IntRegs:i32:$src1, (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$src3)))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 24
                      // Dst: (STrib_indexed_shl_V4 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3, IntRegs:i32:$src4)
/*4168*/            /*Scope*/ 17, /*->4186*/
/*4169*/              OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*4171*/              OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*4173*/              OPC_EmitMergeInputChains1_0,
/*4174*/              OPC_EmitConvertToTarget, 4,
/*4176*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrih_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 2, 3, 5, 1, 
                      // Src: (st IntRegs:i32:$src4, (add:i32 IntRegs:i32:$src1, (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$src3)))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 24
                      // Dst: (STrih_indexed_shl_V4 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3, IntRegs:i32:$src4)
/*4186*/            0, /*End of Scope*/
/*4187*/          /*Scope*/ 17, /*->4205*/
/*4188*/            OPC_CheckPredicate, 4, // Predicate_store
/*4190*/            OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*4192*/            OPC_EmitMergeInputChains1_0,
/*4193*/            OPC_EmitConvertToTarget, 4,
/*4195*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::STriw_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 2, 3, 5, 1, 
                    // Src: (st IntRegs:i32:$src4, (add:i32 IntRegs:i32:$src1, (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$src3)))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 24
                    // Dst: (STriw_indexed_shl_V4 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3, IntRegs:i32:$src4)
/*4205*/          0, /*End of Scope*/
/*4206*/        /*Scope*/ 85, /*->4292*/
/*4207*/          OPC_MoveChild, 0,
/*4209*/          OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*4212*/          OPC_RecordChild0, // #2 = $src2
/*4213*/          OPC_RecordChild1, // #3 = $src3
/*4214*/          OPC_MoveChild, 1,
/*4216*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4219*/          OPC_CheckPredicate, 17, // Predicate_u2ImmPred
/*4221*/          OPC_CheckType, MVT::i32,
/*4223*/          OPC_MoveParent,
/*4224*/          OPC_MoveParent,
/*4225*/          OPC_RecordChild1, // #4 = $src1
/*4226*/          OPC_CheckType, MVT::i32,
/*4228*/          OPC_MoveParent,
/*4229*/          OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*4231*/          OPC_Scope, 40, /*->4273*/ // 2 children in Scope
/*4233*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*4235*/            OPC_Scope, 17, /*->4254*/ // 2 children in Scope
/*4237*/              OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*4239*/              OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*4241*/              OPC_EmitMergeInputChains1_0,
/*4242*/              OPC_EmitConvertToTarget, 3,
/*4244*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrib_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 4, 2, 5, 1, 
                      // Src: (st IntRegs:i32:$src4, (add:i32 (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$src3), IntRegs:i32:$src1))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 24
                      // Dst: (STrib_indexed_shl_V4 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3, IntRegs:i32:$src4)
/*4254*/            /*Scope*/ 17, /*->4272*/
/*4255*/              OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*4257*/              OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*4259*/              OPC_EmitMergeInputChains1_0,
/*4260*/              OPC_EmitConvertToTarget, 3,
/*4262*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrih_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 4/*#Ops*/, 4, 2, 5, 1, 
                      // Src: (st IntRegs:i32:$src4, (add:i32 (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$src3), IntRegs:i32:$src1))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 24
                      // Dst: (STrih_indexed_shl_V4 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3, IntRegs:i32:$src4)
/*4272*/            0, /*End of Scope*/
/*4273*/          /*Scope*/ 17, /*->4291*/
/*4274*/            OPC_CheckPredicate, 4, // Predicate_store
/*4276*/            OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*4278*/            OPC_EmitMergeInputChains1_0,
/*4279*/            OPC_EmitConvertToTarget, 3,
/*4281*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::STriw_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 4, 2, 5, 1, 
                    // Src: (st IntRegs:i32:$src4, (add:i32 (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$src3), IntRegs:i32:$src1))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 24
                    // Dst: (STriw_indexed_shl_V4 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3, IntRegs:i32:$src4)
/*4291*/          0, /*End of Scope*/
/*4292*/        /*Scope*/ 82, /*->4375*/
/*4293*/          OPC_RecordChild0, // #2 = $src1
/*4294*/          OPC_RecordChild1, // #3 = $src2
/*4295*/          OPC_MoveChild, 1,
/*4297*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4300*/          OPC_Scope, 24, /*->4326*/ // 3 children in Scope
/*4302*/            OPC_CheckPredicate, 20, // Predicate_s11_0ImmPred
/*4304*/            OPC_MoveParent,
/*4305*/            OPC_CheckType, MVT::i32,
/*4307*/            OPC_MoveParent,
/*4308*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*4310*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*4312*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*4314*/            OPC_EmitMergeInputChains1_0,
/*4315*/            OPC_EmitConvertToTarget, 3,
/*4317*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrib_indexed), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 4, 1, 
                    // Src: (st IntRegs:i32:$src3, (add:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s11_0ImmPred>>:$src2))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 21
                    // Dst: (STrib_indexed IntRegs:i32:$src1, (imm:i32):$src2, IntRegs:i32:$src3)
/*4326*/          /*Scope*/ 24, /*->4351*/
/*4327*/            OPC_CheckPredicate, 21, // Predicate_s11_1ImmPred
/*4329*/            OPC_MoveParent,
/*4330*/            OPC_CheckType, MVT::i32,
/*4332*/            OPC_MoveParent,
/*4333*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*4335*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*4337*/            OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*4339*/            OPC_EmitMergeInputChains1_0,
/*4340*/            OPC_EmitConvertToTarget, 3,
/*4342*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrih_indexed), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 4, 1, 
                    // Src: (st IntRegs:i32:$src3, (add:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s11_1ImmPred>>:$src2))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 21
                    // Dst: (STrih_indexed IntRegs:i32:$src1, (imm:i32):$src2, IntRegs:i32:$src3)
/*4351*/          /*Scope*/ 22, /*->4374*/
/*4352*/            OPC_CheckPredicate, 22, // Predicate_s11_2ImmPred
/*4354*/            OPC_MoveParent,
/*4355*/            OPC_CheckType, MVT::i32,
/*4357*/            OPC_MoveParent,
/*4358*/            OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*4360*/            OPC_CheckPredicate, 4, // Predicate_store
/*4362*/            OPC_EmitMergeInputChains1_0,
/*4363*/            OPC_EmitConvertToTarget, 3,
/*4365*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::STriw_indexed), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 2, 4, 1, 
                    // Src: (st IntRegs:i32:$src3, (add:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s11_2ImmPred>>:$src2))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 21
                    // Dst: (STriw_indexed IntRegs:i32:$src1, (imm:i32):$src2, IntRegs:i32:$src3)
/*4374*/          0, /*End of Scope*/
/*4375*/        0, /*End of Scope*/
/*4376*/      0, /*End of Scope*/
/*4377*/    /*Scope*/ 47, /*->4425*/
/*4378*/      OPC_MoveChild, 1,
/*4380*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4391*/      OPC_CheckType, MVT::i1,
/*4393*/      OPC_MoveParent,
/*4394*/      OPC_RecordChild2, // #1 = $addr
/*4395*/      OPC_CheckChild2Type, MVT::i32,
/*4397*/      OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*4399*/      OPC_CheckPredicate, 4, // Predicate_store
/*4401*/      OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRriS11_2:$addr #2 #3
/*4404*/      OPC_EmitMergeInputChains1_0,
/*4405*/      OPC_EmitInteger, MVT::i32, 1, 
/*4408*/      OPC_EmitNode, TARGET_VAL(Hexagon::TFRI), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 4,  // Results = #5 
/*4416*/      OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrib), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 2, 3, 5, 
              // Src: (st -1:i1, ADDRriS11_2:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
              // Dst: (STrib ADDRriS11_2:i32:$addr, (TFRI:i32 1:i32))
/*4425*/    /*Scope*/ 87|128,2/*343*/, /*->4770*/
/*4427*/      OPC_RecordChild1, // #1 = $src1
/*4428*/      OPC_Scope, 20|128,1/*148*/, /*->4579*/ // 3 children in Scope
/*4431*/        OPC_CheckChild1Type, MVT::i64,
/*4433*/        OPC_RecordChild2, // #2 = $addr
/*4434*/        OPC_Scope, 111, /*->4547*/ // 2 children in Scope
/*4436*/          OPC_CheckChild2Type, MVT::i32,
/*4438*/          OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*4440*/          OPC_Scope, 15, /*->4457*/ // 2 children in Scope
/*4442*/            OPC_CheckPredicate, 4, // Predicate_store
/*4444*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRriS11_3:$addr #3 #4
/*4447*/            OPC_EmitMergeInputChains1_0,
/*4448*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrid), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st DoubleRegs:i64:$src1, ADDRriS11_3:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STrid ADDRriS11_3:i32:$addr, DoubleRegs:i64:$src1)
/*4457*/          /*Scope*/ 88, /*->4546*/
/*4458*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*4460*/            OPC_Scope, 27, /*->4489*/ // 3 children in Scope
/*4462*/              OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*4464*/              OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRriS11_0:$addr #3 #4
/*4467*/              OPC_EmitMergeInputChains1_0,
/*4468*/              OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*4471*/              OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6 
/*4480*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrib), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                      // Src: (st DoubleRegs:i64:$src, ADDRriS11_0:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (STrib ADDRriS11_0:i32:$addr, (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src, subreg_loreg:i32))
/*4489*/            /*Scope*/ 27, /*->4517*/
/*4490*/              OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*4492*/              OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRriS11_0:$addr #3 #4
/*4495*/              OPC_EmitMergeInputChains1_0,
/*4496*/              OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*4499*/              OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6 
/*4508*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrih), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                      // Src: (st DoubleRegs:i64:$src, ADDRriS11_0:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (STrih ADDRriS11_0:i32:$addr, (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src, subreg_loreg:i32))
/*4517*/            /*Scope*/ 27, /*->4545*/
/*4518*/              OPC_CheckPredicate, 23, // Predicate_truncstorei32
/*4520*/              OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRriS11_0:$addr #3 #4
/*4523*/              OPC_EmitMergeInputChains1_0,
/*4524*/              OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*4527*/              OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6 
/*4536*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::STriw), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                      // Src: (st DoubleRegs:i64:$src, ADDRriS11_0:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                      // Dst: (STriw ADDRriS11_0:i32:$addr, (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src, subreg_loreg:i32))
/*4545*/            0, /*End of Scope*/
/*4546*/          0, /*End of Scope*/
/*4547*/        /*Scope*/ 30, /*->4578*/
/*4548*/          OPC_RecordChild3, // #3 = $offset
/*4549*/          OPC_MoveChild, 3,
/*4551*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4554*/          OPC_CheckPredicate, 24, // Predicate_s4_3ImmPred
/*4556*/          OPC_CheckType, MVT::i32,
/*4558*/          OPC_MoveParent,
/*4559*/          OPC_CheckPredicate, 25, // Predicate_istore
/*4561*/          OPC_CheckPredicate, 26, // Predicate_post_store
/*4563*/          OPC_CheckType, MVT::i32,
/*4565*/          OPC_EmitMergeInputChains1_0,
/*4566*/          OPC_EmitConvertToTarget, 3,
/*4568*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::POST_STdri), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 4, 
                  // Src: (ist:i32 DoubleRegs:i64:$src1, IntRegs:i32:$src2, (imm:i32)<<P:Predicate_s4_3ImmPred>>:$offset)<<P:Predicate_istore>><<P:Predicate_post_store>> - Complexity = 8
                  // Dst: (POST_STdri:i32 DoubleRegs:i64:$src1, IntRegs:i32:$src2, (imm:i32):$offset)
/*4578*/        0, /*End of Scope*/
/*4579*/      /*Scope*/ 21|128,1/*149*/, /*->4730*/
/*4581*/        OPC_CheckChild1Type, MVT::i32,
/*4583*/        OPC_RecordChild2, // #2 = $addr
/*4584*/        OPC_Scope, 59, /*->4645*/ // 2 children in Scope
/*4586*/          OPC_CheckChild2Type, MVT::i32,
/*4588*/          OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*4590*/          OPC_Scope, 36, /*->4628*/ // 2 children in Scope
/*4592*/            OPC_CheckPredicate, 5, // Predicate_truncstore
/*4594*/            OPC_Scope, 15, /*->4611*/ // 2 children in Scope
/*4596*/              OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*4598*/              OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRriS11_0:$addr #3 #4
/*4601*/              OPC_EmitMergeInputChains1_0,
/*4602*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrib), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st IntRegs:i32:$src1, ADDRriS11_0:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (STrib ADDRriS11_0:i32:$addr, IntRegs:i32:$src1)
/*4611*/            /*Scope*/ 15, /*->4627*/
/*4612*/              OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*4614*/              OPC_CheckComplexPat, /*CP*/6, /*#*/2, // SelectADDRriS11_1:$addr #3 #4
/*4617*/              OPC_EmitMergeInputChains1_0,
/*4618*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrih), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                      // Src: (st IntRegs:i32:$src1, ADDRriS11_1:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (STrih ADDRriS11_1:i32:$addr, IntRegs:i32:$src1)
/*4627*/            0, /*End of Scope*/
/*4628*/          /*Scope*/ 15, /*->4644*/
/*4629*/            OPC_CheckPredicate, 4, // Predicate_store
/*4631*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRriS11_2:$addr #3 #4
/*4634*/            OPC_EmitMergeInputChains1_0,
/*4635*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::STriw), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                    // Src: (st IntRegs:i32:$src1, ADDRriS11_2:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STriw ADDRriS11_2:i32:$addr, IntRegs:i32:$src1)
/*4644*/          0, /*End of Scope*/
/*4645*/        /*Scope*/ 83, /*->4729*/
/*4646*/          OPC_RecordChild3, // #3 = $offset
/*4647*/          OPC_MoveChild, 3,
/*4649*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4652*/          OPC_CheckType, MVT::i32,
/*4654*/          OPC_Scope, 24, /*->4680*/ // 3 children in Scope
/*4656*/            OPC_CheckPredicate, 27, // Predicate_s4_0ImmPred
/*4658*/            OPC_MoveParent,
/*4659*/            OPC_CheckPredicate, 28, // Predicate_itruncstore
/*4661*/            OPC_CheckPredicate, 29, // Predicate_post_truncst
/*4663*/            OPC_CheckPredicate, 30, // Predicate_post_truncsti8
/*4665*/            OPC_CheckType, MVT::i32,
/*4667*/            OPC_EmitMergeInputChains1_0,
/*4668*/            OPC_EmitConvertToTarget, 3,
/*4670*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::POST_STbri), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 4, 
                    // Src: (ist:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32)<<P:Predicate_s4_0ImmPred>>:$offset)<<P:Predicate_itruncstore>><<P:Predicate_post_truncst>><<P:Predicate_post_truncsti8>> - Complexity = 8
                    // Dst: (POST_STbri:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$offset)
/*4680*/          /*Scope*/ 24, /*->4705*/
/*4681*/            OPC_CheckPredicate, 31, // Predicate_s4_1ImmPred
/*4683*/            OPC_MoveParent,
/*4684*/            OPC_CheckPredicate, 28, // Predicate_itruncstore
/*4686*/            OPC_CheckPredicate, 29, // Predicate_post_truncst
/*4688*/            OPC_CheckPredicate, 32, // Predicate_post_truncsti16
/*4690*/            OPC_CheckType, MVT::i32,
/*4692*/            OPC_EmitMergeInputChains1_0,
/*4693*/            OPC_EmitConvertToTarget, 3,
/*4695*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::POST_SThri), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 4, 
                    // Src: (ist:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32)<<P:Predicate_s4_1ImmPred>>:$offset)<<P:Predicate_itruncstore>><<P:Predicate_post_truncst>><<P:Predicate_post_truncsti16>> - Complexity = 8
                    // Dst: (POST_SThri:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$offset)
/*4705*/          /*Scope*/ 22, /*->4728*/
/*4706*/            OPC_CheckPredicate, 33, // Predicate_s4_2ImmPred
/*4708*/            OPC_MoveParent,
/*4709*/            OPC_CheckPredicate, 25, // Predicate_istore
/*4711*/            OPC_CheckPredicate, 26, // Predicate_post_store
/*4713*/            OPC_CheckType, MVT::i32,
/*4715*/            OPC_EmitMergeInputChains1_0,
/*4716*/            OPC_EmitConvertToTarget, 3,
/*4718*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::POST_STwri), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 4, 
                    // Src: (ist:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32)<<P:Predicate_s4_2ImmPred>>:$offset)<<P:Predicate_istore>><<P:Predicate_post_store>> - Complexity = 8
                    // Dst: (POST_STwri:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$offset)
/*4728*/          0, /*End of Scope*/
/*4729*/        0, /*End of Scope*/
/*4730*/      /*Scope*/ 38, /*->4769*/
/*4731*/        OPC_CheckChild1Type, MVT::i1,
/*4733*/        OPC_RecordChild2, // #2 = $addr
/*4734*/        OPC_CheckChild2Type, MVT::i32,
/*4736*/        OPC_CheckPredicate, 3, // Predicate_unindexedstore
/*4738*/        OPC_CheckPredicate, 4, // Predicate_store
/*4740*/        OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRriS11_2:$addr #3 #4
/*4743*/        OPC_EmitMergeInputChains1_0,
/*4744*/        OPC_EmitInteger, MVT::i32, 1, 
/*4747*/        OPC_EmitInteger, MVT::i32, 0, 
/*4750*/        OPC_EmitNode, TARGET_VAL(Hexagon::MUX_ii), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 5, 6,  // Results = #7 
/*4760*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::STrib), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 3, 4, 7, 
                // Src: (st PredRegs:i1:$src1, ADDRriS11_2:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (STrib ADDRriS11_2:i32:$addr, (MUX_ii:i32 PredRegs:i1:$src1, 1:i32, 0:i32))
/*4769*/      0, /*End of Scope*/
/*4770*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 10|128,15/*1930*/,  TARGET_VAL(ISD::LOAD),// ->6705
/*4775*/    OPC_RecordMemRef,
/*4776*/    OPC_RecordNode,   // #0 = 'ld' chained node
/*4777*/    OPC_Scope, 110|128,9/*1262*/, /*->6042*/ // 3 children in Scope
/*4780*/      OPC_MoveChild, 1,
/*4782*/      OPC_SwitchOpcode /*2 cases */, 62|128,7/*958*/,  TARGET_VAL(ISD::ADD),// ->5745
/*4787*/        OPC_Scope, 29|128,1/*157*/, /*->4947*/ // 4 children in Scope
/*4790*/          OPC_MoveChild, 0,
/*4792*/          OPC_CheckOpcode, TARGET_VAL(HexagonISD::CONST32_GP),
/*4795*/          OPC_RecordChild0, // #1 = $global
/*4796*/          OPC_MoveChild, 0,
/*4798*/          OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*4801*/          OPC_MoveParent,
/*4802*/          OPC_MoveParent,
/*4803*/          OPC_RecordChild1, // #2 = $offset
/*4804*/          OPC_MoveChild, 1,
/*4806*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4809*/          OPC_CheckPredicate, 2, // Predicate_u16ImmPred
/*4811*/          OPC_MoveParent,
/*4812*/          OPC_CheckType, MVT::i32,
/*4814*/          OPC_MoveParent,
/*4815*/          OPC_CheckPredicate, 8, // Predicate_unindexedload
/*4817*/          OPC_Scope, 32, /*->4851*/ // 6 children in Scope
/*4819*/            OPC_CheckPredicate, 9, // Predicate_load
/*4821*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->4836
/*4824*/              OPC_EmitMergeInputChains1_0,
/*4825*/              OPC_EmitConvertToTarget, 2,
/*4827*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriw_GP), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                      // Src: (ld:i32 (add:i32 (HexagonCONST32_GP:i32 (tglobaladdr:i32):$global), (imm:i32)<<P:Predicate_u16ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 117
                      // Dst: (LDriw_GP:i32 (tglobaladdr:i32):$global, (imm:i32)<<P:Predicate_u16ImmPred>>:$offset)
                    /*SwitchType*/ 12,  MVT::i64,// ->4850
/*4838*/              OPC_EmitMergeInputChains1_0,
/*4839*/              OPC_EmitConvertToTarget, 2,
/*4841*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDrid_GP), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 3, 
                      // Src: (ld:i64 (add:i32 (HexagonCONST32_GP:i32 (tglobaladdr:i32):$global), (imm:i32)<<P:Predicate_u16ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 117
                      // Dst: (LDrid_GP:i64 (tglobaladdr:i32):$global, (imm:i32)<<P:Predicate_u16ImmPred>>:$offset)
                    0, // EndSwitchType
/*4851*/          /*Scope*/ 18, /*->4870*/
/*4852*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*4854*/            OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*4856*/            OPC_CheckType, MVT::i32,
/*4858*/            OPC_EmitMergeInputChains1_0,
/*4859*/            OPC_EmitConvertToTarget, 2,
/*4861*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDrih_GP), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                    // Src: (ld:i32 (add:i32 (HexagonCONST32_GP:i32 (tglobaladdr:i32):$global), (imm:i32)<<P:Predicate_u16ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 117
                    // Dst: (LDrih_GP:i32 (tglobaladdr:i32):$global, (imm:i32)<<P:Predicate_u16ImmPred>>:$offset)
/*4870*/          /*Scope*/ 18, /*->4889*/
/*4871*/            OPC_CheckPredicate, 34, // Predicate_zextload
/*4873*/            OPC_CheckPredicate, 35, // Predicate_zextloadi16
/*4875*/            OPC_CheckType, MVT::i32,
/*4877*/            OPC_EmitMergeInputChains1_0,
/*4878*/            OPC_EmitConvertToTarget, 2,
/*4880*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriuh_GP), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                    // Src: (ld:i32 (add:i32 (HexagonCONST32_GP:i32 (tglobaladdr:i32):$global), (imm:i32)<<P:Predicate_u16ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 117
                    // Dst: (LDriuh_GP:i32 (tglobaladdr:i32):$global, (imm:i32)<<P:Predicate_u16ImmPred>>:$offset)
/*4889*/          /*Scope*/ 18, /*->4908*/
/*4890*/            OPC_CheckPredicate, 36, // Predicate_extload
/*4892*/            OPC_CheckPredicate, 37, // Predicate_extloadi16
/*4894*/            OPC_CheckType, MVT::i32,
/*4896*/            OPC_EmitMergeInputChains1_0,
/*4897*/            OPC_EmitConvertToTarget, 2,
/*4899*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriuh_GP), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                    // Src: (ld:i32 (add:i32 (HexagonCONST32_GP:i32 (tglobaladdr:i32):$global), (imm:i32)<<P:Predicate_u16ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 117
                    // Dst: (LDriuh_GP:i32 (tglobaladdr:i32):$global, (imm:i32)<<P:Predicate_u16ImmPred>>:$offset)
/*4908*/          /*Scope*/ 18, /*->4927*/
/*4909*/            OPC_CheckPredicate, 34, // Predicate_zextload
/*4911*/            OPC_CheckPredicate, 38, // Predicate_zextloadi8
/*4913*/            OPC_CheckType, MVT::i32,
/*4915*/            OPC_EmitMergeInputChains1_0,
/*4916*/            OPC_EmitConvertToTarget, 2,
/*4918*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriub_GP), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                    // Src: (ld:i32 (add:i32 (HexagonCONST32_GP:i32 (tglobaladdr:i32):$global), (imm:i32)<<P:Predicate_u16ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 117
                    // Dst: (LDriub_GP:i32 (tglobaladdr:i32):$global, (imm:i32)<<P:Predicate_u16ImmPred>>:$offset)
/*4927*/          /*Scope*/ 18, /*->4946*/
/*4928*/            OPC_CheckPredicate, 11, // Predicate_sextload
/*4930*/            OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*4932*/            OPC_CheckType, MVT::i32,
/*4934*/            OPC_EmitMergeInputChains1_0,
/*4935*/            OPC_EmitConvertToTarget, 2,
/*4937*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDrib_GP), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                    // Src: (ld:i32 (add:i32 (HexagonCONST32_GP:i32 (tglobaladdr:i32):$global), (imm:i32)<<P:Predicate_u16ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 117
                    // Dst: (LDrib_GP:i32 (tglobaladdr:i32):$global, (imm:i32)<<P:Predicate_u16ImmPred>>:$offset)
/*4946*/          0, /*End of Scope*/
/*4947*/        /*Scope*/ 60|128,1/*188*/, /*->5137*/
/*4949*/          OPC_RecordChild0, // #1 = $src1
/*4950*/          OPC_MoveChild, 1,
/*4952*/          OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*4955*/          OPC_RecordChild0, // #2 = $src2
/*4956*/          OPC_RecordChild1, // #3 = $offset
/*4957*/          OPC_MoveChild, 1,
/*4959*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4962*/          OPC_CheckPredicate, 17, // Predicate_u2ImmPred
/*4964*/          OPC_CheckType, MVT::i32,
/*4966*/          OPC_MoveParent,
/*4967*/          OPC_MoveParent,
/*4968*/          OPC_CheckType, MVT::i32,
/*4970*/          OPC_MoveParent,
/*4971*/          OPC_CheckPredicate, 8, // Predicate_unindexedload
/*4973*/          OPC_SwitchType /*2 cases */, 17,  MVT::i64,// ->4993
/*4976*/            OPC_CheckPredicate, 9, // Predicate_load
/*4978*/            OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*4980*/            OPC_EmitMergeInputChains1_0,
/*4981*/            OPC_EmitConvertToTarget, 3,
/*4983*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDrid_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 4, 
                    // Src: (ld:i64 (add:i32 IntRegs:i32:$src1, (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$offset)))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 54
                    // Dst: (LDrid_indexed_shl_V4:i64 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$offset)
                  /*SwitchType*/ 12|128,1/*140*/,  MVT::i32,// ->5136
/*4996*/            OPC_Scope, 19, /*->5017*/ // 7 children in Scope
/*4998*/              OPC_CheckPredicate, 11, // Predicate_sextload
/*5000*/              OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*5002*/              OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*5004*/              OPC_EmitMergeInputChains1_0,
/*5005*/              OPC_EmitConvertToTarget, 3,
/*5007*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDrib_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 4, 
                      // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$offset)))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 54
                      // Dst: (LDrib_indexed_shl_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$offset)
/*5017*/            /*Scope*/ 19, /*->5037*/
/*5018*/              OPC_CheckPredicate, 34, // Predicate_zextload
/*5020*/              OPC_CheckPredicate, 38, // Predicate_zextloadi8
/*5022*/              OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*5024*/              OPC_EmitMergeInputChains1_0,
/*5025*/              OPC_EmitConvertToTarget, 3,
/*5027*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriub_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 4, 
                      // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$offset)))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 54
                      // Dst: (LDriub_indexed_shl_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$offset)
/*5037*/            /*Scope*/ 19, /*->5057*/
/*5038*/              OPC_CheckPredicate, 36, // Predicate_extload
/*5040*/              OPC_CheckPredicate, 39, // Predicate_extloadi8
/*5042*/              OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*5044*/              OPC_EmitMergeInputChains1_0,
/*5045*/              OPC_EmitConvertToTarget, 3,
/*5047*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriub_ae_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 4, 
                      // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$offset)))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 54
                      // Dst: (LDriub_ae_indexed_shl_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$offset)
/*5057*/            /*Scope*/ 19, /*->5077*/
/*5058*/              OPC_CheckPredicate, 11, // Predicate_sextload
/*5060*/              OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*5062*/              OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*5064*/              OPC_EmitMergeInputChains1_0,
/*5065*/              OPC_EmitConvertToTarget, 3,
/*5067*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDrih_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 4, 
                      // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$offset)))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 54
                      // Dst: (LDrih_indexed_shl_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$offset)
/*5077*/            /*Scope*/ 19, /*->5097*/
/*5078*/              OPC_CheckPredicate, 34, // Predicate_zextload
/*5080*/              OPC_CheckPredicate, 35, // Predicate_zextloadi16
/*5082*/              OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*5084*/              OPC_EmitMergeInputChains1_0,
/*5085*/              OPC_EmitConvertToTarget, 3,
/*5087*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriuh_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 4, 
                      // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$offset)))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 54
                      // Dst: (LDriuh_indexed_shl_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$offset)
/*5097*/            /*Scope*/ 19, /*->5117*/
/*5098*/              OPC_CheckPredicate, 36, // Predicate_extload
/*5100*/              OPC_CheckPredicate, 37, // Predicate_extloadi16
/*5102*/              OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*5104*/              OPC_EmitMergeInputChains1_0,
/*5105*/              OPC_EmitConvertToTarget, 3,
/*5107*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriuh_ae_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 4, 
                      // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$offset)))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 54
                      // Dst: (LDriuh_ae_indexed_shl_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$offset)
/*5117*/            /*Scope*/ 17, /*->5135*/
/*5118*/              OPC_CheckPredicate, 9, // Predicate_load
/*5120*/              OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*5122*/              OPC_EmitMergeInputChains1_0,
/*5123*/              OPC_EmitConvertToTarget, 3,
/*5125*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriw_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 4, 
                      // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$offset)))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 54
                      // Dst: (LDriw_indexed_shl_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$offset)
/*5135*/            0, /*End of Scope*/
                  0, // EndSwitchType
/*5137*/        /*Scope*/ 60|128,1/*188*/, /*->5327*/
/*5139*/          OPC_MoveChild, 0,
/*5141*/          OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*5144*/          OPC_RecordChild0, // #1 = $src2
/*5145*/          OPC_RecordChild1, // #2 = $offset
/*5146*/          OPC_MoveChild, 1,
/*5148*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5151*/          OPC_CheckPredicate, 17, // Predicate_u2ImmPred
/*5153*/          OPC_CheckType, MVT::i32,
/*5155*/          OPC_MoveParent,
/*5156*/          OPC_MoveParent,
/*5157*/          OPC_RecordChild1, // #3 = $src1
/*5158*/          OPC_CheckType, MVT::i32,
/*5160*/          OPC_MoveParent,
/*5161*/          OPC_CheckPredicate, 8, // Predicate_unindexedload
/*5163*/          OPC_SwitchType /*2 cases */, 17,  MVT::i64,// ->5183
/*5166*/            OPC_CheckPredicate, 9, // Predicate_load
/*5168*/            OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*5170*/            OPC_EmitMergeInputChains1_0,
/*5171*/            OPC_EmitConvertToTarget, 2,
/*5173*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDrid_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                    // Src: (ld:i64 (add:i32 (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$offset), IntRegs:i32:$src1))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 54
                    // Dst: (LDrid_indexed_shl_V4:i64 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$offset)
                  /*SwitchType*/ 12|128,1/*140*/,  MVT::i32,// ->5326
/*5186*/            OPC_Scope, 19, /*->5207*/ // 7 children in Scope
/*5188*/              OPC_CheckPredicate, 11, // Predicate_sextload
/*5190*/              OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*5192*/              OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*5194*/              OPC_EmitMergeInputChains1_0,
/*5195*/              OPC_EmitConvertToTarget, 2,
/*5197*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDrib_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                      // Src: (ld:i32 (add:i32 (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$offset), IntRegs:i32:$src1))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 54
                      // Dst: (LDrib_indexed_shl_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$offset)
/*5207*/            /*Scope*/ 19, /*->5227*/
/*5208*/              OPC_CheckPredicate, 34, // Predicate_zextload
/*5210*/              OPC_CheckPredicate, 38, // Predicate_zextloadi8
/*5212*/              OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*5214*/              OPC_EmitMergeInputChains1_0,
/*5215*/              OPC_EmitConvertToTarget, 2,
/*5217*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriub_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                      // Src: (ld:i32 (add:i32 (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$offset), IntRegs:i32:$src1))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 54
                      // Dst: (LDriub_indexed_shl_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$offset)
/*5227*/            /*Scope*/ 19, /*->5247*/
/*5228*/              OPC_CheckPredicate, 36, // Predicate_extload
/*5230*/              OPC_CheckPredicate, 39, // Predicate_extloadi8
/*5232*/              OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*5234*/              OPC_EmitMergeInputChains1_0,
/*5235*/              OPC_EmitConvertToTarget, 2,
/*5237*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriub_ae_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                      // Src: (ld:i32 (add:i32 (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$offset), IntRegs:i32:$src1))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 54
                      // Dst: (LDriub_ae_indexed_shl_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$offset)
/*5247*/            /*Scope*/ 19, /*->5267*/
/*5248*/              OPC_CheckPredicate, 11, // Predicate_sextload
/*5250*/              OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*5252*/              OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*5254*/              OPC_EmitMergeInputChains1_0,
/*5255*/              OPC_EmitConvertToTarget, 2,
/*5257*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDrih_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                      // Src: (ld:i32 (add:i32 (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$offset), IntRegs:i32:$src1))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 54
                      // Dst: (LDrih_indexed_shl_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$offset)
/*5267*/            /*Scope*/ 19, /*->5287*/
/*5268*/              OPC_CheckPredicate, 34, // Predicate_zextload
/*5270*/              OPC_CheckPredicate, 35, // Predicate_zextloadi16
/*5272*/              OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*5274*/              OPC_EmitMergeInputChains1_0,
/*5275*/              OPC_EmitConvertToTarget, 2,
/*5277*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriuh_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                      // Src: (ld:i32 (add:i32 (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$offset), IntRegs:i32:$src1))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 54
                      // Dst: (LDriuh_indexed_shl_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$offset)
/*5287*/            /*Scope*/ 19, /*->5307*/
/*5288*/              OPC_CheckPredicate, 36, // Predicate_extload
/*5290*/              OPC_CheckPredicate, 37, // Predicate_extloadi16
/*5292*/              OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*5294*/              OPC_EmitMergeInputChains1_0,
/*5295*/              OPC_EmitConvertToTarget, 2,
/*5297*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriuh_ae_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                      // Src: (ld:i32 (add:i32 (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$offset), IntRegs:i32:$src1))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 54
                      // Dst: (LDriuh_ae_indexed_shl_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$offset)
/*5307*/            /*Scope*/ 17, /*->5325*/
/*5308*/              OPC_CheckPredicate, 9, // Predicate_load
/*5310*/              OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*5312*/              OPC_EmitMergeInputChains1_0,
/*5313*/              OPC_EmitConvertToTarget, 2,
/*5315*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriw_indexed_shl_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                      // Src: (ld:i32 (add:i32 (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u2ImmPred>>:$offset), IntRegs:i32:$src1))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 54
                      // Dst: (LDriw_indexed_shl_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$offset)
/*5325*/            0, /*End of Scope*/
                  0, // EndSwitchType
/*5327*/        /*Scope*/ 31|128,3/*415*/, /*->5744*/
/*5329*/          OPC_RecordChild0, // #1 = $src1
/*5330*/          OPC_RecordChild1, // #2 = $offset
/*5331*/          OPC_Scope, 7|128,2/*263*/, /*->5597*/ // 2 children in Scope
/*5334*/            OPC_MoveChild, 1,
/*5336*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5339*/            OPC_Scope, 24, /*->5365*/ // 6 children in Scope
/*5341*/              OPC_CheckPredicate, 19, // Predicate_s11_3ImmPred
/*5343*/              OPC_MoveParent,
/*5344*/              OPC_CheckType, MVT::i32,
/*5346*/              OPC_MoveParent,
/*5347*/              OPC_CheckPredicate, 8, // Predicate_unindexedload
/*5349*/              OPC_CheckPredicate, 9, // Predicate_load
/*5351*/              OPC_CheckType, MVT::i64,
/*5353*/              OPC_EmitMergeInputChains1_0,
/*5354*/              OPC_EmitConvertToTarget, 2,
/*5356*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDrid_indexed), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 3, 
                      // Src: (ld:i64 (add:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s11_3ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 31
                      // Dst: (LDrid_indexed:i64 IntRegs:i32:$src1, (imm:i32):$offset)
/*5365*/            /*Scope*/ 46, /*->5412*/
/*5366*/              OPC_CheckPredicate, 20, // Predicate_s11_0ImmPred
/*5368*/              OPC_MoveParent,
/*5369*/              OPC_CheckType, MVT::i32,
/*5371*/              OPC_MoveParent,
/*5372*/              OPC_CheckPredicate, 8, // Predicate_unindexedload
/*5374*/              OPC_CheckType, MVT::i32,
/*5376*/              OPC_Scope, 16, /*->5394*/ // 2 children in Scope
/*5378*/                OPC_CheckPredicate, 11, // Predicate_sextload
/*5380*/                OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*5382*/                OPC_EmitMergeInputChains1_0,
/*5383*/                OPC_EmitConvertToTarget, 2,
/*5385*/                OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDrib_indexed), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                        // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s11_0ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 31
                        // Dst: (LDrib_indexed:i32 IntRegs:i32:$src1, (imm:i32):$offset)
/*5394*/              /*Scope*/ 16, /*->5411*/
/*5395*/                OPC_CheckPredicate, 36, // Predicate_extload
/*5397*/                OPC_CheckPredicate, 39, // Predicate_extloadi8
/*5399*/                OPC_EmitMergeInputChains1_0,
/*5400*/                OPC_EmitConvertToTarget, 2,
/*5402*/                OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDrib_ae_indexed), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                        // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s11_0ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 31
                        // Dst: (LDrib_ae_indexed:i32 IntRegs:i32:$src1, (imm:i32):$offset)
/*5411*/              0, /*End of Scope*/
/*5412*/            /*Scope*/ 46, /*->5459*/
/*5413*/              OPC_CheckPredicate, 21, // Predicate_s11_1ImmPred
/*5415*/              OPC_MoveParent,
/*5416*/              OPC_CheckType, MVT::i32,
/*5418*/              OPC_MoveParent,
/*5419*/              OPC_CheckPredicate, 8, // Predicate_unindexedload
/*5421*/              OPC_CheckType, MVT::i32,
/*5423*/              OPC_Scope, 16, /*->5441*/ // 2 children in Scope
/*5425*/                OPC_CheckPredicate, 11, // Predicate_sextload
/*5427*/                OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*5429*/                OPC_EmitMergeInputChains1_0,
/*5430*/                OPC_EmitConvertToTarget, 2,
/*5432*/                OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDrih_indexed), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                        // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s11_1ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 31
                        // Dst: (LDrih_indexed:i32 IntRegs:i32:$src1, (imm:i32):$offset)
/*5441*/              /*Scope*/ 16, /*->5458*/
/*5442*/                OPC_CheckPredicate, 36, // Predicate_extload
/*5444*/                OPC_CheckPredicate, 37, // Predicate_extloadi16
/*5446*/                OPC_EmitMergeInputChains1_0,
/*5447*/                OPC_EmitConvertToTarget, 2,
/*5449*/                OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDrih_ae_indexed), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                        // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s11_1ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 31
                        // Dst: (LDrih_ae_indexed:i32 IntRegs:i32:$src1, (imm:i32):$offset)
/*5458*/              0, /*End of Scope*/
/*5459*/            /*Scope*/ 64, /*->5524*/
/*5460*/              OPC_CheckPredicate, 20, // Predicate_s11_0ImmPred
/*5462*/              OPC_MoveParent,
/*5463*/              OPC_CheckType, MVT::i32,
/*5465*/              OPC_MoveParent,
/*5466*/              OPC_CheckPredicate, 8, // Predicate_unindexedload
/*5468*/              OPC_CheckType, MVT::i32,
/*5470*/              OPC_Scope, 34, /*->5506*/ // 2 children in Scope
/*5472*/                OPC_CheckPredicate, 34, // Predicate_zextload
/*5474*/                OPC_Scope, 14, /*->5490*/ // 2 children in Scope
/*5476*/                  OPC_CheckPredicate, 38, // Predicate_zextloadi8
/*5478*/                  OPC_EmitMergeInputChains1_0,
/*5479*/                  OPC_EmitConvertToTarget, 2,
/*5481*/                  OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriub_indexed), 0|OPFL_Chain|OPFL_MemRefs,
                              1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                          // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s11_0ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 31
                          // Dst: (LDriub_indexed:i32 IntRegs:i32:$src1, (imm:i32):$offset)
/*5490*/                /*Scope*/ 14, /*->5505*/
/*5491*/                  OPC_CheckPredicate, 40, // Predicate_zextloadi1
/*5493*/                  OPC_EmitMergeInputChains1_0,
/*5494*/                  OPC_EmitConvertToTarget, 2,
/*5496*/                  OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriubit_indexed), 0|OPFL_Chain|OPFL_MemRefs,
                              1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                          // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s11_0ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 31
                          // Dst: (LDriubit_indexed:i32 IntRegs:i32:$src1, (imm:i32):$offset)
/*5505*/                0, /*End of Scope*/
/*5506*/              /*Scope*/ 16, /*->5523*/
/*5507*/                OPC_CheckPredicate, 36, // Predicate_extload
/*5509*/                OPC_CheckPredicate, 39, // Predicate_extloadi8
/*5511*/                OPC_EmitMergeInputChains1_0,
/*5512*/                OPC_EmitConvertToTarget, 2,
/*5514*/                OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriub_ae_indexed), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                        // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s11_0ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 31
                        // Dst: (LDriub_ae_indexed:i32 IntRegs:i32:$src1, (imm:i32):$offset)
/*5523*/              0, /*End of Scope*/
/*5524*/            /*Scope*/ 46, /*->5571*/
/*5525*/              OPC_CheckPredicate, 21, // Predicate_s11_1ImmPred
/*5527*/              OPC_MoveParent,
/*5528*/              OPC_CheckType, MVT::i32,
/*5530*/              OPC_MoveParent,
/*5531*/              OPC_CheckPredicate, 8, // Predicate_unindexedload
/*5533*/              OPC_CheckType, MVT::i32,
/*5535*/              OPC_Scope, 16, /*->5553*/ // 2 children in Scope
/*5537*/                OPC_CheckPredicate, 34, // Predicate_zextload
/*5539*/                OPC_CheckPredicate, 35, // Predicate_zextloadi16
/*5541*/                OPC_EmitMergeInputChains1_0,
/*5542*/                OPC_EmitConvertToTarget, 2,
/*5544*/                OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriuh_indexed), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                        // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s11_1ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 31
                        // Dst: (LDriuh_indexed:i32 IntRegs:i32:$src1, (imm:i32):$offset)
/*5553*/              /*Scope*/ 16, /*->5570*/
/*5554*/                OPC_CheckPredicate, 36, // Predicate_extload
/*5556*/                OPC_CheckPredicate, 37, // Predicate_extloadi16
/*5558*/                OPC_EmitMergeInputChains1_0,
/*5559*/                OPC_EmitConvertToTarget, 2,
/*5561*/                OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriuh_ae_indexed), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                        // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s11_1ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 31
                        // Dst: (LDriuh_ae_indexed:i32 IntRegs:i32:$src1, (imm:i32):$offset)
/*5570*/              0, /*End of Scope*/
/*5571*/            /*Scope*/ 24, /*->5596*/
/*5572*/              OPC_CheckPredicate, 22, // Predicate_s11_2ImmPred
/*5574*/              OPC_MoveParent,
/*5575*/              OPC_CheckType, MVT::i32,
/*5577*/              OPC_MoveParent,
/*5578*/              OPC_CheckPredicate, 8, // Predicate_unindexedload
/*5580*/              OPC_CheckPredicate, 9, // Predicate_load
/*5582*/              OPC_CheckType, MVT::i32,
/*5584*/              OPC_EmitMergeInputChains1_0,
/*5585*/              OPC_EmitConvertToTarget, 2,
/*5587*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriw_indexed), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                      // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s11_2ImmPred>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 31
                      // Dst: (LDriw_indexed:i32 IntRegs:i32:$src1, (imm:i32):$offset)
/*5596*/            0, /*End of Scope*/
/*5597*/          /*Scope*/ 16|128,1/*144*/, /*->5743*/
/*5599*/            OPC_CheckType, MVT::i32,
/*5601*/            OPC_MoveParent,
/*5602*/            OPC_CheckPredicate, 8, // Predicate_unindexedload
/*5604*/            OPC_SwitchType /*2 cases */, 14,  MVT::i64,// ->5621
/*5607*/              OPC_CheckPredicate, 9, // Predicate_load
/*5609*/              OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*5611*/              OPC_EmitMergeInputChains1_0,
/*5612*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDrid_indexed_V4), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                      // Src: (ld:i64 (add:i32 IntRegs:i32:$src1, IntRegs:i32:$src2))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 17
                      // Dst: (LDrid_indexed_V4:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
                    /*SwitchType*/ 119,  MVT::i32,// ->5742
/*5623*/              OPC_Scope, 16, /*->5641*/ // 7 children in Scope
/*5625*/                OPC_CheckPredicate, 11, // Predicate_sextload
/*5627*/                OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*5629*/                OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*5631*/                OPC_EmitMergeInputChains1_0,
/*5632*/                OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDrib_indexed_V4), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                        // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, IntRegs:i32:$src2))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 17
                        // Dst: (LDrib_indexed_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*5641*/              /*Scope*/ 16, /*->5658*/
/*5642*/                OPC_CheckPredicate, 34, // Predicate_zextload
/*5644*/                OPC_CheckPredicate, 38, // Predicate_zextloadi8
/*5646*/                OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*5648*/                OPC_EmitMergeInputChains1_0,
/*5649*/                OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriub_indexed_V4), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                        // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, IntRegs:i32:$src2))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 17
                        // Dst: (LDriub_indexed_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*5658*/              /*Scope*/ 16, /*->5675*/
/*5659*/                OPC_CheckPredicate, 36, // Predicate_extload
/*5661*/                OPC_CheckPredicate, 39, // Predicate_extloadi8
/*5663*/                OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*5665*/                OPC_EmitMergeInputChains1_0,
/*5666*/                OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriub_ae_indexed_V4), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                        // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, IntRegs:i32:$src2))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 17
                        // Dst: (LDriub_ae_indexed_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*5675*/              /*Scope*/ 16, /*->5692*/
/*5676*/                OPC_CheckPredicate, 11, // Predicate_sextload
/*5678*/                OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*5680*/                OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*5682*/                OPC_EmitMergeInputChains1_0,
/*5683*/                OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDrih_indexed_V4), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                        // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, IntRegs:i32:$src2))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 17
                        // Dst: (LDrih_indexed_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*5692*/              /*Scope*/ 16, /*->5709*/
/*5693*/                OPC_CheckPredicate, 34, // Predicate_zextload
/*5695*/                OPC_CheckPredicate, 35, // Predicate_zextloadi16
/*5697*/                OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*5699*/                OPC_EmitMergeInputChains1_0,
/*5700*/                OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriuh_indexed_V4), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                        // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, IntRegs:i32:$src2))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 17
                        // Dst: (LDriuh_indexed_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*5709*/              /*Scope*/ 16, /*->5726*/
/*5710*/                OPC_CheckPredicate, 36, // Predicate_extload
/*5712*/                OPC_CheckPredicate, 37, // Predicate_extloadi16
/*5714*/                OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*5716*/                OPC_EmitMergeInputChains1_0,
/*5717*/                OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriuh_ae_indexed_V4), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                        // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, IntRegs:i32:$src2))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 17
                        // Dst: (LDriuh_ae_indexed_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*5726*/              /*Scope*/ 14, /*->5741*/
/*5727*/                OPC_CheckPredicate, 9, // Predicate_load
/*5729*/                OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*5731*/                OPC_EmitMergeInputChains1_0,
/*5732*/                OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriw_indexed_V4), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                        // Src: (ld:i32 (add:i32 IntRegs:i32:$src1, IntRegs:i32:$src2))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 17
                        // Dst: (LDriw_indexed_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*5741*/              0, /*End of Scope*/
                    0, // EndSwitchType
/*5743*/          0, /*End of Scope*/
/*5744*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 36|128,2/*292*/,  TARGET_VAL(HexagonISD::CONST32_GP),// ->6041
/*5749*/        OPC_RecordChild0, // #1 = $global
/*5750*/        OPC_MoveChild, 0,
/*5752*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*5755*/        OPC_MoveParent,
/*5756*/        OPC_MoveParent,
/*5757*/        OPC_CheckPredicate, 8, // Predicate_unindexedload
/*5759*/        OPC_Scope, 26, /*->5787*/ // 15 children in Scope
/*5761*/          OPC_CheckPredicate, 9, // Predicate_load
/*5763*/          OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5775
/*5766*/            OPC_EmitMergeInputChains1_0,
/*5767*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDw_GP), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                    // Src: (ld:i32 (HexagonCONST32_GP:iPTR (tglobaladdr:iPTR):$global))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 110
                    // Dst: (LDw_GP:i32 (tglobaladdr:i32):$global)
                  /*SwitchType*/ 9,  MVT::i64,// ->5786
/*5777*/            OPC_EmitMergeInputChains1_0,
/*5778*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDd_GP), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                    // Src: (ld:i64 (HexagonCONST32_GP:iPTR (tglobaladdr:iPTR):$global))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 110
                    // Dst: (LDd_GP:i64 (tglobaladdr:i32):$global)
                  0, // EndSwitchType
/*5787*/        /*Scope*/ 19, /*->5807*/
/*5788*/          OPC_CheckPredicate, 11, // Predicate_sextload
/*5790*/          OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*5792*/          OPC_CheckType, MVT::i32,
/*5794*/          OPC_EmitMergeInputChains1_0,
/*5795*/          OPC_EmitInteger, MVT::i32, 0, 
/*5798*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDrih_GP), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:i32 (HexagonCONST32_GP:iPTR (tglobaladdr:iPTR):$global))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 110
                  // Dst: (LDrih_GP:i32 (tglobaladdr:i32):$global, 0:i32)
/*5807*/        /*Scope*/ 19, /*->5827*/
/*5808*/          OPC_CheckPredicate, 34, // Predicate_zextload
/*5810*/          OPC_CheckPredicate, 35, // Predicate_zextloadi16
/*5812*/          OPC_CheckType, MVT::i32,
/*5814*/          OPC_EmitMergeInputChains1_0,
/*5815*/          OPC_EmitInteger, MVT::i32, 0, 
/*5818*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriuh_GP), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:i32 (HexagonCONST32_GP:iPTR (tglobaladdr:iPTR):$global))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 110
                  // Dst: (LDriuh_GP:i32 (tglobaladdr:i32):$global, 0:i32)
/*5827*/        /*Scope*/ 19, /*->5847*/
/*5828*/          OPC_CheckPredicate, 36, // Predicate_extload
/*5830*/          OPC_CheckPredicate, 37, // Predicate_extloadi16
/*5832*/          OPC_CheckType, MVT::i32,
/*5834*/          OPC_EmitMergeInputChains1_0,
/*5835*/          OPC_EmitInteger, MVT::i32, 0, 
/*5838*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriuh_GP), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:i32 (HexagonCONST32_GP:iPTR (tglobaladdr:iPTR):$global))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 110
                  // Dst: (LDriuh_GP:i32 (tglobaladdr:i32):$global, 0:i32)
/*5847*/        /*Scope*/ 19, /*->5867*/
/*5848*/          OPC_CheckPredicate, 34, // Predicate_zextload
/*5850*/          OPC_CheckPredicate, 38, // Predicate_zextloadi8
/*5852*/          OPC_CheckType, MVT::i32,
/*5854*/          OPC_EmitMergeInputChains1_0,
/*5855*/          OPC_EmitInteger, MVT::i32, 0, 
/*5858*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriub_GP), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:i32 (HexagonCONST32_GP:iPTR (tglobaladdr:iPTR):$global))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 110
                  // Dst: (LDriub_GP:i32 (tglobaladdr:i32):$global, 0:i32)
/*5867*/        /*Scope*/ 15, /*->5883*/
/*5868*/          OPC_CheckPredicate, 36, // Predicate_extload
/*5870*/          OPC_CheckPredicate, 39, // Predicate_extloadi8
/*5872*/          OPC_CheckType, MVT::i32,
/*5874*/          OPC_EmitMergeInputChains1_0,
/*5875*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDb_GP), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (ld:i32 (HexagonCONST32_GP:iPTR (tglobaladdr:iPTR):$global))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 110
                  // Dst: (LDb_GP:i32 (tglobaladdr:i32):$global)
/*5883*/        /*Scope*/ 15, /*->5899*/
/*5884*/          OPC_CheckPredicate, 11, // Predicate_sextload
/*5886*/          OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*5888*/          OPC_CheckType, MVT::i32,
/*5890*/          OPC_EmitMergeInputChains1_0,
/*5891*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDb_GP), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (ld:i32 (HexagonCONST32_GP:iPTR (tglobaladdr:iPTR):$global))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 110
                  // Dst: (LDb_GP:i32 (tglobaladdr:i32):$global)
/*5899*/        /*Scope*/ 15, /*->5915*/
/*5900*/          OPC_CheckPredicate, 34, // Predicate_zextload
/*5902*/          OPC_CheckPredicate, 38, // Predicate_zextloadi8
/*5904*/          OPC_CheckType, MVT::i32,
/*5906*/          OPC_EmitMergeInputChains1_0,
/*5907*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDub_GP), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (ld:i32 (HexagonCONST32_GP:iPTR (tglobaladdr:iPTR):$global))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 110
                  // Dst: (LDub_GP:i32 (tglobaladdr:i32):$global)
/*5915*/        /*Scope*/ 15, /*->5931*/
/*5916*/          OPC_CheckPredicate, 36, // Predicate_extload
/*5918*/          OPC_CheckPredicate, 41, // Predicate_extloadi1
/*5920*/          OPC_CheckType, MVT::i32,
/*5922*/          OPC_EmitMergeInputChains1_0,
/*5923*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDb_GP), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (ld:i32 (HexagonCONST32_GP:iPTR (tglobaladdr:iPTR):$global))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 110
                  // Dst: (LDb_GP:i32 (tglobaladdr:i32):$global)
/*5931*/        /*Scope*/ 15, /*->5947*/
/*5932*/          OPC_CheckPredicate, 11, // Predicate_sextload
/*5934*/          OPC_CheckPredicate, 42, // Predicate_sextloadi1
/*5936*/          OPC_CheckType, MVT::i32,
/*5938*/          OPC_EmitMergeInputChains1_0,
/*5939*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDb_GP), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (ld:i32 (HexagonCONST32_GP:iPTR (tglobaladdr:iPTR):$global))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi1>> - Complexity = 110
                  // Dst: (LDb_GP:i32 (tglobaladdr:i32):$global)
/*5947*/        /*Scope*/ 15, /*->5963*/
/*5948*/          OPC_CheckPredicate, 34, // Predicate_zextload
/*5950*/          OPC_CheckPredicate, 40, // Predicate_zextloadi1
/*5952*/          OPC_CheckType, MVT::i32,
/*5954*/          OPC_EmitMergeInputChains1_0,
/*5955*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDub_GP), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (ld:i32 (HexagonCONST32_GP:iPTR (tglobaladdr:iPTR):$global))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 110
                  // Dst: (LDub_GP:i32 (tglobaladdr:i32):$global)
/*5963*/        /*Scope*/ 15, /*->5979*/
/*5964*/          OPC_CheckPredicate, 36, // Predicate_extload
/*5966*/          OPC_CheckPredicate, 37, // Predicate_extloadi16
/*5968*/          OPC_CheckType, MVT::i32,
/*5970*/          OPC_EmitMergeInputChains1_0,
/*5971*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDh_GP), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (ld:i32 (HexagonCONST32_GP:iPTR (tglobaladdr:iPTR):$global))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 110
                  // Dst: (LDh_GP:i32 (tglobaladdr:i32):$global)
/*5979*/        /*Scope*/ 15, /*->5995*/
/*5980*/          OPC_CheckPredicate, 11, // Predicate_sextload
/*5982*/          OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*5984*/          OPC_CheckType, MVT::i32,
/*5986*/          OPC_EmitMergeInputChains1_0,
/*5987*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDh_GP), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (ld:i32 (HexagonCONST32_GP:iPTR (tglobaladdr:iPTR):$global))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 110
                  // Dst: (LDh_GP:i32 (tglobaladdr:i32):$global)
/*5995*/        /*Scope*/ 15, /*->6011*/
/*5996*/          OPC_CheckPredicate, 34, // Predicate_zextload
/*5998*/          OPC_CheckPredicate, 35, // Predicate_zextloadi16
/*6000*/          OPC_CheckType, MVT::i32,
/*6002*/          OPC_EmitMergeInputChains1_0,
/*6003*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDuh_GP), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (ld:i32 (HexagonCONST32_GP:iPTR (tglobaladdr:iPTR):$global))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 110
                  // Dst: (LDuh_GP:i32 (tglobaladdr:i32):$global)
/*6011*/        /*Scope*/ 28, /*->6040*/
/*6012*/          OPC_CheckPredicate, 9, // Predicate_load
/*6014*/          OPC_CheckType, MVT::i1,
/*6016*/          OPC_EmitMergeInputChains1_0,
/*6017*/          OPC_EmitInteger, MVT::i32, 0, 
/*6020*/          OPC_EmitNode, TARGET_VAL(Hexagon::LDrib_GP), 0|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3 
/*6029*/          OPC_EmitNode, TARGET_VAL(Hexagon::TFR_PdRs), 0,
                      1/*#VTs*/, MVT::i1, 1/*#Ops*/, 3,  // Results = #4 
/*6037*/          OPC_CompleteMatch, 1, 4, 
                  // Src: (ld:i1 (HexagonCONST32_GP:iPTR (tglobaladdr:iPTR):$global))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 110
                  // Dst: (TFR_PdRs:i1 (LDrib_GP:i32 (tglobaladdr:i32):$global, 0:i32))
/*6040*/        0, /*End of Scope*/
              0, // EndSwitchOpcode
/*6042*/    /*Scope*/ 119|128,4/*631*/, /*->6675*/
/*6044*/      OPC_RecordChild1, // #1 = $addr
/*6045*/      OPC_CheckChild1Type, MVT::i32,
/*6047*/      OPC_CheckPredicate, 8, // Predicate_unindexedload
/*6049*/      OPC_Scope, 17, /*->6068*/ // 17 children in Scope
/*6051*/        OPC_CheckPredicate, 9, // Predicate_load
/*6053*/        OPC_CheckType, MVT::i64,
/*6055*/        OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRriS11_3:$addr #2 #3
/*6058*/        OPC_EmitMergeInputChains1_0,
/*6059*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDrid), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ADDRriS11_3:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDrid:i64 ADDRriS11_3:i32:$addr)
/*6068*/      /*Scope*/ 19, /*->6088*/
/*6069*/        OPC_CheckPredicate, 11, // Predicate_sextload
/*6071*/        OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*6073*/        OPC_CheckType, MVT::i32,
/*6075*/        OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRriS11_0:$addr #2 #3
/*6078*/        OPC_EmitMergeInputChains1_0,
/*6079*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDrib), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRriS11_0:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                // Dst: (LDrib:i32 ADDRriS11_0:i32:$addr)
/*6088*/      /*Scope*/ 19, /*->6108*/
/*6089*/        OPC_CheckPredicate, 36, // Predicate_extload
/*6091*/        OPC_CheckPredicate, 39, // Predicate_extloadi8
/*6093*/        OPC_CheckType, MVT::i32,
/*6095*/        OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRriS11_0:$addr #2 #3
/*6098*/        OPC_EmitMergeInputChains1_0,
/*6099*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDrib_ae), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRriS11_0:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                // Dst: (LDrib_ae:i32 ADDRriS11_0:i32:$addr)
/*6108*/      /*Scope*/ 19, /*->6128*/
/*6109*/        OPC_CheckPredicate, 11, // Predicate_sextload
/*6111*/        OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*6113*/        OPC_CheckType, MVT::i32,
/*6115*/        OPC_CheckComplexPat, /*CP*/6, /*#*/1, // SelectADDRriS11_1:$addr #2 #3
/*6118*/        OPC_EmitMergeInputChains1_0,
/*6119*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDrih), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRriS11_1:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LDrih:i32 ADDRriS11_1:i32:$addr)
/*6128*/      /*Scope*/ 19, /*->6148*/
/*6129*/        OPC_CheckPredicate, 36, // Predicate_extload
/*6131*/        OPC_CheckPredicate, 37, // Predicate_extloadi16
/*6133*/        OPC_CheckType, MVT::i32,
/*6135*/        OPC_CheckComplexPat, /*CP*/6, /*#*/1, // SelectADDRriS11_1:$addr #2 #3
/*6138*/        OPC_EmitMergeInputChains1_0,
/*6139*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDrih_ae), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRriS11_1:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                // Dst: (LDrih_ae:i32 ADDRriS11_1:i32:$addr)
/*6148*/      /*Scope*/ 38, /*->6187*/
/*6149*/        OPC_CheckPredicate, 34, // Predicate_zextload
/*6151*/        OPC_CheckType, MVT::i32,
/*6153*/        OPC_Scope, 15, /*->6170*/ // 2 children in Scope
/*6155*/          OPC_CheckPredicate, 38, // Predicate_zextloadi8
/*6157*/          OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRriS11_0:$addr #2 #3
/*6160*/          OPC_EmitMergeInputChains1_0,
/*6161*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriub), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRriS11_0:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LDriub:i32 ADDRriS11_0:i32:$addr)
/*6170*/        /*Scope*/ 15, /*->6186*/
/*6171*/          OPC_CheckPredicate, 40, // Predicate_zextloadi1
/*6173*/          OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRriS11_0:$addr #2 #3
/*6176*/          OPC_EmitMergeInputChains1_0,
/*6177*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriubit), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRriS11_0:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                  // Dst: (LDriubit:i32 ADDRriS11_0:i32:$addr)
/*6186*/        0, /*End of Scope*/
/*6187*/      /*Scope*/ 19, /*->6207*/
/*6188*/        OPC_CheckPredicate, 36, // Predicate_extload
/*6190*/        OPC_CheckPredicate, 39, // Predicate_extloadi8
/*6192*/        OPC_CheckType, MVT::i32,
/*6194*/        OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRriS11_0:$addr #2 #3
/*6197*/        OPC_EmitMergeInputChains1_0,
/*6198*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriub_ae), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRriS11_0:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                // Dst: (LDriub_ae:i32 ADDRriS11_0:i32:$addr)
/*6207*/      /*Scope*/ 19, /*->6227*/
/*6208*/        OPC_CheckPredicate, 34, // Predicate_zextload
/*6210*/        OPC_CheckPredicate, 35, // Predicate_zextloadi16
/*6212*/        OPC_CheckType, MVT::i32,
/*6214*/        OPC_CheckComplexPat, /*CP*/6, /*#*/1, // SelectADDRriS11_1:$addr #2 #3
/*6217*/        OPC_EmitMergeInputChains1_0,
/*6218*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriuh), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRriS11_1:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LDriuh:i32 ADDRriS11_1:i32:$addr)
/*6227*/      /*Scope*/ 19, /*->6247*/
/*6228*/        OPC_CheckPredicate, 36, // Predicate_extload
/*6230*/        OPC_CheckPredicate, 37, // Predicate_extloadi16
/*6232*/        OPC_CheckType, MVT::i32,
/*6234*/        OPC_CheckComplexPat, /*CP*/6, /*#*/1, // SelectADDRriS11_1:$addr #2 #3
/*6237*/        OPC_EmitMergeInputChains1_0,
/*6238*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriuh_ae), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRriS11_1:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                // Dst: (LDriuh_ae:i32 ADDRriS11_1:i32:$addr)
/*6247*/      /*Scope*/ 17, /*->6265*/
/*6248*/        OPC_CheckPredicate, 9, // Predicate_load
/*6250*/        OPC_CheckType, MVT::i32,
/*6252*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRriS11_2:$addr #2 #3
/*6255*/        OPC_EmitMergeInputChains1_0,
/*6256*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriw), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRriS11_2:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDriw:i32 ADDRriS11_2:i32:$addr)
/*6265*/      /*Scope*/ 19, /*->6285*/
/*6266*/        OPC_CheckPredicate, 34, // Predicate_zextload
/*6268*/        OPC_CheckPredicate, 40, // Predicate_zextloadi1
/*6270*/        OPC_CheckType, MVT::i32,
/*6272*/        OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRriS11_0:$src1 #2 #3
/*6275*/        OPC_EmitMergeInputChains1_0,
/*6276*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::LDriw), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRriS11_0:i32:$src1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LDriw:i32 ADDRriS11_0:i32:$src1)
/*6285*/      /*Scope*/ 28, /*->6314*/
/*6286*/        OPC_CheckPredicate, 9, // Predicate_load
/*6288*/        OPC_CheckType, MVT::i1,
/*6290*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRriS11_2:$addr #2 #3
/*6293*/        OPC_EmitMergeInputChains1_0,
/*6294*/        OPC_EmitNode, TARGET_VAL(Hexagon::LDrib), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*6303*/        OPC_EmitNode, TARGET_VAL(Hexagon::TFR_PdRs), 0,
                    1/*#VTs*/, MVT::i1, 1/*#Ops*/, 4,  // Results = #5 
/*6311*/        OPC_CompleteMatch, 1, 5, 
                // Src: (ld:i1 ADDRriS11_2:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (TFR_PdRs:i1 (LDrib:i32 ADDRriS11_2:i32:$addr))
/*6314*/      /*Scope*/ 30, /*->6345*/
/*6315*/        OPC_CheckPredicate, 11, // Predicate_sextload
/*6317*/        OPC_CheckPredicate, 13, // Predicate_sextloadi8
/*6319*/        OPC_CheckType, MVT::i64,
/*6321*/        OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRriS11_0:$src1 #2 #3
/*6324*/        OPC_EmitMergeInputChains1_0,
/*6325*/        OPC_EmitNode, TARGET_VAL(Hexagon::LDrib), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*6334*/        OPC_EmitNode, TARGET_VAL(Hexagon::SXTW), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 4,  // Results = #5 
/*6342*/        OPC_CompleteMatch, 1, 5, 
                // Src: (ld:i64 ADDRriS11_0:i32:$src1)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                // Dst: (SXTW:i64 (LDrib:i32 ADDRriS11_0:i32:$src1))
/*6345*/      /*Scope*/ 30, /*->6376*/
/*6346*/        OPC_CheckPredicate, 36, // Predicate_extload
/*6348*/        OPC_CheckPredicate, 39, // Predicate_extloadi8
/*6350*/        OPC_CheckType, MVT::i64,
/*6352*/        OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRriS11_0:$src1 #2 #3
/*6355*/        OPC_EmitMergeInputChains1_0,
/*6356*/        OPC_EmitNode, TARGET_VAL(Hexagon::LDrib), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*6365*/        OPC_EmitNode, TARGET_VAL(Hexagon::SXTW), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 4,  // Results = #5 
/*6373*/        OPC_CompleteMatch, 1, 5, 
                // Src: (ld:i64 ADDRriS11_0:i32:$src1)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                // Dst: (SXTW:i64 (LDrib:i32 ADDRriS11_0:i32:$src1))
/*6376*/      /*Scope*/ 60, /*->6437*/
/*6377*/        OPC_CheckPredicate, 11, // Predicate_sextload
/*6379*/        OPC_CheckType, MVT::i64,
/*6381*/        OPC_Scope, 26, /*->6409*/ // 2 children in Scope
/*6383*/          OPC_CheckPredicate, 12, // Predicate_sextloadi16
/*6385*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // SelectADDRriS11_1:$src1 #2 #3
/*6388*/          OPC_EmitMergeInputChains1_0,
/*6389*/          OPC_EmitNode, TARGET_VAL(Hexagon::LDrih), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*6398*/          OPC_EmitNode, TARGET_VAL(Hexagon::SXTW), 0,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 4,  // Results = #5 
/*6406*/          OPC_CompleteMatch, 1, 5, 
                  // Src: (ld:i64 ADDRriS11_1:i32:$src1)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (SXTW:i64 (LDrih:i32 ADDRriS11_1:i32:$src1))
/*6409*/        /*Scope*/ 26, /*->6436*/
/*6410*/          OPC_CheckPredicate, 43, // Predicate_sextloadi32
/*6412*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRriS11_2:$src1 #2 #3
/*6415*/          OPC_EmitMergeInputChains1_0,
/*6416*/          OPC_EmitNode, TARGET_VAL(Hexagon::LDriw), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*6425*/          OPC_EmitNode, TARGET_VAL(Hexagon::SXTW), 0,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 4,  // Results = #5 
/*6433*/          OPC_CompleteMatch, 1, 5, 
                  // Src: (ld:i64 ADDRriS11_2:i32:$src1)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                  // Dst: (SXTW:i64 (LDriw:i32 ADDRriS11_2:i32:$src1))
/*6436*/        0, /*End of Scope*/
/*6437*/      /*Scope*/ 28|128,1/*156*/, /*->6595*/
/*6439*/        OPC_CheckPredicate, 34, // Predicate_zextload
/*6441*/        OPC_SwitchType /*2 cases */, 38,  MVT::i32,// ->6482
/*6444*/          OPC_CheckPredicate, 40, // Predicate_zextloadi1
/*6446*/          OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRriS11_0:$addr #2 #3
/*6449*/          OPC_EmitMergeInputChains1_0,
/*6450*/          OPC_EmitNode, TARGET_VAL(Hexagon::LDrib), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*6459*/          OPC_EmitInteger, MVT::i32, 1, 
/*6462*/          OPC_EmitNode, TARGET_VAL(Hexagon::TFRI), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 5,  // Results = #6 
/*6470*/          OPC_EmitNode, TARGET_VAL(Hexagon::AND_rr), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6,  // Results = #7 
/*6479*/          OPC_CompleteMatch, 1, 7, 
                  // Src: (ld:i32 ADDRriS11_0:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                  // Dst: (AND_rr:i32 (LDrib:i32 ADDRriS11_0:i32:$addr), (TFRI:i32 1:i32))
                /*SwitchType*/ 110,  MVT::i64,// ->6594
/*6484*/          OPC_Scope, 35, /*->6521*/ // 3 children in Scope
/*6486*/            OPC_CheckPredicate, 38, // Predicate_zextloadi8
/*6488*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRriS11_0:$src1 #2 #3
/*6491*/            OPC_EmitMergeInputChains1_0,
/*6492*/            OPC_EmitInteger, MVT::i32, 0, 
/*6495*/            OPC_EmitNode, TARGET_VAL(Hexagon::TFRI), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 4,  // Results = #5 
/*6503*/            OPC_EmitNode, TARGET_VAL(Hexagon::LDriub), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #6 
/*6512*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::COMBINE_rr), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 5, 6, 
                    // Src: (ld:i64 ADDRriS11_0:i32:$src1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                    // Dst: (COMBINE_rr:i64 (TFRI:i32 0:i32), (LDriub:i32 ADDRriS11_0:i32:$src1))
/*6521*/          /*Scope*/ 35, /*->6557*/
/*6522*/            OPC_CheckPredicate, 35, // Predicate_zextloadi16
/*6524*/            OPC_CheckComplexPat, /*CP*/6, /*#*/1, // SelectADDRriS11_1:$src1 #2 #3
/*6527*/            OPC_EmitMergeInputChains1_0,
/*6528*/            OPC_EmitInteger, MVT::i32, 0, 
/*6531*/            OPC_EmitNode, TARGET_VAL(Hexagon::TFRI), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 4,  // Results = #5 
/*6539*/            OPC_EmitNode, TARGET_VAL(Hexagon::LDriuh), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #6 
/*6548*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::COMBINE_rr), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 5, 6, 
                    // Src: (ld:i64 ADDRriS11_1:i32:$src1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                    // Dst: (COMBINE_rr:i64 (TFRI:i32 0:i32), (LDriuh:i32 ADDRriS11_1:i32:$src1))
/*6557*/          /*Scope*/ 35, /*->6593*/
/*6558*/            OPC_CheckPredicate, 44, // Predicate_zextloadi32
/*6560*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRriS11_2:$src1 #2 #3
/*6563*/            OPC_EmitMergeInputChains1_0,
/*6564*/            OPC_EmitInteger, MVT::i32, 0, 
/*6567*/            OPC_EmitNode, TARGET_VAL(Hexagon::TFRI), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 4,  // Results = #5 
/*6575*/            OPC_EmitNode, TARGET_VAL(Hexagon::LDriw), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #6 
/*6584*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::COMBINE_rr), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 5, 6, 
                    // Src: (ld:i64 ADDRriS11_2:i32:$src1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                    // Dst: (COMBINE_rr:i64 (TFRI:i32 0:i32), (LDriw:i32 ADDRriS11_2:i32:$src1))
/*6593*/          0, /*End of Scope*/
                0, // EndSwitchType
/*6595*/      /*Scope*/ 78, /*->6674*/
/*6596*/        OPC_CheckPredicate, 36, // Predicate_extload
/*6598*/        OPC_CheckType, MVT::i64,
/*6600*/        OPC_Scope, 35, /*->6637*/ // 2 children in Scope
/*6602*/          OPC_CheckPredicate, 45, // Predicate_extloadi32
/*6604*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRriS11_2:$src1 #2 #3
/*6607*/          OPC_EmitMergeInputChains1_0,
/*6608*/          OPC_EmitInteger, MVT::i32, 0, 
/*6611*/          OPC_EmitNode, TARGET_VAL(Hexagon::TFRI), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 4,  // Results = #5 
/*6619*/          OPC_EmitNode, TARGET_VAL(Hexagon::LDriw), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #6 
/*6628*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::COMBINE_rr), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 5, 6, 
                  // Src: (ld:i64 ADDRriS11_2:i32:$src1)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (COMBINE_rr:i64 (TFRI:i32 0:i32), (LDriw:i32 ADDRriS11_2:i32:$src1))
/*6637*/        /*Scope*/ 35, /*->6673*/
/*6638*/          OPC_CheckPredicate, 37, // Predicate_extloadi16
/*6640*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRriS11_2:$src1 #2 #3
/*6643*/          OPC_EmitMergeInputChains1_0,
/*6644*/          OPC_EmitInteger, MVT::i32, 0, 
/*6647*/          OPC_EmitNode, TARGET_VAL(Hexagon::TFRI), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 4,  // Results = #5 
/*6655*/          OPC_EmitNode, TARGET_VAL(Hexagon::LDrih), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #6 
/*6664*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::COMBINE_rr), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 5, 6, 
                  // Src: (ld:i64 ADDRriS11_2:i32:$src1)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (COMBINE_rr:i64 (TFRI:i32 0:i32), (LDrih:i32 ADDRriS11_2:i32:$src1))
/*6673*/        0, /*End of Scope*/
/*6674*/      0, /*End of Scope*/
/*6675*/    /*Scope*/ 28, /*->6704*/
/*6676*/      OPC_MoveChild, 1,
/*6678*/      OPC_CheckOpcode, TARGET_VAL(HexagonISD::CONST32),
/*6681*/      OPC_RecordChild0, // #1 = $global
/*6682*/      OPC_MoveChild, 0,
/*6684*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*6687*/      OPC_MoveParent,
/*6688*/      OPC_MoveParent,
/*6689*/      OPC_CheckPredicate, 8, // Predicate_unindexedload
/*6691*/      OPC_CheckPredicate, 9, // Predicate_load
/*6693*/      OPC_CheckType, MVT::i32,
/*6695*/      OPC_EmitMergeInputChains1_0,
/*6696*/      OPC_MorphNodeTo, TARGET_VAL(Hexagon::CONST32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (ld:i32 (HexagonCONST32:iPTR (tglobaltlsaddr:iPTR):$global))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 10
              // Dst: (CONST32:i32 (tglobaltlsaddr:i32):$global)
/*6704*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 23|128,1/*151*/,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->6860
/*6709*/    OPC_Scope, 24, /*->6735*/ // 2 children in Scope
/*6711*/      OPC_MoveChild, 0,
/*6713*/      OPC_CheckOpcode, TARGET_VAL(HexagonISD::ARGEXTEND),
/*6716*/      OPC_RecordChild0, // #0 = $src1
/*6717*/      OPC_CheckChild0Type, MVT::i32,
/*6719*/      OPC_MoveParent,
/*6720*/      OPC_MoveChild, 1,
/*6722*/      OPC_CheckValueType, MVT::i16,
/*6724*/      OPC_MoveParent,
/*6725*/      OPC_CheckType, MVT::i32,
/*6727*/      OPC_MorphNodeTo, TARGET_VAL(Hexagon::TFR), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i32 (Hexagon_ARGEXTEND:i32 IntRegs:i32:$src1), i16:Other) - Complexity = 106
              // Dst: (TFR:i32 IntRegs:i32:$src1)
/*6735*/    /*Scope*/ 123, /*->6859*/
/*6736*/      OPC_RecordChild0, // #0 = $src1
/*6737*/      OPC_MoveChild, 1,
/*6739*/      OPC_Scope, 45, /*->6786*/ // 3 children in Scope
/*6741*/        OPC_CheckValueType, MVT::i8,
/*6743*/        OPC_MoveParent,
/*6744*/        OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->6755
/*6747*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::SXTB), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sext_inreg:i32 IntRegs:i32:$src1, i8:Other) - Complexity = 3
                  // Dst: (SXTB:i32 IntRegs:i32:$src1)
                /*SwitchType*/ 28,  MVT::i64,// ->6785
/*6757*/          OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*6760*/          OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*6769*/          OPC_EmitNode, TARGET_VAL(Hexagon::SXTB), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3 
/*6777*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::SXTW), 0,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 3, 
                  // Src: (sext_inreg:i64 DoubleRegs:i64:$src1, i8:Other) - Complexity = 3
                  // Dst: (SXTW:i64 (SXTB:i32 (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src1, subreg_loreg:i32)))
                0, // EndSwitchType
/*6786*/      /*Scope*/ 45, /*->6832*/
/*6787*/        OPC_CheckValueType, MVT::i16,
/*6789*/        OPC_MoveParent,
/*6790*/        OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->6801
/*6793*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::SXTH), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sext_inreg:i32 IntRegs:i32:$src1, i16:Other) - Complexity = 3
                  // Dst: (SXTH:i32 IntRegs:i32:$src1)
                /*SwitchType*/ 28,  MVT::i64,// ->6831
/*6803*/          OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*6806*/          OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*6815*/          OPC_EmitNode, TARGET_VAL(Hexagon::SXTH), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3 
/*6823*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::SXTW), 0,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 3, 
                  // Src: (sext_inreg:i64 DoubleRegs:i64:$src1, i16:Other) - Complexity = 3
                  // Dst: (SXTW:i64 (SXTH:i32 (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src1, subreg_loreg:i32)))
                0, // EndSwitchType
/*6832*/      /*Scope*/ 25, /*->6858*/
/*6833*/        OPC_CheckValueType, MVT::i32,
/*6835*/        OPC_MoveParent,
/*6836*/        OPC_CheckType, MVT::i64,
/*6838*/        OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*6841*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*6850*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::SXTW), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (sext_inreg:i64 DoubleRegs:i64:$src1, i32:Other) - Complexity = 3
                // Dst: (SXTW:i64 (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src1, subreg_loreg:i32))
/*6858*/      0, /*End of Scope*/
/*6859*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 107,  TARGET_VAL(ISD::TRUNCATE),// ->6970
/*6863*/    OPC_Scope, 48, /*->6913*/ // 2 children in Scope
/*6865*/      OPC_MoveChild, 0,
/*6867*/      OPC_CheckOpcode, TARGET_VAL(ISD::SRL),
/*6870*/      OPC_MoveChild, 0,
/*6872*/      OPC_CheckOpcode, TARGET_VAL(ISD::MUL),
/*6875*/      OPC_MoveChild, 0,
/*6877*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*6880*/      OPC_RecordChild0, // #0 = $src1
/*6881*/      OPC_CheckChild0Type, MVT::i32,
/*6883*/      OPC_MoveParent,
/*6884*/      OPC_MoveChild, 1,
/*6886*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*6889*/      OPC_RecordChild0, // #1 = $src2
/*6890*/      OPC_CheckChild0Type, MVT::i32,
/*6892*/      OPC_MoveParent,
/*6893*/      OPC_MoveParent,
/*6894*/      OPC_MoveChild, 1,
/*6896*/      OPC_CheckInteger, 32, 
/*6898*/      OPC_CheckType, MVT::i32,
/*6900*/      OPC_MoveParent,
/*6901*/      OPC_MoveParent,
/*6902*/      OPC_CheckType, MVT::i32,
/*6904*/      OPC_MorphNodeTo, TARGET_VAL(Hexagon::MPY_trsext), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (trunc:i32 (srl:i64 (mul:i64 (sext:i64 IntRegs:i32:$src1), (sext:i64 IntRegs:i32:$src2)), 32:i32)) - Complexity = 20
              // Dst: (MPY_trsext:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*6913*/    /*Scope*/ 55, /*->6969*/
/*6914*/      OPC_RecordChild0, // #0 = $src1
/*6915*/      OPC_SwitchType /*2 cases */, 36,  MVT::i1,// ->6954
/*6918*/        OPC_Scope, 10, /*->6930*/ // 2 children in Scope
/*6920*/          OPC_CheckChild0Type, MVT::i32,
/*6922*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::TFR_PdRs), 0,
                      1/*#VTs*/, MVT::i1, 1/*#Ops*/, 0, 
                  // Src: (trunc:i1 IntRegs:i32:$src1) - Complexity = 3
                  // Dst: (TFR_PdRs:i1 IntRegs:i32:$src1)
/*6930*/        /*Scope*/ 22, /*->6953*/
/*6931*/          OPC_CheckChild0Type, MVT::i64,
/*6933*/          OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*6936*/          OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*6945*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::TFR_PdRs), 0,
                      1/*#VTs*/, MVT::i1, 1/*#Ops*/, 2, 
                  // Src: (trunc:i1 DoubleRegs:i64:$src) - Complexity = 3
                  // Dst: (TFR_PdRs:i1 (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src, subreg_loreg:i32))
/*6953*/        0, /*End of Scope*/
              /*SwitchType*/ 12,  MVT::i32,// ->6968
/*6956*/        OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*6959*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (trunc:i32 DoubleRegs:i64:$src) - Complexity = 3
                // Dst: (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src, subreg_loreg:i32)
              0, // EndSwitchType
/*6969*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42|128,9/*1194*/,  TARGET_VAL(ISD::SETCC),// ->8168
/*6974*/    OPC_Scope, 9|128,4/*521*/, /*->7498*/ // 2 children in Scope
/*6977*/      OPC_MoveChild, 0,
/*6979*/      OPC_Scope, 37, /*->7018*/ // 12 children in Scope
/*6981*/        OPC_CheckAndImm, 127|128,1/*255*/, 
/*6984*/        OPC_MoveChild, 0,
/*6986*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*6989*/        OPC_RecordChild0, // #0 = $src1
/*6990*/        OPC_RecordChild1, // #1 = $src2
/*6991*/        OPC_MoveParent,
/*6992*/        OPC_CheckType, MVT::i32,
/*6994*/        OPC_MoveParent,
/*6995*/        OPC_MoveChild, 1,
/*6997*/        OPC_CheckInteger, 0, 
/*6999*/        OPC_MoveParent,
/*7000*/        OPC_MoveChild, 2,
/*7002*/        OPC_CheckCondCode, ISD::SETEQ,
/*7004*/        OPC_MoveParent,
/*7005*/        OPC_CheckType, MVT::i1,
/*7007*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*7009*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPbEQrr_ubub_V4), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i1 (and:i32 (xor:i32 IntRegs:i32:$src1, IntRegs:i32:$src2), 255:i32), 0:i32, SETEQ:Other) - Complexity = 19
                // Dst: (CMPbEQrr_ubub_V4:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*7018*/      /*Scope*/ 66, /*->7085*/
/*7019*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*7022*/        OPC_RecordChild0, // #0 = $src1
/*7023*/        OPC_MoveChild, 1,
/*7025*/        OPC_CheckInteger, 24, 
/*7027*/        OPC_CheckType, MVT::i32,
/*7029*/        OPC_MoveParent,
/*7030*/        OPC_CheckType, MVT::i32,
/*7032*/        OPC_MoveParent,
/*7033*/        OPC_MoveChild, 1,
/*7035*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*7038*/        OPC_RecordChild0, // #1 = $src2
/*7039*/        OPC_MoveChild, 1,
/*7041*/        OPC_CheckInteger, 24, 
/*7043*/        OPC_CheckType, MVT::i32,
/*7045*/        OPC_MoveParent,
/*7046*/        OPC_MoveParent,
/*7047*/        OPC_MoveChild, 2,
/*7049*/        OPC_Scope, 16, /*->7067*/ // 2 children in Scope
/*7051*/          OPC_CheckCondCode, ISD::SETEQ,
/*7053*/          OPC_MoveParent,
/*7054*/          OPC_CheckType, MVT::i1,
/*7056*/          OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*7058*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPbEQrr_sbsb_V4), 0,
                      1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i1 (shl:i32 IntRegs:i32:$src1, 24:i32), (shl:i32 IntRegs:i32:$src2, 24:i32), SETEQ:Other) - Complexity = 19
                  // Dst: (CMPbEQrr_sbsb_V4:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*7067*/        /*Scope*/ 16, /*->7084*/
/*7068*/          OPC_CheckCondCode, ISD::SETGT,
/*7070*/          OPC_MoveParent,
/*7071*/          OPC_CheckType, MVT::i1,
/*7073*/          OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*7075*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPbGTrr_V4), 0,
                      1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i1 (shl:i32 IntRegs:i32:$src1, 24:i32), (shl:i32 IntRegs:i32:$src2, 24:i32), SETGT:Other) - Complexity = 19
                  // Dst: (CMPbGTrr_V4:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*7084*/        0, /*End of Scope*/
/*7085*/      /*Scope*/ 32, /*->7118*/
/*7086*/        OPC_CheckAndImm, 127|128,1/*255*/, 
/*7089*/        OPC_RecordChild0, // #0 = $src1
/*7090*/        OPC_CheckType, MVT::i32,
/*7092*/        OPC_MoveParent,
/*7093*/        OPC_MoveChild, 1,
/*7095*/        OPC_CheckAndImm, 127|128,1/*255*/, 
/*7098*/        OPC_RecordChild0, // #1 = $src2
/*7099*/        OPC_MoveParent,
/*7100*/        OPC_MoveChild, 2,
/*7102*/        OPC_CheckCondCode, ISD::SETUGT,
/*7104*/        OPC_MoveParent,
/*7105*/        OPC_CheckType, MVT::i1,
/*7107*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*7109*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPbGTUrr_V4), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i1 (and:i32 IntRegs:i32:$src1, 255:i32), (and:i32 IntRegs:i32:$src2, 255:i32), SETUGT:Other) - Complexity = 19
                // Dst: (CMPbGTUrr_V4:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*7118*/      /*Scope*/ 38, /*->7157*/
/*7119*/        OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*7123*/        OPC_MoveChild, 0,
/*7125*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*7128*/        OPC_RecordChild0, // #0 = $src1
/*7129*/        OPC_RecordChild1, // #1 = $src2
/*7130*/        OPC_MoveParent,
/*7131*/        OPC_CheckType, MVT::i32,
/*7133*/        OPC_MoveParent,
/*7134*/        OPC_MoveChild, 1,
/*7136*/        OPC_CheckInteger, 0, 
/*7138*/        OPC_MoveParent,
/*7139*/        OPC_MoveChild, 2,
/*7141*/        OPC_CheckCondCode, ISD::SETEQ,
/*7143*/        OPC_MoveParent,
/*7144*/        OPC_CheckType, MVT::i1,
/*7146*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*7148*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPhEQrr_xor_V4), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i1 (and:i32 (xor:i32 IntRegs:i32:$src1, IntRegs:i32:$src2), 65535:i32), 0:i32, SETEQ:Other) - Complexity = 19
                // Dst: (CMPhEQrr_xor_V4:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*7157*/      /*Scope*/ 66, /*->7224*/
/*7158*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*7161*/        OPC_RecordChild0, // #0 = $src1
/*7162*/        OPC_MoveChild, 1,
/*7164*/        OPC_CheckInteger, 16, 
/*7166*/        OPC_CheckType, MVT::i32,
/*7168*/        OPC_MoveParent,
/*7169*/        OPC_CheckType, MVT::i32,
/*7171*/        OPC_MoveParent,
/*7172*/        OPC_MoveChild, 1,
/*7174*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*7177*/        OPC_RecordChild0, // #1 = $src2
/*7178*/        OPC_MoveChild, 1,
/*7180*/        OPC_CheckInteger, 16, 
/*7182*/        OPC_CheckType, MVT::i32,
/*7184*/        OPC_MoveParent,
/*7185*/        OPC_MoveParent,
/*7186*/        OPC_MoveChild, 2,
/*7188*/        OPC_Scope, 16, /*->7206*/ // 2 children in Scope
/*7190*/          OPC_CheckCondCode, ISD::SETEQ,
/*7192*/          OPC_MoveParent,
/*7193*/          OPC_CheckType, MVT::i1,
/*7195*/          OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*7197*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPhEQrr_shl_V4), 0,
                      1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i1 (shl:i32 IntRegs:i32:$src1, 16:i32), (shl:i32 IntRegs:i32:$src2, 16:i32), SETEQ:Other) - Complexity = 19
                  // Dst: (CMPhEQrr_shl_V4:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*7206*/        /*Scope*/ 16, /*->7223*/
/*7207*/          OPC_CheckCondCode, ISD::SETGT,
/*7209*/          OPC_MoveParent,
/*7210*/          OPC_CheckType, MVT::i1,
/*7212*/          OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*7214*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPhGTrr_shl_V4), 0,
                      1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i1 (shl:i32 IntRegs:i32:$src1, 16:i32), (shl:i32 IntRegs:i32:$src2, 16:i32), SETGT:Other) - Complexity = 19
                  // Dst: (CMPhGTrr_shl_V4:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*7223*/        0, /*End of Scope*/
/*7224*/      /*Scope*/ 34, /*->7259*/
/*7225*/        OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*7229*/        OPC_RecordChild0, // #0 = $src1
/*7230*/        OPC_CheckType, MVT::i32,
/*7232*/        OPC_MoveParent,
/*7233*/        OPC_MoveChild, 1,
/*7235*/        OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*7239*/        OPC_RecordChild0, // #1 = $src2
/*7240*/        OPC_MoveParent,
/*7241*/        OPC_MoveChild, 2,
/*7243*/        OPC_CheckCondCode, ISD::SETUGT,
/*7245*/        OPC_MoveParent,
/*7246*/        OPC_CheckType, MVT::i1,
/*7248*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*7250*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPhGTUrr_V4), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i1 (and:i32 IntRegs:i32:$src1, 65535:i32), (and:i32 IntRegs:i32:$src2, 65535:i32), SETUGT:Other) - Complexity = 19
                // Dst: (CMPhGTUrr_V4:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*7259*/      /*Scope*/ 36, /*->7296*/
/*7260*/        OPC_CheckAndImm, 127|128,1/*255*/, 
/*7263*/        OPC_RecordChild0, // #0 = $src1
/*7264*/        OPC_CheckType, MVT::i32,
/*7266*/        OPC_MoveParent,
/*7267*/        OPC_RecordChild1, // #1 = $src2
/*7268*/        OPC_MoveChild, 1,
/*7270*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7273*/        OPC_CheckPredicate, 46, // Predicate_u8ImmPred
/*7275*/        OPC_MoveParent,
/*7276*/        OPC_MoveChild, 2,
/*7278*/        OPC_CheckCondCode, ISD::SETEQ,
/*7280*/        OPC_MoveParent,
/*7281*/        OPC_CheckType, MVT::i1,
/*7283*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*7285*/        OPC_EmitConvertToTarget, 1,
/*7287*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPbEQri_V4), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2, 
                // Src: (setcc:i1 (and:i32 IntRegs:i32:$src1, 255:i32), (imm:i32)<<P:Predicate_u8ImmPred>>:$src2, SETEQ:Other) - Complexity = 15
                // Dst: (CMPbEQri_V4:i1 IntRegs:i32:$src1, (imm:i32):$src2)
/*7296*/      /*Scope*/ 43, /*->7340*/
/*7297*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*7300*/        OPC_RecordChild0, // #0 = $src1
/*7301*/        OPC_MoveChild, 1,
/*7303*/        OPC_CheckInteger, 24, 
/*7305*/        OPC_CheckType, MVT::i32,
/*7307*/        OPC_MoveParent,
/*7308*/        OPC_CheckType, MVT::i32,
/*7310*/        OPC_MoveParent,
/*7311*/        OPC_RecordChild1, // #1 = $src2
/*7312*/        OPC_MoveChild, 1,
/*7314*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7317*/        OPC_CheckPredicate, 47, // Predicate_s32_24ImmPred
/*7319*/        OPC_MoveParent,
/*7320*/        OPC_MoveChild, 2,
/*7322*/        OPC_CheckCondCode, ISD::SETGT,
/*7324*/        OPC_MoveParent,
/*7325*/        OPC_CheckType, MVT::i1,
/*7327*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*7329*/        OPC_EmitConvertToTarget, 1,
/*7331*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPbGTri_V4), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2, 
                // Src: (setcc:i1 (shl:i32 IntRegs:i32:$src1, 24:i32), (imm:i32)<<P:Predicate_s32_24ImmPred>>:$src2, SETGT:Other) - Complexity = 15
                // Dst: (CMPbGTri_V4:i1 IntRegs:i32:$src1, (imm:i32):$src2)
/*7340*/      /*Scope*/ 36, /*->7377*/
/*7341*/        OPC_CheckAndImm, 127|128,1/*255*/, 
/*7344*/        OPC_RecordChild0, // #0 = $src1
/*7345*/        OPC_CheckType, MVT::i32,
/*7347*/        OPC_MoveParent,
/*7348*/        OPC_RecordChild1, // #1 = $src2
/*7349*/        OPC_MoveChild, 1,
/*7351*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7354*/        OPC_CheckPredicate, 48, // Predicate_u7ImmPred
/*7356*/        OPC_MoveParent,
/*7357*/        OPC_MoveChild, 2,
/*7359*/        OPC_CheckCondCode, ISD::SETUGT,
/*7361*/        OPC_MoveParent,
/*7362*/        OPC_CheckType, MVT::i1,
/*7364*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*7366*/        OPC_EmitConvertToTarget, 1,
/*7368*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPbGTUri_V4), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2, 
                // Src: (setcc:i1 (and:i32 IntRegs:i32:$src1, 255:i32), (imm:i32)<<P:Predicate_u7ImmPred>>:$src2, SETUGT:Other) - Complexity = 15
                // Dst: (CMPbGTUri_V4:i1 IntRegs:i32:$src1, (imm:i32):$src2)
/*7377*/      /*Scope*/ 37, /*->7415*/
/*7378*/        OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*7382*/        OPC_RecordChild0, // #0 = $src1
/*7383*/        OPC_CheckType, MVT::i32,
/*7385*/        OPC_MoveParent,
/*7386*/        OPC_RecordChild1, // #1 = $src2
/*7387*/        OPC_MoveChild, 1,
/*7389*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7392*/        OPC_CheckPredicate, 49, // Predicate_u16_s8ImmPred
/*7394*/        OPC_MoveParent,
/*7395*/        OPC_MoveChild, 2,
/*7397*/        OPC_CheckCondCode, ISD::SETEQ,
/*7399*/        OPC_MoveParent,
/*7400*/        OPC_CheckType, MVT::i1,
/*7402*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*7404*/        OPC_EmitConvertToTarget, 1,
/*7406*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPhEQri_V4), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2, 
                // Src: (setcc:i1 (and:i32 IntRegs:i32:$src1, 65535:i32), (imm:i32)<<P:Predicate_u16_s8ImmPred>>:$src2, SETEQ:Other) - Complexity = 15
                // Dst: (CMPhEQri_V4:i1 IntRegs:i32:$src1, (imm:i32):$src2)
/*7415*/      /*Scope*/ 43, /*->7459*/
/*7416*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*7419*/        OPC_RecordChild0, // #0 = $src1
/*7420*/        OPC_MoveChild, 1,
/*7422*/        OPC_CheckInteger, 16, 
/*7424*/        OPC_CheckType, MVT::i32,
/*7426*/        OPC_MoveParent,
/*7427*/        OPC_CheckType, MVT::i32,
/*7429*/        OPC_MoveParent,
/*7430*/        OPC_RecordChild1, // #1 = $src2
/*7431*/        OPC_MoveChild, 1,
/*7433*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7436*/        OPC_CheckPredicate, 50, // Predicate_s32_16s8ImmPred
/*7438*/        OPC_MoveParent,
/*7439*/        OPC_MoveChild, 2,
/*7441*/        OPC_CheckCondCode, ISD::SETGT,
/*7443*/        OPC_MoveParent,
/*7444*/        OPC_CheckType, MVT::i1,
/*7446*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*7448*/        OPC_EmitConvertToTarget, 1,
/*7450*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPhGTri_V4), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2, 
                // Src: (setcc:i1 (shl:i32 IntRegs:i32:$src1, 16:i32), (imm:i32)<<P:Predicate_s32_16s8ImmPred>>:$src2, SETGT:Other) - Complexity = 15
                // Dst: (CMPhGTri_V4:i1 IntRegs:i32:$src1, (imm:i32):$src2)
/*7459*/      /*Scope*/ 37, /*->7497*/
/*7460*/        OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*7464*/        OPC_RecordChild0, // #0 = $src1
/*7465*/        OPC_CheckType, MVT::i32,
/*7467*/        OPC_MoveParent,
/*7468*/        OPC_RecordChild1, // #1 = $src2
/*7469*/        OPC_MoveChild, 1,
/*7471*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7474*/        OPC_CheckPredicate, 48, // Predicate_u7ImmPred
/*7476*/        OPC_MoveParent,
/*7477*/        OPC_MoveChild, 2,
/*7479*/        OPC_CheckCondCode, ISD::SETUGT,
/*7481*/        OPC_MoveParent,
/*7482*/        OPC_CheckType, MVT::i1,
/*7484*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*7486*/        OPC_EmitConvertToTarget, 1,
/*7488*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPhGTUri_V4), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2, 
                // Src: (setcc:i1 (and:i32 IntRegs:i32:$src1, 65535:i32), (imm:i32)<<P:Predicate_u7ImmPred>>:$src2, SETUGT:Other) - Complexity = 15
                // Dst: (CMPhGTUri_V4:i1 IntRegs:i32:$src1, (imm:i32):$src2)
/*7497*/      0, /*End of Scope*/
/*7498*/    /*Scope*/ 27|128,5/*667*/, /*->8167*/
/*7500*/      OPC_RecordChild0, // #0 = $b
/*7501*/      OPC_Scope, 59|128,3/*443*/, /*->7947*/ // 3 children in Scope
/*7504*/        OPC_CheckChild0Type, MVT::i32,
/*7506*/        OPC_RecordChild1, // #1 = $c
/*7507*/        OPC_Scope, 97|128,1/*225*/, /*->7735*/ // 2 children in Scope
/*7510*/          OPC_MoveChild, 1,
/*7512*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7515*/          OPC_Scope, 21, /*->7538*/ // 7 children in Scope
/*7517*/            OPC_CheckPredicate, 51, // Predicate_u9ImmPred
/*7519*/            OPC_MoveParent,
/*7520*/            OPC_MoveChild, 2,
/*7522*/            OPC_CheckCondCode, ISD::SETUGT,
/*7524*/            OPC_MoveParent,
/*7525*/            OPC_CheckType, MVT::i1,
/*7527*/            OPC_EmitConvertToTarget, 1,
/*7529*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPGTUri), 0,
                        1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i1 IntRegs:i32:$b, (imm:i32)<<P:Predicate_u9ImmPred>>:$c, SETUGT:Other) - Complexity = 7
                    // Dst: (CMPGTUri:i1 IntRegs:i32:$b, (imm:i32):$c)
/*7538*/          /*Scope*/ 41, /*->7580*/
/*7539*/            OPC_CheckPredicate, 52, // Predicate_s10ImmPred
/*7541*/            OPC_MoveParent,
/*7542*/            OPC_MoveChild, 2,
/*7544*/            OPC_Scope, 16, /*->7562*/ // 2 children in Scope
/*7546*/              OPC_CheckCondCode, ISD::SETGT,
/*7548*/              OPC_MoveParent,
/*7549*/              OPC_CheckType, MVT::i1,
/*7551*/              OPC_EmitConvertToTarget, 1,
/*7553*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPGTri), 0,
                          1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2, 
                      // Src: (setcc:i1 IntRegs:i32:$b, (imm:i32)<<P:Predicate_s10ImmPred>>:$c, SETGT:Other) - Complexity = 7
                      // Dst: (CMPGTri:i1 IntRegs:i32:$b, (imm:i32):$c)
/*7562*/            /*Scope*/ 16, /*->7579*/
/*7563*/              OPC_CheckCondCode, ISD::SETEQ,
/*7565*/              OPC_MoveParent,
/*7566*/              OPC_CheckType, MVT::i1,
/*7568*/              OPC_EmitConvertToTarget, 1,
/*7570*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPEQri), 0,
                          1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2, 
                      // Src: (setcc:i1 IntRegs:i32:$b, (imm:i32)<<P:Predicate_s10ImmPred>>:$c, SETEQ:Other) - Complexity = 7
                      // Dst: (CMPEQri:i1 IntRegs:i32:$b, (imm:i32):$c)
/*7579*/            0, /*End of Scope*/
/*7580*/          /*Scope*/ 21, /*->7602*/
/*7581*/            OPC_CheckPredicate, 1, // Predicate_s8ImmPred
/*7583*/            OPC_MoveParent,
/*7584*/            OPC_MoveChild, 2,
/*7586*/            OPC_CheckCondCode, ISD::SETGE,
/*7588*/            OPC_MoveParent,
/*7589*/            OPC_CheckType, MVT::i1,
/*7591*/            OPC_EmitConvertToTarget, 1,
/*7593*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPGEri), 0,
                        1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i1 IntRegs:i32:$b, (imm:i32)<<P:Predicate_s8ImmPred>>:$c, SETGE:Other) - Complexity = 7
                    // Dst: (CMPGEri:i1 IntRegs:i32:$b, (imm:i32):$c)
/*7602*/          /*Scope*/ 21, /*->7624*/
/*7603*/            OPC_CheckPredicate, 51, // Predicate_u9ImmPred
/*7605*/            OPC_MoveParent,
/*7606*/            OPC_MoveChild, 2,
/*7608*/            OPC_CheckCondCode, ISD::SETUGE,
/*7610*/            OPC_MoveParent,
/*7611*/            OPC_CheckType, MVT::i1,
/*7613*/            OPC_EmitConvertToTarget, 1,
/*7615*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPGEUri), 0,
                        1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i1 IntRegs:i32:$b, (imm:i32)<<P:Predicate_u9ImmPred>>:$c, SETUGE:Other) - Complexity = 7
                    // Dst: (CMPGEUri:i1 IntRegs:i32:$b, (imm:i32):$c)
/*7624*/          /*Scope*/ 21, /*->7646*/
/*7625*/            OPC_CheckPredicate, 1, // Predicate_s8ImmPred
/*7627*/            OPC_MoveParent,
/*7628*/            OPC_MoveChild, 2,
/*7630*/            OPC_CheckCondCode, ISD::SETGE,
/*7632*/            OPC_MoveParent,
/*7633*/            OPC_CheckType, MVT::i1,
/*7635*/            OPC_EmitConvertToTarget, 1,
/*7637*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPGEri), 0,
                        1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i1 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s8ImmPred>>:$src2, SETGE:Other) - Complexity = 7
                    // Dst: (CMPGEri:i1 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s8ImmPred>>:$src2)
/*7646*/          /*Scope*/ 57, /*->7704*/
/*7647*/            OPC_CheckPredicate, 52, // Predicate_s10ImmPred
/*7649*/            OPC_MoveParent,
/*7650*/            OPC_MoveChild, 2,
/*7652*/            OPC_Scope, 24, /*->7678*/ // 2 children in Scope
/*7654*/              OPC_CheckCondCode, ISD::SETLE,
/*7656*/              OPC_MoveParent,
/*7657*/              OPC_CheckType, MVT::i1,
/*7659*/              OPC_EmitConvertToTarget, 1,
/*7661*/              OPC_EmitNode, TARGET_VAL(Hexagon::CMPGTri), 0,
                          1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2,  // Results = #3 
/*7670*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::NOT_p), 0,
                          1/*#VTs*/, MVT::i1, 1/*#Ops*/, 3, 
                      // Src: (setcc:i1 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s10ImmPred>>:$src2, SETLE:Other) - Complexity = 7
                      // Dst: (NOT_p:i1 (CMPGTri:i1 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s10ImmPred>>:$src2))
/*7678*/            /*Scope*/ 24, /*->7703*/
/*7679*/              OPC_CheckCondCode, ISD::SETNE,
/*7681*/              OPC_MoveParent,
/*7682*/              OPC_CheckType, MVT::i1,
/*7684*/              OPC_EmitConvertToTarget, 1,
/*7686*/              OPC_EmitNode, TARGET_VAL(Hexagon::CMPEQri), 0,
                          1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2,  // Results = #3 
/*7695*/              OPC_MorphNodeTo, TARGET_VAL(Hexagon::NOT_p), 0,
                          1/*#VTs*/, MVT::i1, 1/*#Ops*/, 3, 
                      // Src: (setcc:i1 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s10ImmPred>>:$src2, SETNE:Other) - Complexity = 7
                      // Dst: (NOT_p:i1 (CMPEQri:i1 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s10ImmPred>>:$src2))
/*7703*/            0, /*End of Scope*/
/*7704*/          /*Scope*/ 29, /*->7734*/
/*7705*/            OPC_CheckPredicate, 1, // Predicate_s8ImmPred
/*7707*/            OPC_MoveParent,
/*7708*/            OPC_MoveChild, 2,
/*7710*/            OPC_CheckCondCode, ISD::SETLT,
/*7712*/            OPC_MoveParent,
/*7713*/            OPC_CheckType, MVT::i1,
/*7715*/            OPC_EmitConvertToTarget, 1,
/*7717*/            OPC_EmitNode, TARGET_VAL(Hexagon::CMPGEri), 0,
                        1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2,  // Results = #3 
/*7726*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::NOT_p), 0,
                        1/*#VTs*/, MVT::i1, 1/*#Ops*/, 3, 
                    // Src: (setcc:i1 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s8ImmPred>>:$src2, SETLT:Other) - Complexity = 7
                    // Dst: (NOT_p:i1 (CMPGEri:i1 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s8ImmPred>>:$src2))
/*7734*/          0, /*End of Scope*/
/*7735*/        /*Scope*/ 81|128,1/*209*/, /*->7946*/
/*7737*/          OPC_MoveChild, 2,
/*7739*/          OPC_Scope, 14, /*->7755*/ // 11 children in Scope
/*7741*/            OPC_CheckCondCode, ISD::SETUGT,
/*7743*/            OPC_MoveParent,
/*7744*/            OPC_CheckType, MVT::i1,
/*7746*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPGTUrr), 0,
                        1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i1 IntRegs:i32:$b, IntRegs:i32:$c, SETUGT:Other) - Complexity = 3
                    // Dst: (CMPGTUrr:i1 IntRegs:i32:$b, IntRegs:i32:$c)
/*7755*/          /*Scope*/ 14, /*->7770*/
/*7756*/            OPC_CheckCondCode, ISD::SETGT,
/*7758*/            OPC_MoveParent,
/*7759*/            OPC_CheckType, MVT::i1,
/*7761*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPGTrr), 0,
                        1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i1 IntRegs:i32:$b, IntRegs:i32:$c, SETGT:Other) - Complexity = 3
                    // Dst: (CMPGTrr:i1 IntRegs:i32:$b, IntRegs:i32:$c)
/*7770*/          /*Scope*/ 14, /*->7785*/
/*7771*/            OPC_CheckCondCode, ISD::SETLT,
/*7773*/            OPC_MoveParent,
/*7774*/            OPC_CheckType, MVT::i1,
/*7776*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPLTrr), 0,
                        1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i1 IntRegs:i32:$b, IntRegs:i32:$c, SETLT:Other) - Complexity = 3
                    // Dst: (CMPLTrr:i1 IntRegs:i32:$b, IntRegs:i32:$c)
/*7785*/          /*Scope*/ 14, /*->7800*/
/*7786*/            OPC_CheckCondCode, ISD::SETEQ,
/*7788*/            OPC_MoveParent,
/*7789*/            OPC_CheckType, MVT::i1,
/*7791*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPEQrr), 0,
                        1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i1 IntRegs:i32:$b, IntRegs:i32:$c, SETEQ:Other) - Complexity = 3
                    // Dst: (CMPEQrr:i1 IntRegs:i32:$b, IntRegs:i32:$c)
/*7800*/          /*Scope*/ 14, /*->7815*/
/*7801*/            OPC_CheckCondCode, ISD::SETLT,
/*7803*/            OPC_MoveParent,
/*7804*/            OPC_CheckType, MVT::i1,
/*7806*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPLTrr), 0,
                        1/*#VTs*/, MVT::i1, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i1 IntRegs:i32:$src1, IntRegs:i32:$src2, SETLT:Other) - Complexity = 3
                    // Dst: (CMPLTrr:i1 IntRegs:i32:$src2, IntRegs:i32:$src1)
/*7815*/          /*Scope*/ 14, /*->7830*/
/*7816*/            OPC_CheckCondCode, ISD::SETULT,
/*7818*/            OPC_MoveParent,
/*7819*/            OPC_CheckType, MVT::i1,
/*7821*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPGTUrr), 0,
                        1/*#VTs*/, MVT::i1, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i1 IntRegs:i32:$src1, IntRegs:i32:$src2, SETULT:Other) - Complexity = 3
                    // Dst: (CMPGTUrr:i1 IntRegs:i32:$src2, IntRegs:i32:$src1)
/*7830*/          /*Scope*/ 22, /*->7853*/
/*7831*/            OPC_CheckCondCode, ISD::SETLE,
/*7833*/            OPC_MoveParent,
/*7834*/            OPC_CheckType, MVT::i1,
/*7836*/            OPC_EmitNode, TARGET_VAL(Hexagon::CMPGTrr), 0,
                        1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1,  // Results = #2 
/*7845*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::NOT_p), 0,
                        1/*#VTs*/, MVT::i1, 1/*#Ops*/, 2, 
                    // Src: (setcc:i1 IntRegs:i32:$src1, IntRegs:i32:$src2, SETLE:Other) - Complexity = 3
                    // Dst: (NOT_p:i1 (CMPGTrr:i1 IntRegs:i32:$src1, IntRegs:i32:$src2))
/*7853*/          /*Scope*/ 22, /*->7876*/
/*7854*/            OPC_CheckCondCode, ISD::SETNE,
/*7856*/            OPC_MoveParent,
/*7857*/            OPC_CheckType, MVT::i1,
/*7859*/            OPC_EmitNode, TARGET_VAL(Hexagon::CMPEQrr), 0,
                        1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1,  // Results = #2 
/*7868*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::NOT_p), 0,
                        1/*#VTs*/, MVT::i1, 1/*#Ops*/, 2, 
                    // Src: (setcc:i1 IntRegs:i32:$src1, IntRegs:i32:$src2, SETNE:Other) - Complexity = 3
                    // Dst: (NOT_p:i1 (CMPEQrr:i1 IntRegs:i32:$src1, IntRegs:i32:$src2))
/*7876*/          /*Scope*/ 22, /*->7899*/
/*7877*/            OPC_CheckCondCode, ISD::SETGE,
/*7879*/            OPC_MoveParent,
/*7880*/            OPC_CheckType, MVT::i1,
/*7882*/            OPC_EmitNode, TARGET_VAL(Hexagon::CMPGTrr), 0,
                        1/*#VTs*/, MVT::i1, 2/*#Ops*/, 1, 0,  // Results = #2 
/*7891*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::NOT_p), 0,
                        1/*#VTs*/, MVT::i1, 1/*#Ops*/, 2, 
                    // Src: (setcc:i1 IntRegs:i32:$src1, IntRegs:i32:$src2, SETGE:Other) - Complexity = 3
                    // Dst: (NOT_p:i1 (CMPGTrr:i1 IntRegs:i32:$src2, IntRegs:i32:$src1))
/*7899*/          /*Scope*/ 22, /*->7922*/
/*7900*/            OPC_CheckCondCode, ISD::SETUGE,
/*7902*/            OPC_MoveParent,
/*7903*/            OPC_CheckType, MVT::i1,
/*7905*/            OPC_EmitNode, TARGET_VAL(Hexagon::CMPGTUrr), 0,
                        1/*#VTs*/, MVT::i1, 2/*#Ops*/, 1, 0,  // Results = #2 
/*7914*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::NOT_p), 0,
                        1/*#VTs*/, MVT::i1, 1/*#Ops*/, 2, 
                    // Src: (setcc:i1 IntRegs:i32:$src1, IntRegs:i32:$src2, SETUGE:Other) - Complexity = 3
                    // Dst: (NOT_p:i1 (CMPGTUrr:i1 IntRegs:i32:$src2, IntRegs:i32:$src1))
/*7922*/          /*Scope*/ 22, /*->7945*/
/*7923*/            OPC_CheckCondCode, ISD::SETULE,
/*7925*/            OPC_MoveParent,
/*7926*/            OPC_CheckType, MVT::i1,
/*7928*/            OPC_EmitNode, TARGET_VAL(Hexagon::CMPGTUrr), 0,
                        1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1,  // Results = #2 
/*7937*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::NOT_p), 0,
                        1/*#VTs*/, MVT::i1, 1/*#Ops*/, 2, 
                    // Src: (setcc:i1 IntRegs:i32:$src1, IntRegs:i32:$src2, SETULE:Other) - Complexity = 3
                    // Dst: (NOT_p:i1 (CMPGTUrr:i1 IntRegs:i32:$src1, IntRegs:i32:$src2))
/*7945*/          0, /*End of Scope*/
/*7946*/        0, /*End of Scope*/
/*7947*/      /*Scope*/ 69|128,1/*197*/, /*->8146*/
/*7949*/        OPC_CheckChild0Type, MVT::i64,
/*7951*/        OPC_RecordChild1, // #1 = $c
/*7952*/        OPC_MoveChild, 2,
/*7954*/        OPC_Scope, 14, /*->7970*/ // 10 children in Scope
/*7956*/          OPC_CheckCondCode, ISD::SETEQ,
/*7958*/          OPC_MoveParent,
/*7959*/          OPC_CheckType, MVT::i1,
/*7961*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPEHexagon4rr), 0,
                      1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i1 DoubleRegs:i64:$b, DoubleRegs:i64:$c, SETEQ:Other) - Complexity = 3
                  // Dst: (CMPEHexagon4rr:i1 DoubleRegs:i64:$b, DoubleRegs:i64:$c)
/*7970*/        /*Scope*/ 14, /*->7985*/
/*7971*/          OPC_CheckCondCode, ISD::SETGT,
/*7973*/          OPC_MoveParent,
/*7974*/          OPC_CheckType, MVT::i1,
/*7976*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPGT64rr), 0,
                      1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i1 DoubleRegs:i64:$b, DoubleRegs:i64:$c, SETGT:Other) - Complexity = 3
                  // Dst: (CMPGT64rr:i1 DoubleRegs:i64:$b, DoubleRegs:i64:$c)
/*7985*/        /*Scope*/ 14, /*->8000*/
/*7986*/          OPC_CheckCondCode, ISD::SETUGT,
/*7988*/          OPC_MoveParent,
/*7989*/          OPC_CheckType, MVT::i1,
/*7991*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPGTU64rr), 0,
                      1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i1 DoubleRegs:i64:$b, DoubleRegs:i64:$c, SETUGT:Other) - Complexity = 3
                  // Dst: (CMPGTU64rr:i1 DoubleRegs:i64:$b, DoubleRegs:i64:$c)
/*8000*/        /*Scope*/ 14, /*->8015*/
/*8001*/          OPC_CheckCondCode, ISD::SETLT,
/*8003*/          OPC_MoveParent,
/*8004*/          OPC_CheckType, MVT::i1,
/*8006*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPGT64rr), 0,
                      1/*#VTs*/, MVT::i1, 2/*#Ops*/, 1, 0, 
                  // Src: (setcc:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, SETLT:Other) - Complexity = 3
                  // Dst: (CMPGT64rr:i1 DoubleRegs:i64:$src2, DoubleRegs:i64:$src1)
/*8015*/        /*Scope*/ 14, /*->8030*/
/*8016*/          OPC_CheckCondCode, ISD::SETULT,
/*8018*/          OPC_MoveParent,
/*8019*/          OPC_CheckType, MVT::i1,
/*8021*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::CMPGTU64rr), 0,
                      1/*#VTs*/, MVT::i1, 2/*#Ops*/, 1, 0, 
                  // Src: (setcc:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, SETULT:Other) - Complexity = 3
                  // Dst: (CMPGTU64rr:i1 DoubleRegs:i64:$src2, DoubleRegs:i64:$src1)
/*8030*/        /*Scope*/ 22, /*->8053*/
/*8031*/          OPC_CheckCondCode, ISD::SETLE,
/*8033*/          OPC_MoveParent,
/*8034*/          OPC_CheckType, MVT::i1,
/*8036*/          OPC_EmitNode, TARGET_VAL(Hexagon::CMPGT64rr), 0,
                      1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1,  // Results = #2 
/*8045*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::NOT_p), 0,
                      1/*#VTs*/, MVT::i1, 1/*#Ops*/, 2, 
                  // Src: (setcc:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, SETLE:Other) - Complexity = 3
                  // Dst: (NOT_p:i1 (CMPGT64rr:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2))
/*8053*/        /*Scope*/ 22, /*->8076*/
/*8054*/          OPC_CheckCondCode, ISD::SETNE,
/*8056*/          OPC_MoveParent,
/*8057*/          OPC_CheckType, MVT::i1,
/*8059*/          OPC_EmitNode, TARGET_VAL(Hexagon::CMPEHexagon4rr), 0,
                      1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1,  // Results = #2 
/*8068*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::NOT_p), 0,
                      1/*#VTs*/, MVT::i1, 1/*#Ops*/, 2, 
                  // Src: (setcc:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, SETNE:Other) - Complexity = 3
                  // Dst: (NOT_p:i1 (CMPEHexagon4rr:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2))
/*8076*/        /*Scope*/ 22, /*->8099*/
/*8077*/          OPC_CheckCondCode, ISD::SETGE,
/*8079*/          OPC_MoveParent,
/*8080*/          OPC_CheckType, MVT::i1,
/*8082*/          OPC_EmitNode, TARGET_VAL(Hexagon::CMPGT64rr), 0,
                      1/*#VTs*/, MVT::i1, 2/*#Ops*/, 1, 0,  // Results = #2 
/*8091*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::NOT_p), 0,
                      1/*#VTs*/, MVT::i1, 1/*#Ops*/, 2, 
                  // Src: (setcc:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, SETGE:Other) - Complexity = 3
                  // Dst: (NOT_p:i1 (CMPGT64rr:i1 DoubleRegs:i64:$src2, DoubleRegs:i64:$src1))
/*8099*/        /*Scope*/ 22, /*->8122*/
/*8100*/          OPC_CheckCondCode, ISD::SETUGE,
/*8102*/          OPC_MoveParent,
/*8103*/          OPC_CheckType, MVT::i1,
/*8105*/          OPC_EmitNode, TARGET_VAL(Hexagon::CMPGTU64rr), 0,
                      1/*#VTs*/, MVT::i1, 2/*#Ops*/, 1, 0,  // Results = #2 
/*8114*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::NOT_p), 0,
                      1/*#VTs*/, MVT::i1, 1/*#Ops*/, 2, 
                  // Src: (setcc:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, SETUGE:Other) - Complexity = 3
                  // Dst: (NOT_p:i1 (CMPGTU64rr:i1 DoubleRegs:i64:$src2, DoubleRegs:i64:$src1))
/*8122*/        /*Scope*/ 22, /*->8145*/
/*8123*/          OPC_CheckCondCode, ISD::SETULE,
/*8125*/          OPC_MoveParent,
/*8126*/          OPC_CheckType, MVT::i1,
/*8128*/          OPC_EmitNode, TARGET_VAL(Hexagon::CMPGTU64rr), 0,
                      1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1,  // Results = #2 
/*8137*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::NOT_p), 0,
                      1/*#VTs*/, MVT::i1, 1/*#Ops*/, 2, 
                  // Src: (setcc:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, SETULE:Other) - Complexity = 3
                  // Dst: (NOT_p:i1 (CMPGTU64rr:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2))
/*8145*/        0, /*End of Scope*/
/*8146*/      /*Scope*/ 19, /*->8166*/
/*8147*/        OPC_CheckChild0Type, MVT::i1,
/*8149*/        OPC_RecordChild1, // #1 = $src2
/*8150*/        OPC_MoveChild, 2,
/*8152*/        OPC_CheckCondCode, ISD::SETNE,
/*8154*/        OPC_MoveParent,
/*8155*/        OPC_CheckType, MVT::i1,
/*8157*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::XOR_pp), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i1 PredRegs:i1:$src1, PredRegs:i1:$src2, SETNE:Other) - Complexity = 3
                // Dst: (XOR_pp:i1 PredRegs:i1:$src1, PredRegs:i1:$src2)
/*8166*/      0, /*End of Scope*/
/*8167*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 123|128,4/*635*/,  TARGET_VAL(ISD::AND),// ->8807
/*8172*/    OPC_Scope, 43, /*->8217*/ // 9 children in Scope
/*8174*/      OPC_RecordChild0, // #0 = $src1
/*8175*/      OPC_MoveChild, 1,
/*8177*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*8180*/      OPC_RecordChild0, // #1 = $src2
/*8181*/      OPC_MoveChild, 1,
/*8183*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*8186*/      OPC_RecordChild0, // #2 = $src3
/*8187*/      OPC_MoveChild, 1,
/*8189*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8200*/      OPC_MoveParent,
/*8201*/      OPC_MoveParent,
/*8202*/      OPC_MoveParent,
/*8203*/      OPC_CheckType, MVT::i32,
/*8205*/      OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*8207*/      OPC_MorphNodeTo, TARGET_VAL(Hexagon::ANDr_ANDr_NOTr_V4), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (and:i32 IntRegs:i32:$src1, (and:i32 IntRegs:i32:$src2, (xor:i32 IntRegs:i32:$src3, -1:i32))) - Complexity = 14
              // Dst: (ANDr_ANDr_NOTr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*8217*/    /*Scope*/ 86|128,1/*214*/, /*->8433*/
/*8219*/      OPC_MoveChild, 0,
/*8221*/      OPC_SwitchOpcode /*4 cases */, 40,  TARGET_VAL(ISD::SHL),// ->8265
/*8225*/        OPC_RecordChild0, // #0 = $src2
/*8226*/        OPC_RecordChild1, // #1 = $src3
/*8227*/        OPC_MoveChild, 1,
/*8229*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8232*/        OPC_CheckPredicate, 53, // Predicate_u5ImmPred
/*8234*/        OPC_CheckType, MVT::i32,
/*8236*/        OPC_MoveParent,
/*8237*/        OPC_MoveParent,
/*8238*/        OPC_RecordChild1, // #2 = $src1
/*8239*/        OPC_MoveChild, 1,
/*8241*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8244*/        OPC_CheckPredicate, 46, // Predicate_u8ImmPred
/*8246*/        OPC_MoveParent,
/*8247*/        OPC_CheckType, MVT::i32,
/*8249*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*8251*/        OPC_EmitConvertToTarget, 2,
/*8253*/        OPC_EmitConvertToTarget, 1,
/*8255*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::ANDi_ASLri_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 0, 4, 
                // Src: (and:i32 (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u5ImmPred>>:$src3), (imm:i32)<<P:Predicate_u8ImmPred>>:$src1) - Complexity = 14
                // Dst: (ANDi_ASLri_V4:i32 (imm:i32):$src1, IntRegs:i32:$src2, (imm:i32):$src3)
              /*SwitchOpcode*/ 40,  TARGET_VAL(ISD::SRL),// ->8308
/*8268*/        OPC_RecordChild0, // #0 = $src2
/*8269*/        OPC_RecordChild1, // #1 = $src3
/*8270*/        OPC_MoveChild, 1,
/*8272*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8275*/        OPC_CheckPredicate, 53, // Predicate_u5ImmPred
/*8277*/        OPC_CheckType, MVT::i32,
/*8279*/        OPC_MoveParent,
/*8280*/        OPC_MoveParent,
/*8281*/        OPC_RecordChild1, // #2 = $src1
/*8282*/        OPC_MoveChild, 1,
/*8284*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8287*/        OPC_CheckPredicate, 46, // Predicate_u8ImmPred
/*8289*/        OPC_MoveParent,
/*8290*/        OPC_CheckType, MVT::i32,
/*8292*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*8294*/        OPC_EmitConvertToTarget, 2,
/*8296*/        OPC_EmitConvertToTarget, 1,
/*8298*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::ANDi_LSRri_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 0, 4, 
                // Src: (and:i32 (srl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u5ImmPred>>:$src3), (imm:i32)<<P:Predicate_u8ImmPred>>:$src1) - Complexity = 14
                // Dst: (ANDi_LSRri_V4:i32 (imm:i32):$src1, IntRegs:i32:$src2, (imm:i32):$src3)
              /*SwitchOpcode*/ 80,  TARGET_VAL(ISD::AND),// ->8391
/*8311*/        OPC_Scope, 38, /*->8351*/ // 2 children in Scope
/*8313*/          OPC_RecordChild0, // #0 = $src1
/*8314*/          OPC_MoveChild, 1,
/*8316*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*8319*/          OPC_RecordChild0, // #1 = $src3
/*8320*/          OPC_MoveChild, 1,
/*8322*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8333*/          OPC_MoveParent,
/*8334*/          OPC_MoveParent,
/*8335*/          OPC_MoveParent,
/*8336*/          OPC_RecordChild1, // #2 = $src2
/*8337*/          OPC_CheckType, MVT::i32,
/*8339*/          OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*8341*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::ANDr_ANDr_NOTr_V4), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 1, 
                  // Src: (and:i32 (and:i32 IntRegs:i32:$src1, (xor:i32 IntRegs:i32:$src3, -1:i32)), IntRegs:i32:$src2) - Complexity = 14
                  // Dst: (ANDr_ANDr_NOTr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*8351*/        /*Scope*/ 38, /*->8390*/
/*8352*/          OPC_MoveChild, 0,
/*8354*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*8357*/          OPC_RecordChild0, // #0 = $src3
/*8358*/          OPC_MoveChild, 1,
/*8360*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8371*/          OPC_MoveParent,
/*8372*/          OPC_MoveParent,
/*8373*/          OPC_RecordChild1, // #1 = $src1
/*8374*/          OPC_MoveParent,
/*8375*/          OPC_RecordChild1, // #2 = $src2
/*8376*/          OPC_CheckType, MVT::i32,
/*8378*/          OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*8380*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::ANDr_ANDr_NOTr_V4), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                  // Src: (and:i32 (and:i32 (xor:i32 IntRegs:i32:$src3, -1:i32), IntRegs:i32:$src1), IntRegs:i32:$src2) - Complexity = 14
                  // Dst: (ANDr_ANDr_NOTr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*8390*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 38,  TARGET_VAL(ISD::XOR),// ->8432
/*8394*/        OPC_RecordChild0, // #0 = $src3
/*8395*/        OPC_MoveChild, 1,
/*8397*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8408*/        OPC_MoveParent,
/*8409*/        OPC_MoveParent,
/*8410*/        OPC_MoveChild, 1,
/*8412*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*8415*/        OPC_RecordChild0, // #1 = $src1
/*8416*/        OPC_RecordChild1, // #2 = $src2
/*8417*/        OPC_MoveParent,
/*8418*/        OPC_CheckType, MVT::i32,
/*8420*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*8422*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::ANDr_ANDr_NOTr_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                // Src: (and:i32 (xor:i32 IntRegs:i32:$src3, -1:i32), (and:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)) - Complexity = 14
                // Dst: (ANDr_ANDr_NOTr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
              0, // EndSwitchOpcode
/*8433*/    /*Scope*/ 90, /*->8524*/
/*8434*/      OPC_RecordChild0, // #0 = $src2
/*8435*/      OPC_MoveChild, 1,
/*8437*/      OPC_SwitchOpcode /*2 cases */, 37,  TARGET_VAL(ISD::AND),// ->8478
/*8441*/        OPC_MoveChild, 0,
/*8443*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*8446*/        OPC_RecordChild0, // #1 = $src3
/*8447*/        OPC_MoveChild, 1,
/*8449*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8460*/        OPC_MoveParent,
/*8461*/        OPC_MoveParent,
/*8462*/        OPC_RecordChild1, // #2 = $src1
/*8463*/        OPC_MoveParent,
/*8464*/        OPC_CheckType, MVT::i32,
/*8466*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*8468*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::ANDr_ANDr_NOTr_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 0, 1, 
                // Src: (and:i32 IntRegs:i32:$src2, (and:i32 (xor:i32 IntRegs:i32:$src3, -1:i32), IntRegs:i32:$src1)) - Complexity = 14
                // Dst: (ANDr_ANDr_NOTr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
              /*SwitchOpcode*/ 42,  TARGET_VAL(ISD::XOR),// ->8523
/*8481*/        OPC_RecordChild0, // #1 = $src2
/*8482*/        OPC_MoveChild, 1,
/*8484*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8495*/        OPC_MoveParent,
/*8496*/        OPC_MoveParent,
/*8497*/        OPC_SwitchType /*2 cases */, 9,  MVT::i1,// ->8509
/*8500*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::AND_pnotp), 0,
                      1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i1 PredRegs:i1:$src1, (xor:i1 PredRegs:i1:$src2, -1:i1)) - Complexity = 11
                  // Dst: (AND_pnotp:i1 PredRegs:i1:$src1, PredRegs:i1:$src2)
                /*SwitchType*/ 11,  MVT::i64,// ->8522
/*8511*/          OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*8513*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::ANDd_NOTd_V4), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i64 DoubleRegs:i64:$src1, (xor:i64 DoubleRegs:i64:$src2, -1:i64)) - Complexity = 11
                  // Dst: (ANDd_NOTd_V4:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*8524*/    /*Scope*/ 48, /*->8573*/
/*8525*/      OPC_MoveChild, 0,
/*8527*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*8530*/      OPC_RecordChild0, // #0 = $src2
/*8531*/      OPC_MoveChild, 1,
/*8533*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8544*/      OPC_MoveParent,
/*8545*/      OPC_MoveParent,
/*8546*/      OPC_RecordChild1, // #1 = $src1
/*8547*/      OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->8561
/*8550*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*8552*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::ANDd_NOTd_V4), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (and:i64 (xor:i64 DoubleRegs:i64:$src2, -1:i64), DoubleRegs:i64:$src1) - Complexity = 11
                // Dst: (ANDd_NOTd_V4:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
              /*SwitchType*/ 9,  MVT::i1,// ->8572
/*8563*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::AND_pnotp), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 1, 0, 
                // Src: (and:i1 (xor:i1 PredRegs:i1:$src2, -1:i1), PredRegs:i1:$src1) - Complexity = 11
                // Dst: (AND_pnotp:i1 PredRegs:i1:$src1, PredRegs:i1:$src2)
              0, // EndSwitchType
/*8573*/    /*Scope*/ 15, /*->8589*/
/*8574*/      OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*8578*/      OPC_RecordChild0, // #0 = $src1
/*8579*/      OPC_CheckType, MVT::i32,
/*8581*/      OPC_MorphNodeTo, TARGET_VAL(Hexagon::ZXTH), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (and:i32 IntRegs:i32:$src1, 65535:i32) - Complexity = 8
              // Dst: (ZXTH:i32 IntRegs:i32:$src1)
/*8589*/    /*Scope*/ 14, /*->8604*/
/*8590*/      OPC_CheckAndImm, 127|128,1/*255*/, 
/*8593*/      OPC_RecordChild0, // #0 = $src1
/*8594*/      OPC_CheckType, MVT::i32,
/*8596*/      OPC_MorphNodeTo, TARGET_VAL(Hexagon::ZXTB), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (and:i32 IntRegs:i32:$src1, 255:i32) - Complexity = 8
              // Dst: (ZXTB:i32 IntRegs:i32:$src1)
/*8604*/    /*Scope*/ 116, /*->8721*/
/*8605*/      OPC_RecordChild0, // #0 = $src1
/*8606*/      OPC_Scope, 22, /*->8630*/ // 2 children in Scope
/*8608*/        OPC_RecordChild1, // #1 = $src2
/*8609*/        OPC_MoveChild, 1,
/*8611*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8614*/        OPC_CheckPredicate, 52, // Predicate_s10ImmPred
/*8616*/        OPC_MoveParent,
/*8617*/        OPC_CheckType, MVT::i32,
/*8619*/        OPC_EmitConvertToTarget, 1,
/*8621*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::AND_ri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (and:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s10ImmPred>>:$src2) - Complexity = 7
                // Dst: (AND_ri:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*8630*/      /*Scope*/ 89, /*->8720*/
/*8631*/        OPC_MoveChild, 1,
/*8633*/        OPC_SwitchOpcode /*3 cases */, 17,  TARGET_VAL(ISD::AND),// ->8654
/*8637*/          OPC_RecordChild0, // #1 = $src2
/*8638*/          OPC_RecordChild1, // #2 = $src3
/*8639*/          OPC_MoveParent,
/*8640*/          OPC_CheckType, MVT::i32,
/*8642*/          OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*8644*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::ANDr_ANDrr_V4), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (and:i32 IntRegs:i32:$src1, (and:i32 IntRegs:i32:$src2, IntRegs:i32:$src3)) - Complexity = 6
                  // Dst: (ANDr_ANDrr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
                /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::OR),// ->8674
/*8657*/          OPC_RecordChild0, // #1 = $src2
/*8658*/          OPC_RecordChild1, // #2 = $src3
/*8659*/          OPC_MoveParent,
/*8660*/          OPC_CheckType, MVT::i32,
/*8662*/          OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*8664*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::ANDr_ORrr_V4), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (and:i32 IntRegs:i32:$src1, (or:i32 IntRegs:i32:$src2, IntRegs:i32:$src3)) - Complexity = 6
                  // Dst: (ANDr_ORrr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
                /*SwitchOpcode*/ 42,  TARGET_VAL(ISD::XOR),// ->8719
/*8677*/          OPC_RecordChild0, // #1 = $src2
/*8678*/          OPC_RecordChild1, // #2 = $src3
/*8679*/          OPC_MoveParent,
/*8680*/          OPC_CheckType, MVT::i32,
/*8682*/          OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*8684*/          OPC_Scope, 10, /*->8696*/ // 3 children in Scope
/*8686*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::ANDr_XORrr_V4), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (and:i32 IntRegs:i32:$src1, (xor:i32 IntRegs:i32:$src2, IntRegs:i32:$src3)) - Complexity = 6
                    // Dst: (ANDr_XORrr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*8696*/          /*Scope*/ 10, /*->8707*/
/*8697*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::ORr_XORrr_V4), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (and:i32 IntRegs:i32:$src1, (xor:i32 IntRegs:i32:$src2, IntRegs:i32:$src3)) - Complexity = 6
                    // Dst: (ORr_XORrr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*8707*/          /*Scope*/ 10, /*->8718*/
/*8708*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::XORr_XORrr_V4), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (and:i32 IntRegs:i32:$src1, (xor:i32 IntRegs:i32:$src2, IntRegs:i32:$src3)) - Complexity = 6
                    // Dst: (XORr_XORrr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*8718*/          0, /*End of Scope*/
                0, // EndSwitchOpcode
/*8720*/      0, /*End of Scope*/
/*8721*/    /*Scope*/ 46, /*->8768*/
/*8722*/      OPC_MoveChild, 0,
/*8724*/      OPC_SwitchOpcode /*2 cases */, 18,  TARGET_VAL(ISD::OR),// ->8746
/*8728*/        OPC_RecordChild0, // #0 = $src2
/*8729*/        OPC_RecordChild1, // #1 = $src3
/*8730*/        OPC_MoveParent,
/*8731*/        OPC_RecordChild1, // #2 = $src1
/*8732*/        OPC_CheckType, MVT::i32,
/*8734*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*8736*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::ANDr_ORrr_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 0, 1, 
                // Src: (and:i32 (or:i32 IntRegs:i32:$src2, IntRegs:i32:$src3), IntRegs:i32:$src1) - Complexity = 6
                // Dst: (ANDr_ORrr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
              /*SwitchOpcode*/ 18,  TARGET_VAL(ISD::XOR),// ->8767
/*8749*/        OPC_RecordChild0, // #0 = $src2
/*8750*/        OPC_RecordChild1, // #1 = $src3
/*8751*/        OPC_MoveParent,
/*8752*/        OPC_RecordChild1, // #2 = $src1
/*8753*/        OPC_CheckType, MVT::i32,
/*8755*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*8757*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::ANDr_XORrr_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 0, 1, 
                // Src: (and:i32 (xor:i32 IntRegs:i32:$src2, IntRegs:i32:$src3), IntRegs:i32:$src1) - Complexity = 6
                // Dst: (ANDr_XORrr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
              0, // EndSwitchOpcode
/*8768*/    /*Scope*/ 37, /*->8806*/
/*8769*/      OPC_RecordChild0, // #0 = $src1
/*8770*/      OPC_RecordChild1, // #1 = $src2
/*8771*/      OPC_SwitchType /*3 cases */, 9,  MVT::i32,// ->8783
/*8774*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::AND_rr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 3
                // Dst: (AND_rr:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
              /*SwitchType*/ 9,  MVT::i64,// ->8794
/*8785*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::AND_rr64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 3
                // Dst: (AND_rr64:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
              /*SwitchType*/ 9,  MVT::i1,// ->8805
/*8796*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::AND_pp), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (and:i1 PredRegs:i1:$src1, PredRegs:i1:$src2) - Complexity = 3
                // Dst: (AND_pp:i1 PredRegs:i1:$src1, PredRegs:i1:$src2)
              0, // EndSwitchType
/*8806*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 54|128,4/*566*/,  TARGET_VAL(ISD::OR),// ->9377
/*8811*/    OPC_Scope, 43, /*->8856*/ // 11 children in Scope
/*8813*/      OPC_RecordChild0, // #0 = $src1
/*8814*/      OPC_MoveChild, 1,
/*8816*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*8819*/      OPC_RecordChild0, // #1 = $src2
/*8820*/      OPC_MoveChild, 1,
/*8822*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*8825*/      OPC_RecordChild0, // #2 = $src3
/*8826*/      OPC_MoveChild, 1,
/*8828*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8839*/      OPC_MoveParent,
/*8840*/      OPC_MoveParent,
/*8841*/      OPC_MoveParent,
/*8842*/      OPC_CheckType, MVT::i32,
/*8844*/      OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*8846*/      OPC_MorphNodeTo, TARGET_VAL(Hexagon::ORr_ANDr_NOTr_V4), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (or:i32 IntRegs:i32:$src1, (and:i32 IntRegs:i32:$src2, (xor:i32 IntRegs:i32:$src3, -1:i32))) - Complexity = 14
              // Dst: (ORr_ANDr_NOTr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*8856*/    /*Scope*/ 90, /*->8947*/
/*8857*/      OPC_MoveChild, 0,
/*8859*/      OPC_SwitchOpcode /*2 cases */, 40,  TARGET_VAL(ISD::SHL),// ->8903
/*8863*/        OPC_RecordChild0, // #0 = $src2
/*8864*/        OPC_RecordChild1, // #1 = $src3
/*8865*/        OPC_MoveChild, 1,
/*8867*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8870*/        OPC_CheckPredicate, 53, // Predicate_u5ImmPred
/*8872*/        OPC_CheckType, MVT::i32,
/*8874*/        OPC_MoveParent,
/*8875*/        OPC_MoveParent,
/*8876*/        OPC_RecordChild1, // #2 = $src1
/*8877*/        OPC_MoveChild, 1,
/*8879*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8882*/        OPC_CheckPredicate, 46, // Predicate_u8ImmPred
/*8884*/        OPC_MoveParent,
/*8885*/        OPC_CheckType, MVT::i32,
/*8887*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*8889*/        OPC_EmitConvertToTarget, 2,
/*8891*/        OPC_EmitConvertToTarget, 1,
/*8893*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::ORi_ASLri_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 0, 4, 
                // Src: (or:i32 (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u5ImmPred>>:$src3), (imm:i32)<<P:Predicate_u8ImmPred>>:$src1) - Complexity = 14
                // Dst: (ORi_ASLri_V4:i32 (imm:i32):$src1, IntRegs:i32:$src2, (imm:i32):$src3)
              /*SwitchOpcode*/ 40,  TARGET_VAL(ISD::SRL),// ->8946
/*8906*/        OPC_RecordChild0, // #0 = $src2
/*8907*/        OPC_RecordChild1, // #1 = $src3
/*8908*/        OPC_MoveChild, 1,
/*8910*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8913*/        OPC_CheckPredicate, 53, // Predicate_u5ImmPred
/*8915*/        OPC_CheckType, MVT::i32,
/*8917*/        OPC_MoveParent,
/*8918*/        OPC_MoveParent,
/*8919*/        OPC_RecordChild1, // #2 = $src1
/*8920*/        OPC_MoveChild, 1,
/*8922*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8925*/        OPC_CheckPredicate, 46, // Predicate_u8ImmPred
/*8927*/        OPC_MoveParent,
/*8928*/        OPC_CheckType, MVT::i32,
/*8930*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*8932*/        OPC_EmitConvertToTarget, 2,
/*8934*/        OPC_EmitConvertToTarget, 1,
/*8936*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::ORi_LSRri_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 0, 4, 
                // Src: (or:i32 (srl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u5ImmPred>>:$src3), (imm:i32)<<P:Predicate_u8ImmPred>>:$src1) - Complexity = 14
                // Dst: (ORi_LSRri_V4:i32 (imm:i32):$src1, IntRegs:i32:$src2, (imm:i32):$src3)
              0, // EndSwitchOpcode
/*8947*/    /*Scope*/ 43, /*->8991*/
/*8948*/      OPC_RecordChild0, // #0 = $src1
/*8949*/      OPC_MoveChild, 1,
/*8951*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*8954*/      OPC_MoveChild, 0,
/*8956*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*8959*/      OPC_RecordChild0, // #1 = $src3
/*8960*/      OPC_MoveChild, 1,
/*8962*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8973*/      OPC_MoveParent,
/*8974*/      OPC_MoveParent,
/*8975*/      OPC_RecordChild1, // #2 = $src2
/*8976*/      OPC_MoveParent,
/*8977*/      OPC_CheckType, MVT::i32,
/*8979*/      OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*8981*/      OPC_MorphNodeTo, TARGET_VAL(Hexagon::ORr_ANDr_NOTr_V4), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 1, 
              // Src: (or:i32 IntRegs:i32:$src1, (and:i32 (xor:i32 IntRegs:i32:$src3, -1:i32), IntRegs:i32:$src2)) - Complexity = 14
              // Dst: (ORr_ANDr_NOTr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*8991*/    /*Scope*/ 85, /*->9077*/
/*8992*/      OPC_MoveChild, 0,
/*8994*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*8997*/      OPC_Scope, 38, /*->9037*/ // 2 children in Scope
/*8999*/        OPC_RecordChild0, // #0 = $src2
/*9000*/        OPC_MoveChild, 1,
/*9002*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*9005*/        OPC_RecordChild0, // #1 = $src3
/*9006*/        OPC_MoveChild, 1,
/*9008*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9019*/        OPC_MoveParent,
/*9020*/        OPC_MoveParent,
/*9021*/        OPC_MoveParent,
/*9022*/        OPC_RecordChild1, // #2 = $src1
/*9023*/        OPC_CheckType, MVT::i32,
/*9025*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9027*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::ORr_ANDr_NOTr_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 0, 1, 
                // Src: (or:i32 (and:i32 IntRegs:i32:$src2, (xor:i32 IntRegs:i32:$src3, -1:i32)), IntRegs:i32:$src1) - Complexity = 14
                // Dst: (ORr_ANDr_NOTr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*9037*/      /*Scope*/ 38, /*->9076*/
/*9038*/        OPC_MoveChild, 0,
/*9040*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*9043*/        OPC_RecordChild0, // #0 = $src3
/*9044*/        OPC_MoveChild, 1,
/*9046*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9057*/        OPC_MoveParent,
/*9058*/        OPC_MoveParent,
/*9059*/        OPC_RecordChild1, // #1 = $src2
/*9060*/        OPC_MoveParent,
/*9061*/        OPC_RecordChild1, // #2 = $src1
/*9062*/        OPC_CheckType, MVT::i32,
/*9064*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9066*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::ORr_ANDr_NOTr_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 1, 0, 
                // Src: (or:i32 (and:i32 (xor:i32 IntRegs:i32:$src3, -1:i32), IntRegs:i32:$src2), IntRegs:i32:$src1) - Complexity = 14
                // Dst: (ORr_ANDr_NOTr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*9076*/      0, /*End of Scope*/
/*9077*/    /*Scope*/ 35, /*->9113*/
/*9078*/      OPC_RecordChild0, // #0 = $src1
/*9079*/      OPC_MoveChild, 1,
/*9081*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*9084*/      OPC_RecordChild0, // #1 = $src2
/*9085*/      OPC_MoveChild, 1,
/*9087*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9098*/      OPC_MoveParent,
/*9099*/      OPC_MoveParent,
/*9100*/      OPC_CheckType, MVT::i64,
/*9102*/      OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9104*/      OPC_MorphNodeTo, TARGET_VAL(Hexagon::ORd_NOTd_V4), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (or:i64 DoubleRegs:i64:$src1, (xor:i64 DoubleRegs:i64:$src2, -1:i64)) - Complexity = 11
              // Dst: (ORd_NOTd_V4:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*9113*/    /*Scope*/ 35, /*->9149*/
/*9114*/      OPC_MoveChild, 0,
/*9116*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*9119*/      OPC_RecordChild0, // #0 = $src2
/*9120*/      OPC_MoveChild, 1,
/*9122*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9133*/      OPC_MoveParent,
/*9134*/      OPC_MoveParent,
/*9135*/      OPC_RecordChild1, // #1 = $src1
/*9136*/      OPC_CheckType, MVT::i64,
/*9138*/      OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9140*/      OPC_MorphNodeTo, TARGET_VAL(Hexagon::ORd_NOTd_V4), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
              // Src: (or:i64 (xor:i64 DoubleRegs:i64:$src2, -1:i64), DoubleRegs:i64:$src1) - Complexity = 11
              // Dst: (ORd_NOTd_V4:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*9149*/    /*Scope*/ 58, /*->9208*/
/*9150*/      OPC_RecordChild0, // #0 = $src1
/*9151*/      OPC_MoveChild, 1,
/*9153*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*9156*/      OPC_RecordChild0, // #1 = $src2
/*9157*/      OPC_RecordChild1, // #2 = $src3
/*9158*/      OPC_MoveChild, 1,
/*9160*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9163*/      OPC_CheckPredicate, 52, // Predicate_s10ImmPred
/*9165*/      OPC_MoveParent,
/*9166*/      OPC_MoveParent,
/*9167*/      OPC_CheckType, MVT::i32,
/*9169*/      OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9171*/      OPC_EmitConvertToTarget, 2,
/*9173*/      OPC_Scope, 10, /*->9185*/ // 3 children in Scope
/*9175*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::ORr_ANDri_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (or:i32 IntRegs:i32:$src1, (and:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_s10ImmPred>>:$src3)) - Complexity = 10
                // Dst: (ORr_ANDri_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3)
/*9185*/      /*Scope*/ 10, /*->9196*/
/*9186*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::ORr_ANDri2_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (or:i32 IntRegs:i32:$src1, (and:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_s10ImmPred>>:$src3)) - Complexity = 10
                // Dst: (ORr_ANDri2_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3)
/*9196*/      /*Scope*/ 10, /*->9207*/
/*9197*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::ORr_ORri_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (or:i32 IntRegs:i32:$src1, (and:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_s10ImmPred>>:$src3)) - Complexity = 10
                // Dst: (ORr_ORri_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3)
/*9207*/      0, /*End of Scope*/
/*9208*/    /*Scope*/ 33, /*->9242*/
/*9209*/      OPC_MoveChild, 0,
/*9211*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*9214*/      OPC_RecordChild0, // #0 = $src2
/*9215*/      OPC_RecordChild1, // #1 = $src3
/*9216*/      OPC_MoveChild, 1,
/*9218*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9221*/      OPC_CheckPredicate, 52, // Predicate_s10ImmPred
/*9223*/      OPC_MoveParent,
/*9224*/      OPC_MoveParent,
/*9225*/      OPC_RecordChild1, // #2 = $src1
/*9226*/      OPC_CheckType, MVT::i32,
/*9228*/      OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9230*/      OPC_EmitConvertToTarget, 1,
/*9232*/      OPC_MorphNodeTo, TARGET_VAL(Hexagon::ORr_ANDri_V4), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 0, 3, 
              // Src: (or:i32 (and:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_s10ImmPred>>:$src3), IntRegs:i32:$src1) - Complexity = 10
              // Dst: (ORr_ANDri_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3)
/*9242*/    /*Scope*/ 71, /*->9314*/
/*9243*/      OPC_RecordChild0, // #0 = $src1
/*9244*/      OPC_Scope, 22, /*->9268*/ // 2 children in Scope
/*9246*/        OPC_RecordChild1, // #1 = $src2
/*9247*/        OPC_MoveChild, 1,
/*9249*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9252*/        OPC_CheckPredicate, 1, // Predicate_s8ImmPred
/*9254*/        OPC_MoveParent,
/*9255*/        OPC_CheckType, MVT::i32,
/*9257*/        OPC_EmitConvertToTarget, 1,
/*9259*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::OR_ri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (or:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s8ImmPred>>:$src2) - Complexity = 7
                // Dst: (OR_ri:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*9268*/      /*Scope*/ 44, /*->9313*/
/*9269*/        OPC_MoveChild, 1,
/*9271*/        OPC_SwitchOpcode /*2 cases */, 17,  TARGET_VAL(ISD::AND),// ->9292
/*9275*/          OPC_RecordChild0, // #1 = $src2
/*9276*/          OPC_RecordChild1, // #2 = $src3
/*9277*/          OPC_MoveParent,
/*9278*/          OPC_CheckType, MVT::i32,
/*9280*/          OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9282*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::ORr_ANDrr_V4), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (or:i32 IntRegs:i32:$src1, (and:i32 IntRegs:i32:$src2, IntRegs:i32:$src3)) - Complexity = 6
                  // Dst: (ORr_ANDrr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
                /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::OR),// ->9312
/*9295*/          OPC_RecordChild0, // #1 = $src2
/*9296*/          OPC_RecordChild1, // #2 = $src3
/*9297*/          OPC_MoveParent,
/*9298*/          OPC_CheckType, MVT::i32,
/*9300*/          OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9302*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::ORr_ORrr_V4), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (or:i32 IntRegs:i32:$src1, (or:i32 IntRegs:i32:$src2, IntRegs:i32:$src3)) - Complexity = 6
                  // Dst: (ORr_ORrr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
                0, // EndSwitchOpcode
/*9313*/      0, /*End of Scope*/
/*9314*/    /*Scope*/ 23, /*->9338*/
/*9315*/      OPC_MoveChild, 0,
/*9317*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*9320*/      OPC_RecordChild0, // #0 = $src2
/*9321*/      OPC_RecordChild1, // #1 = $src3
/*9322*/      OPC_MoveParent,
/*9323*/      OPC_RecordChild1, // #2 = $src1
/*9324*/      OPC_CheckType, MVT::i32,
/*9326*/      OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9328*/      OPC_MorphNodeTo, TARGET_VAL(Hexagon::ORr_ANDrr_V4), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 0, 1, 
              // Src: (or:i32 (and:i32 IntRegs:i32:$src2, IntRegs:i32:$src3), IntRegs:i32:$src1) - Complexity = 6
              // Dst: (ORr_ANDrr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*9338*/    /*Scope*/ 37, /*->9376*/
/*9339*/      OPC_RecordChild0, // #0 = $src1
/*9340*/      OPC_RecordChild1, // #1 = $src2
/*9341*/      OPC_SwitchType /*3 cases */, 9,  MVT::i32,// ->9353
/*9344*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::OR_rr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 3
                // Dst: (OR_rr:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
              /*SwitchType*/ 9,  MVT::i64,// ->9364
/*9355*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::OR_rr64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 3
                // Dst: (OR_rr64:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
              /*SwitchType*/ 9,  MVT::i1,// ->9375
/*9366*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::OR_pp), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (or:i1 PredRegs:i1:$src1, PredRegs:i1:$src2) - Complexity = 3
                // Dst: (OR_pp:i1 PredRegs:i1:$src1, PredRegs:i1:$src2)
              0, // EndSwitchType
/*9376*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 13|128,4/*525*/,  TARGET_VAL(ISD::XOR),// ->9906
/*9381*/    OPC_Scope, 84, /*->9467*/ // 5 children in Scope
/*9383*/      OPC_RecordChild0, // #0 = $src1
/*9384*/      OPC_MoveChild, 1,
/*9386*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*9389*/      OPC_Scope, 37, /*->9428*/ // 2 children in Scope
/*9391*/        OPC_RecordChild0, // #1 = $src2
/*9392*/        OPC_MoveChild, 1,
/*9394*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*9397*/        OPC_RecordChild0, // #2 = $src3
/*9398*/        OPC_MoveChild, 1,
/*9400*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9411*/        OPC_MoveParent,
/*9412*/        OPC_MoveParent,
/*9413*/        OPC_MoveParent,
/*9414*/        OPC_CheckType, MVT::i32,
/*9416*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9418*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::XORr_ANDr_NOTr_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (xor:i32 IntRegs:i32:$src1, (and:i32 IntRegs:i32:$src2, (xor:i32 IntRegs:i32:$src3, -1:i32))) - Complexity = 14
                // Dst: (XORr_ANDr_NOTr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*9428*/      /*Scope*/ 37, /*->9466*/
/*9429*/        OPC_MoveChild, 0,
/*9431*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*9434*/        OPC_RecordChild0, // #1 = $src3
/*9435*/        OPC_MoveChild, 1,
/*9437*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9448*/        OPC_MoveParent,
/*9449*/        OPC_MoveParent,
/*9450*/        OPC_RecordChild1, // #2 = $src2
/*9451*/        OPC_MoveParent,
/*9452*/        OPC_CheckType, MVT::i32,
/*9454*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9456*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::XORr_ANDr_NOTr_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 1, 
                // Src: (xor:i32 IntRegs:i32:$src1, (and:i32 (xor:i32 IntRegs:i32:$src3, -1:i32), IntRegs:i32:$src2)) - Complexity = 14
                // Dst: (XORr_ANDr_NOTr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*9466*/      0, /*End of Scope*/
/*9467*/    /*Scope*/ 85, /*->9553*/
/*9468*/      OPC_MoveChild, 0,
/*9470*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*9473*/      OPC_Scope, 38, /*->9513*/ // 2 children in Scope
/*9475*/        OPC_RecordChild0, // #0 = $src2
/*9476*/        OPC_MoveChild, 1,
/*9478*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*9481*/        OPC_RecordChild0, // #1 = $src3
/*9482*/        OPC_MoveChild, 1,
/*9484*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9495*/        OPC_MoveParent,
/*9496*/        OPC_MoveParent,
/*9497*/        OPC_MoveParent,
/*9498*/        OPC_RecordChild1, // #2 = $src1
/*9499*/        OPC_CheckType, MVT::i32,
/*9501*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9503*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::XORr_ANDr_NOTr_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 0, 1, 
                // Src: (xor:i32 (and:i32 IntRegs:i32:$src2, (xor:i32 IntRegs:i32:$src3, -1:i32)), IntRegs:i32:$src1) - Complexity = 14
                // Dst: (XORr_ANDr_NOTr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*9513*/      /*Scope*/ 38, /*->9552*/
/*9514*/        OPC_MoveChild, 0,
/*9516*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*9519*/        OPC_RecordChild0, // #0 = $src3
/*9520*/        OPC_MoveChild, 1,
/*9522*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9533*/        OPC_MoveParent,
/*9534*/        OPC_MoveParent,
/*9535*/        OPC_RecordChild1, // #1 = $src2
/*9536*/        OPC_MoveParent,
/*9537*/        OPC_RecordChild1, // #2 = $src1
/*9538*/        OPC_CheckType, MVT::i32,
/*9540*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9542*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::XORr_ANDr_NOTr_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 1, 0, 
                // Src: (xor:i32 (and:i32 (xor:i32 IntRegs:i32:$src3, -1:i32), IntRegs:i32:$src2), IntRegs:i32:$src1) - Complexity = 14
                // Dst: (XORr_ANDr_NOTr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*9552*/      0, /*End of Scope*/
/*9553*/    /*Scope*/ 68|128,1/*196*/, /*->9751*/
/*9555*/      OPC_RecordChild0, // #0 = $src1
/*9556*/      OPC_MoveChild, 1,
/*9558*/      OPC_Scope, 44, /*->9604*/ // 7 children in Scope
/*9560*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9571*/        OPC_MoveParent,
/*9572*/        OPC_SwitchType /*3 cases */, 8,  MVT::i32,// ->9583
/*9575*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::NOT_rr), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (xor:i32 IntRegs:i32:$src1, -1:i32) - Complexity = 8
                  // Dst: (NOT_rr:i32 IntRegs:i32:$src1)
                /*SwitchType*/ 8,  MVT::i1,// ->9593
/*9585*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::NOT_p), 0,
                      1/*#VTs*/, MVT::i1, 1/*#Ops*/, 0, 
                  // Src: (xor:i1 PredRegs:i1:$src1, -1:i1) - Complexity = 8
                  // Dst: (NOT_p:i1 PredRegs:i1:$src1)
                /*SwitchType*/ 8,  MVT::i64,// ->9603
/*9595*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::NOT_rr64), 0,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                  // Src: (xor:i64 DoubleRegs:i64:$src1, -1:i64) - Complexity = 8
                  // Dst: (NOT_rr64:i64 DoubleRegs:i64:$src1)
                0, // EndSwitchType
/*9604*/      /*Scope*/ 20, /*->9625*/
/*9605*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*9608*/        OPC_RecordChild0, // #1 = $src2
/*9609*/        OPC_RecordChild1, // #2 = $src3
/*9610*/        OPC_MoveParent,
/*9611*/        OPC_CheckType, MVT::i64,
/*9613*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9615*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::XORd_XORdd), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (xor:i64 DoubleRegs:i64:$src1, (xor:i64 DoubleRegs:i64:$src2, DoubleRegs:i64:$src3)) - Complexity = 6
                // Dst: (XORd_XORdd:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, DoubleRegs:i64:$src3)
/*9625*/      /*Scope*/ 20, /*->9646*/
/*9626*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*9629*/        OPC_RecordChild0, // #1 = $src2
/*9630*/        OPC_RecordChild1, // #2 = $src3
/*9631*/        OPC_MoveParent,
/*9632*/        OPC_CheckType, MVT::i32,
/*9634*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9636*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::XORr_ANDrr_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (xor:i32 IntRegs:i32:$src1, (and:i32 IntRegs:i32:$src2, IntRegs:i32:$src3)) - Complexity = 6
                // Dst: (XORr_ANDrr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*9646*/      /*Scope*/ 20, /*->9667*/
/*9647*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*9650*/        OPC_RecordChild0, // #1 = $src2
/*9651*/        OPC_RecordChild1, // #2 = $src3
/*9652*/        OPC_MoveParent,
/*9653*/        OPC_CheckType, MVT::i32,
/*9655*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9657*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::XORr_ORrr_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (xor:i32 IntRegs:i32:$src1, (or:i32 IntRegs:i32:$src2, IntRegs:i32:$src3)) - Complexity = 6
                // Dst: (XORr_ORrr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*9667*/      /*Scope*/ 36, /*->9704*/
/*9668*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*9671*/        OPC_RecordChild0, // #1 = $src2
/*9672*/        OPC_RecordChild1, // #2 = $src3
/*9673*/        OPC_CheckChild1Type, MVT::i32,
/*9675*/        OPC_MoveParent,
/*9676*/        OPC_CheckType, MVT::i64,
/*9678*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9680*/        OPC_Scope, 10, /*->9692*/ // 2 children in Scope
/*9682*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::ASLd_rr_xor_V4), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (xor:i64 DoubleRegs:i64:$src1, (shl:i64 DoubleRegs:i64:$src2, IntRegs:i32:$src3)) - Complexity = 6
                  // Dst: (ASLd_rr_xor_V4:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, IntRegs:i32:$src3)
/*9692*/        /*Scope*/ 10, /*->9703*/
/*9693*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::LSLd_rr_xor_V4), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (xor:i64 DoubleRegs:i64:$src1, (shl:i64 DoubleRegs:i64:$src2, IntRegs:i32:$src3)) - Complexity = 6
                  // Dst: (LSLd_rr_xor_V4:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, IntRegs:i32:$src3)
/*9703*/        0, /*End of Scope*/
/*9704*/      /*Scope*/ 22, /*->9727*/
/*9705*/        OPC_CheckOpcode, TARGET_VAL(ISD::SRA),
/*9708*/        OPC_RecordChild0, // #1 = $src2
/*9709*/        OPC_RecordChild1, // #2 = $src3
/*9710*/        OPC_CheckChild1Type, MVT::i32,
/*9712*/        OPC_MoveParent,
/*9713*/        OPC_CheckType, MVT::i64,
/*9715*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9717*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::ASRd_rr_xor_V4), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (xor:i64 DoubleRegs:i64:$src1, (sra:i64 DoubleRegs:i64:$src2, IntRegs:i32:$src3)) - Complexity = 6
                // Dst: (ASRd_rr_xor_V4:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, IntRegs:i32:$src3)
/*9727*/      /*Scope*/ 22, /*->9750*/
/*9728*/        OPC_CheckOpcode, TARGET_VAL(ISD::SRL),
/*9731*/        OPC_RecordChild0, // #1 = $src2
/*9732*/        OPC_RecordChild1, // #2 = $src3
/*9733*/        OPC_CheckChild1Type, MVT::i32,
/*9735*/        OPC_MoveParent,
/*9736*/        OPC_CheckType, MVT::i64,
/*9738*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9740*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::LSRd_rr_xor_V4), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (xor:i64 DoubleRegs:i64:$src1, (srl:i64 DoubleRegs:i64:$src2, IntRegs:i32:$src3)) - Complexity = 6
                // Dst: (LSRd_rr_xor_V4:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, IntRegs:i32:$src3)
/*9750*/      0, /*End of Scope*/
/*9751*/    /*Scope*/ 115, /*->9867*/
/*9752*/      OPC_MoveChild, 0,
/*9754*/      OPC_SwitchOpcode /*5 cases */, 18,  TARGET_VAL(ISD::AND),// ->9776
/*9758*/        OPC_RecordChild0, // #0 = $src2
/*9759*/        OPC_RecordChild1, // #1 = $src3
/*9760*/        OPC_MoveParent,
/*9761*/        OPC_RecordChild1, // #2 = $src1
/*9762*/        OPC_CheckType, MVT::i32,
/*9764*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9766*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::XORr_ANDrr_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 0, 1, 
                // Src: (xor:i32 (and:i32 IntRegs:i32:$src2, IntRegs:i32:$src3), IntRegs:i32:$src1) - Complexity = 6
                // Dst: (XORr_ANDrr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
              /*SwitchOpcode*/ 18,  TARGET_VAL(ISD::OR),// ->9797
/*9779*/        OPC_RecordChild0, // #0 = $src2
/*9780*/        OPC_RecordChild1, // #1 = $src3
/*9781*/        OPC_MoveParent,
/*9782*/        OPC_RecordChild1, // #2 = $src1
/*9783*/        OPC_CheckType, MVT::i32,
/*9785*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9787*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::XORr_ORrr_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 0, 1, 
                // Src: (xor:i32 (or:i32 IntRegs:i32:$src2, IntRegs:i32:$src3), IntRegs:i32:$src1) - Complexity = 6
                // Dst: (XORr_ORrr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
              /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::SHL),// ->9820
/*9800*/        OPC_RecordChild0, // #0 = $src2
/*9801*/        OPC_RecordChild1, // #1 = $src3
/*9802*/        OPC_CheckChild1Type, MVT::i32,
/*9804*/        OPC_MoveParent,
/*9805*/        OPC_RecordChild1, // #2 = $src1
/*9806*/        OPC_CheckType, MVT::i64,
/*9808*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9810*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::ASLd_rr_xor_V4), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 0, 1, 
                // Src: (xor:i64 (shl:i64 DoubleRegs:i64:$src2, IntRegs:i32:$src3), DoubleRegs:i64:$src1) - Complexity = 6
                // Dst: (ASLd_rr_xor_V4:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, IntRegs:i32:$src3)
              /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::SRA),// ->9843
/*9823*/        OPC_RecordChild0, // #0 = $src2
/*9824*/        OPC_RecordChild1, // #1 = $src3
/*9825*/        OPC_CheckChild1Type, MVT::i32,
/*9827*/        OPC_MoveParent,
/*9828*/        OPC_RecordChild1, // #2 = $src1
/*9829*/        OPC_CheckType, MVT::i64,
/*9831*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9833*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::ASRd_rr_xor_V4), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 0, 1, 
                // Src: (xor:i64 (sra:i64 DoubleRegs:i64:$src2, IntRegs:i32:$src3), DoubleRegs:i64:$src1) - Complexity = 6
                // Dst: (ASRd_rr_xor_V4:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, IntRegs:i32:$src3)
              /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::SRL),// ->9866
/*9846*/        OPC_RecordChild0, // #0 = $src2
/*9847*/        OPC_RecordChild1, // #1 = $src3
/*9848*/        OPC_CheckChild1Type, MVT::i32,
/*9850*/        OPC_MoveParent,
/*9851*/        OPC_RecordChild1, // #2 = $src1
/*9852*/        OPC_CheckType, MVT::i64,
/*9854*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9856*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::LSRd_rr_xor_V4), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 0, 1, 
                // Src: (xor:i64 (srl:i64 DoubleRegs:i64:$src2, IntRegs:i32:$src3), DoubleRegs:i64:$src1) - Complexity = 6
                // Dst: (LSRd_rr_xor_V4:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, IntRegs:i32:$src3)
              0, // EndSwitchOpcode
/*9867*/    /*Scope*/ 37, /*->9905*/
/*9868*/      OPC_RecordChild0, // #0 = $src1
/*9869*/      OPC_RecordChild1, // #1 = $src2
/*9870*/      OPC_SwitchType /*3 cases */, 9,  MVT::i32,// ->9882
/*9873*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::XOR_rr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 3
                // Dst: (XOR_rr:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
              /*SwitchType*/ 9,  MVT::i64,// ->9893
/*9884*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::XOR_rr64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 3
                // Dst: (XOR_rr64:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
              /*SwitchType*/ 9,  MVT::i1,// ->9904
/*9895*/        OPC_MorphNodeTo, TARGET_VAL(Hexagon::XOR_pp), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i1 PredRegs:i1:$src1, PredRegs:i1:$src2) - Complexity = 3
                // Dst: (XOR_pp:i1 PredRegs:i1:$src1, PredRegs:i1:$src2)
              0, // EndSwitchType
/*9905*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 2|128,8/*1026*/,  TARGET_VAL(ISD::ADD),// ->10936
/*9910*/    OPC_Scope, 71|128,1/*199*/, /*->10112*/ // 14 children in Scope
/*9913*/      OPC_MoveChild, 0,
/*9915*/      OPC_SwitchOpcode /*3 cases */, 106,  TARGET_VAL(ISD::MUL),// ->10025
/*9919*/        OPC_Scope, 38, /*->9959*/ // 2 children in Scope
/*9921*/          OPC_RecordChild0, // #0 = $src2
/*9922*/          OPC_RecordChild1, // #1 = $src3
/*9923*/          OPC_MoveChild, 1,
/*9925*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9928*/          OPC_CheckPredicate, 18, // Predicate_u6ImmPred
/*9930*/          OPC_MoveParent,
/*9931*/          OPC_MoveParent,
/*9932*/          OPC_RecordChild1, // #2 = $src1
/*9933*/          OPC_MoveChild, 1,
/*9935*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9938*/          OPC_CheckPredicate, 18, // Predicate_u6ImmPred
/*9940*/          OPC_MoveParent,
/*9941*/          OPC_CheckType, MVT::i32,
/*9943*/          OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*9945*/          OPC_EmitConvertToTarget, 2,
/*9947*/          OPC_EmitConvertToTarget, 1,
/*9949*/          OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADDi_MPYri_V4), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 0, 4, 
                  // Src: (add:i32 (mul:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u6ImmPred>>:$src3), (imm:i32)<<P:Predicate_u6ImmPred>>:$src1) - Complexity = 14
                  // Dst: (ADDi_MPYri_V4:i32 (imm:i32):$src1, IntRegs:i32:$src2, (imm:i32):$src3)
/*9959*/        /*Scope*/ 64, /*->10024*/
/*9960*/          OPC_MoveChild, 0,
/*9962*/          OPC_SwitchOpcode /*2 cases */, 27,  TARGET_VAL(ISD::SIGN_EXTEND),// ->9993
/*9966*/            OPC_RecordChild0, // #0 = $src2
/*9967*/            OPC_CheckChild0Type, MVT::i32,
/*9969*/            OPC_MoveParent,
/*9970*/            OPC_MoveChild, 1,
/*9972*/            OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*9975*/            OPC_RecordChild0, // #1 = $src3
/*9976*/            OPC_CheckChild0Type, MVT::i32,
/*9978*/            OPC_MoveParent,
/*9979*/            OPC_MoveParent,
/*9980*/            OPC_RecordChild1, // #2 = $src1
/*9981*/            OPC_CheckType, MVT::i64,
/*9983*/            OPC_MorphNodeTo, TARGET_VAL(Hexagon::MPY64_acc), 0,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (add:i64 (mul:i64 (sext:i64 IntRegs:i32:$src2), (sext:i64 IntRegs:i32:$src3)), DoubleRegs:i64:$src1) - Complexity = 12
                    // Dst: (MPY64_acc:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
                  /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::ANY_EXTEND),// ->10023
/*9996*/            OPC_RecordChild0, // #0 = $src2
/*9997*/            OPC_CheckChild0Type, MVT::i32,
/*9999*/            OPC_MoveParent,
/*10000*/           OPC_MoveChild, 1,
/*10002*/           OPC_CheckOpcode, TARGET_VAL(ISD::ANY_EXTEND),
/*10005*/           OPC_RecordChild0, // #1 = $src3
/*10006*/           OPC_CheckChild0Type, MVT::i32,
/*10008*/           OPC_MoveParent,
/*10009*/           OPC_MoveParent,
/*10010*/           OPC_RecordChild1, // #2 = $src1
/*10011*/           OPC_CheckType, MVT::i64,
/*10013*/           OPC_MorphNodeTo, TARGET_VAL(Hexagon::MPYU64_acc), 0,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (add:i64 (mul:i64 (anyext:i64 IntRegs:i32:$src2), (anyext:i64 IntRegs:i32:$src3)), DoubleRegs:i64:$src1) - Complexity = 12
                    // Dst: (MPYU64_acc:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
                  0, // EndSwitchOpcode
/*10024*/       0, /*End of Scope*/
              /*SwitchOpcode*/ 40,  TARGET_VAL(ISD::SHL),// ->10068
/*10028*/       OPC_RecordChild0, // #0 = $src2
/*10029*/       OPC_RecordChild1, // #1 = $src3
/*10030*/       OPC_MoveChild, 1,
/*10032*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10035*/       OPC_CheckPredicate, 53, // Predicate_u5ImmPred
/*10037*/       OPC_CheckType, MVT::i32,
/*10039*/       OPC_MoveParent,
/*10040*/       OPC_MoveParent,
/*10041*/       OPC_RecordChild1, // #2 = $src1
/*10042*/       OPC_MoveChild, 1,
/*10044*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10047*/       OPC_CheckPredicate, 46, // Predicate_u8ImmPred
/*10049*/       OPC_MoveParent,
/*10050*/       OPC_CheckType, MVT::i32,
/*10052*/       OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*10054*/       OPC_EmitConvertToTarget, 2,
/*10056*/       OPC_EmitConvertToTarget, 1,
/*10058*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADDi_ASLri_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 0, 4, 
                // Src: (add:i32 (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u5ImmPred>>:$src3), (imm:i32)<<P:Predicate_u8ImmPred>>:$src1) - Complexity = 14
                // Dst: (ADDi_ASLri_V4:i32 (imm:i32):$src1, IntRegs:i32:$src2, (imm:i32):$src3)
              /*SwitchOpcode*/ 40,  TARGET_VAL(ISD::SRL),// ->10111
/*10071*/       OPC_RecordChild0, // #0 = $src2
/*10072*/       OPC_RecordChild1, // #1 = $src3
/*10073*/       OPC_MoveChild, 1,
/*10075*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10078*/       OPC_CheckPredicate, 53, // Predicate_u5ImmPred
/*10080*/       OPC_CheckType, MVT::i32,
/*10082*/       OPC_MoveParent,
/*10083*/       OPC_MoveParent,
/*10084*/       OPC_RecordChild1, // #2 = $src1
/*10085*/       OPC_MoveChild, 1,
/*10087*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10090*/       OPC_CheckPredicate, 46, // Predicate_u8ImmPred
/*10092*/       OPC_MoveParent,
/*10093*/       OPC_CheckType, MVT::i32,
/*10095*/       OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*10097*/       OPC_EmitConvertToTarget, 2,
/*10099*/       OPC_EmitConvertToTarget, 1,
/*10101*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADDi_LSRri_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 0, 4, 
                // Src: (add:i32 (srl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u5ImmPred>>:$src3), (imm:i32)<<P:Predicate_u8ImmPred>>:$src1) - Complexity = 14
                // Dst: (ADDi_LSRri_V4:i32 (imm:i32):$src1, IntRegs:i32:$src2, (imm:i32):$src3)
              0, // EndSwitchOpcode
/*10112*/   /*Scope*/ 68, /*->10181*/
/*10113*/     OPC_RecordChild0, // #0 = $src1
/*10114*/     OPC_MoveChild, 1,
/*10116*/     OPC_CheckOpcode, TARGET_VAL(ISD::MUL),
/*10119*/     OPC_MoveChild, 0,
/*10121*/     OPC_SwitchOpcode /*2 cases */, 26,  TARGET_VAL(ISD::SIGN_EXTEND),// ->10151
/*10125*/       OPC_RecordChild0, // #1 = $src2
/*10126*/       OPC_CheckChild0Type, MVT::i32,
/*10128*/       OPC_MoveParent,
/*10129*/       OPC_MoveChild, 1,
/*10131*/       OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*10134*/       OPC_RecordChild0, // #2 = $src3
/*10135*/       OPC_CheckChild0Type, MVT::i32,
/*10137*/       OPC_MoveParent,
/*10138*/       OPC_MoveParent,
/*10139*/       OPC_CheckType, MVT::i64,
/*10141*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::MPY64_acc), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (add:i64 DoubleRegs:i64:$src1, (mul:i64 (sext:i64 IntRegs:i32:$src2), (sext:i64 IntRegs:i32:$src3))) - Complexity = 12
                // Dst: (MPY64_acc:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
              /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::ANY_EXTEND),// ->10180
/*10154*/       OPC_RecordChild0, // #1 = $src2
/*10155*/       OPC_CheckChild0Type, MVT::i32,
/*10157*/       OPC_MoveParent,
/*10158*/       OPC_MoveChild, 1,
/*10160*/       OPC_CheckOpcode, TARGET_VAL(ISD::ANY_EXTEND),
/*10163*/       OPC_RecordChild0, // #2 = $src3
/*10164*/       OPC_CheckChild0Type, MVT::i32,
/*10166*/       OPC_MoveParent,
/*10167*/       OPC_MoveParent,
/*10168*/       OPC_CheckType, MVT::i64,
/*10170*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::MPYU64_acc), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (add:i64 DoubleRegs:i64:$src1, (mul:i64 (anyext:i64 IntRegs:i32:$src2), (anyext:i64 IntRegs:i32:$src3))) - Complexity = 12
                // Dst: (MPYU64_acc:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
              0, // EndSwitchOpcode
/*10181*/   /*Scope*/ 62, /*->10244*/
/*10182*/     OPC_MoveChild, 0,
/*10184*/     OPC_SwitchOpcode /*2 cases */, 26,  TARGET_VAL(ISD::MUL),// ->10214
/*10188*/       OPC_RecordChild0, // #0 = $src2
/*10189*/       OPC_RecordChild1, // #1 = $src3
/*10190*/       OPC_MoveChild, 1,
/*10192*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10195*/       OPC_CheckPredicate, 46, // Predicate_u8ImmPred
/*10197*/       OPC_MoveParent,
/*10198*/       OPC_MoveParent,
/*10199*/       OPC_RecordChild1, // #2 = $src1
/*10200*/       OPC_CheckType, MVT::i32,
/*10202*/       OPC_EmitConvertToTarget, 1,
/*10204*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::MPYI_acc_ri), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 0, 3, 
                // Src: (add:i32 (mul:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u8ImmPred>>:$src3), IntRegs:i32:$src1) - Complexity = 10
                // Dst: (MPYI_acc_ri:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3)
              /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::ADD),// ->10243
/*10217*/       OPC_RecordChild0, // #0 = $src2
/*10218*/       OPC_RecordChild1, // #1 = $src3
/*10219*/       OPC_MoveChild, 1,
/*10221*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10224*/       OPC_CheckPredicate, 1, // Predicate_s8ImmPred
/*10226*/       OPC_MoveParent,
/*10227*/       OPC_MoveParent,
/*10228*/       OPC_RecordChild1, // #2 = $src1
/*10229*/       OPC_CheckType, MVT::i32,
/*10231*/       OPC_EmitConvertToTarget, 1,
/*10233*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADDri_acc), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 0, 3, 
                // Src: (add:i32 (add:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_s8ImmPred>>:$src3), IntRegs:i32:$src1) - Complexity = 10
                // Dst: (ADDri_acc:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3)
              0, // EndSwitchOpcode
/*10244*/   /*Scope*/ 125, /*->10370*/
/*10245*/     OPC_RecordChild0, // #0 = $src1
/*10246*/     OPC_MoveChild, 1,
/*10248*/     OPC_SwitchOpcode /*4 cases */, 27,  TARGET_VAL(ISD::SRL),// ->10279
/*10252*/       OPC_RecordChild0, // #1 = $src2
/*10253*/       OPC_RecordChild1, // #2 = $src3
/*10254*/       OPC_MoveChild, 1,
/*10256*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10259*/       OPC_CheckPredicate, 18, // Predicate_u6ImmPred
/*10261*/       OPC_CheckType, MVT::i32,
/*10263*/       OPC_MoveParent,
/*10264*/       OPC_MoveParent,
/*10265*/       OPC_CheckType, MVT::i64,
/*10267*/       OPC_EmitConvertToTarget, 2,
/*10269*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::LSRd_ri_acc), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
                // Src: (add:i64 DoubleRegs:i64:$src1, (srl:i64 DoubleRegs:i64:$src2, (imm:i32)<<P:Predicate_u6ImmPred>>:$src3)) - Complexity = 10
                // Dst: (LSRd_ri_acc:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, (imm:i32):$src3)
              /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::SHL),// ->10309
/*10282*/       OPC_RecordChild0, // #1 = $src2
/*10283*/       OPC_RecordChild1, // #2 = $src3
/*10284*/       OPC_MoveChild, 1,
/*10286*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10289*/       OPC_CheckPredicate, 54, // Predicate_u3ImmPred
/*10291*/       OPC_CheckType, MVT::i32,
/*10293*/       OPC_MoveParent,
/*10294*/       OPC_MoveParent,
/*10295*/       OPC_CheckType, MVT::i32,
/*10297*/       OPC_EmitConvertToTarget, 2,
/*10299*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADDASL), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (add:i32 IntRegs:i32:$src1, (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u3ImmPred>>:$src3)) - Complexity = 10
                // Dst: (ADDASL:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3)
              /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::ADD),// ->10339
/*10312*/       OPC_RecordChild0, // #1 = $src2
/*10313*/       OPC_RecordChild1, // #2 = $src3
/*10314*/       OPC_MoveChild, 1,
/*10316*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10319*/       OPC_CheckPredicate, 55, // Predicate_s6ImmPred
/*10321*/       OPC_MoveParent,
/*10322*/       OPC_MoveParent,
/*10323*/       OPC_CheckType, MVT::i32,
/*10325*/       OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*10327*/       OPC_EmitConvertToTarget, 2,
/*10329*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADDr_ADDri_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (add:i32 IntRegs:i32:$src1, (add:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_s6ImmPred>>:$src3)) - Complexity = 10
                // Dst: (ADDr_ADDri_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3)
              /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::SUB),// ->10369
/*10342*/       OPC_RecordChild0, // #1 = $src2
/*10343*/       OPC_MoveChild, 0,
/*10345*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10348*/       OPC_CheckPredicate, 55, // Predicate_s6ImmPred
/*10350*/       OPC_MoveParent,
/*10351*/       OPC_RecordChild1, // #2 = $src3
/*10352*/       OPC_MoveParent,
/*10353*/       OPC_CheckType, MVT::i32,
/*10355*/       OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*10357*/       OPC_EmitConvertToTarget, 1,
/*10359*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADDr_SUBri_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 3, 2, 
                // Src: (add:i32 IntRegs:i32:$src1, (sub:i32 (imm:i32)<<P:Predicate_s6ImmPred>>:$src2, IntRegs:i32:$src3)) - Complexity = 10
                // Dst: (ADDr_SUBri_V4:i32 IntRegs:i32:$src1, (imm:i32):$src2, IntRegs:i32:$src3)
              0, // EndSwitchOpcode
/*10370*/   /*Scope*/ 33, /*->10404*/
/*10371*/     OPC_MoveChild, 0,
/*10373*/     OPC_CheckOpcode, TARGET_VAL(ISD::MUL),
/*10376*/     OPC_RecordChild0, // #0 = $src2
/*10377*/     OPC_RecordChild1, // #1 = $src3
/*10378*/     OPC_MoveParent,
/*10379*/     OPC_RecordChild1, // #2 = $src1
/*10380*/     OPC_MoveChild, 1,
/*10382*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10385*/     OPC_CheckPredicate, 18, // Predicate_u6ImmPred
/*10387*/     OPC_MoveParent,
/*10388*/     OPC_CheckType, MVT::i32,
/*10390*/     OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*10392*/     OPC_EmitConvertToTarget, 2,
/*10394*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADDi_MPYrr_V4), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 0, 1, 
              // Src: (add:i32 (mul:i32 IntRegs:i32:$src2, IntRegs:i32:$src3), (imm:i32)<<P:Predicate_u6ImmPred>>:$src1) - Complexity = 10
              // Dst: (ADDi_MPYrr_V4:i32 (imm:i32):$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*10404*/   /*Scope*/ 76, /*->10481*/
/*10405*/     OPC_RecordChild0, // #0 = $src1
/*10406*/     OPC_MoveChild, 1,
/*10408*/     OPC_CheckOpcode, TARGET_VAL(ISD::MUL),
/*10411*/     OPC_RecordChild0, // #1 = $src3
/*10412*/     OPC_RecordChild1, // #2 = $src2
/*10413*/     OPC_MoveChild, 1,
/*10415*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10418*/     OPC_Scope, 20, /*->10440*/ // 3 children in Scope
/*10420*/       OPC_CheckPredicate, 14, // Predicate_u6_2ImmPred
/*10422*/       OPC_MoveParent,
/*10423*/       OPC_MoveParent,
/*10424*/       OPC_CheckType, MVT::i32,
/*10426*/       OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*10428*/       OPC_EmitConvertToTarget, 2,
/*10430*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADDr_MPYir_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 3, 1, 
                // Src: (add:i32 IntRegs:i32:$src1, (mul:i32 IntRegs:i32:$src3, (imm:i32)<<P:Predicate_u6_2ImmPred>>:$src2)) - Complexity = 10
                // Dst: (ADDr_MPYir_V4:i32 IntRegs:i32:$src1, (imm:i32):$src2, IntRegs:i32:$src3)
/*10440*/     /*Scope*/ 20, /*->10461*/
/*10441*/       OPC_CheckPredicate, 18, // Predicate_u6ImmPred
/*10443*/       OPC_MoveParent,
/*10444*/       OPC_MoveParent,
/*10445*/       OPC_CheckType, MVT::i32,
/*10447*/       OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*10449*/       OPC_EmitConvertToTarget, 2,
/*10451*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADDr_MPYri_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (add:i32 IntRegs:i32:$src1, (mul:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u6ImmPred>>:$src3)) - Complexity = 10
                // Dst: (ADDr_MPYri_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3)
/*10461*/     /*Scope*/ 18, /*->10480*/
/*10462*/       OPC_CheckPredicate, 46, // Predicate_u8ImmPred
/*10464*/       OPC_MoveParent,
/*10465*/       OPC_MoveParent,
/*10466*/       OPC_CheckType, MVT::i32,
/*10468*/       OPC_EmitConvertToTarget, 2,
/*10470*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::MPYI_acc_ri), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (add:i32 IntRegs:i32:$src1, (mul:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u8ImmPred>>:$src3)) - Complexity = 10
                // Dst: (MPYI_acc_ri:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3)
/*10480*/     0, /*End of Scope*/
/*10481*/   /*Scope*/ 31, /*->10513*/
/*10482*/     OPC_MoveChild, 0,
/*10484*/     OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*10487*/     OPC_RecordChild0, // #0 = $src2
/*10488*/     OPC_RecordChild1, // #1 = $src1
/*10489*/     OPC_MoveParent,
/*10490*/     OPC_RecordChild1, // #2 = $src3
/*10491*/     OPC_MoveChild, 1,
/*10493*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10496*/     OPC_CheckPredicate, 1, // Predicate_s8ImmPred
/*10498*/     OPC_MoveParent,
/*10499*/     OPC_CheckType, MVT::i32,
/*10501*/     OPC_EmitConvertToTarget, 2,
/*10503*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADDri_acc), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 3, 
              // Src: (add:i32 (add:i32 IntRegs:i32:$src2, IntRegs:i32:$src1), (imm:i32)<<P:Predicate_s8ImmPred>>:$src3) - Complexity = 10
              // Dst: (ADDri_acc:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3)
/*10513*/   /*Scope*/ 31, /*->10545*/
/*10514*/     OPC_RecordChild0, // #0 = $src1
/*10515*/     OPC_MoveChild, 1,
/*10517*/     OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*10520*/     OPC_RecordChild0, // #1 = $src2
/*10521*/     OPC_RecordChild1, // #2 = $src3
/*10522*/     OPC_MoveChild, 1,
/*10524*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10527*/     OPC_CheckPredicate, 1, // Predicate_s8ImmPred
/*10529*/     OPC_MoveParent,
/*10530*/     OPC_MoveParent,
/*10531*/     OPC_CheckType, MVT::i32,
/*10533*/     OPC_EmitConvertToTarget, 2,
/*10535*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADDri_acc), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (add:i32 IntRegs:i32:$src1, (add:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_s8ImmPred>>:$src3)) - Complexity = 10
              // Dst: (ADDri_acc:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3)
/*10545*/   /*Scope*/ 56|128,1/*184*/, /*->10731*/
/*10547*/     OPC_MoveChild, 0,
/*10549*/     OPC_SwitchOpcode /*5 cases */, 28,  TARGET_VAL(ISD::SRL),// ->10581
/*10553*/       OPC_RecordChild0, // #0 = $src2
/*10554*/       OPC_RecordChild1, // #1 = $src3
/*10555*/       OPC_MoveChild, 1,
/*10557*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10560*/       OPC_CheckPredicate, 18, // Predicate_u6ImmPred
/*10562*/       OPC_CheckType, MVT::i32,
/*10564*/       OPC_MoveParent,
/*10565*/       OPC_MoveParent,
/*10566*/       OPC_RecordChild1, // #2 = $src1
/*10567*/       OPC_CheckType, MVT::i64,
/*10569*/       OPC_EmitConvertToTarget, 1,
/*10571*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::LSRd_ri_acc), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 0, 3, 
                // Src: (add:i64 (srl:i64 DoubleRegs:i64:$src2, (imm:i32)<<P:Predicate_u6ImmPred>>:$src3), DoubleRegs:i64:$src1) - Complexity = 10
                // Dst: (LSRd_ri_acc:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, (imm:i32):$src3)
              /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::SHL),// ->10612
/*10584*/       OPC_RecordChild0, // #0 = $src2
/*10585*/       OPC_RecordChild1, // #1 = $src3
/*10586*/       OPC_MoveChild, 1,
/*10588*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10591*/       OPC_CheckPredicate, 54, // Predicate_u3ImmPred
/*10593*/       OPC_CheckType, MVT::i32,
/*10595*/       OPC_MoveParent,
/*10596*/       OPC_MoveParent,
/*10597*/       OPC_RecordChild1, // #2 = $src1
/*10598*/       OPC_CheckType, MVT::i32,
/*10600*/       OPC_EmitConvertToTarget, 1,
/*10602*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADDASL), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 0, 3, 
                // Src: (add:i32 (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u3ImmPred>>:$src3), IntRegs:i32:$src1) - Complexity = 10
                // Dst: (ADDASL:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3)
              /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::ADD),// ->10643
/*10615*/       OPC_RecordChild0, // #0 = $src1
/*10616*/       OPC_RecordChild1, // #1 = $src3
/*10617*/       OPC_MoveChild, 1,
/*10619*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10622*/       OPC_CheckPredicate, 55, // Predicate_s6ImmPred
/*10624*/       OPC_MoveParent,
/*10625*/       OPC_MoveParent,
/*10626*/       OPC_RecordChild1, // #2 = $src2
/*10627*/       OPC_CheckType, MVT::i32,
/*10629*/       OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*10631*/       OPC_EmitConvertToTarget, 1,
/*10633*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADDr_ADDri_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
                // Src: (add:i32 (add:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s6ImmPred>>:$src3), IntRegs:i32:$src2) - Complexity = 10
                // Dst: (ADDr_ADDri_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3)
              /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::SUB),// ->10674
/*10646*/       OPC_RecordChild0, // #0 = $src2
/*10647*/       OPC_MoveChild, 0,
/*10649*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10652*/       OPC_CheckPredicate, 55, // Predicate_s6ImmPred
/*10654*/       OPC_MoveParent,
/*10655*/       OPC_RecordChild1, // #1 = $src3
/*10656*/       OPC_MoveParent,
/*10657*/       OPC_RecordChild1, // #2 = $src1
/*10658*/       OPC_CheckType, MVT::i32,
/*10660*/       OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*10662*/       OPC_EmitConvertToTarget, 0,
/*10664*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADDr_SUBri_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 1, 
                // Src: (add:i32 (sub:i32 (imm:i32)<<P:Predicate_s6ImmPred>>:$src2, IntRegs:i32:$src3), IntRegs:i32:$src1) - Complexity = 10
                // Dst: (ADDr_SUBri_V4:i32 IntRegs:i32:$src1, (imm:i32):$src2, IntRegs:i32:$src3)
              /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::MUL),// ->10730
/*10677*/       OPC_RecordChild0, // #0 = $src3
/*10678*/       OPC_RecordChild1, // #1 = $src2
/*10679*/       OPC_MoveChild, 1,
/*10681*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10684*/       OPC_Scope, 21, /*->10707*/ // 2 children in Scope
/*10686*/         OPC_CheckPredicate, 14, // Predicate_u6_2ImmPred
/*10688*/         OPC_MoveParent,
/*10689*/         OPC_MoveParent,
/*10690*/         OPC_RecordChild1, // #2 = $src1
/*10691*/         OPC_CheckType, MVT::i32,
/*10693*/         OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*10695*/         OPC_EmitConvertToTarget, 1,
/*10697*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADDr_MPYir_V4), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 0, 
                  // Src: (add:i32 (mul:i32 IntRegs:i32:$src3, (imm:i32)<<P:Predicate_u6_2ImmPred>>:$src2), IntRegs:i32:$src1) - Complexity = 10
                  // Dst: (ADDr_MPYir_V4:i32 IntRegs:i32:$src1, (imm:i32):$src2, IntRegs:i32:$src3)
/*10707*/       /*Scope*/ 21, /*->10729*/
/*10708*/         OPC_CheckPredicate, 18, // Predicate_u6ImmPred
/*10710*/         OPC_MoveParent,
/*10711*/         OPC_MoveParent,
/*10712*/         OPC_RecordChild1, // #2 = $src1
/*10713*/         OPC_CheckType, MVT::i32,
/*10715*/         OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*10717*/         OPC_EmitConvertToTarget, 1,
/*10719*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADDr_MPYri_V4), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 0, 3, 
                  // Src: (add:i32 (mul:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u6ImmPred>>:$src3), IntRegs:i32:$src1) - Complexity = 10
                  // Dst: (ADDr_MPYri_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3)
/*10729*/       0, /*End of Scope*/
              0, // EndSwitchOpcode
/*10731*/   /*Scope*/ 51, /*->10783*/
/*10732*/     OPC_RecordChild0, // #0 = $src1
/*10733*/     OPC_Scope, 24, /*->10759*/ // 2 children in Scope
/*10735*/       OPC_MoveChild, 1,
/*10737*/       OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10748*/       OPC_MoveParent,
/*10749*/       OPC_CheckType, MVT::i1,
/*10751*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::NOT_p), 0,
                    1/*#VTs*/, MVT::i1, 1/*#Ops*/, 0, 
                // Src: (add:i1 PredRegs:i1:$src1, -1:i1) - Complexity = 8
                // Dst: (NOT_p:i1 PredRegs:i1:$src1)
/*10759*/     /*Scope*/ 22, /*->10782*/
/*10760*/       OPC_RecordChild1, // #1 = $src2
/*10761*/       OPC_MoveChild, 1,
/*10763*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10766*/       OPC_CheckPredicate, 56, // Predicate_s16ImmPred
/*10768*/       OPC_MoveParent,
/*10769*/       OPC_CheckType, MVT::i32,
/*10771*/       OPC_EmitConvertToTarget, 1,
/*10773*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADD_ri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (add:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s16ImmPred>>:$src2) - Complexity = 7
                // Dst: (ADD_ri:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*10782*/     0, /*End of Scope*/
/*10783*/   /*Scope*/ 42, /*->10826*/
/*10784*/     OPC_MoveChild, 0,
/*10786*/     OPC_SwitchOpcode /*2 cases */, 16,  TARGET_VAL(ISD::MUL),// ->10806
/*10790*/       OPC_RecordChild0, // #0 = $src2
/*10791*/       OPC_RecordChild1, // #1 = $src3
/*10792*/       OPC_MoveParent,
/*10793*/       OPC_RecordChild1, // #2 = $src1
/*10794*/       OPC_CheckType, MVT::i32,
/*10796*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::MPYI_acc_rr), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 0, 1, 
                // Src: (add:i32 (mul:i32 IntRegs:i32:$src2, IntRegs:i32:$src3), IntRegs:i32:$src1) - Complexity = 6
                // Dst: (MPYI_acc_rr:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
              /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::ADD),// ->10825
/*10809*/       OPC_RecordChild0, // #0 = $src2
/*10810*/       OPC_RecordChild1, // #1 = $src3
/*10811*/       OPC_MoveParent,
/*10812*/       OPC_RecordChild1, // #2 = $src1
/*10813*/       OPC_CheckType, MVT::i32,
/*10815*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADDrr_acc), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 0, 1, 
                // Src: (add:i32 (add:i32 IntRegs:i32:$src2, IntRegs:i32:$src3), IntRegs:i32:$src1) - Complexity = 6
                // Dst: (ADDrr_acc:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
              0, // EndSwitchOpcode
/*10826*/   /*Scope*/ 57, /*->10884*/
/*10827*/     OPC_RecordChild0, // #0 = $src1
/*10828*/     OPC_MoveChild, 1,
/*10830*/     OPC_SwitchOpcode /*2 cases */, 31,  TARGET_VAL(ISD::MUL),// ->10865
/*10834*/       OPC_RecordChild0, // #1 = $src2
/*10835*/       OPC_RecordChild1, // #2 = $src3
/*10836*/       OPC_MoveParent,
/*10837*/       OPC_CheckType, MVT::i32,
/*10839*/       OPC_Scope, 12, /*->10853*/ // 2 children in Scope
/*10841*/         OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*10843*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADDr_MPYrr_V4), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (add:i32 IntRegs:i32:$src1, (mul:i32 IntRegs:i32:$src2, IntRegs:i32:$src3)) - Complexity = 6
                  // Dst: (ADDr_MPYrr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*10853*/       /*Scope*/ 10, /*->10864*/
/*10854*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::MPYI_acc_rr), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (add:i32 IntRegs:i32:$src1, (mul:i32 IntRegs:i32:$src2, IntRegs:i32:$src3)) - Complexity = 6
                  // Dst: (MPYI_acc_rr:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*10864*/       0, /*End of Scope*/
              /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::ADD),// ->10883
/*10868*/       OPC_RecordChild0, // #1 = $src2
/*10869*/       OPC_RecordChild1, // #2 = $src3
/*10870*/       OPC_MoveParent,
/*10871*/       OPC_CheckType, MVT::i32,
/*10873*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADDrr_acc), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (add:i32 IntRegs:i32:$src1, (add:i32 IntRegs:i32:$src2, IntRegs:i32:$src3)) - Complexity = 6
                // Dst: (ADDrr_acc:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
              0, // EndSwitchOpcode
/*10884*/   /*Scope*/ 23, /*->10908*/
/*10885*/     OPC_MoveChild, 0,
/*10887*/     OPC_CheckOpcode, TARGET_VAL(ISD::MUL),
/*10890*/     OPC_RecordChild0, // #0 = $src2
/*10891*/     OPC_RecordChild1, // #1 = $src3
/*10892*/     OPC_MoveParent,
/*10893*/     OPC_RecordChild1, // #2 = $src1
/*10894*/     OPC_CheckType, MVT::i32,
/*10896*/     OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*10898*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADDr_MPYrr_V4), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 0, 1, 
              // Src: (add:i32 (mul:i32 IntRegs:i32:$src2, IntRegs:i32:$src3), IntRegs:i32:$src1) - Complexity = 6
              // Dst: (ADDr_MPYrr_V4:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*10908*/   /*Scope*/ 26, /*->10935*/
/*10909*/     OPC_RecordChild0, // #0 = $src1
/*10910*/     OPC_RecordChild1, // #1 = $src2
/*10911*/     OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->10923
/*10914*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADD_rr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 3
                // Dst: (ADD_rr:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
              /*SwitchType*/ 9,  MVT::i64,// ->10934
/*10925*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADD64_rr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 3
                // Dst: (ADD64_rr:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
              0, // EndSwitchType
/*10935*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 68|128,2/*324*/,  TARGET_VAL(ISD::SUB),// ->11264
/*10940*/   OPC_Scope, 90, /*->11032*/ // 4 children in Scope
/*10942*/     OPC_MoveChild, 0,
/*10944*/     OPC_SwitchOpcode /*2 cases */, 40,  TARGET_VAL(ISD::SHL),// ->10988
/*10948*/       OPC_RecordChild0, // #0 = $src2
/*10949*/       OPC_RecordChild1, // #1 = $src3
/*10950*/       OPC_MoveChild, 1,
/*10952*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10955*/       OPC_CheckPredicate, 53, // Predicate_u5ImmPred
/*10957*/       OPC_CheckType, MVT::i32,
/*10959*/       OPC_MoveParent,
/*10960*/       OPC_MoveParent,
/*10961*/       OPC_RecordChild1, // #2 = $src1
/*10962*/       OPC_MoveChild, 1,
/*10964*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10967*/       OPC_CheckPredicate, 46, // Predicate_u8ImmPred
/*10969*/       OPC_MoveParent,
/*10970*/       OPC_CheckType, MVT::i32,
/*10972*/       OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*10974*/       OPC_EmitConvertToTarget, 2,
/*10976*/       OPC_EmitConvertToTarget, 1,
/*10978*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::SUBi_ASLri_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 0, 4, 
                // Src: (sub:i32 (shl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u5ImmPred>>:$src3), (imm:i32)<<P:Predicate_u8ImmPred>>:$src1) - Complexity = 14
                // Dst: (SUBi_ASLri_V4:i32 (imm:i32):$src1, IntRegs:i32:$src2, (imm:i32):$src3)
              /*SwitchOpcode*/ 40,  TARGET_VAL(ISD::SRL),// ->11031
/*10991*/       OPC_RecordChild0, // #0 = $src2
/*10992*/       OPC_RecordChild1, // #1 = $src3
/*10993*/       OPC_MoveChild, 1,
/*10995*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10998*/       OPC_CheckPredicate, 53, // Predicate_u5ImmPred
/*11000*/       OPC_CheckType, MVT::i32,
/*11002*/       OPC_MoveParent,
/*11003*/       OPC_MoveParent,
/*11004*/       OPC_RecordChild1, // #2 = $src1
/*11005*/       OPC_MoveChild, 1,
/*11007*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11010*/       OPC_CheckPredicate, 46, // Predicate_u8ImmPred
/*11012*/       OPC_MoveParent,
/*11013*/       OPC_CheckType, MVT::i32,
/*11015*/       OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*11017*/       OPC_EmitConvertToTarget, 2,
/*11019*/       OPC_EmitConvertToTarget, 1,
/*11021*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::SUBi_LSRri_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 0, 4, 
                // Src: (sub:i32 (srl:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u5ImmPred>>:$src3), (imm:i32)<<P:Predicate_u8ImmPred>>:$src1) - Complexity = 14
                // Dst: (SUBi_LSRri_V4:i32 (imm:i32):$src1, IntRegs:i32:$src2, (imm:i32):$src3)
              0, // EndSwitchOpcode
/*11032*/   /*Scope*/ 127, /*->11160*/
/*11033*/     OPC_RecordChild0, // #0 = $src1
/*11034*/     OPC_MoveChild, 1,
/*11036*/     OPC_SwitchOpcode /*2 cases */, 91,  TARGET_VAL(ISD::MUL),// ->11131
/*11040*/       OPC_Scope, 62, /*->11104*/ // 2 children in Scope
/*11042*/         OPC_MoveChild, 0,
/*11044*/         OPC_SwitchOpcode /*2 cases */, 26,  TARGET_VAL(ISD::SIGN_EXTEND),// ->11074
/*11048*/           OPC_RecordChild0, // #1 = $src2
/*11049*/           OPC_CheckChild0Type, MVT::i32,
/*11051*/           OPC_MoveParent,
/*11052*/           OPC_MoveChild, 1,
/*11054*/           OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*11057*/           OPC_RecordChild0, // #2 = $src3
/*11058*/           OPC_CheckChild0Type, MVT::i32,
/*11060*/           OPC_MoveParent,
/*11061*/           OPC_MoveParent,
/*11062*/           OPC_CheckType, MVT::i64,
/*11064*/           OPC_MorphNodeTo, TARGET_VAL(Hexagon::MPY64_sub), 0,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (sub:i64 DoubleRegs:i64:$src1, (mul:i64 (sext:i64 IntRegs:i32:$src2), (sext:i64 IntRegs:i32:$src3))) - Complexity = 12
                    // Dst: (MPY64_sub:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
                  /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::ANY_EXTEND),// ->11103
/*11077*/           OPC_RecordChild0, // #1 = $src2
/*11078*/           OPC_CheckChild0Type, MVT::i32,
/*11080*/           OPC_MoveParent,
/*11081*/           OPC_MoveChild, 1,
/*11083*/           OPC_CheckOpcode, TARGET_VAL(ISD::ANY_EXTEND),
/*11086*/           OPC_RecordChild0, // #2 = $src3
/*11087*/           OPC_CheckChild0Type, MVT::i32,
/*11089*/           OPC_MoveParent,
/*11090*/           OPC_MoveParent,
/*11091*/           OPC_CheckType, MVT::i64,
/*11093*/           OPC_MorphNodeTo, TARGET_VAL(Hexagon::MPYU64_sub), 0,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (sub:i64 DoubleRegs:i64:$src1, (mul:i64 (anyext:i64 IntRegs:i32:$src2), (anyext:i64 IntRegs:i32:$src3))) - Complexity = 12
                    // Dst: (MPYU64_sub:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
                  0, // EndSwitchOpcode
/*11104*/       /*Scope*/ 25, /*->11130*/
/*11105*/         OPC_RecordChild0, // #1 = $src2
/*11106*/         OPC_RecordChild1, // #2 = $src3
/*11107*/         OPC_MoveChild, 1,
/*11109*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11112*/         OPC_CheckPredicate, 46, // Predicate_u8ImmPred
/*11114*/         OPC_MoveParent,
/*11115*/         OPC_MoveParent,
/*11116*/         OPC_CheckType, MVT::i32,
/*11118*/         OPC_EmitConvertToTarget, 2,
/*11120*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::MPYI_sub_ri), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                  // Src: (sub:i32 IntRegs:i32:$src1, (mul:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_u8ImmPred>>:$src3)) - Complexity = 10
                  // Dst: (MPYI_sub_ri:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3)
/*11130*/       0, /*End of Scope*/
              /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::ADD),// ->11159
/*11134*/       OPC_RecordChild0, // #1 = $src2
/*11135*/       OPC_RecordChild1, // #2 = $src3
/*11136*/       OPC_MoveChild, 1,
/*11138*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11141*/       OPC_CheckPredicate, 1, // Predicate_s8ImmPred
/*11143*/       OPC_MoveParent,
/*11144*/       OPC_MoveParent,
/*11145*/       OPC_CheckType, MVT::i32,
/*11147*/       OPC_EmitConvertToTarget, 2,
/*11149*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::SUBri_acc), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (sub:i32 IntRegs:i32:$src1, (add:i32 IntRegs:i32:$src2, (imm:i32)<<P:Predicate_s8ImmPred>>:$src3)) - Complexity = 10
                // Dst: (SUBri_acc:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3)
              0, // EndSwitchOpcode
/*11160*/   /*Scope*/ 51, /*->11212*/
/*11161*/     OPC_MoveChild, 0,
/*11163*/     OPC_Scope, 31, /*->11196*/ // 2 children in Scope
/*11165*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*11168*/       OPC_RecordChild0, // #0 = $src1
/*11169*/       OPC_RecordChild1, // #1 = $src2
/*11170*/       OPC_MoveChild, 1,
/*11172*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11175*/       OPC_CheckPredicate, 55, // Predicate_s6ImmPred
/*11177*/       OPC_MoveParent,
/*11178*/       OPC_MoveParent,
/*11179*/       OPC_RecordChild1, // #2 = $src3
/*11180*/       OPC_CheckType, MVT::i32,
/*11182*/       OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*11184*/       OPC_EmitConvertToTarget, 1,
/*11186*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADDri_SUBr_V4), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 3, 2, 
                // Src: (sub:i32 (add:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s6ImmPred>>:$src2), IntRegs:i32:$src3) - Complexity = 10
                // Dst: (ADDri_SUBr_V4:i32 IntRegs:i32:$src1, (imm:i32):$src2, IntRegs:i32:$src3)
/*11196*/     /*Scope*/ 14, /*->11211*/
/*11197*/       OPC_CheckInteger, 0, 
/*11199*/       OPC_MoveParent,
/*11200*/       OPC_RecordChild1, // #0 = $src1
/*11201*/       OPC_CheckType, MVT::i32,
/*11203*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::NEG), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i32 0:i32, IntRegs:i32:$src1) - Complexity = 8
                // Dst: (NEG:i32 IntRegs:i32:$src1)
/*11211*/     0, /*End of Scope*/
/*11212*/   /*Scope*/ 50, /*->11263*/
/*11213*/     OPC_RecordChild0, // #0 = $src1
/*11214*/     OPC_Scope, 20, /*->11236*/ // 2 children in Scope
/*11216*/       OPC_MoveChild, 1,
/*11218*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*11221*/       OPC_RecordChild0, // #1 = $src2
/*11222*/       OPC_RecordChild1, // #2 = $src3
/*11223*/       OPC_MoveParent,
/*11224*/       OPC_CheckType, MVT::i32,
/*11226*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::SUBrr_acc), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (sub:i32 IntRegs:i32:$src1, (add:i32 IntRegs:i32:$src2, IntRegs:i32:$src3)) - Complexity = 6
                // Dst: (SUBrr_acc:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*11236*/     /*Scope*/ 25, /*->11262*/
/*11237*/       OPC_RecordChild1, // #1 = $src2
/*11238*/       OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->11250
/*11241*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::SUB_rr), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i32 IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 3
                  // Dst: (SUB_rr:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
                /*SwitchType*/ 9,  MVT::i64,// ->11261
/*11252*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::SUB64_rr), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 3
                  // Dst: (SUB64_rr:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
                0, // EndSwitchType
/*11262*/     0, /*End of Scope*/
/*11263*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 96|128,90/*11616*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->22884
/*11268*/   OPC_MoveChild, 0,
/*11270*/   OPC_Scope, 31, /*->11303*/ // 654 children in Scope
/*11272*/     OPC_CheckInteger, 68|128,1/*196*/, 
/*11275*/     OPC_MoveParent,
/*11276*/     OPC_RecordChild1, // #0 = $src1
/*11277*/     OPC_MoveChild, 1,
/*11279*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11282*/     OPC_MoveParent,
/*11283*/     OPC_RecordChild2, // #1 = $src2
/*11284*/     OPC_MoveChild, 2,
/*11286*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11289*/     OPC_MoveParent,
/*11290*/     OPC_EmitConvertToTarget, 0,
/*11292*/     OPC_EmitConvertToTarget, 1,
/*11294*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_combineii), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_wo_chain:i64 196:iPTR, (imm:i32):$src1, (imm:i32):$src2) - Complexity = 14
              // Dst: (Hexagon_A2_combineii:i64 (imm:i32):$src1, (imm:i32):$src2)
/*11303*/   /*Scope*/ 33, /*->11337*/
/*11304*/     OPC_CheckInteger, 100|128,2/*356*/, 
/*11307*/     OPC_MoveParent,
/*11308*/     OPC_RecordChild1, // #0 = $src1
/*11309*/     OPC_RecordChild2, // #1 = $src2
/*11310*/     OPC_MoveChild, 2,
/*11312*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11315*/     OPC_MoveParent,
/*11316*/     OPC_RecordChild3, // #2 = $src3
/*11317*/     OPC_MoveChild, 3,
/*11319*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11322*/     OPC_MoveParent,
/*11323*/     OPC_EmitConvertToTarget, 1,
/*11325*/     OPC_EmitConvertToTarget, 2,
/*11327*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_muxii), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 3, 4, 
              // Src: (intrinsic_wo_chain:i32 356:iPTR, IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3) - Complexity = 14
              // Dst: (Hexagon_C2_muxii:i32 IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3)
/*11337*/   /*Scope*/ 33, /*->11371*/
/*11338*/     OPC_CheckInteger, 86|128,5/*726*/, 
/*11341*/     OPC_MoveParent,
/*11342*/     OPC_RecordChild1, // #0 = $src1
/*11343*/     OPC_RecordChild2, // #1 = $src2
/*11344*/     OPC_MoveChild, 2,
/*11346*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11349*/     OPC_MoveParent,
/*11350*/     OPC_RecordChild3, // #2 = $src3
/*11351*/     OPC_MoveChild, 3,
/*11353*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11356*/     OPC_MoveParent,
/*11357*/     OPC_EmitConvertToTarget, 1,
/*11359*/     OPC_EmitConvertToTarget, 2,
/*11361*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_extractu), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 3, 4, 
              // Src: (intrinsic_wo_chain:i32 726:iPTR, IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3) - Complexity = 14
              // Dst: (Hexagon_S2_extractu:i32 IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3)
/*11371*/   /*Scope*/ 33, /*->11405*/
/*11372*/     OPC_CheckInteger, 88|128,5/*728*/, 
/*11375*/     OPC_MoveParent,
/*11376*/     OPC_RecordChild1, // #0 = $src1
/*11377*/     OPC_RecordChild2, // #1 = $src2
/*11378*/     OPC_MoveChild, 2,
/*11380*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11383*/     OPC_MoveParent,
/*11384*/     OPC_RecordChild3, // #2 = $src3
/*11385*/     OPC_MoveChild, 3,
/*11387*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11390*/     OPC_MoveParent,
/*11391*/     OPC_EmitConvertToTarget, 1,
/*11393*/     OPC_EmitConvertToTarget, 2,
/*11395*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_extractup), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 3, 4, 
              // Src: (intrinsic_wo_chain:i64 728:iPTR, DoubleRegs:i64:$src1, (imm:i32):$src2, (imm:i32):$src3) - Complexity = 14
              // Dst: (Hexagon_S2_extractup:i64 DoubleRegs:i64:$src1, (imm:i32):$src2, (imm:i32):$src3)
/*11405*/   /*Scope*/ 35, /*->11441*/
/*11406*/     OPC_CheckInteger, 90|128,5/*730*/, 
/*11409*/     OPC_MoveParent,
/*11410*/     OPC_RecordChild1, // #0 = $dst2
/*11411*/     OPC_RecordChild2, // #1 = $src1
/*11412*/     OPC_RecordChild3, // #2 = $src2
/*11413*/     OPC_MoveChild, 3,
/*11415*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11418*/     OPC_MoveParent,
/*11419*/     OPC_RecordChild4, // #3 = $src3
/*11420*/     OPC_MoveChild, 4,
/*11422*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11425*/     OPC_MoveParent,
/*11426*/     OPC_EmitConvertToTarget, 2,
/*11428*/     OPC_EmitConvertToTarget, 3,
/*11430*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_S2_insert), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
              // Src: (intrinsic_wo_chain:i32 730:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3) - Complexity = 14
              // Dst: (HEXAGON_S2_insert:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3)
/*11441*/   /*Scope*/ 35, /*->11477*/
/*11442*/     OPC_CheckInteger, 92|128,5/*732*/, 
/*11445*/     OPC_MoveParent,
/*11446*/     OPC_RecordChild1, // #0 = $dst2
/*11447*/     OPC_RecordChild2, // #1 = $src1
/*11448*/     OPC_RecordChild3, // #2 = $src2
/*11449*/     OPC_MoveChild, 3,
/*11451*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11454*/     OPC_MoveParent,
/*11455*/     OPC_RecordChild4, // #3 = $src3
/*11456*/     OPC_MoveChild, 4,
/*11458*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11461*/     OPC_MoveParent,
/*11462*/     OPC_EmitConvertToTarget, 2,
/*11464*/     OPC_EmitConvertToTarget, 3,
/*11466*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_S2_insertp), 0,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 1, 4, 5, 
              // Src: (intrinsic_wo_chain:i64 732:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2, (imm:i32):$src3) - Complexity = 14
              // Dst: (HEXAGON_S2_insertp:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2, (imm:i32):$src3)
/*11477*/   /*Scope*/ 35, /*->11513*/
/*11478*/     OPC_CheckInteger, 16|128,6/*784*/, 
/*11481*/     OPC_MoveParent,
/*11482*/     OPC_RecordChild1, // #0 = $dst2
/*11483*/     OPC_RecordChild2, // #1 = $src1
/*11484*/     OPC_RecordChild3, // #2 = $src2
/*11485*/     OPC_MoveChild, 3,
/*11487*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11490*/     OPC_MoveParent,
/*11491*/     OPC_RecordChild4, // #3 = $src3
/*11492*/     OPC_MoveChild, 4,
/*11494*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11497*/     OPC_MoveParent,
/*11498*/     OPC_EmitConvertToTarget, 2,
/*11500*/     OPC_EmitConvertToTarget, 3,
/*11502*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_S2_tableidxb_goodsyntax), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
              // Src: (intrinsic_wo_chain:i32 784:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3) - Complexity = 14
              // Dst: (HEXAGON_S2_tableidxb_goodsyntax:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3)
/*11513*/   /*Scope*/ 35, /*->11549*/
/*11514*/     OPC_CheckInteger, 17|128,6/*785*/, 
/*11517*/     OPC_MoveParent,
/*11518*/     OPC_RecordChild1, // #0 = $dst2
/*11519*/     OPC_RecordChild2, // #1 = $src1
/*11520*/     OPC_RecordChild3, // #2 = $src2
/*11521*/     OPC_MoveChild, 3,
/*11523*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11526*/     OPC_MoveParent,
/*11527*/     OPC_RecordChild4, // #3 = $src3
/*11528*/     OPC_MoveChild, 4,
/*11530*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11533*/     OPC_MoveParent,
/*11534*/     OPC_EmitConvertToTarget, 2,
/*11536*/     OPC_EmitConvertToTarget, 3,
/*11538*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_S2_tableidxd_goodsyntax), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
              // Src: (intrinsic_wo_chain:i32 785:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3) - Complexity = 14
              // Dst: (HEXAGON_S2_tableidxd_goodsyntax:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3)
/*11549*/   /*Scope*/ 35, /*->11585*/
/*11550*/     OPC_CheckInteger, 18|128,6/*786*/, 
/*11553*/     OPC_MoveParent,
/*11554*/     OPC_RecordChild1, // #0 = $dst2
/*11555*/     OPC_RecordChild2, // #1 = $src1
/*11556*/     OPC_RecordChild3, // #2 = $src2
/*11557*/     OPC_MoveChild, 3,
/*11559*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11562*/     OPC_MoveParent,
/*11563*/     OPC_RecordChild4, // #3 = $src3
/*11564*/     OPC_MoveChild, 4,
/*11566*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11569*/     OPC_MoveParent,
/*11570*/     OPC_EmitConvertToTarget, 2,
/*11572*/     OPC_EmitConvertToTarget, 3,
/*11574*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_S2_tableidxh_goodsyntax), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
              // Src: (intrinsic_wo_chain:i32 786:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3) - Complexity = 14
              // Dst: (HEXAGON_S2_tableidxh_goodsyntax:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3)
/*11585*/   /*Scope*/ 35, /*->11621*/
/*11586*/     OPC_CheckInteger, 19|128,6/*787*/, 
/*11589*/     OPC_MoveParent,
/*11590*/     OPC_RecordChild1, // #0 = $dst2
/*11591*/     OPC_RecordChild2, // #1 = $src1
/*11592*/     OPC_RecordChild3, // #2 = $src2
/*11593*/     OPC_MoveChild, 3,
/*11595*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11598*/     OPC_MoveParent,
/*11599*/     OPC_RecordChild4, // #3 = $src3
/*11600*/     OPC_MoveChild, 4,
/*11602*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11605*/     OPC_MoveParent,
/*11606*/     OPC_EmitConvertToTarget, 2,
/*11608*/     OPC_EmitConvertToTarget, 3,
/*11610*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_S2_tableidxw_goodsyntax), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
              // Src: (intrinsic_wo_chain:i32 787:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3) - Complexity = 14
              // Dst: (HEXAGON_S2_tableidxw_goodsyntax:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2, (imm:i32):$src3)
/*11621*/   /*Scope*/ 23, /*->11645*/
/*11622*/     OPC_CheckInteger, 54|128,1/*182*/, 
/*11625*/     OPC_MoveParent,
/*11626*/     OPC_RecordChild1, // #0 = $src1
/*11627*/     OPC_RecordChild2, // #1 = $src2
/*11628*/     OPC_MoveChild, 2,
/*11630*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11633*/     OPC_MoveParent,
/*11634*/     OPC_EmitConvertToTarget, 1,
/*11636*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_addi), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i32 182:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_A2_addi:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*11645*/   /*Scope*/ 23, /*->11669*/
/*11646*/     OPC_CheckInteger, 60|128,1/*188*/, 
/*11649*/     OPC_MoveParent,
/*11650*/     OPC_RecordChild1, // #0 = $src1
/*11651*/     OPC_RecordChild2, // #1 = $src2
/*11652*/     OPC_MoveChild, 2,
/*11654*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11657*/     OPC_MoveParent,
/*11658*/     OPC_EmitConvertToTarget, 1,
/*11660*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_andir), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i32 188:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_A2_andir:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*11669*/   /*Scope*/ 23, /*->11693*/
/*11670*/     OPC_CheckInteger, 84|128,1/*212*/, 
/*11673*/     OPC_MoveParent,
/*11674*/     OPC_RecordChild1, // #0 = $src1
/*11675*/     OPC_RecordChild2, // #1 = $src2
/*11676*/     OPC_MoveChild, 2,
/*11678*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11681*/     OPC_MoveParent,
/*11682*/     OPC_EmitConvertToTarget, 1,
/*11684*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_orir), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i32 212:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_A2_orir:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*11693*/   /*Scope*/ 23, /*->11717*/
/*11694*/     OPC_CheckInteger, 105|128,1/*233*/, 
/*11697*/     OPC_MoveParent,
/*11698*/     OPC_RecordChild1, // #0 = $src1
/*11699*/     OPC_MoveChild, 1,
/*11701*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11704*/     OPC_MoveParent,
/*11705*/     OPC_RecordChild2, // #1 = $src2
/*11706*/     OPC_EmitConvertToTarget, 0,
/*11708*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_subri), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (intrinsic_wo_chain:i32 233:iPTR, (imm:i32):$src1, IntRegs:i32:$src2) - Complexity = 11
              // Dst: (Hexagon_A2_subri:i32 (imm:i32):$src1, IntRegs:i32:$src2)
/*11717*/   /*Scope*/ 23, /*->11741*/
/*11718*/     OPC_CheckInteger, 122|128,1/*250*/, 
/*11721*/     OPC_MoveParent,
/*11722*/     OPC_RecordChild1, // #0 = $src1
/*11723*/     OPC_RecordChild2, // #1 = $src2
/*11724*/     OPC_MoveChild, 2,
/*11726*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11729*/     OPC_MoveParent,
/*11730*/     OPC_EmitConvertToTarget, 1,
/*11732*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_tfril), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i32 250:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_A2_tfril:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*11741*/   /*Scope*/ 23, /*->11765*/
/*11742*/     OPC_CheckInteger, 121|128,1/*249*/, 
/*11745*/     OPC_MoveParent,
/*11746*/     OPC_RecordChild1, // #0 = $src1
/*11747*/     OPC_RecordChild2, // #1 = $src2
/*11748*/     OPC_MoveChild, 2,
/*11750*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11753*/     OPC_MoveParent,
/*11754*/     OPC_EmitConvertToTarget, 1,
/*11756*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_tfrih), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i32 249:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_A2_tfrih:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*11765*/   /*Scope*/ 21, /*->11787*/
/*11766*/     OPC_CheckInteger, 125|128,1/*253*/, 
/*11769*/     OPC_MoveParent,
/*11770*/     OPC_RecordChild1, // #0 = $src1
/*11771*/     OPC_MoveChild, 1,
/*11773*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11776*/     OPC_MoveParent,
/*11777*/     OPC_EmitConvertToTarget, 0,
/*11779*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_tfrsi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_wo_chain:i32 253:iPTR, (imm:i32):$src1) - Complexity = 11
              // Dst: (Hexagon_A2_tfrsi:i32 (imm:i32):$src1)
/*11787*/   /*Scope*/ 21, /*->11809*/
/*11788*/     OPC_CheckInteger, 124|128,1/*252*/, 
/*11791*/     OPC_MoveParent,
/*11792*/     OPC_RecordChild1, // #0 = $src1
/*11793*/     OPC_MoveChild, 1,
/*11795*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11798*/     OPC_MoveParent,
/*11799*/     OPC_EmitConvertToTarget, 0,
/*11801*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_tfrpi), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (intrinsic_wo_chain:i64 252:iPTR, (imm:i32):$src1) - Complexity = 11
              // Dst: (Hexagon_A2_tfrpi:i64 (imm:i32):$src1)
/*11809*/   /*Scope*/ 25, /*->11835*/
/*11810*/     OPC_CheckInteger, 102|128,2/*358*/, 
/*11813*/     OPC_MoveParent,
/*11814*/     OPC_RecordChild1, // #0 = $src1
/*11815*/     OPC_RecordChild2, // #1 = $src2
/*11816*/     OPC_MoveChild, 2,
/*11818*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11821*/     OPC_MoveParent,
/*11822*/     OPC_RecordChild3, // #2 = $src3
/*11823*/     OPC_EmitConvertToTarget, 1,
/*11825*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_muxri), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 3, 2, 
              // Src: (intrinsic_wo_chain:i32 358:iPTR, IntRegs:i32:$src1, (imm:i32):$src2, IntRegs:i32:$src3) - Complexity = 11
              // Dst: (Hexagon_C2_muxri:i32 IntRegs:i32:$src1, (imm:i32):$src2, IntRegs:i32:$src3)
/*11835*/   /*Scope*/ 25, /*->11861*/
/*11836*/     OPC_CheckInteger, 101|128,2/*357*/, 
/*11839*/     OPC_MoveParent,
/*11840*/     OPC_RecordChild1, // #0 = $src1
/*11841*/     OPC_RecordChild2, // #1 = $src2
/*11842*/     OPC_RecordChild3, // #2 = $src3
/*11843*/     OPC_MoveChild, 3,
/*11845*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11848*/     OPC_MoveParent,
/*11849*/     OPC_EmitConvertToTarget, 2,
/*11851*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_muxir), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 357:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3) - Complexity = 11
              // Dst: (Hexagon_C2_muxir:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3)
/*11861*/   /*Scope*/ 23, /*->11885*/
/*11862*/     OPC_CheckInteger, 86|128,2/*342*/, 
/*11865*/     OPC_MoveParent,
/*11866*/     OPC_RecordChild1, // #0 = $src1
/*11867*/     OPC_RecordChild2, // #1 = $src2
/*11868*/     OPC_MoveChild, 2,
/*11870*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11873*/     OPC_MoveParent,
/*11874*/     OPC_EmitConvertToTarget, 1,
/*11876*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_cmpeqi), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i1 342:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_C2_cmpeqi:i1 IntRegs:i32:$src1, (imm:i32):$src2)
/*11885*/   /*Scope*/ 23, /*->11909*/
/*11886*/     OPC_CheckInteger, 88|128,2/*344*/, 
/*11889*/     OPC_MoveParent,
/*11890*/     OPC_RecordChild1, // #0 = $src1
/*11891*/     OPC_RecordChild2, // #1 = $src2
/*11892*/     OPC_MoveChild, 2,
/*11894*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11897*/     OPC_MoveParent,
/*11898*/     OPC_EmitConvertToTarget, 1,
/*11900*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_cmpgei), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i1 344:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_C2_cmpgei:i1 IntRegs:i32:$src1, (imm:i32):$src2)
/*11909*/   /*Scope*/ 23, /*->11933*/
/*11910*/     OPC_CheckInteger, 89|128,2/*345*/, 
/*11913*/     OPC_MoveParent,
/*11914*/     OPC_RecordChild1, // #0 = $src1
/*11915*/     OPC_RecordChild2, // #1 = $src2
/*11916*/     OPC_MoveChild, 2,
/*11918*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11921*/     OPC_MoveParent,
/*11922*/     OPC_EmitConvertToTarget, 1,
/*11924*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_cmpgeui), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i1 345:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_C2_cmpgeui:i1 IntRegs:i32:$src1, (imm:i32):$src2)
/*11933*/   /*Scope*/ 23, /*->11957*/
/*11934*/     OPC_CheckInteger, 91|128,2/*347*/, 
/*11937*/     OPC_MoveParent,
/*11938*/     OPC_RecordChild1, // #0 = $src1
/*11939*/     OPC_RecordChild2, // #1 = $src2
/*11940*/     OPC_MoveChild, 2,
/*11942*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11945*/     OPC_MoveParent,
/*11946*/     OPC_EmitConvertToTarget, 1,
/*11948*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_cmpgti), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i1 347:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_C2_cmpgti:i1 IntRegs:i32:$src1, (imm:i32):$src2)
/*11957*/   /*Scope*/ 23, /*->11981*/
/*11958*/     OPC_CheckInteger, 94|128,2/*350*/, 
/*11961*/     OPC_MoveParent,
/*11962*/     OPC_RecordChild1, // #0 = $src1
/*11963*/     OPC_RecordChild2, // #1 = $src2
/*11964*/     OPC_MoveChild, 2,
/*11966*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11969*/     OPC_MoveParent,
/*11970*/     OPC_EmitConvertToTarget, 1,
/*11972*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_cmpgtui), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i1 350:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_C2_cmpgtui:i1 IntRegs:i32:$src1, (imm:i32):$src2)
/*11981*/   /*Scope*/ 25, /*->12007*/
/*11982*/     OPC_CheckInteger, 1|128,3/*385*/, 
/*11985*/     OPC_MoveParent,
/*11986*/     OPC_RecordChild1, // #0 = $dst2
/*11987*/     OPC_RecordChild2, // #1 = $src2
/*11988*/     OPC_RecordChild3, // #2 = $src3
/*11989*/     OPC_MoveChild, 3,
/*11991*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11994*/     OPC_MoveParent,
/*11995*/     OPC_EmitConvertToTarget, 2,
/*11997*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_accii), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 385:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src2, (imm:i32):$src3) - Complexity = 11
              // Dst: (Hexagon_M2_accii:i32 IntRegs:i32:$dst2, IntRegs:i32:$src2, (imm:i32):$src3)
/*12007*/   /*Scope*/ 25, /*->12033*/
/*12008*/     OPC_CheckInteger, 88|128,4/*600*/, 
/*12011*/     OPC_MoveParent,
/*12012*/     OPC_RecordChild1, // #0 = $dst2
/*12013*/     OPC_RecordChild2, // #1 = $src2
/*12014*/     OPC_RecordChild3, // #2 = $src3
/*12015*/     OPC_MoveChild, 3,
/*12017*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12020*/     OPC_MoveParent,
/*12021*/     OPC_EmitConvertToTarget, 2,
/*12023*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_naccii), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 600:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src2, (imm:i32):$src3) - Complexity = 11
              // Dst: (Hexagon_M2_naccii:i32 IntRegs:i32:$dst2, IntRegs:i32:$src2, (imm:i32):$src3)
/*12033*/   /*Scope*/ 25, /*->12059*/
/*12034*/     OPC_CheckInteger, 33|128,3/*417*/, 
/*12037*/     OPC_MoveParent,
/*12038*/     OPC_RecordChild1, // #0 = $dst2
/*12039*/     OPC_RecordChild2, // #1 = $src2
/*12040*/     OPC_RecordChild3, // #2 = $src3
/*12041*/     OPC_MoveChild, 3,
/*12043*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12046*/     OPC_MoveParent,
/*12047*/     OPC_EmitConvertToTarget, 2,
/*12049*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_macsip), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 417:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src2, (imm:i32):$src3) - Complexity = 11
              // Dst: (Hexagon_M2_macsip:i32 IntRegs:i32:$dst2, IntRegs:i32:$src2, (imm:i32):$src3)
/*12059*/   /*Scope*/ 25, /*->12085*/
/*12060*/     OPC_CheckInteger, 32|128,3/*416*/, 
/*12063*/     OPC_MoveParent,
/*12064*/     OPC_RecordChild1, // #0 = $dst2
/*12065*/     OPC_RecordChild2, // #1 = $src2
/*12066*/     OPC_RecordChild3, // #2 = $src3
/*12067*/     OPC_MoveChild, 3,
/*12069*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12072*/     OPC_MoveParent,
/*12073*/     OPC_EmitConvertToTarget, 2,
/*12075*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_macsin), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 416:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src2, (imm:i32):$src3) - Complexity = 11
              // Dst: (Hexagon_M2_macsin:i32 IntRegs:i32:$dst2, IntRegs:i32:$src2, (imm:i32):$src3)
/*12085*/   /*Scope*/ 23, /*->12109*/
/*12086*/     OPC_CheckInteger, 83|128,2/*339*/, 
/*12089*/     OPC_MoveParent,
/*12090*/     OPC_RecordChild1, // #0 = $src1
/*12091*/     OPC_RecordChild2, // #1 = $src2
/*12092*/     OPC_MoveChild, 2,
/*12094*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12097*/     OPC_MoveParent,
/*12098*/     OPC_EmitConvertToTarget, 1,
/*12100*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_C2_bitsclri), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i1 339:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (HEXAGON_C2_bitsclri:i1 IntRegs:i32:$src1, (imm:i32):$src2)
/*12109*/   /*Scope*/ 23, /*->12133*/
/*12110*/     OPC_CheckInteger, 8|128,6/*776*/, 
/*12113*/     OPC_MoveParent,
/*12114*/     OPC_RecordChild1, // #0 = $src1
/*12115*/     OPC_RecordChild2, // #1 = $src2
/*12116*/     OPC_MoveChild, 2,
/*12118*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12121*/     OPC_MoveParent,
/*12122*/     OPC_EmitConvertToTarget, 1,
/*12124*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_setbit_i), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i32 776:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_setbit_i:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*12133*/   /*Scope*/ 23, /*->12157*/
/*12134*/     OPC_CheckInteger, 20|128,6/*788*/, 
/*12137*/     OPC_MoveParent,
/*12138*/     OPC_RecordChild1, // #0 = $src1
/*12139*/     OPC_RecordChild2, // #1 = $src2
/*12140*/     OPC_MoveChild, 2,
/*12142*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12145*/     OPC_MoveParent,
/*12146*/     OPC_EmitConvertToTarget, 1,
/*12148*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_togglebit_i), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i32 788:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_togglebit_i:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*12157*/   /*Scope*/ 23, /*->12181*/
/*12158*/     OPC_CheckInteger, 81|128,5/*721*/, 
/*12161*/     OPC_MoveParent,
/*12162*/     OPC_RecordChild1, // #0 = $src1
/*12163*/     OPC_RecordChild2, // #1 = $src2
/*12164*/     OPC_MoveChild, 2,
/*12166*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12169*/     OPC_MoveParent,
/*12170*/     OPC_EmitConvertToTarget, 1,
/*12172*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_clrbit_i), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i32 721:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_clrbit_i:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*12181*/   /*Scope*/ 23, /*->12205*/
/*12182*/     OPC_CheckInteger, 22|128,6/*790*/, 
/*12185*/     OPC_MoveParent,
/*12186*/     OPC_RecordChild1, // #0 = $src1
/*12187*/     OPC_RecordChild2, // #1 = $src2
/*12188*/     OPC_MoveChild, 2,
/*12190*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12193*/     OPC_MoveParent,
/*12194*/     OPC_EmitConvertToTarget, 1,
/*12196*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_tstbit_i), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i1 790:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_tstbit_i:i1 IntRegs:i32:$src1, (imm:i32):$src2)
/*12205*/   /*Scope*/ 25, /*->12231*/
/*12206*/     OPC_CheckInteger, 24|128,6/*792*/, 
/*12209*/     OPC_MoveParent,
/*12210*/     OPC_RecordChild1, // #0 = $src1
/*12211*/     OPC_RecordChild2, // #1 = $src2
/*12212*/     OPC_RecordChild3, // #2 = $src3
/*12213*/     OPC_MoveChild, 3,
/*12215*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12218*/     OPC_MoveParent,
/*12219*/     OPC_EmitConvertToTarget, 2,
/*12221*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_valignib), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i64 792:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, (imm:i32):$src3) - Complexity = 11
              // Dst: (Hexagon_S2_valignib:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, (imm:i32):$src3)
/*12231*/   /*Scope*/ 25, /*->12257*/
/*12232*/     OPC_CheckInteger, 39|128,6/*807*/, 
/*12235*/     OPC_MoveParent,
/*12236*/     OPC_RecordChild1, // #0 = $src1
/*12237*/     OPC_RecordChild2, // #1 = $src2
/*12238*/     OPC_RecordChild3, // #2 = $src3
/*12239*/     OPC_MoveChild, 3,
/*12241*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12244*/     OPC_MoveParent,
/*12245*/     OPC_EmitConvertToTarget, 2,
/*12247*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_S2_vspliceib), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i64 807:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, (imm:i32):$src3) - Complexity = 11
              // Dst: (HEXAGON_S2_vspliceib:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, (imm:i32):$src3)
/*12257*/   /*Scope*/ 23, /*->12281*/
/*12258*/     OPC_CheckInteger, 22|128,5/*662*/, 
/*12261*/     OPC_MoveParent,
/*12262*/     OPC_RecordChild1, // #0 = $src1
/*12263*/     OPC_RecordChild2, // #1 = $src2
/*12264*/     OPC_MoveChild, 2,
/*12266*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12269*/     OPC_MoveParent,
/*12270*/     OPC_EmitConvertToTarget, 1,
/*12272*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_i_r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i32 662:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asl_i_r:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*12281*/   /*Scope*/ 23, /*->12305*/
/*12282*/     OPC_CheckInteger, 49|128,5/*689*/, 
/*12285*/     OPC_MoveParent,
/*12286*/     OPC_RecordChild1, // #0 = $src1
/*12287*/     OPC_RecordChild2, // #1 = $src2
/*12288*/     OPC_MoveChild, 2,
/*12290*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12293*/     OPC_MoveParent,
/*12294*/     OPC_EmitConvertToTarget, 1,
/*12296*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_i_r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i32 689:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asr_i_r:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*12305*/   /*Scope*/ 23, /*->12329*/
/*12306*/     OPC_CheckInteger, 114|128,5/*754*/, 
/*12309*/     OPC_MoveParent,
/*12310*/     OPC_RecordChild1, // #0 = $src1
/*12311*/     OPC_RecordChild2, // #1 = $src2
/*12312*/     OPC_MoveChild, 2,
/*12314*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12317*/     OPC_MoveParent,
/*12318*/     OPC_EmitConvertToTarget, 1,
/*12320*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_i_r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i32 754:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_lsr_i_r:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*12329*/   /*Scope*/ 23, /*->12353*/
/*12330*/     OPC_CheckInteger, 16|128,5/*656*/, 
/*12333*/     OPC_MoveParent,
/*12334*/     OPC_RecordChild1, // #0 = $src1
/*12335*/     OPC_RecordChild2, // #1 = $src2
/*12336*/     OPC_MoveChild, 2,
/*12338*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12341*/     OPC_MoveParent,
/*12342*/     OPC_EmitConvertToTarget, 1,
/*12344*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_i_p), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i64 656:iPTR, DoubleRegs:i64:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asl_i_p:i64 DoubleRegs:i64:$src1, (imm:i32):$src2)
/*12353*/   /*Scope*/ 23, /*->12377*/
/*12354*/     OPC_CheckInteger, 44|128,5/*684*/, 
/*12357*/     OPC_MoveParent,
/*12358*/     OPC_RecordChild1, // #0 = $src1
/*12359*/     OPC_RecordChild2, // #1 = $src2
/*12360*/     OPC_MoveChild, 2,
/*12362*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12365*/     OPC_MoveParent,
/*12366*/     OPC_EmitConvertToTarget, 1,
/*12368*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_i_p), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i64 684:iPTR, DoubleRegs:i64:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asr_i_p:i64 DoubleRegs:i64:$src1, (imm:i32):$src2)
/*12377*/   /*Scope*/ 23, /*->12401*/
/*12378*/     OPC_CheckInteger, 108|128,5/*748*/, 
/*12381*/     OPC_MoveParent,
/*12382*/     OPC_RecordChild1, // #0 = $src1
/*12383*/     OPC_RecordChild2, // #1 = $src2
/*12384*/     OPC_MoveChild, 2,
/*12386*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12389*/     OPC_MoveParent,
/*12390*/     OPC_EmitConvertToTarget, 1,
/*12392*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_i_p), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i64 748:iPTR, DoubleRegs:i64:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_lsr_i_p:i64 DoubleRegs:i64:$src1, (imm:i32):$src2)
/*12401*/   /*Scope*/ 25, /*->12427*/
/*12402*/     OPC_CheckInteger, 23|128,5/*663*/, 
/*12405*/     OPC_MoveParent,
/*12406*/     OPC_RecordChild1, // #0 = $dst2
/*12407*/     OPC_RecordChild2, // #1 = $src1
/*12408*/     OPC_RecordChild3, // #2 = $src2
/*12409*/     OPC_MoveChild, 3,
/*12411*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12414*/     OPC_MoveParent,
/*12415*/     OPC_EmitConvertToTarget, 2,
/*12417*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_i_r_acc), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 663:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asl_i_r_acc:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2)
/*12427*/   /*Scope*/ 25, /*->12453*/
/*12428*/     OPC_CheckInteger, 50|128,5/*690*/, 
/*12431*/     OPC_MoveParent,
/*12432*/     OPC_RecordChild1, // #0 = $dst2
/*12433*/     OPC_RecordChild2, // #1 = $src1
/*12434*/     OPC_RecordChild3, // #2 = $src2
/*12435*/     OPC_MoveChild, 3,
/*12437*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12440*/     OPC_MoveParent,
/*12441*/     OPC_EmitConvertToTarget, 2,
/*12443*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_i_r_acc), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 690:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asr_i_r_acc:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2)
/*12453*/   /*Scope*/ 25, /*->12479*/
/*12454*/     OPC_CheckInteger, 115|128,5/*755*/, 
/*12457*/     OPC_MoveParent,
/*12458*/     OPC_RecordChild1, // #0 = $dst2
/*12459*/     OPC_RecordChild2, // #1 = $src1
/*12460*/     OPC_RecordChild3, // #2 = $src2
/*12461*/     OPC_MoveChild, 3,
/*12463*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12466*/     OPC_MoveParent,
/*12467*/     OPC_EmitConvertToTarget, 2,
/*12469*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_i_r_acc), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 755:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_lsr_i_r_acc:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2)
/*12479*/   /*Scope*/ 25, /*->12505*/
/*12480*/     OPC_CheckInteger, 25|128,5/*665*/, 
/*12483*/     OPC_MoveParent,
/*12484*/     OPC_RecordChild1, // #0 = $dst2
/*12485*/     OPC_RecordChild2, // #1 = $src1
/*12486*/     OPC_RecordChild3, // #2 = $src2
/*12487*/     OPC_MoveChild, 3,
/*12489*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12492*/     OPC_MoveParent,
/*12493*/     OPC_EmitConvertToTarget, 2,
/*12495*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_i_r_nac), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 665:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asl_i_r_nac:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2)
/*12505*/   /*Scope*/ 25, /*->12531*/
/*12506*/     OPC_CheckInteger, 52|128,5/*692*/, 
/*12509*/     OPC_MoveParent,
/*12510*/     OPC_RecordChild1, // #0 = $dst2
/*12511*/     OPC_RecordChild2, // #1 = $src1
/*12512*/     OPC_RecordChild3, // #2 = $src2
/*12513*/     OPC_MoveChild, 3,
/*12515*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12518*/     OPC_MoveParent,
/*12519*/     OPC_EmitConvertToTarget, 2,
/*12521*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_i_r_nac), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 692:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asr_i_r_nac:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2)
/*12531*/   /*Scope*/ 25, /*->12557*/
/*12532*/     OPC_CheckInteger, 117|128,5/*757*/, 
/*12535*/     OPC_MoveParent,
/*12536*/     OPC_RecordChild1, // #0 = $dst2
/*12537*/     OPC_RecordChild2, // #1 = $src1
/*12538*/     OPC_RecordChild3, // #2 = $src2
/*12539*/     OPC_MoveChild, 3,
/*12541*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12544*/     OPC_MoveParent,
/*12545*/     OPC_EmitConvertToTarget, 2,
/*12547*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_i_r_nac), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 757:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_lsr_i_r_nac:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2)
/*12557*/   /*Scope*/ 25, /*->12583*/
/*12558*/     OPC_CheckInteger, 17|128,5/*657*/, 
/*12561*/     OPC_MoveParent,
/*12562*/     OPC_RecordChild1, // #0 = $dst2
/*12563*/     OPC_RecordChild2, // #1 = $src1
/*12564*/     OPC_RecordChild3, // #2 = $src2
/*12565*/     OPC_MoveChild, 3,
/*12567*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12570*/     OPC_MoveParent,
/*12571*/     OPC_EmitConvertToTarget, 2,
/*12573*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_i_p_acc), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i64 657:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asl_i_p_acc:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2)
/*12583*/   /*Scope*/ 25, /*->12609*/
/*12584*/     OPC_CheckInteger, 45|128,5/*685*/, 
/*12587*/     OPC_MoveParent,
/*12588*/     OPC_RecordChild1, // #0 = $dst2
/*12589*/     OPC_RecordChild2, // #1 = $src1
/*12590*/     OPC_RecordChild3, // #2 = $src2
/*12591*/     OPC_MoveChild, 3,
/*12593*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12596*/     OPC_MoveParent,
/*12597*/     OPC_EmitConvertToTarget, 2,
/*12599*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_i_p_acc), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i64 685:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asr_i_p_acc:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2)
/*12609*/   /*Scope*/ 25, /*->12635*/
/*12610*/     OPC_CheckInteger, 109|128,5/*749*/, 
/*12613*/     OPC_MoveParent,
/*12614*/     OPC_RecordChild1, // #0 = $dst2
/*12615*/     OPC_RecordChild2, // #1 = $src1
/*12616*/     OPC_RecordChild3, // #2 = $src2
/*12617*/     OPC_MoveChild, 3,
/*12619*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12622*/     OPC_MoveParent,
/*12623*/     OPC_EmitConvertToTarget, 2,
/*12625*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_i_p_acc), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i64 749:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_lsr_i_p_acc:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2)
/*12635*/   /*Scope*/ 25, /*->12661*/
/*12636*/     OPC_CheckInteger, 19|128,5/*659*/, 
/*12639*/     OPC_MoveParent,
/*12640*/     OPC_RecordChild1, // #0 = $dst2
/*12641*/     OPC_RecordChild2, // #1 = $src1
/*12642*/     OPC_RecordChild3, // #2 = $src2
/*12643*/     OPC_MoveChild, 3,
/*12645*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12648*/     OPC_MoveParent,
/*12649*/     OPC_EmitConvertToTarget, 2,
/*12651*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_i_p_nac), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i64 659:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asl_i_p_nac:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2)
/*12661*/   /*Scope*/ 25, /*->12687*/
/*12662*/     OPC_CheckInteger, 47|128,5/*687*/, 
/*12665*/     OPC_MoveParent,
/*12666*/     OPC_RecordChild1, // #0 = $dst2
/*12667*/     OPC_RecordChild2, // #1 = $src1
/*12668*/     OPC_RecordChild3, // #2 = $src2
/*12669*/     OPC_MoveChild, 3,
/*12671*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12674*/     OPC_MoveParent,
/*12675*/     OPC_EmitConvertToTarget, 2,
/*12677*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_i_p_nac), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i64 687:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asr_i_p_nac:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2)
/*12687*/   /*Scope*/ 25, /*->12713*/
/*12688*/     OPC_CheckInteger, 111|128,5/*751*/, 
/*12691*/     OPC_MoveParent,
/*12692*/     OPC_RecordChild1, // #0 = $dst2
/*12693*/     OPC_RecordChild2, // #1 = $src1
/*12694*/     OPC_RecordChild3, // #2 = $src2
/*12695*/     OPC_MoveChild, 3,
/*12697*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12700*/     OPC_MoveParent,
/*12701*/     OPC_EmitConvertToTarget, 2,
/*12703*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_i_p_nac), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i64 751:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_lsr_i_p_nac:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2)
/*12713*/   /*Scope*/ 25, /*->12739*/
/*12714*/     OPC_CheckInteger, 15|128,5/*655*/, 
/*12717*/     OPC_MoveParent,
/*12718*/     OPC_RecordChild1, // #0 = $src1
/*12719*/     OPC_RecordChild2, // #1 = $src2
/*12720*/     OPC_RecordChild3, // #2 = $src3
/*12721*/     OPC_MoveChild, 3,
/*12723*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12726*/     OPC_MoveParent,
/*12727*/     OPC_EmitConvertToTarget, 2,
/*12729*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_addasl_rrri), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 655:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3) - Complexity = 11
              // Dst: (Hexagon_S2_addasl_rrri:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3)
/*12739*/   /*Scope*/ 25, /*->12765*/
/*12740*/     OPC_CheckInteger, 24|128,5/*664*/, 
/*12743*/     OPC_MoveParent,
/*12744*/     OPC_RecordChild1, // #0 = $dst2
/*12745*/     OPC_RecordChild2, // #1 = $src1
/*12746*/     OPC_RecordChild3, // #2 = $src2
/*12747*/     OPC_MoveChild, 3,
/*12749*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12752*/     OPC_MoveParent,
/*12753*/     OPC_EmitConvertToTarget, 2,
/*12755*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_i_r_and), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 664:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asl_i_r_and:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2)
/*12765*/   /*Scope*/ 25, /*->12791*/
/*12766*/     OPC_CheckInteger, 51|128,5/*691*/, 
/*12769*/     OPC_MoveParent,
/*12770*/     OPC_RecordChild1, // #0 = $dst2
/*12771*/     OPC_RecordChild2, // #1 = $src1
/*12772*/     OPC_RecordChild3, // #2 = $src2
/*12773*/     OPC_MoveChild, 3,
/*12775*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12778*/     OPC_MoveParent,
/*12779*/     OPC_EmitConvertToTarget, 2,
/*12781*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_i_r_and), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 691:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asr_i_r_and:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2)
/*12791*/   /*Scope*/ 25, /*->12817*/
/*12792*/     OPC_CheckInteger, 116|128,5/*756*/, 
/*12795*/     OPC_MoveParent,
/*12796*/     OPC_RecordChild1, // #0 = $dst2
/*12797*/     OPC_RecordChild2, // #1 = $src1
/*12798*/     OPC_RecordChild3, // #2 = $src2
/*12799*/     OPC_MoveChild, 3,
/*12801*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12804*/     OPC_MoveParent,
/*12805*/     OPC_EmitConvertToTarget, 2,
/*12807*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_i_r_and), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 756:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_lsr_i_r_and:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2)
/*12817*/   /*Scope*/ 25, /*->12843*/
/*12818*/     OPC_CheckInteger, 28|128,5/*668*/, 
/*12821*/     OPC_MoveParent,
/*12822*/     OPC_RecordChild1, // #0 = $dst2
/*12823*/     OPC_RecordChild2, // #1 = $src1
/*12824*/     OPC_RecordChild3, // #2 = $src2
/*12825*/     OPC_MoveChild, 3,
/*12827*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12830*/     OPC_MoveParent,
/*12831*/     OPC_EmitConvertToTarget, 2,
/*12833*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_i_r_xacc), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 668:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asl_i_r_xacc:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2)
/*12843*/   /*Scope*/ 25, /*->12869*/
/*12844*/     OPC_CheckInteger, 119|128,5/*759*/, 
/*12847*/     OPC_MoveParent,
/*12848*/     OPC_RecordChild1, // #0 = $dst2
/*12849*/     OPC_RecordChild2, // #1 = $src1
/*12850*/     OPC_RecordChild3, // #2 = $src2
/*12851*/     OPC_MoveChild, 3,
/*12853*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12856*/     OPC_MoveParent,
/*12857*/     OPC_EmitConvertToTarget, 2,
/*12859*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_i_r_xacc), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 759:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_lsr_i_r_xacc:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2)
/*12869*/   /*Scope*/ 25, /*->12895*/
/*12870*/     OPC_CheckInteger, 26|128,5/*666*/, 
/*12873*/     OPC_MoveParent,
/*12874*/     OPC_RecordChild1, // #0 = $dst2
/*12875*/     OPC_RecordChild2, // #1 = $src1
/*12876*/     OPC_RecordChild3, // #2 = $src2
/*12877*/     OPC_MoveChild, 3,
/*12879*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12882*/     OPC_MoveParent,
/*12883*/     OPC_EmitConvertToTarget, 2,
/*12885*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_i_r_or), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 666:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asl_i_r_or:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2)
/*12895*/   /*Scope*/ 25, /*->12921*/
/*12896*/     OPC_CheckInteger, 53|128,5/*693*/, 
/*12899*/     OPC_MoveParent,
/*12900*/     OPC_RecordChild1, // #0 = $dst2
/*12901*/     OPC_RecordChild2, // #1 = $src1
/*12902*/     OPC_RecordChild3, // #2 = $src2
/*12903*/     OPC_MoveChild, 3,
/*12905*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12908*/     OPC_MoveParent,
/*12909*/     OPC_EmitConvertToTarget, 2,
/*12911*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_i_r_or), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 693:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asr_i_r_or:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2)
/*12921*/   /*Scope*/ 25, /*->12947*/
/*12922*/     OPC_CheckInteger, 118|128,5/*758*/, 
/*12925*/     OPC_MoveParent,
/*12926*/     OPC_RecordChild1, // #0 = $dst2
/*12927*/     OPC_RecordChild2, // #1 = $src1
/*12928*/     OPC_RecordChild3, // #2 = $src2
/*12929*/     OPC_MoveChild, 3,
/*12931*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12934*/     OPC_MoveParent,
/*12935*/     OPC_EmitConvertToTarget, 2,
/*12937*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_i_r_or), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 758:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_lsr_i_r_or:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, (imm:i32):$src2)
/*12947*/   /*Scope*/ 25, /*->12973*/
/*12948*/     OPC_CheckInteger, 18|128,5/*658*/, 
/*12951*/     OPC_MoveParent,
/*12952*/     OPC_RecordChild1, // #0 = $dst2
/*12953*/     OPC_RecordChild2, // #1 = $src1
/*12954*/     OPC_RecordChild3, // #2 = $src2
/*12955*/     OPC_MoveChild, 3,
/*12957*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12960*/     OPC_MoveParent,
/*12961*/     OPC_EmitConvertToTarget, 2,
/*12963*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_i_p_and), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i64 658:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asl_i_p_and:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2)
/*12973*/   /*Scope*/ 25, /*->12999*/
/*12974*/     OPC_CheckInteger, 46|128,5/*686*/, 
/*12977*/     OPC_MoveParent,
/*12978*/     OPC_RecordChild1, // #0 = $dst2
/*12979*/     OPC_RecordChild2, // #1 = $src1
/*12980*/     OPC_RecordChild3, // #2 = $src2
/*12981*/     OPC_MoveChild, 3,
/*12983*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12986*/     OPC_MoveParent,
/*12987*/     OPC_EmitConvertToTarget, 2,
/*12989*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_i_p_and), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i64 686:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asr_i_p_and:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2)
/*12999*/   /*Scope*/ 25, /*->13025*/
/*13000*/     OPC_CheckInteger, 110|128,5/*750*/, 
/*13003*/     OPC_MoveParent,
/*13004*/     OPC_RecordChild1, // #0 = $dst2
/*13005*/     OPC_RecordChild2, // #1 = $src1
/*13006*/     OPC_RecordChild3, // #2 = $src2
/*13007*/     OPC_MoveChild, 3,
/*13009*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13012*/     OPC_MoveParent,
/*13013*/     OPC_EmitConvertToTarget, 2,
/*13015*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_i_p_and), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i64 750:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_lsr_i_p_and:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2)
/*13025*/   /*Scope*/ 25, /*->13051*/
/*13026*/     OPC_CheckInteger, 21|128,5/*661*/, 
/*13029*/     OPC_MoveParent,
/*13030*/     OPC_RecordChild1, // #0 = $dst2
/*13031*/     OPC_RecordChild2, // #1 = $src1
/*13032*/     OPC_RecordChild3, // #2 = $src2
/*13033*/     OPC_MoveChild, 3,
/*13035*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13038*/     OPC_MoveParent,
/*13039*/     OPC_EmitConvertToTarget, 2,
/*13041*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_i_p_xacc), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i64 661:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asl_i_p_xacc:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2)
/*13051*/   /*Scope*/ 25, /*->13077*/
/*13052*/     OPC_CheckInteger, 113|128,5/*753*/, 
/*13055*/     OPC_MoveParent,
/*13056*/     OPC_RecordChild1, // #0 = $dst2
/*13057*/     OPC_RecordChild2, // #1 = $src1
/*13058*/     OPC_RecordChild3, // #2 = $src2
/*13059*/     OPC_MoveChild, 3,
/*13061*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13064*/     OPC_MoveParent,
/*13065*/     OPC_EmitConvertToTarget, 2,
/*13067*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_i_p_xacc), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i64 753:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_lsr_i_p_xacc:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2)
/*13077*/   /*Scope*/ 25, /*->13103*/
/*13078*/     OPC_CheckInteger, 20|128,5/*660*/, 
/*13081*/     OPC_MoveParent,
/*13082*/     OPC_RecordChild1, // #0 = $dst2
/*13083*/     OPC_RecordChild2, // #1 = $src1
/*13084*/     OPC_RecordChild3, // #2 = $src2
/*13085*/     OPC_MoveChild, 3,
/*13087*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13090*/     OPC_MoveParent,
/*13091*/     OPC_EmitConvertToTarget, 2,
/*13093*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_i_p_or), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i64 660:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asl_i_p_or:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2)
/*13103*/   /*Scope*/ 25, /*->13129*/
/*13104*/     OPC_CheckInteger, 48|128,5/*688*/, 
/*13107*/     OPC_MoveParent,
/*13108*/     OPC_RecordChild1, // #0 = $dst2
/*13109*/     OPC_RecordChild2, // #1 = $src1
/*13110*/     OPC_RecordChild3, // #2 = $src2
/*13111*/     OPC_MoveChild, 3,
/*13113*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13116*/     OPC_MoveParent,
/*13117*/     OPC_EmitConvertToTarget, 2,
/*13119*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_i_p_or), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i64 688:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asr_i_p_or:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2)
/*13129*/   /*Scope*/ 25, /*->13155*/
/*13130*/     OPC_CheckInteger, 112|128,5/*752*/, 
/*13133*/     OPC_MoveParent,
/*13134*/     OPC_RecordChild1, // #0 = $dst2
/*13135*/     OPC_RecordChild2, // #1 = $src1
/*13136*/     OPC_RecordChild3, // #2 = $src2
/*13137*/     OPC_MoveChild, 3,
/*13139*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13142*/     OPC_MoveParent,
/*13143*/     OPC_EmitConvertToTarget, 2,
/*13145*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_i_p_or), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i64 752:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_lsr_i_p_or:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, (imm:i32):$src2)
/*13155*/   /*Scope*/ 23, /*->13179*/
/*13156*/     OPC_CheckInteger, 54|128,5/*694*/, 
/*13159*/     OPC_MoveParent,
/*13160*/     OPC_RecordChild1, // #0 = $src1
/*13161*/     OPC_RecordChild2, // #1 = $src2
/*13162*/     OPC_MoveChild, 2,
/*13164*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13167*/     OPC_MoveParent,
/*13168*/     OPC_EmitConvertToTarget, 1,
/*13170*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_i_r_rnd), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i32 694:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asr_i_r_rnd:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*13179*/   /*Scope*/ 23, /*->13203*/
/*13180*/     OPC_CheckInteger, 55|128,5/*695*/, 
/*13183*/     OPC_MoveParent,
/*13184*/     OPC_RecordChild1, // #0 = $src1
/*13185*/     OPC_RecordChild2, // #1 = $src2
/*13186*/     OPC_MoveChild, 2,
/*13188*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13191*/     OPC_MoveParent,
/*13192*/     OPC_EmitConvertToTarget, 1,
/*13194*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_i_r_rnd_goodsyntax), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i32 695:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asr_i_r_rnd_goodsyntax:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*13203*/   /*Scope*/ 23, /*->13227*/
/*13204*/     OPC_CheckInteger, 56|128,5/*696*/, 
/*13207*/     OPC_MoveParent,
/*13208*/     OPC_RecordChild1, // #0 = $src1
/*13209*/     OPC_RecordChild2, // #1 = $src2
/*13210*/     OPC_MoveChild, 2,
/*13212*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13215*/     OPC_MoveParent,
/*13216*/     OPC_EmitConvertToTarget, 1,
/*13218*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_i_svw_trun), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i32 696:iPTR, DoubleRegs:i64:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_S2_asr_i_svw_trun:i32 DoubleRegs:i64:$src1, (imm:i32):$src2)
/*13227*/   /*Scope*/ 23, /*->13251*/
/*13228*/     OPC_CheckInteger, 63|128,2/*319*/, 
/*13231*/     OPC_MoveParent,
/*13232*/     OPC_RecordChild1, // #0 = $src1
/*13233*/     OPC_MoveChild, 1,
/*13235*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13238*/     OPC_MoveParent,
/*13239*/     OPC_RecordChild2, // #1 = $src2
/*13240*/     OPC_EmitConvertToTarget, 0,
/*13242*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A4_combineir), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 1, 
              // Src: (intrinsic_wo_chain:i64 319:iPTR, (imm:i32):$src1, IntRegs:i32:$src2) - Complexity = 11
              // Dst: (Hexagon_A4_combineir:i64 (imm:i32):$src1, IntRegs:i32:$src2)
/*13251*/   /*Scope*/ 23, /*->13275*/
/*13252*/     OPC_CheckInteger, 64|128,2/*320*/, 
/*13255*/     OPC_MoveParent,
/*13256*/     OPC_RecordChild1, // #0 = $src1
/*13257*/     OPC_RecordChild2, // #1 = $src2
/*13258*/     OPC_MoveChild, 2,
/*13260*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13263*/     OPC_MoveParent,
/*13264*/     OPC_EmitConvertToTarget, 1,
/*13266*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A4_combineri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i64 320:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_A4_combineri:i64 IntRegs:i32:$src1, (imm:i32):$src2)
/*13275*/   /*Scope*/ 23, /*->13299*/
/*13276*/     OPC_CheckInteger, 121|128,2/*377*/, 
/*13279*/     OPC_MoveParent,
/*13280*/     OPC_RecordChild1, // #0 = $src1
/*13281*/     OPC_RecordChild2, // #1 = $src2
/*13282*/     OPC_MoveChild, 2,
/*13284*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13287*/     OPC_MoveParent,
/*13288*/     OPC_EmitConvertToTarget, 1,
/*13290*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C4_cmpneqi), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i1 377:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_C4_cmpneqi:i1 IntRegs:i32:$src1, (imm:i32):$src2)
/*13299*/   /*Scope*/ 23, /*->13323*/
/*13300*/     OPC_CheckInteger, 117|128,2/*373*/, 
/*13303*/     OPC_MoveParent,
/*13304*/     OPC_RecordChild1, // #0 = $src1
/*13305*/     OPC_RecordChild2, // #1 = $src2
/*13306*/     OPC_MoveChild, 2,
/*13308*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13311*/     OPC_MoveParent,
/*13312*/     OPC_EmitConvertToTarget, 1,
/*13314*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C4_cmpltei), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i1 373:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_C4_cmpltei:i1 IntRegs:i32:$src1, (imm:i32):$src2)
/*13323*/   /*Scope*/ 23, /*->13347*/
/*13324*/     OPC_CheckInteger, 119|128,2/*375*/, 
/*13327*/     OPC_MoveParent,
/*13328*/     OPC_RecordChild1, // #0 = $src1
/*13329*/     OPC_RecordChild2, // #1 = $src2
/*13330*/     OPC_MoveChild, 2,
/*13332*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13335*/     OPC_MoveParent,
/*13336*/     OPC_EmitConvertToTarget, 1,
/*13338*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C4_cmplteui), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i1 375:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_C4_cmplteui:i1 IntRegs:i32:$src1, (imm:i32):$src2)
/*13347*/   /*Scope*/ 23, /*->13371*/
/*13348*/     OPC_CheckInteger, 73|128,2/*329*/, 
/*13351*/     OPC_MoveParent,
/*13352*/     OPC_RecordChild1, // #0 = $src1
/*13353*/     OPC_RecordChild2, // #1 = $src2
/*13354*/     OPC_MoveChild, 2,
/*13356*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13359*/     OPC_MoveParent,
/*13360*/     OPC_EmitConvertToTarget, 1,
/*13362*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A4_rcmpneqi), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i32 329:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_A4_rcmpneqi:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*13371*/   /*Scope*/ 23, /*->13395*/
/*13372*/     OPC_CheckInteger, 71|128,2/*327*/, 
/*13375*/     OPC_MoveParent,
/*13376*/     OPC_RecordChild1, // #0 = $src1
/*13377*/     OPC_RecordChild2, // #1 = $src2
/*13378*/     OPC_MoveChild, 2,
/*13380*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13383*/     OPC_MoveParent,
/*13384*/     OPC_EmitConvertToTarget, 1,
/*13386*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A4_rcmpeqi), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i32 327:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (Hexagon_A4_rcmpeqi:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*13395*/   /*Scope*/ 25, /*->13421*/
/*13396*/     OPC_CheckInteger, 49|128,6/*817*/, 
/*13399*/     OPC_MoveParent,
/*13400*/     OPC_RecordChild1, // #0 = $src1
/*13401*/     OPC_RecordChild2, // #1 = $src2
/*13402*/     OPC_RecordChild3, // #2 = $src3
/*13403*/     OPC_MoveChild, 3,
/*13405*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13408*/     OPC_MoveParent,
/*13409*/     OPC_EmitConvertToTarget, 2,
/*13411*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S4_addaddi), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 817:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3) - Complexity = 11
              // Dst: (Hexagon_S4_addaddi:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3)
/*13421*/   /*Scope*/ 25, /*->13447*/
/*13422*/     OPC_CheckInteger, 55|128,6/*823*/, 
/*13425*/     OPC_MoveParent,
/*13426*/     OPC_RecordChild1, // #0 = $src1
/*13427*/     OPC_RecordChild2, // #1 = $src2
/*13428*/     OPC_MoveChild, 2,
/*13430*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13433*/     OPC_MoveParent,
/*13434*/     OPC_RecordChild3, // #2 = $src3
/*13435*/     OPC_EmitConvertToTarget, 1,
/*13437*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S4_subaddi), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 3, 2, 
              // Src: (intrinsic_wo_chain:i32 823:iPTR, IntRegs:i32:$src1, (imm:i32):$src2, IntRegs:i32:$src3) - Complexity = 11
              // Dst: (Hexagon_S4_subaddi:i32 IntRegs:i32:$src1, (imm:i32):$src2, IntRegs:i32:$src3)
/*13447*/   /*Scope*/ 25, /*->13473*/
/*13448*/     OPC_CheckInteger, 52|128,6/*820*/, 
/*13451*/     OPC_MoveParent,
/*13452*/     OPC_RecordChild1, // #0 = $src1
/*13453*/     OPC_RecordChild2, // #1 = $src2
/*13454*/     OPC_RecordChild3, // #2 = $src3
/*13455*/     OPC_MoveChild, 3,
/*13457*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13460*/     OPC_MoveParent,
/*13461*/     OPC_EmitConvertToTarget, 2,
/*13463*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_S4_or_andix), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 820:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3) - Complexity = 11
              // Dst: (HEXAGON_S4_or_andix:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, (imm:i32):$src3)
/*13473*/   /*Scope*/ 25, /*->13499*/
/*13474*/     OPC_CheckInteger, 51|128,6/*819*/, 
/*13477*/     OPC_MoveParent,
/*13478*/     OPC_RecordChild1, // #0 = $dst1
/*13479*/     OPC_RecordChild2, // #1 = $src2
/*13480*/     OPC_RecordChild3, // #2 = $src3
/*13481*/     OPC_MoveChild, 3,
/*13483*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13486*/     OPC_MoveParent,
/*13487*/     OPC_EmitConvertToTarget, 2,
/*13489*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_S4_or_andi), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 819:iPTR, IntRegs:i32:$dst1, IntRegs:i32:$src2, (imm:i32):$src3) - Complexity = 11
              // Dst: (HEXAGON_S4_or_andi:i32 IntRegs:i32:$dst1, IntRegs:i32:$src2, (imm:i32):$src3)
/*13499*/   /*Scope*/ 25, /*->13525*/
/*13500*/     OPC_CheckInteger, 53|128,6/*821*/, 
/*13503*/     OPC_MoveParent,
/*13504*/     OPC_RecordChild1, // #0 = $dst1
/*13505*/     OPC_RecordChild2, // #1 = $src2
/*13506*/     OPC_RecordChild3, // #2 = $src3
/*13507*/     OPC_MoveChild, 3,
/*13509*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13512*/     OPC_MoveParent,
/*13513*/     OPC_EmitConvertToTarget, 2,
/*13515*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_S4_or_ori), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (intrinsic_wo_chain:i32 821:iPTR, IntRegs:i32:$dst1, IntRegs:i32:$src2, (imm:i32):$src3) - Complexity = 11
              // Dst: (HEXAGON_S4_or_ori:i32 IntRegs:i32:$dst1, IntRegs:i32:$src2, (imm:i32):$src3)
/*13525*/   /*Scope*/ 23, /*->13549*/
/*13526*/     OPC_CheckInteger, 65|128,2/*321*/, 
/*13529*/     OPC_MoveParent,
/*13530*/     OPC_RecordChild1, // #0 = $src1
/*13531*/     OPC_RecordChild2, // #1 = $src2
/*13532*/     OPC_MoveChild, 2,
/*13534*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13537*/     OPC_MoveParent,
/*13538*/     OPC_EmitConvertToTarget, 1,
/*13540*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_A4_cround_ri), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i32 321:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (HEXAGON_A4_cround_ri:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*13549*/   /*Scope*/ 23, /*->13573*/
/*13550*/     OPC_CheckInteger, 74|128,2/*330*/, 
/*13553*/     OPC_MoveParent,
/*13554*/     OPC_RecordChild1, // #0 = $src1
/*13555*/     OPC_RecordChild2, // #1 = $src2
/*13556*/     OPC_MoveChild, 2,
/*13558*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13561*/     OPC_MoveParent,
/*13562*/     OPC_EmitConvertToTarget, 1,
/*13564*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_A4_round_ri), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i32 330:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (HEXAGON_A4_round_ri:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*13573*/   /*Scope*/ 23, /*->13597*/
/*13574*/     OPC_CheckInteger, 75|128,2/*331*/, 
/*13577*/     OPC_MoveParent,
/*13578*/     OPC_RecordChild1, // #0 = $src1
/*13579*/     OPC_RecordChild2, // #1 = $src2
/*13580*/     OPC_MoveChild, 2,
/*13582*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13585*/     OPC_MoveParent,
/*13586*/     OPC_EmitConvertToTarget, 1,
/*13588*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_A4_round_ri_sat), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (intrinsic_wo_chain:i32 331:iPTR, IntRegs:i32:$src1, (imm:i32):$src2) - Complexity = 11
              // Dst: (HEXAGON_A4_round_ri_sat:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*13597*/   /*Scope*/ 15, /*->13613*/
/*13598*/     OPC_CheckInteger, 37|128,1/*165*/, 
/*13601*/     OPC_MoveParent,
/*13602*/     OPC_RecordChild1, // #0 = $src1
/*13603*/     OPC_RecordChild2, // #1 = $src2
/*13604*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_add), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 165:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_add:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*13613*/   /*Scope*/ 15, /*->13629*/
/*13614*/     OPC_CheckInteger, 59|128,1/*187*/, 
/*13617*/     OPC_MoveParent,
/*13618*/     OPC_RecordChild1, // #0 = $src1
/*13619*/     OPC_RecordChild2, // #1 = $src2
/*13620*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_and), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 187:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_and:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*13629*/   /*Scope*/ 13, /*->13643*/
/*13630*/     OPC_CheckInteger, 81|128,1/*209*/, 
/*13633*/     OPC_MoveParent,
/*13634*/     OPC_RecordChild1, // #0 = $src
/*13635*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_not), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 209:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_A2_not:i32 IntRegs:i32:$src)
/*13643*/   /*Scope*/ 15, /*->13659*/
/*13644*/     OPC_CheckInteger, 83|128,1/*211*/, 
/*13647*/     OPC_MoveParent,
/*13648*/     OPC_RecordChild1, // #0 = $src1
/*13649*/     OPC_RecordChild2, // #1 = $src2
/*13650*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_or), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 211:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_or:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*13659*/   /*Scope*/ 15, /*->13675*/
/*13660*/     OPC_CheckInteger, 57|128,2/*313*/, 
/*13663*/     OPC_MoveParent,
/*13664*/     OPC_RecordChild1, // #0 = $src1
/*13665*/     OPC_RecordChild2, // #1 = $src2
/*13666*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_xor), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 313:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_xor:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*13675*/   /*Scope*/ 13, /*->13689*/
/*13676*/     OPC_CheckInteger, 78|128,1/*206*/, 
/*13679*/     OPC_MoveParent,
/*13680*/     OPC_RecordChild1, // #0 = $src
/*13681*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_neg), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 206:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_A2_neg:i32 IntRegs:i32:$src)
/*13689*/   /*Scope*/ 15, /*->13705*/
/*13690*/     OPC_CheckInteger, 91|128,1/*219*/, 
/*13693*/     OPC_MoveParent,
/*13694*/     OPC_RecordChild1, // #0 = $src1
/*13695*/     OPC_RecordChild2, // #1 = $src2
/*13696*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_sub), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 219:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_sub:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*13705*/   /*Scope*/ 13, /*->13719*/
/*13706*/     OPC_CheckInteger, 120|128,1/*248*/, 
/*13709*/     OPC_MoveParent,
/*13710*/     OPC_RecordChild1, // #0 = $src
/*13711*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_tfr), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 248:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_A2_tfr:i32 IntRegs:i32:$src)
/*13719*/   /*Scope*/ 15, /*->13735*/
/*13720*/     OPC_CheckInteger, 69|128,1/*197*/, 
/*13723*/     OPC_MoveParent,
/*13724*/     OPC_RecordChild1, // #0 = $src1
/*13725*/     OPC_RecordChild2, // #1 = $src2
/*13726*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_combinew), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 197:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_combinew:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*13735*/   /*Scope*/ 15, /*->13751*/
/*13736*/     OPC_CheckInteger, 64|128,1/*192*/, 
/*13739*/     OPC_MoveParent,
/*13740*/     OPC_RecordChild1, // #0 = $src1
/*13741*/     OPC_RecordChild2, // #1 = $src2
/*13742*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_combine_hh), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 192:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_combine_hh:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*13751*/   /*Scope*/ 15, /*->13767*/
/*13752*/     OPC_CheckInteger, 66|128,1/*194*/, 
/*13755*/     OPC_MoveParent,
/*13756*/     OPC_RecordChild1, // #0 = $src1
/*13757*/     OPC_RecordChild2, // #1 = $src2
/*13758*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_combine_lh), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 194:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_combine_lh:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*13767*/   /*Scope*/ 15, /*->13783*/
/*13768*/     OPC_CheckInteger, 65|128,1/*193*/, 
/*13771*/     OPC_MoveParent,
/*13772*/     OPC_RecordChild1, // #0 = $src1
/*13773*/     OPC_RecordChild2, // #1 = $src2
/*13774*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_combine_hl), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 193:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_combine_hl:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*13783*/   /*Scope*/ 15, /*->13799*/
/*13784*/     OPC_CheckInteger, 67|128,1/*195*/, 
/*13787*/     OPC_MoveParent,
/*13788*/     OPC_RecordChild1, // #0 = $src1
/*13789*/     OPC_RecordChild2, // #1 = $src2
/*13790*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_combine_ll), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 195:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_combine_ll:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*13799*/   /*Scope*/ 17, /*->13817*/
/*13800*/     OPC_CheckInteger, 99|128,2/*355*/, 
/*13803*/     OPC_MoveParent,
/*13804*/     OPC_RecordChild1, // #0 = $src1
/*13805*/     OPC_RecordChild2, // #1 = $src2
/*13806*/     OPC_RecordChild3, // #2 = $src3
/*13807*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_mux), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 355:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (Hexagon_C2_mux:i32 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*13817*/   /*Scope*/ 13, /*->13831*/
/*13818*/     OPC_CheckInteger, 62|128,1/*190*/, 
/*13821*/     OPC_MoveParent,
/*13822*/     OPC_RecordChild1, // #0 = $src
/*13823*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_aslh), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 190:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_A2_aslh:i32 IntRegs:i32:$src)
/*13831*/   /*Scope*/ 13, /*->13845*/
/*13832*/     OPC_CheckInteger, 63|128,1/*191*/, 
/*13835*/     OPC_MoveParent,
/*13836*/     OPC_RecordChild1, // #0 = $src
/*13837*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_asrh), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 191:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_A2_asrh:i32 IntRegs:i32:$src)
/*13845*/   /*Scope*/ 13, /*->13859*/
/*13846*/     OPC_CheckInteger, 56|128,6/*824*/, 
/*13849*/     OPC_MoveParent,
/*13850*/     OPC_RecordChild1, // #0 = $src
/*13851*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::SI_to_SXTHI_asrh), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 824:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (SI_to_SXTHI_asrh:i32 IntRegs:i32:$src)
/*13859*/   /*Scope*/ 13, /*->13873*/
/*13860*/     OPC_CheckInteger, 118|128,1/*246*/, 
/*13863*/     OPC_MoveParent,
/*13864*/     OPC_RecordChild1, // #0 = $src
/*13865*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_sxth), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 246:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_A2_sxth:i32 IntRegs:i32:$src)
/*13873*/   /*Scope*/ 13, /*->13887*/
/*13874*/     OPC_CheckInteger, 117|128,1/*245*/, 
/*13877*/     OPC_MoveParent,
/*13878*/     OPC_RecordChild1, // #0 = $src
/*13879*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_sxtb), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 245:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_A2_sxtb:i32 IntRegs:i32:$src)
/*13887*/   /*Scope*/ 13, /*->13901*/
/*13888*/     OPC_CheckInteger, 60|128,2/*316*/, 
/*13891*/     OPC_MoveParent,
/*13892*/     OPC_RecordChild1, // #0 = $src
/*13893*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_zxth), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 316:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_A2_zxth:i32 IntRegs:i32:$src)
/*13901*/   /*Scope*/ 13, /*->13915*/
/*13902*/     OPC_CheckInteger, 59|128,2/*315*/, 
/*13905*/     OPC_MoveParent,
/*13906*/     OPC_RecordChild1, // #0 = $src
/*13907*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_zxtb), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 315:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_A2_zxtb:i32 IntRegs:i32:$src)
/*13915*/   /*Scope*/ 15, /*->13931*/
/*13916*/     OPC_CheckInteger, 85|128,2/*341*/, 
/*13919*/     OPC_MoveParent,
/*13920*/     OPC_RecordChild1, // #0 = $src1
/*13921*/     OPC_RecordChild2, // #1 = $src2
/*13922*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_cmpeq), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 341:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_C2_cmpeq:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*13931*/   /*Scope*/ 15, /*->13947*/
/*13932*/     OPC_CheckInteger, 90|128,2/*346*/, 
/*13935*/     OPC_MoveParent,
/*13936*/     OPC_RecordChild1, // #0 = $src1
/*13937*/     OPC_RecordChild2, // #1 = $src2
/*13938*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_cmpgt), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 346:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_C2_cmpgt:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*13947*/   /*Scope*/ 15, /*->13963*/
/*13948*/     OPC_CheckInteger, 93|128,2/*349*/, 
/*13951*/     OPC_MoveParent,
/*13952*/     OPC_RecordChild1, // #0 = $src1
/*13953*/     OPC_RecordChild2, // #1 = $src2
/*13954*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_cmpgtu), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 349:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_C2_cmpgtu:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*13963*/   /*Scope*/ 15, /*->13979*/
/*13964*/     OPC_CheckInteger, 96|128,2/*352*/, 
/*13967*/     OPC_MoveParent,
/*13968*/     OPC_RecordChild1, // #0 = $src1
/*13969*/     OPC_RecordChild2, // #1 = $src2
/*13970*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_cmplt), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 352:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_C2_cmplt:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*13979*/   /*Scope*/ 15, /*->13995*/
/*13980*/     OPC_CheckInteger, 97|128,2/*353*/, 
/*13983*/     OPC_MoveParent,
/*13984*/     OPC_RecordChild1, // #0 = $src1
/*13985*/     OPC_RecordChild2, // #1 = $src2
/*13986*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_cmpltu), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 353:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_C2_cmpltu:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*13995*/   /*Scope*/ 15, /*->14011*/
/*13996*/     OPC_CheckInteger, 107|128,1/*235*/, 
/*13999*/     OPC_MoveParent,
/*14000*/     OPC_RecordChild1, // #0 = $src1
/*14001*/     OPC_RecordChild2, // #1 = $src2
/*14002*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_svaddh), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 235:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_svaddh:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14011*/   /*Scope*/ 15, /*->14027*/
/*14012*/     OPC_CheckInteger, 108|128,1/*236*/, 
/*14015*/     OPC_MoveParent,
/*14016*/     OPC_RecordChild1, // #0 = $src1
/*14017*/     OPC_RecordChild2, // #1 = $src2
/*14018*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_svaddhs), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 236:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_svaddhs:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14027*/   /*Scope*/ 15, /*->14043*/
/*14028*/     OPC_CheckInteger, 109|128,1/*237*/, 
/*14031*/     OPC_MoveParent,
/*14032*/     OPC_RecordChild1, // #0 = $src1
/*14033*/     OPC_RecordChild2, // #1 = $src2
/*14034*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_svadduhs), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 237:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_svadduhs:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14043*/   /*Scope*/ 15, /*->14059*/
/*14044*/     OPC_CheckInteger, 110|128,1/*238*/, 
/*14047*/     OPC_MoveParent,
/*14048*/     OPC_RecordChild1, // #0 = $src1
/*14049*/     OPC_RecordChild2, // #1 = $src2
/*14050*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_svavgh), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 238:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_svavgh:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14059*/   /*Scope*/ 15, /*->14075*/
/*14060*/     OPC_CheckInteger, 111|128,1/*239*/, 
/*14063*/     OPC_MoveParent,
/*14064*/     OPC_RecordChild1, // #0 = $src1
/*14065*/     OPC_RecordChild2, // #1 = $src2
/*14066*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_svavghs), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 239:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_svavghs:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14075*/   /*Scope*/ 15, /*->14091*/
/*14076*/     OPC_CheckInteger, 112|128,1/*240*/, 
/*14079*/     OPC_MoveParent,
/*14080*/     OPC_RecordChild1, // #0 = $src1
/*14081*/     OPC_RecordChild2, // #1 = $src2
/*14082*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_svnavgh), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 240:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_svnavgh:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14091*/   /*Scope*/ 15, /*->14107*/
/*14092*/     OPC_CheckInteger, 113|128,1/*241*/, 
/*14095*/     OPC_MoveParent,
/*14096*/     OPC_RecordChild1, // #0 = $src1
/*14097*/     OPC_RecordChild2, // #1 = $src2
/*14098*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_svsubh), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 241:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_svsubh:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14107*/   /*Scope*/ 15, /*->14123*/
/*14108*/     OPC_CheckInteger, 114|128,1/*242*/, 
/*14111*/     OPC_MoveParent,
/*14112*/     OPC_RecordChild1, // #0 = $src1
/*14113*/     OPC_RecordChild2, // #1 = $src2
/*14114*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_svsubhs), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 242:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_svsubhs:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14123*/   /*Scope*/ 15, /*->14139*/
/*14124*/     OPC_CheckInteger, 115|128,1/*243*/, 
/*14127*/     OPC_MoveParent,
/*14128*/     OPC_RecordChild1, // #0 = $src1
/*14129*/     OPC_RecordChild2, // #1 = $src2
/*14130*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_svsubuhs), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 243:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_svsubuhs:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14139*/   /*Scope*/ 15, /*->14155*/
/*14140*/     OPC_CheckInteger, 55|128,1/*183*/, 
/*14143*/     OPC_MoveParent,
/*14144*/     OPC_RecordChild1, // #0 = $src1
/*14145*/     OPC_RecordChild2, // #1 = $src2
/*14146*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_addp), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 183:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_addp:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*14155*/   /*Scope*/ 15, /*->14171*/
/*14156*/     OPC_CheckInteger, 57|128,1/*185*/, 
/*14159*/     OPC_MoveParent,
/*14160*/     OPC_RecordChild1, // #0 = $src1
/*14161*/     OPC_RecordChild2, // #1 = $src2
/*14162*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_addsat), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 185:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_addsat:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14171*/   /*Scope*/ 15, /*->14187*/
/*14172*/     OPC_CheckInteger, 47|128,1/*175*/, 
/*14175*/     OPC_MoveParent,
/*14176*/     OPC_RecordChild1, // #0 = $src1
/*14177*/     OPC_RecordChild2, // #1 = $src2
/*14178*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_addh_l16_hl), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 175:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_addh_l16_hl:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14187*/   /*Scope*/ 15, /*->14203*/
/*14188*/     OPC_CheckInteger, 49|128,1/*177*/, 
/*14191*/     OPC_MoveParent,
/*14192*/     OPC_RecordChild1, // #0 = $src1
/*14193*/     OPC_RecordChild2, // #1 = $src2
/*14194*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_addh_l16_ll), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 177:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_addh_l16_ll:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14203*/   /*Scope*/ 15, /*->14219*/
/*14204*/     OPC_CheckInteger, 51|128,1/*179*/, 
/*14207*/     OPC_MoveParent,
/*14208*/     OPC_RecordChild1, // #0 = $src1
/*14209*/     OPC_RecordChild2, // #1 = $src2
/*14210*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_addh_l16_sat_hl), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 179:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_addh_l16_sat_hl:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14219*/   /*Scope*/ 15, /*->14235*/
/*14220*/     OPC_CheckInteger, 53|128,1/*181*/, 
/*14223*/     OPC_MoveParent,
/*14224*/     OPC_RecordChild1, // #0 = $src1
/*14225*/     OPC_RecordChild2, // #1 = $src2
/*14226*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_addh_l16_sat_ll), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 181:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_addh_l16_sat_ll:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14235*/   /*Scope*/ 15, /*->14251*/
/*14236*/     OPC_CheckInteger, 38|128,1/*166*/, 
/*14239*/     OPC_MoveParent,
/*14240*/     OPC_RecordChild1, // #0 = $src1
/*14241*/     OPC_RecordChild2, // #1 = $src2
/*14242*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_addh_h16_hh), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 166:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_addh_h16_hh:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14251*/   /*Scope*/ 15, /*->14267*/
/*14252*/     OPC_CheckInteger, 39|128,1/*167*/, 
/*14255*/     OPC_MoveParent,
/*14256*/     OPC_RecordChild1, // #0 = $src1
/*14257*/     OPC_RecordChild2, // #1 = $src2
/*14258*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_addh_h16_hl), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 167:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_addh_h16_hl:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14267*/   /*Scope*/ 15, /*->14283*/
/*14268*/     OPC_CheckInteger, 40|128,1/*168*/, 
/*14271*/     OPC_MoveParent,
/*14272*/     OPC_RecordChild1, // #0 = $src1
/*14273*/     OPC_RecordChild2, // #1 = $src2
/*14274*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_addh_h16_lh), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 168:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_addh_h16_lh:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14283*/   /*Scope*/ 15, /*->14299*/
/*14284*/     OPC_CheckInteger, 41|128,1/*169*/, 
/*14287*/     OPC_MoveParent,
/*14288*/     OPC_RecordChild1, // #0 = $src1
/*14289*/     OPC_RecordChild2, // #1 = $src2
/*14290*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_addh_h16_ll), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 169:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_addh_h16_ll:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14299*/   /*Scope*/ 15, /*->14315*/
/*14300*/     OPC_CheckInteger, 42|128,1/*170*/, 
/*14303*/     OPC_MoveParent,
/*14304*/     OPC_RecordChild1, // #0 = $src1
/*14305*/     OPC_RecordChild2, // #1 = $src2
/*14306*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_addh_h16_sat_hh), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 170:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_addh_h16_sat_hh:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14315*/   /*Scope*/ 15, /*->14331*/
/*14316*/     OPC_CheckInteger, 43|128,1/*171*/, 
/*14319*/     OPC_MoveParent,
/*14320*/     OPC_RecordChild1, // #0 = $src1
/*14321*/     OPC_RecordChild2, // #1 = $src2
/*14322*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_addh_h16_sat_hl), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 171:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_addh_h16_sat_hl:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14331*/   /*Scope*/ 15, /*->14347*/
/*14332*/     OPC_CheckInteger, 44|128,1/*172*/, 
/*14335*/     OPC_MoveParent,
/*14336*/     OPC_RecordChild1, // #0 = $src1
/*14337*/     OPC_RecordChild2, // #1 = $src2
/*14338*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_addh_h16_sat_lh), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 172:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_addh_h16_sat_lh:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14347*/   /*Scope*/ 15, /*->14363*/
/*14348*/     OPC_CheckInteger, 45|128,1/*173*/, 
/*14351*/     OPC_MoveParent,
/*14352*/     OPC_RecordChild1, // #0 = $src1
/*14353*/     OPC_RecordChild2, // #1 = $src2
/*14354*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_addh_h16_sat_ll), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 173:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_addh_h16_sat_ll:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14363*/   /*Scope*/ 15, /*->14379*/
/*14364*/     OPC_CheckInteger, 87|128,2/*343*/, 
/*14367*/     OPC_MoveParent,
/*14368*/     OPC_RecordChild1, // #0 = $src1
/*14369*/     OPC_RecordChild2, // #1 = $src2
/*14370*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_cmpeqp), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 343:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_C2_cmpeqp:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*14379*/   /*Scope*/ 15, /*->14395*/
/*14380*/     OPC_CheckInteger, 92|128,2/*348*/, 
/*14383*/     OPC_MoveParent,
/*14384*/     OPC_RecordChild1, // #0 = $src1
/*14385*/     OPC_RecordChild2, // #1 = $src2
/*14386*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_cmpgtp), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 348:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_C2_cmpgtp:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*14395*/   /*Scope*/ 15, /*->14411*/
/*14396*/     OPC_CheckInteger, 95|128,2/*351*/, 
/*14399*/     OPC_MoveParent,
/*14400*/     OPC_RecordChild1, // #0 = $src1
/*14401*/     OPC_RecordChild2, // #1 = $src2
/*14402*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_cmpgtup), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 351:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_C2_cmpgtup:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*14411*/   /*Scope*/ 15, /*->14427*/
/*14412*/     OPC_CheckInteger, 61|128,1/*189*/, 
/*14415*/     OPC_MoveParent,
/*14416*/     OPC_RecordChild1, // #0 = $src1
/*14417*/     OPC_RecordChild2, // #1 = $src2
/*14418*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_andp), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 189:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_andp:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*14427*/   /*Scope*/ 15, /*->14443*/
/*14428*/     OPC_CheckInteger, 85|128,1/*213*/, 
/*14431*/     OPC_MoveParent,
/*14432*/     OPC_RecordChild1, // #0 = $src1
/*14433*/     OPC_RecordChild2, // #1 = $src2
/*14434*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_orp), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 213:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_orp:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*14443*/   /*Scope*/ 15, /*->14459*/
/*14444*/     OPC_CheckInteger, 58|128,2/*314*/, 
/*14447*/     OPC_MoveParent,
/*14448*/     OPC_RecordChild1, // #0 = $src1
/*14449*/     OPC_RecordChild2, // #1 = $src2
/*14450*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_xorp), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 314:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_xorp:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*14459*/   /*Scope*/ 15, /*->14475*/
/*14460*/     OPC_CheckInteger, 70|128,1/*198*/, 
/*14463*/     OPC_MoveParent,
/*14464*/     OPC_RecordChild1, // #0 = $src1
/*14465*/     OPC_RecordChild2, // #1 = $src2
/*14466*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_max), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 198:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_max:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14475*/   /*Scope*/ 15, /*->14491*/
/*14476*/     OPC_CheckInteger, 72|128,1/*200*/, 
/*14479*/     OPC_MoveParent,
/*14480*/     OPC_RecordChild1, // #0 = $src1
/*14481*/     OPC_RecordChild2, // #1 = $src2
/*14482*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_maxu), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 200:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_maxu:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14491*/   /*Scope*/ 15, /*->14507*/
/*14492*/     OPC_CheckInteger, 74|128,1/*202*/, 
/*14495*/     OPC_MoveParent,
/*14496*/     OPC_RecordChild1, // #0 = $src1
/*14497*/     OPC_RecordChild2, // #1 = $src2
/*14498*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_min), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 202:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_min:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14507*/   /*Scope*/ 15, /*->14523*/
/*14508*/     OPC_CheckInteger, 76|128,1/*204*/, 
/*14511*/     OPC_MoveParent,
/*14512*/     OPC_RecordChild1, // #0 = $src1
/*14513*/     OPC_RecordChild2, // #1 = $src2
/*14514*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_minu), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 204:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_minu:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14523*/   /*Scope*/ 15, /*->14539*/
/*14524*/     OPC_CheckInteger, 104|128,1/*232*/, 
/*14527*/     OPC_MoveParent,
/*14528*/     OPC_RecordChild1, // #0 = $src1
/*14529*/     OPC_RecordChild2, // #1 = $src2
/*14530*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_subp), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 232:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_subp:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*14539*/   /*Scope*/ 15, /*->14555*/
/*14540*/     OPC_CheckInteger, 106|128,1/*234*/, 
/*14543*/     OPC_MoveParent,
/*14544*/     OPC_RecordChild1, // #0 = $src1
/*14545*/     OPC_RecordChild2, // #1 = $src2
/*14546*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_subsat), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 234:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_subsat:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14555*/   /*Scope*/ 15, /*->14571*/
/*14556*/     OPC_CheckInteger, 100|128,1/*228*/, 
/*14559*/     OPC_MoveParent,
/*14560*/     OPC_RecordChild1, // #0 = $src1
/*14561*/     OPC_RecordChild2, // #1 = $src2
/*14562*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_subh_l16_hl), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 228:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_subh_l16_hl:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14571*/   /*Scope*/ 15, /*->14587*/
/*14572*/     OPC_CheckInteger, 101|128,1/*229*/, 
/*14575*/     OPC_MoveParent,
/*14576*/     OPC_RecordChild1, // #0 = $src1
/*14577*/     OPC_RecordChild2, // #1 = $src2
/*14578*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_subh_l16_ll), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 229:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_subh_l16_ll:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14587*/   /*Scope*/ 15, /*->14603*/
/*14588*/     OPC_CheckInteger, 102|128,1/*230*/, 
/*14591*/     OPC_MoveParent,
/*14592*/     OPC_RecordChild1, // #0 = $src1
/*14593*/     OPC_RecordChild2, // #1 = $src2
/*14594*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_subh_l16_sat_hl), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 230:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_subh_l16_sat_hl:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14603*/   /*Scope*/ 15, /*->14619*/
/*14604*/     OPC_CheckInteger, 103|128,1/*231*/, 
/*14607*/     OPC_MoveParent,
/*14608*/     OPC_RecordChild1, // #0 = $src1
/*14609*/     OPC_RecordChild2, // #1 = $src2
/*14610*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_subh_l16_sat_ll), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 231:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_subh_l16_sat_ll:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14619*/   /*Scope*/ 15, /*->14635*/
/*14620*/     OPC_CheckInteger, 92|128,1/*220*/, 
/*14623*/     OPC_MoveParent,
/*14624*/     OPC_RecordChild1, // #0 = $src1
/*14625*/     OPC_RecordChild2, // #1 = $src2
/*14626*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_subh_h16_hh), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 220:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_subh_h16_hh:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14635*/   /*Scope*/ 15, /*->14651*/
/*14636*/     OPC_CheckInteger, 93|128,1/*221*/, 
/*14639*/     OPC_MoveParent,
/*14640*/     OPC_RecordChild1, // #0 = $src1
/*14641*/     OPC_RecordChild2, // #1 = $src2
/*14642*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_subh_h16_hl), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 221:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_subh_h16_hl:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14651*/   /*Scope*/ 15, /*->14667*/
/*14652*/     OPC_CheckInteger, 94|128,1/*222*/, 
/*14655*/     OPC_MoveParent,
/*14656*/     OPC_RecordChild1, // #0 = $src1
/*14657*/     OPC_RecordChild2, // #1 = $src2
/*14658*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_subh_h16_lh), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 222:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_subh_h16_lh:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14667*/   /*Scope*/ 15, /*->14683*/
/*14668*/     OPC_CheckInteger, 95|128,1/*223*/, 
/*14671*/     OPC_MoveParent,
/*14672*/     OPC_RecordChild1, // #0 = $src1
/*14673*/     OPC_RecordChild2, // #1 = $src2
/*14674*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_subh_h16_ll), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 223:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_subh_h16_ll:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14683*/   /*Scope*/ 15, /*->14699*/
/*14684*/     OPC_CheckInteger, 96|128,1/*224*/, 
/*14687*/     OPC_MoveParent,
/*14688*/     OPC_RecordChild1, // #0 = $src1
/*14689*/     OPC_RecordChild2, // #1 = $src2
/*14690*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_subh_h16_sat_hh), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 224:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_subh_h16_sat_hh:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14699*/   /*Scope*/ 15, /*->14715*/
/*14700*/     OPC_CheckInteger, 97|128,1/*225*/, 
/*14703*/     OPC_MoveParent,
/*14704*/     OPC_RecordChild1, // #0 = $src1
/*14705*/     OPC_RecordChild2, // #1 = $src2
/*14706*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_subh_h16_sat_hl), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 225:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_subh_h16_sat_hl:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14715*/   /*Scope*/ 15, /*->14731*/
/*14716*/     OPC_CheckInteger, 98|128,1/*226*/, 
/*14719*/     OPC_MoveParent,
/*14720*/     OPC_RecordChild1, // #0 = $src1
/*14721*/     OPC_RecordChild2, // #1 = $src2
/*14722*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_subh_h16_sat_lh), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 226:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_subh_h16_sat_lh:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14731*/   /*Scope*/ 15, /*->14747*/
/*14732*/     OPC_CheckInteger, 99|128,1/*227*/, 
/*14735*/     OPC_MoveParent,
/*14736*/     OPC_RecordChild1, // #0 = $src1
/*14737*/     OPC_RecordChild2, // #1 = $src2
/*14738*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_subh_h16_sat_ll), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 227:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_subh_h16_sat_ll:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14747*/   /*Scope*/ 13, /*->14761*/
/*14748*/     OPC_CheckInteger, 123|128,1/*251*/, 
/*14751*/     OPC_MoveParent,
/*14752*/     OPC_RecordChild1, // #0 = $src
/*14753*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_tfrp), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i64 251:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_A2_tfrp:i64 DoubleRegs:i64:$src)
/*14761*/   /*Scope*/ 15, /*->14777*/
/*14762*/     OPC_CheckInteger, 7|128,6/*775*/, 
/*14765*/     OPC_MoveParent,
/*14766*/     OPC_RecordChild1, // #0 = $src1
/*14767*/     OPC_RecordChild2, // #1 = $src2
/*14768*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_parityp), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 775:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_parityp:i32 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*14777*/   /*Scope*/ 15, /*->14793*/
/*14778*/     OPC_CheckInteger, 6|128,6/*774*/, 
/*14781*/     OPC_MoveParent,
/*14782*/     OPC_RecordChild1, // #0 = $src1
/*14783*/     OPC_RecordChild2, // #1 = $src2
/*14784*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_packhl), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 774:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_packhl:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*14793*/   /*Scope*/ 15, /*->14809*/
/*14794*/     OPC_CheckInteger, 4|128,2/*260*/, 
/*14797*/     OPC_MoveParent,
/*14798*/     OPC_RecordChild1, // #0 = $src1
/*14799*/     OPC_RecordChild2, // #1 = $src2
/*14800*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vaddub), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 260:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vaddub:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*14809*/   /*Scope*/ 15, /*->14825*/
/*14810*/     OPC_CheckInteger, 5|128,2/*261*/, 
/*14813*/     OPC_MoveParent,
/*14814*/     OPC_RecordChild1, // #0 = $src1
/*14815*/     OPC_RecordChild2, // #1 = $src2
/*14816*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vaddubs), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 261:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vaddubs:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*14825*/   /*Scope*/ 15, /*->14841*/
/*14826*/     OPC_CheckInteger, 12|128,2/*268*/, 
/*14829*/     OPC_MoveParent,
/*14830*/     OPC_RecordChild1, // #0 = $src1
/*14831*/     OPC_RecordChild2, // #1 = $src2
/*14832*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vavgub), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 268:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vavgub:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*14841*/   /*Scope*/ 15, /*->14857*/
/*14842*/     OPC_CheckInteger, 13|128,2/*269*/, 
/*14845*/     OPC_MoveParent,
/*14846*/     OPC_RecordChild1, // #0 = $src1
/*14847*/     OPC_RecordChild2, // #1 = $src2
/*14848*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vavgubr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 269:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vavgubr:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*14857*/   /*Scope*/ 15, /*->14873*/
/*14858*/     OPC_CheckInteger, 21|128,2/*277*/, 
/*14861*/     OPC_MoveParent,
/*14862*/     OPC_RecordChild1, // #0 = $src1
/*14863*/     OPC_RecordChild2, // #1 = $src2
/*14864*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vcmpbeq), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 277:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vcmpbeq:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*14873*/   /*Scope*/ 15, /*->14889*/
/*14874*/     OPC_CheckInteger, 22|128,2/*278*/, 
/*14877*/     OPC_MoveParent,
/*14878*/     OPC_RecordChild1, // #0 = $src1
/*14879*/     OPC_RecordChild2, // #1 = $src2
/*14880*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vcmpbgtu), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 278:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vcmpbgtu:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*14889*/   /*Scope*/ 15, /*->14905*/
/*14890*/     OPC_CheckInteger, 31|128,2/*287*/, 
/*14893*/     OPC_MoveParent,
/*14894*/     OPC_RecordChild1, // #0 = $src1
/*14895*/     OPC_RecordChild2, // #1 = $src2
/*14896*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vmaxub), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 287:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vmaxub:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*14905*/   /*Scope*/ 15, /*->14921*/
/*14906*/     OPC_CheckInteger, 36|128,2/*292*/, 
/*14909*/     OPC_MoveParent,
/*14910*/     OPC_RecordChild1, // #0 = $src1
/*14911*/     OPC_RecordChild2, // #1 = $src2
/*14912*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vminub), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 292:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vminub:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*14921*/   /*Scope*/ 15, /*->14937*/
/*14922*/     OPC_CheckInteger, 52|128,2/*308*/, 
/*14925*/     OPC_MoveParent,
/*14926*/     OPC_RecordChild1, // #0 = $src1
/*14927*/     OPC_RecordChild2, // #1 = $src2
/*14928*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vsubub), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 308:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vsubub:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*14937*/   /*Scope*/ 15, /*->14953*/
/*14938*/     OPC_CheckInteger, 53|128,2/*309*/, 
/*14941*/     OPC_MoveParent,
/*14942*/     OPC_RecordChild1, // #0 = $src1
/*14943*/     OPC_RecordChild2, // #1 = $src2
/*14944*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vsububs), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 309:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vsububs:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*14953*/   /*Scope*/ 17, /*->14971*/
/*14954*/     OPC_CheckInteger, 110|128,2/*366*/, 
/*14957*/     OPC_MoveParent,
/*14958*/     OPC_RecordChild1, // #0 = $src1
/*14959*/     OPC_RecordChild2, // #1 = $src2
/*14960*/     OPC_RecordChild3, // #2 = $src3
/*14961*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_vmux), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 366:iPTR, IntRegs:i32:$src1, DoubleRegs:i64:$src2, DoubleRegs:i64:$src3) - Complexity = 8
              // Dst: (Hexagon_C2_vmux:i64 IntRegs:i32:$src1, DoubleRegs:i64:$src2, DoubleRegs:i64:$src3)
/*14971*/   /*Scope*/ 15, /*->14987*/
/*14972*/     OPC_CheckInteger, 2|128,2/*258*/, 
/*14975*/     OPC_MoveParent,
/*14976*/     OPC_RecordChild1, // #0 = $src1
/*14977*/     OPC_RecordChild2, // #1 = $src2
/*14978*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vaddh), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 258:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vaddh:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*14987*/   /*Scope*/ 15, /*->15003*/
/*14988*/     OPC_CheckInteger, 3|128,2/*259*/, 
/*14991*/     OPC_MoveParent,
/*14992*/     OPC_RecordChild1, // #0 = $src1
/*14993*/     OPC_RecordChild2, // #1 = $src2
/*14994*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vaddhs), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 259:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vaddhs:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15003*/   /*Scope*/ 15, /*->15019*/
/*15004*/     OPC_CheckInteger, 6|128,2/*262*/, 
/*15007*/     OPC_MoveParent,
/*15008*/     OPC_RecordChild1, // #0 = $src1
/*15009*/     OPC_RecordChild2, // #1 = $src2
/*15010*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vadduhs), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 262:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vadduhs:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15019*/   /*Scope*/ 15, /*->15035*/
/*15020*/     OPC_CheckInteger, 9|128,2/*265*/, 
/*15023*/     OPC_MoveParent,
/*15024*/     OPC_RecordChild1, // #0 = $src1
/*15025*/     OPC_RecordChild2, // #1 = $src2
/*15026*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vavgh), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 265:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vavgh:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15035*/   /*Scope*/ 15, /*->15051*/
/*15036*/     OPC_CheckInteger, 10|128,2/*266*/, 
/*15039*/     OPC_MoveParent,
/*15040*/     OPC_RecordChild1, // #0 = $src1
/*15041*/     OPC_RecordChild2, // #1 = $src2
/*15042*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vavghcr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 266:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vavghcr:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15051*/   /*Scope*/ 15, /*->15067*/
/*15052*/     OPC_CheckInteger, 11|128,2/*267*/, 
/*15055*/     OPC_MoveParent,
/*15056*/     OPC_RecordChild1, // #0 = $src1
/*15057*/     OPC_RecordChild2, // #1 = $src2
/*15058*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vavghr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 267:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vavghr:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15067*/   /*Scope*/ 15, /*->15083*/
/*15068*/     OPC_CheckInteger, 14|128,2/*270*/, 
/*15071*/     OPC_MoveParent,
/*15072*/     OPC_RecordChild1, // #0 = $src1
/*15073*/     OPC_RecordChild2, // #1 = $src2
/*15074*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vavguh), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 270:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vavguh:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15083*/   /*Scope*/ 15, /*->15099*/
/*15084*/     OPC_CheckInteger, 15|128,2/*271*/, 
/*15087*/     OPC_MoveParent,
/*15088*/     OPC_RecordChild1, // #0 = $src1
/*15089*/     OPC_RecordChild2, // #1 = $src2
/*15090*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vavguhr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 271:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vavguhr:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15099*/   /*Scope*/ 15, /*->15115*/
/*15100*/     OPC_CheckInteger, 40|128,2/*296*/, 
/*15103*/     OPC_MoveParent,
/*15104*/     OPC_RecordChild1, // #0 = $src1
/*15105*/     OPC_RecordChild2, // #1 = $src2
/*15106*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vnavgh), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 296:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vnavgh:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15115*/   /*Scope*/ 15, /*->15131*/
/*15116*/     OPC_CheckInteger, 41|128,2/*297*/, 
/*15119*/     OPC_MoveParent,
/*15120*/     OPC_RecordChild1, // #0 = $src1
/*15121*/     OPC_RecordChild2, // #1 = $src2
/*15122*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vnavghcr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 297:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vnavghcr:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15131*/   /*Scope*/ 15, /*->15147*/
/*15132*/     OPC_CheckInteger, 42|128,2/*298*/, 
/*15135*/     OPC_MoveParent,
/*15136*/     OPC_RecordChild1, // #0 = $src1
/*15137*/     OPC_RecordChild2, // #1 = $src2
/*15138*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vnavghr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 298:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vnavghr:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15147*/   /*Scope*/ 15, /*->15163*/
/*15148*/     OPC_CheckInteger, 23|128,2/*279*/, 
/*15151*/     OPC_MoveParent,
/*15152*/     OPC_RecordChild1, // #0 = $src1
/*15153*/     OPC_RecordChild2, // #1 = $src2
/*15154*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vcmpheq), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 279:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vcmpheq:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15163*/   /*Scope*/ 15, /*->15179*/
/*15164*/     OPC_CheckInteger, 24|128,2/*280*/, 
/*15167*/     OPC_MoveParent,
/*15168*/     OPC_RecordChild1, // #0 = $src1
/*15169*/     OPC_RecordChild2, // #1 = $src2
/*15170*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vcmphgt), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 280:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vcmphgt:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15179*/   /*Scope*/ 15, /*->15195*/
/*15180*/     OPC_CheckInteger, 25|128,2/*281*/, 
/*15183*/     OPC_MoveParent,
/*15184*/     OPC_RecordChild1, // #0 = $src1
/*15185*/     OPC_RecordChild2, // #1 = $src2
/*15186*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vcmphgtu), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 281:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vcmphgtu:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15195*/   /*Scope*/ 15, /*->15211*/
/*15196*/     OPC_CheckInteger, 30|128,2/*286*/, 
/*15199*/     OPC_MoveParent,
/*15200*/     OPC_RecordChild1, // #0 = $src1
/*15201*/     OPC_RecordChild2, // #1 = $src2
/*15202*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vmaxh), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 286:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vmaxh:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15211*/   /*Scope*/ 15, /*->15227*/
/*15212*/     OPC_CheckInteger, 32|128,2/*288*/, 
/*15215*/     OPC_MoveParent,
/*15216*/     OPC_RecordChild1, // #0 = $src1
/*15217*/     OPC_RecordChild2, // #1 = $src2
/*15218*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vmaxuh), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 288:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vmaxuh:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15227*/   /*Scope*/ 15, /*->15243*/
/*15228*/     OPC_CheckInteger, 35|128,2/*291*/, 
/*15231*/     OPC_MoveParent,
/*15232*/     OPC_RecordChild1, // #0 = $src1
/*15233*/     OPC_RecordChild2, // #1 = $src2
/*15234*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vminh), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 291:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vminh:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15243*/   /*Scope*/ 15, /*->15259*/
/*15244*/     OPC_CheckInteger, 37|128,2/*293*/, 
/*15247*/     OPC_MoveParent,
/*15248*/     OPC_RecordChild1, // #0 = $src1
/*15249*/     OPC_RecordChild2, // #1 = $src2
/*15250*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vminuh), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 293:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vminuh:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15259*/   /*Scope*/ 15, /*->15275*/
/*15260*/     OPC_CheckInteger, 50|128,2/*306*/, 
/*15263*/     OPC_MoveParent,
/*15264*/     OPC_RecordChild1, // #0 = $src1
/*15265*/     OPC_RecordChild2, // #1 = $src2
/*15266*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vsubh), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 306:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vsubh:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15275*/   /*Scope*/ 15, /*->15291*/
/*15276*/     OPC_CheckInteger, 51|128,2/*307*/, 
/*15279*/     OPC_MoveParent,
/*15280*/     OPC_RecordChild1, // #0 = $src1
/*15281*/     OPC_RecordChild2, // #1 = $src2
/*15282*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vsubhs), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 307:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vsubhs:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15291*/   /*Scope*/ 15, /*->15307*/
/*15292*/     OPC_CheckInteger, 54|128,2/*310*/, 
/*15295*/     OPC_MoveParent,
/*15296*/     OPC_RecordChild1, // #0 = $src1
/*15297*/     OPC_RecordChild2, // #1 = $src2
/*15298*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vsubuhs), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 310:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vsubuhs:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15307*/   /*Scope*/ 15, /*->15323*/
/*15308*/     OPC_CheckInteger, 7|128,2/*263*/, 
/*15311*/     OPC_MoveParent,
/*15312*/     OPC_RecordChild1, // #0 = $src1
/*15313*/     OPC_RecordChild2, // #1 = $src2
/*15314*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vaddw), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 263:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vaddw:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15323*/   /*Scope*/ 15, /*->15339*/
/*15324*/     OPC_CheckInteger, 8|128,2/*264*/, 
/*15327*/     OPC_MoveParent,
/*15328*/     OPC_RecordChild1, // #0 = $src1
/*15329*/     OPC_RecordChild2, // #1 = $src2
/*15330*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vaddws), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 264:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vaddws:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15339*/   /*Scope*/ 15, /*->15355*/
/*15340*/     OPC_CheckInteger, 16|128,2/*272*/, 
/*15343*/     OPC_MoveParent,
/*15344*/     OPC_RecordChild1, // #0 = $src1
/*15345*/     OPC_RecordChild2, // #1 = $src2
/*15346*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vavguw), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 272:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vavguw:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15355*/   /*Scope*/ 15, /*->15371*/
/*15356*/     OPC_CheckInteger, 17|128,2/*273*/, 
/*15359*/     OPC_MoveParent,
/*15360*/     OPC_RecordChild1, // #0 = $src1
/*15361*/     OPC_RecordChild2, // #1 = $src2
/*15362*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vavguwr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 273:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vavguwr:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15371*/   /*Scope*/ 15, /*->15387*/
/*15372*/     OPC_CheckInteger, 18|128,2/*274*/, 
/*15375*/     OPC_MoveParent,
/*15376*/     OPC_RecordChild1, // #0 = $src1
/*15377*/     OPC_RecordChild2, // #1 = $src2
/*15378*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vavgw), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 274:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vavgw:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15387*/   /*Scope*/ 15, /*->15403*/
/*15388*/     OPC_CheckInteger, 19|128,2/*275*/, 
/*15391*/     OPC_MoveParent,
/*15392*/     OPC_RecordChild1, // #0 = $src1
/*15393*/     OPC_RecordChild2, // #1 = $src2
/*15394*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vavgwcr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 275:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vavgwcr:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15403*/   /*Scope*/ 15, /*->15419*/
/*15404*/     OPC_CheckInteger, 20|128,2/*276*/, 
/*15407*/     OPC_MoveParent,
/*15408*/     OPC_RecordChild1, // #0 = $src1
/*15409*/     OPC_RecordChild2, // #1 = $src2
/*15410*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vavgwr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 276:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vavgwr:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15419*/   /*Scope*/ 15, /*->15435*/
/*15420*/     OPC_CheckInteger, 43|128,2/*299*/, 
/*15423*/     OPC_MoveParent,
/*15424*/     OPC_RecordChild1, // #0 = $src1
/*15425*/     OPC_RecordChild2, // #1 = $src2
/*15426*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vnavgw), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 299:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vnavgw:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15435*/   /*Scope*/ 15, /*->15451*/
/*15436*/     OPC_CheckInteger, 44|128,2/*300*/, 
/*15439*/     OPC_MoveParent,
/*15440*/     OPC_RecordChild1, // #0 = $src1
/*15441*/     OPC_RecordChild2, // #1 = $src2
/*15442*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vnavgwcr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 300:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vnavgwcr:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15451*/   /*Scope*/ 15, /*->15467*/
/*15452*/     OPC_CheckInteger, 45|128,2/*301*/, 
/*15455*/     OPC_MoveParent,
/*15456*/     OPC_RecordChild1, // #0 = $src1
/*15457*/     OPC_RecordChild2, // #1 = $src2
/*15458*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vnavgwr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 301:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vnavgwr:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15467*/   /*Scope*/ 15, /*->15483*/
/*15468*/     OPC_CheckInteger, 26|128,2/*282*/, 
/*15471*/     OPC_MoveParent,
/*15472*/     OPC_RecordChild1, // #0 = $src1
/*15473*/     OPC_RecordChild2, // #1 = $src2
/*15474*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vcmpweq), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 282:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vcmpweq:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15483*/   /*Scope*/ 15, /*->15499*/
/*15484*/     OPC_CheckInteger, 27|128,2/*283*/, 
/*15487*/     OPC_MoveParent,
/*15488*/     OPC_RecordChild1, // #0 = $src1
/*15489*/     OPC_RecordChild2, // #1 = $src2
/*15490*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vcmpwgt), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 283:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vcmpwgt:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15499*/   /*Scope*/ 15, /*->15515*/
/*15500*/     OPC_CheckInteger, 28|128,2/*284*/, 
/*15503*/     OPC_MoveParent,
/*15504*/     OPC_RecordChild1, // #0 = $src1
/*15505*/     OPC_RecordChild2, // #1 = $src2
/*15506*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vcmpwgtu), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 284:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vcmpwgtu:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15515*/   /*Scope*/ 15, /*->15531*/
/*15516*/     OPC_CheckInteger, 34|128,2/*290*/, 
/*15519*/     OPC_MoveParent,
/*15520*/     OPC_RecordChild1, // #0 = $src1
/*15521*/     OPC_RecordChild2, // #1 = $src2
/*15522*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vmaxw), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 290:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vmaxw:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15531*/   /*Scope*/ 15, /*->15547*/
/*15532*/     OPC_CheckInteger, 33|128,2/*289*/, 
/*15535*/     OPC_MoveParent,
/*15536*/     OPC_RecordChild1, // #0 = $src1
/*15537*/     OPC_RecordChild2, // #1 = $src2
/*15538*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vmaxuw), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 289:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vmaxuw:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15547*/   /*Scope*/ 15, /*->15563*/
/*15548*/     OPC_CheckInteger, 39|128,2/*295*/, 
/*15551*/     OPC_MoveParent,
/*15552*/     OPC_RecordChild1, // #0 = $src1
/*15553*/     OPC_RecordChild2, // #1 = $src2
/*15554*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vminw), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 295:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vminw:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15563*/   /*Scope*/ 15, /*->15579*/
/*15564*/     OPC_CheckInteger, 38|128,2/*294*/, 
/*15567*/     OPC_MoveParent,
/*15568*/     OPC_RecordChild1, // #0 = $src1
/*15569*/     OPC_RecordChild2, // #1 = $src2
/*15570*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vminuw), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 294:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vminuw:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15579*/   /*Scope*/ 15, /*->15595*/
/*15580*/     OPC_CheckInteger, 55|128,2/*311*/, 
/*15583*/     OPC_MoveParent,
/*15584*/     OPC_RecordChild1, // #0 = $src1
/*15585*/     OPC_RecordChild2, // #1 = $src2
/*15586*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vsubw), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 311:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vsubw:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15595*/   /*Scope*/ 15, /*->15611*/
/*15596*/     OPC_CheckInteger, 56|128,2/*312*/, 
/*15599*/     OPC_MoveParent,
/*15600*/     OPC_RecordChild1, // #0 = $src1
/*15601*/     OPC_RecordChild2, // #1 = $src2
/*15602*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vsubws), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 312:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vsubws:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15611*/   /*Scope*/ 13, /*->15625*/
/*15612*/     OPC_CheckInteger, 78|128,2/*334*/, 
/*15615*/     OPC_MoveParent,
/*15616*/     OPC_RecordChild1, // #0 = $src
/*15617*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_all8), 0,
                  1/*#VTs*/, MVT::i1, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i1 334:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_C2_all8:i1 IntRegs:i32:$src)
/*15625*/   /*Scope*/ 13, /*->15639*/
/*15626*/     OPC_CheckInteger, 81|128,2/*337*/, 
/*15629*/     OPC_MoveParent,
/*15630*/     OPC_RecordChild1, // #0 = $src
/*15631*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_any8), 0,
                  1/*#VTs*/, MVT::i1, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i1 337:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_C2_any8:i1 IntRegs:i32:$src)
/*15639*/   /*Scope*/ 13, /*->15653*/
/*15640*/     OPC_CheckInteger, 106|128,2/*362*/, 
/*15643*/     OPC_MoveParent,
/*15644*/     OPC_RecordChild1, // #0 = $src
/*15645*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_pxfer_map), 0,
                  1/*#VTs*/, MVT::i1, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i1 362:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_C2_pxfer_map:i1 IntRegs:i32:$src)
/*15653*/   /*Scope*/ 15, /*->15669*/
/*15654*/     OPC_CheckInteger, 79|128,2/*335*/, 
/*15657*/     OPC_MoveParent,
/*15658*/     OPC_RecordChild1, // #0 = $src1
/*15659*/     OPC_RecordChild2, // #1 = $src2
/*15660*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_and), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 335:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_C2_and:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*15669*/   /*Scope*/ 15, /*->15685*/
/*15670*/     OPC_CheckInteger, 80|128,2/*336*/, 
/*15673*/     OPC_MoveParent,
/*15674*/     OPC_RecordChild1, // #0 = $src1
/*15675*/     OPC_RecordChild2, // #1 = $src2
/*15676*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_andn), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 336:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_C2_andn:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*15685*/   /*Scope*/ 13, /*->15699*/
/*15686*/     OPC_CheckInteger, 103|128,2/*359*/, 
/*15689*/     OPC_MoveParent,
/*15690*/     OPC_RecordChild1, // #0 = $src
/*15691*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_not), 0,
                  1/*#VTs*/, MVT::i1, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i1 359:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_C2_not:i1 IntRegs:i32:$src)
/*15699*/   /*Scope*/ 15, /*->15715*/
/*15700*/     OPC_CheckInteger, 104|128,2/*360*/, 
/*15703*/     OPC_MoveParent,
/*15704*/     OPC_RecordChild1, // #0 = $src1
/*15705*/     OPC_RecordChild2, // #1 = $src2
/*15706*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_or), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 360:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_C2_or:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*15715*/   /*Scope*/ 15, /*->15731*/
/*15716*/     OPC_CheckInteger, 105|128,2/*361*/, 
/*15719*/     OPC_MoveParent,
/*15720*/     OPC_RecordChild1, // #0 = $src1
/*15721*/     OPC_RecordChild2, // #1 = $src2
/*15722*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_orn), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 361:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_C2_orn:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*15731*/   /*Scope*/ 15, /*->15747*/
/*15732*/     OPC_CheckInteger, 111|128,2/*367*/, 
/*15735*/     OPC_MoveParent,
/*15736*/     OPC_RecordChild1, // #0 = $src1
/*15737*/     OPC_RecordChild2, // #1 = $src2
/*15738*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_xor), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 367:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_C2_xor:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*15747*/   /*Scope*/ 17, /*->15765*/
/*15748*/     OPC_CheckInteger, 0|128,3/*384*/, 
/*15751*/     OPC_MoveParent,
/*15752*/     OPC_RecordChild1, // #0 = $dst2
/*15753*/     OPC_RecordChild2, // #1 = $src2
/*15754*/     OPC_RecordChild3, // #2 = $src3
/*15755*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_acci), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 384:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (Hexagon_M2_acci:i32 IntRegs:i32:$dst2, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*15765*/   /*Scope*/ 17, /*->15783*/
/*15766*/     OPC_CheckInteger, 87|128,4/*599*/, 
/*15769*/     OPC_MoveParent,
/*15770*/     OPC_RecordChild1, // #0 = $dst2
/*15771*/     OPC_RecordChild2, // #1 = $src2
/*15772*/     OPC_RecordChild3, // #2 = $src3
/*15773*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_nacci), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 599:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (Hexagon_M2_nacci:i32 IntRegs:i32:$dst2, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*15783*/   /*Scope*/ 17, /*->15801*/
/*15784*/     OPC_CheckInteger, 89|128,4/*601*/, 
/*15787*/     OPC_MoveParent,
/*15788*/     OPC_RecordChild1, // #0 = $dst2
/*15789*/     OPC_RecordChild2, // #1 = $src2
/*15790*/     OPC_RecordChild3, // #2 = $src3
/*15791*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_subacc), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 601:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (Hexagon_M2_subacc:i32 IntRegs:i32:$dst2, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*15801*/   /*Scope*/ 15, /*->15817*/
/*15802*/     OPC_CheckInteger, 90|128,4/*602*/, 
/*15805*/     OPC_MoveParent,
/*15806*/     OPC_RecordChild1, // #0 = $src1
/*15807*/     OPC_RecordChild2, // #1 = $src2
/*15808*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vabsdiffh), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 602:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vabsdiffh:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15817*/   /*Scope*/ 15, /*->15833*/
/*15818*/     OPC_CheckInteger, 91|128,4/*603*/, 
/*15821*/     OPC_MoveParent,
/*15822*/     OPC_RecordChild1, // #0 = $src1
/*15823*/     OPC_RecordChild2, // #1 = $src2
/*15824*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vabsdiffw), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 603:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vabsdiffw:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*15833*/   /*Scope*/ 17, /*->15851*/
/*15834*/     OPC_CheckInteger, 2|128,5/*642*/, 
/*15837*/     OPC_MoveParent,
/*15838*/     OPC_RecordChild1, // #0 = $dst2
/*15839*/     OPC_RecordChild2, // #1 = $src2
/*15840*/     OPC_RecordChild3, // #2 = $src3
/*15841*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_xor_xacc), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 642:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (Hexagon_M2_xor_xacc:i32 IntRegs:i32:$dst2, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*15851*/   /*Scope*/ 15, /*->15867*/
/*15852*/     OPC_CheckInteger, 15|128,3/*399*/, 
/*15855*/     OPC_MoveParent,
/*15856*/     OPC_RecordChild1, // #0 = $src1
/*15857*/     OPC_RecordChild2, // #1 = $src2
/*15858*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_cmpys_s1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 399:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_cmpys_s1:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*15867*/   /*Scope*/ 15, /*->15883*/
/*15868*/     OPC_CheckInteger, 14|128,3/*398*/, 
/*15871*/     OPC_MoveParent,
/*15872*/     OPC_RecordChild1, // #0 = $src1
/*15873*/     OPC_RecordChild2, // #1 = $src2
/*15874*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_cmpys_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 398:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_cmpys_s0:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*15883*/   /*Scope*/ 15, /*->15899*/
/*15884*/     OPC_CheckInteger, 17|128,3/*401*/, 
/*15887*/     OPC_MoveParent,
/*15888*/     OPC_RecordChild1, // #0 = $src1
/*15889*/     OPC_RecordChild2, // #1 = $src2
/*15890*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_cmpysc_s1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 401:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_cmpysc_s1:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*15899*/   /*Scope*/ 15, /*->15915*/
/*15900*/     OPC_CheckInteger, 16|128,3/*400*/, 
/*15903*/     OPC_MoveParent,
/*15904*/     OPC_RecordChild1, // #0 = $src1
/*15905*/     OPC_RecordChild2, // #1 = $src2
/*15906*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_cmpysc_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 400:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_cmpysc_s0:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*15915*/   /*Scope*/ 17, /*->15933*/
/*15916*/     OPC_CheckInteger, 5|128,3/*389*/, 
/*15919*/     OPC_MoveParent,
/*15920*/     OPC_RecordChild1, // #0 = $dst2
/*15921*/     OPC_RecordChild2, // #1 = $src1
/*15922*/     OPC_RecordChild3, // #2 = $src2
/*15923*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_cmacs_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 389:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_cmacs_s1:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*15933*/   /*Scope*/ 17, /*->15951*/
/*15934*/     OPC_CheckInteger, 4|128,3/*388*/, 
/*15937*/     OPC_MoveParent,
/*15938*/     OPC_RecordChild1, // #0 = $dst2
/*15939*/     OPC_RecordChild2, // #1 = $src1
/*15940*/     OPC_RecordChild3, // #2 = $src2
/*15941*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_cmacs_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 388:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_cmacs_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*15951*/   /*Scope*/ 17, /*->15969*/
/*15952*/     OPC_CheckInteger, 7|128,3/*391*/, 
/*15955*/     OPC_MoveParent,
/*15956*/     OPC_RecordChild1, // #0 = $dst2
/*15957*/     OPC_RecordChild2, // #1 = $src1
/*15958*/     OPC_RecordChild3, // #2 = $src2
/*15959*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_cmacsc_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 391:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_cmacsc_s1:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*15969*/   /*Scope*/ 17, /*->15987*/
/*15970*/     OPC_CheckInteger, 6|128,3/*390*/, 
/*15973*/     OPC_MoveParent,
/*15974*/     OPC_RecordChild1, // #0 = $dst2
/*15975*/     OPC_RecordChild2, // #1 = $src1
/*15976*/     OPC_RecordChild3, // #2 = $src2
/*15977*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_cmacsc_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 390:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_cmacsc_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*15987*/   /*Scope*/ 17, /*->16005*/
/*15988*/     OPC_CheckInteger, 19|128,3/*403*/, 
/*15991*/     OPC_MoveParent,
/*15992*/     OPC_RecordChild1, // #0 = $dst2
/*15993*/     OPC_RecordChild2, // #1 = $src1
/*15994*/     OPC_RecordChild3, // #2 = $src2
/*15995*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_cnacs_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 403:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_cnacs_s1:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*16005*/   /*Scope*/ 17, /*->16023*/
/*16006*/     OPC_CheckInteger, 18|128,3/*402*/, 
/*16009*/     OPC_MoveParent,
/*16010*/     OPC_RecordChild1, // #0 = $dst2
/*16011*/     OPC_RecordChild2, // #1 = $src1
/*16012*/     OPC_RecordChild3, // #2 = $src2
/*16013*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_cnacs_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 402:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_cnacs_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*16023*/   /*Scope*/ 17, /*->16041*/
/*16024*/     OPC_CheckInteger, 21|128,3/*405*/, 
/*16027*/     OPC_MoveParent,
/*16028*/     OPC_RecordChild1, // #0 = $dst2
/*16029*/     OPC_RecordChild2, // #1 = $src1
/*16030*/     OPC_RecordChild3, // #2 = $src2
/*16031*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_cnacsc_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 405:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_cnacsc_s1:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*16041*/   /*Scope*/ 17, /*->16059*/
/*16042*/     OPC_CheckInteger, 20|128,3/*404*/, 
/*16045*/     OPC_MoveParent,
/*16046*/     OPC_RecordChild1, // #0 = $dst2
/*16047*/     OPC_RecordChild2, // #1 = $src1
/*16048*/     OPC_RecordChild3, // #2 = $src2
/*16049*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_cnacsc_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 404:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_cnacsc_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*16059*/   /*Scope*/ 15, /*->16075*/
/*16060*/     OPC_CheckInteger, 9|128,3/*393*/, 
/*16063*/     OPC_MoveParent,
/*16064*/     OPC_RecordChild1, // #0 = $src1
/*16065*/     OPC_RecordChild2, // #1 = $src2
/*16066*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_cmpyr_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 393:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_cmpyr_s0:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*16075*/   /*Scope*/ 17, /*->16093*/
/*16076*/     OPC_CheckInteger, 3|128,3/*387*/, 
/*16079*/     OPC_MoveParent,
/*16080*/     OPC_RecordChild1, // #0 = $dst2
/*16081*/     OPC_RecordChild2, // #1 = $src1
/*16082*/     OPC_RecordChild3, // #2 = $src2
/*16083*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_cmacr_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 387:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_cmacr_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*16093*/   /*Scope*/ 15, /*->16109*/
/*16094*/     OPC_CheckInteger, 8|128,3/*392*/, 
/*16097*/     OPC_MoveParent,
/*16098*/     OPC_RecordChild1, // #0 = $src1
/*16099*/     OPC_RecordChild2, // #1 = $src2
/*16100*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_cmpyi_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 392:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_cmpyi_s0:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*16109*/   /*Scope*/ 17, /*->16127*/
/*16110*/     OPC_CheckInteger, 2|128,3/*386*/, 
/*16113*/     OPC_MoveParent,
/*16114*/     OPC_RecordChild1, // #0 = $dst2
/*16115*/     OPC_RecordChild2, // #1 = $src1
/*16116*/     OPC_RecordChild3, // #2 = $src2
/*16117*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_cmaci_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 386:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_cmaci_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*16127*/   /*Scope*/ 15, /*->16143*/
/*16128*/     OPC_CheckInteger, 10|128,3/*394*/, 
/*16131*/     OPC_MoveParent,
/*16132*/     OPC_RecordChild1, // #0 = $src1
/*16133*/     OPC_RecordChild2, // #1 = $src2
/*16134*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_cmpyrs_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 394:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_cmpyrs_s0:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*16143*/   /*Scope*/ 15, /*->16159*/
/*16144*/     OPC_CheckInteger, 11|128,3/*395*/, 
/*16147*/     OPC_MoveParent,
/*16148*/     OPC_RecordChild1, // #0 = $src1
/*16149*/     OPC_RecordChild2, // #1 = $src2
/*16150*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_cmpyrs_s1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 395:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_cmpyrs_s1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*16159*/   /*Scope*/ 15, /*->16175*/
/*16160*/     OPC_CheckInteger, 12|128,3/*396*/, 
/*16163*/     OPC_MoveParent,
/*16164*/     OPC_RecordChild1, // #0 = $src1
/*16165*/     OPC_RecordChild2, // #1 = $src2
/*16166*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_cmpyrsc_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 396:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_cmpyrsc_s0:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*16175*/   /*Scope*/ 15, /*->16191*/
/*16176*/     OPC_CheckInteger, 13|128,3/*397*/, 
/*16179*/     OPC_MoveParent,
/*16180*/     OPC_RecordChild1, // #0 = $src1
/*16181*/     OPC_RecordChild2, // #1 = $src2
/*16182*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_cmpyrsc_s1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 397:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_cmpyrsc_s1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*16191*/   /*Scope*/ 15, /*->16207*/
/*16192*/     OPC_CheckInteger, 94|128,4/*606*/, 
/*16195*/     OPC_MoveParent,
/*16196*/     OPC_RecordChild1, // #0 = $src1
/*16197*/     OPC_RecordChild2, // #1 = $src2
/*16198*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vcmpy_s0_sat_i), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 606:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vcmpy_s0_sat_i:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16207*/   /*Scope*/ 15, /*->16223*/
/*16208*/     OPC_CheckInteger, 96|128,4/*608*/, 
/*16211*/     OPC_MoveParent,
/*16212*/     OPC_RecordChild1, // #0 = $src1
/*16213*/     OPC_RecordChild2, // #1 = $src2
/*16214*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vcmpy_s1_sat_i), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 608:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vcmpy_s1_sat_i:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16223*/   /*Scope*/ 15, /*->16239*/
/*16224*/     OPC_CheckInteger, 95|128,4/*607*/, 
/*16227*/     OPC_MoveParent,
/*16228*/     OPC_RecordChild1, // #0 = $src1
/*16229*/     OPC_RecordChild2, // #1 = $src2
/*16230*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vcmpy_s0_sat_r), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 607:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vcmpy_s0_sat_r:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16239*/   /*Scope*/ 15, /*->16255*/
/*16240*/     OPC_CheckInteger, 97|128,4/*609*/, 
/*16243*/     OPC_MoveParent,
/*16244*/     OPC_RecordChild1, // #0 = $src1
/*16245*/     OPC_RecordChild2, // #1 = $src2
/*16246*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vcmpy_s1_sat_r), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 609:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vcmpy_s1_sat_r:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16255*/   /*Scope*/ 17, /*->16273*/
/*16256*/     OPC_CheckInteger, 92|128,4/*604*/, 
/*16259*/     OPC_MoveParent,
/*16260*/     OPC_RecordChild1, // #0 = $dst2
/*16261*/     OPC_RecordChild2, // #1 = $src1
/*16262*/     OPC_RecordChild3, // #2 = $src2
/*16263*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vcmac_s0_sat_i), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 604:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vcmac_s0_sat_i:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16273*/   /*Scope*/ 17, /*->16291*/
/*16274*/     OPC_CheckInteger, 93|128,4/*605*/, 
/*16277*/     OPC_MoveParent,
/*16278*/     OPC_RecordChild1, // #0 = $dst2
/*16279*/     OPC_RecordChild2, // #1 = $src1
/*16280*/     OPC_RecordChild3, // #2 = $src2
/*16281*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vcmac_s0_sat_r), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 605:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vcmac_s0_sat_r:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16291*/   /*Scope*/ 15, /*->16307*/
/*16292*/     OPC_CheckInteger, 121|128,4/*633*/, 
/*16295*/     OPC_MoveParent,
/*16296*/     OPC_RecordChild1, // #0 = $src1
/*16297*/     OPC_RecordChild2, // #1 = $src2
/*16298*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vrcmpyi_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 633:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vrcmpyi_s0:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16307*/   /*Scope*/ 15, /*->16323*/
/*16308*/     OPC_CheckInteger, 123|128,4/*635*/, 
/*16311*/     OPC_MoveParent,
/*16312*/     OPC_RecordChild1, // #0 = $src1
/*16313*/     OPC_RecordChild2, // #1 = $src2
/*16314*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vrcmpyr_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 635:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vrcmpyr_s0:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16323*/   /*Scope*/ 15, /*->16339*/
/*16324*/     OPC_CheckInteger, 122|128,4/*634*/, 
/*16327*/     OPC_MoveParent,
/*16328*/     OPC_RecordChild1, // #0 = $src1
/*16329*/     OPC_RecordChild2, // #1 = $src2
/*16330*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vrcmpyi_s0c), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 634:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vrcmpyi_s0c:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16339*/   /*Scope*/ 15, /*->16355*/
/*16340*/     OPC_CheckInteger, 124|128,4/*636*/, 
/*16343*/     OPC_MoveParent,
/*16344*/     OPC_RecordChild1, // #0 = $src1
/*16345*/     OPC_RecordChild2, // #1 = $src2
/*16346*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vrcmpyr_s0c), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 636:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vrcmpyr_s0c:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16355*/   /*Scope*/ 17, /*->16373*/
/*16356*/     OPC_CheckInteger, 117|128,4/*629*/, 
/*16359*/     OPC_MoveParent,
/*16360*/     OPC_RecordChild1, // #0 = $dst2
/*16361*/     OPC_RecordChild2, // #1 = $src1
/*16362*/     OPC_RecordChild3, // #2 = $src2
/*16363*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vrcmaci_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 629:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vrcmaci_s0:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16373*/   /*Scope*/ 17, /*->16391*/
/*16374*/     OPC_CheckInteger, 119|128,4/*631*/, 
/*16377*/     OPC_MoveParent,
/*16378*/     OPC_RecordChild1, // #0 = $dst2
/*16379*/     OPC_RecordChild2, // #1 = $src1
/*16380*/     OPC_RecordChild3, // #2 = $src2
/*16381*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vrcmacr_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 631:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vrcmacr_s0:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16391*/   /*Scope*/ 17, /*->16409*/
/*16392*/     OPC_CheckInteger, 118|128,4/*630*/, 
/*16395*/     OPC_MoveParent,
/*16396*/     OPC_RecordChild1, // #0 = $dst2
/*16397*/     OPC_RecordChild2, // #1 = $src1
/*16398*/     OPC_RecordChild3, // #2 = $src2
/*16399*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vrcmaci_s0c), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 630:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vrcmaci_s0c:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16409*/   /*Scope*/ 17, /*->16427*/
/*16410*/     OPC_CheckInteger, 120|128,4/*632*/, 
/*16413*/     OPC_MoveParent,
/*16414*/     OPC_RecordChild1, // #0 = $dst2
/*16415*/     OPC_RecordChild2, // #1 = $src1
/*16416*/     OPC_RecordChild3, // #2 = $src2
/*16417*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vrcmacr_s0c), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 632:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vrcmacr_s0c:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16427*/   /*Scope*/ 15, /*->16443*/
/*16428*/     OPC_CheckInteger, 35|128,4/*547*/, 
/*16431*/     OPC_MoveParent,
/*16432*/     OPC_RecordChild1, // #0 = $src1
/*16433*/     OPC_RecordChild2, // #1 = $src2
/*16434*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyi), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 547:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyi:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*16443*/   /*Scope*/ 15, /*->16459*/
/*16444*/     OPC_CheckInteger, 86|128,4/*598*/, 
/*16447*/     OPC_MoveParent,
/*16448*/     OPC_RecordChild1, // #0 = $src1
/*16449*/     OPC_RecordChild2, // #1 = $src2
/*16450*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyui), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 598:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyui:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*16459*/   /*Scope*/ 17, /*->16477*/
/*16460*/     OPC_CheckInteger, 31|128,3/*415*/, 
/*16463*/     OPC_MoveParent,
/*16464*/     OPC_RecordChild1, // #0 = $dst2
/*16465*/     OPC_RecordChild2, // #1 = $src2
/*16466*/     OPC_RecordChild3, // #2 = $src3
/*16467*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_maci), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 415:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (Hexagon_M2_maci:i32 IntRegs:i32:$dst2, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*16477*/   /*Scope*/ 15, /*->16493*/
/*16478*/     OPC_CheckInteger, 55|128,3/*439*/, 
/*16481*/     OPC_MoveParent,
/*16482*/     OPC_RecordChild1, // #0 = $src1
/*16483*/     OPC_RecordChild2, // #1 = $src2
/*16484*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmpyl_rs1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 439:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmpyl_rs1:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16493*/   /*Scope*/ 15, /*->16509*/
/*16494*/     OPC_CheckInteger, 57|128,3/*441*/, 
/*16497*/     OPC_MoveParent,
/*16498*/     OPC_RecordChild1, // #0 = $src1
/*16499*/     OPC_RecordChild2, // #1 = $src2
/*16500*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmpyl_s1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 441:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmpyl_s1:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16509*/   /*Scope*/ 15, /*->16525*/
/*16510*/     OPC_CheckInteger, 54|128,3/*438*/, 
/*16513*/     OPC_MoveParent,
/*16514*/     OPC_RecordChild1, // #0 = $src1
/*16515*/     OPC_RecordChild2, // #1 = $src2
/*16516*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmpyl_rs0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 438:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmpyl_rs0:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16525*/   /*Scope*/ 15, /*->16541*/
/*16526*/     OPC_CheckInteger, 56|128,3/*440*/, 
/*16529*/     OPC_MoveParent,
/*16530*/     OPC_RecordChild1, // #0 = $src1
/*16531*/     OPC_RecordChild2, // #1 = $src2
/*16532*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmpyl_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 440:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmpyl_s0:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16541*/   /*Scope*/ 15, /*->16557*/
/*16542*/     OPC_CheckInteger, 51|128,3/*435*/, 
/*16545*/     OPC_MoveParent,
/*16546*/     OPC_RecordChild1, // #0 = $src1
/*16547*/     OPC_RecordChild2, // #1 = $src2
/*16548*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmpyh_rs1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 435:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmpyh_rs1:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16557*/   /*Scope*/ 15, /*->16573*/
/*16558*/     OPC_CheckInteger, 53|128,3/*437*/, 
/*16561*/     OPC_MoveParent,
/*16562*/     OPC_RecordChild1, // #0 = $src1
/*16563*/     OPC_RecordChild2, // #1 = $src2
/*16564*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmpyh_s1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 437:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmpyh_s1:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16573*/   /*Scope*/ 15, /*->16589*/
/*16574*/     OPC_CheckInteger, 50|128,3/*434*/, 
/*16577*/     OPC_MoveParent,
/*16578*/     OPC_RecordChild1, // #0 = $src1
/*16579*/     OPC_RecordChild2, // #1 = $src2
/*16580*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmpyh_rs0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 434:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmpyh_rs0:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16589*/   /*Scope*/ 15, /*->16605*/
/*16590*/     OPC_CheckInteger, 52|128,3/*436*/, 
/*16593*/     OPC_MoveParent,
/*16594*/     OPC_RecordChild1, // #0 = $src1
/*16595*/     OPC_RecordChild2, // #1 = $src2
/*16596*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmpyh_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 436:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmpyh_s0:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16605*/   /*Scope*/ 17, /*->16623*/
/*16606*/     OPC_CheckInteger, 39|128,3/*423*/, 
/*16609*/     OPC_MoveParent,
/*16610*/     OPC_RecordChild1, // #0 = $dst2
/*16611*/     OPC_RecordChild2, // #1 = $src1
/*16612*/     OPC_RecordChild3, // #2 = $src2
/*16613*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmacls_rs1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 423:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmacls_rs1:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16623*/   /*Scope*/ 17, /*->16641*/
/*16624*/     OPC_CheckInteger, 41|128,3/*425*/, 
/*16627*/     OPC_MoveParent,
/*16628*/     OPC_RecordChild1, // #0 = $dst2
/*16629*/     OPC_RecordChild2, // #1 = $src1
/*16630*/     OPC_RecordChild3, // #2 = $src2
/*16631*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmacls_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 425:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmacls_s1:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16641*/   /*Scope*/ 17, /*->16659*/
/*16642*/     OPC_CheckInteger, 38|128,3/*422*/, 
/*16645*/     OPC_MoveParent,
/*16646*/     OPC_RecordChild1, // #0 = $dst2
/*16647*/     OPC_RecordChild2, // #1 = $src1
/*16648*/     OPC_RecordChild3, // #2 = $src2
/*16649*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmacls_rs0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 422:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmacls_rs0:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16659*/   /*Scope*/ 17, /*->16677*/
/*16660*/     OPC_CheckInteger, 40|128,3/*424*/, 
/*16663*/     OPC_MoveParent,
/*16664*/     OPC_RecordChild1, // #0 = $dst2
/*16665*/     OPC_RecordChild2, // #1 = $src1
/*16666*/     OPC_RecordChild3, // #2 = $src2
/*16667*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmacls_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 424:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmacls_s0:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16677*/   /*Scope*/ 17, /*->16695*/
/*16678*/     OPC_CheckInteger, 35|128,3/*419*/, 
/*16681*/     OPC_MoveParent,
/*16682*/     OPC_RecordChild1, // #0 = $dst2
/*16683*/     OPC_RecordChild2, // #1 = $src1
/*16684*/     OPC_RecordChild3, // #2 = $src2
/*16685*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmachs_rs1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 419:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmachs_rs1:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16695*/   /*Scope*/ 17, /*->16713*/
/*16696*/     OPC_CheckInteger, 37|128,3/*421*/, 
/*16699*/     OPC_MoveParent,
/*16700*/     OPC_RecordChild1, // #0 = $dst2
/*16701*/     OPC_RecordChild2, // #1 = $src1
/*16702*/     OPC_RecordChild3, // #2 = $src2
/*16703*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmachs_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 421:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmachs_s1:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16713*/   /*Scope*/ 17, /*->16731*/
/*16714*/     OPC_CheckInteger, 34|128,3/*418*/, 
/*16717*/     OPC_MoveParent,
/*16718*/     OPC_RecordChild1, // #0 = $dst2
/*16719*/     OPC_RecordChild2, // #1 = $src1
/*16720*/     OPC_RecordChild3, // #2 = $src2
/*16721*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmachs_rs0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 418:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmachs_rs0:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16731*/   /*Scope*/ 17, /*->16749*/
/*16732*/     OPC_CheckInteger, 36|128,3/*420*/, 
/*16735*/     OPC_MoveParent,
/*16736*/     OPC_RecordChild1, // #0 = $dst2
/*16737*/     OPC_RecordChild2, // #1 = $src1
/*16738*/     OPC_RecordChild3, // #2 = $src2
/*16739*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmachs_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 420:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmachs_s0:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16749*/   /*Scope*/ 15, /*->16765*/
/*16750*/     OPC_CheckInteger, 63|128,3/*447*/, 
/*16753*/     OPC_MoveParent,
/*16754*/     OPC_RecordChild1, // #0 = $src1
/*16755*/     OPC_RecordChild2, // #1 = $src2
/*16756*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmpyul_rs1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 447:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmpyul_rs1:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16765*/   /*Scope*/ 15, /*->16781*/
/*16766*/     OPC_CheckInteger, 65|128,3/*449*/, 
/*16769*/     OPC_MoveParent,
/*16770*/     OPC_RecordChild1, // #0 = $src1
/*16771*/     OPC_RecordChild2, // #1 = $src2
/*16772*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmpyul_s1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 449:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmpyul_s1:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16781*/   /*Scope*/ 15, /*->16797*/
/*16782*/     OPC_CheckInteger, 62|128,3/*446*/, 
/*16785*/     OPC_MoveParent,
/*16786*/     OPC_RecordChild1, // #0 = $src1
/*16787*/     OPC_RecordChild2, // #1 = $src2
/*16788*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmpyul_rs0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 446:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmpyul_rs0:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16797*/   /*Scope*/ 15, /*->16813*/
/*16798*/     OPC_CheckInteger, 64|128,3/*448*/, 
/*16801*/     OPC_MoveParent,
/*16802*/     OPC_RecordChild1, // #0 = $src1
/*16803*/     OPC_RecordChild2, // #1 = $src2
/*16804*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmpyul_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 448:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmpyul_s0:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16813*/   /*Scope*/ 15, /*->16829*/
/*16814*/     OPC_CheckInteger, 59|128,3/*443*/, 
/*16817*/     OPC_MoveParent,
/*16818*/     OPC_RecordChild1, // #0 = $src1
/*16819*/     OPC_RecordChild2, // #1 = $src2
/*16820*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmpyuh_rs1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 443:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmpyuh_rs1:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16829*/   /*Scope*/ 15, /*->16845*/
/*16830*/     OPC_CheckInteger, 61|128,3/*445*/, 
/*16833*/     OPC_MoveParent,
/*16834*/     OPC_RecordChild1, // #0 = $src1
/*16835*/     OPC_RecordChild2, // #1 = $src2
/*16836*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmpyuh_s1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 445:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmpyuh_s1:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16845*/   /*Scope*/ 15, /*->16861*/
/*16846*/     OPC_CheckInteger, 58|128,3/*442*/, 
/*16849*/     OPC_MoveParent,
/*16850*/     OPC_RecordChild1, // #0 = $src1
/*16851*/     OPC_RecordChild2, // #1 = $src2
/*16852*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmpyuh_rs0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 442:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmpyuh_rs0:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16861*/   /*Scope*/ 15, /*->16877*/
/*16862*/     OPC_CheckInteger, 60|128,3/*444*/, 
/*16865*/     OPC_MoveParent,
/*16866*/     OPC_RecordChild1, // #0 = $src1
/*16867*/     OPC_RecordChild2, // #1 = $src2
/*16868*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmpyuh_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 444:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmpyuh_s0:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16877*/   /*Scope*/ 17, /*->16895*/
/*16878*/     OPC_CheckInteger, 47|128,3/*431*/, 
/*16881*/     OPC_MoveParent,
/*16882*/     OPC_RecordChild1, // #0 = $dst2
/*16883*/     OPC_RecordChild2, // #1 = $src1
/*16884*/     OPC_RecordChild3, // #2 = $src2
/*16885*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmaculs_rs1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 431:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmaculs_rs1:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16895*/   /*Scope*/ 17, /*->16913*/
/*16896*/     OPC_CheckInteger, 49|128,3/*433*/, 
/*16899*/     OPC_MoveParent,
/*16900*/     OPC_RecordChild1, // #0 = $dst2
/*16901*/     OPC_RecordChild2, // #1 = $src1
/*16902*/     OPC_RecordChild3, // #2 = $src2
/*16903*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmaculs_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 433:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmaculs_s1:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16913*/   /*Scope*/ 17, /*->16931*/
/*16914*/     OPC_CheckInteger, 46|128,3/*430*/, 
/*16917*/     OPC_MoveParent,
/*16918*/     OPC_RecordChild1, // #0 = $dst2
/*16919*/     OPC_RecordChild2, // #1 = $src1
/*16920*/     OPC_RecordChild3, // #2 = $src2
/*16921*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmaculs_rs0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 430:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmaculs_rs0:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16931*/   /*Scope*/ 17, /*->16949*/
/*16932*/     OPC_CheckInteger, 48|128,3/*432*/, 
/*16935*/     OPC_MoveParent,
/*16936*/     OPC_RecordChild1, // #0 = $dst2
/*16937*/     OPC_RecordChild2, // #1 = $src1
/*16938*/     OPC_RecordChild3, // #2 = $src2
/*16939*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmaculs_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 432:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmaculs_s0:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16949*/   /*Scope*/ 17, /*->16967*/
/*16950*/     OPC_CheckInteger, 43|128,3/*427*/, 
/*16953*/     OPC_MoveParent,
/*16954*/     OPC_RecordChild1, // #0 = $dst2
/*16955*/     OPC_RecordChild2, // #1 = $src1
/*16956*/     OPC_RecordChild3, // #2 = $src2
/*16957*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmacuhs_rs1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 427:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmacuhs_rs1:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16967*/   /*Scope*/ 17, /*->16985*/
/*16968*/     OPC_CheckInteger, 45|128,3/*429*/, 
/*16971*/     OPC_MoveParent,
/*16972*/     OPC_RecordChild1, // #0 = $dst2
/*16973*/     OPC_RecordChild2, // #1 = $src1
/*16974*/     OPC_RecordChild3, // #2 = $src2
/*16975*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmacuhs_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 429:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmacuhs_s1:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*16985*/   /*Scope*/ 17, /*->17003*/
/*16986*/     OPC_CheckInteger, 42|128,3/*426*/, 
/*16989*/     OPC_MoveParent,
/*16990*/     OPC_RecordChild1, // #0 = $dst2
/*16991*/     OPC_RecordChild2, // #1 = $src1
/*16992*/     OPC_RecordChild3, // #2 = $src2
/*16993*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmacuhs_rs0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 426:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmacuhs_rs0:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*17003*/   /*Scope*/ 17, /*->17021*/
/*17004*/     OPC_CheckInteger, 44|128,3/*428*/, 
/*17007*/     OPC_MoveParent,
/*17008*/     OPC_RecordChild1, // #0 = $dst2
/*17009*/     OPC_RecordChild2, // #1 = $src1
/*17010*/     OPC_RecordChild3, // #2 = $src2
/*17011*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mmacuhs_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 428:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mmacuhs_s0:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*17021*/   /*Scope*/ 15, /*->17037*/
/*17022*/     OPC_CheckInteger, 29|128,3/*413*/, 
/*17025*/     OPC_MoveParent,
/*17026*/     OPC_RecordChild1, // #0 = $src1
/*17027*/     OPC_RecordChild2, // #1 = $src2
/*17028*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_hmmpyh_rs1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 413:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_hmmpyh_rs1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17037*/   /*Scope*/ 15, /*->17053*/
/*17038*/     OPC_CheckInteger, 30|128,3/*414*/, 
/*17041*/     OPC_MoveParent,
/*17042*/     OPC_RecordChild1, // #0 = $src1
/*17043*/     OPC_RecordChild2, // #1 = $src2
/*17044*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_hmmpyl_rs1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 414:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_hmmpyl_rs1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17053*/   /*Scope*/ 15, /*->17069*/
/*17054*/     OPC_CheckInteger, 2|128,4/*514*/, 
/*17057*/     OPC_MoveParent,
/*17058*/     OPC_RecordChild1, // #0 = $src1
/*17059*/     OPC_RecordChild2, // #1 = $src2
/*17060*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_up), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 514:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_up:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17069*/   /*Scope*/ 15, /*->17085*/
/*17070*/     OPC_CheckInteger, 24|128,3/*408*/, 
/*17073*/     OPC_MoveParent,
/*17074*/     OPC_RecordChild1, // #0 = $src1
/*17075*/     OPC_RecordChild2, // #1 = $src2
/*17076*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_dpmpyss_rnd_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 408:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_dpmpyss_rnd_s0:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17085*/   /*Scope*/ 15, /*->17101*/
/*17086*/     OPC_CheckInteger, 61|128,4/*573*/, 
/*17089*/     OPC_MoveParent,
/*17090*/     OPC_RecordChild1, // #0 = $src1
/*17091*/     OPC_RecordChild2, // #1 = $src2
/*17092*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_up), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 573:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_up:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17101*/   /*Scope*/ 15, /*->17117*/
/*17102*/     OPC_CheckInteger, 28|128,3/*412*/, 
/*17105*/     OPC_MoveParent,
/*17106*/     OPC_RecordChild1, // #0 = $src1
/*17107*/     OPC_RecordChild2, // #1 = $src2
/*17108*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_dpmpyuu_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 412:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_dpmpyuu_s0:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17117*/   /*Scope*/ 17, /*->17135*/
/*17118*/     OPC_CheckInteger, 26|128,3/*410*/, 
/*17121*/     OPC_MoveParent,
/*17122*/     OPC_RecordChild1, // #0 = $dst2
/*17123*/     OPC_RecordChild2, // #1 = $src1
/*17124*/     OPC_RecordChild3, // #2 = $src2
/*17125*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_dpmpyuu_acc_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 410:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_dpmpyuu_acc_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17135*/   /*Scope*/ 17, /*->17153*/
/*17136*/     OPC_CheckInteger, 27|128,3/*411*/, 
/*17139*/     OPC_MoveParent,
/*17140*/     OPC_RecordChild1, // #0 = $dst2
/*17141*/     OPC_RecordChild2, // #1 = $src1
/*17142*/     OPC_RecordChild3, // #2 = $src2
/*17143*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_dpmpyuu_nac_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 411:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_dpmpyuu_nac_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17153*/   /*Scope*/ 15, /*->17169*/
/*17154*/     OPC_CheckInteger, 25|128,3/*409*/, 
/*17157*/     OPC_MoveParent,
/*17158*/     OPC_RecordChild1, // #0 = $src1
/*17159*/     OPC_RecordChild2, // #1 = $src2
/*17160*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_dpmpyss_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 409:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_dpmpyss_s0:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17169*/   /*Scope*/ 17, /*->17187*/
/*17170*/     OPC_CheckInteger, 22|128,3/*406*/, 
/*17173*/     OPC_MoveParent,
/*17174*/     OPC_RecordChild1, // #0 = $dst2
/*17175*/     OPC_RecordChild2, // #1 = $src1
/*17176*/     OPC_RecordChild3, // #2 = $src2
/*17177*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_dpmpyss_acc_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 406:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_dpmpyss_acc_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17187*/   /*Scope*/ 17, /*->17205*/
/*17188*/     OPC_CheckInteger, 23|128,3/*407*/, 
/*17191*/     OPC_MoveParent,
/*17192*/     OPC_RecordChild1, // #0 = $dst2
/*17193*/     OPC_RecordChild2, // #1 = $src1
/*17194*/     OPC_RecordChild3, // #2 = $src2
/*17195*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_dpmpyss_nac_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 407:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_dpmpyss_nac_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17205*/   /*Scope*/ 15, /*->17221*/
/*17206*/     OPC_CheckInteger, 82|128,3/*466*/, 
/*17209*/     OPC_MoveParent,
/*17210*/     OPC_RecordChild1, // #0 = $src1
/*17211*/     OPC_RecordChild2, // #1 = $src2
/*17212*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_hh_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 466:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_hh_s0:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17221*/   /*Scope*/ 15, /*->17237*/
/*17222*/     OPC_CheckInteger, 83|128,3/*467*/, 
/*17225*/     OPC_MoveParent,
/*17226*/     OPC_RecordChild1, // #0 = $src1
/*17227*/     OPC_RecordChild2, // #1 = $src2
/*17228*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_hh_s1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 467:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_hh_s1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17237*/   /*Scope*/ 15, /*->17253*/
/*17238*/     OPC_CheckInteger, 107|128,3/*491*/, 
/*17241*/     OPC_MoveParent,
/*17242*/     OPC_RecordChild1, // #0 = $src1
/*17243*/     OPC_RecordChild2, // #1 = $src2
/*17244*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_rnd_hh_s1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 491:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_rnd_hh_s1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17253*/   /*Scope*/ 15, /*->17269*/
/*17254*/     OPC_CheckInteger, 123|128,3/*507*/, 
/*17257*/     OPC_MoveParent,
/*17258*/     OPC_RecordChild1, // #0 = $src1
/*17259*/     OPC_RecordChild2, // #1 = $src2
/*17260*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_sat_rnd_hh_s1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 507:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_sat_rnd_hh_s1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17269*/   /*Scope*/ 15, /*->17285*/
/*17270*/     OPC_CheckInteger, 115|128,3/*499*/, 
/*17273*/     OPC_MoveParent,
/*17274*/     OPC_RecordChild1, // #0 = $src1
/*17275*/     OPC_RecordChild2, // #1 = $src2
/*17276*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_sat_hh_s1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 499:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_sat_hh_s1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17285*/   /*Scope*/ 15, /*->17301*/
/*17286*/     OPC_CheckInteger, 106|128,3/*490*/, 
/*17289*/     OPC_MoveParent,
/*17290*/     OPC_RecordChild1, // #0 = $src1
/*17291*/     OPC_RecordChild2, // #1 = $src2
/*17292*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_rnd_hh_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 490:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_rnd_hh_s0:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17301*/   /*Scope*/ 15, /*->17317*/
/*17302*/     OPC_CheckInteger, 122|128,3/*506*/, 
/*17305*/     OPC_MoveParent,
/*17306*/     OPC_RecordChild1, // #0 = $src1
/*17307*/     OPC_RecordChild2, // #1 = $src2
/*17308*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_sat_rnd_hh_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 506:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_sat_rnd_hh_s0:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17317*/   /*Scope*/ 15, /*->17333*/
/*17318*/     OPC_CheckInteger, 114|128,3/*498*/, 
/*17321*/     OPC_MoveParent,
/*17322*/     OPC_RecordChild1, // #0 = $src1
/*17323*/     OPC_RecordChild2, // #1 = $src2
/*17324*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_sat_hh_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 498:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_sat_hh_s0:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17333*/   /*Scope*/ 15, /*->17349*/
/*17334*/     OPC_CheckInteger, 84|128,3/*468*/, 
/*17337*/     OPC_MoveParent,
/*17338*/     OPC_RecordChild1, // #0 = $src1
/*17339*/     OPC_RecordChild2, // #1 = $src2
/*17340*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_hl_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 468:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_hl_s0:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17349*/   /*Scope*/ 15, /*->17365*/
/*17350*/     OPC_CheckInteger, 85|128,3/*469*/, 
/*17353*/     OPC_MoveParent,
/*17354*/     OPC_RecordChild1, // #0 = $src1
/*17355*/     OPC_RecordChild2, // #1 = $src2
/*17356*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_hl_s1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 469:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_hl_s1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17365*/   /*Scope*/ 15, /*->17381*/
/*17366*/     OPC_CheckInteger, 109|128,3/*493*/, 
/*17369*/     OPC_MoveParent,
/*17370*/     OPC_RecordChild1, // #0 = $src1
/*17371*/     OPC_RecordChild2, // #1 = $src2
/*17372*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_rnd_hl_s1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 493:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_rnd_hl_s1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17381*/   /*Scope*/ 15, /*->17397*/
/*17382*/     OPC_CheckInteger, 125|128,3/*509*/, 
/*17385*/     OPC_MoveParent,
/*17386*/     OPC_RecordChild1, // #0 = $src1
/*17387*/     OPC_RecordChild2, // #1 = $src2
/*17388*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_sat_rnd_hl_s1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 509:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_sat_rnd_hl_s1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17397*/   /*Scope*/ 15, /*->17413*/
/*17398*/     OPC_CheckInteger, 117|128,3/*501*/, 
/*17401*/     OPC_MoveParent,
/*17402*/     OPC_RecordChild1, // #0 = $src1
/*17403*/     OPC_RecordChild2, // #1 = $src2
/*17404*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_sat_hl_s1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 501:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_sat_hl_s1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17413*/   /*Scope*/ 15, /*->17429*/
/*17414*/     OPC_CheckInteger, 108|128,3/*492*/, 
/*17417*/     OPC_MoveParent,
/*17418*/     OPC_RecordChild1, // #0 = $src1
/*17419*/     OPC_RecordChild2, // #1 = $src2
/*17420*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_rnd_hl_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 492:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_rnd_hl_s0:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17429*/   /*Scope*/ 15, /*->17445*/
/*17430*/     OPC_CheckInteger, 124|128,3/*508*/, 
/*17433*/     OPC_MoveParent,
/*17434*/     OPC_RecordChild1, // #0 = $src1
/*17435*/     OPC_RecordChild2, // #1 = $src2
/*17436*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_sat_rnd_hl_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 508:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_sat_rnd_hl_s0:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17445*/   /*Scope*/ 15, /*->17461*/
/*17446*/     OPC_CheckInteger, 116|128,3/*500*/, 
/*17449*/     OPC_MoveParent,
/*17450*/     OPC_RecordChild1, // #0 = $src1
/*17451*/     OPC_RecordChild2, // #1 = $src2
/*17452*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_sat_hl_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 500:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_sat_hl_s0:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17461*/   /*Scope*/ 15, /*->17477*/
/*17462*/     OPC_CheckInteger, 86|128,3/*470*/, 
/*17465*/     OPC_MoveParent,
/*17466*/     OPC_RecordChild1, // #0 = $src1
/*17467*/     OPC_RecordChild2, // #1 = $src2
/*17468*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_lh_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 470:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_lh_s0:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17477*/   /*Scope*/ 15, /*->17493*/
/*17478*/     OPC_CheckInteger, 87|128,3/*471*/, 
/*17481*/     OPC_MoveParent,
/*17482*/     OPC_RecordChild1, // #0 = $src1
/*17483*/     OPC_RecordChild2, // #1 = $src2
/*17484*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_lh_s1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 471:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_lh_s1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17493*/   /*Scope*/ 15, /*->17509*/
/*17494*/     OPC_CheckInteger, 111|128,3/*495*/, 
/*17497*/     OPC_MoveParent,
/*17498*/     OPC_RecordChild1, // #0 = $src1
/*17499*/     OPC_RecordChild2, // #1 = $src2
/*17500*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_rnd_lh_s1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 495:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_rnd_lh_s1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17509*/   /*Scope*/ 15, /*->17525*/
/*17510*/     OPC_CheckInteger, 127|128,3/*511*/, 
/*17513*/     OPC_MoveParent,
/*17514*/     OPC_RecordChild1, // #0 = $src1
/*17515*/     OPC_RecordChild2, // #1 = $src2
/*17516*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_sat_rnd_lh_s1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 511:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_sat_rnd_lh_s1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17525*/   /*Scope*/ 15, /*->17541*/
/*17526*/     OPC_CheckInteger, 119|128,3/*503*/, 
/*17529*/     OPC_MoveParent,
/*17530*/     OPC_RecordChild1, // #0 = $src1
/*17531*/     OPC_RecordChild2, // #1 = $src2
/*17532*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_sat_lh_s1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 503:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_sat_lh_s1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17541*/   /*Scope*/ 15, /*->17557*/
/*17542*/     OPC_CheckInteger, 110|128,3/*494*/, 
/*17545*/     OPC_MoveParent,
/*17546*/     OPC_RecordChild1, // #0 = $src1
/*17547*/     OPC_RecordChild2, // #1 = $src2
/*17548*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_rnd_lh_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 494:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_rnd_lh_s0:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17557*/   /*Scope*/ 15, /*->17573*/
/*17558*/     OPC_CheckInteger, 126|128,3/*510*/, 
/*17561*/     OPC_MoveParent,
/*17562*/     OPC_RecordChild1, // #0 = $src1
/*17563*/     OPC_RecordChild2, // #1 = $src2
/*17564*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_sat_rnd_lh_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 510:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_sat_rnd_lh_s0:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17573*/   /*Scope*/ 15, /*->17589*/
/*17574*/     OPC_CheckInteger, 118|128,3/*502*/, 
/*17577*/     OPC_MoveParent,
/*17578*/     OPC_RecordChild1, // #0 = $src1
/*17579*/     OPC_RecordChild2, // #1 = $src2
/*17580*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_sat_lh_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 502:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_sat_lh_s0:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17589*/   /*Scope*/ 15, /*->17605*/
/*17590*/     OPC_CheckInteger, 88|128,3/*472*/, 
/*17593*/     OPC_MoveParent,
/*17594*/     OPC_RecordChild1, // #0 = $src1
/*17595*/     OPC_RecordChild2, // #1 = $src2
/*17596*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_ll_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 472:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_ll_s0:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17605*/   /*Scope*/ 15, /*->17621*/
/*17606*/     OPC_CheckInteger, 89|128,3/*473*/, 
/*17609*/     OPC_MoveParent,
/*17610*/     OPC_RecordChild1, // #0 = $src1
/*17611*/     OPC_RecordChild2, // #1 = $src2
/*17612*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_ll_s1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 473:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_ll_s1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17621*/   /*Scope*/ 15, /*->17637*/
/*17622*/     OPC_CheckInteger, 113|128,3/*497*/, 
/*17625*/     OPC_MoveParent,
/*17626*/     OPC_RecordChild1, // #0 = $src1
/*17627*/     OPC_RecordChild2, // #1 = $src2
/*17628*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_rnd_ll_s1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 497:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_rnd_ll_s1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17637*/   /*Scope*/ 15, /*->17653*/
/*17638*/     OPC_CheckInteger, 1|128,4/*513*/, 
/*17641*/     OPC_MoveParent,
/*17642*/     OPC_RecordChild1, // #0 = $src1
/*17643*/     OPC_RecordChild2, // #1 = $src2
/*17644*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_sat_rnd_ll_s1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 513:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_sat_rnd_ll_s1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17653*/   /*Scope*/ 15, /*->17669*/
/*17654*/     OPC_CheckInteger, 121|128,3/*505*/, 
/*17657*/     OPC_MoveParent,
/*17658*/     OPC_RecordChild1, // #0 = $src1
/*17659*/     OPC_RecordChild2, // #1 = $src2
/*17660*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_sat_ll_s1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 505:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_sat_ll_s1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17669*/   /*Scope*/ 15, /*->17685*/
/*17670*/     OPC_CheckInteger, 112|128,3/*496*/, 
/*17673*/     OPC_MoveParent,
/*17674*/     OPC_RecordChild1, // #0 = $src1
/*17675*/     OPC_RecordChild2, // #1 = $src2
/*17676*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_rnd_ll_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 496:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_rnd_ll_s0:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17685*/   /*Scope*/ 15, /*->17701*/
/*17686*/     OPC_CheckInteger, 0|128,4/*512*/, 
/*17689*/     OPC_MoveParent,
/*17690*/     OPC_RecordChild1, // #0 = $src1
/*17691*/     OPC_RecordChild2, // #1 = $src2
/*17692*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_sat_rnd_ll_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 512:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_sat_rnd_ll_s0:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17701*/   /*Scope*/ 15, /*->17717*/
/*17702*/     OPC_CheckInteger, 120|128,3/*504*/, 
/*17705*/     OPC_MoveParent,
/*17706*/     OPC_RecordChild1, // #0 = $src1
/*17707*/     OPC_RecordChild2, // #1 = $src2
/*17708*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_sat_ll_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 504:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_sat_ll_s0:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17717*/   /*Scope*/ 15, /*->17733*/
/*17718*/     OPC_CheckInteger, 11|128,4/*523*/, 
/*17721*/     OPC_MoveParent,
/*17722*/     OPC_RecordChild1, // #0 = $src1
/*17723*/     OPC_RecordChild2, // #1 = $src2
/*17724*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_hh_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 523:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_hh_s0:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17733*/   /*Scope*/ 15, /*->17749*/
/*17734*/     OPC_CheckInteger, 12|128,4/*524*/, 
/*17737*/     OPC_MoveParent,
/*17738*/     OPC_RecordChild1, // #0 = $src1
/*17739*/     OPC_RecordChild2, // #1 = $src2
/*17740*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_hh_s1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 524:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_hh_s1:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17749*/   /*Scope*/ 15, /*->17765*/
/*17750*/     OPC_CheckInteger, 28|128,4/*540*/, 
/*17753*/     OPC_MoveParent,
/*17754*/     OPC_RecordChild1, // #0 = $src1
/*17755*/     OPC_RecordChild2, // #1 = $src2
/*17756*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_rnd_hh_s1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 540:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_rnd_hh_s1:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17765*/   /*Scope*/ 15, /*->17781*/
/*17766*/     OPC_CheckInteger, 27|128,4/*539*/, 
/*17769*/     OPC_MoveParent,
/*17770*/     OPC_RecordChild1, // #0 = $src1
/*17771*/     OPC_RecordChild2, // #1 = $src2
/*17772*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_rnd_hh_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 539:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_rnd_hh_s0:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17781*/   /*Scope*/ 15, /*->17797*/
/*17782*/     OPC_CheckInteger, 13|128,4/*525*/, 
/*17785*/     OPC_MoveParent,
/*17786*/     OPC_RecordChild1, // #0 = $src1
/*17787*/     OPC_RecordChild2, // #1 = $src2
/*17788*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_hl_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 525:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_hl_s0:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17797*/   /*Scope*/ 15, /*->17813*/
/*17798*/     OPC_CheckInteger, 14|128,4/*526*/, 
/*17801*/     OPC_MoveParent,
/*17802*/     OPC_RecordChild1, // #0 = $src1
/*17803*/     OPC_RecordChild2, // #1 = $src2
/*17804*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_hl_s1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 526:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_hl_s1:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17813*/   /*Scope*/ 15, /*->17829*/
/*17814*/     OPC_CheckInteger, 30|128,4/*542*/, 
/*17817*/     OPC_MoveParent,
/*17818*/     OPC_RecordChild1, // #0 = $src1
/*17819*/     OPC_RecordChild2, // #1 = $src2
/*17820*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_rnd_hl_s1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 542:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_rnd_hl_s1:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17829*/   /*Scope*/ 15, /*->17845*/
/*17830*/     OPC_CheckInteger, 29|128,4/*541*/, 
/*17833*/     OPC_MoveParent,
/*17834*/     OPC_RecordChild1, // #0 = $src1
/*17835*/     OPC_RecordChild2, // #1 = $src2
/*17836*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_rnd_hl_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 541:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_rnd_hl_s0:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17845*/   /*Scope*/ 15, /*->17861*/
/*17846*/     OPC_CheckInteger, 15|128,4/*527*/, 
/*17849*/     OPC_MoveParent,
/*17850*/     OPC_RecordChild1, // #0 = $src1
/*17851*/     OPC_RecordChild2, // #1 = $src2
/*17852*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_lh_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 527:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_lh_s0:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17861*/   /*Scope*/ 15, /*->17877*/
/*17862*/     OPC_CheckInteger, 16|128,4/*528*/, 
/*17865*/     OPC_MoveParent,
/*17866*/     OPC_RecordChild1, // #0 = $src1
/*17867*/     OPC_RecordChild2, // #1 = $src2
/*17868*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_lh_s1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 528:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_lh_s1:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17877*/   /*Scope*/ 15, /*->17893*/
/*17878*/     OPC_CheckInteger, 32|128,4/*544*/, 
/*17881*/     OPC_MoveParent,
/*17882*/     OPC_RecordChild1, // #0 = $src1
/*17883*/     OPC_RecordChild2, // #1 = $src2
/*17884*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_rnd_lh_s1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 544:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_rnd_lh_s1:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17893*/   /*Scope*/ 15, /*->17909*/
/*17894*/     OPC_CheckInteger, 31|128,4/*543*/, 
/*17897*/     OPC_MoveParent,
/*17898*/     OPC_RecordChild1, // #0 = $src1
/*17899*/     OPC_RecordChild2, // #1 = $src2
/*17900*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_rnd_lh_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 543:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_rnd_lh_s0:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17909*/   /*Scope*/ 15, /*->17925*/
/*17910*/     OPC_CheckInteger, 17|128,4/*529*/, 
/*17913*/     OPC_MoveParent,
/*17914*/     OPC_RecordChild1, // #0 = $src1
/*17915*/     OPC_RecordChild2, // #1 = $src2
/*17916*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_ll_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 529:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_ll_s0:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17925*/   /*Scope*/ 15, /*->17941*/
/*17926*/     OPC_CheckInteger, 18|128,4/*530*/, 
/*17929*/     OPC_MoveParent,
/*17930*/     OPC_RecordChild1, // #0 = $src1
/*17931*/     OPC_RecordChild2, // #1 = $src2
/*17932*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_ll_s1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 530:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_ll_s1:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17941*/   /*Scope*/ 15, /*->17957*/
/*17942*/     OPC_CheckInteger, 34|128,4/*546*/, 
/*17945*/     OPC_MoveParent,
/*17946*/     OPC_RecordChild1, // #0 = $src1
/*17947*/     OPC_RecordChild2, // #1 = $src2
/*17948*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_rnd_ll_s1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 546:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_rnd_ll_s1:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17957*/   /*Scope*/ 15, /*->17973*/
/*17958*/     OPC_CheckInteger, 33|128,4/*545*/, 
/*17961*/     OPC_MoveParent,
/*17962*/     OPC_RecordChild1, // #0 = $src1
/*17963*/     OPC_RecordChild2, // #1 = $src2
/*17964*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_rnd_ll_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 545:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_rnd_ll_s0:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17973*/   /*Scope*/ 17, /*->17991*/
/*17974*/     OPC_CheckInteger, 66|128,3/*450*/, 
/*17977*/     OPC_MoveParent,
/*17978*/     OPC_RecordChild1, // #0 = $dst2
/*17979*/     OPC_RecordChild2, // #1 = $src1
/*17980*/     OPC_RecordChild3, // #2 = $src2
/*17981*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_acc_hh_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 450:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_acc_hh_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*17991*/   /*Scope*/ 17, /*->18009*/
/*17992*/     OPC_CheckInteger, 67|128,3/*451*/, 
/*17995*/     OPC_MoveParent,
/*17996*/     OPC_RecordChild1, // #0 = $dst2
/*17997*/     OPC_RecordChild2, // #1 = $src1
/*17998*/     OPC_RecordChild3, // #2 = $src2
/*17999*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_acc_hh_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 451:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_acc_hh_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18009*/   /*Scope*/ 17, /*->18027*/
/*18010*/     OPC_CheckInteger, 75|128,3/*459*/, 
/*18013*/     OPC_MoveParent,
/*18014*/     OPC_RecordChild1, // #0 = $dst2
/*18015*/     OPC_RecordChild2, // #1 = $src1
/*18016*/     OPC_RecordChild3, // #2 = $src2
/*18017*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_acc_sat_hh_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 459:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_acc_sat_hh_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18027*/   /*Scope*/ 17, /*->18045*/
/*18028*/     OPC_CheckInteger, 74|128,3/*458*/, 
/*18031*/     OPC_MoveParent,
/*18032*/     OPC_RecordChild1, // #0 = $dst2
/*18033*/     OPC_RecordChild2, // #1 = $src1
/*18034*/     OPC_RecordChild3, // #2 = $src2
/*18035*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_acc_sat_hh_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 458:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_acc_sat_hh_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18045*/   /*Scope*/ 17, /*->18063*/
/*18046*/     OPC_CheckInteger, 68|128,3/*452*/, 
/*18049*/     OPC_MoveParent,
/*18050*/     OPC_RecordChild1, // #0 = $dst2
/*18051*/     OPC_RecordChild2, // #1 = $src1
/*18052*/     OPC_RecordChild3, // #2 = $src2
/*18053*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_acc_hl_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 452:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_acc_hl_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18063*/   /*Scope*/ 17, /*->18081*/
/*18064*/     OPC_CheckInteger, 69|128,3/*453*/, 
/*18067*/     OPC_MoveParent,
/*18068*/     OPC_RecordChild1, // #0 = $dst2
/*18069*/     OPC_RecordChild2, // #1 = $src1
/*18070*/     OPC_RecordChild3, // #2 = $src2
/*18071*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_acc_hl_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 453:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_acc_hl_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18081*/   /*Scope*/ 17, /*->18099*/
/*18082*/     OPC_CheckInteger, 77|128,3/*461*/, 
/*18085*/     OPC_MoveParent,
/*18086*/     OPC_RecordChild1, // #0 = $dst2
/*18087*/     OPC_RecordChild2, // #1 = $src1
/*18088*/     OPC_RecordChild3, // #2 = $src2
/*18089*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_acc_sat_hl_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 461:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_acc_sat_hl_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18099*/   /*Scope*/ 17, /*->18117*/
/*18100*/     OPC_CheckInteger, 76|128,3/*460*/, 
/*18103*/     OPC_MoveParent,
/*18104*/     OPC_RecordChild1, // #0 = $dst2
/*18105*/     OPC_RecordChild2, // #1 = $src1
/*18106*/     OPC_RecordChild3, // #2 = $src2
/*18107*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_acc_sat_hl_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 460:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_acc_sat_hl_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18117*/   /*Scope*/ 17, /*->18135*/
/*18118*/     OPC_CheckInteger, 70|128,3/*454*/, 
/*18121*/     OPC_MoveParent,
/*18122*/     OPC_RecordChild1, // #0 = $dst2
/*18123*/     OPC_RecordChild2, // #1 = $src1
/*18124*/     OPC_RecordChild3, // #2 = $src2
/*18125*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_acc_lh_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 454:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_acc_lh_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18135*/   /*Scope*/ 17, /*->18153*/
/*18136*/     OPC_CheckInteger, 71|128,3/*455*/, 
/*18139*/     OPC_MoveParent,
/*18140*/     OPC_RecordChild1, // #0 = $dst2
/*18141*/     OPC_RecordChild2, // #1 = $src1
/*18142*/     OPC_RecordChild3, // #2 = $src2
/*18143*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_acc_lh_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 455:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_acc_lh_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18153*/   /*Scope*/ 17, /*->18171*/
/*18154*/     OPC_CheckInteger, 79|128,3/*463*/, 
/*18157*/     OPC_MoveParent,
/*18158*/     OPC_RecordChild1, // #0 = $dst2
/*18159*/     OPC_RecordChild2, // #1 = $src1
/*18160*/     OPC_RecordChild3, // #2 = $src2
/*18161*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_acc_sat_lh_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 463:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_acc_sat_lh_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18171*/   /*Scope*/ 17, /*->18189*/
/*18172*/     OPC_CheckInteger, 78|128,3/*462*/, 
/*18175*/     OPC_MoveParent,
/*18176*/     OPC_RecordChild1, // #0 = $dst2
/*18177*/     OPC_RecordChild2, // #1 = $src1
/*18178*/     OPC_RecordChild3, // #2 = $src2
/*18179*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_acc_sat_lh_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 462:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_acc_sat_lh_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18189*/   /*Scope*/ 17, /*->18207*/
/*18190*/     OPC_CheckInteger, 72|128,3/*456*/, 
/*18193*/     OPC_MoveParent,
/*18194*/     OPC_RecordChild1, // #0 = $dst2
/*18195*/     OPC_RecordChild2, // #1 = $src1
/*18196*/     OPC_RecordChild3, // #2 = $src2
/*18197*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_acc_ll_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 456:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_acc_ll_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18207*/   /*Scope*/ 17, /*->18225*/
/*18208*/     OPC_CheckInteger, 73|128,3/*457*/, 
/*18211*/     OPC_MoveParent,
/*18212*/     OPC_RecordChild1, // #0 = $dst2
/*18213*/     OPC_RecordChild2, // #1 = $src1
/*18214*/     OPC_RecordChild3, // #2 = $src2
/*18215*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_acc_ll_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 457:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_acc_ll_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18225*/   /*Scope*/ 17, /*->18243*/
/*18226*/     OPC_CheckInteger, 81|128,3/*465*/, 
/*18229*/     OPC_MoveParent,
/*18230*/     OPC_RecordChild1, // #0 = $dst2
/*18231*/     OPC_RecordChild2, // #1 = $src1
/*18232*/     OPC_RecordChild3, // #2 = $src2
/*18233*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_acc_sat_ll_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 465:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_acc_sat_ll_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18243*/   /*Scope*/ 17, /*->18261*/
/*18244*/     OPC_CheckInteger, 80|128,3/*464*/, 
/*18247*/     OPC_MoveParent,
/*18248*/     OPC_RecordChild1, // #0 = $dst2
/*18249*/     OPC_RecordChild2, // #1 = $src1
/*18250*/     OPC_RecordChild3, // #2 = $src2
/*18251*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_acc_sat_ll_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 464:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_acc_sat_ll_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18261*/   /*Scope*/ 17, /*->18279*/
/*18262*/     OPC_CheckInteger, 90|128,3/*474*/, 
/*18265*/     OPC_MoveParent,
/*18266*/     OPC_RecordChild1, // #0 = $dst2
/*18267*/     OPC_RecordChild2, // #1 = $src1
/*18268*/     OPC_RecordChild3, // #2 = $src2
/*18269*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_nac_hh_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 474:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_nac_hh_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18279*/   /*Scope*/ 17, /*->18297*/
/*18280*/     OPC_CheckInteger, 91|128,3/*475*/, 
/*18283*/     OPC_MoveParent,
/*18284*/     OPC_RecordChild1, // #0 = $dst2
/*18285*/     OPC_RecordChild2, // #1 = $src1
/*18286*/     OPC_RecordChild3, // #2 = $src2
/*18287*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_nac_hh_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 475:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_nac_hh_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18297*/   /*Scope*/ 17, /*->18315*/
/*18298*/     OPC_CheckInteger, 99|128,3/*483*/, 
/*18301*/     OPC_MoveParent,
/*18302*/     OPC_RecordChild1, // #0 = $dst2
/*18303*/     OPC_RecordChild2, // #1 = $src1
/*18304*/     OPC_RecordChild3, // #2 = $src2
/*18305*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_nac_sat_hh_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 483:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_nac_sat_hh_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18315*/   /*Scope*/ 17, /*->18333*/
/*18316*/     OPC_CheckInteger, 98|128,3/*482*/, 
/*18319*/     OPC_MoveParent,
/*18320*/     OPC_RecordChild1, // #0 = $dst2
/*18321*/     OPC_RecordChild2, // #1 = $src1
/*18322*/     OPC_RecordChild3, // #2 = $src2
/*18323*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_nac_sat_hh_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 482:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_nac_sat_hh_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18333*/   /*Scope*/ 17, /*->18351*/
/*18334*/     OPC_CheckInteger, 92|128,3/*476*/, 
/*18337*/     OPC_MoveParent,
/*18338*/     OPC_RecordChild1, // #0 = $dst2
/*18339*/     OPC_RecordChild2, // #1 = $src1
/*18340*/     OPC_RecordChild3, // #2 = $src2
/*18341*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_nac_hl_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 476:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_nac_hl_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18351*/   /*Scope*/ 17, /*->18369*/
/*18352*/     OPC_CheckInteger, 93|128,3/*477*/, 
/*18355*/     OPC_MoveParent,
/*18356*/     OPC_RecordChild1, // #0 = $dst2
/*18357*/     OPC_RecordChild2, // #1 = $src1
/*18358*/     OPC_RecordChild3, // #2 = $src2
/*18359*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_nac_hl_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 477:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_nac_hl_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18369*/   /*Scope*/ 17, /*->18387*/
/*18370*/     OPC_CheckInteger, 101|128,3/*485*/, 
/*18373*/     OPC_MoveParent,
/*18374*/     OPC_RecordChild1, // #0 = $dst2
/*18375*/     OPC_RecordChild2, // #1 = $src1
/*18376*/     OPC_RecordChild3, // #2 = $src2
/*18377*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_nac_sat_hl_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 485:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_nac_sat_hl_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18387*/   /*Scope*/ 17, /*->18405*/
/*18388*/     OPC_CheckInteger, 100|128,3/*484*/, 
/*18391*/     OPC_MoveParent,
/*18392*/     OPC_RecordChild1, // #0 = $dst2
/*18393*/     OPC_RecordChild2, // #1 = $src1
/*18394*/     OPC_RecordChild3, // #2 = $src2
/*18395*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_nac_sat_hl_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 484:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_nac_sat_hl_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18405*/   /*Scope*/ 17, /*->18423*/
/*18406*/     OPC_CheckInteger, 94|128,3/*478*/, 
/*18409*/     OPC_MoveParent,
/*18410*/     OPC_RecordChild1, // #0 = $dst2
/*18411*/     OPC_RecordChild2, // #1 = $src1
/*18412*/     OPC_RecordChild3, // #2 = $src2
/*18413*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_nac_lh_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 478:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_nac_lh_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18423*/   /*Scope*/ 17, /*->18441*/
/*18424*/     OPC_CheckInteger, 95|128,3/*479*/, 
/*18427*/     OPC_MoveParent,
/*18428*/     OPC_RecordChild1, // #0 = $dst2
/*18429*/     OPC_RecordChild2, // #1 = $src1
/*18430*/     OPC_RecordChild3, // #2 = $src2
/*18431*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_nac_lh_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 479:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_nac_lh_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18441*/   /*Scope*/ 17, /*->18459*/
/*18442*/     OPC_CheckInteger, 103|128,3/*487*/, 
/*18445*/     OPC_MoveParent,
/*18446*/     OPC_RecordChild1, // #0 = $dst2
/*18447*/     OPC_RecordChild2, // #1 = $src1
/*18448*/     OPC_RecordChild3, // #2 = $src2
/*18449*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_nac_sat_lh_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 487:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_nac_sat_lh_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18459*/   /*Scope*/ 17, /*->18477*/
/*18460*/     OPC_CheckInteger, 102|128,3/*486*/, 
/*18463*/     OPC_MoveParent,
/*18464*/     OPC_RecordChild1, // #0 = $dst2
/*18465*/     OPC_RecordChild2, // #1 = $src1
/*18466*/     OPC_RecordChild3, // #2 = $src2
/*18467*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_nac_sat_lh_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 486:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_nac_sat_lh_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18477*/   /*Scope*/ 17, /*->18495*/
/*18478*/     OPC_CheckInteger, 96|128,3/*480*/, 
/*18481*/     OPC_MoveParent,
/*18482*/     OPC_RecordChild1, // #0 = $dst2
/*18483*/     OPC_RecordChild2, // #1 = $src1
/*18484*/     OPC_RecordChild3, // #2 = $src2
/*18485*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_nac_ll_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 480:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_nac_ll_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18495*/   /*Scope*/ 17, /*->18513*/
/*18496*/     OPC_CheckInteger, 97|128,3/*481*/, 
/*18499*/     OPC_MoveParent,
/*18500*/     OPC_RecordChild1, // #0 = $dst2
/*18501*/     OPC_RecordChild2, // #1 = $src1
/*18502*/     OPC_RecordChild3, // #2 = $src2
/*18503*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_nac_ll_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 481:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_nac_ll_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18513*/   /*Scope*/ 17, /*->18531*/
/*18514*/     OPC_CheckInteger, 105|128,3/*489*/, 
/*18517*/     OPC_MoveParent,
/*18518*/     OPC_RecordChild1, // #0 = $dst2
/*18519*/     OPC_RecordChild2, // #1 = $src1
/*18520*/     OPC_RecordChild3, // #2 = $src2
/*18521*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_nac_sat_ll_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 489:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_nac_sat_ll_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18531*/   /*Scope*/ 17, /*->18549*/
/*18532*/     OPC_CheckInteger, 104|128,3/*488*/, 
/*18535*/     OPC_MoveParent,
/*18536*/     OPC_RecordChild1, // #0 = $dst2
/*18537*/     OPC_RecordChild2, // #1 = $src1
/*18538*/     OPC_RecordChild3, // #2 = $src2
/*18539*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpy_nac_sat_ll_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 488:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpy_nac_sat_ll_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18549*/   /*Scope*/ 17, /*->18567*/
/*18550*/     OPC_CheckInteger, 3|128,4/*515*/, 
/*18553*/     OPC_MoveParent,
/*18554*/     OPC_RecordChild1, // #0 = $dst2
/*18555*/     OPC_RecordChild2, // #1 = $src1
/*18556*/     OPC_RecordChild3, // #2 = $src2
/*18557*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_acc_hh_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 515:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_acc_hh_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18567*/   /*Scope*/ 17, /*->18585*/
/*18568*/     OPC_CheckInteger, 4|128,4/*516*/, 
/*18571*/     OPC_MoveParent,
/*18572*/     OPC_RecordChild1, // #0 = $dst2
/*18573*/     OPC_RecordChild2, // #1 = $src1
/*18574*/     OPC_RecordChild3, // #2 = $src2
/*18575*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_acc_hh_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 516:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_acc_hh_s1:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18585*/   /*Scope*/ 17, /*->18603*/
/*18586*/     OPC_CheckInteger, 5|128,4/*517*/, 
/*18589*/     OPC_MoveParent,
/*18590*/     OPC_RecordChild1, // #0 = $dst2
/*18591*/     OPC_RecordChild2, // #1 = $src1
/*18592*/     OPC_RecordChild3, // #2 = $src2
/*18593*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_acc_hl_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 517:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_acc_hl_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18603*/   /*Scope*/ 17, /*->18621*/
/*18604*/     OPC_CheckInteger, 6|128,4/*518*/, 
/*18607*/     OPC_MoveParent,
/*18608*/     OPC_RecordChild1, // #0 = $dst2
/*18609*/     OPC_RecordChild2, // #1 = $src1
/*18610*/     OPC_RecordChild3, // #2 = $src2
/*18611*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_acc_hl_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 518:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_acc_hl_s1:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18621*/   /*Scope*/ 17, /*->18639*/
/*18622*/     OPC_CheckInteger, 7|128,4/*519*/, 
/*18625*/     OPC_MoveParent,
/*18626*/     OPC_RecordChild1, // #0 = $dst2
/*18627*/     OPC_RecordChild2, // #1 = $src1
/*18628*/     OPC_RecordChild3, // #2 = $src2
/*18629*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_acc_lh_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 519:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_acc_lh_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18639*/   /*Scope*/ 17, /*->18657*/
/*18640*/     OPC_CheckInteger, 8|128,4/*520*/, 
/*18643*/     OPC_MoveParent,
/*18644*/     OPC_RecordChild1, // #0 = $dst2
/*18645*/     OPC_RecordChild2, // #1 = $src1
/*18646*/     OPC_RecordChild3, // #2 = $src2
/*18647*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_acc_lh_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 520:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_acc_lh_s1:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18657*/   /*Scope*/ 17, /*->18675*/
/*18658*/     OPC_CheckInteger, 9|128,4/*521*/, 
/*18661*/     OPC_MoveParent,
/*18662*/     OPC_RecordChild1, // #0 = $dst2
/*18663*/     OPC_RecordChild2, // #1 = $src1
/*18664*/     OPC_RecordChild3, // #2 = $src2
/*18665*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_acc_ll_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 521:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_acc_ll_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18675*/   /*Scope*/ 17, /*->18693*/
/*18676*/     OPC_CheckInteger, 10|128,4/*522*/, 
/*18679*/     OPC_MoveParent,
/*18680*/     OPC_RecordChild1, // #0 = $dst2
/*18681*/     OPC_RecordChild2, // #1 = $src1
/*18682*/     OPC_RecordChild3, // #2 = $src2
/*18683*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_acc_ll_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 522:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_acc_ll_s1:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18693*/   /*Scope*/ 17, /*->18711*/
/*18694*/     OPC_CheckInteger, 19|128,4/*531*/, 
/*18697*/     OPC_MoveParent,
/*18698*/     OPC_RecordChild1, // #0 = $dst2
/*18699*/     OPC_RecordChild2, // #1 = $src1
/*18700*/     OPC_RecordChild3, // #2 = $src2
/*18701*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_nac_hh_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 531:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_nac_hh_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18711*/   /*Scope*/ 17, /*->18729*/
/*18712*/     OPC_CheckInteger, 20|128,4/*532*/, 
/*18715*/     OPC_MoveParent,
/*18716*/     OPC_RecordChild1, // #0 = $dst2
/*18717*/     OPC_RecordChild2, // #1 = $src1
/*18718*/     OPC_RecordChild3, // #2 = $src2
/*18719*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_nac_hh_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 532:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_nac_hh_s1:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18729*/   /*Scope*/ 17, /*->18747*/
/*18730*/     OPC_CheckInteger, 21|128,4/*533*/, 
/*18733*/     OPC_MoveParent,
/*18734*/     OPC_RecordChild1, // #0 = $dst2
/*18735*/     OPC_RecordChild2, // #1 = $src1
/*18736*/     OPC_RecordChild3, // #2 = $src2
/*18737*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_nac_hl_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 533:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_nac_hl_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18747*/   /*Scope*/ 17, /*->18765*/
/*18748*/     OPC_CheckInteger, 22|128,4/*534*/, 
/*18751*/     OPC_MoveParent,
/*18752*/     OPC_RecordChild1, // #0 = $dst2
/*18753*/     OPC_RecordChild2, // #1 = $src1
/*18754*/     OPC_RecordChild3, // #2 = $src2
/*18755*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_nac_hl_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 534:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_nac_hl_s1:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18765*/   /*Scope*/ 17, /*->18783*/
/*18766*/     OPC_CheckInteger, 23|128,4/*535*/, 
/*18769*/     OPC_MoveParent,
/*18770*/     OPC_RecordChild1, // #0 = $dst2
/*18771*/     OPC_RecordChild2, // #1 = $src1
/*18772*/     OPC_RecordChild3, // #2 = $src2
/*18773*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_nac_lh_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 535:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_nac_lh_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18783*/   /*Scope*/ 17, /*->18801*/
/*18784*/     OPC_CheckInteger, 24|128,4/*536*/, 
/*18787*/     OPC_MoveParent,
/*18788*/     OPC_RecordChild1, // #0 = $dst2
/*18789*/     OPC_RecordChild2, // #1 = $src1
/*18790*/     OPC_RecordChild3, // #2 = $src2
/*18791*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_nac_lh_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 536:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_nac_lh_s1:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18801*/   /*Scope*/ 17, /*->18819*/
/*18802*/     OPC_CheckInteger, 25|128,4/*537*/, 
/*18805*/     OPC_MoveParent,
/*18806*/     OPC_RecordChild1, // #0 = $dst2
/*18807*/     OPC_RecordChild2, // #1 = $src1
/*18808*/     OPC_RecordChild3, // #2 = $src2
/*18809*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_nac_ll_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 537:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_nac_ll_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18819*/   /*Scope*/ 17, /*->18837*/
/*18820*/     OPC_CheckInteger, 26|128,4/*538*/, 
/*18823*/     OPC_MoveParent,
/*18824*/     OPC_RecordChild1, // #0 = $dst2
/*18825*/     OPC_RecordChild2, // #1 = $src1
/*18826*/     OPC_RecordChild3, // #2 = $src2
/*18827*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyd_nac_ll_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 538:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyd_nac_ll_s1:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18837*/   /*Scope*/ 15, /*->18853*/
/*18838*/     OPC_CheckInteger, 45|128,4/*557*/, 
/*18841*/     OPC_MoveParent,
/*18842*/     OPC_RecordChild1, // #0 = $src1
/*18843*/     OPC_RecordChild2, // #1 = $src2
/*18844*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_hh_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 557:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_hh_s0:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18853*/   /*Scope*/ 15, /*->18869*/
/*18854*/     OPC_CheckInteger, 46|128,4/*558*/, 
/*18857*/     OPC_MoveParent,
/*18858*/     OPC_RecordChild1, // #0 = $src1
/*18859*/     OPC_RecordChild2, // #1 = $src2
/*18860*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_hh_s1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 558:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_hh_s1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18869*/   /*Scope*/ 15, /*->18885*/
/*18870*/     OPC_CheckInteger, 47|128,4/*559*/, 
/*18873*/     OPC_MoveParent,
/*18874*/     OPC_RecordChild1, // #0 = $src1
/*18875*/     OPC_RecordChild2, // #1 = $src2
/*18876*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_hl_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 559:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_hl_s0:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18885*/   /*Scope*/ 15, /*->18901*/
/*18886*/     OPC_CheckInteger, 48|128,4/*560*/, 
/*18889*/     OPC_MoveParent,
/*18890*/     OPC_RecordChild1, // #0 = $src1
/*18891*/     OPC_RecordChild2, // #1 = $src2
/*18892*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_hl_s1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 560:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_hl_s1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18901*/   /*Scope*/ 15, /*->18917*/
/*18902*/     OPC_CheckInteger, 49|128,4/*561*/, 
/*18905*/     OPC_MoveParent,
/*18906*/     OPC_RecordChild1, // #0 = $src1
/*18907*/     OPC_RecordChild2, // #1 = $src2
/*18908*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_lh_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 561:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_lh_s0:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18917*/   /*Scope*/ 15, /*->18933*/
/*18918*/     OPC_CheckInteger, 50|128,4/*562*/, 
/*18921*/     OPC_MoveParent,
/*18922*/     OPC_RecordChild1, // #0 = $src1
/*18923*/     OPC_RecordChild2, // #1 = $src2
/*18924*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_lh_s1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 562:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_lh_s1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18933*/   /*Scope*/ 15, /*->18949*/
/*18934*/     OPC_CheckInteger, 51|128,4/*563*/, 
/*18937*/     OPC_MoveParent,
/*18938*/     OPC_RecordChild1, // #0 = $src1
/*18939*/     OPC_RecordChild2, // #1 = $src2
/*18940*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_ll_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 563:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_ll_s0:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18949*/   /*Scope*/ 15, /*->18965*/
/*18950*/     OPC_CheckInteger, 52|128,4/*564*/, 
/*18953*/     OPC_MoveParent,
/*18954*/     OPC_RecordChild1, // #0 = $src1
/*18955*/     OPC_RecordChild2, // #1 = $src2
/*18956*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_ll_s1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 564:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_ll_s1:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18965*/   /*Scope*/ 15, /*->18981*/
/*18966*/     OPC_CheckInteger, 70|128,4/*582*/, 
/*18969*/     OPC_MoveParent,
/*18970*/     OPC_RecordChild1, // #0 = $src1
/*18971*/     OPC_RecordChild2, // #1 = $src2
/*18972*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_hh_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 582:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_hh_s0:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18981*/   /*Scope*/ 15, /*->18997*/
/*18982*/     OPC_CheckInteger, 71|128,4/*583*/, 
/*18985*/     OPC_MoveParent,
/*18986*/     OPC_RecordChild1, // #0 = $src1
/*18987*/     OPC_RecordChild2, // #1 = $src2
/*18988*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_hh_s1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 583:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_hh_s1:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*18997*/   /*Scope*/ 15, /*->19013*/
/*18998*/     OPC_CheckInteger, 72|128,4/*584*/, 
/*19001*/     OPC_MoveParent,
/*19002*/     OPC_RecordChild1, // #0 = $src1
/*19003*/     OPC_RecordChild2, // #1 = $src2
/*19004*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_hl_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 584:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_hl_s0:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19013*/   /*Scope*/ 15, /*->19029*/
/*19014*/     OPC_CheckInteger, 73|128,4/*585*/, 
/*19017*/     OPC_MoveParent,
/*19018*/     OPC_RecordChild1, // #0 = $src1
/*19019*/     OPC_RecordChild2, // #1 = $src2
/*19020*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_hl_s1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 585:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_hl_s1:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19029*/   /*Scope*/ 15, /*->19045*/
/*19030*/     OPC_CheckInteger, 74|128,4/*586*/, 
/*19033*/     OPC_MoveParent,
/*19034*/     OPC_RecordChild1, // #0 = $src1
/*19035*/     OPC_RecordChild2, // #1 = $src2
/*19036*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_lh_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 586:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_lh_s0:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19045*/   /*Scope*/ 15, /*->19061*/
/*19046*/     OPC_CheckInteger, 75|128,4/*587*/, 
/*19049*/     OPC_MoveParent,
/*19050*/     OPC_RecordChild1, // #0 = $src1
/*19051*/     OPC_RecordChild2, // #1 = $src2
/*19052*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_lh_s1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 587:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_lh_s1:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19061*/   /*Scope*/ 15, /*->19077*/
/*19062*/     OPC_CheckInteger, 76|128,4/*588*/, 
/*19065*/     OPC_MoveParent,
/*19066*/     OPC_RecordChild1, // #0 = $src1
/*19067*/     OPC_RecordChild2, // #1 = $src2
/*19068*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_ll_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 588:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_ll_s0:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19077*/   /*Scope*/ 15, /*->19093*/
/*19078*/     OPC_CheckInteger, 77|128,4/*589*/, 
/*19081*/     OPC_MoveParent,
/*19082*/     OPC_RecordChild1, // #0 = $src1
/*19083*/     OPC_RecordChild2, // #1 = $src2
/*19084*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_ll_s1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 589:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_ll_s1:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19093*/   /*Scope*/ 17, /*->19111*/
/*19094*/     OPC_CheckInteger, 37|128,4/*549*/, 
/*19097*/     OPC_MoveParent,
/*19098*/     OPC_RecordChild1, // #0 = $dst2
/*19099*/     OPC_RecordChild2, // #1 = $src1
/*19100*/     OPC_RecordChild3, // #2 = $src2
/*19101*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_acc_hh_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 549:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_acc_hh_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19111*/   /*Scope*/ 17, /*->19129*/
/*19112*/     OPC_CheckInteger, 38|128,4/*550*/, 
/*19115*/     OPC_MoveParent,
/*19116*/     OPC_RecordChild1, // #0 = $dst2
/*19117*/     OPC_RecordChild2, // #1 = $src1
/*19118*/     OPC_RecordChild3, // #2 = $src2
/*19119*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_acc_hh_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 550:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_acc_hh_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19129*/   /*Scope*/ 17, /*->19147*/
/*19130*/     OPC_CheckInteger, 39|128,4/*551*/, 
/*19133*/     OPC_MoveParent,
/*19134*/     OPC_RecordChild1, // #0 = $dst2
/*19135*/     OPC_RecordChild2, // #1 = $src1
/*19136*/     OPC_RecordChild3, // #2 = $src2
/*19137*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_acc_hl_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 551:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_acc_hl_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19147*/   /*Scope*/ 17, /*->19165*/
/*19148*/     OPC_CheckInteger, 40|128,4/*552*/, 
/*19151*/     OPC_MoveParent,
/*19152*/     OPC_RecordChild1, // #0 = $dst2
/*19153*/     OPC_RecordChild2, // #1 = $src1
/*19154*/     OPC_RecordChild3, // #2 = $src2
/*19155*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_acc_hl_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 552:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_acc_hl_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19165*/   /*Scope*/ 17, /*->19183*/
/*19166*/     OPC_CheckInteger, 41|128,4/*553*/, 
/*19169*/     OPC_MoveParent,
/*19170*/     OPC_RecordChild1, // #0 = $dst2
/*19171*/     OPC_RecordChild2, // #1 = $src1
/*19172*/     OPC_RecordChild3, // #2 = $src2
/*19173*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_acc_lh_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 553:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_acc_lh_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19183*/   /*Scope*/ 17, /*->19201*/
/*19184*/     OPC_CheckInteger, 42|128,4/*554*/, 
/*19187*/     OPC_MoveParent,
/*19188*/     OPC_RecordChild1, // #0 = $dst2
/*19189*/     OPC_RecordChild2, // #1 = $src1
/*19190*/     OPC_RecordChild3, // #2 = $src2
/*19191*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_acc_lh_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 554:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_acc_lh_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19201*/   /*Scope*/ 17, /*->19219*/
/*19202*/     OPC_CheckInteger, 43|128,4/*555*/, 
/*19205*/     OPC_MoveParent,
/*19206*/     OPC_RecordChild1, // #0 = $dst2
/*19207*/     OPC_RecordChild2, // #1 = $src1
/*19208*/     OPC_RecordChild3, // #2 = $src2
/*19209*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_acc_ll_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 555:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_acc_ll_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19219*/   /*Scope*/ 17, /*->19237*/
/*19220*/     OPC_CheckInteger, 44|128,4/*556*/, 
/*19223*/     OPC_MoveParent,
/*19224*/     OPC_RecordChild1, // #0 = $dst2
/*19225*/     OPC_RecordChild2, // #1 = $src1
/*19226*/     OPC_RecordChild3, // #2 = $src2
/*19227*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_acc_ll_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 556:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_acc_ll_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19237*/   /*Scope*/ 17, /*->19255*/
/*19238*/     OPC_CheckInteger, 53|128,4/*565*/, 
/*19241*/     OPC_MoveParent,
/*19242*/     OPC_RecordChild1, // #0 = $dst2
/*19243*/     OPC_RecordChild2, // #1 = $src1
/*19244*/     OPC_RecordChild3, // #2 = $src2
/*19245*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_nac_hh_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 565:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_nac_hh_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19255*/   /*Scope*/ 17, /*->19273*/
/*19256*/     OPC_CheckInteger, 54|128,4/*566*/, 
/*19259*/     OPC_MoveParent,
/*19260*/     OPC_RecordChild1, // #0 = $dst2
/*19261*/     OPC_RecordChild2, // #1 = $src1
/*19262*/     OPC_RecordChild3, // #2 = $src2
/*19263*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_nac_hh_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 566:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_nac_hh_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19273*/   /*Scope*/ 17, /*->19291*/
/*19274*/     OPC_CheckInteger, 55|128,4/*567*/, 
/*19277*/     OPC_MoveParent,
/*19278*/     OPC_RecordChild1, // #0 = $dst2
/*19279*/     OPC_RecordChild2, // #1 = $src1
/*19280*/     OPC_RecordChild3, // #2 = $src2
/*19281*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_nac_hl_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 567:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_nac_hl_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19291*/   /*Scope*/ 17, /*->19309*/
/*19292*/     OPC_CheckInteger, 56|128,4/*568*/, 
/*19295*/     OPC_MoveParent,
/*19296*/     OPC_RecordChild1, // #0 = $dst2
/*19297*/     OPC_RecordChild2, // #1 = $src1
/*19298*/     OPC_RecordChild3, // #2 = $src2
/*19299*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_nac_hl_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 568:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_nac_hl_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19309*/   /*Scope*/ 17, /*->19327*/
/*19310*/     OPC_CheckInteger, 57|128,4/*569*/, 
/*19313*/     OPC_MoveParent,
/*19314*/     OPC_RecordChild1, // #0 = $dst2
/*19315*/     OPC_RecordChild2, // #1 = $src1
/*19316*/     OPC_RecordChild3, // #2 = $src2
/*19317*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_nac_lh_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 569:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_nac_lh_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19327*/   /*Scope*/ 17, /*->19345*/
/*19328*/     OPC_CheckInteger, 58|128,4/*570*/, 
/*19331*/     OPC_MoveParent,
/*19332*/     OPC_RecordChild1, // #0 = $dst2
/*19333*/     OPC_RecordChild2, // #1 = $src1
/*19334*/     OPC_RecordChild3, // #2 = $src2
/*19335*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_nac_lh_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 570:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_nac_lh_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19345*/   /*Scope*/ 17, /*->19363*/
/*19346*/     OPC_CheckInteger, 59|128,4/*571*/, 
/*19349*/     OPC_MoveParent,
/*19350*/     OPC_RecordChild1, // #0 = $dst2
/*19351*/     OPC_RecordChild2, // #1 = $src1
/*19352*/     OPC_RecordChild3, // #2 = $src2
/*19353*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_nac_ll_s0), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 571:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_nac_ll_s0:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19363*/   /*Scope*/ 17, /*->19381*/
/*19364*/     OPC_CheckInteger, 60|128,4/*572*/, 
/*19367*/     OPC_MoveParent,
/*19368*/     OPC_RecordChild1, // #0 = $dst2
/*19369*/     OPC_RecordChild2, // #1 = $src1
/*19370*/     OPC_RecordChild3, // #2 = $src2
/*19371*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyu_nac_ll_s1), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 572:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyu_nac_ll_s1:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19381*/   /*Scope*/ 17, /*->19399*/
/*19382*/     OPC_CheckInteger, 62|128,4/*574*/, 
/*19385*/     OPC_MoveParent,
/*19386*/     OPC_RecordChild1, // #0 = $dst2
/*19387*/     OPC_RecordChild2, // #1 = $src1
/*19388*/     OPC_RecordChild3, // #2 = $src2
/*19389*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_acc_hh_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 574:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_acc_hh_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19399*/   /*Scope*/ 17, /*->19417*/
/*19400*/     OPC_CheckInteger, 63|128,4/*575*/, 
/*19403*/     OPC_MoveParent,
/*19404*/     OPC_RecordChild1, // #0 = $dst2
/*19405*/     OPC_RecordChild2, // #1 = $src1
/*19406*/     OPC_RecordChild3, // #2 = $src2
/*19407*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_acc_hh_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 575:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_acc_hh_s1:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19417*/   /*Scope*/ 17, /*->19435*/
/*19418*/     OPC_CheckInteger, 64|128,4/*576*/, 
/*19421*/     OPC_MoveParent,
/*19422*/     OPC_RecordChild1, // #0 = $dst2
/*19423*/     OPC_RecordChild2, // #1 = $src1
/*19424*/     OPC_RecordChild3, // #2 = $src2
/*19425*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_acc_hl_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 576:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_acc_hl_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19435*/   /*Scope*/ 17, /*->19453*/
/*19436*/     OPC_CheckInteger, 65|128,4/*577*/, 
/*19439*/     OPC_MoveParent,
/*19440*/     OPC_RecordChild1, // #0 = $dst2
/*19441*/     OPC_RecordChild2, // #1 = $src1
/*19442*/     OPC_RecordChild3, // #2 = $src2
/*19443*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_acc_hl_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 577:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_acc_hl_s1:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19453*/   /*Scope*/ 17, /*->19471*/
/*19454*/     OPC_CheckInteger, 66|128,4/*578*/, 
/*19457*/     OPC_MoveParent,
/*19458*/     OPC_RecordChild1, // #0 = $dst2
/*19459*/     OPC_RecordChild2, // #1 = $src1
/*19460*/     OPC_RecordChild3, // #2 = $src2
/*19461*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_acc_lh_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 578:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_acc_lh_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19471*/   /*Scope*/ 17, /*->19489*/
/*19472*/     OPC_CheckInteger, 67|128,4/*579*/, 
/*19475*/     OPC_MoveParent,
/*19476*/     OPC_RecordChild1, // #0 = $dst2
/*19477*/     OPC_RecordChild2, // #1 = $src1
/*19478*/     OPC_RecordChild3, // #2 = $src2
/*19479*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_acc_lh_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 579:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_acc_lh_s1:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19489*/   /*Scope*/ 17, /*->19507*/
/*19490*/     OPC_CheckInteger, 68|128,4/*580*/, 
/*19493*/     OPC_MoveParent,
/*19494*/     OPC_RecordChild1, // #0 = $dst2
/*19495*/     OPC_RecordChild2, // #1 = $src1
/*19496*/     OPC_RecordChild3, // #2 = $src2
/*19497*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_acc_ll_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 580:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_acc_ll_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19507*/   /*Scope*/ 17, /*->19525*/
/*19508*/     OPC_CheckInteger, 69|128,4/*581*/, 
/*19511*/     OPC_MoveParent,
/*19512*/     OPC_RecordChild1, // #0 = $dst2
/*19513*/     OPC_RecordChild2, // #1 = $src1
/*19514*/     OPC_RecordChild3, // #2 = $src2
/*19515*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_acc_ll_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 581:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_acc_ll_s1:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19525*/   /*Scope*/ 17, /*->19543*/
/*19526*/     OPC_CheckInteger, 78|128,4/*590*/, 
/*19529*/     OPC_MoveParent,
/*19530*/     OPC_RecordChild1, // #0 = $dst2
/*19531*/     OPC_RecordChild2, // #1 = $src1
/*19532*/     OPC_RecordChild3, // #2 = $src2
/*19533*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_nac_hh_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 590:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_nac_hh_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19543*/   /*Scope*/ 17, /*->19561*/
/*19544*/     OPC_CheckInteger, 79|128,4/*591*/, 
/*19547*/     OPC_MoveParent,
/*19548*/     OPC_RecordChild1, // #0 = $dst2
/*19549*/     OPC_RecordChild2, // #1 = $src1
/*19550*/     OPC_RecordChild3, // #2 = $src2
/*19551*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_nac_hh_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 591:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_nac_hh_s1:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19561*/   /*Scope*/ 17, /*->19579*/
/*19562*/     OPC_CheckInteger, 80|128,4/*592*/, 
/*19565*/     OPC_MoveParent,
/*19566*/     OPC_RecordChild1, // #0 = $dst2
/*19567*/     OPC_RecordChild2, // #1 = $src1
/*19568*/     OPC_RecordChild3, // #2 = $src2
/*19569*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_nac_hl_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 592:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_nac_hl_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19579*/   /*Scope*/ 17, /*->19597*/
/*19580*/     OPC_CheckInteger, 81|128,4/*593*/, 
/*19583*/     OPC_MoveParent,
/*19584*/     OPC_RecordChild1, // #0 = $dst2
/*19585*/     OPC_RecordChild2, // #1 = $src1
/*19586*/     OPC_RecordChild3, // #2 = $src2
/*19587*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_nac_hl_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 593:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_nac_hl_s1:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19597*/   /*Scope*/ 17, /*->19615*/
/*19598*/     OPC_CheckInteger, 82|128,4/*594*/, 
/*19601*/     OPC_MoveParent,
/*19602*/     OPC_RecordChild1, // #0 = $dst2
/*19603*/     OPC_RecordChild2, // #1 = $src1
/*19604*/     OPC_RecordChild3, // #2 = $src2
/*19605*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_nac_lh_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 594:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_nac_lh_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19615*/   /*Scope*/ 17, /*->19633*/
/*19616*/     OPC_CheckInteger, 83|128,4/*595*/, 
/*19619*/     OPC_MoveParent,
/*19620*/     OPC_RecordChild1, // #0 = $dst2
/*19621*/     OPC_RecordChild2, // #1 = $src1
/*19622*/     OPC_RecordChild3, // #2 = $src2
/*19623*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_nac_lh_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 595:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_nac_lh_s1:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19633*/   /*Scope*/ 17, /*->19651*/
/*19634*/     OPC_CheckInteger, 84|128,4/*596*/, 
/*19637*/     OPC_MoveParent,
/*19638*/     OPC_RecordChild1, // #0 = $dst2
/*19639*/     OPC_RecordChild2, // #1 = $src1
/*19640*/     OPC_RecordChild3, // #2 = $src2
/*19641*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_nac_ll_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 596:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_nac_ll_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19651*/   /*Scope*/ 17, /*->19669*/
/*19652*/     OPC_CheckInteger, 85|128,4/*597*/, 
/*19655*/     OPC_MoveParent,
/*19656*/     OPC_RecordChild1, // #0 = $dst2
/*19657*/     OPC_RecordChild2, // #1 = $src1
/*19658*/     OPC_RecordChild3, // #2 = $src2
/*19659*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_mpyud_nac_ll_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 597:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_mpyud_nac_ll_s1:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19669*/   /*Scope*/ 15, /*->19685*/
/*19670*/     OPC_CheckInteger, 46|128,2/*302*/, 
/*19673*/     OPC_MoveParent,
/*19674*/     OPC_RecordChild1, // #0 = $src1
/*19675*/     OPC_RecordChild2, // #1 = $src2
/*19676*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vraddub), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 302:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vraddub:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*19685*/   /*Scope*/ 17, /*->19703*/
/*19686*/     OPC_CheckInteger, 47|128,2/*303*/, 
/*19689*/     OPC_MoveParent,
/*19690*/     OPC_RecordChild1, // #0 = $dst2
/*19691*/     OPC_RecordChild2, // #1 = $src1
/*19692*/     OPC_RecordChild3, // #2 = $src2
/*19693*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vraddub_acc), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 303:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vraddub_acc:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*19703*/   /*Scope*/ 15, /*->19719*/
/*19704*/     OPC_CheckInteger, 48|128,2/*304*/, 
/*19707*/     OPC_MoveParent,
/*19708*/     OPC_RecordChild1, // #0 = $src1
/*19709*/     OPC_RecordChild2, // #1 = $src2
/*19710*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vrsadub), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 304:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vrsadub:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*19719*/   /*Scope*/ 17, /*->19737*/
/*19720*/     OPC_CheckInteger, 49|128,2/*305*/, 
/*19723*/     OPC_MoveParent,
/*19724*/     OPC_RecordChild1, // #0 = $dst2
/*19725*/     OPC_RecordChild2, // #1 = $src1
/*19726*/     OPC_RecordChild3, // #2 = $src2
/*19727*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vrsadub_acc), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 305:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_vrsadub_acc:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*19737*/   /*Scope*/ 15, /*->19753*/
/*19738*/     OPC_CheckInteger, 103|128,4/*615*/, 
/*19741*/     OPC_MoveParent,
/*19742*/     OPC_RecordChild1, // #0 = $src1
/*19743*/     OPC_RecordChild2, // #1 = $src2
/*19744*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vdmpys_s1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 615:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vdmpys_s1:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*19753*/   /*Scope*/ 15, /*->19769*/
/*19754*/     OPC_CheckInteger, 102|128,4/*614*/, 
/*19757*/     OPC_MoveParent,
/*19758*/     OPC_RecordChild1, // #0 = $src1
/*19759*/     OPC_RecordChild2, // #1 = $src2
/*19760*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vdmpys_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 614:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vdmpys_s0:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*19769*/   /*Scope*/ 17, /*->19787*/
/*19770*/     OPC_CheckInteger, 99|128,4/*611*/, 
/*19773*/     OPC_MoveParent,
/*19774*/     OPC_RecordChild1, // #0 = $dst2
/*19775*/     OPC_RecordChild2, // #1 = $src1
/*19776*/     OPC_RecordChild3, // #2 = $src2
/*19777*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vdmacs_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 611:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vdmacs_s1:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*19787*/   /*Scope*/ 17, /*->19805*/
/*19788*/     OPC_CheckInteger, 98|128,4/*610*/, 
/*19791*/     OPC_MoveParent,
/*19792*/     OPC_RecordChild1, // #0 = $dst2
/*19793*/     OPC_RecordChild2, // #1 = $src1
/*19794*/     OPC_RecordChild3, // #2 = $src2
/*19795*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vdmacs_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 610:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vdmacs_s0:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*19805*/   /*Scope*/ 15, /*->19821*/
/*19806*/     OPC_CheckInteger, 100|128,4/*612*/, 
/*19809*/     OPC_MoveParent,
/*19810*/     OPC_RecordChild1, // #0 = $src1
/*19811*/     OPC_RecordChild2, // #1 = $src2
/*19812*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vdmpyrs_s0), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 612:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vdmpyrs_s0:i32 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*19821*/   /*Scope*/ 15, /*->19837*/
/*19822*/     OPC_CheckInteger, 101|128,4/*613*/, 
/*19825*/     OPC_MoveParent,
/*19826*/     OPC_RecordChild1, // #0 = $src1
/*19827*/     OPC_RecordChild2, // #1 = $src2
/*19828*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vdmpyrs_s1), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 613:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vdmpyrs_s1:i32 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*19837*/   /*Scope*/ 15, /*->19853*/
/*19838*/     OPC_CheckInteger, 111|128,4/*623*/, 
/*19841*/     OPC_MoveParent,
/*19842*/     OPC_RecordChild1, // #0 = $src1
/*19843*/     OPC_RecordChild2, // #1 = $src2
/*19844*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vmpy2es_s1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 623:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vmpy2es_s1:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*19853*/   /*Scope*/ 15, /*->19869*/
/*19854*/     OPC_CheckInteger, 110|128,4/*622*/, 
/*19857*/     OPC_MoveParent,
/*19858*/     OPC_RecordChild1, // #0 = $src1
/*19859*/     OPC_RecordChild2, // #1 = $src2
/*19860*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vmpy2es_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 622:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vmpy2es_s0:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*19869*/   /*Scope*/ 17, /*->19887*/
/*19870*/     OPC_CheckInteger, 105|128,4/*617*/, 
/*19873*/     OPC_MoveParent,
/*19874*/     OPC_RecordChild1, // #0 = $dst2
/*19875*/     OPC_RecordChild2, // #1 = $src1
/*19876*/     OPC_RecordChild3, // #2 = $src2
/*19877*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vmac2es), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 617:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vmac2es:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*19887*/   /*Scope*/ 17, /*->19905*/
/*19888*/     OPC_CheckInteger, 107|128,4/*619*/, 
/*19891*/     OPC_MoveParent,
/*19892*/     OPC_RecordChild1, // #0 = $dst2
/*19893*/     OPC_RecordChild2, // #1 = $src1
/*19894*/     OPC_RecordChild3, // #2 = $src2
/*19895*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vmac2es_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 619:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vmac2es_s1:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*19905*/   /*Scope*/ 17, /*->19923*/
/*19906*/     OPC_CheckInteger, 106|128,4/*618*/, 
/*19909*/     OPC_MoveParent,
/*19910*/     OPC_RecordChild1, // #0 = $dst2
/*19911*/     OPC_RecordChild2, // #1 = $src1
/*19912*/     OPC_RecordChild3, // #2 = $src2
/*19913*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vmac2es_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 618:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vmac2es_s0:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*19923*/   /*Scope*/ 15, /*->19939*/
/*19924*/     OPC_CheckInteger, 112|128,4/*624*/, 
/*19927*/     OPC_MoveParent,
/*19928*/     OPC_RecordChild1, // #0 = $src1
/*19929*/     OPC_RecordChild2, // #1 = $src2
/*19930*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vmpy2s_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 624:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vmpy2s_s0:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19939*/   /*Scope*/ 15, /*->19955*/
/*19940*/     OPC_CheckInteger, 114|128,4/*626*/, 
/*19943*/     OPC_MoveParent,
/*19944*/     OPC_RecordChild1, // #0 = $src1
/*19945*/     OPC_RecordChild2, // #1 = $src2
/*19946*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vmpy2s_s1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 626:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vmpy2s_s1:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19955*/   /*Scope*/ 17, /*->19973*/
/*19956*/     OPC_CheckInteger, 104|128,4/*616*/, 
/*19959*/     OPC_MoveParent,
/*19960*/     OPC_RecordChild1, // #0 = $dst2
/*19961*/     OPC_RecordChild2, // #1 = $src1
/*19962*/     OPC_RecordChild3, // #2 = $src2
/*19963*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vmac2), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 616:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vmac2:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19973*/   /*Scope*/ 17, /*->19991*/
/*19974*/     OPC_CheckInteger, 108|128,4/*620*/, 
/*19977*/     OPC_MoveParent,
/*19978*/     OPC_RecordChild1, // #0 = $dst2
/*19979*/     OPC_RecordChild2, // #1 = $src1
/*19980*/     OPC_RecordChild3, // #2 = $src2
/*19981*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vmac2s_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 620:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vmac2s_s0:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*19991*/   /*Scope*/ 17, /*->20009*/
/*19992*/     OPC_CheckInteger, 109|128,4/*621*/, 
/*19995*/     OPC_MoveParent,
/*19996*/     OPC_RecordChild1, // #0 = $dst2
/*19997*/     OPC_RecordChild2, // #1 = $src1
/*19998*/     OPC_RecordChild3, // #2 = $src2
/*19999*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vmac2s_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 621:iPTR, DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vmac2s_s1:i64 DoubleRegs:i64:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*20009*/   /*Scope*/ 15, /*->20025*/
/*20010*/     OPC_CheckInteger, 113|128,4/*625*/, 
/*20013*/     OPC_MoveParent,
/*20014*/     OPC_RecordChild1, // #0 = $src1
/*20015*/     OPC_RecordChild2, // #1 = $src2
/*20016*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vmpy2s_s0pack), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 625:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vmpy2s_s0pack:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*20025*/   /*Scope*/ 15, /*->20041*/
/*20026*/     OPC_CheckInteger, 115|128,4/*627*/, 
/*20029*/     OPC_MoveParent,
/*20030*/     OPC_RecordChild1, // #0 = $src1
/*20031*/     OPC_RecordChild2, // #1 = $src2
/*20032*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vmpy2s_s1pack), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 627:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vmpy2s_s1pack:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*20041*/   /*Scope*/ 15, /*->20057*/
/*20042*/     OPC_CheckInteger, 1|128,5/*641*/, 
/*20045*/     OPC_MoveParent,
/*20046*/     OPC_RecordChild1, // #0 = $src1
/*20047*/     OPC_RecordChild2, // #1 = $src2
/*20048*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vrmpy_s0), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 641:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vrmpy_s0:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*20057*/   /*Scope*/ 17, /*->20075*/
/*20058*/     OPC_CheckInteger, 0|128,5/*640*/, 
/*20061*/     OPC_MoveParent,
/*20062*/     OPC_RecordChild1, // #0 = $dst2
/*20063*/     OPC_RecordChild2, // #1 = $src1
/*20064*/     OPC_RecordChild3, // #2 = $src2
/*20065*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vrmac_s0), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 640:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vrmac_s0:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*20075*/   /*Scope*/ 13, /*->20089*/
/*20076*/     OPC_CheckInteger, 34|128,1/*162*/, 
/*20079*/     OPC_MoveParent,
/*20080*/     OPC_RecordChild1, // #0 = $src
/*20081*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_abs), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 162:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_A2_abs:i32 IntRegs:i32:$src)
/*20089*/   /*Scope*/ 13, /*->20103*/
/*20090*/     OPC_CheckInteger, 35|128,1/*163*/, 
/*20093*/     OPC_MoveParent,
/*20094*/     OPC_RecordChild1, // #0 = $src
/*20095*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_absp), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i64 163:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_A2_absp:i64 DoubleRegs:i64:$src)
/*20103*/   /*Scope*/ 13, /*->20117*/
/*20104*/     OPC_CheckInteger, 36|128,1/*164*/, 
/*20107*/     OPC_MoveParent,
/*20108*/     OPC_RecordChild1, // #0 = $src
/*20109*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_abssat), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 164:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_A2_abssat:i32 IntRegs:i32:$src)
/*20117*/   /*Scope*/ 13, /*->20131*/
/*20118*/     OPC_CheckInteger, 79|128,1/*207*/, 
/*20121*/     OPC_MoveParent,
/*20122*/     OPC_RecordChild1, // #0 = $src
/*20123*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_negp), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i64 207:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_A2_negp:i64 DoubleRegs:i64:$src)
/*20131*/   /*Scope*/ 13, /*->20145*/
/*20132*/     OPC_CheckInteger, 80|128,1/*208*/, 
/*20135*/     OPC_MoveParent,
/*20136*/     OPC_RecordChild1, // #0 = $src
/*20137*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_negsat), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 208:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_A2_negsat:i32 IntRegs:i32:$src)
/*20145*/   /*Scope*/ 13, /*->20159*/
/*20146*/     OPC_CheckInteger, 82|128,1/*210*/, 
/*20149*/     OPC_MoveParent,
/*20150*/     OPC_RecordChild1, // #0 = $src
/*20151*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_notp), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i64 210:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_A2_notp:i64 DoubleRegs:i64:$src)
/*20159*/   /*Scope*/ 13, /*->20173*/
/*20160*/     OPC_CheckInteger, 119|128,1/*247*/, 
/*20163*/     OPC_MoveParent,
/*20164*/     OPC_RecordChild1, // #0 = $src1
/*20165*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_sxtw), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i64 247:iPTR, IntRegs:i32:$src1) - Complexity = 8
              // Dst: (Hexagon_A2_sxtw:i64 IntRegs:i32:$src1)
/*20173*/   /*Scope*/ 13, /*->20187*/
/*20174*/     OPC_CheckInteger, 74|128,5/*714*/, 
/*20177*/     OPC_MoveParent,
/*20178*/     OPC_RecordChild1, // #0 = $src
/*20179*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_cl0), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 714:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_S2_cl0:i32 IntRegs:i32:$src)
/*20187*/   /*Scope*/ 13, /*->20201*/
/*20188*/     OPC_CheckInteger, 75|128,5/*715*/, 
/*20191*/     OPC_MoveParent,
/*20192*/     OPC_RecordChild1, // #0 = $src
/*20193*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_cl0p), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 715:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_S2_cl0p:i32 DoubleRegs:i64:$src)
/*20201*/   /*Scope*/ 13, /*->20215*/
/*20202*/     OPC_CheckInteger, 76|128,5/*716*/, 
/*20205*/     OPC_MoveParent,
/*20206*/     OPC_RecordChild1, // #0 = $src
/*20207*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_cl1), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 716:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_S2_cl1:i32 IntRegs:i32:$src)
/*20215*/   /*Scope*/ 13, /*->20229*/
/*20216*/     OPC_CheckInteger, 77|128,5/*717*/, 
/*20219*/     OPC_MoveParent,
/*20220*/     OPC_RecordChild1, // #0 = $src
/*20221*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_cl1p), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 717:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_S2_cl1p:i32 DoubleRegs:i64:$src)
/*20229*/   /*Scope*/ 13, /*->20243*/
/*20230*/     OPC_CheckInteger, 78|128,5/*718*/, 
/*20233*/     OPC_MoveParent,
/*20234*/     OPC_RecordChild1, // #0 = $src
/*20235*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_clb), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 718:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_S2_clb:i32 IntRegs:i32:$src)
/*20243*/   /*Scope*/ 13, /*->20257*/
/*20244*/     OPC_CheckInteger, 80|128,5/*720*/, 
/*20247*/     OPC_MoveParent,
/*20248*/     OPC_RecordChild1, // #0 = $src
/*20249*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_clbp), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 720:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_S2_clbp:i32 DoubleRegs:i64:$src)
/*20257*/   /*Scope*/ 13, /*->20271*/
/*20258*/     OPC_CheckInteger, 79|128,5/*719*/, 
/*20261*/     OPC_MoveParent,
/*20262*/     OPC_RecordChild1, // #0 = $src
/*20263*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_clbnorm), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 719:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_S2_clbnorm:i32 IntRegs:i32:$src)
/*20271*/   /*Scope*/ 13, /*->20285*/
/*20272*/     OPC_CheckInteger, 83|128,5/*723*/, 
/*20275*/     OPC_MoveParent,
/*20276*/     OPC_RecordChild1, // #0 = $src
/*20277*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_ct0), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 723:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_S2_ct0:i32 IntRegs:i32:$src)
/*20285*/   /*Scope*/ 13, /*->20299*/
/*20286*/     OPC_CheckInteger, 84|128,5/*724*/, 
/*20289*/     OPC_MoveParent,
/*20290*/     OPC_RecordChild1, // #0 = $src
/*20291*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_ct1), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 724:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_S2_ct1:i32 IntRegs:i32:$src)
/*20299*/   /*Scope*/ 15, /*->20315*/
/*20300*/     OPC_CheckInteger, 82|128,2/*338*/, 
/*20303*/     OPC_MoveParent,
/*20304*/     OPC_RecordChild1, // #0 = $src1
/*20305*/     OPC_RecordChild2, // #1 = $src2
/*20306*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_C2_bitsclr), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 338:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (HEXAGON_C2_bitsclr:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*20315*/   /*Scope*/ 15, /*->20331*/
/*20316*/     OPC_CheckInteger, 84|128,2/*340*/, 
/*20319*/     OPC_MoveParent,
/*20320*/     OPC_RecordChild1, // #0 = $src1
/*20321*/     OPC_RecordChild2, // #1 = $src2
/*20322*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_C2_bitsset), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 340:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (HEXAGON_C2_bitsset:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*20331*/   /*Scope*/ 15, /*->20347*/
/*20332*/     OPC_CheckInteger, 87|128,5/*727*/, 
/*20335*/     OPC_MoveParent,
/*20336*/     OPC_RecordChild1, // #0 = $src1
/*20337*/     OPC_RecordChild2, // #1 = $src2
/*20338*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_extractu_rp), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 727:iPTR, IntRegs:i32:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_extractu_rp:i32 IntRegs:i32:$src1, DoubleRegs:i64:$src2)
/*20347*/   /*Scope*/ 15, /*->20363*/
/*20348*/     OPC_CheckInteger, 89|128,5/*729*/, 
/*20351*/     OPC_MoveParent,
/*20352*/     OPC_RecordChild1, // #0 = $src1
/*20353*/     OPC_RecordChild2, // #1 = $src2
/*20354*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_extractup_rp), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 729:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_extractup_rp:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*20363*/   /*Scope*/ 17, /*->20381*/
/*20364*/     OPC_CheckInteger, 91|128,5/*731*/, 
/*20367*/     OPC_MoveParent,
/*20368*/     OPC_RecordChild1, // #0 = $dst2
/*20369*/     OPC_RecordChild2, // #1 = $src1
/*20370*/     OPC_RecordChild3, // #2 = $src2
/*20371*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_S2_insert_rp), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 731:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (HEXAGON_S2_insert_rp:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, DoubleRegs:i64:$src2)
/*20381*/   /*Scope*/ 17, /*->20399*/
/*20382*/     OPC_CheckInteger, 93|128,5/*733*/, 
/*20385*/     OPC_MoveParent,
/*20386*/     OPC_RecordChild1, // #0 = $dst2
/*20387*/     OPC_RecordChild2, // #1 = $src1
/*20388*/     OPC_RecordChild3, // #2 = $src2
/*20389*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_S2_insertp_rp), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 733:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (HEXAGON_S2_insertp_rp:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*20399*/   /*Scope*/ 13, /*->20413*/
/*20400*/     OPC_CheckInteger, 94|128,5/*734*/, 
/*20403*/     OPC_MoveParent,
/*20404*/     OPC_RecordChild1, // #0 = $src
/*20405*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_S2_interleave), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i64 734:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (HEXAGON_S2_interleave:i64 DoubleRegs:i64:$src)
/*20413*/   /*Scope*/ 13, /*->20427*/
/*20414*/     OPC_CheckInteger, 85|128,5/*725*/, 
/*20417*/     OPC_MoveParent,
/*20418*/     OPC_RecordChild1, // #0 = $src
/*20419*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_S2_deinterleave), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i64 725:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (HEXAGON_S2_deinterleave:i64 DoubleRegs:i64:$src)
/*20427*/   /*Scope*/ 15, /*->20443*/
/*20428*/     OPC_CheckInteger, 95|128,5/*735*/, 
/*20431*/     OPC_MoveParent,
/*20432*/     OPC_RecordChild1, // #0 = $src1
/*20433*/     OPC_RecordChild2, // #1 = $src2
/*20434*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_S2_lfsp), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 735:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (HEXAGON_S2_lfsp:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*20443*/   /*Scope*/ 13, /*->20457*/
/*20444*/     OPC_CheckInteger, 73|128,5/*713*/, 
/*20447*/     OPC_MoveParent,
/*20448*/     OPC_RecordChild1, // #0 = $src
/*20449*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_S2_brev), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 713:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (HEXAGON_S2_brev:i32 IntRegs:i32:$src)
/*20457*/   /*Scope*/ 15, /*->20473*/
/*20458*/     OPC_CheckInteger, 9|128,6/*777*/, 
/*20461*/     OPC_MoveParent,
/*20462*/     OPC_RecordChild1, // #0 = $src1
/*20463*/     OPC_RecordChild2, // #1 = $src2
/*20464*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_setbit_r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 777:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_setbit_r:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*20473*/   /*Scope*/ 15, /*->20489*/
/*20474*/     OPC_CheckInteger, 21|128,6/*789*/, 
/*20477*/     OPC_MoveParent,
/*20478*/     OPC_RecordChild1, // #0 = $src1
/*20479*/     OPC_RecordChild2, // #1 = $src2
/*20480*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_togglebit_r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 789:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_togglebit_r:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*20489*/   /*Scope*/ 15, /*->20505*/
/*20490*/     OPC_CheckInteger, 82|128,5/*722*/, 
/*20493*/     OPC_MoveParent,
/*20494*/     OPC_RecordChild1, // #0 = $src1
/*20495*/     OPC_RecordChild2, // #1 = $src2
/*20496*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_clrbit_r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 722:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_clrbit_r:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*20505*/   /*Scope*/ 15, /*->20521*/
/*20506*/     OPC_CheckInteger, 23|128,6/*791*/, 
/*20509*/     OPC_MoveParent,
/*20510*/     OPC_RecordChild1, // #0 = $src1
/*20511*/     OPC_RecordChild2, // #1 = $src2
/*20512*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_tstbit_r), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 791:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_tstbit_r:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*20521*/   /*Scope*/ 13, /*->20535*/
/*20522*/     OPC_CheckInteger, 29|128,2/*285*/, 
/*20525*/     OPC_MoveParent,
/*20526*/     OPC_RecordChild1, // #0 = $src
/*20527*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vconj), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i64 285:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_A2_vconj:i64 DoubleRegs:i64:$src)
/*20535*/   /*Scope*/ 15, /*->20551*/
/*20536*/     OPC_CheckInteger, 26|128,6/*794*/, 
/*20539*/     OPC_MoveParent,
/*20540*/     OPC_RecordChild1, // #0 = $src1
/*20541*/     OPC_RecordChild2, // #1 = $src2
/*20542*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_vcrotate), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 794:iPTR, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_vcrotate:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*20551*/   /*Scope*/ 13, /*->20565*/
/*20552*/     OPC_CheckInteger, 86|128,1/*214*/, 
/*20555*/     OPC_MoveParent,
/*20556*/     OPC_RecordChild1, // #0 = $src
/*20557*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_sat), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 214:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_A2_sat:i32 DoubleRegs:i64:$src)
/*20565*/   /*Scope*/ 13, /*->20579*/
/*20566*/     OPC_CheckInteger, 87|128,1/*215*/, 
/*20569*/     OPC_MoveParent,
/*20570*/     OPC_RecordChild1, // #0 = $src
/*20571*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_satb), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 215:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_A2_satb:i32 IntRegs:i32:$src)
/*20579*/   /*Scope*/ 13, /*->20593*/
/*20580*/     OPC_CheckInteger, 88|128,1/*216*/, 
/*20583*/     OPC_MoveParent,
/*20584*/     OPC_RecordChild1, // #0 = $src
/*20585*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_sath), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 216:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_A2_sath:i32 IntRegs:i32:$src)
/*20593*/   /*Scope*/ 13, /*->20607*/
/*20594*/     OPC_CheckInteger, 89|128,1/*217*/, 
/*20597*/     OPC_MoveParent,
/*20598*/     OPC_RecordChild1, // #0 = $src
/*20599*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_satub), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 217:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_A2_satub:i32 IntRegs:i32:$src)
/*20607*/   /*Scope*/ 13, /*->20621*/
/*20608*/     OPC_CheckInteger, 90|128,1/*218*/, 
/*20611*/     OPC_MoveParent,
/*20612*/     OPC_RecordChild1, // #0 = $src
/*20613*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_satuh), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 218:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_A2_satuh:i32 IntRegs:i32:$src)
/*20621*/   /*Scope*/ 13, /*->20635*/
/*20622*/     OPC_CheckInteger, 116|128,1/*244*/, 
/*20625*/     OPC_MoveParent,
/*20626*/     OPC_RecordChild1, // #0 = $src
/*20627*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_swiz), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 244:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_A2_swiz:i32 IntRegs:i32:$src)
/*20635*/   /*Scope*/ 17, /*->20653*/
/*20636*/     OPC_CheckInteger, 25|128,6/*793*/, 
/*20639*/     OPC_MoveParent,
/*20640*/     OPC_RecordChild1, // #0 = $src1
/*20641*/     OPC_RecordChild2, // #1 = $src2
/*20642*/     OPC_RecordChild3, // #2 = $src3
/*20643*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_valignrb), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 793:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (Hexagon_S2_valignrb:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, IntRegs:i32:$src3)
/*20653*/   /*Scope*/ 13, /*->20667*/
/*20654*/     OPC_CheckInteger, 27|128,6/*795*/, 
/*20657*/     OPC_MoveParent,
/*20658*/     OPC_RecordChild1, // #0 = $src
/*20659*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_vrndpackwh), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 795:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_S2_vrndpackwh:i32 DoubleRegs:i64:$src)
/*20667*/   /*Scope*/ 13, /*->20681*/
/*20668*/     OPC_CheckInteger, 28|128,6/*796*/, 
/*20671*/     OPC_MoveParent,
/*20672*/     OPC_RecordChild1, // #0 = $src
/*20673*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_vrndpackwhs), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 796:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_S2_vrndpackwhs:i32 DoubleRegs:i64:$src)
/*20681*/   /*Scope*/ 13, /*->20695*/
/*20682*/     OPC_CheckInteger, 14|128,6/*782*/, 
/*20685*/     OPC_MoveParent,
/*20686*/     OPC_RecordChild1, // #0 = $src
/*20687*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_svsathb), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 782:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_S2_svsathb:i32 IntRegs:i32:$src)
/*20695*/   /*Scope*/ 13, /*->20709*/
/*20696*/     OPC_CheckInteger, 29|128,6/*797*/, 
/*20699*/     OPC_MoveParent,
/*20700*/     OPC_RecordChild1, // #0 = $src
/*20701*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_vsathb), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 797:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_S2_vsathb:i32 DoubleRegs:i64:$src)
/*20709*/   /*Scope*/ 13, /*->20723*/
/*20710*/     OPC_CheckInteger, 15|128,6/*783*/, 
/*20713*/     OPC_MoveParent,
/*20714*/     OPC_RecordChild1, // #0 = $src
/*20715*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_svsathub), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 783:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_S2_svsathub:i32 IntRegs:i32:$src)
/*20723*/   /*Scope*/ 13, /*->20737*/
/*20724*/     OPC_CheckInteger, 31|128,6/*799*/, 
/*20727*/     OPC_MoveParent,
/*20728*/     OPC_RecordChild1, // #0 = $src
/*20729*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_vsathub), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 799:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_S2_vsathub:i32 DoubleRegs:i64:$src)
/*20737*/   /*Scope*/ 13, /*->20751*/
/*20738*/     OPC_CheckInteger, 33|128,6/*801*/, 
/*20741*/     OPC_MoveParent,
/*20742*/     OPC_RecordChild1, // #0 = $src
/*20743*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_vsatwh), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 801:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_S2_vsatwh:i32 DoubleRegs:i64:$src)
/*20751*/   /*Scope*/ 13, /*->20765*/
/*20752*/     OPC_CheckInteger, 35|128,6/*803*/, 
/*20755*/     OPC_MoveParent,
/*20756*/     OPC_RecordChild1, // #0 = $src
/*20757*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_vsatwuh), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 803:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_S2_vsatwuh:i32 DoubleRegs:i64:$src)
/*20765*/   /*Scope*/ 13, /*->20779*/
/*20766*/     OPC_CheckInteger, 30|128,6/*798*/, 
/*20769*/     OPC_MoveParent,
/*20770*/     OPC_RecordChild1, // #0 = $src
/*20771*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_vsathb_nopack), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i64 798:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_S2_vsathb_nopack:i64 DoubleRegs:i64:$src)
/*20779*/   /*Scope*/ 13, /*->20793*/
/*20780*/     OPC_CheckInteger, 32|128,6/*800*/, 
/*20783*/     OPC_MoveParent,
/*20784*/     OPC_RecordChild1, // #0 = $src
/*20785*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_vsathub_nopack), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i64 800:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_S2_vsathub_nopack:i64 DoubleRegs:i64:$src)
/*20793*/   /*Scope*/ 13, /*->20807*/
/*20794*/     OPC_CheckInteger, 34|128,6/*802*/, 
/*20797*/     OPC_MoveParent,
/*20798*/     OPC_RecordChild1, // #0 = $src
/*20799*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_vsatwh_nopack), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i64 802:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_S2_vsatwh_nopack:i64 DoubleRegs:i64:$src)
/*20807*/   /*Scope*/ 13, /*->20821*/
/*20808*/     OPC_CheckInteger, 36|128,6/*804*/, 
/*20811*/     OPC_MoveParent,
/*20812*/     OPC_RecordChild1, // #0 = $src
/*20813*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_vsatwuh_nopack), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i64 804:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_S2_vsatwuh_nopack:i64 DoubleRegs:i64:$src)
/*20821*/   /*Scope*/ 15, /*->20837*/
/*20822*/     OPC_CheckInteger, 10|128,6/*778*/, 
/*20825*/     OPC_MoveParent,
/*20826*/     OPC_RecordChild1, // #0 = $src1
/*20827*/     OPC_RecordChild2, // #1 = $src2
/*20828*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_shuffeb), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 778:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_shuffeb:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*20837*/   /*Scope*/ 15, /*->20853*/
/*20838*/     OPC_CheckInteger, 11|128,6/*779*/, 
/*20841*/     OPC_MoveParent,
/*20842*/     OPC_RecordChild1, // #0 = $src1
/*20843*/     OPC_RecordChild2, // #1 = $src2
/*20844*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_shuffeh), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 779:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_shuffeh:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*20853*/   /*Scope*/ 15, /*->20869*/
/*20854*/     OPC_CheckInteger, 12|128,6/*780*/, 
/*20857*/     OPC_MoveParent,
/*20858*/     OPC_RecordChild1, // #0 = $src1
/*20859*/     OPC_RecordChild2, // #1 = $src2
/*20860*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_shuffob), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 780:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_shuffob:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*20869*/   /*Scope*/ 15, /*->20885*/
/*20870*/     OPC_CheckInteger, 13|128,6/*781*/, 
/*20873*/     OPC_MoveParent,
/*20874*/     OPC_RecordChild1, // #0 = $src1
/*20875*/     OPC_RecordChild2, // #1 = $src2
/*20876*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_shuffoh), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 781:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_shuffoh:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*20885*/   /*Scope*/ 13, /*->20899*/
/*20886*/     OPC_CheckInteger, 37|128,6/*805*/, 
/*20889*/     OPC_MoveParent,
/*20890*/     OPC_RecordChild1, // #0 = $src
/*20891*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_vsplatrb), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 805:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_S2_vsplatrb:i32 IntRegs:i32:$src)
/*20899*/   /*Scope*/ 13, /*->20913*/
/*20900*/     OPC_CheckInteger, 38|128,6/*806*/, 
/*20903*/     OPC_MoveParent,
/*20904*/     OPC_RecordChild1, // #0 = $src1
/*20905*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_vsplatrh), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i64 806:iPTR, IntRegs:i32:$src1) - Complexity = 8
              // Dst: (Hexagon_S2_vsplatrh:i64 IntRegs:i32:$src1)
/*20913*/   /*Scope*/ 17, /*->20931*/
/*20914*/     OPC_CheckInteger, 40|128,6/*808*/, 
/*20917*/     OPC_MoveParent,
/*20918*/     OPC_RecordChild1, // #0 = $src1
/*20919*/     OPC_RecordChild2, // #1 = $src2
/*20920*/     OPC_RecordChild3, // #2 = $src3
/*20921*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_S2_vsplicerb), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 808:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (HEXAGON_S2_vsplicerb:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, IntRegs:i32:$src3)
/*20931*/   /*Scope*/ 13, /*->20945*/
/*20932*/     OPC_CheckInteger, 41|128,6/*809*/, 
/*20935*/     OPC_MoveParent,
/*20936*/     OPC_RecordChild1, // #0 = $src1
/*20937*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_vsxtbh), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i64 809:iPTR, IntRegs:i32:$src1) - Complexity = 8
              // Dst: (Hexagon_S2_vsxtbh:i64 IntRegs:i32:$src1)
/*20945*/   /*Scope*/ 13, /*->20959*/
/*20946*/     OPC_CheckInteger, 42|128,6/*810*/, 
/*20949*/     OPC_MoveParent,
/*20950*/     OPC_RecordChild1, // #0 = $src1
/*20951*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_vsxthw), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i64 810:iPTR, IntRegs:i32:$src1) - Complexity = 8
              // Dst: (Hexagon_S2_vsxthw:i64 IntRegs:i32:$src1)
/*20959*/   /*Scope*/ 13, /*->20973*/
/*20960*/     OPC_CheckInteger, 43|128,6/*811*/, 
/*20963*/     OPC_MoveParent,
/*20964*/     OPC_RecordChild1, // #0 = $src
/*20965*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_vtrunehb), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 811:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_S2_vtrunehb:i32 DoubleRegs:i64:$src)
/*20973*/   /*Scope*/ 13, /*->20987*/
/*20974*/     OPC_CheckInteger, 45|128,6/*813*/, 
/*20977*/     OPC_MoveParent,
/*20978*/     OPC_RecordChild1, // #0 = $src
/*20979*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_vtrunohb), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 813:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_S2_vtrunohb:i32 DoubleRegs:i64:$src)
/*20987*/   /*Scope*/ 15, /*->21003*/
/*20988*/     OPC_CheckInteger, 44|128,6/*812*/, 
/*20991*/     OPC_MoveParent,
/*20992*/     OPC_RecordChild1, // #0 = $src1
/*20993*/     OPC_RecordChild2, // #1 = $src2
/*20994*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_vtrunewh), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 812:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_vtrunewh:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*21003*/   /*Scope*/ 15, /*->21019*/
/*21004*/     OPC_CheckInteger, 46|128,6/*814*/, 
/*21007*/     OPC_MoveParent,
/*21008*/     OPC_RecordChild1, // #0 = $src1
/*21009*/     OPC_RecordChild2, // #1 = $src2
/*21010*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_vtrunowh), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 814:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_vtrunowh:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*21019*/   /*Scope*/ 13, /*->21033*/
/*21020*/     OPC_CheckInteger, 47|128,6/*815*/, 
/*21023*/     OPC_MoveParent,
/*21024*/     OPC_RecordChild1, // #0 = $src1
/*21025*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_vzxtbh), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i64 815:iPTR, IntRegs:i32:$src1) - Complexity = 8
              // Dst: (Hexagon_S2_vzxtbh:i64 IntRegs:i32:$src1)
/*21033*/   /*Scope*/ 13, /*->21047*/
/*21034*/     OPC_CheckInteger, 48|128,6/*816*/, 
/*21037*/     OPC_MoveParent,
/*21038*/     OPC_RecordChild1, // #0 = $src1
/*21039*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_vzxthw), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i64 816:iPTR, IntRegs:i32:$src1) - Complexity = 8
              // Dst: (Hexagon_S2_vzxthw:i64 IntRegs:i32:$src1)
/*21047*/   /*Scope*/ 13, /*->21061*/
/*21048*/     OPC_CheckInteger, 98|128,2/*354*/, 
/*21051*/     OPC_MoveParent,
/*21052*/     OPC_RecordChild1, // #0 = $src
/*21053*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_mask), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i64 354:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_C2_mask:i64 IntRegs:i32:$src)
/*21061*/   /*Scope*/ 13, /*->21075*/
/*21062*/     OPC_CheckInteger, 107|128,2/*363*/, 
/*21065*/     OPC_MoveParent,
/*21066*/     OPC_RecordChild1, // #0 = $src
/*21067*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_tfrpr), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 363:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_C2_tfrpr:i32 IntRegs:i32:$src)
/*21075*/   /*Scope*/ 13, /*->21089*/
/*21076*/     OPC_CheckInteger, 108|128,2/*364*/, 
/*21079*/     OPC_MoveParent,
/*21080*/     OPC_RecordChild1, // #0 = $src
/*21081*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_tfrrp), 0,
                  1/*#VTs*/, MVT::i1, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i1 364:iPTR, IntRegs:i32:$src) - Complexity = 8
              // Dst: (Hexagon_C2_tfrrp:i1 IntRegs:i32:$src)
/*21089*/   /*Scope*/ 15, /*->21105*/
/*21090*/     OPC_CheckInteger, 109|128,2/*365*/, 
/*21093*/     OPC_MoveParent,
/*21094*/     OPC_RecordChild1, // #0 = $src1
/*21095*/     OPC_RecordChild2, // #1 = $src2
/*21096*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C2_vitpack), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 365:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_C2_vitpack:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21105*/   /*Scope*/ 15, /*->21121*/
/*21106*/     OPC_CheckInteger, 27|128,5/*667*/, 
/*21109*/     OPC_MoveParent,
/*21110*/     OPC_RecordChild1, // #0 = $src1
/*21111*/     OPC_RecordChild2, // #1 = $src2
/*21112*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_i_r_sat), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 667:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asl_i_r_sat:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21121*/   /*Scope*/ 15, /*->21137*/
/*21122*/     OPC_CheckInteger, 36|128,5/*676*/, 
/*21125*/     OPC_MoveParent,
/*21126*/     OPC_RecordChild1, // #0 = $src1
/*21127*/     OPC_RecordChild2, // #1 = $src2
/*21128*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_r_r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 676:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asl_r_r:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21137*/   /*Scope*/ 15, /*->21153*/
/*21138*/     OPC_CheckInteger, 64|128,5/*704*/, 
/*21141*/     OPC_MoveParent,
/*21142*/     OPC_RecordChild1, // #0 = $src1
/*21143*/     OPC_RecordChild2, // #1 = $src2
/*21144*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_r_r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 704:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asr_r_r:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21153*/   /*Scope*/ 15, /*->21169*/
/*21154*/     OPC_CheckInteger, 101|128,5/*741*/, 
/*21157*/     OPC_MoveParent,
/*21158*/     OPC_RecordChild1, // #0 = $src1
/*21159*/     OPC_RecordChild2, // #1 = $src2
/*21160*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsl_r_r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 741:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsl_r_r:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21169*/   /*Scope*/ 15, /*->21185*/
/*21170*/     OPC_CheckInteger, 127|128,5/*767*/, 
/*21173*/     OPC_MoveParent,
/*21174*/     OPC_RecordChild1, // #0 = $src1
/*21175*/     OPC_RecordChild2, // #1 = $src2
/*21176*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_r_r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 767:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsr_r_r:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21185*/   /*Scope*/ 15, /*->21201*/
/*21186*/     OPC_CheckInteger, 31|128,5/*671*/, 
/*21189*/     OPC_MoveParent,
/*21190*/     OPC_RecordChild1, // #0 = $src1
/*21191*/     OPC_RecordChild2, // #1 = $src2
/*21192*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_r_p), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 671:iPTR, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asl_r_p:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21201*/   /*Scope*/ 15, /*->21217*/
/*21202*/     OPC_CheckInteger, 59|128,5/*699*/, 
/*21205*/     OPC_MoveParent,
/*21206*/     OPC_RecordChild1, // #0 = $src1
/*21207*/     OPC_RecordChild2, // #1 = $src2
/*21208*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_r_p), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 699:iPTR, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asr_r_p:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21217*/   /*Scope*/ 15, /*->21233*/
/*21218*/     OPC_CheckInteger, 96|128,5/*736*/, 
/*21221*/     OPC_MoveParent,
/*21222*/     OPC_RecordChild1, // #0 = $src1
/*21223*/     OPC_RecordChild2, // #1 = $src2
/*21224*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsl_r_p), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 736:iPTR, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsl_r_p:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21233*/   /*Scope*/ 15, /*->21249*/
/*21234*/     OPC_CheckInteger, 122|128,5/*762*/, 
/*21237*/     OPC_MoveParent,
/*21238*/     OPC_RecordChild1, // #0 = $src1
/*21239*/     OPC_RecordChild2, // #1 = $src2
/*21240*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_r_p), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 762:iPTR, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsr_r_p:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21249*/   /*Scope*/ 17, /*->21267*/
/*21250*/     OPC_CheckInteger, 37|128,5/*677*/, 
/*21253*/     OPC_MoveParent,
/*21254*/     OPC_RecordChild1, // #0 = $dst2
/*21255*/     OPC_RecordChild2, // #1 = $src1
/*21256*/     OPC_RecordChild3, // #2 = $src2
/*21257*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_r_r_acc), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 677:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asl_r_r_acc:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21267*/   /*Scope*/ 17, /*->21285*/
/*21268*/     OPC_CheckInteger, 65|128,5/*705*/, 
/*21271*/     OPC_MoveParent,
/*21272*/     OPC_RecordChild1, // #0 = $dst2
/*21273*/     OPC_RecordChild2, // #1 = $src1
/*21274*/     OPC_RecordChild3, // #2 = $src2
/*21275*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_r_r_acc), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 705:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asr_r_r_acc:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21285*/   /*Scope*/ 17, /*->21303*/
/*21286*/     OPC_CheckInteger, 102|128,5/*742*/, 
/*21289*/     OPC_MoveParent,
/*21290*/     OPC_RecordChild1, // #0 = $dst2
/*21291*/     OPC_RecordChild2, // #1 = $src1
/*21292*/     OPC_RecordChild3, // #2 = $src2
/*21293*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsl_r_r_acc), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 742:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsl_r_r_acc:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21303*/   /*Scope*/ 17, /*->21321*/
/*21304*/     OPC_CheckInteger, 0|128,6/*768*/, 
/*21307*/     OPC_MoveParent,
/*21308*/     OPC_RecordChild1, // #0 = $dst2
/*21309*/     OPC_RecordChild2, // #1 = $src1
/*21310*/     OPC_RecordChild3, // #2 = $src2
/*21311*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_r_r_acc), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 768:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsr_r_r_acc:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21321*/   /*Scope*/ 17, /*->21339*/
/*21322*/     OPC_CheckInteger, 32|128,5/*672*/, 
/*21325*/     OPC_MoveParent,
/*21326*/     OPC_RecordChild1, // #0 = $dst2
/*21327*/     OPC_RecordChild2, // #1 = $src1
/*21328*/     OPC_RecordChild3, // #2 = $src2
/*21329*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_r_p_acc), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 672:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asl_r_p_acc:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21339*/   /*Scope*/ 17, /*->21357*/
/*21340*/     OPC_CheckInteger, 60|128,5/*700*/, 
/*21343*/     OPC_MoveParent,
/*21344*/     OPC_RecordChild1, // #0 = $dst2
/*21345*/     OPC_RecordChild2, // #1 = $src1
/*21346*/     OPC_RecordChild3, // #2 = $src2
/*21347*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_r_p_acc), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 700:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asr_r_p_acc:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21357*/   /*Scope*/ 17, /*->21375*/
/*21358*/     OPC_CheckInteger, 97|128,5/*737*/, 
/*21361*/     OPC_MoveParent,
/*21362*/     OPC_RecordChild1, // #0 = $dst2
/*21363*/     OPC_RecordChild2, // #1 = $src1
/*21364*/     OPC_RecordChild3, // #2 = $src2
/*21365*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsl_r_p_acc), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 737:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsl_r_p_acc:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21375*/   /*Scope*/ 17, /*->21393*/
/*21376*/     OPC_CheckInteger, 123|128,5/*763*/, 
/*21379*/     OPC_MoveParent,
/*21380*/     OPC_RecordChild1, // #0 = $dst2
/*21381*/     OPC_RecordChild2, // #1 = $src1
/*21382*/     OPC_RecordChild3, // #2 = $src2
/*21383*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_r_p_acc), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 763:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsr_r_p_acc:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21393*/   /*Scope*/ 17, /*->21411*/
/*21394*/     OPC_CheckInteger, 39|128,5/*679*/, 
/*21397*/     OPC_MoveParent,
/*21398*/     OPC_RecordChild1, // #0 = $dst2
/*21399*/     OPC_RecordChild2, // #1 = $src1
/*21400*/     OPC_RecordChild3, // #2 = $src2
/*21401*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_r_r_nac), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 679:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asl_r_r_nac:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21411*/   /*Scope*/ 17, /*->21429*/
/*21412*/     OPC_CheckInteger, 67|128,5/*707*/, 
/*21415*/     OPC_MoveParent,
/*21416*/     OPC_RecordChild1, // #0 = $dst2
/*21417*/     OPC_RecordChild2, // #1 = $src1
/*21418*/     OPC_RecordChild3, // #2 = $src2
/*21419*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_r_r_nac), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 707:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asr_r_r_nac:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21429*/   /*Scope*/ 17, /*->21447*/
/*21430*/     OPC_CheckInteger, 104|128,5/*744*/, 
/*21433*/     OPC_MoveParent,
/*21434*/     OPC_RecordChild1, // #0 = $dst2
/*21435*/     OPC_RecordChild2, // #1 = $src1
/*21436*/     OPC_RecordChild3, // #2 = $src2
/*21437*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsl_r_r_nac), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 744:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsl_r_r_nac:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21447*/   /*Scope*/ 17, /*->21465*/
/*21448*/     OPC_CheckInteger, 2|128,6/*770*/, 
/*21451*/     OPC_MoveParent,
/*21452*/     OPC_RecordChild1, // #0 = $dst2
/*21453*/     OPC_RecordChild2, // #1 = $src1
/*21454*/     OPC_RecordChild3, // #2 = $src2
/*21455*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_r_r_nac), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 770:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsr_r_r_nac:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21465*/   /*Scope*/ 17, /*->21483*/
/*21466*/     OPC_CheckInteger, 34|128,5/*674*/, 
/*21469*/     OPC_MoveParent,
/*21470*/     OPC_RecordChild1, // #0 = $dst2
/*21471*/     OPC_RecordChild2, // #1 = $src1
/*21472*/     OPC_RecordChild3, // #2 = $src2
/*21473*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_r_p_nac), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 674:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asl_r_p_nac:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21483*/   /*Scope*/ 17, /*->21501*/
/*21484*/     OPC_CheckInteger, 62|128,5/*702*/, 
/*21487*/     OPC_MoveParent,
/*21488*/     OPC_RecordChild1, // #0 = $dst2
/*21489*/     OPC_RecordChild2, // #1 = $src1
/*21490*/     OPC_RecordChild3, // #2 = $src2
/*21491*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_r_p_nac), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 702:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asr_r_p_nac:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21501*/   /*Scope*/ 17, /*->21519*/
/*21502*/     OPC_CheckInteger, 99|128,5/*739*/, 
/*21505*/     OPC_MoveParent,
/*21506*/     OPC_RecordChild1, // #0 = $dst2
/*21507*/     OPC_RecordChild2, // #1 = $src1
/*21508*/     OPC_RecordChild3, // #2 = $src2
/*21509*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsl_r_p_nac), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 739:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsl_r_p_nac:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21519*/   /*Scope*/ 17, /*->21537*/
/*21520*/     OPC_CheckInteger, 125|128,5/*765*/, 
/*21523*/     OPC_MoveParent,
/*21524*/     OPC_RecordChild1, // #0 = $dst2
/*21525*/     OPC_RecordChild2, // #1 = $src1
/*21526*/     OPC_RecordChild3, // #2 = $src2
/*21527*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_r_p_nac), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 765:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsr_r_p_nac:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21537*/   /*Scope*/ 17, /*->21555*/
/*21538*/     OPC_CheckInteger, 38|128,5/*678*/, 
/*21541*/     OPC_MoveParent,
/*21542*/     OPC_RecordChild1, // #0 = $dst2
/*21543*/     OPC_RecordChild2, // #1 = $src1
/*21544*/     OPC_RecordChild3, // #2 = $src2
/*21545*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_r_r_and), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 678:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asl_r_r_and:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21555*/   /*Scope*/ 17, /*->21573*/
/*21556*/     OPC_CheckInteger, 66|128,5/*706*/, 
/*21559*/     OPC_MoveParent,
/*21560*/     OPC_RecordChild1, // #0 = $dst2
/*21561*/     OPC_RecordChild2, // #1 = $src1
/*21562*/     OPC_RecordChild3, // #2 = $src2
/*21563*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_r_r_and), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 706:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asr_r_r_and:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21573*/   /*Scope*/ 17, /*->21591*/
/*21574*/     OPC_CheckInteger, 103|128,5/*743*/, 
/*21577*/     OPC_MoveParent,
/*21578*/     OPC_RecordChild1, // #0 = $dst2
/*21579*/     OPC_RecordChild2, // #1 = $src1
/*21580*/     OPC_RecordChild3, // #2 = $src2
/*21581*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsl_r_r_and), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 743:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsl_r_r_and:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21591*/   /*Scope*/ 17, /*->21609*/
/*21592*/     OPC_CheckInteger, 1|128,6/*769*/, 
/*21595*/     OPC_MoveParent,
/*21596*/     OPC_RecordChild1, // #0 = $dst2
/*21597*/     OPC_RecordChild2, // #1 = $src1
/*21598*/     OPC_RecordChild3, // #2 = $src2
/*21599*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_r_r_and), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 769:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsr_r_r_and:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21609*/   /*Scope*/ 17, /*->21627*/
/*21610*/     OPC_CheckInteger, 40|128,5/*680*/, 
/*21613*/     OPC_MoveParent,
/*21614*/     OPC_RecordChild1, // #0 = $dst2
/*21615*/     OPC_RecordChild2, // #1 = $src1
/*21616*/     OPC_RecordChild3, // #2 = $src2
/*21617*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_r_r_or), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 680:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asl_r_r_or:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21627*/   /*Scope*/ 17, /*->21645*/
/*21628*/     OPC_CheckInteger, 68|128,5/*708*/, 
/*21631*/     OPC_MoveParent,
/*21632*/     OPC_RecordChild1, // #0 = $dst2
/*21633*/     OPC_RecordChild2, // #1 = $src1
/*21634*/     OPC_RecordChild3, // #2 = $src2
/*21635*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_r_r_or), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 708:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asr_r_r_or:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21645*/   /*Scope*/ 17, /*->21663*/
/*21646*/     OPC_CheckInteger, 105|128,5/*745*/, 
/*21649*/     OPC_MoveParent,
/*21650*/     OPC_RecordChild1, // #0 = $dst2
/*21651*/     OPC_RecordChild2, // #1 = $src1
/*21652*/     OPC_RecordChild3, // #2 = $src2
/*21653*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsl_r_r_or), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 745:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsl_r_r_or:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21663*/   /*Scope*/ 17, /*->21681*/
/*21664*/     OPC_CheckInteger, 3|128,6/*771*/, 
/*21667*/     OPC_MoveParent,
/*21668*/     OPC_RecordChild1, // #0 = $dst2
/*21669*/     OPC_RecordChild2, // #1 = $src1
/*21670*/     OPC_RecordChild3, // #2 = $src2
/*21671*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_r_r_or), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 771:iPTR, IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsr_r_r_or:i32 IntRegs:i32:$dst2, IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21681*/   /*Scope*/ 17, /*->21699*/
/*21682*/     OPC_CheckInteger, 33|128,5/*673*/, 
/*21685*/     OPC_MoveParent,
/*21686*/     OPC_RecordChild1, // #0 = $dst2
/*21687*/     OPC_RecordChild2, // #1 = $src1
/*21688*/     OPC_RecordChild3, // #2 = $src2
/*21689*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_r_p_and), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 673:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asl_r_p_and:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21699*/   /*Scope*/ 17, /*->21717*/
/*21700*/     OPC_CheckInteger, 61|128,5/*701*/, 
/*21703*/     OPC_MoveParent,
/*21704*/     OPC_RecordChild1, // #0 = $dst2
/*21705*/     OPC_RecordChild2, // #1 = $src1
/*21706*/     OPC_RecordChild3, // #2 = $src2
/*21707*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_r_p_and), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 701:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asr_r_p_and:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21717*/   /*Scope*/ 17, /*->21735*/
/*21718*/     OPC_CheckInteger, 98|128,5/*738*/, 
/*21721*/     OPC_MoveParent,
/*21722*/     OPC_RecordChild1, // #0 = $dst2
/*21723*/     OPC_RecordChild2, // #1 = $src1
/*21724*/     OPC_RecordChild3, // #2 = $src2
/*21725*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsl_r_p_and), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 738:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsl_r_p_and:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21735*/   /*Scope*/ 17, /*->21753*/
/*21736*/     OPC_CheckInteger, 124|128,5/*764*/, 
/*21739*/     OPC_MoveParent,
/*21740*/     OPC_RecordChild1, // #0 = $dst2
/*21741*/     OPC_RecordChild2, // #1 = $src1
/*21742*/     OPC_RecordChild3, // #2 = $src2
/*21743*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_r_p_and), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 764:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsr_r_p_and:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21753*/   /*Scope*/ 17, /*->21771*/
/*21754*/     OPC_CheckInteger, 35|128,5/*675*/, 
/*21757*/     OPC_MoveParent,
/*21758*/     OPC_RecordChild1, // #0 = $dst2
/*21759*/     OPC_RecordChild2, // #1 = $src1
/*21760*/     OPC_RecordChild3, // #2 = $src2
/*21761*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_r_p_or), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 675:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asl_r_p_or:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21771*/   /*Scope*/ 17, /*->21789*/
/*21772*/     OPC_CheckInteger, 63|128,5/*703*/, 
/*21775*/     OPC_MoveParent,
/*21776*/     OPC_RecordChild1, // #0 = $dst2
/*21777*/     OPC_RecordChild2, // #1 = $src1
/*21778*/     OPC_RecordChild3, // #2 = $src2
/*21779*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_r_p_or), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 703:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asr_r_p_or:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21789*/   /*Scope*/ 17, /*->21807*/
/*21790*/     OPC_CheckInteger, 100|128,5/*740*/, 
/*21793*/     OPC_MoveParent,
/*21794*/     OPC_RecordChild1, // #0 = $dst2
/*21795*/     OPC_RecordChild2, // #1 = $src1
/*21796*/     OPC_RecordChild3, // #2 = $src2
/*21797*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsl_r_p_or), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 740:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsl_r_p_or:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21807*/   /*Scope*/ 17, /*->21825*/
/*21808*/     OPC_CheckInteger, 126|128,5/*766*/, 
/*21811*/     OPC_MoveParent,
/*21812*/     OPC_RecordChild1, // #0 = $dst2
/*21813*/     OPC_RecordChild2, // #1 = $src1
/*21814*/     OPC_RecordChild3, // #2 = $src2
/*21815*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_r_p_or), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 766:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsr_r_p_or:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21825*/   /*Scope*/ 15, /*->21841*/
/*21826*/     OPC_CheckInteger, 41|128,5/*681*/, 
/*21829*/     OPC_MoveParent,
/*21830*/     OPC_RecordChild1, // #0 = $src1
/*21831*/     OPC_RecordChild2, // #1 = $src2
/*21832*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_r_r_sat), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 681:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asl_r_r_sat:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21841*/   /*Scope*/ 15, /*->21857*/
/*21842*/     OPC_CheckInteger, 69|128,5/*709*/, 
/*21845*/     OPC_MoveParent,
/*21846*/     OPC_RecordChild1, // #0 = $src1
/*21847*/     OPC_RecordChild2, // #1 = $src2
/*21848*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_r_r_sat), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 709:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asr_r_r_sat:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*21857*/   /*Scope*/ 13, /*->21871*/
/*21858*/     OPC_CheckInteger, 126|128,1/*254*/, 
/*21861*/     OPC_MoveParent,
/*21862*/     OPC_RecordChild1, // #0 = $src
/*21863*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vabsh), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i64 254:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_A2_vabsh:i64 DoubleRegs:i64:$src)
/*21871*/   /*Scope*/ 13, /*->21885*/
/*21872*/     OPC_CheckInteger, 127|128,1/*255*/, 
/*21875*/     OPC_MoveParent,
/*21876*/     OPC_RecordChild1, // #0 = $src
/*21877*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vabshsat), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i64 255:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_A2_vabshsat:i64 DoubleRegs:i64:$src)
/*21885*/   /*Scope*/ 15, /*->21901*/
/*21886*/     OPC_CheckInteger, 29|128,5/*669*/, 
/*21889*/     OPC_MoveParent,
/*21890*/     OPC_RecordChild1, // #0 = $src1
/*21891*/     OPC_RecordChild2, // #1 = $src2
/*21892*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_i_vh), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 669:iPTR, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asl_i_vh:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21901*/   /*Scope*/ 15, /*->21917*/
/*21902*/     OPC_CheckInteger, 57|128,5/*697*/, 
/*21905*/     OPC_MoveParent,
/*21906*/     OPC_RecordChild1, // #0 = $src1
/*21907*/     OPC_RecordChild2, // #1 = $src2
/*21908*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_i_vh), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 697:iPTR, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asr_i_vh:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21917*/   /*Scope*/ 15, /*->21933*/
/*21918*/     OPC_CheckInteger, 120|128,5/*760*/, 
/*21921*/     OPC_MoveParent,
/*21922*/     OPC_RecordChild1, // #0 = $src1
/*21923*/     OPC_RecordChild2, // #1 = $src2
/*21924*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_i_vh), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 760:iPTR, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsr_i_vh:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21933*/   /*Scope*/ 15, /*->21949*/
/*21934*/     OPC_CheckInteger, 42|128,5/*682*/, 
/*21937*/     OPC_MoveParent,
/*21938*/     OPC_RecordChild1, // #0 = $src1
/*21939*/     OPC_RecordChild2, // #1 = $src2
/*21940*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_r_vh), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 682:iPTR, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asl_r_vh:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21949*/   /*Scope*/ 15, /*->21965*/
/*21950*/     OPC_CheckInteger, 71|128,5/*711*/, 
/*21953*/     OPC_MoveParent,
/*21954*/     OPC_RecordChild1, // #0 = $src1
/*21955*/     OPC_RecordChild2, // #1 = $src2
/*21956*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_r_vh), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 711:iPTR, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asr_r_vh:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21965*/   /*Scope*/ 15, /*->21981*/
/*21966*/     OPC_CheckInteger, 106|128,5/*746*/, 
/*21969*/     OPC_MoveParent,
/*21970*/     OPC_RecordChild1, // #0 = $src1
/*21971*/     OPC_RecordChild2, // #1 = $src2
/*21972*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsl_r_vh), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 746:iPTR, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsl_r_vh:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21981*/   /*Scope*/ 15, /*->21997*/
/*21982*/     OPC_CheckInteger, 4|128,6/*772*/, 
/*21985*/     OPC_MoveParent,
/*21986*/     OPC_RecordChild1, // #0 = $src1
/*21987*/     OPC_RecordChild2, // #1 = $src2
/*21988*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_r_vh), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 772:iPTR, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsr_r_vh:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*21997*/   /*Scope*/ 13, /*->22011*/
/*21998*/     OPC_CheckInteger, 0|128,2/*256*/, 
/*22001*/     OPC_MoveParent,
/*22002*/     OPC_RecordChild1, // #0 = $src
/*22003*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vabsw), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i64 256:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_A2_vabsw:i64 DoubleRegs:i64:$src)
/*22011*/   /*Scope*/ 13, /*->22025*/
/*22012*/     OPC_CheckInteger, 1|128,2/*257*/, 
/*22015*/     OPC_MoveParent,
/*22016*/     OPC_RecordChild1, // #0 = $src
/*22017*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_vabswsat), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i64 257:iPTR, DoubleRegs:i64:$src) - Complexity = 8
              // Dst: (Hexagon_A2_vabswsat:i64 DoubleRegs:i64:$src)
/*22025*/   /*Scope*/ 15, /*->22041*/
/*22026*/     OPC_CheckInteger, 30|128,5/*670*/, 
/*22029*/     OPC_MoveParent,
/*22030*/     OPC_RecordChild1, // #0 = $src1
/*22031*/     OPC_RecordChild2, // #1 = $src2
/*22032*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_i_vw), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 670:iPTR, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asl_i_vw:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*22041*/   /*Scope*/ 15, /*->22057*/
/*22042*/     OPC_CheckInteger, 58|128,5/*698*/, 
/*22045*/     OPC_MoveParent,
/*22046*/     OPC_RecordChild1, // #0 = $src1
/*22047*/     OPC_RecordChild2, // #1 = $src2
/*22048*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_i_vw), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 698:iPTR, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asr_i_vw:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*22057*/   /*Scope*/ 15, /*->22073*/
/*22058*/     OPC_CheckInteger, 121|128,5/*761*/, 
/*22061*/     OPC_MoveParent,
/*22062*/     OPC_RecordChild1, // #0 = $src1
/*22063*/     OPC_RecordChild2, // #1 = $src2
/*22064*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_i_vw), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 761:iPTR, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsr_i_vw:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*22073*/   /*Scope*/ 15, /*->22089*/
/*22074*/     OPC_CheckInteger, 43|128,5/*683*/, 
/*22077*/     OPC_MoveParent,
/*22078*/     OPC_RecordChild1, // #0 = $src1
/*22079*/     OPC_RecordChild2, // #1 = $src2
/*22080*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asl_r_vw), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 683:iPTR, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asl_r_vw:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*22089*/   /*Scope*/ 15, /*->22105*/
/*22090*/     OPC_CheckInteger, 72|128,5/*712*/, 
/*22093*/     OPC_MoveParent,
/*22094*/     OPC_RecordChild1, // #0 = $src1
/*22095*/     OPC_RecordChild2, // #1 = $src2
/*22096*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_r_vw), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 712:iPTR, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asr_r_vw:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*22105*/   /*Scope*/ 15, /*->22121*/
/*22106*/     OPC_CheckInteger, 107|128,5/*747*/, 
/*22109*/     OPC_MoveParent,
/*22110*/     OPC_RecordChild1, // #0 = $src1
/*22111*/     OPC_RecordChild2, // #1 = $src2
/*22112*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsl_r_vw), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 747:iPTR, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsl_r_vw:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*22121*/   /*Scope*/ 15, /*->22137*/
/*22122*/     OPC_CheckInteger, 5|128,6/*773*/, 
/*22125*/     OPC_MoveParent,
/*22126*/     OPC_RecordChild1, // #0 = $src1
/*22127*/     OPC_RecordChild2, // #1 = $src2
/*22128*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_lsr_r_vw), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 773:iPTR, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_lsr_r_vw:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*22137*/   /*Scope*/ 15, /*->22153*/
/*22138*/     OPC_CheckInteger, 70|128,5/*710*/, 
/*22141*/     OPC_MoveParent,
/*22142*/     OPC_RecordChild1, // #0 = $src1
/*22143*/     OPC_RecordChild2, // #1 = $src2
/*22144*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S2_asr_r_svw_trun), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 710:iPTR, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_S2_asr_r_svw_trun:i32 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*22153*/   /*Scope*/ 15, /*->22169*/
/*22154*/     OPC_CheckInteger, 126|128,4/*638*/, 
/*22157*/     OPC_MoveParent,
/*22158*/     OPC_RecordChild1, // #0 = $src1
/*22159*/     OPC_RecordChild2, // #1 = $src2
/*22160*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vrcmpys_s1), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 638:iPTR, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vrcmpys_s1:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*22169*/   /*Scope*/ 17, /*->22187*/
/*22170*/     OPC_CheckInteger, 125|128,4/*637*/, 
/*22173*/     OPC_MoveParent,
/*22174*/     OPC_RecordChild1, // #0 = $dst2
/*22175*/     OPC_RecordChild2, // #1 = $src1
/*22176*/     OPC_RecordChild3, // #2 = $src2
/*22177*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vrcmpys_acc_s1), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 637:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vrcmpys_acc_s1:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*22187*/   /*Scope*/ 15, /*->22203*/
/*22188*/     OPC_CheckInteger, 127|128,4/*639*/, 
/*22191*/     OPC_MoveParent,
/*22192*/     OPC_RecordChild1, // #0 = $src1
/*22193*/     OPC_RecordChild2, // #1 = $src2
/*22194*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vrcmpys_s1rp), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 639:iPTR, DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vrcmpys_s1rp:i32 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
/*22203*/   /*Scope*/ 15, /*->22219*/
/*22204*/     OPC_CheckInteger, 116|128,4/*628*/, 
/*22207*/     OPC_MoveParent,
/*22208*/     OPC_RecordChild1, // #0 = $src1
/*22209*/     OPC_RecordChild2, // #1 = $src2
/*22210*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M2_vradduh), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 628:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M2_vradduh:i32 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*22219*/   /*Scope*/ 15, /*->22235*/
/*22220*/     OPC_CheckInteger, 58|128,1/*186*/, 
/*22223*/     OPC_MoveParent,
/*22224*/     OPC_RecordChild1, // #0 = $src1
/*22225*/     OPC_RecordChild2, // #1 = $src2
/*22226*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_addsp), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 186:iPTR, IntRegs:i32:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_addsp:i64 IntRegs:i32:$src1, DoubleRegs:i64:$src2)
/*22235*/   /*Scope*/ 15, /*->22251*/
/*22236*/     OPC_CheckInteger, 56|128,1/*184*/, 
/*22239*/     OPC_MoveParent,
/*22240*/     OPC_RecordChild1, // #0 = $src1
/*22241*/     OPC_RecordChild2, // #1 = $src2
/*22242*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_addpsat), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 184:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_addpsat:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*22251*/   /*Scope*/ 15, /*->22267*/
/*22252*/     OPC_CheckInteger, 71|128,1/*199*/, 
/*22255*/     OPC_MoveParent,
/*22256*/     OPC_RecordChild1, // #0 = $src1
/*22257*/     OPC_RecordChild2, // #1 = $src2
/*22258*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_maxp), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 199:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_maxp:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*22267*/   /*Scope*/ 15, /*->22283*/
/*22268*/     OPC_CheckInteger, 73|128,1/*201*/, 
/*22271*/     OPC_MoveParent,
/*22272*/     OPC_RecordChild1, // #0 = $src1
/*22273*/     OPC_RecordChild2, // #1 = $src2
/*22274*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A2_maxup), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 201:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_A2_maxup:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*22283*/   /*Scope*/ 15, /*->22299*/
/*22284*/     OPC_CheckInteger, 68|128,2/*324*/, 
/*22287*/     OPC_MoveParent,
/*22288*/     OPC_RecordChild1, // #0 = $src1
/*22289*/     OPC_RecordChild2, // #1 = $src2
/*22290*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A4_orn), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 324:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A4_orn:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*22299*/   /*Scope*/ 15, /*->22315*/
/*22300*/     OPC_CheckInteger, 61|128,2/*317*/, 
/*22303*/     OPC_MoveParent,
/*22304*/     OPC_RecordChild1, // #0 = $src1
/*22305*/     OPC_RecordChild2, // #1 = $src2
/*22306*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A4_andn), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 317:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A4_andn:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*22315*/   /*Scope*/ 15, /*->22331*/
/*22316*/     OPC_CheckInteger, 120|128,2/*376*/, 
/*22319*/     OPC_MoveParent,
/*22320*/     OPC_RecordChild1, // #0 = $src1
/*22321*/     OPC_RecordChild2, // #1 = $src2
/*22322*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C4_cmpneq), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 376:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_C4_cmpneq:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*22331*/   /*Scope*/ 15, /*->22347*/
/*22332*/     OPC_CheckInteger, 116|128,2/*372*/, 
/*22335*/     OPC_MoveParent,
/*22336*/     OPC_RecordChild1, // #0 = $src1
/*22337*/     OPC_RecordChild2, // #1 = $src2
/*22338*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C4_cmplte), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 372:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_C4_cmplte:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*22347*/   /*Scope*/ 15, /*->22363*/
/*22348*/     OPC_CheckInteger, 118|128,2/*374*/, 
/*22351*/     OPC_MoveParent,
/*22352*/     OPC_RecordChild1, // #0 = $src1
/*22353*/     OPC_RecordChild2, // #1 = $src2
/*22354*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C4_cmplteu), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 374:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_C4_cmplteu:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*22363*/   /*Scope*/ 15, /*->22379*/
/*22364*/     OPC_CheckInteger, 72|128,2/*328*/, 
/*22367*/     OPC_MoveParent,
/*22368*/     OPC_RecordChild1, // #0 = $src1
/*22369*/     OPC_RecordChild2, // #1 = $src2
/*22370*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A4_rcmpneq), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 328:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A4_rcmpneq:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*22379*/   /*Scope*/ 15, /*->22395*/
/*22380*/     OPC_CheckInteger, 70|128,2/*326*/, 
/*22383*/     OPC_MoveParent,
/*22384*/     OPC_RecordChild1, // #0 = $src1
/*22385*/     OPC_RecordChild2, // #1 = $src2
/*22386*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_A4_rcmpeq), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 326:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_A4_rcmpeq:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*22395*/   /*Scope*/ 15, /*->22411*/
/*22396*/     OPC_CheckInteger, 122|128,2/*378*/, 
/*22399*/     OPC_MoveParent,
/*22400*/     OPC_RecordChild1, // #0 = $src1
/*22401*/     OPC_RecordChild2, // #1 = $src2
/*22402*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C4_fastcorner9), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 378:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_C4_fastcorner9:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*22411*/   /*Scope*/ 15, /*->22427*/
/*22412*/     OPC_CheckInteger, 123|128,2/*379*/, 
/*22415*/     OPC_MoveParent,
/*22416*/     OPC_RecordChild1, // #0 = $src1
/*22417*/     OPC_RecordChild2, // #1 = $src2
/*22418*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C4_fastcorner9_not), 0,
                  1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i1 379:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (Hexagon_C4_fastcorner9_not:i1 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*22427*/   /*Scope*/ 17, /*->22445*/
/*22428*/     OPC_CheckInteger, 113|128,2/*369*/, 
/*22431*/     OPC_MoveParent,
/*22432*/     OPC_RecordChild1, // #0 = $src1
/*22433*/     OPC_RecordChild2, // #1 = $src2
/*22434*/     OPC_RecordChild3, // #2 = $src3
/*22435*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C4_and_andn), 0,
                  1/*#VTs*/, MVT::i1, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i1 369:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (Hexagon_C4_and_andn:i1 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*22445*/   /*Scope*/ 17, /*->22463*/
/*22446*/     OPC_CheckInteger, 112|128,2/*368*/, 
/*22449*/     OPC_MoveParent,
/*22450*/     OPC_RecordChild1, // #0 = $src1
/*22451*/     OPC_RecordChild2, // #1 = $src2
/*22452*/     OPC_RecordChild3, // #2 = $src3
/*22453*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C4_and_and), 0,
                  1/*#VTs*/, MVT::i1, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i1 368:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (Hexagon_C4_and_and:i1 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*22463*/   /*Scope*/ 17, /*->22481*/
/*22464*/     OPC_CheckInteger, 115|128,2/*371*/, 
/*22467*/     OPC_MoveParent,
/*22468*/     OPC_RecordChild1, // #0 = $src1
/*22469*/     OPC_RecordChild2, // #1 = $src2
/*22470*/     OPC_RecordChild3, // #2 = $src3
/*22471*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C4_and_orn), 0,
                  1/*#VTs*/, MVT::i1, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i1 371:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (Hexagon_C4_and_orn:i1 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*22481*/   /*Scope*/ 17, /*->22499*/
/*22482*/     OPC_CheckInteger, 114|128,2/*370*/, 
/*22485*/     OPC_MoveParent,
/*22486*/     OPC_RecordChild1, // #0 = $src1
/*22487*/     OPC_RecordChild2, // #1 = $src2
/*22488*/     OPC_RecordChild3, // #2 = $src3
/*22489*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C4_and_or), 0,
                  1/*#VTs*/, MVT::i1, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i1 370:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (Hexagon_C4_and_or:i1 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*22499*/   /*Scope*/ 17, /*->22517*/
/*22500*/     OPC_CheckInteger, 125|128,2/*381*/, 
/*22503*/     OPC_MoveParent,
/*22504*/     OPC_RecordChild1, // #0 = $src1
/*22505*/     OPC_RecordChild2, // #1 = $src2
/*22506*/     OPC_RecordChild3, // #2 = $src3
/*22507*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C4_or_andn), 0,
                  1/*#VTs*/, MVT::i1, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i1 381:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (Hexagon_C4_or_andn:i1 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*22517*/   /*Scope*/ 17, /*->22535*/
/*22518*/     OPC_CheckInteger, 124|128,2/*380*/, 
/*22521*/     OPC_MoveParent,
/*22522*/     OPC_RecordChild1, // #0 = $src1
/*22523*/     OPC_RecordChild2, // #1 = $src2
/*22524*/     OPC_RecordChild3, // #2 = $src3
/*22525*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C4_or_and), 0,
                  1/*#VTs*/, MVT::i1, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i1 380:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (Hexagon_C4_or_and:i1 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*22535*/   /*Scope*/ 17, /*->22553*/
/*22536*/     OPC_CheckInteger, 127|128,2/*383*/, 
/*22539*/     OPC_MoveParent,
/*22540*/     OPC_RecordChild1, // #0 = $src1
/*22541*/     OPC_RecordChild2, // #1 = $src2
/*22542*/     OPC_RecordChild3, // #2 = $src3
/*22543*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C4_or_orn), 0,
                  1/*#VTs*/, MVT::i1, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i1 383:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (Hexagon_C4_or_orn:i1 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*22553*/   /*Scope*/ 17, /*->22571*/
/*22554*/     OPC_CheckInteger, 126|128,2/*382*/, 
/*22557*/     OPC_MoveParent,
/*22558*/     OPC_RecordChild1, // #0 = $src1
/*22559*/     OPC_RecordChild2, // #1 = $src2
/*22560*/     OPC_RecordChild3, // #2 = $src3
/*22561*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_C4_or_or), 0,
                  1/*#VTs*/, MVT::i1, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i1 382:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (Hexagon_C4_or_or:i1 IntRegs:i32:$src1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*22571*/   /*Scope*/ 15, /*->22587*/
/*22572*/     OPC_CheckInteger, 62|128,2/*318*/, 
/*22575*/     OPC_MoveParent,
/*22576*/     OPC_RecordChild1, // #0 = $src1
/*22577*/     OPC_RecordChild2, // #1 = $src2
/*22578*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S4_andnp), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 318:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_S4_andnp:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*22587*/   /*Scope*/ 15, /*->22603*/
/*22588*/     OPC_CheckInteger, 69|128,2/*325*/, 
/*22591*/     OPC_MoveParent,
/*22592*/     OPC_RecordChild1, // #0 = $src1
/*22593*/     OPC_RecordChild2, // #1 = $src2
/*22594*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_S4_ornp), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 325:iPTR, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_S4_ornp:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*22603*/   /*Scope*/ 17, /*->22621*/
/*22604*/     OPC_CheckInteger, 14|128,5/*654*/, 
/*22607*/     OPC_MoveParent,
/*22608*/     OPC_RecordChild1, // #0 = $dst2
/*22609*/     OPC_RecordChild2, // #1 = $src1
/*22610*/     OPC_RecordChild3, // #2 = $src2
/*22611*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::Hexagon_M4_xor_xacc), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i64 654:iPTR, DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 8
              // Dst: (Hexagon_M4_xor_xacc:i64 DoubleRegs:i64:$dst2, DoubleRegs:i64:$src1, DoubleRegs:i64:$src2)
/*22621*/   /*Scope*/ 17, /*->22639*/
/*22622*/     OPC_CheckInteger, 3|128,5/*643*/, 
/*22625*/     OPC_MoveParent,
/*22626*/     OPC_RecordChild1, // #0 = $dst1
/*22627*/     OPC_RecordChild2, // #1 = $src2
/*22628*/     OPC_RecordChild3, // #2 = $src3
/*22629*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_M4_and_and), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 643:iPTR, IntRegs:i32:$dst1, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (HEXAGON_M4_and_and:i32 IntRegs:i32:$dst1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*22639*/   /*Scope*/ 17, /*->22657*/
/*22640*/     OPC_CheckInteger, 5|128,5/*645*/, 
/*22643*/     OPC_MoveParent,
/*22644*/     OPC_RecordChild1, // #0 = $dst1
/*22645*/     OPC_RecordChild2, // #1 = $src2
/*22646*/     OPC_RecordChild3, // #2 = $src3
/*22647*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_M4_and_or), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 645:iPTR, IntRegs:i32:$dst1, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (HEXAGON_M4_and_or:i32 IntRegs:i32:$dst1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*22657*/   /*Scope*/ 17, /*->22675*/
/*22658*/     OPC_CheckInteger, 6|128,5/*646*/, 
/*22661*/     OPC_MoveParent,
/*22662*/     OPC_RecordChild1, // #0 = $dst1
/*22663*/     OPC_RecordChild2, // #1 = $src2
/*22664*/     OPC_RecordChild3, // #2 = $src3
/*22665*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_M4_and_xor), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 646:iPTR, IntRegs:i32:$dst1, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (HEXAGON_M4_and_xor:i32 IntRegs:i32:$dst1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*22675*/   /*Scope*/ 17, /*->22693*/
/*22676*/     OPC_CheckInteger, 4|128,5/*644*/, 
/*22679*/     OPC_MoveParent,
/*22680*/     OPC_RecordChild1, // #0 = $dst1
/*22681*/     OPC_RecordChild2, // #1 = $src2
/*22682*/     OPC_RecordChild3, // #2 = $src3
/*22683*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_M4_and_andn), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 644:iPTR, IntRegs:i32:$dst1, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (HEXAGON_M4_and_andn:i32 IntRegs:i32:$dst1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*22693*/   /*Scope*/ 17, /*->22711*/
/*22694*/     OPC_CheckInteger, 11|128,5/*651*/, 
/*22697*/     OPC_MoveParent,
/*22698*/     OPC_RecordChild1, // #0 = $dst1
/*22699*/     OPC_RecordChild2, // #1 = $src2
/*22700*/     OPC_RecordChild3, // #2 = $src3
/*22701*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_M4_xor_and), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 651:iPTR, IntRegs:i32:$dst1, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (HEXAGON_M4_xor_and:i32 IntRegs:i32:$dst1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*22711*/   /*Scope*/ 17, /*->22729*/
/*22712*/     OPC_CheckInteger, 13|128,5/*653*/, 
/*22715*/     OPC_MoveParent,
/*22716*/     OPC_RecordChild1, // #0 = $dst1
/*22717*/     OPC_RecordChild2, // #1 = $src2
/*22718*/     OPC_RecordChild3, // #2 = $src3
/*22719*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_M4_xor_or), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 653:iPTR, IntRegs:i32:$dst1, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (HEXAGON_M4_xor_or:i32 IntRegs:i32:$dst1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*22729*/   /*Scope*/ 17, /*->22747*/
/*22730*/     OPC_CheckInteger, 12|128,5/*652*/, 
/*22733*/     OPC_MoveParent,
/*22734*/     OPC_RecordChild1, // #0 = $dst1
/*22735*/     OPC_RecordChild2, // #1 = $src2
/*22736*/     OPC_RecordChild3, // #2 = $src3
/*22737*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_M4_xor_andn), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 652:iPTR, IntRegs:i32:$dst1, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (HEXAGON_M4_xor_andn:i32 IntRegs:i32:$dst1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*22747*/   /*Scope*/ 17, /*->22765*/
/*22748*/     OPC_CheckInteger, 7|128,5/*647*/, 
/*22751*/     OPC_MoveParent,
/*22752*/     OPC_RecordChild1, // #0 = $dst1
/*22753*/     OPC_RecordChild2, // #1 = $src2
/*22754*/     OPC_RecordChild3, // #2 = $src3
/*22755*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_M4_or_and), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 647:iPTR, IntRegs:i32:$dst1, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (HEXAGON_M4_or_and:i32 IntRegs:i32:$dst1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*22765*/   /*Scope*/ 17, /*->22783*/
/*22766*/     OPC_CheckInteger, 9|128,5/*649*/, 
/*22769*/     OPC_MoveParent,
/*22770*/     OPC_RecordChild1, // #0 = $dst1
/*22771*/     OPC_RecordChild2, // #1 = $src2
/*22772*/     OPC_RecordChild3, // #2 = $src3
/*22773*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_M4_or_or), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 649:iPTR, IntRegs:i32:$dst1, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (HEXAGON_M4_or_or:i32 IntRegs:i32:$dst1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*22783*/   /*Scope*/ 17, /*->22801*/
/*22784*/     OPC_CheckInteger, 10|128,5/*650*/, 
/*22787*/     OPC_MoveParent,
/*22788*/     OPC_RecordChild1, // #0 = $dst1
/*22789*/     OPC_RecordChild2, // #1 = $src2
/*22790*/     OPC_RecordChild3, // #2 = $src3
/*22791*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_M4_or_xor), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 650:iPTR, IntRegs:i32:$dst1, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (HEXAGON_M4_or_xor:i32 IntRegs:i32:$dst1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*22801*/   /*Scope*/ 17, /*->22819*/
/*22802*/     OPC_CheckInteger, 8|128,5/*648*/, 
/*22805*/     OPC_MoveParent,
/*22806*/     OPC_RecordChild1, // #0 = $dst1
/*22807*/     OPC_RecordChild2, // #1 = $src2
/*22808*/     OPC_RecordChild3, // #2 = $src3
/*22809*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_M4_or_andn), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 648:iPTR, IntRegs:i32:$dst1, IntRegs:i32:$src2, IntRegs:i32:$src3) - Complexity = 8
              // Dst: (HEXAGON_M4_or_andn:i32 IntRegs:i32:$dst1, IntRegs:i32:$src2, IntRegs:i32:$src3)
/*22819*/   /*Scope*/ 15, /*->22835*/
/*22820*/     OPC_CheckInteger, 67|128,2/*323*/, 
/*22823*/     OPC_MoveParent,
/*22824*/     OPC_RecordChild1, // #0 = $src1
/*22825*/     OPC_RecordChild2, // #1 = $src2
/*22826*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_A4_modwrapu), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 323:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (HEXAGON_A4_modwrapu:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*22835*/   /*Scope*/ 15, /*->22851*/
/*22836*/     OPC_CheckInteger, 66|128,2/*322*/, 
/*22839*/     OPC_MoveParent,
/*22840*/     OPC_RecordChild1, // #0 = $src1
/*22841*/     OPC_RecordChild2, // #1 = $src2
/*22842*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_A4_cround_rr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 322:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (HEXAGON_A4_cround_rr:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*22851*/   /*Scope*/ 15, /*->22867*/
/*22852*/     OPC_CheckInteger, 76|128,2/*332*/, 
/*22855*/     OPC_MoveParent,
/*22856*/     OPC_RecordChild1, // #0 = $src1
/*22857*/     OPC_RecordChild2, // #1 = $src2
/*22858*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_A4_round_rr), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 332:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (HEXAGON_A4_round_rr:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*22867*/   /*Scope*/ 15, /*->22883*/
/*22868*/     OPC_CheckInteger, 77|128,2/*333*/, 
/*22871*/     OPC_MoveParent,
/*22872*/     OPC_RecordChild1, // #0 = $src1
/*22873*/     OPC_RecordChild2, // #1 = $src2
/*22874*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::HEXAGON_A4_round_rr_sat), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 333:iPTR, IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 8
              // Dst: (HEXAGON_A4_round_rr_sat:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*22883*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 38|128,3/*422*/,  TARGET_VAL(ISD::BRCOND),// ->23310
/*22888*/   OPC_RecordNode,   // #0 = 'brcond' chained node
/*22889*/   OPC_Scope, 12|128,3/*396*/, /*->23288*/ // 2 children in Scope
/*22892*/     OPC_MoveChild, 1,
/*22894*/     OPC_SwitchOpcode /*2 cases */, 35,  TARGET_VAL(ISD::XOR),// ->22933
/*22898*/       OPC_RecordChild0, // #1 = $src1
/*22899*/       OPC_MoveChild, 1,
/*22901*/       OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22912*/       OPC_MoveParent,
/*22913*/       OPC_CheckType, MVT::i1,
/*22915*/       OPC_MoveParent,
/*22916*/       OPC_RecordChild2, // #2 = $offset
/*22917*/       OPC_MoveChild, 2,
/*22919*/       OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*22922*/       OPC_MoveParent,
/*22923*/       OPC_EmitMergeInputChains1_0,
/*22924*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::JMP_cNot), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (brcond (xor:i1 PredRegs:i1:$src1, -1:i1), (bb:Other):$offset) - Complexity = 11
                // Dst: (JMP_cNot:i32 PredRegs:i1:$src1, (bb:Other):$offset)
              /*SwitchOpcode*/ 94|128,2/*350*/,  TARGET_VAL(ISD::SETCC),// ->23287
/*22937*/       OPC_RecordChild0, // #1 = $src1
/*22938*/       OPC_Scope, 73, /*->23013*/ // 3 children in Scope
/*22940*/         OPC_CheckChild0Type, MVT::i1,
/*22942*/         OPC_MoveChild, 1,
/*22944*/         OPC_Scope, 37, /*->22983*/ // 2 children in Scope
/*22946*/           OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22957*/           OPC_MoveParent,
/*22958*/           OPC_MoveChild, 2,
/*22960*/           OPC_CheckCondCode, ISD::SETNE,
/*22962*/           OPC_MoveParent,
/*22963*/           OPC_CheckType, MVT::i1,
/*22965*/           OPC_MoveParent,
/*22966*/           OPC_RecordChild2, // #2 = $offset
/*22967*/           OPC_MoveChild, 2,
/*22969*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*22972*/           OPC_MoveParent,
/*22973*/           OPC_EmitMergeInputChains1_0,
/*22974*/           OPC_MorphNodeTo, TARGET_VAL(Hexagon::JMP_cNot), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i1 PredRegs:i1:$src1, -1:i1, SETNE:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (JMP_cNot:i32 PredRegs:i1:$src1, (bb:Other):$offset)
/*22983*/         /*Scope*/ 28, /*->23012*/
/*22984*/           OPC_CheckInteger, 0, 
/*22986*/           OPC_MoveParent,
/*22987*/           OPC_MoveChild, 2,
/*22989*/           OPC_CheckCondCode, ISD::SETNE,
/*22991*/           OPC_MoveParent,
/*22992*/           OPC_CheckType, MVT::i1,
/*22994*/           OPC_MoveParent,
/*22995*/           OPC_RecordChild2, // #2 = $offset
/*22996*/           OPC_MoveChild, 2,
/*22998*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*23001*/           OPC_MoveParent,
/*23002*/           OPC_EmitMergeInputChains1_0,
/*23003*/           OPC_MorphNodeTo, TARGET_VAL(Hexagon::JMP_c), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i1 PredRegs:i1:$src1, 0:i1, SETNE:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (JMP_c:i32 PredRegs:i1:$src1, (bb:Other):$offset)
/*23012*/         0, /*End of Scope*/
/*23013*/       /*Scope*/ 69|128,1/*197*/, /*->23212*/
/*23015*/         OPC_CheckChild0Type, MVT::i32,
/*23017*/         OPC_RecordChild1, // #2 = $src2
/*23018*/         OPC_Scope, 87, /*->23107*/ // 2 children in Scope
/*23020*/           OPC_MoveChild, 1,
/*23022*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*23025*/           OPC_Scope, 39, /*->23066*/ // 2 children in Scope
/*23027*/             OPC_CheckPredicate, 52, // Predicate_s10ImmPred
/*23029*/             OPC_MoveParent,
/*23030*/             OPC_MoveChild, 2,
/*23032*/             OPC_CheckCondCode, ISD::SETNE,
/*23034*/             OPC_MoveParent,
/*23035*/             OPC_CheckType, MVT::i1,
/*23037*/             OPC_MoveParent,
/*23038*/             OPC_RecordChild2, // #3 = $offset
/*23039*/             OPC_MoveChild, 2,
/*23041*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*23044*/             OPC_MoveParent,
/*23045*/             OPC_EmitMergeInputChains1_0,
/*23046*/             OPC_EmitConvertToTarget, 2,
/*23048*/             OPC_EmitNode, TARGET_VAL(Hexagon::CMPEQri), 0,
                          1/*#VTs*/, MVT::i1, 2/*#Ops*/, 1, 4,  // Results = #5 
/*23057*/             OPC_MorphNodeTo, TARGET_VAL(Hexagon::JMP_cNot), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 3, 
                      // Src: (brcond (setcc:i1 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s10ImmPred>>:$src2, SETNE:Other), (bb:Other):$offset) - Complexity = 10
                      // Dst: (JMP_cNot:i32 (CMPEQri:i1 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s10ImmPred>>:$src2), (bb:Other):$offset)
/*23066*/           /*Scope*/ 39, /*->23106*/
/*23067*/             OPC_CheckPredicate, 1, // Predicate_s8ImmPred
/*23069*/             OPC_MoveParent,
/*23070*/             OPC_MoveChild, 2,
/*23072*/             OPC_CheckCondCode, ISD::SETLT,
/*23074*/             OPC_MoveParent,
/*23075*/             OPC_CheckType, MVT::i1,
/*23077*/             OPC_MoveParent,
/*23078*/             OPC_RecordChild2, // #3 = $offset
/*23079*/             OPC_MoveChild, 2,
/*23081*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*23084*/             OPC_MoveParent,
/*23085*/             OPC_EmitMergeInputChains1_0,
/*23086*/             OPC_EmitConvertToTarget, 2,
/*23088*/             OPC_EmitNode, TARGET_VAL(Hexagon::CMPGEri), 0,
                          1/*#VTs*/, MVT::i1, 2/*#Ops*/, 1, 4,  // Results = #5 
/*23097*/             OPC_MorphNodeTo, TARGET_VAL(Hexagon::JMP_cNot), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 3, 
                      // Src: (brcond (setcc:i1 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s8ImmPred>>:$src2, SETLT:Other), (bb:Other):$offset) - Complexity = 10
                      // Dst: (JMP_cNot:i32 (CMPGEri:i1 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s8ImmPred>>:$src2), (bb:Other):$offset)
/*23106*/           0, /*End of Scope*/
/*23107*/         /*Scope*/ 103, /*->23211*/
/*23108*/           OPC_MoveChild, 2,
/*23110*/           OPC_Scope, 32, /*->23144*/ // 3 children in Scope
/*23112*/             OPC_CheckCondCode, ISD::SETNE,
/*23114*/             OPC_MoveParent,
/*23115*/             OPC_CheckType, MVT::i1,
/*23117*/             OPC_MoveParent,
/*23118*/             OPC_RecordChild2, // #3 = $offset
/*23119*/             OPC_MoveChild, 2,
/*23121*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*23124*/             OPC_MoveParent,
/*23125*/             OPC_EmitMergeInputChains1_0,
/*23126*/             OPC_EmitNode, TARGET_VAL(Hexagon::CMPEQrr), 0,
                          1/*#VTs*/, MVT::i1, 2/*#Ops*/, 1, 2,  // Results = #4 
/*23135*/             OPC_MorphNodeTo, TARGET_VAL(Hexagon::JMP_cNot), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 3, 
                      // Src: (brcond (setcc:i1 IntRegs:i32:$src1, IntRegs:i32:$src2, SETNE:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (JMP_cNot:i32 (CMPEQrr:i1 IntRegs:i32:$src1, IntRegs:i32:$src2), (bb:Other):$offset)
/*23144*/           /*Scope*/ 32, /*->23177*/
/*23145*/             OPC_CheckCondCode, ISD::SETLT,
/*23147*/             OPC_MoveParent,
/*23148*/             OPC_CheckType, MVT::i1,
/*23150*/             OPC_MoveParent,
/*23151*/             OPC_RecordChild2, // #3 = $offset
/*23152*/             OPC_MoveChild, 2,
/*23154*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*23157*/             OPC_MoveParent,
/*23158*/             OPC_EmitMergeInputChains1_0,
/*23159*/             OPC_EmitNode, TARGET_VAL(Hexagon::CMPLTrr), 0,
                          1/*#VTs*/, MVT::i1, 2/*#Ops*/, 1, 2,  // Results = #4 
/*23168*/             OPC_MorphNodeTo, TARGET_VAL(Hexagon::JMP_c), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 3, 
                      // Src: (brcond (setcc:i1 IntRegs:i32:$src1, IntRegs:i32:$src2, SETLT:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (JMP_c:i32 (CMPLTrr:i1 IntRegs:i32:$src1, IntRegs:i32:$src2), (bb:Other):$offset)
/*23177*/           /*Scope*/ 32, /*->23210*/
/*23178*/             OPC_CheckCondCode, ISD::SETULE,
/*23180*/             OPC_MoveParent,
/*23181*/             OPC_CheckType, MVT::i1,
/*23183*/             OPC_MoveParent,
/*23184*/             OPC_RecordChild2, // #3 = $offset
/*23185*/             OPC_MoveChild, 2,
/*23187*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*23190*/             OPC_MoveParent,
/*23191*/             OPC_EmitMergeInputChains1_0,
/*23192*/             OPC_EmitNode, TARGET_VAL(Hexagon::CMPGTUrr), 0,
                          1/*#VTs*/, MVT::i1, 2/*#Ops*/, 1, 2,  // Results = #4 
/*23201*/             OPC_MorphNodeTo, TARGET_VAL(Hexagon::JMP_cNot), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 3, 
                      // Src: (brcond (setcc:i1 IntRegs:i32:$src1, IntRegs:i32:$src2, SETULE:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (JMP_cNot:i32 (CMPGTUrr:i1 IntRegs:i32:$src1, IntRegs:i32:$src2), (bb:Other):$offset)
/*23210*/           0, /*End of Scope*/
/*23211*/         0, /*End of Scope*/
/*23212*/       /*Scope*/ 73, /*->23286*/
/*23213*/         OPC_CheckChild0Type, MVT::i64,
/*23215*/         OPC_RecordChild1, // #2 = $src2
/*23216*/         OPC_MoveChild, 2,
/*23218*/         OPC_Scope, 32, /*->23252*/ // 2 children in Scope
/*23220*/           OPC_CheckCondCode, ISD::SETUGE,
/*23222*/           OPC_MoveParent,
/*23223*/           OPC_CheckType, MVT::i1,
/*23225*/           OPC_MoveParent,
/*23226*/           OPC_RecordChild2, // #3 = $offset
/*23227*/           OPC_MoveChild, 2,
/*23229*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*23232*/           OPC_MoveParent,
/*23233*/           OPC_EmitMergeInputChains1_0,
/*23234*/           OPC_EmitNode, TARGET_VAL(Hexagon::CMPGTU64rr), 0,
                        1/*#VTs*/, MVT::i1, 2/*#Ops*/, 2, 1,  // Results = #4 
/*23243*/           OPC_MorphNodeTo, TARGET_VAL(Hexagon::JMP_cNot), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 3, 
                    // Src: (brcond (setcc:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, SETUGE:Other), (bb:Other):$offset) - Complexity = 6
                    // Dst: (JMP_cNot:i32 (CMPGTU64rr:i1 DoubleRegs:i64:$src2, DoubleRegs:i64:$src1), (bb:Other):$offset)
/*23252*/         /*Scope*/ 32, /*->23285*/
/*23253*/           OPC_CheckCondCode, ISD::SETULE,
/*23255*/           OPC_MoveParent,
/*23256*/           OPC_CheckType, MVT::i1,
/*23258*/           OPC_MoveParent,
/*23259*/           OPC_RecordChild2, // #3 = $offset
/*23260*/           OPC_MoveChild, 2,
/*23262*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*23265*/           OPC_MoveParent,
/*23266*/           OPC_EmitMergeInputChains1_0,
/*23267*/           OPC_EmitNode, TARGET_VAL(Hexagon::CMPGTU64rr), 0,
                        1/*#VTs*/, MVT::i1, 2/*#Ops*/, 1, 2,  // Results = #4 
/*23276*/           OPC_MorphNodeTo, TARGET_VAL(Hexagon::JMP_cNot), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 3, 
                    // Src: (brcond (setcc:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2, SETULE:Other), (bb:Other):$offset) - Complexity = 6
                    // Dst: (JMP_cNot:i32 (CMPGTU64rr:i1 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2), (bb:Other):$offset)
/*23285*/         0, /*End of Scope*/
/*23286*/       0, /*End of Scope*/
              0, // EndSwitchOpcode
/*23288*/   /*Scope*/ 20, /*->23309*/
/*23289*/     OPC_RecordChild1, // #1 = $src
/*23290*/     OPC_CheckChild1Type, MVT::i1,
/*23292*/     OPC_RecordChild2, // #2 = $offset
/*23293*/     OPC_MoveChild, 2,
/*23295*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*23298*/     OPC_MoveParent,
/*23299*/     OPC_EmitMergeInputChains1_0,
/*23300*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::JMP_c), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (brcond PredRegs:i1:$src, (bb:Other):$offset) - Complexity = 3
              // Dst: (JMP_c:i32 PredRegs:i1:$src, (bb:Other):$offset)
/*23309*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 53|128,2/*309*/,  TARGET_VAL(ISD::MUL),// ->23623
/*23314*/   OPC_Scope, 58, /*->23374*/ // 2 children in Scope
/*23316*/     OPC_MoveChild, 0,
/*23318*/     OPC_SwitchOpcode /*2 cases */, 24,  TARGET_VAL(ISD::ANY_EXTEND),// ->23346
/*23322*/       OPC_RecordChild0, // #0 = $src1
/*23323*/       OPC_CheckChild0Type, MVT::i32,
/*23325*/       OPC_MoveParent,
/*23326*/       OPC_MoveChild, 1,
/*23328*/       OPC_CheckOpcode, TARGET_VAL(ISD::ANY_EXTEND),
/*23331*/       OPC_RecordChild0, // #1 = $src2
/*23332*/       OPC_CheckChild0Type, MVT::i32,
/*23334*/       OPC_MoveParent,
/*23335*/       OPC_CheckType, MVT::i64,
/*23337*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::MPYU64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i64 (anyext:i64 IntRegs:i32:$src1), (anyext:i64 IntRegs:i32:$src2)) - Complexity = 9
                // Dst: (MPYU64:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
              /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::SIGN_EXTEND),// ->23373
/*23349*/       OPC_RecordChild0, // #0 = $src1
/*23350*/       OPC_CheckChild0Type, MVT::i32,
/*23352*/       OPC_MoveParent,
/*23353*/       OPC_MoveChild, 1,
/*23355*/       OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*23358*/       OPC_RecordChild0, // #1 = $src2
/*23359*/       OPC_CheckChild0Type, MVT::i32,
/*23361*/       OPC_MoveParent,
/*23362*/       OPC_CheckType, MVT::i64,
/*23364*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::MPY64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i64 (sext:i64 IntRegs:i32:$src1), (sext:i64 IntRegs:i32:$src2)) - Complexity = 9
                // Dst: (MPY64:i64 IntRegs:i32:$src1, IntRegs:i32:$src2)
              0, // EndSwitchOpcode
/*23374*/   /*Scope*/ 118|128,1/*246*/, /*->23622*/
/*23376*/     OPC_RecordChild0, // #0 = $src1
/*23377*/     OPC_RecordChild1, // #1 = $src2
/*23378*/     OPC_Scope, 58, /*->23438*/ // 3 children in Scope
/*23380*/       OPC_MoveChild, 1,
/*23382*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*23385*/       OPC_Scope, 16, /*->23403*/ // 3 children in Scope
/*23387*/         OPC_CheckPredicate, 46, // Predicate_u8ImmPred
/*23389*/         OPC_MoveParent,
/*23390*/         OPC_CheckType, MVT::i32,
/*23392*/         OPC_EmitConvertToTarget, 1,
/*23394*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::MPYI_riu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (mul:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_u8ImmPred>>:$src2) - Complexity = 7
                  // Dst: (MPYI_riu:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*23403*/       /*Scope*/ 16, /*->23420*/
/*23404*/         OPC_CheckPredicate, 57, // Predicate_n8ImmPred
/*23406*/         OPC_MoveParent,
/*23407*/         OPC_CheckType, MVT::i32,
/*23409*/         OPC_EmitConvertToTarget, 1,
/*23411*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::MPYI_rin), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (mul:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_n8ImmPred>>:$src2) - Complexity = 7
                  // Dst: (MPYI_rin:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*23420*/       /*Scope*/ 16, /*->23437*/
/*23421*/         OPC_CheckPredicate, 58, // Predicate_s9ImmPred
/*23423*/         OPC_MoveParent,
/*23424*/         OPC_CheckType, MVT::i32,
/*23426*/         OPC_EmitConvertToTarget, 1,
/*23428*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::MPYI_ri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (mul:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s9ImmPred>>:$src2) - Complexity = 7
                  // Dst: (MPYI_ri:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*23437*/       0, /*End of Scope*/
/*23438*/     /*Scope*/ 11, /*->23450*/
/*23439*/       OPC_CheckType, MVT::i32,
/*23441*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::MPYI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i32 IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 3
                // Dst: (MPYI:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
/*23450*/     /*Scope*/ 41|128,1/*169*/, /*->23621*/
/*23452*/       OPC_CheckType, MVT::i64,
/*23454*/       OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*23457*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3 
/*23466*/       OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*23469*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5 
/*23478*/       OPC_EmitNode, TARGET_VAL(Hexagon::MPYU64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 3, 5,  // Results = #6 
/*23487*/       OPC_EmitInteger, MVT::i32, Hexagon::subreg_hireg,
/*23490*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 6, 7,  // Results = #8 
/*23499*/       OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*23502*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 9,  // Results = #10 
/*23511*/       OPC_EmitInteger, MVT::i32, Hexagon::subreg_hireg,
/*23514*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12 
/*23523*/       OPC_EmitNode, TARGET_VAL(Hexagon::Hexagon_M2_maci), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 8, 10, 12,  // Results = #13 
/*23533*/       OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*23536*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 14,  // Results = #15 
/*23545*/       OPC_EmitInteger, MVT::i32, Hexagon::subreg_hireg,
/*23548*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17 
/*23557*/       OPC_EmitNode, TARGET_VAL(Hexagon::Hexagon_M2_maci), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 13, 15, 17,  // Results = #18 
/*23567*/       OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*23570*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 19,  // Results = #20 
/*23579*/       OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*23582*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 21,  // Results = #22 
/*23591*/       OPC_EmitNode, TARGET_VAL(Hexagon::MPYU64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 20, 22,  // Results = #23 
/*23600*/       OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*23603*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 23, 24,  // Results = #25 
/*23612*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::COMBINE_rr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 18, 25, 
                // Src: (mul:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 3
                // Dst: (COMBINE_rr:i64 (Hexagon_M2_maci:i32 (Hexagon_M2_maci:i32 (EXTRACT_SUBREG:i32 (MPYU64:i64 (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src1, subreg_loreg:i32), (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src2, subreg_loreg:i32)), subreg_hireg:i32), (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src1, subreg_loreg:i32), (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src2, subreg_hireg:i32)), (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src2, subreg_loreg:i32), (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src1, subreg_hireg:i32)), (EXTRACT_SUBREG:i32 (MPYU64:i64 (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src1, subreg_loreg:i32), (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src2, subreg_loreg:i32)), subreg_loreg:i32))
/*23621*/     0, /*End of Scope*/
/*23622*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FrameIndex),// ->23641
/*23626*/   OPC_RecordNode,   // #0 = $src1
/*23627*/   OPC_CheckType, MVT::i32,
/*23629*/   OPC_CheckComplexPat, /*CP*/7, /*#*/0, // SelectADDRri:$src1 #1 #2
/*23632*/   OPC_MorphNodeTo, TARGET_VAL(Hexagon::TFR_FI), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: ADDRri:i32:$src1 - Complexity = 9
            // Dst: (TFR_FI:i32 ADDRri:i32:$src1)
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::CALLSEQ_END),// ->23670
/*23644*/   OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*23645*/   OPC_CaptureGlueInput,
/*23646*/   OPC_RecordChild1, // #1 = $amt1
/*23647*/   OPC_MoveChild, 1,
/*23649*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*23652*/   OPC_MoveParent,
/*23653*/   OPC_RecordChild2, // #2 = $amt2
/*23654*/   OPC_MoveChild, 2,
/*23656*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*23659*/   OPC_MoveParent,
/*23660*/   OPC_EmitMergeInputChains1_0,
/*23661*/   OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 105,  TARGET_VAL(ISD::SHL),// ->23778
/*23673*/   OPC_Scope, 18, /*->23693*/ // 2 children in Scope
/*23675*/     OPC_MoveChild, 0,
/*23677*/     OPC_CheckInteger, 16, 
/*23679*/     OPC_MoveParent,
/*23680*/     OPC_RecordChild1, // #0 = $src1
/*23681*/     OPC_CheckChild1Type, MVT::i32,
/*23683*/     OPC_CheckType, MVT::i32,
/*23685*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::ASLH), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (shl:i32 16:i32, IntRegs:i32:$src1) - Complexity = 8
              // Dst: (ASLH:i32 IntRegs:i32:$src1)
/*23693*/   /*Scope*/ 83, /*->23777*/
/*23694*/     OPC_RecordChild0, // #0 = $src1
/*23695*/     OPC_Scope, 24, /*->23721*/ // 3 children in Scope
/*23697*/       OPC_RecordChild1, // #1 = $src2
/*23698*/       OPC_MoveChild, 1,
/*23700*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*23703*/       OPC_CheckPredicate, 53, // Predicate_u5ImmPred
/*23705*/       OPC_CheckType, MVT::i32,
/*23707*/       OPC_MoveParent,
/*23708*/       OPC_CheckType, MVT::i32,
/*23710*/       OPC_EmitConvertToTarget, 1,
/*23712*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::ASL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_u5ImmPred>>:$src2) - Complexity = 7
                // Dst: (ASL:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*23721*/     /*Scope*/ 26, /*->23748*/
/*23722*/       OPC_MoveChild, 0,
/*23724*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*23727*/       OPC_CheckPredicate, 55, // Predicate_s6ImmPred
/*23729*/       OPC_MoveParent,
/*23730*/       OPC_RecordChild1, // #1 = $src2
/*23731*/       OPC_CheckChild1Type, MVT::i32,
/*23733*/       OPC_CheckType, MVT::i32,
/*23735*/       OPC_CheckPatternPredicate, 3, // (Subtarget.hasV4TOps())
/*23737*/       OPC_EmitConvertToTarget, 0,
/*23739*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::LSLi_V4), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
                // Src: (shl:i32 (imm:i32)<<P:Predicate_s6ImmPred>>:$src1, IntRegs:i32:$src2) - Complexity = 7
                // Dst: (LSLi_V4:i32 (imm:i32):$src1, IntRegs:i32:$src2)
/*23748*/     /*Scope*/ 27, /*->23776*/
/*23749*/       OPC_RecordChild1, // #1 = $src2
/*23750*/       OPC_CheckChild1Type, MVT::i32,
/*23752*/       OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->23764
/*23755*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::ASL_rr), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (shl:i32 IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 3
                  // Dst: (ASL_rr:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
                /*SwitchType*/ 9,  MVT::i64,// ->23775
/*23766*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::LSLd), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (shl:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 3
                  // Dst: (LSLd:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
                0, // EndSwitchType
/*23776*/     0, /*End of Scope*/
/*23777*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 97,  TARGET_VAL(ISD::SRA),// ->23878
/*23781*/   OPC_Scope, 18, /*->23801*/ // 2 children in Scope
/*23783*/     OPC_MoveChild, 0,
/*23785*/     OPC_CheckInteger, 16, 
/*23787*/     OPC_MoveParent,
/*23788*/     OPC_RecordChild1, // #0 = $src1
/*23789*/     OPC_CheckChild1Type, MVT::i32,
/*23791*/     OPC_CheckType, MVT::i32,
/*23793*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::ASRH), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sra:i32 16:i32, IntRegs:i32:$src1) - Complexity = 8
              // Dst: (ASRH:i32 IntRegs:i32:$src1)
/*23801*/   /*Scope*/ 75, /*->23877*/
/*23802*/     OPC_RecordChild0, // #0 = $src1
/*23803*/     OPC_RecordChild1, // #1 = $src2
/*23804*/     OPC_Scope, 43, /*->23849*/ // 2 children in Scope
/*23806*/       OPC_MoveChild, 1,
/*23808*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*23811*/       OPC_CheckType, MVT::i32,
/*23813*/       OPC_Scope, 16, /*->23831*/ // 2 children in Scope
/*23815*/         OPC_CheckPredicate, 53, // Predicate_u5ImmPred
/*23817*/         OPC_MoveParent,
/*23818*/         OPC_CheckType, MVT::i32,
/*23820*/         OPC_EmitConvertToTarget, 1,
/*23822*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::ASR_ri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sra:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_u5ImmPred>>:$src2) - Complexity = 7
                  // Dst: (ASR_ri:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*23831*/       /*Scope*/ 16, /*->23848*/
/*23832*/         OPC_CheckPredicate, 18, // Predicate_u6ImmPred
/*23834*/         OPC_MoveParent,
/*23835*/         OPC_CheckType, MVT::i64,
/*23837*/         OPC_EmitConvertToTarget, 1,
/*23839*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::ASRd_ri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (sra:i64 DoubleRegs:i64:$src1, (imm:i32)<<P:Predicate_u6ImmPred>>:$src2) - Complexity = 7
                  // Dst: (ASRd_ri:i64 DoubleRegs:i64:$src1, (imm:i32):$src2)
/*23848*/       0, /*End of Scope*/
/*23849*/     /*Scope*/ 26, /*->23876*/
/*23850*/       OPC_CheckChild1Type, MVT::i32,
/*23852*/       OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->23864
/*23855*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::ASR_rr), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:i32 IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 3
                  // Dst: (ASR_rr:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
                /*SwitchType*/ 9,  MVT::i64,// ->23875
/*23866*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::ASRd_rr), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 3
                  // Dst: (ASRd_rr:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
                0, // EndSwitchType
/*23876*/     0, /*End of Scope*/
/*23877*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 75,  TARGET_VAL(ISD::SRL),// ->23956
/*23881*/   OPC_RecordChild0, // #0 = $src1
/*23882*/   OPC_RecordChild1, // #1 = $src2
/*23883*/   OPC_Scope, 43, /*->23928*/ // 2 children in Scope
/*23885*/     OPC_MoveChild, 1,
/*23887*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*23890*/     OPC_CheckType, MVT::i32,
/*23892*/     OPC_Scope, 16, /*->23910*/ // 2 children in Scope
/*23894*/       OPC_CheckPredicate, 53, // Predicate_u5ImmPred
/*23896*/       OPC_MoveParent,
/*23897*/       OPC_CheckType, MVT::i32,
/*23899*/       OPC_EmitConvertToTarget, 1,
/*23901*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::LSR_ri), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_u5ImmPred>>:$src2) - Complexity = 7
                // Dst: (LSR_ri:i32 IntRegs:i32:$src1, (imm:i32):$src2)
/*23910*/     /*Scope*/ 16, /*->23927*/
/*23911*/       OPC_CheckPredicate, 18, // Predicate_u6ImmPred
/*23913*/       OPC_MoveParent,
/*23914*/       OPC_CheckType, MVT::i64,
/*23916*/       OPC_EmitConvertToTarget, 1,
/*23918*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::LSRd_ri), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i64 DoubleRegs:i64:$src1, (imm:i32)<<P:Predicate_u6ImmPred>>:$src2) - Complexity = 7
                // Dst: (LSRd_ri:i64 DoubleRegs:i64:$src1, (imm:i32):$src2)
/*23927*/     0, /*End of Scope*/
/*23928*/   /*Scope*/ 26, /*->23955*/
/*23929*/     OPC_CheckChild1Type, MVT::i32,
/*23931*/     OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->23943
/*23934*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::LSR_rr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i32 IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 3
                // Dst: (LSR_rr:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
              /*SwitchType*/ 9,  MVT::i64,// ->23954
/*23945*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::LSRd_rr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2) - Complexity = 3
                // Dst: (LSRd_rr:i64 DoubleRegs:i64:$src1, IntRegs:i32:$src2)
              0, // EndSwitchType
/*23955*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(HexagonISD::ADJDYNALLOC),// ->23984
/*23959*/   OPC_RecordChild0, // #0 = $src1
/*23960*/   OPC_RecordChild1, // #1 = $src2
/*23961*/   OPC_MoveChild, 1,
/*23963*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*23966*/   OPC_CheckPredicate, 56, // Predicate_s16ImmPred
/*23968*/   OPC_CheckType, MVT::i32,
/*23970*/   OPC_MoveParent,
/*23971*/   OPC_CheckType, MVT::i32,
/*23973*/   OPC_EmitConvertToTarget, 1,
/*23975*/   OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADJDYNALLOC), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
            // Src: (Hexagon_ADJDYNALLOC:i32 IntRegs:i32:$src1, (imm:i32)<<P:Predicate_s16ImmPred>>:$src2) - Complexity = 7
            // Dst: (ADJDYNALLOC:i32 IntRegs:i32:$src1, (imm:i32):$src2)
          /*SwitchOpcode*/ 47,  TARGET_VAL(HexagonISD::CONST32),// ->24034
/*23987*/   OPC_RecordChild0, // #0 = $global
/*23988*/   OPC_MoveChild, 0,
/*23990*/   OPC_SwitchOpcode /*3 cases */, 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->24005
/*23994*/     OPC_MoveParent,
/*23995*/     OPC_CheckType, MVT::i32,
/*23997*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::CONST32_set), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (HexagonCONST32:i32 (tglobaladdr:i32):$global) - Complexity = 6
              // Dst: (CONST32_set:i32 (tglobaladdr:i32):$global)
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetJumpTable),// ->24019
/*24008*/     OPC_MoveParent,
/*24009*/     OPC_CheckType, MVT::i32,
/*24011*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::CONST32_set_jt), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (HexagonCONST32:i32 (tjumptable:i32):$jt) - Complexity = 6
              // Dst: (CONST32_set_jt:i32 (tjumptable:i32):$jt)
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::BasicBlock),// ->24033
/*24022*/     OPC_MoveParent,
/*24023*/     OPC_CheckType, MVT::i32,
/*24025*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::CONST32_Label), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (HexagonCONST32:i32 (bbl:i32):$label) - Complexity = 6
              // Dst: (CONST32_Label:i32 (bbl:i32):$label)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 17,  TARGET_VAL(HexagonISD::CONST32_GP),// ->24054
/*24037*/   OPC_RecordChild0, // #0 = $global
/*24038*/   OPC_MoveChild, 0,
/*24040*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*24043*/   OPC_MoveParent,
/*24044*/   OPC_CheckType, MVT::i32,
/*24046*/   OPC_MorphNodeTo, TARGET_VAL(Hexagon::CONST32GP_set), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (HexagonCONST32_GP:i32 (tglobaladdr:i32):$global) - Complexity = 6
            // Dst: (CONST32GP_set:i32 (tglobaladdr:i32):$global)
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CALLSEQ_START),// ->24074
/*24057*/   OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*24058*/   OPC_RecordChild1, // #1 = $amt
/*24059*/   OPC_MoveChild, 1,
/*24061*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*24064*/   OPC_MoveParent,
/*24065*/   OPC_EmitMergeInputChains1_0,
/*24066*/   OPC_MorphNodeTo, TARGET_VAL(Hexagon::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
          /*SwitchOpcode*/ 94,  TARGET_VAL(HexagonISD::CALL),// ->24171
/*24077*/   OPC_RecordNode,   // #0 = 'call' chained node
/*24078*/   OPC_CaptureGlueInput,
/*24079*/   OPC_RecordChild1, // #1 = $dst
/*24080*/   OPC_Scope, 64, /*->24146*/ // 3 children in Scope
/*24082*/     OPC_MoveChild, 1,
/*24084*/     OPC_SwitchOpcode /*2 cases */, 27,  TARGET_VAL(ISD::TargetGlobalAddress),// ->24115
/*24088*/       OPC_MoveParent,
/*24089*/       OPC_Scope, 11, /*->24102*/ // 2 children in Scope
/*24091*/         OPC_CheckPatternPredicate, 1, // (Subtarget.hasV2TOpsOnly())
/*24093*/         OPC_EmitMergeInputChains1_0,
/*24094*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                  // Src: (call (tglobaladdr:i32):$dst) - Complexity = 6
                  // Dst: (CALL:i64 (tglobaladdr:i32):$dst)
/*24102*/       /*Scope*/ 11, /*->24114*/
/*24103*/         OPC_CheckPatternPredicate, 0, // (Subtarget.hasV3TOps())
/*24105*/         OPC_EmitMergeInputChains1_0,
/*24106*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::CALLv3), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                  // Src: (call (tglobaladdr:i32):$dst) - Complexity = 6
                  // Dst: (CALLv3:i64 (tglobaladdr:i32):$dst)
/*24114*/       0, /*End of Scope*/
              /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetExternalSymbol),// ->24145
/*24118*/       OPC_MoveParent,
/*24119*/       OPC_Scope, 11, /*->24132*/ // 2 children in Scope
/*24121*/         OPC_CheckPatternPredicate, 1, // (Subtarget.hasV2TOpsOnly())
/*24123*/         OPC_EmitMergeInputChains1_0,
/*24124*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                  // Src: (call (texternalsym:i32):$dst) - Complexity = 6
                  // Dst: (CALL:i64 (texternalsym:i32):$dst)
/*24132*/       /*Scope*/ 11, /*->24144*/
/*24133*/         OPC_CheckPatternPredicate, 0, // (Subtarget.hasV3TOps())
/*24135*/         OPC_EmitMergeInputChains1_0,
/*24136*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::CALLv3), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                  // Src: (call (texternalsym:i32):$dst) - Complexity = 6
                  // Dst: (CALLv3:i64 (texternalsym:i32):$dst)
/*24144*/       0, /*End of Scope*/
              0, // EndSwitchOpcode
/*24146*/   /*Scope*/ 11, /*->24158*/
/*24147*/     OPC_CheckPatternPredicate, 1, // (Subtarget.hasV2TOpsOnly())
/*24149*/     OPC_EmitMergeInputChains1_0,
/*24150*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::CALLR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (call IntRegs:i32:$dst) - Complexity = 3
              // Dst: (CALLR:i64 IntRegs:i32:$dst)
/*24158*/   /*Scope*/ 11, /*->24170*/
/*24159*/     OPC_CheckPatternPredicate, 0, // (Subtarget.hasV3TOps())
/*24161*/     OPC_EmitMergeInputChains1_0,
/*24162*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::CALLRv3), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (call IntRegs:i32:$dst) - Complexity = 3
              // Dst: (CALLRv3:i64 IntRegs:i32:$dst)
/*24170*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(HexagonISD::TC_RETURN),// ->24220
/*24174*/   OPC_RecordNode,   // #0 = 'HexagonTCRet' chained node
/*24175*/   OPC_CaptureGlueInput,
/*24176*/   OPC_RecordChild1, // #1 = $dst
/*24177*/   OPC_Scope, 30, /*->24209*/ // 2 children in Scope
/*24179*/     OPC_MoveChild, 1,
/*24181*/     OPC_SwitchOpcode /*2 cases */, 10,  TARGET_VAL(ISD::TargetGlobalAddress),// ->24195
/*24185*/       OPC_MoveParent,
/*24186*/       OPC_EmitMergeInputChains1_0,
/*24187*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::TCRETURNtg), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (HexagonTCRet (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (TCRETURNtg:i64 (tglobaladdr:i32):$dst)
              /*SwitchOpcode*/ 10,  TARGET_VAL(ISD::TargetExternalSymbol),// ->24208
/*24198*/       OPC_MoveParent,
/*24199*/       OPC_EmitMergeInputChains1_0,
/*24200*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::TCRETURNtext), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (HexagonTCRet (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (TCRETURNtext:i64 (texternalsym:i32):$dst)
              0, // EndSwitchOpcode
/*24209*/   /*Scope*/ 9, /*->24219*/
/*24210*/     OPC_EmitMergeInputChains1_0,
/*24211*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::TCRETURNR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (HexagonTCRet IntRegs:i32:$dst) - Complexity = 3
              // Dst: (TCRETURNR:i64 IntRegs:i32:$dst)
/*24219*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(HexagonISD::WrapperJT),// ->24240
/*24223*/   OPC_RecordChild0, // #0 = $dst
/*24224*/   OPC_MoveChild, 0,
/*24226*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetJumpTable),
/*24229*/   OPC_MoveParent,
/*24230*/   OPC_CheckType, MVT::i32,
/*24232*/   OPC_MorphNodeTo, TARGET_VAL(Hexagon::CONST32_set_jt), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (HexagonWrapperJT:i32 (tjumptable:i32):$dst) - Complexity = 6
            // Dst: (CONST32_set_jt:i32 (tjumptable:i32):$dst)
          /*SwitchOpcode*/ 74,  TARGET_VAL(ISD::Constant),// ->24317
/*24243*/   OPC_Scope, 11, /*->24256*/ // 2 children in Scope
/*24245*/     OPC_CheckInteger, 0, 
/*24247*/     OPC_CheckType, MVT::i1,
/*24249*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::TFR_PdFalse), 0,
                  1/*#VTs*/, MVT::i1, 0/*#Ops*/, 
              // Src: 0:i1 - Complexity = 5
              // Dst: (TFR_PdFalse:i1)
/*24256*/   /*Scope*/ 59, /*->24316*/
/*24257*/     OPC_RecordNode, // #0 = $src1
/*24258*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->24287
/*24261*/       OPC_Scope, 12, /*->24275*/ // 2 children in Scope
/*24263*/         OPC_CheckPredicate, 56, // Predicate_s16ImmPred
/*24265*/         OPC_EmitConvertToTarget, 0,
/*24267*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::TFRI), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (imm:i32)<<P:Predicate_s16ImmPred>>:$src1 - Complexity = 4
                  // Dst: (TFRI:i32 (imm:i32):$src1)
/*24275*/       /*Scope*/ 10, /*->24286*/
/*24276*/         OPC_EmitConvertToTarget, 0,
/*24278*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::CONST32_Int_Real), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (imm:i32):$global - Complexity = 3
                  // Dst: (CONST32_Int_Real:i32 (imm:i32):$global)
/*24286*/       0, /*End of Scope*/
              /*SwitchType*/ 26,  MVT::i64,// ->24315
/*24289*/       OPC_Scope, 12, /*->24303*/ // 2 children in Scope
/*24291*/         OPC_CheckPredicate, 59, // Predicate_s8Imm64Pred
/*24293*/         OPC_EmitConvertToTarget, 0,
/*24295*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::TFRI64), 0,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                  // Src: (imm:i64)<<P:Predicate_s8Imm64Pred>>:$src1 - Complexity = 4
                  // Dst: (TFRI64:i64 (imm:i64):$src1)
/*24303*/       /*Scope*/ 10, /*->24314*/
/*24304*/         OPC_EmitConvertToTarget, 0,
/*24306*/         OPC_MorphNodeTo, TARGET_VAL(Hexagon::CONST64_Int_Real), 0,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                  // Src: (imm:i64):$global - Complexity = 3
                  // Dst: (CONST64_Int_Real:i64 (imm:i64):$global)
/*24314*/       0, /*End of Scope*/
              0, // EndSwitchType
/*24316*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->24336
/*24320*/   OPC_RecordNode,   // #0 = 'br' chained node
/*24321*/   OPC_RecordChild1, // #1 = $offset
/*24322*/   OPC_MoveChild, 1,
/*24324*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*24327*/   OPC_MoveParent,
/*24328*/   OPC_EmitMergeInputChains1_0,
/*24329*/   OPC_MorphNodeTo, TARGET_VAL(Hexagon::JMP), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$offset) - Complexity = 3
            // Dst: (JMP (bb:Other):$offset)
          /*SwitchOpcode*/ 10,  TARGET_VAL(HexagonISD::RET_FLAG),// ->24349
/*24339*/   OPC_RecordNode,   // #0 = 'retflag' chained node
/*24340*/   OPC_CaptureGlueInput,
/*24341*/   OPC_EmitMergeInputChains1_0,
/*24342*/   OPC_MorphNodeTo, TARGET_VAL(Hexagon::JMPR), 0|OPFL_Chain|OPFL_GlueInput,
                1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
            // Src: (retflag) - Complexity = 3
            // Dst: (JMPR:i32)
          /*SwitchOpcode*/ 113|128,1/*241*/,  TARGET_VAL(ISD::MULHS),// ->24594
/*24353*/   OPC_RecordChild0, // #0 = $src1
/*24354*/   OPC_RecordChild1, // #1 = $src2
/*24355*/   OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->24367
/*24358*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::MPY), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i32 IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 3
              // Dst: (MPY:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
            /*SwitchType*/ 95|128,1/*223*/,  MVT::i64,// ->24593
/*24370*/     OPC_EmitInteger, MVT::i32, 0, 
/*24373*/     OPC_EmitNode, TARGET_VAL(Hexagon::TFRI), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3 
/*24381*/     OPC_EmitInteger, MVT::i32, 0, 
/*24384*/     OPC_EmitNode, TARGET_VAL(Hexagon::TFRI), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 4,  // Results = #5 
/*24392*/     OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*24395*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7 
/*24404*/     OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*24407*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 8,  // Results = #9 
/*24416*/     OPC_EmitNode, TARGET_VAL(Hexagon::MPYU64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 7, 9,  // Results = #10 
/*24425*/     OPC_EmitInteger, MVT::i32, 32, 
/*24428*/     OPC_EmitNode, TARGET_VAL(Hexagon::LSRd_ri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 10, 11,  // Results = #12 
/*24437*/     OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*24440*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 12, 13,  // Results = #14 
/*24449*/     OPC_EmitNode, TARGET_VAL(Hexagon::COMBINE_rr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 5, 14,  // Results = #15 
/*24458*/     OPC_EmitInteger, MVT::i32, Hexagon::subreg_hireg,
/*24461*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17 
/*24470*/     OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*24473*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 18,  // Results = #19 
/*24482*/     OPC_EmitNode, TARGET_VAL(Hexagon::MPY64_acc), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 15, 17, 19,  // Results = #20 
/*24492*/     OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*24495*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 21,  // Results = #22 
/*24504*/     OPC_EmitInteger, MVT::i32, Hexagon::subreg_hireg,
/*24507*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 23,  // Results = #24 
/*24516*/     OPC_EmitNode, TARGET_VAL(Hexagon::MPY64_acc), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 20, 22, 24,  // Results = #25 
/*24526*/     OPC_EmitInteger, MVT::i32, 32, 
/*24529*/     OPC_EmitNode, TARGET_VAL(Hexagon::LSRd_ri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 25, 26,  // Results = #27 
/*24538*/     OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*24541*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 27, 28,  // Results = #29 
/*24550*/     OPC_EmitNode, TARGET_VAL(Hexagon::COMBINE_rr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 3, 29,  // Results = #30 
/*24559*/     OPC_EmitInteger, MVT::i32, Hexagon::subreg_hireg,
/*24562*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 31,  // Results = #32 
/*24571*/     OPC_EmitInteger, MVT::i32, Hexagon::subreg_hireg,
/*24574*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 33,  // Results = #34 
/*24583*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::MPY64_acc), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 30, 32, 34, 
              // Src: (mulhs:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 3
              // Dst: (MPY64_acc:i64 (COMBINE_rr:i64 (TFRI:i32 0:i32), (EXTRACT_SUBREG:i32 (LSRd_ri:i64 (MPY64_acc:i64 (MPY64_acc:i64 (COMBINE_rr:i64 (TFRI:i32 0:i32), (EXTRACT_SUBREG:i32 (LSRd_ri:i64 (MPYU64:i64 (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src1, subreg_loreg:i32), (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src2, subreg_loreg:i32)), 32:i32), subreg_loreg:i32)), (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src1, subreg_hireg:i32), (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src2, subreg_loreg:i32)), (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src1, subreg_loreg:i32), (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src2, subreg_hireg:i32)), 32:i32), subreg_loreg:i32)), (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src1, subreg_hireg:i32), (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src2, subreg_hireg:i32))
            0, // EndSwitchType
          /*SwitchOpcode*/ 113|128,1/*241*/,  TARGET_VAL(ISD::MULHU),// ->24839
/*24598*/   OPC_RecordChild0, // #0 = $src1
/*24599*/   OPC_RecordChild1, // #1 = $src2
/*24600*/   OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->24612
/*24603*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::MPYU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i32 IntRegs:i32:$src1, IntRegs:i32:$src2) - Complexity = 3
              // Dst: (MPYU:i32 IntRegs:i32:$src1, IntRegs:i32:$src2)
            /*SwitchType*/ 95|128,1/*223*/,  MVT::i64,// ->24838
/*24615*/     OPC_EmitInteger, MVT::i32, 0, 
/*24618*/     OPC_EmitNode, TARGET_VAL(Hexagon::TFRI), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3 
/*24626*/     OPC_EmitInteger, MVT::i32, 0, 
/*24629*/     OPC_EmitNode, TARGET_VAL(Hexagon::TFRI), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 4,  // Results = #5 
/*24637*/     OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*24640*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7 
/*24649*/     OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*24652*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 8,  // Results = #9 
/*24661*/     OPC_EmitNode, TARGET_VAL(Hexagon::MPYU64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 7, 9,  // Results = #10 
/*24670*/     OPC_EmitInteger, MVT::i32, 32, 
/*24673*/     OPC_EmitNode, TARGET_VAL(Hexagon::LSRd_ri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 10, 11,  // Results = #12 
/*24682*/     OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*24685*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 12, 13,  // Results = #14 
/*24694*/     OPC_EmitNode, TARGET_VAL(Hexagon::COMBINE_rr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 5, 14,  // Results = #15 
/*24703*/     OPC_EmitInteger, MVT::i32, Hexagon::subreg_hireg,
/*24706*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17 
/*24715*/     OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*24718*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 18,  // Results = #19 
/*24727*/     OPC_EmitNode, TARGET_VAL(Hexagon::MPYU64_acc), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 15, 17, 19,  // Results = #20 
/*24737*/     OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*24740*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 21,  // Results = #22 
/*24749*/     OPC_EmitInteger, MVT::i32, Hexagon::subreg_hireg,
/*24752*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 23,  // Results = #24 
/*24761*/     OPC_EmitNode, TARGET_VAL(Hexagon::MPYU64_acc), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 20, 22, 24,  // Results = #25 
/*24771*/     OPC_EmitInteger, MVT::i32, 32, 
/*24774*/     OPC_EmitNode, TARGET_VAL(Hexagon::LSRd_ri), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 25, 26,  // Results = #27 
/*24783*/     OPC_EmitInteger, MVT::i32, Hexagon::subreg_loreg,
/*24786*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 27, 28,  // Results = #29 
/*24795*/     OPC_EmitNode, TARGET_VAL(Hexagon::COMBINE_rr), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 3, 29,  // Results = #30 
/*24804*/     OPC_EmitInteger, MVT::i32, Hexagon::subreg_hireg,
/*24807*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 31,  // Results = #32 
/*24816*/     OPC_EmitInteger, MVT::i32, Hexagon::subreg_hireg,
/*24819*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 33,  // Results = #34 
/*24828*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::MPYU64_acc), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 30, 32, 34, 
              // Src: (mulhu:i64 DoubleRegs:i64:$src1, DoubleRegs:i64:$src2) - Complexity = 3
              // Dst: (MPYU64_acc:i64 (COMBINE_rr:i64 (TFRI:i32 0:i32), (EXTRACT_SUBREG:i32 (LSRd_ri:i64 (MPYU64_acc:i64 (MPYU64_acc:i64 (COMBINE_rr:i64 (TFRI:i32 0:i32), (EXTRACT_SUBREG:i32 (LSRd_ri:i64 (MPYU64:i64 (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src1, subreg_loreg:i32), (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src2, subreg_loreg:i32)), 32:i32), subreg_loreg:i32)), (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src1, subreg_hireg:i32), (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src2, subreg_loreg:i32)), (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src1, subreg_loreg:i32), (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src2, subreg_hireg:i32)), 32:i32), subreg_loreg:i32)), (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src1, subreg_hireg:i32), (EXTRACT_SUBREG:i32 DoubleRegs:i64:$src2, subreg_hireg:i32))
            0, // EndSwitchType
          /*SwitchOpcode*/ 42,  TARGET_VAL(ISD::SIGN_EXTEND),// ->24884
/*24842*/   OPC_RecordChild0, // #0 = $src1
/*24843*/   OPC_SwitchType /*2 cases */, 10,  MVT::i64,// ->24856
/*24846*/     OPC_CheckChild0Type, MVT::i32,
/*24848*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::SXTW), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (sext:i64 IntRegs:i32:$src1) - Complexity = 3
              // Dst: (SXTW:i64 IntRegs:i32:$src1)
            /*SwitchType*/ 25,  MVT::i32,// ->24883
/*24858*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24870*/     OPC_EmitInteger, MVT::i32, 0, 
/*24873*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::MUX_ii), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (sext:i32 PredRegs:i1:$src1) - Complexity = 3
              // Dst: (MUX_ii:i32 PredRegs:i1:$src1, -1:i32, 0:i32)
            0, // EndSwitchType
          /*SwitchOpcode*/ 8,  TARGET_VAL(HexagonISD::BARRIER),// ->24895
/*24887*/   OPC_RecordNode,   // #0 = 'HexagonBARRIER' chained node
/*24888*/   OPC_EmitMergeInputChains1_0,
/*24889*/   OPC_MorphNodeTo, TARGET_VAL(Hexagon::BARRIER), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (HexagonBARRIER) - Complexity = 3
            // Dst: (BARRIER)
          /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::ANY_EXTEND),// ->24961
/*24898*/   OPC_RecordChild0, // #0 = $src1
/*24899*/   OPC_SwitchType /*2 cases */, 40,  MVT::i64,// ->24942
/*24902*/     OPC_Scope, 10, /*->24914*/ // 2 children in Scope
/*24904*/       OPC_CheckChild0Type, MVT::i32,
/*24906*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::SXTW), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (anyext:i64 IntRegs:i32:$src1) - Complexity = 3
                // Dst: (SXTW:i64 IntRegs:i32:$src1)
/*24914*/     /*Scope*/ 26, /*->24941*/
/*24915*/       OPC_CheckChild0Type, MVT::i1,
/*24917*/       OPC_EmitInteger, MVT::i32, 1, 
/*24920*/       OPC_EmitInteger, MVT::i32, 0, 
/*24923*/       OPC_EmitNode, TARGET_VAL(Hexagon::MUX_ii), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2,  // Results = #3 
/*24933*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::SXTW), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 3, 
                // Src: (anyext:i64 PredRegs:i1:$src1) - Complexity = 3
                // Dst: (SXTW:i64 (MUX_ii:i32 PredRegs:i1:$src1, 1:i32, 0:i32))
/*24941*/     0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::i32,// ->24960
/*24944*/     OPC_EmitInteger, MVT::i32, 1, 
/*24947*/     OPC_EmitInteger, MVT::i32, 0, 
/*24950*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::MUX_ii), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (anyext:i32 PredRegs:i1:$src1) - Complexity = 3
              // Dst: (MUX_ii:i32 PredRegs:i1:$src1, 1:i32, 0:i32)
            0, // EndSwitchType
          /*SwitchOpcode*/ 87,  TARGET_VAL(ISD::ZERO_EXTEND),// ->25051
/*24964*/   OPC_RecordChild0, // #0 = $src1
/*24965*/   OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->24984
/*24968*/     OPC_EmitInteger, MVT::i32, 1, 
/*24971*/     OPC_EmitInteger, MVT::i32, 0, 
/*24974*/     OPC_MorphNodeTo, TARGET_VAL(Hexagon::MUX_ii), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (zext:i32 PredRegs:i1:$src1) - Complexity = 3
              // Dst: (MUX_ii:i32 PredRegs:i1:$src1, 1:i32, 0:i32)
            /*SwitchType*/ 64,  MVT::i64,// ->25050
/*24986*/     OPC_Scope, 22, /*->25010*/ // 2 children in Scope
/*24988*/       OPC_CheckChild0Type, MVT::i32,
/*24990*/       OPC_EmitInteger, MVT::i32, 0, 
/*24993*/       OPC_EmitNode, TARGET_VAL(Hexagon::TFRI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2 
/*25001*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::COMBINE_rr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 0, 
                // Src: (zext:i64 IntRegs:i32:$src1) - Complexity = 3
                // Dst: (COMBINE_rr:i64 (TFRI:i32 0:i32), IntRegs:i32:$src1)
/*25010*/     /*Scope*/ 38, /*->25049*/
/*25011*/       OPC_CheckChild0Type, MVT::i1,
/*25013*/       OPC_EmitInteger, MVT::i32, 0, 
/*25016*/       OPC_EmitNode, TARGET_VAL(Hexagon::TFRI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2 
/*25024*/       OPC_EmitInteger, MVT::i32, 1, 
/*25027*/       OPC_EmitInteger, MVT::i32, 0, 
/*25030*/       OPC_EmitNode, TARGET_VAL(Hexagon::MUX_ii), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 3, 4,  // Results = #5 
/*25040*/       OPC_MorphNodeTo, TARGET_VAL(Hexagon::COMBINE_rr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 5, 
                // Src: (zext:i64 PredRegs:i1:$src1) - Complexity = 3
                // Dst: (COMBINE_rr:i64 (TFRI:i32 0:i32), (MUX_ii:i32 PredRegs:i1:$src1, 1:i32, 0:i32))
/*25049*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(HexagonISD::ARGEXTEND),// ->25067
/*25054*/   OPC_RecordChild0, // #0 = $src1
/*25055*/   OPC_CheckChild0Type, MVT::i32,
/*25057*/   OPC_CheckType, MVT::i32,
/*25059*/   OPC_MorphNodeTo, TARGET_VAL(Hexagon::ARGEXTEND), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (Hexagon_ARGEXTEND:i32 IntRegs:i32:$src1) - Complexity = 3
            // Dst: (ARGEXTEND:i32 IntRegs:i32:$src1)
          /*SwitchOpcode*/ 10,  TARGET_VAL(HexagonISD::BR_JT),// ->25080
/*25070*/   OPC_RecordNode,   // #0 = 'HexagonBR_JT' chained node
/*25071*/   OPC_RecordChild1, // #1 = $src
/*25072*/   OPC_EmitMergeInputChains1_0,
/*25073*/   OPC_MorphNodeTo, TARGET_VAL(Hexagon::BR_JT), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (HexagonBR_JT IntRegs:i32:$src) - Complexity = 3
            // Dst: (BR_JT IntRegs:i32:$src)
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 25082 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 146
  // #OPC_RecordNode                     = 26
  // #OPC_RecordChild                    = 1941
  // #OPC_RecordMemRef                   = 15
  // #OPC_CaptureGlueInput               = 4
  // #OPC_MoveChild                      = 524
  // #OPC_MoveParent                     = 1445
  // #OPC_CheckSame                      = 80
  // #OPC_CheckPatternPredicate          = 174
  // #OPC_CheckPredicate                 = 618
  // #OPC_CheckOpcode                    = 358
  // #OPC_SwitchOpcode                   = 26
  // #OPC_CheckType                      = 405
  // #OPC_SwitchType                     = 27
  // #OPC_CheckChildType                 = 77
  // #OPC_CheckInteger                   = 692
  // #OPC_CheckCondCode                  = 59
  // #OPC_CheckValueType                 = 4
  // #OPC_CheckComplexPat                = 57
  // #OPC_CheckAndImm                    = 12
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 13
  // #OPC_EmitInteger                    = 37
  // #OPC_EmitStringInteger              = 42
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 290
  // #OPC_EmitMergeInputChains           = 201
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 123
  // #OPC_EmitNodeXForm                  = 0
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 7
  // #OPC_MorphNodeTo                    = 1076

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (Subtarget.hasV3TOps());
  case 1: return (Subtarget.hasV2TOpsOnly());
  case 2: return (Subtarget.hasV4TOps()) && (Subtarget.useMemOps());
  case 3: return (Subtarget.hasV4TOps());
  }
}

bool CheckNodePredicate(SDNode *Node, unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_s12ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immS16 predicate - True if the immediate fits in a 16-bit sign extended
  // field.
  int64_t v = (int64_t)N->getSExtValue();
  return isInt<12>(v);

  }
  case 1: { // Predicate_s8ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // s8ImmPred predicate - True if the immediate fits in a 8-bit sign extended
  // field.
  int64_t v = (int64_t)N->getSExtValue();
  return isInt<8>(v);

  }
  case 2: { // Predicate_u16ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // u16ImmPred predicate - True if the immediate fits in a 16-bit unsigned
  // field.
  int64_t v = (int64_t)N->getSExtValue();
  return isUInt<16>(v);

  }
  case 3: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 4: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 5: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 6: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 7: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 8: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 9: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 10: { // Predicate_m6ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // m6ImmPred predicate - True if the immediate is negative and fits in
  // a 6-bit negative number.
  int64_t v = (int64_t)N->getSExtValue();
  return isInt<6>(v);

  }
  case 11: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 12: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 13: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 14: { // Predicate_u6_2ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // u6_2ImmPred predicate - True if the immediate fits in a 6-bit unsigned
  // field that is 2 bits alinged - multiple of 4.
  int64_t v = (int64_t)N->getSExtValue();
  return isShiftedUInt<6,2>(v);

  }
  case 15: { // Predicate_u6_1ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // u6_1ImmPred predicate - True if the immediate fits in a 6-bit unsigned
  // field that is 1 bit alinged - multiple of 2.
  int64_t v = (int64_t)N->getSExtValue();
  return isShiftedUInt<6,1>(v);

  }
  case 16: { // Predicate_u6_0ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // u6_0ImmPred predicate - True if the immediate fits in a 6-bit unsigned
  // field. Same as u6ImmPred.
  int64_t v = (int64_t)N->getSExtValue();
  return isUInt<6>(v);

  }
  case 17: { // Predicate_u2ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // u2ImmPred predicate - True if the immediate fits in a 2-bit unsigned
  // field.
  int64_t v = (int64_t)N->getSExtValue();
  return isUInt<2>(v);

  }
  case 18: { // Predicate_u6ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // u6ImmPred predicate - True if the immediate fits in a 6-bit unsigned
  // field.
  int64_t v = (int64_t)N->getSExtValue();
  return isUInt<6>(v);

  }
  case 19: { // Predicate_s11_3ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immS16 predicate - True if the immediate fits in a 16-bit sign extended
  // field.
  int64_t v = (int64_t)N->getSExtValue();
  return isShiftedInt<11,3>(v);

  }
  case 20: { // Predicate_s11_0ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immS16 predicate - True if the immediate fits in a 16-bit sign extended
  // field.
  int64_t v = (int64_t)N->getSExtValue();
  return isInt<11>(v);

  }
  case 21: { // Predicate_s11_1ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immS16 predicate - True if the immediate fits in a 16-bit sign extended
  // field.
  int64_t v = (int64_t)N->getSExtValue();
  return isShiftedInt<11,1>(v);

  }
  case 22: { // Predicate_s11_2ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immS16 predicate - True if the immediate fits in a 16-bit sign extended
  // field.
  int64_t v = (int64_t)N->getSExtValue();
  return isShiftedInt<11,2>(v);

  }
  case 23: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 24: { // Predicate_s4_3ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // s4_3ImmPred predicate - True if the immediate fits in a 4-bit sign extended
  // field that is a multiple of 8.
  int64_t v = (int64_t)N->getSExtValue();
  return isShiftedInt<4,3>(v);

  }
  case 25: { // Predicate_istore
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 26: { // Predicate_post_store
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::POST_INC || AM == ISD::POST_DEC;

  }
  case 27: { // Predicate_s4_0ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // s4_0ImmPred predicate - True if the immediate fits in a 4-bit sign extended
  // field.
  int64_t v = (int64_t)N->getSExtValue();
  return isInt<4>(v);

  }
  case 28: { // Predicate_itruncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 29: { // Predicate_post_truncst
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::POST_INC || AM == ISD::POST_DEC;

  }
  case 30: { // Predicate_post_truncsti8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 31: { // Predicate_s4_1ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // s4_1ImmPred predicate - True if the immediate fits in a 4-bit sign extended
  // field of 2.
  int64_t v = (int64_t)N->getSExtValue();
  return isShiftedInt<4,1>(v);

  }
  case 32: { // Predicate_post_truncsti16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 33: { // Predicate_s4_2ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // s4_2ImmPred predicate - True if the immediate fits in a 4-bit sign extended
  // field that is a multiple of 4.
  int64_t v = (int64_t)N->getSExtValue();
  return isShiftedInt<4,2>(v);

  }
  case 34: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 35: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 36: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 37: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 38: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 39: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 40: { // Predicate_zextloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 41: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 42: { // Predicate_sextloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 43: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 44: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 45: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 46: { // Predicate_u8ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // u8ImmPred predicate - True if the immediate fits in a 8-bit unsigned
  // field.
  int64_t v = (int64_t)N->getSExtValue();
  return isUInt<8>(v);

  }
  case 47: { // Predicate_s32_24ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // s32_24ImmPred predicate - True if the immediate fits in a 32-bit sign
  // extended field that is a multiple of 0x1000000.
  int64_t v = (int64_t)N->getSExtValue();
  return isShiftedInt<32,24>(v);

  }
  case 48: { // Predicate_u7ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // u7ImmPred predicate - True if the immediate fits in a 8-bit unsigned
  // field.
  int64_t v = (int64_t)N->getSExtValue();
  return isUInt<7>(v);

  }
  case 49: { // Predicate_u16_s8ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // u16_s8ImmPred predicate - True if the immediate fits in a 16-bit sign
  // extended s8 field.
  int64_t v = (int64_t)N->getSExtValue();
  return isShiftedUInt<16,8>(v);

  }
  case 50: { // Predicate_s32_16s8ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // s32_16s8ImmPred predicate - True if the immediate fits in a 32-bit sign
  // extended field that is a multiple of 0x10000.
  int64_t v = (int64_t)N->getSExtValue();
  return isShiftedInt<24,16>(v);

  }
  case 51: { // Predicate_u9ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // u9ImmPred predicate - True if the immediate fits in a 9-bit unsigned
  // field.
  int64_t v = (int64_t)N->getSExtValue();
  return isUInt<9>(v);

  }
  case 52: { // Predicate_s10ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // s10ImmPred predicate - True if the immediate fits in a 10-bit sign extended
  // field.
  int64_t v = (int64_t)N->getSExtValue();
  return isInt<10>(v);

  }
  case 53: { // Predicate_u5ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // u5ImmPred predicate - True if the immediate fits in a 5-bit unsigned
  // field.
  int64_t v = (int64_t)N->getSExtValue();
  return isUInt<5>(v);

  }
  case 54: { // Predicate_u3ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // u3ImmPred predicate - True if the immediate fits in a 3-bit unsigned
  // field.
  int64_t v = (int64_t)N->getSExtValue();
  return isUInt<3>(v);

  }
  case 55: { // Predicate_s6ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // s6ImmPred predicate - True if the immediate fits in a 6-bit sign extended
  // field.
  int64_t v = (int64_t)N->getSExtValue();
  return isInt<6>(v);

  }
  case 56: { // Predicate_s16ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immS16 predicate - True if the immediate fits in a 16-bit sign extended
  // field.
  int64_t v = (int64_t)N->getSExtValue();
  return isInt<16>(v);

  }
  case 57: { // Predicate_n8ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // n8ImmPred predicate - True if the immediate fits in a 8-bit signed
  // field.
  int64_t v = (int64_t)N->getSExtValue();
  return (-255 <= v && v <= 0);

  }
  case 58: { // Predicate_s9ImmPred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // s9ImmPred predicate - True if the immediate fits in a 9-bit sign extended
  // field.
  int64_t v = (int64_t)N->getSExtValue();
  return isInt<9>(v);

  }
  case 59: { // Predicate_s8Imm64Pred
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // s8ImmPred predicate - True if the immediate fits in a 8-bit sign extended
  // field.
  int64_t v = (int64_t)N->getSExtValue();
  return isInt<8>(v);

  }
  }
}

bool CheckComplexPattern(SDNode *Root, SDNode *Parent, SDValue N,
                         unsigned PatternNo,
         SmallVectorImpl<std::pair<SDValue, SDNode*> > &Result) {
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: llvm_unreachable("Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+2);
    return SelectADDRriU6_2(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectADDRriU6_1(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return SelectADDRriU6_0(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return SelectADDRriS11_2(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+2);
    return SelectADDRriS11_3(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 5:
    Result.resize(NextRes+2);
    return SelectADDRriS11_0(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 6:
    Result.resize(NextRes+2);
    return SelectADDRriS11_1(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 7:
    Result.resize(NextRes+2);
    return SelectADDRri(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

