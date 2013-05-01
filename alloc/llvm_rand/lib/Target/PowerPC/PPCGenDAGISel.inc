//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the PPC target
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
/*0*/     OPC_SwitchOpcode /*97 cases */, 33,  TARGET_VAL(ISD::PREFETCH),// ->37
/*4*/       OPC_RecordMemRef,
/*5*/       OPC_RecordNode,   // #0 = 'prefetch' chained node
/*6*/       OPC_RecordChild1, // #1 = $dst
/*7*/       OPC_MoveChild, 2,
/*9*/       OPC_CheckInteger, 0, 
/*11*/      OPC_CheckType, MVT::i32,
/*13*/      OPC_MoveParent,
/*14*/      OPC_MoveChild, 3,
/*16*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19*/      OPC_MoveParent,
/*20*/      OPC_MoveChild, 4,
/*22*/      OPC_CheckInteger, 1, 
/*24*/      OPC_MoveParent,
/*25*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*28*/      OPC_EmitMergeInputChains1_0,
/*29*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DCBT), 0|OPFL_Chain|OPFL_MemRefs,
                0/*#VTs*/, 2/*#Ops*/, 2, 3, 
            // Src: (prefetch xoaddr:iPTR:$dst, 0:i32, (imm:i32), 1:i32) - Complexity = 25
            // Dst: (DCBT xoaddr:iPTR:$dst)
          /*SwitchOpcode*/ 40,  TARGET_VAL(ISD::MEMBARRIER),// ->80
/*40*/      OPC_RecordNode,   // #0 = 'membarrier' chained node
/*41*/      OPC_MoveChild, 1,
/*43*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*46*/      OPC_CheckType, MVT::i32,
/*48*/      OPC_MoveParent,
/*49*/      OPC_MoveChild, 2,
/*51*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*54*/      OPC_MoveParent,
/*55*/      OPC_MoveChild, 3,
/*57*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*60*/      OPC_MoveParent,
/*61*/      OPC_MoveChild, 4,
/*63*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*66*/      OPC_MoveParent,
/*67*/      OPC_MoveChild, 5,
/*69*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*72*/      OPC_MoveParent,
/*73*/      OPC_EmitMergeInputChains1_0,
/*74*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (membarrier (imm:i32), (imm:i32), (imm:i32), (imm:i32), (imm:i32)) - Complexity = 18
            // Dst: (SYNC)
          /*SwitchOpcode*/ 73|128,4/*585*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->669
/*84*/      OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*85*/      OPC_MoveChild, 1,
/*87*/      OPC_Scope, 17, /*->106*/ // 21 children in Scope
/*89*/        OPC_CheckInteger, 92|128,7/*988*/, 
/*92*/        OPC_MoveParent,
/*93*/        OPC_RecordChild2, // #1 = $dst
/*94*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*97*/        OPC_EmitMergeInputChains1_0,
/*98*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBA), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 988:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBA xoaddr:iPTR:$dst)
/*106*/     /*Scope*/ 17, /*->124*/
/*107*/       OPC_CheckInteger, 93|128,7/*989*/, 
/*110*/       OPC_MoveParent,
/*111*/       OPC_RecordChild2, // #1 = $dst
/*112*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*115*/       OPC_EmitMergeInputChains1_0,
/*116*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBF), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 989:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBF xoaddr:iPTR:$dst)
/*124*/     /*Scope*/ 17, /*->142*/
/*125*/       OPC_CheckInteger, 94|128,7/*990*/, 
/*128*/       OPC_MoveParent,
/*129*/       OPC_RecordChild2, // #1 = $dst
/*130*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*133*/       OPC_EmitMergeInputChains1_0,
/*134*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBI), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 990:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBI xoaddr:iPTR:$dst)
/*142*/     /*Scope*/ 17, /*->160*/
/*143*/       OPC_CheckInteger, 95|128,7/*991*/, 
/*146*/       OPC_MoveParent,
/*147*/       OPC_RecordChild2, // #1 = $dst
/*148*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*151*/       OPC_EmitMergeInputChains1_0,
/*152*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 991:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBST xoaddr:iPTR:$dst)
/*160*/     /*Scope*/ 17, /*->178*/
/*161*/       OPC_CheckInteger, 96|128,7/*992*/, 
/*164*/       OPC_MoveParent,
/*165*/       OPC_RecordChild2, // #1 = $dst
/*166*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*169*/       OPC_EmitMergeInputChains1_0,
/*170*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBT), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 992:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBT xoaddr:iPTR:$dst)
/*178*/     /*Scope*/ 17, /*->196*/
/*179*/       OPC_CheckInteger, 97|128,7/*993*/, 
/*182*/       OPC_MoveParent,
/*183*/       OPC_RecordChild2, // #1 = $dst
/*184*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*187*/       OPC_EmitMergeInputChains1_0,
/*188*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBTST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 993:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBTST xoaddr:iPTR:$dst)
/*196*/     /*Scope*/ 17, /*->214*/
/*197*/       OPC_CheckInteger, 98|128,7/*994*/, 
/*200*/       OPC_MoveParent,
/*201*/       OPC_RecordChild2, // #1 = $dst
/*202*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*205*/       OPC_EmitMergeInputChains1_0,
/*206*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZ), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 994:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZ xoaddr:iPTR:$dst)
/*214*/     /*Scope*/ 17, /*->232*/
/*215*/       OPC_CheckInteger, 99|128,7/*995*/, 
/*218*/       OPC_MoveParent,
/*219*/       OPC_RecordChild2, // #1 = $dst
/*220*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*223*/       OPC_EmitMergeInputChains1_0,
/*224*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZL), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 995:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZL xoaddr:iPTR:$dst)
/*232*/     /*Scope*/ 19, /*->252*/
/*233*/       OPC_CheckInteger, 88|128,6/*856*/, 
/*236*/       OPC_MoveParent,
/*237*/       OPC_RecordChild2, // #1 = $rS
/*238*/       OPC_RecordChild3, // #2 = $dst
/*239*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*242*/       OPC_EmitMergeInputChains1_0,
/*243*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEBX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 856:iPTR, VRRC:v16i8:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEBX VRRC:v16i8:$rS, xoaddr:iPTR:$dst)
/*252*/     /*Scope*/ 19, /*->272*/
/*253*/       OPC_CheckInteger, 89|128,6/*857*/, 
/*256*/       OPC_MoveParent,
/*257*/       OPC_RecordChild2, // #1 = $rS
/*258*/       OPC_RecordChild3, // #2 = $dst
/*259*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*262*/       OPC_EmitMergeInputChains1_0,
/*263*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEHX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 857:iPTR, VRRC:v8i16:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEHX VRRC:v8i16:$rS, xoaddr:iPTR:$dst)
/*272*/     /*Scope*/ 19, /*->292*/
/*273*/       OPC_CheckInteger, 90|128,6/*858*/, 
/*276*/       OPC_MoveParent,
/*277*/       OPC_RecordChild2, // #1 = $rS
/*278*/       OPC_RecordChild3, // #2 = $dst
/*279*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*282*/       OPC_EmitMergeInputChains1_0,
/*283*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEWX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 858:iPTR, VRRC:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEWX VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*292*/     /*Scope*/ 19, /*->312*/
/*293*/       OPC_CheckInteger, 91|128,6/*859*/, 
/*296*/       OPC_MoveParent,
/*297*/       OPC_RecordChild2, // #1 = $rS
/*298*/       OPC_RecordChild3, // #2 = $dst
/*299*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*302*/       OPC_EmitMergeInputChains1_0,
/*303*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 859:iPTR, VRRC:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVX VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*312*/     /*Scope*/ 19, /*->332*/
/*313*/       OPC_CheckInteger, 92|128,6/*860*/, 
/*316*/       OPC_MoveParent,
/*317*/       OPC_RecordChild2, // #1 = $rS
/*318*/       OPC_RecordChild3, // #2 = $dst
/*319*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*322*/       OPC_EmitMergeInputChains1_0,
/*323*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVXL), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 860:iPTR, VRRC:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVXL VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*332*/     /*Scope*/ 33, /*->366*/
/*333*/       OPC_CheckInteger, 73|128,6/*841*/, 
/*336*/       OPC_MoveParent,
/*337*/       OPC_RecordChild2, // #1 = $STRM
/*338*/       OPC_MoveChild, 2,
/*340*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*343*/       OPC_MoveParent,
/*344*/       OPC_EmitMergeInputChains1_0,
/*345*/       OPC_EmitInteger, MVT::i32, 0, 
/*348*/       OPC_EmitConvertToTarget, 1,
/*350*/       OPC_EmitInteger, MVT::i32, 0, 
/*353*/       OPC_EmitInteger, MVT::i32, 0, 
/*356*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSS), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (intrinsic_void 841:iPTR, (imm:i32):$STRM) - Complexity = 11
              // Dst: (DSS 0:i32, (imm:i32):$STRM, 0:i32, 0:i32)
/*366*/     /*Scope*/ 61, /*->428*/
/*367*/       OPC_CheckInteger, 75|128,6/*843*/, 
/*370*/       OPC_MoveParent,
/*371*/       OPC_RecordChild2, // #1 = $rA
/*372*/       OPC_Scope, 26, /*->400*/ // 2 children in Scope
/*374*/         OPC_CheckChild2Type, MVT::i32,
/*376*/         OPC_RecordChild3, // #2 = $rB
/*377*/         OPC_RecordChild4, // #3 = $STRM
/*378*/         OPC_MoveChild, 4,
/*380*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*383*/         OPC_MoveParent,
/*384*/         OPC_EmitMergeInputChains1_0,
/*385*/         OPC_EmitInteger, MVT::i32, 0, 
/*388*/         OPC_EmitConvertToTarget, 3,
/*390*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 843:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST 0:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*400*/       /*Scope*/ 26, /*->427*/
/*401*/         OPC_CheckChild2Type, MVT::i64,
/*403*/         OPC_RecordChild3, // #2 = $rB
/*404*/         OPC_RecordChild4, // #3 = $STRM
/*405*/         OPC_MoveChild, 4,
/*407*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*410*/         OPC_MoveParent,
/*411*/         OPC_EmitMergeInputChains1_0,
/*412*/         OPC_EmitInteger, MVT::i32, 0, 
/*415*/         OPC_EmitConvertToTarget, 3,
/*417*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 843:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST64 0:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*427*/       0, /*End of Scope*/
/*428*/     /*Scope*/ 61, /*->490*/
/*429*/       OPC_CheckInteger, 78|128,6/*846*/, 
/*432*/       OPC_MoveParent,
/*433*/       OPC_RecordChild2, // #1 = $rA
/*434*/       OPC_Scope, 26, /*->462*/ // 2 children in Scope
/*436*/         OPC_CheckChild2Type, MVT::i32,
/*438*/         OPC_RecordChild3, // #2 = $rB
/*439*/         OPC_RecordChild4, // #3 = $STRM
/*440*/         OPC_MoveChild, 4,
/*442*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*445*/         OPC_MoveParent,
/*446*/         OPC_EmitMergeInputChains1_0,
/*447*/         OPC_EmitInteger, MVT::i32, 1, 
/*450*/         OPC_EmitConvertToTarget, 3,
/*452*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 846:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT 1:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*462*/       /*Scope*/ 26, /*->489*/
/*463*/         OPC_CheckChild2Type, MVT::i64,
/*465*/         OPC_RecordChild3, // #2 = $rB
/*466*/         OPC_RecordChild4, // #3 = $STRM
/*467*/         OPC_MoveChild, 4,
/*469*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*472*/         OPC_MoveParent,
/*473*/         OPC_EmitMergeInputChains1_0,
/*474*/         OPC_EmitInteger, MVT::i32, 1, 
/*477*/         OPC_EmitConvertToTarget, 3,
/*479*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 846:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT64 1:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*489*/       0, /*End of Scope*/
/*490*/     /*Scope*/ 61, /*->552*/
/*491*/       OPC_CheckInteger, 76|128,6/*844*/, 
/*494*/       OPC_MoveParent,
/*495*/       OPC_RecordChild2, // #1 = $rA
/*496*/       OPC_Scope, 26, /*->524*/ // 2 children in Scope
/*498*/         OPC_CheckChild2Type, MVT::i32,
/*500*/         OPC_RecordChild3, // #2 = $rB
/*501*/         OPC_RecordChild4, // #3 = $STRM
/*502*/         OPC_MoveChild, 4,
/*504*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*507*/         OPC_MoveParent,
/*508*/         OPC_EmitMergeInputChains1_0,
/*509*/         OPC_EmitInteger, MVT::i32, 0, 
/*512*/         OPC_EmitConvertToTarget, 3,
/*514*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 844:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST 0:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*524*/       /*Scope*/ 26, /*->551*/
/*525*/         OPC_CheckChild2Type, MVT::i64,
/*527*/         OPC_RecordChild3, // #2 = $rB
/*528*/         OPC_RecordChild4, // #3 = $STRM
/*529*/         OPC_MoveChild, 4,
/*531*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*534*/         OPC_MoveParent,
/*535*/         OPC_EmitMergeInputChains1_0,
/*536*/         OPC_EmitInteger, MVT::i32, 0, 
/*539*/         OPC_EmitConvertToTarget, 3,
/*541*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 844:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST64 0:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*551*/       0, /*End of Scope*/
/*552*/     /*Scope*/ 61, /*->614*/
/*553*/       OPC_CheckInteger, 77|128,6/*845*/, 
/*556*/       OPC_MoveParent,
/*557*/       OPC_RecordChild2, // #1 = $rA
/*558*/       OPC_Scope, 26, /*->586*/ // 2 children in Scope
/*560*/         OPC_CheckChild2Type, MVT::i32,
/*562*/         OPC_RecordChild3, // #2 = $rB
/*563*/         OPC_RecordChild4, // #3 = $STRM
/*564*/         OPC_MoveChild, 4,
/*566*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*569*/         OPC_MoveParent,
/*570*/         OPC_EmitMergeInputChains1_0,
/*571*/         OPC_EmitInteger, MVT::i32, 1, 
/*574*/         OPC_EmitConvertToTarget, 3,
/*576*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 845:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT 1:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*586*/       /*Scope*/ 26, /*->613*/
/*587*/         OPC_CheckChild2Type, MVT::i64,
/*589*/         OPC_RecordChild3, // #2 = $rB
/*590*/         OPC_RecordChild4, // #3 = $STRM
/*591*/         OPC_MoveChild, 4,
/*593*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*596*/         OPC_MoveParent,
/*597*/         OPC_EmitMergeInputChains1_0,
/*598*/         OPC_EmitInteger, MVT::i32, 1, 
/*601*/         OPC_EmitConvertToTarget, 3,
/*603*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 845:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT64 1:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*613*/       0, /*End of Scope*/
/*614*/     /*Scope*/ 11, /*->626*/
/*615*/       OPC_CheckInteger, 100|128,7/*996*/, 
/*618*/       OPC_MoveParent,
/*619*/       OPC_EmitMergeInputChains1_0,
/*620*/       OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (intrinsic_void 996:iPTR) - Complexity = 8
              // Dst: (SYNC)
/*626*/     /*Scope*/ 13, /*->640*/
/*627*/       OPC_CheckInteger, 87|128,6/*855*/, 
/*630*/       OPC_MoveParent,
/*631*/       OPC_RecordChild2, // #1 = $vB
/*632*/       OPC_EmitMergeInputChains1_0,
/*633*/       OPC_MorphNodeTo, TARGET_VAL(PPC::MTVSCR), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 855:iPTR, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (MTVSCR VRRC:v4i32:$vB)
/*640*/     /*Scope*/ 27, /*->668*/
/*641*/       OPC_CheckInteger, 74|128,6/*842*/, 
/*644*/       OPC_MoveParent,
/*645*/       OPC_EmitMergeInputChains1_0,
/*646*/       OPC_EmitInteger, MVT::i32, 1, 
/*649*/       OPC_EmitInteger, MVT::i32, 0, 
/*652*/       OPC_EmitInteger, MVT::i32, 0, 
/*655*/       OPC_EmitInteger, MVT::i32, 0, 
/*658*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSSALL), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 1, 2, 3, 4, 
              // Src: (intrinsic_void 842:iPTR) - Complexity = 8
              // Dst: (DSSALL 1:i32, 0:i32, 0:i32, 0:i32)
/*668*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 32|128,4/*544*/,  TARGET_VAL(ISD::ADD),// ->1217
/*673*/     OPC_Scope, 49|128,1/*177*/, /*->853*/ // 3 children in Scope
/*676*/       OPC_RecordChild0, // #0 = $rA
/*677*/       OPC_MoveChild, 1,
/*679*/       OPC_SwitchOpcode /*2 cases */, 24,  TARGET_VAL(PPCISD::Lo),// ->707
/*683*/         OPC_RecordChild0, // #1 = $sym
/*684*/         OPC_MoveChild, 0,
/*686*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*689*/         OPC_MoveParent,
/*690*/         OPC_MoveChild, 1,
/*692*/         OPC_CheckInteger, 0, 
/*694*/         OPC_MoveParent,
/*695*/         OPC_MoveParent,
/*696*/         OPC_CheckType, MVT::i32,
/*698*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GPRC:i32:$rA, (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32)) - Complexity = 14
                // Dst: (LA:i32 GPRC:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 13|128,1/*141*/,  TARGET_VAL(PPCISD::Hi),// ->852
/*711*/         OPC_RecordChild0, // #1 = $g
/*712*/         OPC_MoveChild, 0,
/*714*/         OPC_SwitchOpcode /*4 cases */, 31,  TARGET_VAL(ISD::TargetGlobalAddress),// ->749
/*718*/           OPC_MoveParent,
/*719*/           OPC_MoveChild, 1,
/*721*/           OPC_CheckInteger, 0, 
/*723*/           OPC_MoveParent,
/*724*/           OPC_MoveParent,
/*725*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->737
/*728*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tglobaladdr:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tglobaladdr:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->748
/*739*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tglobaladdr:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tglobaladdr:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetConstantPool),// ->783
/*752*/           OPC_MoveParent,
/*753*/           OPC_MoveChild, 1,
/*755*/           OPC_CheckInteger, 0, 
/*757*/           OPC_MoveParent,
/*758*/           OPC_MoveParent,
/*759*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->771
/*762*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tconstpool:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tconstpool:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->782
/*773*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tconstpool:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tconstpool:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetJumpTable),// ->817
/*786*/           OPC_MoveParent,
/*787*/           OPC_MoveChild, 1,
/*789*/           OPC_CheckInteger, 0, 
/*791*/           OPC_MoveParent,
/*792*/           OPC_MoveParent,
/*793*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->805
/*796*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tjumptable:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tjumptable:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->816
/*807*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tjumptable:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tjumptable:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetBlockAddress),// ->851
/*820*/           OPC_MoveParent,
/*821*/           OPC_MoveChild, 1,
/*823*/           OPC_CheckInteger, 0, 
/*825*/           OPC_MoveParent,
/*826*/           OPC_MoveParent,
/*827*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->839
/*830*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tblockaddress:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tblockaddress:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->850
/*841*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tblockaddress:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tblockaddress:i64):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*853*/     /*Scope*/ 53|128,1/*181*/, /*->1036*/
/*855*/       OPC_MoveChild, 0,
/*857*/       OPC_SwitchOpcode /*2 cases */, 25,  TARGET_VAL(PPCISD::Lo),// ->886
/*861*/         OPC_RecordChild0, // #0 = $sym
/*862*/         OPC_MoveChild, 0,
/*864*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*867*/         OPC_MoveParent,
/*868*/         OPC_MoveChild, 1,
/*870*/         OPC_CheckInteger, 0, 
/*872*/         OPC_MoveParent,
/*873*/         OPC_MoveParent,
/*874*/         OPC_RecordChild1, // #1 = $rA
/*875*/         OPC_CheckType, MVT::i32,
/*877*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32), GPRC:i32:$rA) - Complexity = 14
                // Dst: (LA:i32 GPRC:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 17|128,1/*145*/,  TARGET_VAL(PPCISD::Hi),// ->1035
/*890*/         OPC_RecordChild0, // #0 = $g
/*891*/         OPC_MoveChild, 0,
/*893*/         OPC_SwitchOpcode /*4 cases */, 32,  TARGET_VAL(ISD::TargetGlobalAddress),// ->929
/*897*/           OPC_MoveParent,
/*898*/           OPC_MoveChild, 1,
/*900*/           OPC_CheckInteger, 0, 
/*902*/           OPC_MoveParent,
/*903*/           OPC_MoveParent,
/*904*/           OPC_RecordChild1, // #1 = $in
/*905*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->917
/*908*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tglobaladdr:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tglobaladdr:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->928
/*919*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tglobaladdr:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tglobaladdr:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetConstantPool),// ->964
/*932*/           OPC_MoveParent,
/*933*/           OPC_MoveChild, 1,
/*935*/           OPC_CheckInteger, 0, 
/*937*/           OPC_MoveParent,
/*938*/           OPC_MoveParent,
/*939*/           OPC_RecordChild1, // #1 = $in
/*940*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->952
/*943*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tconstpool:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tconstpool:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->963
/*954*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tconstpool:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tconstpool:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetJumpTable),// ->999
/*967*/           OPC_MoveParent,
/*968*/           OPC_MoveChild, 1,
/*970*/           OPC_CheckInteger, 0, 
/*972*/           OPC_MoveParent,
/*973*/           OPC_MoveParent,
/*974*/           OPC_RecordChild1, // #1 = $in
/*975*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->987
/*978*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tjumptable:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tjumptable:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->998
/*989*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tjumptable:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tjumptable:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetBlockAddress),// ->1034
/*1002*/          OPC_MoveParent,
/*1003*/          OPC_MoveChild, 1,
/*1005*/          OPC_CheckInteger, 0, 
/*1007*/          OPC_MoveParent,
/*1008*/          OPC_MoveParent,
/*1009*/          OPC_RecordChild1, // #1 = $in
/*1010*/          OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->1022
/*1013*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tblockaddress:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tblockaddress:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->1033
/*1024*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tblockaddress:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tblockaddress:i32):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*1036*/    /*Scope*/ 50|128,1/*178*/, /*->1216*/
/*1038*/      OPC_RecordChild0, // #0 = $rA
/*1039*/      OPC_RecordChild1, // #1 = $imm
/*1040*/      OPC_Scope, 113, /*->1155*/ // 6 children in Scope
/*1042*/        OPC_MoveChild, 1,
/*1044*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1047*/        OPC_Scope, 16, /*->1065*/ // 5 children in Scope
/*1049*/          OPC_CheckPredicate, 0, // Predicate_immSExt16
/*1051*/          OPC_MoveParent,
/*1052*/          OPC_CheckType, MVT::i32,
/*1054*/          OPC_EmitConvertToTarget, 1,
/*1056*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                  // Dst: (ADDI:i32 GPRC:i32:$rA, (imm:i32):$imm)
/*1065*/        /*Scope*/ 19, /*->1085*/
/*1066*/          OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1068*/          OPC_MoveParent,
/*1069*/          OPC_CheckType, MVT::i32,
/*1071*/          OPC_EmitConvertToTarget, 1,
/*1073*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*1076*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (ADDIS:i32 GPRC:i32:$rA, (HI16:i32 (imm:i32):$imm))
/*1085*/        /*Scope*/ 16, /*->1102*/
/*1086*/          OPC_CheckPredicate, 0, // Predicate_immSExt16
/*1088*/          OPC_MoveParent,
/*1089*/          OPC_CheckType, MVT::i64,
/*1091*/          OPC_EmitConvertToTarget, 1,
/*1093*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                  // Dst: (ADDI8:i64 G8RC:i64:$rA, (imm:i64):$imm)
/*1102*/        /*Scope*/ 19, /*->1122*/
/*1103*/          OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1105*/          OPC_MoveParent,
/*1106*/          OPC_CheckType, MVT::i64,
/*1108*/          OPC_EmitConvertToTarget, 1,
/*1110*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*1113*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (ADDIS8:i64 G8RC:i64:$rA, (HI16:i64 (imm:i64):$imm))
/*1122*/        /*Scope*/ 31, /*->1154*/
/*1123*/          OPC_MoveParent,
/*1124*/          OPC_CheckType, MVT::i32,
/*1126*/          OPC_EmitConvertToTarget, 1,
/*1128*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*1131*/          OPC_EmitNode, TARGET_VAL(PPC::ADDI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4 
/*1140*/          OPC_EmitConvertToTarget, 1,
/*1142*/          OPC_EmitNodeXForm, 2, 5, // HA16
/*1145*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (add:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ADDIS:i32 (ADDI:i32 GPRC:i32:$in, (LO16:i32 (imm:i32):$imm)), (HA16:i32 (imm:i32):$imm))
/*1154*/        0, /*End of Scope*/
/*1155*/      /*Scope*/ 11, /*->1167*/
/*1156*/        OPC_CheckType, MVT::i32,
/*1158*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADD4), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
                // Dst: (ADD4:i32 GPRC:i32:$rA, GPRC:i32:$rB)
/*1167*/      /*Scope*/ 11, /*->1179*/
/*1168*/        OPC_CheckType, MVT::i64,
/*1170*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
                // Dst: (ADD8:i64 G8RC:i64:$rA, G8RC:i64:$rB)
/*1179*/      /*Scope*/ 11, /*->1191*/
/*1180*/        OPC_CheckType, MVT::v16i8,
/*1182*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (add:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
                // Dst: (VADDUBM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*1191*/      /*Scope*/ 11, /*->1203*/
/*1192*/        OPC_CheckType, MVT::v8i16,
/*1194*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHM), 0,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                // Src: (add:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
                // Dst: (VADDUHM:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*1203*/      /*Scope*/ 11, /*->1215*/
/*1204*/        OPC_CheckType, MVT::v4i32,
/*1206*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWM), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
                // Dst: (VADDUWM:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*1215*/      0, /*End of Scope*/
/*1216*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 72|128,6/*840*/,  TARGET_VAL(ISD::LOAD),// ->2061
/*1221*/    OPC_RecordMemRef,
/*1222*/    OPC_RecordNode,   // #0 = 'ld' chained node
/*1223*/    OPC_RecordChild1, // #1 = $src
/*1224*/    OPC_CheckPredicate, 2, // Predicate_unindexedload
/*1226*/    OPC_Scope, 19, /*->1247*/ // 18 children in Scope
/*1228*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1230*/      OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1232*/      OPC_CheckType, MVT::i32,
/*1234*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1237*/      OPC_EmitMergeInputChains1_0,
/*1238*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1247*/    /*Scope*/ 19, /*->1267*/
/*1248*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1250*/      OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1252*/      OPC_CheckType, MVT::i32,
/*1254*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1257*/      OPC_EmitMergeInputChains1_0,
/*1258*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHA), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHA:i32 iaddr:iPTR:$src)
/*1267*/    /*Scope*/ 19, /*->1287*/
/*1268*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1270*/      OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1272*/      OPC_CheckType, MVT::i32,
/*1274*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1277*/      OPC_EmitMergeInputChains1_0,
/*1278*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1287*/    /*Scope*/ 17, /*->1305*/
/*1288*/      OPC_CheckPredicate, 8, // Predicate_load
/*1290*/      OPC_CheckType, MVT::i32,
/*1292*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1295*/      OPC_EmitMergeInputChains1_0,
/*1296*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZ:i32 iaddr:iPTR:$src)
/*1305*/    /*Scope*/ 19, /*->1325*/
/*1306*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1308*/      OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1310*/      OPC_CheckType, MVT::i32,
/*1312*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1315*/      OPC_EmitMergeInputChains1_0,
/*1316*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1325*/    /*Scope*/ 19, /*->1345*/
/*1326*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1328*/      OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1330*/      OPC_CheckType, MVT::i32,
/*1332*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1335*/      OPC_EmitMergeInputChains1_0,
/*1336*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHAX:i32 xaddr:iPTR:$src)
/*1345*/    /*Scope*/ 19, /*->1365*/
/*1346*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1348*/      OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1350*/      OPC_CheckType, MVT::i32,
/*1352*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1355*/      OPC_EmitMergeInputChains1_0,
/*1356*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1365*/    /*Scope*/ 17, /*->1383*/
/*1366*/      OPC_CheckPredicate, 8, // Predicate_load
/*1368*/      OPC_CheckType, MVT::i32,
/*1370*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1373*/      OPC_EmitMergeInputChains1_0,
/*1374*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZX:i32 xaddr:iPTR:$src)
/*1383*/    /*Scope*/ 36, /*->1420*/
/*1384*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1386*/      OPC_CheckPredicate, 9, // Predicate_zextloadi1
/*1388*/      OPC_CheckType, MVT::i32,
/*1390*/      OPC_Scope, 13, /*->1405*/ // 2 children in Scope
/*1392*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1395*/        OPC_EmitMergeInputChains1_0,
/*1396*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1405*/      /*Scope*/ 13, /*->1419*/
/*1406*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1409*/        OPC_EmitMergeInputChains1_0,
/*1410*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1419*/      0, /*End of Scope*/
/*1420*/    /*Scope*/ 105, /*->1526*/
/*1421*/      OPC_CheckPredicate, 10, // Predicate_extload
/*1423*/      OPC_CheckType, MVT::i32,
/*1425*/      OPC_Scope, 32, /*->1459*/ // 3 children in Scope
/*1427*/        OPC_CheckPredicate, 11, // Predicate_extloadi1
/*1429*/        OPC_Scope, 13, /*->1444*/ // 2 children in Scope
/*1431*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1434*/          OPC_EmitMergeInputChains1_0,
/*1435*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1444*/        /*Scope*/ 13, /*->1458*/
/*1445*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1448*/          OPC_EmitMergeInputChains1_0,
/*1449*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1458*/        0, /*End of Scope*/
/*1459*/      /*Scope*/ 32, /*->1492*/
/*1460*/        OPC_CheckPredicate, 12, // Predicate_extloadi8
/*1462*/        OPC_Scope, 13, /*->1477*/ // 2 children in Scope
/*1464*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1467*/          OPC_EmitMergeInputChains1_0,
/*1468*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1477*/        /*Scope*/ 13, /*->1491*/
/*1478*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1481*/          OPC_EmitMergeInputChains1_0,
/*1482*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1491*/        0, /*End of Scope*/
/*1492*/      /*Scope*/ 32, /*->1525*/
/*1493*/        OPC_CheckPredicate, 13, // Predicate_extloadi16
/*1495*/        OPC_Scope, 13, /*->1510*/ // 2 children in Scope
/*1497*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1500*/          OPC_EmitMergeInputChains1_0,
/*1501*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1510*/        /*Scope*/ 13, /*->1524*/
/*1511*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1514*/          OPC_EmitMergeInputChains1_0,
/*1515*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1524*/        0, /*End of Scope*/
/*1525*/      0, /*End of Scope*/
/*1526*/    /*Scope*/ 70, /*->1597*/
/*1527*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1529*/      OPC_CheckType, MVT::i64,
/*1531*/      OPC_Scope, 15, /*->1548*/ // 4 children in Scope
/*1533*/        OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1535*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1538*/        OPC_EmitMergeInputChains1_0,
/*1539*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHA8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHA8:i64 iaddr:iPTR:$src)
/*1548*/      /*Scope*/ 15, /*->1564*/
/*1549*/        OPC_CheckPredicate, 14, // Predicate_sextloadi32
/*1551*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*1554*/        OPC_EmitMergeInputChains1_0,
/*1555*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWA), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LWA:i64 ixaddr:iPTR:$src)
/*1564*/      /*Scope*/ 15, /*->1580*/
/*1565*/        OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1567*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1570*/        OPC_EmitMergeInputChains1_0,
/*1571*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHAX8:i64 xaddr:iPTR:$src)
/*1580*/      /*Scope*/ 15, /*->1596*/
/*1581*/        OPC_CheckPredicate, 14, // Predicate_sextloadi32
/*1583*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1586*/        OPC_EmitMergeInputChains1_0,
/*1587*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWAX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LWAX:i64 xaddr:iPTR:$src)
/*1596*/      0, /*End of Scope*/
/*1597*/    /*Scope*/ 102, /*->1700*/
/*1598*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1600*/      OPC_CheckType, MVT::i64,
/*1602*/      OPC_Scope, 15, /*->1619*/ // 6 children in Scope
/*1604*/        OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1606*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1609*/        OPC_EmitMergeInputChains1_0,
/*1610*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1619*/      /*Scope*/ 15, /*->1635*/
/*1620*/        OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1622*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1625*/        OPC_EmitMergeInputChains1_0,
/*1626*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1635*/      /*Scope*/ 15, /*->1651*/
/*1636*/        OPC_CheckPredicate, 15, // Predicate_zextloadi32
/*1638*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1641*/        OPC_EmitMergeInputChains1_0,
/*1642*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1651*/      /*Scope*/ 15, /*->1667*/
/*1652*/        OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1654*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1657*/        OPC_EmitMergeInputChains1_0,
/*1658*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1667*/      /*Scope*/ 15, /*->1683*/
/*1668*/        OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1670*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1673*/        OPC_EmitMergeInputChains1_0,
/*1674*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1683*/      /*Scope*/ 15, /*->1699*/
/*1684*/        OPC_CheckPredicate, 15, // Predicate_zextloadi32
/*1686*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1689*/        OPC_EmitMergeInputChains1_0,
/*1690*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1699*/      0, /*End of Scope*/
/*1700*/    /*Scope*/ 34, /*->1735*/
/*1701*/      OPC_CheckPredicate, 8, // Predicate_load
/*1703*/      OPC_CheckType, MVT::i64,
/*1705*/      OPC_Scope, 13, /*->1720*/ // 2 children in Scope
/*1707*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*1710*/        OPC_EmitMergeInputChains1_0,
/*1711*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LD:i64 ixaddr:iPTR:$src)
/*1720*/      /*Scope*/ 13, /*->1734*/
/*1721*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1724*/        OPC_EmitMergeInputChains1_0,
/*1725*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDX:i64 xaddr:iPTR:$src)
/*1734*/      0, /*End of Scope*/
/*1735*/    /*Scope*/ 36, /*->1772*/
/*1736*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1738*/      OPC_CheckPredicate, 9, // Predicate_zextloadi1
/*1740*/      OPC_CheckType, MVT::i64,
/*1742*/      OPC_Scope, 13, /*->1757*/ // 2 children in Scope
/*1744*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1747*/        OPC_EmitMergeInputChains1_0,
/*1748*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1757*/      /*Scope*/ 13, /*->1771*/
/*1758*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1761*/        OPC_EmitMergeInputChains1_0,
/*1762*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1771*/      0, /*End of Scope*/
/*1772*/    /*Scope*/ 10|128,1/*138*/, /*->1912*/
/*1774*/      OPC_CheckPredicate, 10, // Predicate_extload
/*1776*/      OPC_CheckType, MVT::i64,
/*1778*/      OPC_Scope, 32, /*->1812*/ // 4 children in Scope
/*1780*/        OPC_CheckPredicate, 11, // Predicate_extloadi1
/*1782*/        OPC_Scope, 13, /*->1797*/ // 2 children in Scope
/*1784*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1787*/          OPC_EmitMergeInputChains1_0,
/*1788*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1797*/        /*Scope*/ 13, /*->1811*/
/*1798*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1801*/          OPC_EmitMergeInputChains1_0,
/*1802*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1811*/        0, /*End of Scope*/
/*1812*/      /*Scope*/ 32, /*->1845*/
/*1813*/        OPC_CheckPredicate, 12, // Predicate_extloadi8
/*1815*/        OPC_Scope, 13, /*->1830*/ // 2 children in Scope
/*1817*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1820*/          OPC_EmitMergeInputChains1_0,
/*1821*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1830*/        /*Scope*/ 13, /*->1844*/
/*1831*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1834*/          OPC_EmitMergeInputChains1_0,
/*1835*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1844*/        0, /*End of Scope*/
/*1845*/      /*Scope*/ 32, /*->1878*/
/*1846*/        OPC_CheckPredicate, 13, // Predicate_extloadi16
/*1848*/        OPC_Scope, 13, /*->1863*/ // 2 children in Scope
/*1850*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1853*/          OPC_EmitMergeInputChains1_0,
/*1854*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1863*/        /*Scope*/ 13, /*->1877*/
/*1864*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1867*/          OPC_EmitMergeInputChains1_0,
/*1868*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1877*/        0, /*End of Scope*/
/*1878*/      /*Scope*/ 32, /*->1911*/
/*1879*/        OPC_CheckPredicate, 16, // Predicate_extloadi32
/*1881*/        OPC_Scope, 13, /*->1896*/ // 2 children in Scope
/*1883*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1886*/          OPC_EmitMergeInputChains1_0,
/*1887*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1896*/        /*Scope*/ 13, /*->1910*/
/*1897*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1900*/          OPC_EmitMergeInputChains1_0,
/*1901*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1910*/        0, /*End of Scope*/
/*1911*/      0, /*End of Scope*/
/*1912*/    /*Scope*/ 68, /*->1981*/
/*1913*/      OPC_CheckPredicate, 8, // Predicate_load
/*1915*/      OPC_SwitchType /*2 cases */, 30,  MVT::f32,// ->1948
/*1918*/        OPC_Scope, 13, /*->1933*/ // 2 children in Scope
/*1920*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1923*/          OPC_EmitMergeInputChains1_0,
/*1924*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFS), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFS:f32 iaddr:iPTR:$src)
/*1933*/        /*Scope*/ 13, /*->1947*/
/*1934*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1937*/          OPC_EmitMergeInputChains1_0,
/*1938*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFSX:f32 xaddr:iPTR:$src)
/*1947*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->1980
/*1950*/        OPC_Scope, 13, /*->1965*/ // 2 children in Scope
/*1952*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1955*/          OPC_EmitMergeInputChains1_0,
/*1956*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFD:f64 iaddr:iPTR:$src)
/*1965*/        /*Scope*/ 13, /*->1979*/
/*1966*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1969*/          OPC_EmitMergeInputChains1_0,
/*1970*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFDX:f64 xaddr:iPTR:$src)
/*1979*/        0, /*End of Scope*/
              0, // EndSwitchType
/*1981*/    /*Scope*/ 60, /*->2042*/
/*1982*/      OPC_CheckPredicate, 10, // Predicate_extload
/*1984*/      OPC_CheckPredicate, 17, // Predicate_extloadf32
/*1986*/      OPC_CheckType, MVT::f64,
/*1988*/      OPC_Scope, 25, /*->2015*/ // 2 children in Scope
/*1990*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1993*/        OPC_EmitMergeInputChains1_0,
/*1994*/        OPC_EmitNode, TARGET_VAL(PPC::LFS), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*2003*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*2006*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFS:f32 iaddr:iPTR:$src), F8RC:f64)
/*2015*/      /*Scope*/ 25, /*->2041*/
/*2016*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2019*/        OPC_EmitMergeInputChains1_0,
/*2020*/        OPC_EmitNode, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*2029*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*2032*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFSX:f32 xaddr:iPTR:$src), F8RC:f64)
/*2041*/      0, /*End of Scope*/
/*2042*/    /*Scope*/ 17, /*->2060*/
/*2043*/      OPC_CheckPredicate, 8, // Predicate_load
/*2045*/      OPC_CheckType, MVT::v4i32,
/*2047*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*2050*/      OPC_EmitMergeInputChains1_0,
/*2051*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:v4i32 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*2060*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 29|128,4/*541*/,  TARGET_VAL(ISD::STORE),// ->2606
/*2065*/    OPC_RecordMemRef,
/*2066*/    OPC_RecordNode,   // #0 = 'st' chained node
/*2067*/    OPC_RecordChild1, // #1 = $rS
/*2068*/    OPC_Scope, 52|128,1/*180*/, /*->2251*/ // 5 children in Scope
/*2071*/      OPC_CheckChild1Type, MVT::i32,
/*2073*/      OPC_RecordChild2, // #2 = $src
/*2074*/      OPC_Scope, 110, /*->2186*/ // 2 children in Scope
/*2076*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2078*/        OPC_Scope, 36, /*->2116*/ // 4 children in Scope
/*2080*/          OPC_CheckPredicate, 19, // Predicate_truncstore
/*2082*/          OPC_Scope, 15, /*->2099*/ // 2 children in Scope
/*2084*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2086*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2089*/            OPC_EmitMergeInputChains1_0,
/*2090*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB GPRC:i32:$rS, iaddr:iPTR:$src)
/*2099*/          /*Scope*/ 15, /*->2115*/
/*2100*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2102*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2105*/            OPC_EmitMergeInputChains1_0,
/*2106*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH GPRC:i32:$rS, iaddr:iPTR:$src)
/*2115*/          0, /*End of Scope*/
/*2116*/        /*Scope*/ 15, /*->2132*/
/*2117*/          OPC_CheckPredicate, 22, // Predicate_store
/*2119*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2122*/          OPC_EmitMergeInputChains1_0,
/*2123*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STW), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st GPRC:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STW GPRC:i32:$rS, iaddr:iPTR:$src)
/*2132*/        /*Scope*/ 36, /*->2169*/
/*2133*/          OPC_CheckPredicate, 19, // Predicate_truncstore
/*2135*/          OPC_Scope, 15, /*->2152*/ // 2 children in Scope
/*2137*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2139*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2142*/            OPC_EmitMergeInputChains1_0,
/*2143*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX GPRC:i32:$rS, xaddr:iPTR:$dst)
/*2152*/          /*Scope*/ 15, /*->2168*/
/*2153*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2155*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2158*/            OPC_EmitMergeInputChains1_0,
/*2159*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX GPRC:i32:$rS, xaddr:iPTR:$dst)
/*2168*/          0, /*End of Scope*/
/*2169*/        /*Scope*/ 15, /*->2185*/
/*2170*/          OPC_CheckPredicate, 22, // Predicate_store
/*2172*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2175*/          OPC_EmitMergeInputChains1_0,
/*2176*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st GPRC:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STWX GPRC:i32:$rS, xaddr:iPTR:$dst)
/*2185*/        0, /*End of Scope*/
/*2186*/      /*Scope*/ 63, /*->2250*/
/*2187*/        OPC_RecordChild3, // #3 = $ptroff
/*2188*/        OPC_Scope, 40, /*->2230*/ // 2 children in Scope
/*2190*/          OPC_CheckPredicate, 23, // Predicate_itruncstore
/*2192*/          OPC_CheckPredicate, 24, // Predicate_pre_truncst
/*2194*/          OPC_Scope, 16, /*->2212*/ // 2 children in Scope
/*2196*/            OPC_CheckPredicate, 25, // Predicate_pre_truncsti8
/*2198*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2201*/            OPC_EmitMergeInputChains1_0,
/*2202*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU:iPTR GPRC:i32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2212*/          /*Scope*/ 16, /*->2229*/
/*2213*/            OPC_CheckPredicate, 26, // Predicate_pre_truncsti16
/*2215*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2218*/            OPC_EmitMergeInputChains1_0,
/*2219*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU:iPTR GPRC:i32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2229*/          0, /*End of Scope*/
/*2230*/        /*Scope*/ 18, /*->2249*/
/*2231*/          OPC_CheckPredicate, 27, // Predicate_istore
/*2233*/          OPC_CheckPredicate, 28, // Predicate_pre_store
/*2235*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2238*/          OPC_EmitMergeInputChains1_0,
/*2239*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STWU:iPTR GPRC:i32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2249*/        0, /*End of Scope*/
/*2250*/      0, /*End of Scope*/
/*2251*/    /*Scope*/ 60, /*->2312*/
/*2252*/      OPC_CheckChild1Type, MVT::f32,
/*2254*/      OPC_RecordChild2, // #2 = $dst
/*2255*/      OPC_Scope, 34, /*->2291*/ // 2 children in Scope
/*2257*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2259*/        OPC_CheckPredicate, 22, // Predicate_store
/*2261*/        OPC_Scope, 13, /*->2276*/ // 2 children in Scope
/*2263*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2266*/          OPC_EmitMergeInputChains1_0,
/*2267*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFS), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F4RC:f32:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFS F4RC:f32:$rS, iaddr:iPTR:$dst)
/*2276*/        /*Scope*/ 13, /*->2290*/
/*2277*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2280*/          OPC_EmitMergeInputChains1_0,
/*2281*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F4RC:f32:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFSX F4RC:f32:$frS, xaddr:iPTR:$dst)
/*2290*/        0, /*End of Scope*/
/*2291*/      /*Scope*/ 19, /*->2311*/
/*2292*/        OPC_RecordChild3, // #3 = $ptroff
/*2293*/        OPC_CheckPredicate, 27, // Predicate_istore
/*2295*/        OPC_CheckPredicate, 28, // Predicate_pre_store
/*2297*/        OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2300*/        OPC_EmitMergeInputChains1_0,
/*2301*/        OPC_MorphNodeTo, TARGET_VAL(PPC::STFSU), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                // Src: (ist:iPTR F4RC:f32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                // Dst: (STFSU:iPTR F4RC:f32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2311*/      0, /*End of Scope*/
/*2312*/    /*Scope*/ 60, /*->2373*/
/*2313*/      OPC_CheckChild1Type, MVT::f64,
/*2315*/      OPC_RecordChild2, // #2 = $dst
/*2316*/      OPC_Scope, 34, /*->2352*/ // 2 children in Scope
/*2318*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2320*/        OPC_CheckPredicate, 22, // Predicate_store
/*2322*/        OPC_Scope, 13, /*->2337*/ // 2 children in Scope
/*2324*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2327*/          OPC_EmitMergeInputChains1_0,
/*2328*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFD), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F8RC:f64:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFD F8RC:f64:$rS, iaddr:iPTR:$dst)
/*2337*/        /*Scope*/ 13, /*->2351*/
/*2338*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2341*/          OPC_EmitMergeInputChains1_0,
/*2342*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F8RC:f64:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFDX F8RC:f64:$frS, xaddr:iPTR:$dst)
/*2351*/        0, /*End of Scope*/
/*2352*/      /*Scope*/ 19, /*->2372*/
/*2353*/        OPC_RecordChild3, // #3 = $ptroff
/*2354*/        OPC_CheckPredicate, 27, // Predicate_istore
/*2356*/        OPC_CheckPredicate, 28, // Predicate_pre_store
/*2358*/        OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2361*/        OPC_EmitMergeInputChains1_0,
/*2362*/        OPC_MorphNodeTo, TARGET_VAL(PPC::STFDU), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                // Src: (ist:iPTR F8RC:f64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                // Dst: (STFDU:iPTR F8RC:f64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2372*/      0, /*End of Scope*/
/*2373*/    /*Scope*/ 20, /*->2394*/
/*2374*/      OPC_CheckChild1Type, MVT::v4i32,
/*2376*/      OPC_RecordChild2, // #2 = $dst
/*2377*/      OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2379*/      OPC_CheckPredicate, 22, // Predicate_store
/*2381*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*2384*/      OPC_EmitMergeInputChains1_0,
/*2385*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (st VRRC:v4i32:$rS, xoaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
              // Dst: (STVX VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*2394*/    /*Scope*/ 81|128,1/*209*/, /*->2605*/
/*2396*/      OPC_CheckChild1Type, MVT::i64,
/*2398*/      OPC_RecordChild2, // #2 = $src
/*2399*/      OPC_Scope, 10|128,1/*138*/, /*->2540*/ // 2 children in Scope
/*2402*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2404*/        OPC_Scope, 100, /*->2506*/ // 2 children in Scope
/*2406*/          OPC_CheckPredicate, 19, // Predicate_truncstore
/*2408*/          OPC_Scope, 15, /*->2425*/ // 6 children in Scope
/*2410*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2412*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2415*/            OPC_EmitMergeInputChains1_0,
/*2416*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB8 G8RC:i64:$rS, iaddr:iPTR:$src)
/*2425*/          /*Scope*/ 15, /*->2441*/
/*2426*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2428*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2431*/            OPC_EmitMergeInputChains1_0,
/*2432*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH8 G8RC:i64:$rS, iaddr:iPTR:$src)
/*2441*/          /*Scope*/ 15, /*->2457*/
/*2442*/            OPC_CheckPredicate, 29, // Predicate_truncstorei32
/*2444*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2447*/            OPC_EmitMergeInputChains1_0,
/*2448*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STW8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STW8 G8RC:i64:$rS, iaddr:iPTR:$src)
/*2457*/          /*Scope*/ 15, /*->2473*/
/*2458*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2460*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2463*/            OPC_EmitMergeInputChains1_0,
/*2464*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX8 G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2473*/          /*Scope*/ 15, /*->2489*/
/*2474*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2476*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2479*/            OPC_EmitMergeInputChains1_0,
/*2480*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX8 G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2489*/          /*Scope*/ 15, /*->2505*/
/*2490*/            OPC_CheckPredicate, 29, // Predicate_truncstorei32
/*2492*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2495*/            OPC_EmitMergeInputChains1_0,
/*2496*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STWX8 G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2505*/          0, /*End of Scope*/
/*2506*/        /*Scope*/ 32, /*->2539*/
/*2507*/          OPC_CheckPredicate, 22, // Predicate_store
/*2509*/          OPC_Scope, 13, /*->2524*/ // 2 children in Scope
/*2511*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectAddrImmShift:$dst #3 #4
/*2514*/            OPC_EmitMergeInputChains1_0,
/*2515*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, ixaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STD G8RC:i64:$rS, ixaddr:iPTR:$dst)
/*2524*/          /*Scope*/ 13, /*->2538*/
/*2525*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2528*/            OPC_EmitMergeInputChains1_0,
/*2529*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STDX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDX G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2538*/          0, /*End of Scope*/
/*2539*/        0, /*End of Scope*/
/*2540*/      /*Scope*/ 63, /*->2604*/
/*2541*/        OPC_RecordChild3, // #3 = $ptroff
/*2542*/        OPC_Scope, 40, /*->2584*/ // 2 children in Scope
/*2544*/          OPC_CheckPredicate, 23, // Predicate_itruncstore
/*2546*/          OPC_CheckPredicate, 24, // Predicate_pre_truncst
/*2548*/          OPC_Scope, 16, /*->2566*/ // 2 children in Scope
/*2550*/            OPC_CheckPredicate, 25, // Predicate_pre_truncsti8
/*2552*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2555*/            OPC_EmitMergeInputChains1_0,
/*2556*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU8:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2566*/          /*Scope*/ 16, /*->2583*/
/*2567*/            OPC_CheckPredicate, 26, // Predicate_pre_truncsti16
/*2569*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2572*/            OPC_EmitMergeInputChains1_0,
/*2573*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU8:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2583*/          0, /*End of Scope*/
/*2584*/        /*Scope*/ 18, /*->2603*/
/*2585*/          OPC_CheckPredicate, 27, // Predicate_istore
/*2587*/          OPC_CheckPredicate, 28, // Predicate_pre_store
/*2589*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2592*/          OPC_EmitMergeInputChains1_0,
/*2593*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STDU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STDU:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2603*/        0, /*End of Scope*/
/*2604*/      0, /*End of Scope*/
/*2605*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->2692
/*2609*/    OPC_RecordMemRef,
/*2610*/    OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*2611*/    OPC_RecordChild1, // #1 = $ptr
/*2612*/    OPC_RecordChild2, // #2 = $incr
/*2613*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->2672
/*2616*/      OPC_Scope, 17, /*->2635*/ // 3 children in Scope
/*2618*/        OPC_CheckPredicate, 30, // Predicate_atomic_load_add_8
/*2620*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2623*/        OPC_EmitMergeInputChains1_0,
/*2624*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2635*/      /*Scope*/ 17, /*->2653*/
/*2636*/        OPC_CheckPredicate, 31, // Predicate_atomic_load_add_16
/*2638*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2641*/        OPC_EmitMergeInputChains1_0,
/*2642*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2653*/      /*Scope*/ 17, /*->2671*/
/*2654*/        OPC_CheckPredicate, 32, // Predicate_atomic_load_add_32
/*2656*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2659*/        OPC_EmitMergeInputChains1_0,
/*2660*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2671*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->2691
/*2674*/      OPC_CheckPredicate, 33, // Predicate_atomic_load_add_64
/*2676*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2679*/      OPC_EmitMergeInputChains1_0,
/*2680*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_add:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_ADD_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->2778
/*2695*/    OPC_RecordMemRef,
/*2696*/    OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*2697*/    OPC_RecordChild1, // #1 = $ptr
/*2698*/    OPC_RecordChild2, // #2 = $incr
/*2699*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->2758
/*2702*/      OPC_Scope, 17, /*->2721*/ // 3 children in Scope
/*2704*/        OPC_CheckPredicate, 34, // Predicate_atomic_load_sub_8
/*2706*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2709*/        OPC_EmitMergeInputChains1_0,
/*2710*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2721*/      /*Scope*/ 17, /*->2739*/
/*2722*/        OPC_CheckPredicate, 35, // Predicate_atomic_load_sub_16
/*2724*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2727*/        OPC_EmitMergeInputChains1_0,
/*2728*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2739*/      /*Scope*/ 17, /*->2757*/
/*2740*/        OPC_CheckPredicate, 36, // Predicate_atomic_load_sub_32
/*2742*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2745*/        OPC_EmitMergeInputChains1_0,
/*2746*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2757*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->2777
/*2760*/      OPC_CheckPredicate, 37, // Predicate_atomic_load_sub_64
/*2762*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2765*/      OPC_EmitMergeInputChains1_0,
/*2766*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_sub:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_SUB_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->2864
/*2781*/    OPC_RecordMemRef,
/*2782*/    OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*2783*/    OPC_RecordChild1, // #1 = $ptr
/*2784*/    OPC_RecordChild2, // #2 = $incr
/*2785*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->2844
/*2788*/      OPC_Scope, 17, /*->2807*/ // 3 children in Scope
/*2790*/        OPC_CheckPredicate, 38, // Predicate_atomic_load_and_8
/*2792*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2795*/        OPC_EmitMergeInputChains1_0,
/*2796*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2807*/      /*Scope*/ 17, /*->2825*/
/*2808*/        OPC_CheckPredicate, 39, // Predicate_atomic_load_and_16
/*2810*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2813*/        OPC_EmitMergeInputChains1_0,
/*2814*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2825*/      /*Scope*/ 17, /*->2843*/
/*2826*/        OPC_CheckPredicate, 40, // Predicate_atomic_load_and_32
/*2828*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2831*/        OPC_EmitMergeInputChains1_0,
/*2832*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2843*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->2863
/*2846*/      OPC_CheckPredicate, 41, // Predicate_atomic_load_and_64
/*2848*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2851*/      OPC_EmitMergeInputChains1_0,
/*2852*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_and:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_AND_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->2950
/*2867*/    OPC_RecordMemRef,
/*2868*/    OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*2869*/    OPC_RecordChild1, // #1 = $ptr
/*2870*/    OPC_RecordChild2, // #2 = $incr
/*2871*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->2930
/*2874*/      OPC_Scope, 17, /*->2893*/ // 3 children in Scope
/*2876*/        OPC_CheckPredicate, 42, // Predicate_atomic_load_or_8
/*2878*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2881*/        OPC_EmitMergeInputChains1_0,
/*2882*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2893*/      /*Scope*/ 17, /*->2911*/
/*2894*/        OPC_CheckPredicate, 43, // Predicate_atomic_load_or_16
/*2896*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2899*/        OPC_EmitMergeInputChains1_0,
/*2900*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2911*/      /*Scope*/ 17, /*->2929*/
/*2912*/        OPC_CheckPredicate, 44, // Predicate_atomic_load_or_32
/*2914*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2917*/        OPC_EmitMergeInputChains1_0,
/*2918*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2929*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->2949
/*2932*/      OPC_CheckPredicate, 45, // Predicate_atomic_load_or_64
/*2934*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2937*/      OPC_EmitMergeInputChains1_0,
/*2938*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_or:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_OR_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->3036
/*2953*/    OPC_RecordMemRef,
/*2954*/    OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*2955*/    OPC_RecordChild1, // #1 = $ptr
/*2956*/    OPC_RecordChild2, // #2 = $incr
/*2957*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3016
/*2960*/      OPC_Scope, 17, /*->2979*/ // 3 children in Scope
/*2962*/        OPC_CheckPredicate, 46, // Predicate_atomic_load_xor_8
/*2964*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2967*/        OPC_EmitMergeInputChains1_0,
/*2968*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2979*/      /*Scope*/ 17, /*->2997*/
/*2980*/        OPC_CheckPredicate, 47, // Predicate_atomic_load_xor_16
/*2982*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2985*/        OPC_EmitMergeInputChains1_0,
/*2986*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2997*/      /*Scope*/ 17, /*->3015*/
/*2998*/        OPC_CheckPredicate, 48, // Predicate_atomic_load_xor_32
/*3000*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3003*/        OPC_EmitMergeInputChains1_0,
/*3004*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3015*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3035
/*3018*/      OPC_CheckPredicate, 49, // Predicate_atomic_load_xor_64
/*3020*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3023*/      OPC_EmitMergeInputChains1_0,
/*3024*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_xor:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_XOR_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->3122
/*3039*/    OPC_RecordMemRef,
/*3040*/    OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*3041*/    OPC_RecordChild1, // #1 = $ptr
/*3042*/    OPC_RecordChild2, // #2 = $incr
/*3043*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3102
/*3046*/      OPC_Scope, 17, /*->3065*/ // 3 children in Scope
/*3048*/        OPC_CheckPredicate, 50, // Predicate_atomic_load_nand_8
/*3050*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3053*/        OPC_EmitMergeInputChains1_0,
/*3054*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3065*/      /*Scope*/ 17, /*->3083*/
/*3066*/        OPC_CheckPredicate, 51, // Predicate_atomic_load_nand_16
/*3068*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3071*/        OPC_EmitMergeInputChains1_0,
/*3072*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3083*/      /*Scope*/ 17, /*->3101*/
/*3084*/        OPC_CheckPredicate, 52, // Predicate_atomic_load_nand_32
/*3086*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3089*/        OPC_EmitMergeInputChains1_0,
/*3090*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3101*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3121
/*3104*/      OPC_CheckPredicate, 53, // Predicate_atomic_load_nand_64
/*3106*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3109*/      OPC_EmitMergeInputChains1_0,
/*3110*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_nand:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NAND_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 88,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->3213
/*3125*/    OPC_RecordMemRef,
/*3126*/    OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*3127*/    OPC_RecordChild1, // #1 = $ptr
/*3128*/    OPC_RecordChild2, // #2 = $old
/*3129*/    OPC_RecordChild3, // #3 = $new
/*3130*/    OPC_SwitchType /*2 cases */, 59,  MVT::i32,// ->3192
/*3133*/      OPC_Scope, 18, /*->3153*/ // 3 children in Scope
/*3135*/        OPC_CheckPredicate, 54, // Predicate_atomic_cmp_swap_8
/*3137*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3140*/        OPC_EmitMergeInputChains1_0,
/*3141*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)
/*3153*/      /*Scope*/ 18, /*->3172*/
/*3154*/        OPC_CheckPredicate, 55, // Predicate_atomic_cmp_swap_16
/*3156*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3159*/        OPC_EmitMergeInputChains1_0,
/*3160*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)
/*3172*/      /*Scope*/ 18, /*->3191*/
/*3173*/        OPC_CheckPredicate, 56, // Predicate_atomic_cmp_swap_32
/*3175*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3178*/        OPC_EmitMergeInputChains1_0,
/*3179*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)
/*3191*/      0, /*End of Scope*/
            /*SwitchType*/ 18,  MVT::i64,// ->3212
/*3194*/      OPC_CheckPredicate, 57, // Predicate_atomic_cmp_swap_64
/*3196*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3199*/      OPC_EmitMergeInputChains1_0,
/*3200*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
              // Src: (atomic_cmp_swap:i64 xoaddr:iPTR:$ptr, G8RC:i64:$old, G8RC:i64:$new)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_CMP_SWAP_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$old, G8RC:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->3299
/*3216*/    OPC_RecordMemRef,
/*3217*/    OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*3218*/    OPC_RecordChild1, // #1 = $ptr
/*3219*/    OPC_RecordChild2, // #2 = $new
/*3220*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3279
/*3223*/      OPC_Scope, 17, /*->3242*/ // 3 children in Scope
/*3225*/        OPC_CheckPredicate, 58, // Predicate_atomic_swap_8
/*3227*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3230*/        OPC_EmitMergeInputChains1_0,
/*3231*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)<<P:Predicate_atomic_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)
/*3242*/      /*Scope*/ 17, /*->3260*/
/*3243*/        OPC_CheckPredicate, 59, // Predicate_atomic_swap_16
/*3245*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3248*/        OPC_EmitMergeInputChains1_0,
/*3249*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)<<P:Predicate_atomic_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)
/*3260*/      /*Scope*/ 17, /*->3278*/
/*3261*/        OPC_CheckPredicate, 60, // Predicate_atomic_swap_32
/*3263*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3266*/        OPC_EmitMergeInputChains1_0,
/*3267*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)<<P:Predicate_atomic_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)
/*3278*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3298
/*3281*/      OPC_CheckPredicate, 61, // Predicate_atomic_swap_64
/*3283*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3286*/      OPC_EmitMergeInputChains1_0,
/*3287*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_swap:i64 xoaddr:iPTR:$ptr, G8RC:i64:$new)<<P:Predicate_atomic_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_SWAP_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 48,  TARGET_VAL(PPCISD::DYNALLOC),// ->3350
/*3302*/    OPC_RecordNode,   // #0 = 'PPCdynalloc' chained node
/*3303*/    OPC_RecordChild1, // #1 = $negsize
/*3304*/    OPC_SwitchType /*2 cases */, 20,  MVT::i32,// ->3327
/*3307*/      OPC_CheckChild1Type, MVT::i32,
/*3309*/      OPC_RecordChild2, // #2 = $fpsi
/*3310*/      OPC_CheckChild2Type, MVT::iPTR,
/*3312*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3315*/      OPC_EmitMergeInputChains1_0,
/*3316*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i32 GPRC:i32:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC:i32:i32 GPRC:i32:$negsize, iaddr:iPTR:$fpsi)
            /*SwitchType*/ 20,  MVT::i64,// ->3349
/*3329*/      OPC_CheckChild1Type, MVT::i64,
/*3331*/      OPC_RecordChild2, // #2 = $fpsi
/*3332*/      OPC_CheckChild2Type, MVT::iPTR,
/*3334*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3337*/      OPC_EmitMergeInputChains1_0,
/*3338*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC8), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i64, MVT::i64, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i64 G8RC:i64:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC8:i64:i64 G8RC:i64:$negsize, iaddr:iPTR:$fpsi)
            0, // EndSwitchType
          /*SwitchOpcode*/ 34,  TARGET_VAL(PPCISD::LARX),// ->3387
/*3353*/    OPC_RecordNode,   // #0 = 'PPClarx' chained node
/*3354*/    OPC_RecordChild1, // #1 = $src
/*3355*/    OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->3371
/*3358*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3361*/      OPC_EmitMergeInputChains1_0,
/*3362*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i32 xoaddr:iPTR:$src) - Complexity = 12
              // Dst: (LWARX:i32 xoaddr:iPTR:$src)
            /*SwitchType*/ 13,  MVT::i64,// ->3386
/*3373*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #2 #3
/*3376*/      OPC_EmitMergeInputChains1_0,
/*3377*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i64 xoaddr:iPTR:$ptr) - Complexity = 12
              // Dst: (LDARX:i64 xoaddr:iPTR:$ptr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 40,  TARGET_VAL(PPCISD::STCX),// ->3430
/*3390*/    OPC_RecordNode,   // #0 = 'PPCstcx' chained node
/*3391*/    OPC_RecordChild1, // #1 = $rS
/*3392*/    OPC_Scope, 17, /*->3411*/ // 2 children in Scope
/*3394*/      OPC_CheckChild1Type, MVT::i32,
/*3396*/      OPC_RecordChild2, // #2 = $dst
/*3397*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3400*/      OPC_EmitMergeInputChains1_0,
/*3401*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STWCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx GPRC:i32:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STWCX:i32 GPRC:i32:$rS, xoaddr:iPTR:$dst)
/*3411*/    /*Scope*/ 17, /*->3429*/
/*3412*/      OPC_CheckChild1Type, MVT::i64,
/*3414*/      OPC_RecordChild2, // #2 = $dst
/*3415*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3418*/      OPC_EmitMergeInputChains1_0,
/*3419*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx G8RC:i64:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STDCX:i32 G8RC:i64:$rS, xoaddr:iPTR:$dst)
/*3429*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(PPCISD::LBRX),// ->3473
/*3433*/    OPC_RecordNode,   // #0 = 'PPClbrx' chained node
/*3434*/    OPC_RecordChild1, // #1 = $src
/*3435*/    OPC_MoveChild, 2,
/*3437*/    OPC_Scope, 16, /*->3455*/ // 2 children in Scope
/*3439*/      OPC_CheckValueType, MVT::i16,
/*3441*/      OPC_MoveParent,
/*3442*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3445*/      OPC_EmitMergeInputChains1_0,
/*3446*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i16:Other) - Complexity = 12
              // Dst: (LHBRX:i32 xoaddr:iPTR:$src)
/*3455*/    /*Scope*/ 16, /*->3472*/
/*3456*/      OPC_CheckValueType, MVT::i32,
/*3458*/      OPC_MoveParent,
/*3459*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3462*/      OPC_EmitMergeInputChains1_0,
/*3463*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i32:Other) - Complexity = 12
              // Dst: (LWBRX:i32 xoaddr:iPTR:$src)
/*3472*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 41,  TARGET_VAL(PPCISD::STBRX),// ->3517
/*3476*/    OPC_RecordNode,   // #0 = 'PPCstbrx' chained node
/*3477*/    OPC_RecordChild1, // #1 = $rS
/*3478*/    OPC_RecordChild2, // #2 = $dst
/*3479*/    OPC_MoveChild, 3,
/*3481*/    OPC_Scope, 16, /*->3499*/ // 2 children in Scope
/*3483*/      OPC_CheckValueType, MVT::i16,
/*3485*/      OPC_MoveParent,
/*3486*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3489*/      OPC_EmitMergeInputChains1_0,
/*3490*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STHBRX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstbrx GPRC:i32:$rS, xoaddr:iPTR:$dst, i16:Other) - Complexity = 12
              // Dst: (STHBRX GPRC:i32:$rS, xoaddr:iPTR:$dst)
/*3499*/    /*Scope*/ 16, /*->3516*/
/*3500*/      OPC_CheckValueType, MVT::i32,
/*3502*/      OPC_MoveParent,
/*3503*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3506*/      OPC_EmitMergeInputChains1_0,
/*3507*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STWBRX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstbrx GPRC:i32:$rS, xoaddr:iPTR:$dst, i32:Other) - Complexity = 12
              // Dst: (STWBRX GPRC:i32:$rS, xoaddr:iPTR:$dst)
/*3516*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(PPCISD::STFIWX),// ->3536
/*3520*/    OPC_RecordNode,   // #0 = 'PPCstfiwx' chained node
/*3521*/    OPC_RecordChild1, // #1 = $frS
/*3522*/    OPC_RecordChild2, // #2 = $dst
/*3523*/    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3526*/    OPC_EmitMergeInputChains1_0,
/*3527*/    OPC_MorphNodeTo, TARGET_VAL(PPC::STFIWX), 0|OPFL_Chain,
                0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
            // Src: (PPCstfiwx F8RC:f64:$frS, xoaddr:iPTR:$dst) - Complexity = 12
            // Dst: (STFIWX F8RC:f64:$frS, xoaddr:iPTR:$dst)
          /*SwitchOpcode*/ 37,  TARGET_VAL(PPCISD::LOAD),// ->3576
/*3539*/    OPC_RecordNode,   // #0 = 'PPCload' chained node
/*3540*/    OPC_CaptureGlueInput,
/*3541*/    OPC_RecordChild1, // #1 = $src
/*3542*/    OPC_CheckChild1Type, MVT::iPTR,
/*3544*/    OPC_CheckType, MVT::i64,
/*3546*/    OPC_Scope, 13, /*->3561*/ // 2 children in Scope
/*3548*/      OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*3551*/      OPC_EmitMergeInputChains1_0,
/*3552*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 ixaddr:iPTR:$src) - Complexity = 12
              // Dst: (LD:i64 ixaddr:iPTR:$src)
/*3561*/    /*Scope*/ 13, /*->3575*/
/*3562*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*3565*/      OPC_EmitMergeInputChains1_0,
/*3566*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 xaddr:iPTR:$src) - Complexity = 12
              // Dst: (LDX:i64 xaddr:iPTR:$src)
/*3575*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 35,  TARGET_VAL(PPCISD::STD_32),// ->3614
/*3579*/    OPC_RecordNode,   // #0 = 'PPCstd_32' chained node
/*3580*/    OPC_RecordChild1, // #1 = $rT
/*3581*/    OPC_CheckChild1Type, MVT::i32,
/*3583*/    OPC_RecordChild2, // #2 = $dst
/*3584*/    OPC_Scope, 13, /*->3599*/ // 2 children in Scope
/*3586*/      OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectAddrImmShift:$dst #3 #4
/*3589*/      OPC_EmitMergeInputChains1_0,
/*3590*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STD_32), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstd_32 GPRC:i32:$rT, ixaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STD_32 GPRC:i32:$rT, ixaddr:iPTR:$dst)
/*3599*/    /*Scope*/ 13, /*->3613*/
/*3600*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*3603*/      OPC_EmitMergeInputChains1_0,
/*3604*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDX_32), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstd_32 GPRC:i32:$rT, xaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STDX_32 GPRC:i32:$rT, xaddr:iPTR:$dst)
/*3613*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 84|128,4/*596*/,  TARGET_VAL(ISD::XOR),// ->4214
/*3618*/    OPC_Scope, 39|128,1/*167*/, /*->3788*/ // 8 children in Scope
/*3621*/      OPC_MoveChild, 0,
/*3623*/      OPC_SwitchOpcode /*3 cases */, 41,  TARGET_VAL(ISD::AND),// ->3668
/*3627*/        OPC_RecordChild0, // #0 = $rS
/*3628*/        OPC_RecordChild1, // #1 = $rB
/*3629*/        OPC_MoveParent,
/*3630*/        OPC_MoveChild, 1,
/*3632*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3643*/        OPC_MoveParent,
/*3644*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3656
/*3647*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (and:i32 GPRC:i32:$rS, GPRC:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NAND:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->3667
/*3658*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (and:i64 G8RC:i64:$rS, G8RC:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NAND8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::OR),// ->3712
/*3671*/        OPC_RecordChild0, // #0 = $rS
/*3672*/        OPC_RecordChild1, // #1 = $rB
/*3673*/        OPC_MoveParent,
/*3674*/        OPC_MoveChild, 1,
/*3676*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3687*/        OPC_MoveParent,
/*3688*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3700
/*3691*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (or:i32 GPRC:i32:$rS, GPRC:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NOR:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->3711
/*3702*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (or:i64 G8RC:i64:$rS, G8RC:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NOR8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 72,  TARGET_VAL(ISD::XOR),// ->3787
/*3715*/        OPC_RecordChild0, // #0 = $rS
/*3716*/        OPC_Scope, 40, /*->3758*/ // 2 children in Scope
/*3718*/          OPC_RecordChild1, // #1 = $rB
/*3719*/          OPC_MoveParent,
/*3720*/          OPC_MoveChild, 1,
/*3722*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3733*/          OPC_MoveParent,
/*3734*/          OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3746
/*3737*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 (xor:i32 GPRC:i32:$rS, GPRC:i32:$rB), -1:i32) - Complexity = 11
                    // Dst: (EQV:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                  /*SwitchType*/ 9,  MVT::i64,// ->3757
/*3748*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i64 (xor:i64 G8RC:i64:$rS, G8RC:i64:$rB), -1:i64) - Complexity = 11
                    // Dst: (EQV8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                  0, // EndSwitchType
/*3758*/        /*Scope*/ 27, /*->3786*/
/*3759*/          OPC_MoveChild, 1,
/*3761*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3772*/          OPC_MoveParent,
/*3773*/          OPC_MoveParent,
/*3774*/          OPC_RecordChild1, // #1 = $rB
/*3775*/          OPC_CheckType, MVT::i32,
/*3777*/          OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (xor:i32 GPRC:i32:$rS, -1:i32), GPRC:i32:$rB) - Complexity = 11
                  // Dst: (EQV:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*3786*/        0, /*End of Scope*/
              0, // EndSwitchOpcode
/*3788*/    /*Scope*/ 33, /*->3822*/
/*3789*/      OPC_RecordChild0, // #0 = $rB
/*3790*/      OPC_MoveChild, 1,
/*3792*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3795*/      OPC_RecordChild0, // #1 = $rS
/*3796*/      OPC_MoveChild, 1,
/*3798*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3809*/      OPC_MoveParent,
/*3810*/      OPC_MoveParent,
/*3811*/      OPC_CheckType, MVT::i32,
/*3813*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (xor:i32 GPRC:i32:$rB, (xor:i32 GPRC:i32:$rS, -1:i32)) - Complexity = 11
              // Dst: (EQV:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*3822*/    /*Scope*/ 33, /*->3856*/
/*3823*/      OPC_MoveChild, 0,
/*3825*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3828*/      OPC_RecordChild0, // #0 = $rS
/*3829*/      OPC_MoveChild, 1,
/*3831*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3842*/      OPC_MoveParent,
/*3843*/      OPC_MoveParent,
/*3844*/      OPC_RecordChild1, // #1 = $rB
/*3845*/      OPC_CheckType, MVT::i64,
/*3847*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i64 (xor:i64 G8RC:i64:$rS, -1:i64), G8RC:i64:$rB) - Complexity = 11
              // Dst: (EQV8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*3856*/    /*Scope*/ 84|128,1/*212*/, /*->4070*/
/*3858*/      OPC_RecordChild0, // #0 = $rB
/*3859*/      OPC_Scope, 59, /*->3920*/ // 2 children in Scope
/*3861*/        OPC_MoveChild, 1,
/*3863*/        OPC_Scope, 30, /*->3895*/ // 2 children in Scope
/*3865*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3868*/          OPC_RecordChild0, // #1 = $rS
/*3869*/          OPC_MoveChild, 1,
/*3871*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3882*/          OPC_MoveParent,
/*3883*/          OPC_MoveParent,
/*3884*/          OPC_CheckType, MVT::i64,
/*3886*/          OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (xor:i64 G8RC:i64:$rB, (xor:i64 G8RC:i64:$rS, -1:i64)) - Complexity = 11
                  // Dst: (EQV8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*3895*/        /*Scope*/ 23, /*->3919*/
/*3896*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3907*/          OPC_MoveParent,
/*3908*/          OPC_CheckType, MVT::i32,
/*3910*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                  // Src: (xor:i32 GPRC:i32:$in, -1:i32) - Complexity = 8
                  // Dst: (NOR:i32 GPRC:i32:$in, GPRC:i32:$in)
/*3919*/        0, /*End of Scope*/
/*3920*/      /*Scope*/ 19|128,1/*147*/, /*->4069*/
/*3922*/        OPC_RecordChild1, // #1 = $src2
/*3923*/        OPC_Scope, 119, /*->4044*/ // 3 children in Scope
/*3925*/          OPC_MoveChild, 1,
/*3927*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3930*/          OPC_Scope, 19, /*->3951*/ // 5 children in Scope
/*3932*/            OPC_CheckPredicate, 62, // Predicate_immZExt16
/*3934*/            OPC_MoveParent,
/*3935*/            OPC_CheckType, MVT::i32,
/*3937*/            OPC_EmitConvertToTarget, 1,
/*3939*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*3942*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI:i32 GPRC:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*3951*/          /*Scope*/ 19, /*->3971*/
/*3952*/            OPC_CheckPredicate, 63, // Predicate_imm16ShiftedZExt
/*3954*/            OPC_MoveParent,
/*3955*/            OPC_CheckType, MVT::i32,
/*3957*/            OPC_EmitConvertToTarget, 1,
/*3959*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*3962*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS:i32 GPRC:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*3971*/          /*Scope*/ 19, /*->3991*/
/*3972*/            OPC_CheckPredicate, 62, // Predicate_immZExt16
/*3974*/            OPC_MoveParent,
/*3975*/            OPC_CheckType, MVT::i64,
/*3977*/            OPC_EmitConvertToTarget, 1,
/*3979*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*3982*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI8:i64 G8RC:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*3991*/          /*Scope*/ 19, /*->4011*/
/*3992*/            OPC_CheckPredicate, 63, // Predicate_imm16ShiftedZExt
/*3994*/            OPC_MoveParent,
/*3995*/            OPC_CheckType, MVT::i64,
/*3997*/            OPC_EmitConvertToTarget, 1,
/*3999*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4002*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS8:i64 G8RC:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4011*/          /*Scope*/ 31, /*->4043*/
/*4012*/            OPC_MoveParent,
/*4013*/            OPC_CheckType, MVT::i32,
/*4015*/            OPC_EmitConvertToTarget, 1,
/*4017*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4020*/            OPC_EmitNode, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4 
/*4029*/            OPC_EmitConvertToTarget, 1,
/*4031*/            OPC_EmitNodeXForm, 0, 5, // HI16
/*4034*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                    // Src: (xor:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                    // Dst: (XORIS:i32 (XORI:i32 GPRC:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*4043*/          0, /*End of Scope*/
/*4044*/        /*Scope*/ 11, /*->4056*/
/*4045*/          OPC_CheckType, MVT::i32,
/*4047*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                  // Dst: (XOR:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*4056*/        /*Scope*/ 11, /*->4068*/
/*4057*/          OPC_CheckType, MVT::i64,
/*4059*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 G8RC:i64:$rS, G8RC:i64:$rB) - Complexity = 3
                  // Dst: (XOR8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*4068*/        0, /*End of Scope*/
/*4069*/      0, /*End of Scope*/
/*4070*/    /*Scope*/ 70, /*->4141*/
/*4071*/      OPC_MoveChild, 0,
/*4073*/      OPC_SwitchOpcode /*2 cases */, 30,  TARGET_VAL(ISD::OR),// ->4107
/*4077*/        OPC_RecordChild0, // #0 = $vA
/*4078*/        OPC_RecordChild1, // #1 = $vB
/*4079*/        OPC_MoveParent,
/*4080*/        OPC_MoveChild, 1,
/*4082*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4085*/        OPC_MoveChild, 0,
/*4087*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4090*/        OPC_CheckPredicate, 64, // Predicate_immAllOnesV
/*4092*/        OPC_CheckType, MVT::v16i8,
/*4094*/        OPC_MoveParent,
/*4095*/        OPC_MoveParent,
/*4096*/        OPC_CheckType, MVT::v4i32,
/*4098*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (or:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB), (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 13
                // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
              /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::BITCAST),// ->4140
/*4110*/        OPC_MoveChild, 0,
/*4112*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4115*/        OPC_CheckPredicate, 64, // Predicate_immAllOnesV
/*4117*/        OPC_CheckType, MVT::v16i8,
/*4119*/        OPC_MoveParent,
/*4120*/        OPC_MoveParent,
/*4121*/        OPC_MoveChild, 1,
/*4123*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4126*/        OPC_RecordChild0, // #0 = $vA
/*4127*/        OPC_RecordChild1, // #1 = $vB
/*4128*/        OPC_MoveParent,
/*4129*/        OPC_CheckType, MVT::v4i32,
/*4131*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), (or:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)) - Complexity = 13
                // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
              0, // EndSwitchOpcode
/*4141*/    /*Scope*/ 28, /*->4170*/
/*4142*/      OPC_RecordChild0, // #0 = $vA
/*4143*/      OPC_MoveChild, 1,
/*4145*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4148*/      OPC_MoveChild, 0,
/*4150*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4153*/      OPC_CheckPredicate, 64, // Predicate_immAllOnesV
/*4155*/      OPC_CheckType, MVT::v16i8,
/*4157*/      OPC_MoveParent,
/*4158*/      OPC_MoveParent,
/*4159*/      OPC_CheckType, MVT::v4i32,
/*4161*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 VRRC:v4i32:$vA, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 10
              // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vA)
/*4170*/    /*Scope*/ 28, /*->4199*/
/*4171*/      OPC_MoveChild, 0,
/*4173*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4176*/      OPC_MoveChild, 0,
/*4178*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4181*/      OPC_CheckPredicate, 64, // Predicate_immAllOnesV
/*4183*/      OPC_CheckType, MVT::v16i8,
/*4185*/      OPC_MoveParent,
/*4186*/      OPC_MoveParent,
/*4187*/      OPC_RecordChild1, // #0 = $vA
/*4188*/      OPC_CheckType, MVT::v4i32,
/*4190*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), VRRC:v4i32:$vA) - Complexity = 10
              // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vA)
/*4199*/    /*Scope*/ 13, /*->4213*/
/*4200*/      OPC_RecordChild0, // #0 = $vA
/*4201*/      OPC_RecordChild1, // #1 = $vB
/*4202*/      OPC_CheckType, MVT::v4i32,
/*4204*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VXOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VXOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4213*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31|128,3/*415*/,  TARGET_VAL(ISD::AND),// ->4633
/*4218*/    OPC_Scope, 46, /*->4266*/ // 5 children in Scope
/*4220*/      OPC_RecordChild0, // #0 = $rS
/*4221*/      OPC_MoveChild, 1,
/*4223*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4226*/      OPC_RecordChild0, // #1 = $rB
/*4227*/      OPC_MoveChild, 1,
/*4229*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4240*/      OPC_MoveParent,
/*4241*/      OPC_MoveParent,
/*4242*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4254
/*4245*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GPRC:i32:$rS, (xor:i32 GPRC:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ANDC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4265
/*4256*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 G8RC:i64:$rS, (xor:i64 G8RC:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ANDC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
              0, // EndSwitchType
/*4266*/    /*Scope*/ 88, /*->4355*/
/*4267*/      OPC_MoveChild, 0,
/*4269*/      OPC_SwitchOpcode /*2 cases */, 41,  TARGET_VAL(ISD::XOR),// ->4314
/*4273*/        OPC_RecordChild0, // #0 = $rB
/*4274*/        OPC_MoveChild, 1,
/*4276*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4287*/        OPC_MoveParent,
/*4288*/        OPC_MoveParent,
/*4289*/        OPC_RecordChild1, // #1 = $rS
/*4290*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4302
/*4293*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i32 (xor:i32 GPRC:i32:$rB, -1:i32), GPRC:i32:$rS) - Complexity = 11
                  // Dst: (ANDC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->4313
/*4304*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i64 (xor:i64 G8RC:i64:$rB, -1:i64), G8RC:i64:$rS) - Complexity = 11
                  // Dst: (ANDC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::ROTL),// ->4354
/*4317*/        OPC_RecordChild0, // #0 = $in
/*4318*/        OPC_RecordChild1, // #1 = $sh
/*4319*/        OPC_CheckChild1Type, MVT::i32,
/*4321*/        OPC_MoveParent,
/*4322*/        OPC_RecordChild1, // #2 = $imm
/*4323*/        OPC_MoveChild, 1,
/*4325*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4328*/        OPC_CheckPredicate, 65, // Predicate_maskimm32
/*4330*/        OPC_MoveParent,
/*4331*/        OPC_CheckType, MVT::i32,
/*4333*/        OPC_EmitConvertToTarget, 2,
/*4335*/        OPC_EmitNodeXForm, 3, 3, // MB
/*4338*/        OPC_EmitConvertToTarget, 2,
/*4340*/        OPC_EmitNodeXForm, 4, 5, // ME
/*4343*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 4, 6, 
                // Src: (and:i32 (rotl:i32 GPRC:i32:$in, GPRC:i32:$sh), (imm:i32)<<P:Predicate_maskimm32>>:$imm) - Complexity = 10
                // Dst: (RLWNM:i32 GPRC:i32:$in, GPRC:i32:$sh, (MB:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm), (ME:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm))
              0, // EndSwitchOpcode
/*4355*/    /*Scope*/ 63|128,1/*191*/, /*->4548*/
/*4357*/      OPC_RecordChild0, // #0 = $src1
/*4358*/      OPC_Scope, 119, /*->4479*/ // 2 children in Scope
/*4360*/        OPC_RecordChild1, // #1 = $src2
/*4361*/        OPC_Scope, 91, /*->4454*/ // 3 children in Scope
/*4363*/          OPC_MoveChild, 1,
/*4365*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4368*/          OPC_Scope, 20, /*->4390*/ // 4 children in Scope
/*4370*/            OPC_CheckPredicate, 62, // Predicate_immZExt16
/*4372*/            OPC_MoveParent,
/*4373*/            OPC_CheckType, MVT::i32,
/*4375*/            OPC_EmitConvertToTarget, 1,
/*4377*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4380*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (ANDIo:i32:i32 GPRC:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4390*/          /*Scope*/ 20, /*->4411*/
/*4391*/            OPC_CheckPredicate, 63, // Predicate_imm16ShiftedZExt
/*4393*/            OPC_MoveParent,
/*4394*/            OPC_CheckType, MVT::i32,
/*4396*/            OPC_EmitConvertToTarget, 1,
/*4398*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4401*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (ANDISo:i32:i32 GPRC:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4411*/          /*Scope*/ 20, /*->4432*/
/*4412*/            OPC_CheckPredicate, 62, // Predicate_immZExt16
/*4414*/            OPC_MoveParent,
/*4415*/            OPC_CheckType, MVT::i64,
/*4417*/            OPC_EmitConvertToTarget, 1,
/*4419*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4422*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo8), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (ANDIo8:i64:i32 G8RC:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4432*/          /*Scope*/ 20, /*->4453*/
/*4433*/            OPC_CheckPredicate, 63, // Predicate_imm16ShiftedZExt
/*4435*/            OPC_MoveParent,
/*4436*/            OPC_CheckType, MVT::i64,
/*4438*/            OPC_EmitConvertToTarget, 1,
/*4440*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4443*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo8), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (ANDISo8:i64:i32 G8RC:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4453*/          0, /*End of Scope*/
/*4454*/        /*Scope*/ 11, /*->4466*/
/*4455*/          OPC_CheckType, MVT::i32,
/*4457*/          OPC_MorphNodeTo, TARGET_VAL(PPC::AND), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                  // Dst: (AND:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*4466*/        /*Scope*/ 11, /*->4478*/
/*4467*/          OPC_CheckType, MVT::i64,
/*4469*/          OPC_MorphNodeTo, TARGET_VAL(PPC::AND8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i64 G8RC:i64:$rS, G8RC:i64:$rB) - Complexity = 3
                  // Dst: (AND8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*4478*/        0, /*End of Scope*/
/*4479*/      /*Scope*/ 67, /*->4547*/
/*4480*/        OPC_MoveChild, 1,
/*4482*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4485*/        OPC_Scope, 29, /*->4516*/ // 2 children in Scope
/*4487*/          OPC_RecordChild0, // #1 = $vB
/*4488*/          OPC_MoveChild, 1,
/*4490*/          OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4493*/          OPC_MoveChild, 0,
/*4495*/          OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4498*/          OPC_CheckPredicate, 64, // Predicate_immAllOnesV
/*4500*/          OPC_CheckType, MVT::v16i8,
/*4502*/          OPC_MoveParent,
/*4503*/          OPC_MoveParent,
/*4504*/          OPC_MoveParent,
/*4505*/          OPC_CheckType, MVT::v4i32,
/*4507*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:v4i32 VRRC:v4i32:$vA, (xor:v4i32 VRRC:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>))) - Complexity = 13
                  // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4516*/        /*Scope*/ 29, /*->4546*/
/*4517*/          OPC_MoveChild, 0,
/*4519*/          OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4522*/          OPC_MoveChild, 0,
/*4524*/          OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4527*/          OPC_CheckPredicate, 64, // Predicate_immAllOnesV
/*4529*/          OPC_CheckType, MVT::v16i8,
/*4531*/          OPC_MoveParent,
/*4532*/          OPC_MoveParent,
/*4533*/          OPC_RecordChild1, // #1 = $vB
/*4534*/          OPC_MoveParent,
/*4535*/          OPC_CheckType, MVT::v4i32,
/*4537*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:v4i32 VRRC:v4i32:$vA, (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), VRRC:v4i32:$vB)) - Complexity = 13
                  // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4546*/        0, /*End of Scope*/
/*4547*/      0, /*End of Scope*/
/*4548*/    /*Scope*/ 69, /*->4618*/
/*4549*/      OPC_MoveChild, 0,
/*4551*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4554*/      OPC_Scope, 30, /*->4586*/ // 2 children in Scope
/*4556*/        OPC_RecordChild0, // #0 = $vB
/*4557*/        OPC_MoveChild, 1,
/*4559*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4562*/        OPC_MoveChild, 0,
/*4564*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4567*/        OPC_CheckPredicate, 64, // Predicate_immAllOnesV
/*4569*/        OPC_CheckType, MVT::v16i8,
/*4571*/        OPC_MoveParent,
/*4572*/        OPC_MoveParent,
/*4573*/        OPC_MoveParent,
/*4574*/        OPC_RecordChild1, // #1 = $vA
/*4575*/        OPC_CheckType, MVT::v4i32,
/*4577*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 VRRC:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)), VRRC:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4586*/      /*Scope*/ 30, /*->4617*/
/*4587*/        OPC_MoveChild, 0,
/*4589*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4592*/        OPC_MoveChild, 0,
/*4594*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4597*/        OPC_CheckPredicate, 64, // Predicate_immAllOnesV
/*4599*/        OPC_CheckType, MVT::v16i8,
/*4601*/        OPC_MoveParent,
/*4602*/        OPC_MoveParent,
/*4603*/        OPC_RecordChild1, // #0 = $vB
/*4604*/        OPC_MoveParent,
/*4605*/        OPC_RecordChild1, // #1 = $vA
/*4606*/        OPC_CheckType, MVT::v4i32,
/*4608*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), VRRC:v4i32:$vB), VRRC:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4617*/      0, /*End of Scope*/
/*4618*/    /*Scope*/ 13, /*->4632*/
/*4619*/      OPC_RecordChild0, // #0 = $vA
/*4620*/      OPC_RecordChild1, // #1 = $vB
/*4621*/      OPC_CheckType, MVT::v4i32,
/*4623*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAND), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (and:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VAND:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4632*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 2|128,2/*258*/,  TARGET_VAL(ISD::OR),// ->4895
/*4637*/    OPC_Scope, 46, /*->4685*/ // 3 children in Scope
/*4639*/      OPC_RecordChild0, // #0 = $rS
/*4640*/      OPC_MoveChild, 1,
/*4642*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4645*/      OPC_RecordChild0, // #1 = $rB
/*4646*/      OPC_MoveChild, 1,
/*4648*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4659*/      OPC_MoveParent,
/*4660*/      OPC_MoveParent,
/*4661*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4673
/*4664*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 GPRC:i32:$rS, (xor:i32 GPRC:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ORC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4684
/*4675*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 G8RC:i64:$rS, (xor:i64 G8RC:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ORC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
              0, // EndSwitchType
/*4685*/    /*Scope*/ 46, /*->4732*/
/*4686*/      OPC_MoveChild, 0,
/*4688*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4691*/      OPC_RecordChild0, // #0 = $rB
/*4692*/      OPC_MoveChild, 1,
/*4694*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4705*/      OPC_MoveParent,
/*4706*/      OPC_MoveParent,
/*4707*/      OPC_RecordChild1, // #1 = $rS
/*4708*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4720
/*4711*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (or:i32 (xor:i32 GPRC:i32:$rB, -1:i32), GPRC:i32:$rS) - Complexity = 11
                // Dst: (ORC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4731
/*4722*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (or:i64 (xor:i64 G8RC:i64:$rB, -1:i64), G8RC:i64:$rS) - Complexity = 11
                // Dst: (ORC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
              0, // EndSwitchType
/*4732*/    /*Scope*/ 32|128,1/*160*/, /*->4894*/
/*4734*/      OPC_RecordChild0, // #0 = $src1
/*4735*/      OPC_RecordChild1, // #1 = $src2
/*4736*/      OPC_Scope, 119, /*->4857*/ // 4 children in Scope
/*4738*/        OPC_MoveChild, 1,
/*4740*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4743*/        OPC_Scope, 19, /*->4764*/ // 5 children in Scope
/*4745*/          OPC_CheckPredicate, 62, // Predicate_immZExt16
/*4747*/          OPC_MoveParent,
/*4748*/          OPC_CheckType, MVT::i32,
/*4750*/          OPC_EmitConvertToTarget, 1,
/*4752*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4755*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI:i32 GPRC:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4764*/        /*Scope*/ 19, /*->4784*/
/*4765*/          OPC_CheckPredicate, 63, // Predicate_imm16ShiftedZExt
/*4767*/          OPC_MoveParent,
/*4768*/          OPC_CheckType, MVT::i32,
/*4770*/          OPC_EmitConvertToTarget, 1,
/*4772*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4775*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS:i32 GPRC:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4784*/        /*Scope*/ 19, /*->4804*/
/*4785*/          OPC_CheckPredicate, 62, // Predicate_immZExt16
/*4787*/          OPC_MoveParent,
/*4788*/          OPC_CheckType, MVT::i64,
/*4790*/          OPC_EmitConvertToTarget, 1,
/*4792*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4795*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI8:i64 G8RC:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4804*/        /*Scope*/ 19, /*->4824*/
/*4805*/          OPC_CheckPredicate, 63, // Predicate_imm16ShiftedZExt
/*4807*/          OPC_MoveParent,
/*4808*/          OPC_CheckType, MVT::i64,
/*4810*/          OPC_EmitConvertToTarget, 1,
/*4812*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4815*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS8:i64 G8RC:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4824*/        /*Scope*/ 31, /*->4856*/
/*4825*/          OPC_MoveParent,
/*4826*/          OPC_CheckType, MVT::i32,
/*4828*/          OPC_EmitConvertToTarget, 1,
/*4830*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4833*/          OPC_EmitNode, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4 
/*4842*/          OPC_EmitConvertToTarget, 1,
/*4844*/          OPC_EmitNodeXForm, 0, 5, // HI16
/*4847*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (or:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ORIS:i32 (ORI:i32 GPRC:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*4856*/        0, /*End of Scope*/
/*4857*/      /*Scope*/ 11, /*->4869*/
/*4858*/        OPC_CheckType, MVT::i32,
/*4860*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (OR:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*4869*/      /*Scope*/ 11, /*->4881*/
/*4870*/        OPC_CheckType, MVT::i64,
/*4872*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 G8RC:i64:$rS, G8RC:i64:$rB) - Complexity = 3
                // Dst: (OR8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*4881*/      /*Scope*/ 11, /*->4893*/
/*4882*/        OPC_CheckType, MVT::v4i32,
/*4884*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
                // Dst: (VOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4893*/      0, /*End of Scope*/
/*4894*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 1|128,1/*129*/,  TARGET_VAL(PPCISD::Hi),// ->5028
/*4899*/    OPC_RecordChild0, // #0 = $in
/*4900*/    OPC_MoveChild, 0,
/*4902*/    OPC_SwitchOpcode /*4 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->4934
/*4906*/      OPC_MoveParent,
/*4907*/      OPC_MoveChild, 1,
/*4909*/      OPC_CheckInteger, 0, 
/*4911*/      OPC_MoveParent,
/*4912*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->4923
/*4915*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->4933
/*4925*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->4965
/*4937*/      OPC_MoveParent,
/*4938*/      OPC_MoveChild, 1,
/*4940*/      OPC_CheckInteger, 0, 
/*4942*/      OPC_MoveParent,
/*4943*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->4954
/*4946*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->4964
/*4956*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->4996
/*4968*/      OPC_MoveParent,
/*4969*/      OPC_MoveChild, 1,
/*4971*/      OPC_CheckInteger, 0, 
/*4973*/      OPC_MoveParent,
/*4974*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->4985
/*4977*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->4995
/*4987*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->5027
/*4999*/      OPC_MoveParent,
/*5000*/      OPC_MoveChild, 1,
/*5002*/      OPC_CheckInteger, 0, 
/*5004*/      OPC_MoveParent,
/*5005*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5016
/*5008*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5026
/*5018*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 1|128,1/*129*/,  TARGET_VAL(PPCISD::Lo),// ->5161
/*5032*/    OPC_RecordChild0, // #0 = $in
/*5033*/    OPC_MoveChild, 0,
/*5035*/    OPC_SwitchOpcode /*4 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5067
/*5039*/      OPC_MoveParent,
/*5040*/      OPC_MoveChild, 1,
/*5042*/      OPC_CheckInteger, 0, 
/*5044*/      OPC_MoveParent,
/*5045*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5056
/*5048*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5066
/*5058*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->5098
/*5070*/      OPC_MoveParent,
/*5071*/      OPC_MoveChild, 1,
/*5073*/      OPC_CheckInteger, 0, 
/*5075*/      OPC_MoveParent,
/*5076*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5087
/*5079*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5097
/*5089*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->5129
/*5101*/      OPC_MoveParent,
/*5102*/      OPC_MoveChild, 1,
/*5104*/      OPC_CheckInteger, 0, 
/*5106*/      OPC_MoveParent,
/*5107*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5118
/*5110*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5128
/*5120*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->5160
/*5132*/      OPC_MoveParent,
/*5133*/      OPC_MoveChild, 1,
/*5135*/      OPC_CheckInteger, 0, 
/*5137*/      OPC_MoveParent,
/*5138*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5149
/*5141*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5159
/*5151*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 118,  TARGET_VAL(ISD::SUB),// ->5282
/*5164*/    OPC_Scope, 28, /*->5194*/ // 2 children in Scope
/*5166*/      OPC_MoveChild, 0,
/*5168*/      OPC_CheckInteger, 0, 
/*5170*/      OPC_MoveParent,
/*5171*/      OPC_RecordChild1, // #0 = $rA
/*5172*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5183
/*5175*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i32 0:i32, GPRC:i32:$rA) - Complexity = 8
                // Dst: (NEG:i32 GPRC:i32:$rA)
              /*SwitchType*/ 8,  MVT::i64,// ->5193
/*5185*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, G8RC:i64:$rA) - Complexity = 8
                // Dst: (NEG8:i64 G8RC:i64:$rA)
              0, // EndSwitchType
/*5194*/    /*Scope*/ 86, /*->5281*/
/*5195*/      OPC_RecordChild0, // #0 = $imm
/*5196*/      OPC_Scope, 23, /*->5221*/ // 2 children in Scope
/*5198*/        OPC_MoveChild, 0,
/*5200*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5203*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*5205*/        OPC_MoveParent,
/*5206*/        OPC_RecordChild1, // #1 = $in
/*5207*/        OPC_CheckType, MVT::i32,
/*5209*/        OPC_EmitConvertToTarget, 0,
/*5211*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (sub:i32 (imm:i32)<<P:Predicate_immSExt16>>:$imm, GPRC:i32:$in) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 GPRC:i32:$in, (imm:i32):$imm)
/*5221*/      /*Scope*/ 58, /*->5280*/
/*5222*/        OPC_RecordChild1, // #1 = $rA
/*5223*/        OPC_SwitchType /*5 cases */, 9,  MVT::i32,// ->5235
/*5226*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i32 GPRC:i32:$rB, GPRC:i32:$rA) - Complexity = 3
                  // Dst: (SUBF:i32 GPRC:i32:$rA, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->5246
/*5237*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i64 G8RC:i64:$rB, G8RC:i64:$rA) - Complexity = 3
                  // Dst: (SUBF8:i64 G8RC:i64:$rA, G8RC:i64:$rB)
                /*SwitchType*/ 9,  MVT::v16i8,// ->5257
/*5248*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBM), 0,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
                  // Dst: (VSUBUBM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
                /*SwitchType*/ 9,  MVT::v8i16,// ->5268
/*5259*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHM), 0,
                      1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
                  // Dst: (VSUBUHM:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
                /*SwitchType*/ 9,  MVT::v4i32,// ->5279
/*5270*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWM), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
                  // Dst: (VSUBUWM:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
                0, // EndSwitchType
/*5280*/      0, /*End of Scope*/
/*5281*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 102,  TARGET_VAL(ISD::ADDE),// ->5387
/*5285*/    OPC_CaptureGlueInput,
/*5286*/    OPC_RecordChild0, // #0 = $rA
/*5287*/    OPC_Scope, 69, /*->5358*/ // 2 children in Scope
/*5289*/      OPC_MoveChild, 1,
/*5291*/      OPC_Scope, 36, /*->5329*/ // 2 children in Scope
/*5293*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5304*/        OPC_MoveParent,
/*5305*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5317
/*5308*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 GPRC:i32:$rA, -1:i32) - Complexity = 8
                  // Dst: (ADDME:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->5328
/*5319*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 G8RC:i64:$rA, -1:i64) - Complexity = 8
                  // Dst: (ADDME8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*5329*/      /*Scope*/ 27, /*->5357*/
/*5330*/        OPC_CheckInteger, 0, 
/*5332*/        OPC_MoveParent,
/*5333*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5345
/*5336*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 GPRC:i32:$rA, 0:i32) - Complexity = 8
                  // Dst: (ADDZE:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->5356
/*5347*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 G8RC:i64:$rA, 0:i64) - Complexity = 8
                  // Dst: (ADDZE8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*5357*/      0, /*End of Scope*/
/*5358*/    /*Scope*/ 27, /*->5386*/
/*5359*/      OPC_RecordChild1, // #1 = $rB
/*5360*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->5373
/*5363*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
                // Dst: (ADDE:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->5385
/*5375*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
                // Dst: (ADDE8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
              0, // EndSwitchType
/*5386*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 104,  TARGET_VAL(ISD::SUBE),// ->5494
/*5390*/    OPC_CaptureGlueInput,
/*5391*/    OPC_Scope, 71, /*->5464*/ // 2 children in Scope
/*5393*/      OPC_MoveChild, 0,
/*5395*/      OPC_Scope, 37, /*->5434*/ // 2 children in Scope
/*5397*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5408*/        OPC_MoveParent,
/*5409*/        OPC_RecordChild1, // #0 = $rA
/*5410*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5422
/*5413*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 -1:i32, GPRC:i32:$rA) - Complexity = 8
                  // Dst: (SUBFME:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->5433
/*5424*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 -1:i64, G8RC:i64:$rA) - Complexity = 8
                  // Dst: (SUBFME8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*5434*/      /*Scope*/ 28, /*->5463*/
/*5435*/        OPC_CheckInteger, 0, 
/*5437*/        OPC_MoveParent,
/*5438*/        OPC_RecordChild1, // #0 = $rA
/*5439*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5451
/*5442*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 0:i32, GPRC:i32:$rA) - Complexity = 8
                  // Dst: (SUBFZE:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->5462
/*5453*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 0:i64, G8RC:i64:$rA) - Complexity = 8
                  // Dst: (SUBFZE8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*5463*/      0, /*End of Scope*/
/*5464*/    /*Scope*/ 28, /*->5493*/
/*5465*/      OPC_RecordChild0, // #0 = $rB
/*5466*/      OPC_RecordChild1, // #1 = $rA
/*5467*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->5480
/*5470*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i32 GPRC:i32:$rB, GPRC:i32:$rA) - Complexity = 3
                // Dst: (SUBFE:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->5492
/*5482*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i64 G8RC:i64:$rB, G8RC:i64:$rA) - Complexity = 3
                // Dst: (SUBFE8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
              0, // EndSwitchType
/*5493*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::ADDC),// ->5566
/*5497*/    OPC_RecordChild0, // #0 = $rA
/*5498*/    OPC_RecordChild1, // #1 = $imm
/*5499*/    OPC_Scope, 38, /*->5539*/ // 3 children in Scope
/*5501*/      OPC_MoveChild, 1,
/*5503*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5506*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*5508*/      OPC_MoveParent,
/*5509*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->5524
/*5512*/        OPC_EmitConvertToTarget, 1,
/*5514*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC:i32:i32 GPRC:i32:$rA, (imm:i32):$imm)
              /*SwitchType*/ 12,  MVT::i64,// ->5538
/*5526*/        OPC_EmitConvertToTarget, 1,
/*5528*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC8:i64:i32 G8RC:i64:$rA, (imm:i64):$imm)
              0, // EndSwitchType
/*5539*/    /*Scope*/ 12, /*->5552*/
/*5540*/      OPC_CheckType, MVT::i32,
/*5542*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (ADDC:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
/*5552*/    /*Scope*/ 12, /*->5565*/
/*5553*/      OPC_CheckType, MVT::i64,
/*5555*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC8), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (ADDC8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
/*5565*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 50,  TARGET_VAL(ISD::MUL),// ->5619
/*5569*/    OPC_RecordChild0, // #0 = $rA
/*5570*/    OPC_RecordChild1, // #1 = $imm
/*5571*/    OPC_Scope, 21, /*->5594*/ // 3 children in Scope
/*5573*/      OPC_MoveChild, 1,
/*5575*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5578*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*5580*/      OPC_MoveParent,
/*5581*/      OPC_CheckType, MVT::i32,
/*5583*/      OPC_EmitConvertToTarget, 1,
/*5585*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (mul:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
              // Dst: (MULLI:i32 GPRC:i32:$rA, (imm:i32):$imm)
/*5594*/    /*Scope*/ 11, /*->5606*/
/*5595*/      OPC_CheckType, MVT::i32,
/*5597*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (MULLW:i32 GPRC:i32:$rA, GPRC:i32:$rB)
/*5606*/    /*Scope*/ 11, /*->5618*/
/*5607*/      OPC_CheckType, MVT::i64,
/*5609*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (MULLD:i64 G8RC:i64:$rA, G8RC:i64:$rB)
/*5618*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 71,  TARGET_VAL(ISD::SUBC),// ->5693
/*5622*/    OPC_RecordChild0, // #0 = $imm
/*5623*/    OPC_Scope, 39, /*->5664*/ // 2 children in Scope
/*5625*/      OPC_MoveChild, 0,
/*5627*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5630*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*5632*/      OPC_MoveParent,
/*5633*/      OPC_RecordChild1, // #1 = $rA
/*5634*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->5649
/*5637*/        OPC_EmitConvertToTarget, 0,
/*5639*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i32 (imm:i32)<<P:Predicate_immSExt16>>:$imm, GPRC:i32:$rA) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 GPRC:i32:$rA, (imm:i32):$imm)
              /*SwitchType*/ 12,  MVT::i64,// ->5663
/*5651*/        OPC_EmitConvertToTarget, 0,
/*5653*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i64 (imm:i64)<<P:Predicate_immSExt16>>:$imm, G8RC:i64:$rA) - Complexity = 7
                // Dst: (SUBFIC8:i64:i32 G8RC:i64:$rA, (imm:i64):$imm)
              0, // EndSwitchType
/*5664*/    /*Scope*/ 27, /*->5692*/
/*5665*/      OPC_RecordChild1, // #1 = $rA
/*5666*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->5679
/*5669*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i32 GPRC:i32:$rB, GPRC:i32:$rA) - Complexity = 3
                // Dst: (SUBFC:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->5691
/*5681*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i64 G8RC:i64:$rB, G8RC:i64:$rA) - Complexity = 3
                // Dst: (SUBFC8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
              0, // EndSwitchType
/*5692*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 114,  TARGET_VAL(ISD::SRA),// ->5810
/*5696*/    OPC_RecordChild0, // #0 = $rS
/*5697*/    OPC_RecordChild1, // #1 = $SH
/*5698*/    OPC_Scope, 38, /*->5738*/ // 5 children in Scope
/*5700*/      OPC_MoveChild, 1,
/*5702*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5705*/      OPC_CheckType, MVT::i32,
/*5707*/      OPC_MoveParent,
/*5708*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->5723
/*5711*/        OPC_EmitConvertToTarget, 1,
/*5713*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAWI), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 GPRC:i32:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRAWI:i32:i32 GPRC:i32:$rS, (imm:i32):$SH)
              /*SwitchType*/ 12,  MVT::i64,// ->5737
/*5725*/        OPC_EmitConvertToTarget, 1,
/*5727*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRADI), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 G8RC:i64:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRADI:i64:i32 G8RC:i64:$rS, (imm:i32):$SH)
              0, // EndSwitchType
/*5738*/    /*Scope*/ 28, /*->5767*/
/*5739*/      OPC_CheckChild1Type, MVT::i32,
/*5741*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->5754
/*5744*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRAW:i32:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->5766
/*5756*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRAD:i64:i32 G8RC:i64:$rS, GPRC:i32:$rB)
              0, // EndSwitchType
/*5767*/    /*Scope*/ 13, /*->5781*/
/*5768*/      OPC_CheckChild1Type, MVT::v16i8,
/*5770*/      OPC_CheckType, MVT::v16i8,
/*5772*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
              // Dst: (VSRAB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*5781*/    /*Scope*/ 13, /*->5795*/
/*5782*/      OPC_CheckChild1Type, MVT::v8i16,
/*5784*/      OPC_CheckType, MVT::v8i16,
/*5786*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
              // Dst: (VSRAH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*5795*/    /*Scope*/ 13, /*->5809*/
/*5796*/      OPC_CheckChild1Type, MVT::v4i32,
/*5798*/      OPC_CheckType, MVT::v4i32,
/*5800*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VSRAW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*5809*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 126,  TARGET_VAL(ISD::SHL),// ->5939
/*5813*/    OPC_RecordChild0, // #0 = $in
/*5814*/    OPC_RecordChild1, // #1 = $imm
/*5815*/    OPC_Scope, 52, /*->5869*/ // 5 children in Scope
/*5817*/      OPC_MoveChild, 1,
/*5819*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5822*/      OPC_CheckType, MVT::i32,
/*5824*/      OPC_MoveParent,
/*5825*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->5849
/*5828*/        OPC_EmitConvertToTarget, 1,
/*5830*/        OPC_EmitInteger, MVT::i32, 0, 
/*5833*/        OPC_EmitConvertToTarget, 1,
/*5835*/        OPC_EmitNodeXForm, 5, 4, // SHL32
/*5838*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 5, 
                // Src: (shl:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 GPRC:i32:$in, (imm:i32):$imm, 0:i32, (SHL32:i32 (imm:i32):$imm))
              /*SwitchType*/ 17,  MVT::i64,// ->5868
/*5851*/        OPC_EmitConvertToTarget, 1,
/*5853*/        OPC_EmitConvertToTarget, 1,
/*5855*/        OPC_EmitNodeXForm, 6, 3, // SHL64
/*5858*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICR), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 4, 
                // Src: (shl:i64 G8RC:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICR:i64 G8RC:i64:$in, (imm:i32):$imm, (SHL64:i32 (imm:i32):$imm))
              0, // EndSwitchType
/*5869*/    /*Scope*/ 26, /*->5896*/
/*5870*/      OPC_CheckChild1Type, MVT::i32,
/*5872*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5884
/*5875*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SLW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->5895
/*5886*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SLD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
              0, // EndSwitchType
/*5896*/    /*Scope*/ 13, /*->5910*/
/*5897*/      OPC_CheckChild1Type, MVT::v16i8,
/*5899*/      OPC_CheckType, MVT::v16i8,
/*5901*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
              // Dst: (VSLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*5910*/    /*Scope*/ 13, /*->5924*/
/*5911*/      OPC_CheckChild1Type, MVT::v8i16,
/*5913*/      OPC_CheckType, MVT::v8i16,
/*5915*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
              // Dst: (VSLH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*5924*/    /*Scope*/ 13, /*->5938*/
/*5925*/      OPC_CheckChild1Type, MVT::v4i32,
/*5927*/      OPC_CheckType, MVT::v4i32,
/*5929*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VSLW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*5938*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 126,  TARGET_VAL(ISD::SRL),// ->6068
/*5942*/    OPC_RecordChild0, // #0 = $in
/*5943*/    OPC_RecordChild1, // #1 = $imm
/*5944*/    OPC_Scope, 52, /*->5998*/ // 5 children in Scope
/*5946*/      OPC_MoveChild, 1,
/*5948*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5951*/      OPC_CheckType, MVT::i32,
/*5953*/      OPC_MoveParent,
/*5954*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->5978
/*5957*/        OPC_EmitConvertToTarget, 1,
/*5959*/        OPC_EmitNodeXForm, 7, 2, // SRL32
/*5962*/        OPC_EmitConvertToTarget, 1,
/*5964*/        OPC_EmitInteger, MVT::i32, 31, 
/*5967*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (srl:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 GPRC:i32:$in, (SRL32:i32 (imm:i32):$imm), (imm:i32):$imm, 31:i32)
              /*SwitchType*/ 17,  MVT::i64,// ->5997
/*5980*/        OPC_EmitConvertToTarget, 1,
/*5982*/        OPC_EmitNodeXForm, 8, 2, // SRL64
/*5985*/        OPC_EmitConvertToTarget, 1,
/*5987*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 3, 4, 
                // Src: (srl:i64 G8RC:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 G8RC:i64:$in, (SRL64:i32 (imm:i32):$imm), (imm:i32):$imm)
              0, // EndSwitchType
/*5998*/    /*Scope*/ 26, /*->6025*/
/*5999*/      OPC_CheckChild1Type, MVT::i32,
/*6001*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6013
/*6004*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->6024
/*6015*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
              0, // EndSwitchType
/*6025*/    /*Scope*/ 13, /*->6039*/
/*6026*/      OPC_CheckChild1Type, MVT::v16i8,
/*6028*/      OPC_CheckType, MVT::v16i8,
/*6030*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
              // Dst: (VSRB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6039*/    /*Scope*/ 13, /*->6053*/
/*6040*/      OPC_CheckChild1Type, MVT::v8i16,
/*6042*/      OPC_CheckType, MVT::v8i16,
/*6044*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
              // Dst: (VSRH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6053*/    /*Scope*/ 13, /*->6067*/
/*6054*/      OPC_CheckChild1Type, MVT::v4i32,
/*6056*/      OPC_CheckType, MVT::v4i32,
/*6058*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VSRW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6067*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 92,  TARGET_VAL(ISD::ROTL),// ->6163
/*6071*/    OPC_RecordChild0, // #0 = $in
/*6072*/    OPC_RecordChild1, // #1 = $imm
/*6073*/    OPC_Scope, 48, /*->6123*/ // 2 children in Scope
/*6075*/      OPC_MoveChild, 1,
/*6077*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6080*/      OPC_CheckType, MVT::i32,
/*6082*/      OPC_MoveParent,
/*6083*/      OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->6105
/*6086*/        OPC_EmitConvertToTarget, 1,
/*6088*/        OPC_EmitInteger, MVT::i32, 0, 
/*6091*/        OPC_EmitInteger, MVT::i32, 31, 
/*6094*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (rotl:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 GPRC:i32:$in, (imm:i32):$imm, 0:i32, 31:i32)
              /*SwitchType*/ 15,  MVT::i64,// ->6122
/*6107*/        OPC_EmitConvertToTarget, 1,
/*6109*/        OPC_EmitInteger, MVT::i32, 0, 
/*6112*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
                // Src: (rotl:i64 G8RC:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 G8RC:i64:$in, (imm:i32):$imm, 0:i32)
              0, // EndSwitchType
/*6123*/    /*Scope*/ 38, /*->6162*/
/*6124*/      OPC_CheckChild1Type, MVT::i32,
/*6126*/      OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->6146
/*6129*/        OPC_EmitInteger, MVT::i32, 0, 
/*6132*/        OPC_EmitInteger, MVT::i32, 31, 
/*6135*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                // Src: (rotl:i32 GPRC:i32:$in, GPRC:i32:$sh) - Complexity = 3
                // Dst: (RLWNM:i32 GPRC:i32:$in, GPRC:i32:$sh, 0:i32, 31:i32)
              /*SwitchType*/ 13,  MVT::i64,// ->6161
/*6148*/        OPC_EmitInteger, MVT::i32, 0, 
/*6151*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDCL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (rotl:i64 G8RC:i64:$in, GPRC:i32:$sh) - Complexity = 3
                // Dst: (RLDCL:i64 G8RC:i64:$in, GPRC:i32:$sh, 0:i32)
              0, // EndSwitchType
/*6162*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::TOC_ENTRY),// ->6185
/*6166*/    OPC_RecordChild0, // #0 = $disp
/*6167*/    OPC_MoveChild, 0,
/*6169*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*6172*/    OPC_MoveParent,
/*6173*/    OPC_RecordChild1, // #1 = $reg
/*6174*/    OPC_CheckType, MVT::i64,
/*6176*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCtoc_entry:i64 (tglobaladdr:i64):$disp, G8RC:i64:$reg) - Complexity = 6
            // Dst: (LDtoc:i64 (tglobaladdr:i64):$disp, G8RC:i64:$reg)
          /*SwitchOpcode*/ 97,  TARGET_VAL(ISD::Constant),// ->6285
/*6188*/    OPC_RecordNode,   // #0 = $imm
/*6189*/    OPC_SwitchType /*2 cases */, 59,  MVT::i32,// ->6251
/*6192*/      OPC_Scope, 12, /*->6206*/ // 3 children in Scope
/*6194*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*6196*/        OPC_EmitConvertToTarget, 0,
/*6198*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:i32)<<P:Predicate_immSExt16>>:$imm - Complexity = 4
                // Dst: (LI:i32 (imm:i32):$imm)
/*6206*/      /*Scope*/ 15, /*->6222*/
/*6207*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*6209*/        OPC_EmitConvertToTarget, 0,
/*6211*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*6214*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS:i32 (HI16:i32 (imm:i32):$imm))
/*6222*/      /*Scope*/ 27, /*->6250*/
/*6223*/        OPC_EmitConvertToTarget, 0,
/*6225*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*6228*/        OPC_EmitNode, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3 
/*6236*/        OPC_EmitConvertToTarget, 0,
/*6238*/        OPC_EmitNodeXForm, 1, 4, // LO16
/*6241*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (ORI:i32 (LIS:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*6250*/      0, /*End of Scope*/
            /*SwitchType*/ 31,  MVT::i64,// ->6284
/*6253*/      OPC_Scope, 12, /*->6267*/ // 2 children in Scope
/*6255*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*6257*/        OPC_EmitConvertToTarget, 0,
/*6259*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (imm:i64)<<P:Predicate_immSExt16>>:$imm - Complexity = 4
                // Dst: (LI8:i64 (imm:i64):$imm)
/*6267*/      /*Scope*/ 15, /*->6283*/
/*6268*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*6270*/        OPC_EmitConvertToTarget, 0,
/*6272*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*6275*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS8:i64 (HI16:i64 (imm:i64):$imm))
/*6283*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SHL),// ->6316
/*6288*/    OPC_RecordChild0, // #0 = $rS
/*6289*/    OPC_RecordChild1, // #1 = $rB
/*6290*/    OPC_CheckChild1Type, MVT::i32,
/*6292*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6304
/*6295*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SLW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->6315
/*6306*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SLD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SRL),// ->6347
/*6319*/    OPC_RecordChild0, // #0 = $rS
/*6320*/    OPC_RecordChild1, // #1 = $rB
/*6321*/    OPC_CheckChild1Type, MVT::i32,
/*6323*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6335
/*6326*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->6346
/*6337*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 30,  TARGET_VAL(PPCISD::SRA),// ->6380
/*6350*/    OPC_RecordChild0, // #0 = $rS
/*6351*/    OPC_RecordChild1, // #1 = $rB
/*6352*/    OPC_CheckChild1Type, MVT::i32,
/*6354*/    OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->6367
/*6357*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRAW:i32:i32 GPRC:i32:$rS, GPRC:i32:$rB)
            /*SwitchType*/ 10,  MVT::i64,// ->6379
/*6369*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRAD:i64:i32 G8RC:i64:$rS, GPRC:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTLZ),// ->6406
/*6383*/    OPC_RecordChild0, // #0 = $rS
/*6384*/    OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->6395
/*6387*/      OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZW), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctlz:i32 GPRC:i32:$rS) - Complexity = 3
              // Dst: (CNTLZW:i32 GPRC:i32:$rS)
            /*SwitchType*/ 8,  MVT::i64,// ->6405
/*6397*/      OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (ctlz:i64 G8RC:i64:$rS) - Complexity = 3
              // Dst: (CNTLZD:i64 G8RC:i64:$rS)
            0, // EndSwitchType
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->6478
/*6409*/    OPC_RecordChild0, // #0 = $rS
/*6410*/    OPC_MoveChild, 1,
/*6412*/    OPC_Scope, 25, /*->6439*/ // 3 children in Scope
/*6414*/      OPC_CheckValueType, MVT::i8,
/*6416*/      OPC_MoveParent,
/*6417*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->6428
/*6420*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GPRC:i32:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB:i32 GPRC:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->6438
/*6430*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 G8RC:i64:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB8:i64 G8RC:i64:$rS)
              0, // EndSwitchType
/*6439*/    /*Scope*/ 25, /*->6465*/
/*6440*/      OPC_CheckValueType, MVT::i16,
/*6442*/      OPC_MoveParent,
/*6443*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->6454
/*6446*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GPRC:i32:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH:i32 GPRC:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->6464
/*6456*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 G8RC:i64:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH8:i64 G8RC:i64:$rS)
              0, // EndSwitchType
/*6465*/    /*Scope*/ 11, /*->6477*/
/*6466*/      OPC_CheckValueType, MVT::i32,
/*6468*/      OPC_MoveParent,
/*6469*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i64 G8RC:i64:$rS, i32:Other) - Complexity = 3
              // Dst: (EXTSW:i64 G8RC:i64:$rS)
/*6477*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::SDIV),// ->6507
/*6481*/    OPC_RecordChild0, // #0 = $rA
/*6482*/    OPC_RecordChild1, // #1 = $rB
/*6483*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6495
/*6486*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (DIVW:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->6506
/*6497*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (DIVD:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::UDIV),// ->6536
/*6510*/    OPC_RecordChild0, // #0 = $rA
/*6511*/    OPC_RecordChild1, // #1 = $rB
/*6512*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6524
/*6515*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (DIVWU:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->6535
/*6526*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (DIVDU:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHS),// ->6565
/*6539*/    OPC_RecordChild0, // #0 = $rA
/*6540*/    OPC_RecordChild1, // #1 = $rB
/*6541*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6553
/*6544*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (MULHW:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->6564
/*6555*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (MULHD:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHU),// ->6594
/*6568*/    OPC_RecordChild0, // #0 = $rA
/*6569*/    OPC_RecordChild1, // #1 = $rB
/*6570*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6582
/*6573*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (MULHWU:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->6593
/*6584*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (MULHDU:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::EXTSW_32),// ->6608
/*6597*/    OPC_RecordChild0, // #0 = $rS
/*6598*/    OPC_CheckType, MVT::i32,
/*6600*/    OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW_32), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (PPCextsw_32:i32 GPRC:i32:$rS) - Complexity = 3
            // Dst: (EXTSW_32:i32 GPRC:i32:$rS)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::SIGN_EXTEND),// ->6624
/*6611*/    OPC_RecordChild0, // #0 = $rS
/*6612*/    OPC_CheckChild0Type, MVT::i32,
/*6614*/    OPC_CheckType, MVT::i64,
/*6616*/    OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW_32_64), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 GPRC:i32:$rS) - Complexity = 3
            // Dst: (EXTSW_32_64:i64 GPRC:i32:$rS)
          /*SwitchOpcode*/ 14,  TARGET_VAL(ISD::ANY_EXTEND),// ->6641
/*6627*/    OPC_RecordChild0, // #0 = $in
/*6628*/    OPC_CheckChild0Type, MVT::i32,
/*6630*/    OPC_CheckType, MVT::i64,
/*6632*/    OPC_MorphNodeTo, TARGET_VAL(PPC::OR4To8), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 0, 
            // Src: (anyext:i64 GPRC:i32:$in) - Complexity = 3
            // Dst: (OR4To8:i64 GPRC:i32:$in, GPRC:i32:$in)
          /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TRUNCATE),// ->6656
/*6644*/    OPC_RecordChild0, // #0 = $in
/*6645*/    OPC_CheckType, MVT::i32,
/*6647*/    OPC_MorphNodeTo, TARGET_VAL(PPC::OR8To4), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
            // Src: (trunc:i32 G8RC:i64:$in) - Complexity = 3
            // Dst: (OR8To4:i32 G8RC:i64:$in, G8RC:i64:$in)
          /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::ZERO_EXTEND),// ->6689
/*6659*/    OPC_RecordChild0, // #0 = $in
/*6660*/    OPC_CheckChild0Type, MVT::i32,
/*6662*/    OPC_CheckType, MVT::i64,
/*6664*/    OPC_EmitNode, TARGET_VAL(PPC::OR4To8), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 0,  // Results = #1 
/*6673*/    OPC_EmitInteger, MVT::i32, 0, 
/*6676*/    OPC_EmitInteger, MVT::i32, 32, 
/*6679*/    OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
            // Src: (zext:i64 GPRC:i32:$in) - Complexity = 3
            // Dst: (RLDICL:i64 (OR4To8:i64 GPRC:i32:$in, GPRC:i32:$in), 0:i32, 32:i32)
          /*SwitchOpcode*/ 61|128,1/*189*/,  TARGET_VAL(ISD::FNEG),// ->6882
/*6693*/    OPC_Scope, 33|128,1/*161*/, /*->6857*/ // 2 children in Scope
/*6696*/      OPC_MoveChild, 0,
/*6698*/      OPC_SwitchOpcode /*3 cases */, 84,  TARGET_VAL(ISD::FADD),// ->6786
/*6702*/        OPC_Scope, 40, /*->6744*/ // 2 children in Scope
/*6704*/          OPC_MoveChild, 0,
/*6706*/          OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*6709*/          OPC_RecordChild0, // #0 = $FRA
/*6710*/          OPC_RecordChild1, // #1 = $FRC
/*6711*/          OPC_MoveParent,
/*6712*/          OPC_RecordChild1, // #2 = $FRB
/*6713*/          OPC_MoveParent,
/*6714*/          OPC_SwitchType /*2 cases */, 12,  MVT::f64,// ->6729
/*6717*/            OPC_CheckPatternPredicate, 0, // (!TM.Options.NoExcessFPPrecision)
/*6719*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADD), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f64 (fadd:f64 (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC), F8RC:f64:$FRB)) - Complexity = 9
                    // Dst: (FNMADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
                  /*SwitchType*/ 12,  MVT::f32,// ->6743
/*6731*/            OPC_CheckPatternPredicate, 0, // (!TM.Options.NoExcessFPPrecision)
/*6733*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADDS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f32 (fadd:f32 (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC), F4RC:f32:$FRB)) - Complexity = 9
                    // Dst: (FNMADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
                  0, // EndSwitchType
/*6744*/        /*Scope*/ 40, /*->6785*/
/*6745*/          OPC_RecordChild0, // #0 = $FRB
/*6746*/          OPC_MoveChild, 1,
/*6748*/          OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*6751*/          OPC_RecordChild0, // #1 = $FRA
/*6752*/          OPC_RecordChild1, // #2 = $FRC
/*6753*/          OPC_MoveParent,
/*6754*/          OPC_MoveParent,
/*6755*/          OPC_SwitchType /*2 cases */, 12,  MVT::f64,// ->6770
/*6758*/            OPC_CheckPatternPredicate, 0, // (!TM.Options.NoExcessFPPrecision)
/*6760*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADD), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (fneg:f64 (fadd:f64 F8RC:f64:$FRB, (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC))) - Complexity = 9
                    // Dst: (FNMADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
                  /*SwitchType*/ 12,  MVT::f32,// ->6784
/*6772*/            OPC_CheckPatternPredicate, 0, // (!TM.Options.NoExcessFPPrecision)
/*6774*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADDS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (fneg:f32 (fadd:f32 F4RC:f32:$FRB, (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC))) - Complexity = 9
                    // Dst: (FNMADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
                  0, // EndSwitchType
/*6785*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 40,  TARGET_VAL(ISD::FSUB),// ->6829
/*6789*/        OPC_MoveChild, 0,
/*6791*/        OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*6794*/        OPC_RecordChild0, // #0 = $FRA
/*6795*/        OPC_RecordChild1, // #1 = $FRC
/*6796*/        OPC_MoveParent,
/*6797*/        OPC_RecordChild1, // #2 = $FRB
/*6798*/        OPC_MoveParent,
/*6799*/        OPC_SwitchType /*2 cases */, 12,  MVT::f64,// ->6814
/*6802*/          OPC_CheckPatternPredicate, 0, // (!TM.Options.NoExcessFPPrecision)
/*6804*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fneg:f64 (fsub:f64 (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC), F8RC:f64:$FRB)) - Complexity = 9
                  // Dst: (FNMSUB:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
                /*SwitchType*/ 12,  MVT::f32,// ->6828
/*6816*/          OPC_CheckPatternPredicate, 0, // (!TM.Options.NoExcessFPPrecision)
/*6818*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fneg:f32 (fsub:f32 (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC), F4RC:f32:$FRB)) - Complexity = 9
                  // Dst: (FNMSUBS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::FABS),// ->6856
/*6832*/        OPC_RecordChild0, // #0 = $frB
/*6833*/        OPC_MoveParent,
/*6834*/        OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->6845
/*6837*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSS), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fneg:f32 (fabs:f32 F4RC:f32:$frB)) - Complexity = 6
                  // Dst: (FNABSS:f32 F4RC:f32:$frB)
                /*SwitchType*/ 8,  MVT::f64,// ->6855
/*6847*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSD), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                  // Src: (fneg:f64 (fabs:f64 F8RC:f64:$frB)) - Complexity = 6
                  // Dst: (FNABSD:f64 F8RC:f64:$frB)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*6857*/    /*Scope*/ 23, /*->6881*/
/*6858*/      OPC_RecordChild0, // #0 = $frB
/*6859*/      OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->6870
/*6862*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGS), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 F4RC:f32:$frB) - Complexity = 3
                // Dst: (FNEGS:f32 F4RC:f32:$frB)
              /*SwitchType*/ 8,  MVT::f64,// ->6880
/*6872*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 F8RC:f64:$frB) - Complexity = 3
                // Dst: (FNEGD:f64 F8RC:f64:$frB)
              0, // EndSwitchType
/*6881*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 24,  TARGET_VAL(PPCISD::MTFSF),// ->6909
/*6885*/    OPC_CaptureGlueInput,
/*6886*/    OPC_RecordChild0, // #0 = $FM
/*6887*/    OPC_MoveChild, 0,
/*6889*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6892*/    OPC_CheckType, MVT::i32,
/*6894*/    OPC_MoveParent,
/*6895*/    OPC_RecordChild1, // #1 = $rT
/*6896*/    OPC_RecordChild2, // #2 = $FRB
/*6897*/    OPC_EmitConvertToTarget, 0,
/*6899*/    OPC_MorphNodeTo, TARGET_VAL(PPC::MTFSF), 0|OPFL_GlueInput,
                1/*#VTs*/, MVT::f64, 3/*#Ops*/, 3, 1, 2, 
            // Src: (PPCmtfsf:f64 (imm:i32):$FM, F8RC:f64:$rT, F8RC:f64:$FRB) - Complexity = 6
            // Dst: (MTFSF:f64 (imm:i32):$FM, F8RC:f64:$rT, F8RC:f64:$FRB)
          /*SwitchOpcode*/ 47|128,1/*175*/,  TARGET_VAL(ISD::FADD),// ->7088
/*6913*/    OPC_Scope, 39, /*->6954*/ // 4 children in Scope
/*6915*/      OPC_MoveChild, 0,
/*6917*/      OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*6920*/      OPC_RecordChild0, // #0 = $FRA
/*6921*/      OPC_RecordChild1, // #1 = $FRC
/*6922*/      OPC_MoveParent,
/*6923*/      OPC_RecordChild1, // #2 = $FRB
/*6924*/      OPC_SwitchType /*2 cases */, 12,  MVT::f64,// ->6939
/*6927*/        OPC_CheckPatternPredicate, 0, // (!TM.Options.NoExcessFPPrecision)
/*6929*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FMADD), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fadd:f64 (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC), F8RC:f64:$FRB) - Complexity = 6
                // Dst: (FMADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
              /*SwitchType*/ 12,  MVT::f32,// ->6953
/*6941*/        OPC_CheckPatternPredicate, 0, // (!TM.Options.NoExcessFPPrecision)
/*6943*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FMADDS), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fadd:f32 (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC), F4RC:f32:$FRB) - Complexity = 6
                // Dst: (FMADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
              0, // EndSwitchType
/*6954*/    /*Scope*/ 68, /*->7023*/
/*6955*/      OPC_RecordChild0, // #0 = $FRB
/*6956*/      OPC_Scope, 38, /*->6996*/ // 2 children in Scope
/*6958*/        OPC_MoveChild, 1,
/*6960*/        OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*6963*/        OPC_RecordChild0, // #1 = $FRA
/*6964*/        OPC_RecordChild1, // #2 = $FRC
/*6965*/        OPC_MoveParent,
/*6966*/        OPC_SwitchType /*2 cases */, 12,  MVT::f64,// ->6981
/*6969*/          OPC_CheckPatternPredicate, 0, // (!TM.Options.NoExcessFPPrecision)
/*6971*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FMADD), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 2, 0, 
                  // Src: (fadd:f64 F8RC:f64:$FRB, (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC)) - Complexity = 6
                  // Dst: (FMADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
                /*SwitchType*/ 12,  MVT::f32,// ->6995
/*6983*/          OPC_CheckPatternPredicate, 0, // (!TM.Options.NoExcessFPPrecision)
/*6985*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FMADDS), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 2, 0, 
                  // Src: (fadd:f32 F4RC:f32:$FRB, (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC)) - Complexity = 6
                  // Dst: (FMADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
                0, // EndSwitchType
/*6996*/      /*Scope*/ 25, /*->7022*/
/*6997*/        OPC_RecordChild1, // #1 = $FRB
/*6998*/        OPC_SwitchType /*2 cases */, 9,  MVT::f64,// ->7010
/*7001*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FADD), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fadd:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
                  // Dst: (FADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
                /*SwitchType*/ 9,  MVT::f32,// ->7021
/*7012*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FADDS), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fadd:f32 F4RC:f32:$FRA, F4RC:f32:$FRB) - Complexity = 3
                  // Dst: (FADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
                0, // EndSwitchType
/*7022*/      0, /*End of Scope*/
/*7023*/    /*Scope*/ 23, /*->7047*/
/*7024*/      OPC_MoveChild, 0,
/*7026*/      OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*7029*/      OPC_RecordChild0, // #0 = $vA
/*7030*/      OPC_RecordChild1, // #1 = $vC
/*7031*/      OPC_MoveParent,
/*7032*/      OPC_RecordChild1, // #2 = $vB
/*7033*/      OPC_CheckType, MVT::v4f32,
/*7035*/      OPC_CheckPatternPredicate, 0, // (!TM.Options.NoExcessFPPrecision)
/*7037*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fadd:v4f32 (fmul:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC), VRRC:v4f32:$vB) - Complexity = 6
              // Dst: (VMADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, VRRC:v4f32:$vB)
/*7047*/    /*Scope*/ 39, /*->7087*/
/*7048*/      OPC_RecordChild0, // #0 = $vB
/*7049*/      OPC_Scope, 22, /*->7073*/ // 2 children in Scope
/*7051*/        OPC_MoveChild, 1,
/*7053*/        OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*7056*/        OPC_RecordChild0, // #1 = $vA
/*7057*/        OPC_RecordChild1, // #2 = $vC
/*7058*/        OPC_MoveParent,
/*7059*/        OPC_CheckType, MVT::v4f32,
/*7061*/        OPC_CheckPatternPredicate, 0, // (!TM.Options.NoExcessFPPrecision)
/*7063*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 1, 2, 0, 
                // Src: (fadd:v4f32 VRRC:v4f32:$vB, (fmul:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC)) - Complexity = 6
                // Dst: (VMADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, VRRC:v4f32:$vB)
/*7073*/      /*Scope*/ 12, /*->7086*/
/*7074*/        OPC_RecordChild1, // #1 = $vB
/*7075*/        OPC_CheckType, MVT::v4f32,
/*7077*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VADDFP), 0,
                    1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 3
                // Dst: (VADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*7086*/      0, /*End of Scope*/
/*7087*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 35|128,1/*163*/,  TARGET_VAL(ISD::FSUB),// ->7255
/*7092*/    OPC_Scope, 39, /*->7133*/ // 4 children in Scope
/*7094*/      OPC_MoveChild, 0,
/*7096*/      OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*7099*/      OPC_RecordChild0, // #0 = $FRA
/*7100*/      OPC_RecordChild1, // #1 = $FRC
/*7101*/      OPC_MoveParent,
/*7102*/      OPC_RecordChild1, // #2 = $FRB
/*7103*/      OPC_SwitchType /*2 cases */, 12,  MVT::f64,// ->7118
/*7106*/        OPC_CheckPatternPredicate, 0, // (!TM.Options.NoExcessFPPrecision)
/*7108*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUB), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fsub:f64 (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC), F8RC:f64:$FRB) - Complexity = 6
                // Dst: (FMSUB:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
              /*SwitchType*/ 12,  MVT::f32,// ->7132
/*7120*/        OPC_CheckPatternPredicate, 0, // (!TM.Options.NoExcessFPPrecision)
/*7122*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUBS), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fsub:f32 (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC), F4RC:f32:$FRB) - Complexity = 6
                // Dst: (FMSUBS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
              0, // EndSwitchType
/*7133*/    /*Scope*/ 68, /*->7202*/
/*7134*/      OPC_RecordChild0, // #0 = $B
/*7135*/      OPC_Scope, 38, /*->7175*/ // 2 children in Scope
/*7137*/        OPC_MoveChild, 1,
/*7139*/        OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*7142*/        OPC_RecordChild0, // #1 = $A
/*7143*/        OPC_RecordChild1, // #2 = $C
/*7144*/        OPC_MoveParent,
/*7145*/        OPC_SwitchType /*2 cases */, 12,  MVT::f64,// ->7160
/*7148*/          OPC_CheckPatternPredicate, 0, // (!TM.Options.NoExcessFPPrecision)
/*7150*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 2, 0, 
                  // Src: (fsub:f64 F8RC:f64:$B, (fmul:f64 F8RC:f64:$A, F8RC:f64:$C)) - Complexity = 6
                  // Dst: (FNMSUB:f64 F8RC:f64:$A, F8RC:f64:$C, F8RC:f64:$B)
                /*SwitchType*/ 12,  MVT::f32,// ->7174
/*7162*/          OPC_CheckPatternPredicate, 0, // (!TM.Options.NoExcessFPPrecision)
/*7164*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 2, 0, 
                  // Src: (fsub:f32 F4RC:f32:$B, (fmul:f32 F4RC:f32:$A, F4RC:f32:$C)) - Complexity = 6
                  // Dst: (FNMSUBS:f32 F4RC:f32:$A, F4RC:f32:$C, F4RC:f32:$B)
                0, // EndSwitchType
/*7175*/      /*Scope*/ 25, /*->7201*/
/*7176*/        OPC_RecordChild1, // #1 = $FRB
/*7177*/        OPC_SwitchType /*2 cases */, 9,  MVT::f64,// ->7189
/*7180*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FSUB), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
                  // Dst: (FSUB:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
                /*SwitchType*/ 9,  MVT::f32,// ->7200
/*7191*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FSUBS), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f32 F4RC:f32:$FRA, F4RC:f32:$FRB) - Complexity = 3
                  // Dst: (FSUBS:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
                0, // EndSwitchType
/*7201*/      0, /*End of Scope*/
/*7202*/    /*Scope*/ 37, /*->7240*/
/*7203*/      OPC_MoveChild, 0,
/*7205*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*7208*/      OPC_CheckPredicate, 66, // Predicate_V_immneg0
/*7210*/      OPC_MoveParent,
/*7211*/      OPC_MoveChild, 1,
/*7213*/      OPC_CheckOpcode, TARGET_VAL(ISD::FSUB),
/*7216*/      OPC_MoveChild, 0,
/*7218*/      OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*7221*/      OPC_RecordChild0, // #0 = $vA
/*7222*/      OPC_RecordChild1, // #1 = $vC
/*7223*/      OPC_MoveParent,
/*7224*/      OPC_RecordChild1, // #2 = $vB
/*7225*/      OPC_MoveParent,
/*7226*/      OPC_CheckType, MVT::v4f32,
/*7228*/      OPC_CheckPatternPredicate, 0, // (!TM.Options.NoExcessFPPrecision)
/*7230*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fsub:v4f32 (build_vector:v4f32)<<P:Predicate_V_immneg0>>, (fsub:v4f32 (fmul:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC), VRRC:v4f32:$vB)) - Complexity = 13
              // Dst: (VNMSUBFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, VRRC:v4f32:$vB)
/*7240*/    /*Scope*/ 13, /*->7254*/
/*7241*/      OPC_RecordChild0, // #0 = $vA
/*7242*/      OPC_RecordChild1, // #1 = $vB
/*7243*/      OPC_CheckType, MVT::v4f32,
/*7245*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 3
              // Dst: (VSUBFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*7254*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIWZ),// ->7269
/*7258*/    OPC_RecordChild0, // #0 = $frB
/*7259*/    OPC_CheckType, MVT::f64,
/*7261*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIWZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiwz:f64 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FCTIWZ:f64 F8RC:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::FP_ROUND),// ->7281
/*7272*/    OPC_RecordChild0, // #0 = $frB
/*7273*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FRSP), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fround:f32 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FRSP:f32 F8RC:f64:$frB)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FSQRT),// ->7307
/*7284*/    OPC_RecordChild0, // #0 = $frB
/*7285*/    OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->7296
/*7288*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRT), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f64 F8RC:f64:$frB) - Complexity = 3
              // Dst: (FSQRT:f64 F8RC:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->7306
/*7298*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRTS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 F4RC:f32:$frB) - Complexity = 3
              // Dst: (FSQRTS:f32 F4RC:f32:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FABS),// ->7333
/*7310*/    OPC_RecordChild0, // #0 = $frB
/*7311*/    OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->7322
/*7314*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FABSS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 F4RC:f32:$frB) - Complexity = 3
              // Dst: (FABSS:f32 F4RC:f32:$frB)
            /*SwitchType*/ 8,  MVT::f64,// ->7332
/*7324*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FABSD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fabs:f64 F8RC:f64:$frB) - Complexity = 3
              // Dst: (FABSD:f64 F8RC:f64:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 7,  TARGET_VAL(PPCISD::MFFS),// ->7343
/*7336*/    OPC_MorphNodeTo, TARGET_VAL(PPC::MFFS), 0|OPFL_GlueOutput,
                1/*#VTs*/, MVT::f64, 0/*#Ops*/, 
            // Src: (PPCmffs:f64) - Complexity = 3
            // Dst: (MFFS:f64)
          /*SwitchOpcode*/ 14,  TARGET_VAL(PPCISD::FADDRTZ),// ->7360
/*7346*/    OPC_CaptureGlueInput,
/*7347*/    OPC_RecordChild0, // #0 = $FRA
/*7348*/    OPC_RecordChild1, // #1 = $FRB
/*7349*/    OPC_CheckType, MVT::f64,
/*7351*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FADDrtz), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCfaddrtz:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
            // Dst: (FADDrtz:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::FSEL),// ->7392
/*7363*/    OPC_RecordChild0, // #0 = $FRA
/*7364*/    OPC_RecordChild1, // #1 = $FRC
/*7365*/    OPC_RecordChild2, // #2 = $FRB
/*7366*/    OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->7379
/*7369*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSELD), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB) - Complexity = 3
              // Dst: (FSELD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
            /*SwitchType*/ 10,  MVT::f32,// ->7391
/*7381*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSELS), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f32 F8RC:f64:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB) - Complexity = 3
              // Dst: (FSELS:f32 F8RC:f64:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FDIV),// ->7421
/*7395*/    OPC_RecordChild0, // #0 = $FRA
/*7396*/    OPC_RecordChild1, // #1 = $FRB
/*7397*/    OPC_SwitchType /*2 cases */, 9,  MVT::f64,// ->7409
/*7400*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FDIV), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
              // Dst: (FDIV:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->7420
/*7411*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FDIVS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 F4RC:f32:$FRA, F4RC:f32:$FRB) - Complexity = 3
              // Dst: (FDIVS:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FMUL),// ->7469
/*7424*/    OPC_RecordChild0, // #0 = $FRA
/*7425*/    OPC_RecordChild1, // #1 = $FRB
/*7426*/    OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->7438
/*7429*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FMUL), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
              // Dst: (FMUL:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->7449
/*7440*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FMULS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRB) - Complexity = 3
              // Dst: (FMULS:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
            /*SwitchType*/ 17,  MVT::v4f32,// ->7468
/*7451*/      OPC_EmitNode, TARGET_VAL(PPC::V_SET0), 0,
                  1/*#VTs*/, MVT::v4i32, 0/*#Ops*/,  // Results = #2 
/*7458*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fmul:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 3
              // Dst: (VMADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, (V_SET0:v4i32))
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FP_EXTEND),// ->7485
/*7472*/    OPC_RecordChild0, // #0 = $src
/*7473*/    OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*7476*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (fextend:f64 F4RC:f32:$src) - Complexity = 3
            // Dst: (COPY_TO_REGCLASS:f64 F4RC:f32:$src, F8RC:f64)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCFID),// ->7499
/*7488*/    OPC_RecordChild0, // #0 = $frB
/*7489*/    OPC_CheckType, MVT::f64,
/*7491*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCFID), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfcfid:f64 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FCFID:f64 F8RC:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIDZ),// ->7513
/*7502*/    OPC_RecordChild0, // #0 = $frB
/*7503*/    OPC_CheckType, MVT::f64,
/*7505*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIDZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctidz:f64 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FCTIDZ:f64 F8RC:f64:$frB)
          /*SwitchOpcode*/ 113,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->7629
/*7516*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*7517*/    OPC_MoveChild, 1,
/*7519*/    OPC_Scope, 18, /*->7539*/ // 6 children in Scope
/*7521*/      OPC_CheckInteger, 79|128,6/*847*/, 
/*7524*/      OPC_MoveParent,
/*7525*/      OPC_RecordChild2, // #1 = $src
/*7526*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*7529*/      OPC_EmitMergeInputChains1_0,
/*7530*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEBX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v16i8 847:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEBX:v16i8 xoaddr:iPTR:$src)
/*7539*/    /*Scope*/ 18, /*->7558*/
/*7540*/      OPC_CheckInteger, 80|128,6/*848*/, 
/*7543*/      OPC_MoveParent,
/*7544*/      OPC_RecordChild2, // #1 = $src
/*7545*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*7548*/      OPC_EmitMergeInputChains1_0,
/*7549*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEHX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v8i16 848:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEHX:v8i16 xoaddr:iPTR:$src)
/*7558*/    /*Scope*/ 18, /*->7577*/
/*7559*/      OPC_CheckInteger, 81|128,6/*849*/, 
/*7562*/      OPC_MoveParent,
/*7563*/      OPC_RecordChild2, // #1 = $src
/*7564*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*7567*/      OPC_EmitMergeInputChains1_0,
/*7568*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEWX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 849:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEWX:v4i32 xoaddr:iPTR:$src)
/*7577*/    /*Scope*/ 18, /*->7596*/
/*7578*/      OPC_CheckInteger, 84|128,6/*852*/, 
/*7581*/      OPC_MoveParent,
/*7582*/      OPC_RecordChild2, // #1 = $src
/*7583*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*7586*/      OPC_EmitMergeInputChains1_0,
/*7587*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 852:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*7596*/    /*Scope*/ 18, /*->7615*/
/*7597*/      OPC_CheckInteger, 85|128,6/*853*/, 
/*7600*/      OPC_MoveParent,
/*7601*/      OPC_RecordChild2, // #1 = $src
/*7602*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*7605*/      OPC_EmitMergeInputChains1_0,
/*7606*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVXL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 853:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVXL:v4i32 xoaddr:iPTR:$src)
/*7615*/    /*Scope*/ 12, /*->7628*/
/*7616*/      OPC_CheckInteger, 86|128,6/*854*/, 
/*7619*/      OPC_MoveParent,
/*7620*/      OPC_EmitMergeInputChains1_0,
/*7621*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MFVSCR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:v8i16 854:iPTR) - Complexity = 8
              // Dst: (MFVSCR:v8i16)
/*7628*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 22|128,13/*1686*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->9319
/*7633*/    OPC_MoveChild, 0,
/*7635*/    OPC_Scope, 17, /*->7654*/ // 103 children in Scope
/*7637*/      OPC_CheckInteger, 82|128,6/*850*/, 
/*7640*/      OPC_MoveParent,
/*7641*/      OPC_RecordChild1, // #0 = $src
/*7642*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*7645*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSL), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 850:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSL:v16i8 xoaddr:iPTR:$src)
/*7654*/    /*Scope*/ 17, /*->7672*/
/*7655*/      OPC_CheckInteger, 83|128,6/*851*/, 
/*7658*/      OPC_MoveParent,
/*7659*/      OPC_RecordChild1, // #0 = $src
/*7660*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*7663*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSR), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 851:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSR:v16i8 xoaddr:iPTR:$src)
/*7672*/    /*Scope*/ 23, /*->7696*/
/*7673*/      OPC_CheckInteger, 6|128,7/*902*/, 
/*7676*/      OPC_MoveParent,
/*7677*/      OPC_RecordChild1, // #0 = $vB
/*7678*/      OPC_RecordChild2, // #1 = $UIMM
/*7679*/      OPC_MoveChild, 2,
/*7681*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7684*/      OPC_MoveParent,
/*7685*/      OPC_EmitConvertToTarget, 1,
/*7687*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
              // Src: (intrinsic_wo_chain:v4i32 902:iPTR, VRRC:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
              // Dst: (VCTSXS:v4i32 (imm:i32):$UIMM, VRRC:v4f32:$vB)
/*7696*/    /*Scope*/ 23, /*->7720*/
/*7697*/      OPC_CheckInteger, 7|128,7/*903*/, 
/*7700*/      OPC_MoveParent,
/*7701*/      OPC_RecordChild1, // #0 = $vB
/*7702*/      OPC_RecordChild2, // #1 = $UIMM
/*7703*/      OPC_MoveChild, 2,
/*7705*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7708*/      OPC_MoveParent,
/*7709*/      OPC_EmitConvertToTarget, 1,
/*7711*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
              // Src: (intrinsic_wo_chain:v4i32 903:iPTR, VRRC:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
              // Dst: (VCTUXS:v4i32 (imm:i32):$UIMM, VRRC:v4f32:$vB)
/*7720*/    /*Scope*/ 17, /*->7738*/
/*7721*/      OPC_CheckInteger, 18|128,7/*914*/, 
/*7724*/      OPC_MoveParent,
/*7725*/      OPC_RecordChild1, // #0 = $vA
/*7726*/      OPC_RecordChild2, // #1 = $vB
/*7727*/      OPC_RecordChild3, // #2 = $vC
/*7728*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 914:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC) - Complexity = 8
              // Dst: (VMHADDSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
/*7738*/    /*Scope*/ 17, /*->7756*/
/*7739*/      OPC_CheckInteger, 19|128,7/*915*/, 
/*7742*/      OPC_MoveParent,
/*7743*/      OPC_RecordChild1, // #0 = $vA
/*7744*/      OPC_RecordChild2, // #1 = $vB
/*7745*/      OPC_RecordChild3, // #2 = $vC
/*7746*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHRADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 915:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC) - Complexity = 8
              // Dst: (VMHRADDSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
/*7756*/    /*Scope*/ 17, /*->7774*/
/*7757*/      OPC_CheckInteger, 27|128,7/*923*/, 
/*7760*/      OPC_MoveParent,
/*7761*/      OPC_RecordChild1, // #0 = $vA
/*7762*/      OPC_RecordChild2, // #1 = $vB
/*7763*/      OPC_RecordChild3, // #2 = $vC
/*7764*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMLADDUHM), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 923:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC) - Complexity = 8
              // Dst: (VMLADDUHM:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
/*7774*/    /*Scope*/ 17, /*->7792*/
/*7775*/      OPC_CheckInteger, 43|128,7/*939*/, 
/*7778*/      OPC_MoveParent,
/*7779*/      OPC_RecordChild1, // #0 = $vA
/*7780*/      OPC_RecordChild2, // #1 = $vB
/*7781*/      OPC_RecordChild3, // #2 = $vC
/*7782*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 939:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v16i8:$vC) - Complexity = 8
              // Dst: (VPERM:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v16i8:$vC)
/*7792*/    /*Scope*/ 17, /*->7810*/
/*7793*/      OPC_CheckInteger, 60|128,7/*956*/, 
/*7796*/      OPC_MoveParent,
/*7797*/      OPC_RecordChild1, // #0 = $vA
/*7798*/      OPC_RecordChild2, // #1 = $vB
/*7799*/      OPC_RecordChild3, // #2 = $vC
/*7800*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSEL), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 956:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VSEL:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v4i32:$vC)
/*7810*/    /*Scope*/ 15, /*->7826*/
/*7811*/      OPC_CheckInteger, 93|128,6/*861*/, 
/*7814*/      OPC_MoveParent,
/*7815*/      OPC_RecordChild1, // #0 = $vA
/*7816*/      OPC_RecordChild2, // #1 = $vB
/*7817*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 861:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VADDCUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*7826*/    /*Scope*/ 15, /*->7842*/
/*7827*/      OPC_CheckInteger, 94|128,6/*862*/, 
/*7830*/      OPC_MoveParent,
/*7831*/      OPC_RecordChild1, // #0 = $vA
/*7832*/      OPC_RecordChild2, // #1 = $vB
/*7833*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 862:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VADDSBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*7842*/    /*Scope*/ 15, /*->7858*/
/*7843*/      OPC_CheckInteger, 95|128,6/*863*/, 
/*7846*/      OPC_MoveParent,
/*7847*/      OPC_RecordChild1, // #0 = $vA
/*7848*/      OPC_RecordChild2, // #1 = $vB
/*7849*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 863:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VADDSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*7858*/    /*Scope*/ 15, /*->7874*/
/*7859*/      OPC_CheckInteger, 96|128,6/*864*/, 
/*7862*/      OPC_MoveParent,
/*7863*/      OPC_RecordChild1, // #0 = $vA
/*7864*/      OPC_RecordChild2, // #1 = $vB
/*7865*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 864:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VADDSWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*7874*/    /*Scope*/ 15, /*->7890*/
/*7875*/      OPC_CheckInteger, 97|128,6/*865*/, 
/*7878*/      OPC_MoveParent,
/*7879*/      OPC_RecordChild1, // #0 = $vA
/*7880*/      OPC_RecordChild2, // #1 = $vB
/*7881*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 865:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VADDUBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*7890*/    /*Scope*/ 15, /*->7906*/
/*7891*/      OPC_CheckInteger, 98|128,6/*866*/, 
/*7894*/      OPC_MoveParent,
/*7895*/      OPC_RecordChild1, // #0 = $vA
/*7896*/      OPC_RecordChild2, // #1 = $vB
/*7897*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 866:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VADDUHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*7906*/    /*Scope*/ 15, /*->7922*/
/*7907*/      OPC_CheckInteger, 99|128,6/*867*/, 
/*7910*/      OPC_MoveParent,
/*7911*/      OPC_RecordChild1, // #0 = $vA
/*7912*/      OPC_RecordChild2, // #1 = $vB
/*7913*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 867:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VADDUWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*7922*/    /*Scope*/ 15, /*->7938*/
/*7923*/      OPC_CheckInteger, 100|128,6/*868*/, 
/*7926*/      OPC_MoveParent,
/*7927*/      OPC_RecordChild1, // #0 = $vA
/*7928*/      OPC_RecordChild2, // #1 = $vB
/*7929*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 868:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*7938*/    /*Scope*/ 15, /*->7954*/
/*7939*/      OPC_CheckInteger, 101|128,6/*869*/, 
/*7942*/      OPC_MoveParent,
/*7943*/      OPC_RecordChild1, // #0 = $vA
/*7944*/      OPC_RecordChild2, // #1 = $vB
/*7945*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 869:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*7954*/    /*Scope*/ 15, /*->7970*/
/*7955*/      OPC_CheckInteger, 102|128,6/*870*/, 
/*7958*/      OPC_MoveParent,
/*7959*/      OPC_RecordChild1, // #0 = $vA
/*7960*/      OPC_RecordChild2, // #1 = $vB
/*7961*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 870:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*7970*/    /*Scope*/ 15, /*->7986*/
/*7971*/      OPC_CheckInteger, 103|128,6/*871*/, 
/*7974*/      OPC_MoveParent,
/*7975*/      OPC_RecordChild1, // #0 = $vA
/*7976*/      OPC_RecordChild2, // #1 = $vB
/*7977*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 871:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*7986*/    /*Scope*/ 15, /*->8002*/
/*7987*/      OPC_CheckInteger, 104|128,6/*872*/, 
/*7990*/      OPC_MoveParent,
/*7991*/      OPC_RecordChild1, // #0 = $vA
/*7992*/      OPC_RecordChild2, // #1 = $vB
/*7993*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 872:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8002*/    /*Scope*/ 15, /*->8018*/
/*8003*/      OPC_CheckInteger, 105|128,6/*873*/, 
/*8006*/      OPC_MoveParent,
/*8007*/      OPC_RecordChild1, // #0 = $vA
/*8008*/      OPC_RecordChild2, // #1 = $vB
/*8009*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 873:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8018*/    /*Scope*/ 15, /*->8034*/
/*8019*/      OPC_CheckInteger, 12|128,7/*908*/, 
/*8022*/      OPC_MoveParent,
/*8023*/      OPC_RecordChild1, // #0 = $vA
/*8024*/      OPC_RecordChild2, // #1 = $vB
/*8025*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 908:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8034*/    /*Scope*/ 15, /*->8050*/
/*8035*/      OPC_CheckInteger, 13|128,7/*909*/, 
/*8038*/      OPC_MoveParent,
/*8039*/      OPC_RecordChild1, // #0 = $vA
/*8040*/      OPC_RecordChild2, // #1 = $vB
/*8041*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 909:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8050*/    /*Scope*/ 15, /*->8066*/
/*8051*/      OPC_CheckInteger, 14|128,7/*910*/, 
/*8054*/      OPC_MoveParent,
/*8055*/      OPC_RecordChild1, // #0 = $vA
/*8056*/      OPC_RecordChild2, // #1 = $vB
/*8057*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 910:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8066*/    /*Scope*/ 15, /*->8082*/
/*8067*/      OPC_CheckInteger, 15|128,7/*911*/, 
/*8070*/      OPC_MoveParent,
/*8071*/      OPC_RecordChild1, // #0 = $vA
/*8072*/      OPC_RecordChild2, // #1 = $vB
/*8073*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 911:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8082*/    /*Scope*/ 15, /*->8098*/
/*8083*/      OPC_CheckInteger, 16|128,7/*912*/, 
/*8086*/      OPC_MoveParent,
/*8087*/      OPC_RecordChild1, // #0 = $vA
/*8088*/      OPC_RecordChild2, // #1 = $vB
/*8089*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 912:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8098*/    /*Scope*/ 15, /*->8114*/
/*8099*/      OPC_CheckInteger, 17|128,7/*913*/, 
/*8102*/      OPC_MoveParent,
/*8103*/      OPC_RecordChild1, // #0 = $vA
/*8104*/      OPC_RecordChild2, // #1 = $vB
/*8105*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 913:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8114*/    /*Scope*/ 15, /*->8130*/
/*8115*/      OPC_CheckInteger, 21|128,7/*917*/, 
/*8118*/      OPC_MoveParent,
/*8119*/      OPC_RecordChild1, // #0 = $vA
/*8120*/      OPC_RecordChild2, // #1 = $vB
/*8121*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 917:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMINSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8130*/    /*Scope*/ 15, /*->8146*/
/*8131*/      OPC_CheckInteger, 22|128,7/*918*/, 
/*8134*/      OPC_MoveParent,
/*8135*/      OPC_RecordChild1, // #0 = $vA
/*8136*/      OPC_RecordChild2, // #1 = $vB
/*8137*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 918:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMINSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8146*/    /*Scope*/ 15, /*->8162*/
/*8147*/      OPC_CheckInteger, 23|128,7/*919*/, 
/*8150*/      OPC_MoveParent,
/*8151*/      OPC_RecordChild1, // #0 = $vA
/*8152*/      OPC_RecordChild2, // #1 = $vB
/*8153*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 919:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMINSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8162*/    /*Scope*/ 15, /*->8178*/
/*8163*/      OPC_CheckInteger, 24|128,7/*920*/, 
/*8166*/      OPC_MoveParent,
/*8167*/      OPC_RecordChild1, // #0 = $vA
/*8168*/      OPC_RecordChild2, // #1 = $vB
/*8169*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 920:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMINUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8178*/    /*Scope*/ 15, /*->8194*/
/*8179*/      OPC_CheckInteger, 25|128,7/*921*/, 
/*8182*/      OPC_MoveParent,
/*8183*/      OPC_RecordChild1, // #0 = $vA
/*8184*/      OPC_RecordChild2, // #1 = $vB
/*8185*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 921:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMINUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8194*/    /*Scope*/ 15, /*->8210*/
/*8195*/      OPC_CheckInteger, 26|128,7/*922*/, 
/*8198*/      OPC_MoveParent,
/*8199*/      OPC_RecordChild1, // #0 = $vA
/*8200*/      OPC_RecordChild2, // #1 = $vB
/*8201*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 922:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMINUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8210*/    /*Scope*/ 17, /*->8228*/
/*8211*/      OPC_CheckInteger, 28|128,7/*924*/, 
/*8214*/      OPC_MoveParent,
/*8215*/      OPC_RecordChild1, // #0 = $vA
/*8216*/      OPC_RecordChild2, // #1 = $vB
/*8217*/      OPC_RecordChild3, // #2 = $vC
/*8218*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMMBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 924:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMMBM:v4i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC)
/*8228*/    /*Scope*/ 17, /*->8246*/
/*8229*/      OPC_CheckInteger, 29|128,7/*925*/, 
/*8232*/      OPC_MoveParent,
/*8233*/      OPC_RecordChild1, // #0 = $vA
/*8234*/      OPC_RecordChild2, // #1 = $vB
/*8235*/      OPC_RecordChild3, // #2 = $vC
/*8236*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 925:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHM:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*8246*/    /*Scope*/ 17, /*->8264*/
/*8247*/      OPC_CheckInteger, 30|128,7/*926*/, 
/*8250*/      OPC_MoveParent,
/*8251*/      OPC_RecordChild1, // #0 = $vA
/*8252*/      OPC_RecordChild2, // #1 = $vB
/*8253*/      OPC_RecordChild3, // #2 = $vC
/*8254*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 926:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHS:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*8264*/    /*Scope*/ 17, /*->8282*/
/*8265*/      OPC_CheckInteger, 31|128,7/*927*/, 
/*8268*/      OPC_MoveParent,
/*8269*/      OPC_RecordChild1, // #0 = $vA
/*8270*/      OPC_RecordChild2, // #1 = $vB
/*8271*/      OPC_RecordChild3, // #2 = $vC
/*8272*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 927:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUBM:v4i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC)
/*8282*/    /*Scope*/ 17, /*->8300*/
/*8283*/      OPC_CheckInteger, 32|128,7/*928*/, 
/*8286*/      OPC_MoveParent,
/*8287*/      OPC_RecordChild1, // #0 = $vA
/*8288*/      OPC_RecordChild2, // #1 = $vB
/*8289*/      OPC_RecordChild3, // #2 = $vC
/*8290*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 928:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHM:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*8300*/    /*Scope*/ 17, /*->8318*/
/*8301*/      OPC_CheckInteger, 33|128,7/*929*/, 
/*8304*/      OPC_MoveParent,
/*8305*/      OPC_RecordChild1, // #0 = $vA
/*8306*/      OPC_RecordChild2, // #1 = $vB
/*8307*/      OPC_RecordChild3, // #2 = $vC
/*8308*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 929:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHS:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*8318*/    /*Scope*/ 15, /*->8334*/
/*8319*/      OPC_CheckInteger, 34|128,7/*930*/, 
/*8322*/      OPC_MoveParent,
/*8323*/      OPC_RecordChild1, // #0 = $vA
/*8324*/      OPC_RecordChild2, // #1 = $vB
/*8325*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 930:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULESB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8334*/    /*Scope*/ 15, /*->8350*/
/*8335*/      OPC_CheckInteger, 35|128,7/*931*/, 
/*8338*/      OPC_MoveParent,
/*8339*/      OPC_RecordChild1, // #0 = $vA
/*8340*/      OPC_RecordChild2, // #1 = $vB
/*8341*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 931:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULESH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8350*/    /*Scope*/ 15, /*->8366*/
/*8351*/      OPC_CheckInteger, 36|128,7/*932*/, 
/*8354*/      OPC_MoveParent,
/*8355*/      OPC_RecordChild1, // #0 = $vA
/*8356*/      OPC_RecordChild2, // #1 = $vB
/*8357*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 932:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULEUB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8366*/    /*Scope*/ 15, /*->8382*/
/*8367*/      OPC_CheckInteger, 37|128,7/*933*/, 
/*8370*/      OPC_MoveParent,
/*8371*/      OPC_RecordChild1, // #0 = $vA
/*8372*/      OPC_RecordChild2, // #1 = $vB
/*8373*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 933:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULEUH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8382*/    /*Scope*/ 15, /*->8398*/
/*8383*/      OPC_CheckInteger, 38|128,7/*934*/, 
/*8386*/      OPC_MoveParent,
/*8387*/      OPC_RecordChild1, // #0 = $vA
/*8388*/      OPC_RecordChild2, // #1 = $vB
/*8389*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 934:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOSB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8398*/    /*Scope*/ 15, /*->8414*/
/*8399*/      OPC_CheckInteger, 39|128,7/*935*/, 
/*8402*/      OPC_MoveParent,
/*8403*/      OPC_RecordChild1, // #0 = $vA
/*8404*/      OPC_RecordChild2, // #1 = $vB
/*8405*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 935:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOSH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8414*/    /*Scope*/ 15, /*->8430*/
/*8415*/      OPC_CheckInteger, 40|128,7/*936*/, 
/*8418*/      OPC_MoveParent,
/*8419*/      OPC_RecordChild1, // #0 = $vA
/*8420*/      OPC_RecordChild2, // #1 = $vB
/*8421*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 936:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOUB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8430*/    /*Scope*/ 15, /*->8446*/
/*8431*/      OPC_CheckInteger, 41|128,7/*937*/, 
/*8434*/      OPC_MoveParent,
/*8435*/      OPC_RecordChild1, // #0 = $vA
/*8436*/      OPC_RecordChild2, // #1 = $vB
/*8437*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 937:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOUH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8446*/    /*Scope*/ 15, /*->8462*/
/*8447*/      OPC_CheckInteger, 74|128,7/*970*/, 
/*8450*/      OPC_MoveParent,
/*8451*/      OPC_RecordChild1, // #0 = $vA
/*8452*/      OPC_RecordChild2, // #1 = $vB
/*8453*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 970:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBCUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8462*/    /*Scope*/ 15, /*->8478*/
/*8463*/      OPC_CheckInteger, 75|128,7/*971*/, 
/*8466*/      OPC_MoveParent,
/*8467*/      OPC_RecordChild1, // #0 = $vA
/*8468*/      OPC_RecordChild2, // #1 = $vB
/*8469*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 971:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBSBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8478*/    /*Scope*/ 15, /*->8494*/
/*8479*/      OPC_CheckInteger, 76|128,7/*972*/, 
/*8482*/      OPC_MoveParent,
/*8483*/      OPC_RecordChild1, // #0 = $vA
/*8484*/      OPC_RecordChild2, // #1 = $vB
/*8485*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 972:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8494*/    /*Scope*/ 15, /*->8510*/
/*8495*/      OPC_CheckInteger, 77|128,7/*973*/, 
/*8498*/      OPC_MoveParent,
/*8499*/      OPC_RecordChild1, // #0 = $vA
/*8500*/      OPC_RecordChild2, // #1 = $vB
/*8501*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 973:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBSWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8510*/    /*Scope*/ 15, /*->8526*/
/*8511*/      OPC_CheckInteger, 78|128,7/*974*/, 
/*8514*/      OPC_MoveParent,
/*8515*/      OPC_RecordChild1, // #0 = $vA
/*8516*/      OPC_RecordChild2, // #1 = $vB
/*8517*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 974:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBUBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8526*/    /*Scope*/ 15, /*->8542*/
/*8527*/      OPC_CheckInteger, 79|128,7/*975*/, 
/*8530*/      OPC_MoveParent,
/*8531*/      OPC_RecordChild1, // #0 = $vA
/*8532*/      OPC_RecordChild2, // #1 = $vB
/*8533*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 975:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBUHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8542*/    /*Scope*/ 15, /*->8558*/
/*8543*/      OPC_CheckInteger, 80|128,7/*976*/, 
/*8546*/      OPC_MoveParent,
/*8547*/      OPC_RecordChild1, // #0 = $vA
/*8548*/      OPC_RecordChild2, // #1 = $vB
/*8549*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 976:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBUWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8558*/    /*Scope*/ 15, /*->8574*/
/*8559*/      OPC_CheckInteger, 85|128,7/*981*/, 
/*8562*/      OPC_MoveParent,
/*8563*/      OPC_RecordChild1, // #0 = $vA
/*8564*/      OPC_RecordChild2, // #1 = $vB
/*8565*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUMSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 981:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUMSWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8574*/    /*Scope*/ 15, /*->8590*/
/*8575*/      OPC_CheckInteger, 81|128,7/*977*/, 
/*8578*/      OPC_MoveParent,
/*8579*/      OPC_RecordChild1, // #0 = $vA
/*8580*/      OPC_RecordChild2, // #1 = $vB
/*8581*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM2SWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 977:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM2SWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8590*/    /*Scope*/ 15, /*->8606*/
/*8591*/      OPC_CheckInteger, 82|128,7/*978*/, 
/*8594*/      OPC_MoveParent,
/*8595*/      OPC_RecordChild1, // #0 = $vA
/*8596*/      OPC_RecordChild2, // #1 = $vB
/*8597*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 978:iPTR, VRRC:v16i8:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SBS:v4i32 VRRC:v16i8:$vA, VRRC:v4i32:$vB)
/*8606*/    /*Scope*/ 15, /*->8622*/
/*8607*/      OPC_CheckInteger, 83|128,7/*979*/, 
/*8610*/      OPC_MoveParent,
/*8611*/      OPC_RecordChild1, // #0 = $vA
/*8612*/      OPC_RecordChild2, // #1 = $vB
/*8613*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SHS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 979:iPTR, VRRC:v8i16:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SHS:v4i32 VRRC:v8i16:$vA, VRRC:v4i32:$vB)
/*8622*/    /*Scope*/ 15, /*->8638*/
/*8623*/      OPC_CheckInteger, 84|128,7/*980*/, 
/*8626*/      OPC_MoveParent,
/*8627*/      OPC_RecordChild1, // #0 = $vA
/*8628*/      OPC_RecordChild2, // #1 = $vB
/*8629*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4UBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 980:iPTR, VRRC:v16i8:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4UBS:v4i32 VRRC:v16i8:$vA, VRRC:v4i32:$vB)
/*8638*/    /*Scope*/ 15, /*->8654*/
/*8639*/      OPC_CheckInteger, 56|128,7/*952*/, 
/*8642*/      OPC_MoveParent,
/*8643*/      OPC_RecordChild1, // #0 = $vA
/*8644*/      OPC_RecordChild2, // #1 = $vB
/*8645*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 952:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VRLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8654*/    /*Scope*/ 15, /*->8670*/
/*8655*/      OPC_CheckInteger, 57|128,7/*953*/, 
/*8658*/      OPC_MoveParent,
/*8659*/      OPC_RecordChild1, // #0 = $vA
/*8660*/      OPC_RecordChild2, // #1 = $vB
/*8661*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 953:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VRLH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8670*/    /*Scope*/ 15, /*->8686*/
/*8671*/      OPC_CheckInteger, 58|128,7/*954*/, 
/*8674*/      OPC_MoveParent,
/*8675*/      OPC_RecordChild1, // #0 = $vA
/*8676*/      OPC_RecordChild2, // #1 = $vB
/*8677*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 954:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VRLW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8686*/    /*Scope*/ 15, /*->8702*/
/*8687*/      OPC_CheckInteger, 61|128,7/*957*/, 
/*8690*/      OPC_MoveParent,
/*8691*/      OPC_RecordChild1, // #0 = $vA
/*8692*/      OPC_RecordChild2, // #1 = $vB
/*8693*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSL), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 957:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSL:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8702*/    /*Scope*/ 15, /*->8718*/
/*8703*/      OPC_CheckInteger, 64|128,7/*960*/, 
/*8706*/      OPC_MoveParent,
/*8707*/      OPC_RecordChild1, // #0 = $vA
/*8708*/      OPC_RecordChild2, // #1 = $vB
/*8709*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 960:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSLO:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8718*/    /*Scope*/ 15, /*->8734*/
/*8719*/      OPC_CheckInteger, 62|128,7/*958*/, 
/*8722*/      OPC_MoveParent,
/*8723*/      OPC_RecordChild1, // #0 = $vA
/*8724*/      OPC_RecordChild2, // #1 = $vB
/*8725*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 958:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8734*/    /*Scope*/ 15, /*->8750*/
/*8735*/      OPC_CheckInteger, 63|128,7/*959*/, 
/*8738*/      OPC_MoveParent,
/*8739*/      OPC_RecordChild1, // #0 = $vA
/*8740*/      OPC_RecordChild2, // #1 = $vB
/*8741*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 959:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSLH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8750*/    /*Scope*/ 15, /*->8766*/
/*8751*/      OPC_CheckInteger, 65|128,7/*961*/, 
/*8754*/      OPC_MoveParent,
/*8755*/      OPC_RecordChild1, // #0 = $vA
/*8756*/      OPC_RecordChild2, // #1 = $vB
/*8757*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 961:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSLW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8766*/    /*Scope*/ 15, /*->8782*/
/*8767*/      OPC_CheckInteger, 66|128,7/*962*/, 
/*8770*/      OPC_MoveParent,
/*8771*/      OPC_RecordChild1, // #0 = $vA
/*8772*/      OPC_RecordChild2, // #1 = $vB
/*8773*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 962:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8782*/    /*Scope*/ 15, /*->8798*/
/*8783*/      OPC_CheckInteger, 72|128,7/*968*/, 
/*8786*/      OPC_MoveParent,
/*8787*/      OPC_RecordChild1, // #0 = $vA
/*8788*/      OPC_RecordChild2, // #1 = $vB
/*8789*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 968:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSRO:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8798*/    /*Scope*/ 15, /*->8814*/
/*8799*/      OPC_CheckInteger, 67|128,7/*963*/, 
/*8802*/      OPC_MoveParent,
/*8803*/      OPC_RecordChild1, // #0 = $vA
/*8804*/      OPC_RecordChild2, // #1 = $vB
/*8805*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 963:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSRAB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8814*/    /*Scope*/ 15, /*->8830*/
/*8815*/      OPC_CheckInteger, 68|128,7/*964*/, 
/*8818*/      OPC_MoveParent,
/*8819*/      OPC_RecordChild1, // #0 = $vA
/*8820*/      OPC_RecordChild2, // #1 = $vB
/*8821*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 964:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSRAH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8830*/    /*Scope*/ 15, /*->8846*/
/*8831*/      OPC_CheckInteger, 69|128,7/*965*/, 
/*8834*/      OPC_MoveParent,
/*8835*/      OPC_RecordChild1, // #0 = $vA
/*8836*/      OPC_RecordChild2, // #1 = $vB
/*8837*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 965:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSRAW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8846*/    /*Scope*/ 15, /*->8862*/
/*8847*/      OPC_CheckInteger, 70|128,7/*966*/, 
/*8850*/      OPC_MoveParent,
/*8851*/      OPC_RecordChild1, // #0 = $vA
/*8852*/      OPC_RecordChild2, // #1 = $vB
/*8853*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 966:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSRB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8862*/    /*Scope*/ 15, /*->8878*/
/*8863*/      OPC_CheckInteger, 71|128,7/*967*/, 
/*8866*/      OPC_MoveParent,
/*8867*/      OPC_RecordChild1, // #0 = $vA
/*8868*/      OPC_RecordChild2, // #1 = $vB
/*8869*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 967:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSRH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8878*/    /*Scope*/ 15, /*->8894*/
/*8879*/      OPC_CheckInteger, 73|128,7/*969*/, 
/*8882*/      OPC_MoveParent,
/*8883*/      OPC_RecordChild1, // #0 = $vA
/*8884*/      OPC_RecordChild2, // #1 = $vB
/*8885*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 969:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSRW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8894*/    /*Scope*/ 15, /*->8910*/
/*8895*/      OPC_CheckInteger, 44|128,7/*940*/, 
/*8898*/      OPC_MoveParent,
/*8899*/      OPC_RecordChild1, // #0 = $vA
/*8900*/      OPC_RecordChild2, // #1 = $vB
/*8901*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKPX), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 940:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKPX:v8i16 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8910*/    /*Scope*/ 15, /*->8926*/
/*8911*/      OPC_CheckInteger, 45|128,7/*941*/, 
/*8914*/      OPC_MoveParent,
/*8915*/      OPC_RecordChild1, // #0 = $vA
/*8916*/      OPC_RecordChild2, // #1 = $vB
/*8917*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 941:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHSS:v16i8 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8926*/    /*Scope*/ 15, /*->8942*/
/*8927*/      OPC_CheckInteger, 46|128,7/*942*/, 
/*8930*/      OPC_MoveParent,
/*8931*/      OPC_RecordChild1, // #0 = $vA
/*8932*/      OPC_RecordChild2, // #1 = $vB
/*8933*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 942:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHUS:v16i8 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8942*/    /*Scope*/ 15, /*->8958*/
/*8943*/      OPC_CheckInteger, 47|128,7/*943*/, 
/*8946*/      OPC_MoveParent,
/*8947*/      OPC_RecordChild1, // #0 = $vA
/*8948*/      OPC_RecordChild2, // #1 = $vB
/*8949*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 943:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWSS:v16i8 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8958*/    /*Scope*/ 15, /*->8974*/
/*8959*/      OPC_CheckInteger, 48|128,7/*944*/, 
/*8962*/      OPC_MoveParent,
/*8963*/      OPC_RecordChild1, // #0 = $vA
/*8964*/      OPC_RecordChild2, // #1 = $vB
/*8965*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 944:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWUS:v8i16 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8974*/    /*Scope*/ 15, /*->8990*/
/*8975*/      OPC_CheckInteger, 49|128,7/*945*/, 
/*8978*/      OPC_MoveParent,
/*8979*/      OPC_RecordChild1, // #0 = $vA
/*8980*/      OPC_RecordChild2, // #1 = $vB
/*8981*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 945:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VPKUHUS:v16i8 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8990*/    /*Scope*/ 15, /*->9006*/
/*8991*/      OPC_CheckInteger, 50|128,7/*946*/, 
/*8994*/      OPC_MoveParent,
/*8995*/      OPC_RecordChild1, // #0 = $vA
/*8996*/      OPC_RecordChild2, // #1 = $vB
/*8997*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 946:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKUWUS:v8i16 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9006*/    /*Scope*/ 13, /*->9020*/
/*9007*/      OPC_CheckInteger, 86|128,7/*982*/, 
/*9010*/      OPC_MoveParent,
/*9011*/      OPC_RecordChild1, // #0 = $vB
/*9012*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 982:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHPX:v4i32 VRRC:v8i16:$vB)
/*9020*/    /*Scope*/ 13, /*->9034*/
/*9021*/      OPC_CheckInteger, 87|128,7/*983*/, 
/*9024*/      OPC_MoveParent,
/*9025*/      OPC_RecordChild1, // #0 = $vB
/*9026*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 983:iPTR, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKHSB:v8i16 VRRC:v16i8:$vB)
/*9034*/    /*Scope*/ 13, /*->9048*/
/*9035*/      OPC_CheckInteger, 88|128,7/*984*/, 
/*9038*/      OPC_MoveParent,
/*9039*/      OPC_RecordChild1, // #0 = $vB
/*9040*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 984:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHSH:v4i32 VRRC:v8i16:$vB)
/*9048*/    /*Scope*/ 13, /*->9062*/
/*9049*/      OPC_CheckInteger, 89|128,7/*985*/, 
/*9052*/      OPC_MoveParent,
/*9053*/      OPC_RecordChild1, // #0 = $vB
/*9054*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 985:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLPX:v4i32 VRRC:v8i16:$vB)
/*9062*/    /*Scope*/ 13, /*->9076*/
/*9063*/      OPC_CheckInteger, 90|128,7/*986*/, 
/*9066*/      OPC_MoveParent,
/*9067*/      OPC_RecordChild1, // #0 = $vB
/*9068*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 986:iPTR, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKLSB:v8i16 VRRC:v16i8:$vB)
/*9076*/    /*Scope*/ 13, /*->9090*/
/*9077*/      OPC_CheckInteger, 91|128,7/*987*/, 
/*9080*/      OPC_MoveParent,
/*9081*/      OPC_RecordChild1, // #0 = $vB
/*9082*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 987:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLSH:v4i32 VRRC:v8i16:$vB)
/*9090*/    /*Scope*/ 23, /*->9114*/
/*9091*/      OPC_CheckInteger, 106|128,6/*874*/, 
/*9094*/      OPC_MoveParent,
/*9095*/      OPC_RecordChild1, // #0 = $vB
/*9096*/      OPC_RecordChild2, // #1 = $UIMM
/*9097*/      OPC_MoveChild, 2,
/*9099*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9102*/      OPC_MoveParent,
/*9103*/      OPC_EmitConvertToTarget, 1,
/*9105*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
              // Src: (intrinsic_wo_chain:v4f32 874:iPTR, VRRC:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
              // Dst: (VCFSX:v4f32 (imm:i32):$UIMM, VRRC:v4i32:$vB)
/*9114*/    /*Scope*/ 23, /*->9138*/
/*9115*/      OPC_CheckInteger, 107|128,6/*875*/, 
/*9118*/      OPC_MoveParent,
/*9119*/      OPC_RecordChild1, // #0 = $vB
/*9120*/      OPC_RecordChild2, // #1 = $UIMM
/*9121*/      OPC_MoveChild, 2,
/*9123*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9126*/      OPC_MoveParent,
/*9127*/      OPC_EmitConvertToTarget, 1,
/*9129*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
              // Src: (intrinsic_wo_chain:v4f32 875:iPTR, VRRC:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
              // Dst: (VCFUX:v4f32 (imm:i32):$UIMM, VRRC:v4i32:$vB)
/*9138*/    /*Scope*/ 13, /*->9152*/
/*9139*/      OPC_CheckInteger, 8|128,7/*904*/, 
/*9142*/      OPC_MoveParent,
/*9143*/      OPC_RecordChild1, // #0 = $vB
/*9144*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VEXPTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 904:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VEXPTEFP:v4f32 VRRC:v4f32:$vB)
/*9152*/    /*Scope*/ 13, /*->9166*/
/*9153*/      OPC_CheckInteger, 9|128,7/*905*/, 
/*9156*/      OPC_MoveParent,
/*9157*/      OPC_RecordChild1, // #0 = $vB
/*9158*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VLOGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 905:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VLOGEFP:v4f32 VRRC:v4f32:$vB)
/*9166*/    /*Scope*/ 15, /*->9182*/
/*9167*/      OPC_CheckInteger, 11|128,7/*907*/, 
/*9170*/      OPC_MoveParent,
/*9171*/      OPC_RecordChild1, // #0 = $vA
/*9172*/      OPC_RecordChild2, // #1 = $vB
/*9173*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 907:iPTR, VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VMAXFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9182*/    /*Scope*/ 15, /*->9198*/
/*9183*/      OPC_CheckInteger, 20|128,7/*916*/, 
/*9186*/      OPC_MoveParent,
/*9187*/      OPC_RecordChild1, // #0 = $vA
/*9188*/      OPC_RecordChild2, // #1 = $vB
/*9189*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 916:iPTR, VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VMINFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9198*/    /*Scope*/ 13, /*->9212*/
/*9199*/      OPC_CheckInteger, 51|128,7/*947*/, 
/*9202*/      OPC_MoveParent,
/*9203*/      OPC_RecordChild1, // #0 = $vB
/*9204*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VREFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 947:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VREFP:v4f32 VRRC:v4f32:$vB)
/*9212*/    /*Scope*/ 13, /*->9226*/
/*9213*/      OPC_CheckInteger, 52|128,7/*948*/, 
/*9216*/      OPC_MoveParent,
/*9217*/      OPC_RecordChild1, // #0 = $vB
/*9218*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIM), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 948:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIM:v4f32 VRRC:v4f32:$vB)
/*9226*/    /*Scope*/ 13, /*->9240*/
/*9227*/      OPC_CheckInteger, 53|128,7/*949*/, 
/*9230*/      OPC_MoveParent,
/*9231*/      OPC_RecordChild1, // #0 = $vB
/*9232*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIN), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 949:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIN:v4f32 VRRC:v4f32:$vB)
/*9240*/    /*Scope*/ 13, /*->9254*/
/*9241*/      OPC_CheckInteger, 54|128,7/*950*/, 
/*9244*/      OPC_MoveParent,
/*9245*/      OPC_RecordChild1, // #0 = $vB
/*9246*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 950:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIP:v4f32 VRRC:v4f32:$vB)
/*9254*/    /*Scope*/ 13, /*->9268*/
/*9255*/      OPC_CheckInteger, 55|128,7/*951*/, 
/*9258*/      OPC_MoveParent,
/*9259*/      OPC_RecordChild1, // #0 = $vB
/*9260*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIZ), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 951:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIZ:v4f32 VRRC:v4f32:$vB)
/*9268*/    /*Scope*/ 13, /*->9282*/
/*9269*/      OPC_CheckInteger, 59|128,7/*955*/, 
/*9272*/      OPC_MoveParent,
/*9273*/      OPC_RecordChild1, // #0 = $vB
/*9274*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRSQRTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 955:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRSQRTEFP:v4f32 VRRC:v4f32:$vB)
/*9282*/    /*Scope*/ 17, /*->9300*/
/*9283*/      OPC_CheckInteger, 10|128,7/*906*/, 
/*9286*/      OPC_MoveParent,
/*9287*/      OPC_RecordChild1, // #0 = $A
/*9288*/      OPC_RecordChild2, // #1 = $B
/*9289*/      OPC_RecordChild3, // #2 = $C
/*9290*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 906:iPTR, VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 8
              // Dst: (VMADDFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
/*9300*/    /*Scope*/ 17, /*->9318*/
/*9301*/      OPC_CheckInteger, 42|128,7/*938*/, 
/*9304*/      OPC_MoveParent,
/*9305*/      OPC_RecordChild1, // #0 = $A
/*9306*/      OPC_RecordChild2, // #1 = $B
/*9307*/      OPC_RecordChild3, // #2 = $C
/*9308*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 938:iPTR, VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 8
              // Dst: (VNMSUBFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
/*9318*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::CALLSEQ_END),// ->9348
/*9322*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*9323*/    OPC_CaptureGlueInput,
/*9324*/    OPC_RecordChild1, // #1 = $amt1
/*9325*/    OPC_MoveChild, 1,
/*9327*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*9330*/    OPC_MoveParent,
/*9331*/    OPC_RecordChild2, // #2 = $amt2
/*9332*/    OPC_MoveChild, 2,
/*9334*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*9337*/    OPC_MoveParent,
/*9338*/    OPC_EmitMergeInputChains1_0,
/*9339*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 70|128,1/*198*/,  TARGET_VAL(PPCISD::TC_RETURN),// ->9550
/*9352*/    OPC_RecordNode,   // #0 = 'PPCtc_return' chained node
/*9353*/    OPC_CaptureGlueInput,
/*9354*/    OPC_RecordChild1, // #1 = $func
/*9355*/    OPC_Scope, 21|128,1/*149*/, /*->9507*/ // 3 children in Scope
/*9358*/      OPC_MoveChild, 1,
/*9360*/      OPC_SwitchOpcode /*3 cases */, 48,  TARGET_VAL(ISD::Constant),// ->9412
/*9364*/        OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->9388
/*9367*/          OPC_MoveParent,
/*9368*/          OPC_RecordChild2, // #2 = $offset
/*9369*/          OPC_MoveChild, 2,
/*9371*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9374*/          OPC_MoveParent,
/*9375*/          OPC_EmitMergeInputChains1_0,
/*9376*/          OPC_EmitConvertToTarget, 1,
/*9378*/          OPC_EmitConvertToTarget, 2,
/*9380*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i32):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai (imm:i32):$func, (imm:i32):$offset)
                /*SwitchType*/ 21,  MVT::i64,// ->9411
/*9390*/          OPC_MoveParent,
/*9391*/          OPC_RecordChild2, // #2 = $offset
/*9392*/          OPC_MoveChild, 2,
/*9394*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9397*/          OPC_MoveParent,
/*9398*/          OPC_EmitMergeInputChains1_0,
/*9399*/          OPC_EmitConvertToTarget, 1,
/*9401*/          OPC_EmitConvertToTarget, 2,
/*9403*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i64):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai8 (imm:i64):$func, (imm:i32):$offset)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetGlobalAddress),// ->9459
/*9415*/        OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->9437
/*9418*/          OPC_MoveParent,
/*9419*/          OPC_RecordChild2, // #2 = $imm
/*9420*/          OPC_MoveChild, 2,
/*9422*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9425*/          OPC_MoveParent,
/*9426*/          OPC_EmitMergeInputChains1_0,
/*9427*/          OPC_EmitConvertToTarget, 2,
/*9429*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (tglobaladdr:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->9458
/*9439*/          OPC_MoveParent,
/*9440*/          OPC_RecordChild2, // #2 = $imm
/*9441*/          OPC_MoveChild, 2,
/*9443*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9446*/          OPC_MoveParent,
/*9447*/          OPC_EmitMergeInputChains1_0,
/*9448*/          OPC_EmitConvertToTarget, 2,
/*9450*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (tglobaladdr:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetExternalSymbol),// ->9506
/*9462*/        OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->9484
/*9465*/          OPC_MoveParent,
/*9466*/          OPC_RecordChild2, // #2 = $imm
/*9467*/          OPC_MoveChild, 2,
/*9469*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9472*/          OPC_MoveParent,
/*9473*/          OPC_EmitMergeInputChains1_0,
/*9474*/          OPC_EmitConvertToTarget, 2,
/*9476*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (texternalsym:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->9505
/*9486*/          OPC_MoveParent,
/*9487*/          OPC_RecordChild2, // #2 = $imm
/*9488*/          OPC_MoveChild, 2,
/*9490*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9493*/          OPC_MoveParent,
/*9494*/          OPC_EmitMergeInputChains1_0,
/*9495*/          OPC_EmitConvertToTarget, 2,
/*9497*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (texternalsym:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*9507*/    /*Scope*/ 20, /*->9528*/
/*9508*/      OPC_CheckChild1Type, MVT::i32,
/*9510*/      OPC_RecordChild2, // #2 = $imm
/*9511*/      OPC_MoveChild, 2,
/*9513*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9516*/      OPC_MoveParent,
/*9517*/      OPC_EmitMergeInputChains1_0,
/*9518*/      OPC_EmitConvertToTarget, 2,
/*9520*/      OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC:i32:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri CTRRC:i32:$dst, (imm:i32):$imm)
/*9528*/    /*Scope*/ 20, /*->9549*/
/*9529*/      OPC_CheckChild1Type, MVT::i64,
/*9531*/      OPC_RecordChild2, // #2 = $imm
/*9532*/      OPC_MoveChild, 2,
/*9534*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9537*/      OPC_MoveParent,
/*9538*/      OPC_EmitMergeInputChains1_0,
/*9539*/      OPC_EmitConvertToTarget, 2,
/*9541*/      OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC8:i64:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri8 CTRRC8:i64:$dst, (imm:i32):$imm)
/*9549*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::ATOMIC_FENCE),// ->9573
/*9553*/    OPC_RecordNode,   // #0 = 'atomic_fence' chained node
/*9554*/    OPC_MoveChild, 1,
/*9556*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9559*/    OPC_MoveParent,
/*9560*/    OPC_MoveChild, 2,
/*9562*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9565*/    OPC_MoveParent,
/*9566*/    OPC_EmitMergeInputChains1_0,
/*9567*/    OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (atomic_fence (imm:iPTR), (imm:iPTR)) - Complexity = 9
            // Dst: (SYNC)
          /*SwitchOpcode*/ 84|128,1/*212*/,  TARGET_VAL(PPCISD::VCMP),// ->9789
/*9577*/    OPC_RecordChild0, // #0 = $vA
/*9578*/    OPC_RecordChild1, // #1 = $vB
/*9579*/    OPC_MoveChild, 2,
/*9581*/    OPC_Scope, 14, /*->9597*/ // 13 children in Scope
/*9583*/      OPC_CheckInteger, 6, 
/*9585*/      OPC_MoveParent,
/*9586*/      OPC_CheckType, MVT::v16i8,
/*9588*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9597*/    /*Scope*/ 15, /*->9613*/
/*9598*/      OPC_CheckInteger, 6|128,6/*774*/, 
/*9601*/      OPC_MoveParent,
/*9602*/      OPC_CheckType, MVT::v16i8,
/*9604*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9613*/    /*Scope*/ 15, /*->9629*/
/*9614*/      OPC_CheckInteger, 6|128,4/*518*/, 
/*9617*/      OPC_MoveParent,
/*9618*/      OPC_CheckType, MVT::v16i8,
/*9620*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9629*/    /*Scope*/ 14, /*->9644*/
/*9630*/      OPC_CheckInteger, 70, 
/*9632*/      OPC_MoveParent,
/*9633*/      OPC_CheckType, MVT::v8i16,
/*9635*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9644*/    /*Scope*/ 15, /*->9660*/
/*9645*/      OPC_CheckInteger, 70|128,6/*838*/, 
/*9648*/      OPC_MoveParent,
/*9649*/      OPC_CheckType, MVT::v8i16,
/*9651*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9660*/    /*Scope*/ 15, /*->9676*/
/*9661*/      OPC_CheckInteger, 70|128,4/*582*/, 
/*9664*/      OPC_MoveParent,
/*9665*/      OPC_CheckType, MVT::v8i16,
/*9667*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9676*/    /*Scope*/ 15, /*->9692*/
/*9677*/      OPC_CheckInteger, 6|128,1/*134*/, 
/*9680*/      OPC_MoveParent,
/*9681*/      OPC_CheckType, MVT::v4i32,
/*9683*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9692*/    /*Scope*/ 15, /*->9708*/
/*9693*/      OPC_CheckInteger, 6|128,7/*902*/, 
/*9696*/      OPC_MoveParent,
/*9697*/      OPC_CheckType, MVT::v4i32,
/*9699*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9708*/    /*Scope*/ 15, /*->9724*/
/*9709*/      OPC_CheckInteger, 6|128,5/*646*/, 
/*9712*/      OPC_MoveParent,
/*9713*/      OPC_CheckType, MVT::v4i32,
/*9715*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9724*/    /*Scope*/ 15, /*->9740*/
/*9725*/      OPC_CheckInteger, 70|128,7/*966*/, 
/*9728*/      OPC_MoveParent,
/*9729*/      OPC_CheckType, MVT::v4f32,
/*9731*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9740*/    /*Scope*/ 15, /*->9756*/
/*9741*/      OPC_CheckInteger, 70|128,1/*198*/, 
/*9744*/      OPC_MoveParent,
/*9745*/      OPC_CheckType, MVT::v4f32,
/*9747*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9756*/    /*Scope*/ 15, /*->9772*/
/*9757*/      OPC_CheckInteger, 70|128,3/*454*/, 
/*9760*/      OPC_MoveParent,
/*9761*/      OPC_CheckType, MVT::v4f32,
/*9763*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9772*/    /*Scope*/ 15, /*->9788*/
/*9773*/      OPC_CheckInteger, 70|128,5/*710*/, 
/*9776*/      OPC_MoveParent,
/*9777*/      OPC_CheckType, MVT::v4f32,
/*9779*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9788*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 97|128,1/*225*/,  TARGET_VAL(PPCISD::VCMPo),// ->10018
/*9793*/    OPC_RecordChild0, // #0 = $vA
/*9794*/    OPC_RecordChild1, // #1 = $vB
/*9795*/    OPC_MoveChild, 2,
/*9797*/    OPC_Scope, 15, /*->9814*/ // 13 children in Scope
/*9799*/      OPC_CheckInteger, 6, 
/*9801*/      OPC_MoveParent,
/*9802*/      OPC_CheckType, MVT::v16i8,
/*9804*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUBo:v16i8:i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9814*/    /*Scope*/ 16, /*->9831*/
/*9815*/      OPC_CheckInteger, 6|128,6/*774*/, 
/*9818*/      OPC_MoveParent,
/*9819*/      OPC_CheckType, MVT::v16i8,
/*9821*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSBo:v16i8:i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9831*/    /*Scope*/ 16, /*->9848*/
/*9832*/      OPC_CheckInteger, 6|128,4/*518*/, 
/*9835*/      OPC_MoveParent,
/*9836*/      OPC_CheckType, MVT::v16i8,
/*9838*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUBo:v16i8:i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9848*/    /*Scope*/ 15, /*->9864*/
/*9849*/      OPC_CheckInteger, 70, 
/*9851*/      OPC_MoveParent,
/*9852*/      OPC_CheckType, MVT::v8i16,
/*9854*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUHo:v8i16:i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9864*/    /*Scope*/ 16, /*->9881*/
/*9865*/      OPC_CheckInteger, 70|128,6/*838*/, 
/*9868*/      OPC_MoveParent,
/*9869*/      OPC_CheckType, MVT::v8i16,
/*9871*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSHo:v8i16:i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9881*/    /*Scope*/ 16, /*->9898*/
/*9882*/      OPC_CheckInteger, 70|128,4/*582*/, 
/*9885*/      OPC_MoveParent,
/*9886*/      OPC_CheckType, MVT::v8i16,
/*9888*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUHo:v8i16:i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9898*/    /*Scope*/ 16, /*->9915*/
/*9899*/      OPC_CheckInteger, 6|128,1/*134*/, 
/*9902*/      OPC_MoveParent,
/*9903*/      OPC_CheckType, MVT::v4i32,
/*9905*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUWo:v4i32:i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9915*/    /*Scope*/ 16, /*->9932*/
/*9916*/      OPC_CheckInteger, 6|128,7/*902*/, 
/*9919*/      OPC_MoveParent,
/*9920*/      OPC_CheckType, MVT::v4i32,
/*9922*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSWo:v4i32:i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9932*/    /*Scope*/ 16, /*->9949*/
/*9933*/      OPC_CheckInteger, 6|128,5/*646*/, 
/*9936*/      OPC_MoveParent,
/*9937*/      OPC_CheckType, MVT::v4i32,
/*9939*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUWo:v4i32:i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9949*/    /*Scope*/ 16, /*->9966*/
/*9950*/      OPC_CheckInteger, 70|128,7/*966*/, 
/*9953*/      OPC_MoveParent,
/*9954*/      OPC_CheckType, MVT::v4f32,
/*9956*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9966*/    /*Scope*/ 16, /*->9983*/
/*9967*/      OPC_CheckInteger, 70|128,1/*198*/, 
/*9970*/      OPC_MoveParent,
/*9971*/      OPC_CheckType, MVT::v4f32,
/*9973*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9983*/    /*Scope*/ 16, /*->10000*/
/*9984*/      OPC_CheckInteger, 70|128,3/*454*/, 
/*9987*/      OPC_MoveParent,
/*9988*/      OPC_CheckType, MVT::v4f32,
/*9990*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*10000*/   /*Scope*/ 16, /*->10017*/
/*10001*/     OPC_CheckInteger, 70|128,5/*710*/, 
/*10004*/     OPC_MoveParent,
/*10005*/     OPC_CheckType, MVT::v4f32,
/*10007*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*10017*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 52|128,2/*308*/,  TARGET_VAL(ISD::VECTOR_SHUFFLE),// ->10330
/*10022*/   OPC_Scope, 73, /*->10097*/ // 4 children in Scope
/*10024*/     OPC_RecordNode, // #0 = $UIMM
/*10025*/     OPC_RecordChild0, // #1 = $vB
/*10026*/     OPC_MoveChild, 1,
/*10028*/     OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*10031*/     OPC_MoveParent,
/*10032*/     OPC_CheckType, MVT::v16i8,
/*10034*/     OPC_Scope, 14, /*->10050*/ // 4 children in Scope
/*10036*/       OPC_CheckPredicate, 67, // Predicate_vspltb_shuffle
/*10038*/       OPC_EmitNodeXForm, 9, 0, // VSPLTB_get_imm
/*10041*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltb_shuffle>><<X:VSPLTB_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTB:v16i8 (VSPLTB_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8)):$UIMM), VRRC:v16i8:$vB)
/*10050*/     /*Scope*/ 14, /*->10065*/
/*10051*/       OPC_CheckPredicate, 68, // Predicate_vsplth_shuffle
/*10053*/       OPC_EmitNodeXForm, 10, 0, // VSPLTH_get_imm
/*10056*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8))<<P:Predicate_vsplth_shuffle>><<X:VSPLTH_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTH:v16i8 (VSPLTH_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8)):$UIMM), VRRC:v16i8:$vB)
/*10065*/     /*Scope*/ 14, /*->10080*/
/*10066*/       OPC_CheckPredicate, 69, // Predicate_vspltw_shuffle
/*10068*/       OPC_EmitNodeXForm, 11, 0, // VSPLTW_get_imm
/*10071*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltw_shuffle>><<X:VSPLTW_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTW:v16i8 (VSPLTW_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8)):$UIMM), VRRC:v16i8:$vB)
/*10080*/     /*Scope*/ 15, /*->10096*/
/*10081*/       OPC_CheckPredicate, 70, // Predicate_vsldoi_unary_shuffle
/*10083*/       OPC_EmitNodeXForm, 12, 0, // VSLDOI_unary_get_imm
/*10086*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                    1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 1, 2, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vsldoi_unary_shuffle>><<X:VSLDOI_unary_get_imm>>:$in - Complexity = 7
                // Dst: (VSLDOI:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA, (VSLDOI_unary_get_imm:i32 VRRC:v16i8:$in))
/*10096*/     0, /*End of Scope*/
/*10097*/   /*Scope*/ 107, /*->10205*/
/*10098*/     OPC_RecordChild0, // #0 = $vA
/*10099*/     OPC_MoveChild, 1,
/*10101*/     OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*10104*/     OPC_MoveParent,
/*10105*/     OPC_CheckType, MVT::v16i8,
/*10107*/     OPC_Scope, 11, /*->10120*/ // 8 children in Scope
/*10109*/       OPC_CheckPredicate, 71, // Predicate_vpkuwum_unary_shuffle
/*10111*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuwum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUWUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10120*/     /*Scope*/ 11, /*->10132*/
/*10121*/       OPC_CheckPredicate, 72, // Predicate_vpkuhum_unary_shuffle
/*10123*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuhum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUHUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10132*/     /*Scope*/ 11, /*->10144*/
/*10133*/       OPC_CheckPredicate, 73, // Predicate_vmrglb_unary_shuffle
/*10135*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10144*/     /*Scope*/ 11, /*->10156*/
/*10145*/       OPC_CheckPredicate, 74, // Predicate_vmrglh_unary_shuffle
/*10147*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10156*/     /*Scope*/ 11, /*->10168*/
/*10157*/       OPC_CheckPredicate, 75, // Predicate_vmrglw_unary_shuffle
/*10159*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10168*/     /*Scope*/ 11, /*->10180*/
/*10169*/       OPC_CheckPredicate, 76, // Predicate_vmrghb_unary_shuffle
/*10171*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10180*/     /*Scope*/ 11, /*->10192*/
/*10181*/       OPC_CheckPredicate, 77, // Predicate_vmrghh_unary_shuffle
/*10183*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10192*/     /*Scope*/ 11, /*->10204*/
/*10193*/       OPC_CheckPredicate, 78, // Predicate_vmrghw_unary_shuffle
/*10195*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10204*/     0, /*End of Scope*/
/*10205*/   /*Scope*/ 20, /*->10226*/
/*10206*/     OPC_RecordNode, // #0 = $SH
/*10207*/     OPC_RecordChild0, // #1 = $vA
/*10208*/     OPC_RecordChild1, // #2 = $vB
/*10209*/     OPC_CheckPredicate, 79, // Predicate_vsldoi_shuffle
/*10211*/     OPC_CheckType, MVT::v16i8,
/*10213*/     OPC_EmitNodeXForm, 13, 0, // VSLDOI_get_imm
/*10216*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                  1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 2, 3, 
              // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vsldoi_shuffle>><<X:VSLDOI_get_imm>>:$SH - Complexity = 4
              // Dst: (VSLDOI:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, (VSLDOI_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB):$SH))
/*10226*/   /*Scope*/ 102, /*->10329*/
/*10227*/     OPC_RecordChild0, // #0 = $vA
/*10228*/     OPC_RecordChild1, // #1 = $vB
/*10229*/     OPC_CheckType, MVT::v16i8,
/*10231*/     OPC_Scope, 11, /*->10244*/ // 8 children in Scope
/*10233*/       OPC_CheckPredicate, 80, // Predicate_vmrghb_shuffle
/*10235*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrghb_shuffle>> - Complexity = 4
                // Dst: (VMRGHB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10244*/     /*Scope*/ 11, /*->10256*/
/*10245*/       OPC_CheckPredicate, 81, // Predicate_vmrghh_shuffle
/*10247*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrghh_shuffle>> - Complexity = 4
                // Dst: (VMRGHH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10256*/     /*Scope*/ 11, /*->10268*/
/*10257*/       OPC_CheckPredicate, 82, // Predicate_vmrghw_shuffle
/*10259*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrghw_shuffle>> - Complexity = 4
                // Dst: (VMRGHW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10268*/     /*Scope*/ 11, /*->10280*/
/*10269*/       OPC_CheckPredicate, 83, // Predicate_vmrglb_shuffle
/*10271*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrglb_shuffle>> - Complexity = 4
                // Dst: (VMRGLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10280*/     /*Scope*/ 11, /*->10292*/
/*10281*/       OPC_CheckPredicate, 84, // Predicate_vmrglh_shuffle
/*10283*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrglh_shuffle>> - Complexity = 4
                // Dst: (VMRGLH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10292*/     /*Scope*/ 11, /*->10304*/
/*10293*/       OPC_CheckPredicate, 85, // Predicate_vmrglw_shuffle
/*10295*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrglw_shuffle>> - Complexity = 4
                // Dst: (VMRGLW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10304*/     /*Scope*/ 11, /*->10316*/
/*10305*/       OPC_CheckPredicate, 86, // Predicate_vpkuhum_shuffle
/*10307*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vpkuhum_shuffle>> - Complexity = 4
                // Dst: (VPKUHUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10316*/     /*Scope*/ 11, /*->10328*/
/*10317*/       OPC_CheckPredicate, 87, // Predicate_vpkuwum_shuffle
/*10319*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vpkuwum_shuffle>> - Complexity = 4
                // Dst: (VPKUWUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10328*/     0, /*End of Scope*/
/*10329*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CALLSEQ_START),// ->10350
/*10333*/   OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*10334*/   OPC_RecordChild1, // #1 = $amt
/*10335*/   OPC_MoveChild, 1,
/*10337*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*10340*/   OPC_MoveParent,
/*10341*/   OPC_EmitMergeInputChains1_0,
/*10342*/   OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
          /*SwitchOpcode*/ 98,  TARGET_VAL(PPCISD::CALL_Darwin),// ->10451
/*10353*/   OPC_RecordNode,   // #0 = 'PPCcall_Darwin' chained node
/*10354*/   OPC_CaptureGlueInput,
/*10355*/   OPC_RecordChild1, // #1 = $func
/*10356*/   OPC_MoveChild, 1,
/*10358*/   OPC_SwitchOpcode /*3 cases */, 30,  TARGET_VAL(ISD::Constant),// ->10392
/*10362*/     OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->10377
/*10365*/       OPC_MoveParent,
/*10366*/       OPC_EmitMergeInputChains1_0,
/*10367*/       OPC_EmitConvertToTarget, 1,
/*10369*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (PPCcall_Darwin (imm:i32):$func) - Complexity = 6
                // Dst: (BLA_Darwin:i32 (imm:i32):$func)
              /*SwitchType*/ 12,  MVT::i64,// ->10391
/*10379*/       OPC_MoveParent,
/*10380*/       OPC_EmitMergeInputChains1_0,
/*10381*/       OPC_EmitConvertToTarget, 1,
/*10383*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (PPCcall_Darwin (imm:i64):$func) - Complexity = 6
                // Dst: (BLA8_Darwin:i64 (imm:i64):$func)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalAddress),// ->10421
/*10395*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->10408
/*10398*/       OPC_MoveParent,
/*10399*/       OPC_EmitMergeInputChains1_0,
/*10400*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (BL_Darwin:i32 (tglobaladdr:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->10420
/*10410*/       OPC_MoveParent,
/*10411*/       OPC_EmitMergeInputChains1_0,
/*10412*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (tglobaladdr:i64):$dst) - Complexity = 6
                // Dst: (BL8_Darwin:i64 (tglobaladdr:i64):$dst)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetExternalSymbol),// ->10450
/*10424*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->10437
/*10427*/       OPC_MoveParent,
/*10428*/       OPC_EmitMergeInputChains1_0,
/*10429*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (BL_Darwin:i32 (texternalsym:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->10449
/*10439*/       OPC_MoveParent,
/*10440*/       OPC_EmitMergeInputChains1_0,
/*10441*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (texternalsym:i64):$dst) - Complexity = 6
                // Dst: (BL8_Darwin:i64 (texternalsym:i64):$dst)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 98,  TARGET_VAL(PPCISD::CALL_SVR4),// ->10552
/*10454*/   OPC_RecordNode,   // #0 = 'PPCcall_SVR4' chained node
/*10455*/   OPC_CaptureGlueInput,
/*10456*/   OPC_RecordChild1, // #1 = $func
/*10457*/   OPC_MoveChild, 1,
/*10459*/   OPC_SwitchOpcode /*3 cases */, 30,  TARGET_VAL(ISD::Constant),// ->10493
/*10463*/     OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->10478
/*10466*/       OPC_MoveParent,
/*10467*/       OPC_EmitMergeInputChains1_0,
/*10468*/       OPC_EmitConvertToTarget, 1,
/*10470*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (PPCcall_SVR4 (imm:i32):$func) - Complexity = 6
                // Dst: (BLA_SVR4:i32 (imm:i32):$func)
              /*SwitchType*/ 12,  MVT::i64,// ->10492
/*10480*/       OPC_MoveParent,
/*10481*/       OPC_EmitMergeInputChains1_0,
/*10482*/       OPC_EmitConvertToTarget, 1,
/*10484*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (PPCcall_SVR4 (imm:i64):$func) - Complexity = 6
                // Dst: (BLA8_ELF:i64 (imm:i64):$func)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalAddress),// ->10522
/*10496*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->10509
/*10499*/       OPC_MoveParent,
/*10500*/       OPC_EmitMergeInputChains1_0,
/*10501*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (BL_SVR4:i32 (tglobaladdr:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->10521
/*10511*/       OPC_MoveParent,
/*10512*/       OPC_EmitMergeInputChains1_0,
/*10513*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (tglobaladdr:i64):$dst) - Complexity = 6
                // Dst: (BL8_ELF:i64 (tglobaladdr:i64):$dst)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetExternalSymbol),// ->10551
/*10525*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->10538
/*10528*/       OPC_MoveParent,
/*10529*/       OPC_EmitMergeInputChains1_0,
/*10530*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (BL_SVR4:i32 (texternalsym:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->10550
/*10540*/       OPC_MoveParent,
/*10541*/       OPC_EmitMergeInputChains1_0,
/*10542*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (texternalsym:i64):$dst) - Complexity = 6
                // Dst: (BL8_ELF:i64 (texternalsym:i64):$dst)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::MTFSB0),// ->10574
/*10555*/   OPC_CaptureGlueInput,
/*10556*/   OPC_RecordChild0, // #0 = $FM
/*10557*/   OPC_MoveChild, 0,
/*10559*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10562*/   OPC_CheckType, MVT::i32,
/*10564*/   OPC_MoveParent,
/*10565*/   OPC_EmitConvertToTarget, 0,
/*10567*/   OPC_MorphNodeTo, TARGET_VAL(PPC::MTFSB0), 0|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCmtfsb0 (imm:i32):$FM) - Complexity = 6
            // Dst: (MTFSB0 (imm:i32):$FM)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::MTFSB1),// ->10596
/*10577*/   OPC_CaptureGlueInput,
/*10578*/   OPC_RecordChild0, // #0 = $FM
/*10579*/   OPC_MoveChild, 0,
/*10581*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10584*/   OPC_CheckType, MVT::i32,
/*10586*/   OPC_MoveParent,
/*10587*/   OPC_EmitConvertToTarget, 0,
/*10589*/   OPC_MorphNodeTo, TARGET_VAL(PPC::MTFSB1), 0|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCmtfsb1 (imm:i32):$FM) - Complexity = 6
            // Dst: (MTFSB1 (imm:i32):$FM)
          /*SwitchOpcode*/ 54,  TARGET_VAL(PPCISD::CALL_NOP_SVR4),// ->10653
/*10599*/   OPC_RecordNode,   // #0 = 'PPCcall_nop_SVR4' chained node
/*10600*/   OPC_CaptureGlueInput,
/*10601*/   OPC_RecordChild1, // #1 = $func
/*10602*/   OPC_MoveChild, 1,
/*10604*/   OPC_SwitchOpcode /*3 cases */, 14,  TARGET_VAL(ISD::Constant),// ->10622
/*10608*/     OPC_CheckType, MVT::i64,
/*10610*/     OPC_MoveParent,
/*10611*/     OPC_EmitMergeInputChains1_0,
/*10612*/     OPC_EmitConvertToTarget, 1,
/*10614*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8_NOP_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (PPCcall_nop_SVR4 (imm:i64):$func) - Complexity = 6
              // Dst: (BLA8_NOP_ELF:i64 (imm:i64):$func)
            /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetGlobalAddress),// ->10637
/*10625*/     OPC_CheckType, MVT::i64,
/*10627*/     OPC_MoveParent,
/*10628*/     OPC_EmitMergeInputChains1_0,
/*10629*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_NOP_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (PPCcall_nop_SVR4 (tglobaladdr:i64):$dst) - Complexity = 6
              // Dst: (BL8_NOP_ELF:i64 (tglobaladdr:i64):$dst)
            /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetExternalSymbol),// ->10652
/*10640*/     OPC_CheckType, MVT::i64,
/*10642*/     OPC_MoveParent,
/*10643*/     OPC_EmitMergeInputChains1_0,
/*10644*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_NOP_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (PPCcall_nop_SVR4 (texternalsym:i64):$dst) - Complexity = 6
              // Dst: (BL8_NOP_ELF:i64 (texternalsym:i64):$dst)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::BUILD_VECTOR),// ->10719
/*10656*/   OPC_Scope, 48, /*->10706*/ // 2 children in Scope
/*10658*/     OPC_RecordNode, // #0 = $SIMM
/*10659*/     OPC_SwitchType /*3 cases */, 13,  MVT::v16i8,// ->10675
/*10662*/       OPC_CheckPredicate, 88, // Predicate_vecspltisb
/*10664*/       OPC_EmitNodeXForm, 14, 0, // VSPLTISB_get_imm
/*10667*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISB), 0,
                    1/*#VTs*/, MVT::v16i8, 1/*#Ops*/, 1, 
                // Src: (build_vector:v16i8)<<P:Predicate_vecspltisb>><<X:VSPLTISB_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISB:v16i8 (VSPLTISB_get_imm:i32 (build_vector:v16i8):$SIMM))
              /*SwitchType*/ 13,  MVT::v8i16,// ->10690
/*10677*/       OPC_CheckPredicate, 89, // Predicate_vecspltish
/*10679*/       OPC_EmitNodeXForm, 15, 0, // VSPLTISH_get_imm
/*10682*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISH), 0,
                    1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 1, 
                // Src: (build_vector:v8i16)<<P:Predicate_vecspltish>><<X:VSPLTISH_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISH:v8i16 (VSPLTISH_get_imm:i32 (build_vector:v8i16):$SIMM))
              /*SwitchType*/ 13,  MVT::v4i32,// ->10705
/*10692*/       OPC_CheckPredicate, 90, // Predicate_vecspltisw
/*10694*/       OPC_EmitNodeXForm, 16, 0, // VSPLTISW_get_imm
/*10697*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISW), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 1, 
                // Src: (build_vector:v4i32)<<P:Predicate_vecspltisw>><<X:VSPLTISW_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISW:v4i32 (VSPLTISW_get_imm:i32 (build_vector:v4i32):$SIMM))
              0, // EndSwitchType
/*10706*/   /*Scope*/ 11, /*->10718*/
/*10707*/     OPC_CheckPredicate, 91, // Predicate_immAllZerosV
/*10709*/     OPC_CheckType, MVT::v4i32,
/*10711*/     OPC_MorphNodeTo, TARGET_VAL(PPC::V_SET0), 0,
                  1/*#VTs*/, MVT::v4i32, 0/*#Ops*/, 
              // Src: (build_vector:v4i32)<<P:Predicate_immAllZerosV>> - Complexity = 4
              // Dst: (V_SET0:v4i32)
/*10718*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::BITCAST),// ->10805
/*10722*/   OPC_RecordChild0, // #0 = $src
/*10723*/   OPC_Scope, 19, /*->10744*/ // 4 children in Scope
/*10725*/     OPC_CheckChild0Type, MVT::v8i16,
/*10727*/     OPC_SwitchType /*3 cases */, 3,  MVT::v16i8,// ->10733
/*10730*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 3,  MVT::v4i32,// ->10738
/*10735*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 3,  MVT::v4f32,// ->10743
/*10740*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*10744*/   /*Scope*/ 19, /*->10764*/
/*10745*/     OPC_CheckChild0Type, MVT::v4i32,
/*10747*/     OPC_SwitchType /*3 cases */, 3,  MVT::v16i8,// ->10753
/*10750*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 3,  MVT::v8i16,// ->10758
/*10755*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 3,  MVT::v4f32,// ->10763
/*10760*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*10764*/   /*Scope*/ 19, /*->10784*/
/*10765*/     OPC_CheckChild0Type, MVT::v4f32,
/*10767*/     OPC_SwitchType /*3 cases */, 3,  MVT::v16i8,// ->10773
/*10770*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 3,  MVT::v8i16,// ->10778
/*10775*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 3,  MVT::v4i32,// ->10783
/*10780*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              0, // EndSwitchType
/*10784*/   /*Scope*/ 19, /*->10804*/
/*10785*/     OPC_CheckChild0Type, MVT::v16i8,
/*10787*/     OPC_SwitchType /*3 cases */, 3,  MVT::v8i16,// ->10793
/*10790*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 3,  MVT::v4i32,// ->10798
/*10795*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 3,  MVT::v4f32,// ->10803
/*10800*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*10804*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::RET_FLAG),// ->10825
/*10808*/   OPC_RecordNode,   // #0 = 'retflag' chained node
/*10809*/   OPC_CaptureGlueInput,
/*10810*/   OPC_EmitMergeInputChains1_0,
/*10811*/   OPC_EmitInteger, MVT::i32, 20, 
/*10814*/   OPC_EmitRegister, MVT::i32, 0 /*zero_reg*/,
/*10817*/   OPC_MorphNodeTo, TARGET_VAL(PPC::BLR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (retflag) - Complexity = 3
            // Dst: (BLR)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->10844
/*10828*/   OPC_RecordNode,   // #0 = 'br' chained node
/*10829*/   OPC_RecordChild1, // #1 = $dst
/*10830*/   OPC_MoveChild, 1,
/*10832*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*10835*/   OPC_MoveParent,
/*10836*/   OPC_EmitMergeInputChains1_0,
/*10837*/   OPC_MorphNodeTo, TARGET_VAL(PPC::B), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$dst) - Complexity = 3
            // Dst: (B (bb:Other):$dst)
          /*SwitchOpcode*/ 26,  TARGET_VAL(PPCISD::BCTRL_Darwin),// ->10873
/*10847*/   OPC_RecordNode,   // #0 = 'PPCbctrl_Darwin' chained node
/*10848*/   OPC_CaptureGlueInput,
/*10849*/   OPC_Scope, 10, /*->10861*/ // 2 children in Scope
/*10851*/     OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*10853*/     OPC_EmitMergeInputChains1_0,
/*10854*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (PPCbctrl_Darwin) - Complexity = 3
              // Dst: (BCTRL_Darwin:i32)
/*10861*/   /*Scope*/ 10, /*->10872*/
/*10862*/     OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*10864*/     OPC_EmitMergeInputChains1_0,
/*10865*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i64, 0/*#Ops*/, 
              // Src: (PPCbctrl_Darwin) - Complexity = 3
              // Dst: (BCTRL8_Darwin:i64)
/*10872*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(PPCISD::BCTRL_SVR4),// ->10902
/*10876*/   OPC_RecordNode,   // #0 = 'PPCbctrl_SVR4' chained node
/*10877*/   OPC_CaptureGlueInput,
/*10878*/   OPC_Scope, 10, /*->10890*/ // 2 children in Scope
/*10880*/     OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*10882*/     OPC_EmitMergeInputChains1_0,
/*10883*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (PPCbctrl_SVR4) - Complexity = 3
              // Dst: (BCTRL_SVR4:i32)
/*10890*/   /*Scope*/ 10, /*->10901*/
/*10891*/     OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*10893*/     OPC_EmitMergeInputChains1_0,
/*10894*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i64, 0/*#Ops*/, 
              // Src: (PPCbctrl_SVR4) - Complexity = 3
              // Dst: (BCTRL8_ELF:i64)
/*10901*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 8,  TARGET_VAL(ISD::TRAP),// ->10913
/*10905*/   OPC_RecordNode,   // #0 = 'trap' chained node
/*10906*/   OPC_EmitMergeInputChains1_0,
/*10907*/   OPC_MorphNodeTo, TARGET_VAL(PPC::TRAP), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (trap) - Complexity = 3
            // Dst: (TRAP)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::MTCTR),// ->10945
/*10916*/   OPC_RecordNode,   // #0 = 'PPCmtctr' chained node
/*10917*/   OPC_CaptureGlueInput,
/*10918*/   OPC_RecordChild1, // #1 = $rS
/*10919*/   OPC_Scope, 11, /*->10932*/ // 2 children in Scope
/*10921*/     OPC_CheckChild1Type, MVT::i32,
/*10923*/     OPC_EmitMergeInputChains1_0,
/*10924*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr GPRC:i32:$rS) - Complexity = 3
              // Dst: (MTCTR:i32 GPRC:i32:$rS)
/*10932*/   /*Scope*/ 11, /*->10944*/
/*10933*/     OPC_CheckChild1Type, MVT::i64,
/*10935*/     OPC_EmitMergeInputChains1_0,
/*10936*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr G8RC:i64:$rS) - Complexity = 3
              // Dst: (MTCTR8:i64 G8RC:i64:$rS)
/*10944*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::VPERM),// ->10963
/*10948*/   OPC_RecordChild0, // #0 = $vA
/*10949*/   OPC_RecordChild1, // #1 = $vB
/*10950*/   OPC_RecordChild2, // #2 = $vC
/*10951*/   OPC_CheckType, MVT::v16i8,
/*10953*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvperm:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v16i8:$vC) - Complexity = 3
            // Dst: (VPERM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v16i8:$vC)
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::VMADDFP),// ->10981
/*10966*/   OPC_RecordChild0, // #0 = $A
/*10967*/   OPC_RecordChild1, // #1 = $B
/*10968*/   OPC_RecordChild2, // #2 = $C
/*10969*/   OPC_CheckType, MVT::v4f32,
/*10971*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvmaddfp:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 3
            // Dst: (VMADDFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::VNMSUBFP),// ->10999
/*10984*/   OPC_RecordChild0, // #0 = $A
/*10985*/   OPC_RecordChild1, // #1 = $B
/*10986*/   OPC_RecordChild2, // #2 = $C
/*10987*/   OPC_CheckType, MVT::v4f32,
/*10989*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvnmsubfp:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 3
            // Dst: (VNMSUBFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
          /*SwitchOpcode*/ 7,  TARGET_VAL(PPCISD::NOP),// ->11009
/*11002*/   OPC_CaptureGlueInput,
/*11003*/   OPC_MorphNodeTo, TARGET_VAL(PPC::NOP), 0|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (PPCnop) - Complexity = 3
            // Dst: (NOP)
          /*SwitchOpcode*/ 13,  TARGET_VAL(PPCISD::LOAD_TOC),// ->11025
/*11012*/   OPC_RecordNode,   // #0 = 'PPCload_toc' chained node
/*11013*/   OPC_CaptureGlueInput,
/*11014*/   OPC_RecordChild1, // #1 = $reg
/*11015*/   OPC_CheckChild1Type, MVT::i64,
/*11017*/   OPC_EmitMergeInputChains1_0,
/*11018*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDinto_toc), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCload_toc G8RC:i64:$reg) - Complexity = 3
            // Dst: (LDinto_toc G8RC:i64:$reg)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::TOC_RESTORE),// ->11037
/*11028*/   OPC_RecordNode,   // #0 = 'PPCtoc_restore' chained node
/*11029*/   OPC_CaptureGlueInput,
/*11030*/   OPC_EmitMergeInputChains1_0,
/*11031*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc_restore), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (PPCtoc_restore) - Complexity = 3
            // Dst: (LDtoc_restore)
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 11039 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 108
  // #OPC_RecordNode                     = 41
  // #OPC_RecordChild                    = 495
  // #OPC_RecordMemRef                   = 11
  // #OPC_CaptureGlueInput               = 19
  // #OPC_MoveChild                      = 146
  // #OPC_MoveParent                     = 366
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 21
  // #OPC_CheckPredicate                 = 176
  // #OPC_CheckOpcode                    = 90
  // #OPC_SwitchOpcode                   = 15
  // #OPC_CheckType                      = 151
  // #OPC_SwitchType                     = 94
  // #OPC_CheckChildType                 = 50
  // #OPC_CheckInteger                   = 193
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 7
  // #OPC_CheckComplexPat                = 140
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 26
  // #OPC_EmitStringInteger              = 3
  // #OPC_EmitRegister                   = 1
  // #OPC_EmitConvertToTarget            = 79
  // #OPC_EmitMergeInputChains           = 189
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 8
  // #OPC_EmitNodeXForm                  = 38
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 12
  // #OPC_MorphNodeTo                    = 578

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (!TM.Options.NoExcessFPPrecision);
  case 1: return (!PPCSubTarget.isPPC64());
  case 2: return (PPCSubTarget.isPPC64());
  }
}

bool CheckNodePredicate(SDNode *Node, unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immSExt16 predicate - True if the immediate fits in a 16-bit sign extended
  // field.  Used by instructions like 'addi'.
  if (N->getValueType(0) == MVT::i32)
    return (int32_t)N->getZExtValue() == (short)N->getZExtValue();
  else
    return (int64_t)N->getZExtValue() == (short)N->getZExtValue();

  }
  case 1: { // Predicate_imm16ShiftedSExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedSExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'addis'.  Identical to 
  // imm16ShiftedZExt in 32-bit mode.
  if (N->getZExtValue() & 0xFFFF) return false;
  if (N->getValueType(0) == MVT::i32)
    return true;
  // For 64-bit, make sure it is sext right.
  return N->getZExtValue() == (uint64_t)(int)N->getZExtValue();

  }
  case 2: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 3: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 4: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 5: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 6: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 7: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 8: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 9: { // Predicate_zextloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 10: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 11: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 12: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 13: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 14: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 15: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 16: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 17: { // Predicate_extloadf32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f32;

  }
  case 18: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 19: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 20: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 21: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 22: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 23: { // Predicate_itruncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 24: { // Predicate_pre_truncst
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 25: { // Predicate_pre_truncsti8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 26: { // Predicate_pre_truncsti16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 27: { // Predicate_istore
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 28: { // Predicate_pre_store
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 29: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 30: { // Predicate_atomic_load_add_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 31: { // Predicate_atomic_load_add_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 32: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 33: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 34: { // Predicate_atomic_load_sub_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 35: { // Predicate_atomic_load_sub_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 36: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 37: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 38: { // Predicate_atomic_load_and_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 39: { // Predicate_atomic_load_and_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 40: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 41: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 42: { // Predicate_atomic_load_or_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 43: { // Predicate_atomic_load_or_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 44: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 45: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 46: { // Predicate_atomic_load_xor_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 47: { // Predicate_atomic_load_xor_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 48: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 49: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 50: { // Predicate_atomic_load_nand_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 51: { // Predicate_atomic_load_nand_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 52: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 53: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 54: { // Predicate_atomic_cmp_swap_8
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 55: { // Predicate_atomic_cmp_swap_16
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 56: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 57: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 58: { // Predicate_atomic_swap_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 59: { // Predicate_atomic_swap_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 60: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 61: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 62: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immZExt16 predicate - True if the immediate fits in a 16-bit zero extended
  // field.  Used by instructions like 'ori'.
  return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

  }
  case 63: { // Predicate_imm16ShiftedZExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedZExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'xoris'.
  return (N->getZExtValue() & ~uint64_t(0xFFFF0000)) == 0;

  }
  case 64: { // Predicate_immAllOnesV
    SDNode *N = Node;

  return ISD::isBuildVectorAllOnes(N);

  }
  case 65: { // Predicate_maskimm32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // maskImm predicate - True if immediate is a run of ones.
  unsigned mb, me;
  if (N->getValueType(0) == MVT::i32)
    return isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  else
    return false;

  }
  case 66: { // Predicate_V_immneg0
    SDNode *N = Node;

  return PPC::isAllNegativeZeroVector(N);

  }
  case 67: { // Predicate_vspltb_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 1);

  }
  case 68: { // Predicate_vsplth_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 2);

  }
  case 69: { // Predicate_vspltw_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 4);

  }
  case 70: { // Predicate_vsldoi_unary_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, true) != -1;

  }
  case 71: { // Predicate_vpkuwum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 72: { // Predicate_vpkuhum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 73: { // Predicate_vmrglb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 74: { // Predicate_vmrglh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 75: { // Predicate_vmrglw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 76: { // Predicate_vmrghb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 77: { // Predicate_vmrghh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 78: { // Predicate_vmrghw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 79: { // Predicate_vsldoi_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, false) != -1;

  }
  case 80: { // Predicate_vmrghb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 81: { // Predicate_vmrghh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 82: { // Predicate_vmrghw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 83: { // Predicate_vmrglb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 84: { // Predicate_vmrglh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 85: { // Predicate_vmrglw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 86: { // Predicate_vpkuhum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 87: { // Predicate_vpkuwum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 88: { // Predicate_vecspltisb
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG).getNode() != 0;

  }
  case 89: { // Predicate_vecspltish
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG).getNode() != 0;

  }
  case 90: { // Predicate_vecspltisw
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG).getNode() != 0;

  }
  case 91: { // Predicate_immAllZerosV
    SDNode *N = Node;

  return ISD::isBuildVectorAllZeros(N);

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
    return SelectAddrIdxOnly(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectAddrImm(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return SelectAddrIdx(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return SelectAddrImmShift(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+1);
    return SelectAddrImmOffs(N, Result[NextRes+0].first);
  }
}

SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  return getI32Imm((unsigned)N->getZExtValue() >> 16);

  }
  case 1: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the low 16 bits.
  return getI32Imm((unsigned short)N->getZExtValue());

  }
  case 2: {  // HA16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  signed int Val = N->getZExtValue();
  return getI32Imm((Val - (signed short)Val) >> 16);

  }
  case 3: {  // MB
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the start bit of a mask
  unsigned mb = 0, me;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(mb);

  }
  case 4: {  // ME
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the end bit of a mask
  unsigned mb, me = 0;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(me);

  }
  case 5: {  // SHL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 31 - imm
  return getI32Imm(31 - N->getZExtValue());

  }
  case 6: {  // SHL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 63 - imm
  return getI32Imm(63 - N->getZExtValue());

  }
  case 7: {  // SRL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 32 - imm
  return N->getZExtValue() ? getI32Imm(32 - N->getZExtValue()) : getI32Imm(0);

  }
  case 8: {  // SRL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 64 - imm
  return N->getZExtValue() ? getI32Imm(64 - N->getZExtValue()) : getI32Imm(0);

  }
  case 9: {  // VSPLTB_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 1));

  }
  case 10: {  // VSPLTH_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 2));

  }
  case 11: {  // VSPLTW_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 4));

  }
  case 12: {  // VSLDOI_unary_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, true));

  }
  case 13: {  // VSLDOI_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, false));

  }
  case 14: {  // VSPLTISB_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG);

  }
  case 15: {  // VSPLTISH_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG);

  }
  case 16: {  // VSPLTISW_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG);

  }
  }
}

