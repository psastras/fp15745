//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the Mips target
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
/*0*/     OPC_SwitchOpcode /*72 cases */, 31|128,7/*927*/,  TARGET_VAL(ISD::STORE),// ->932
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'st' chained node
/*7*/       OPC_Scope, 98, /*->107*/ // 2 children in Scope
/*9*/         OPC_MoveChild, 1,
/*11*/        OPC_CheckInteger, 0, 
/*13*/        OPC_CheckType, MVT::i32,
/*15*/        OPC_MoveParent,
/*16*/        OPC_RecordChild2, // #1 = $dst
/*17*/        OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*19*/        OPC_CheckPredicate, 1, // Predicate_store
/*21*/        OPC_Scope, 20, /*->43*/ // 4 children in Scope
/*23*/          OPC_CheckPredicate, 2, // Predicate_store_a
/*25*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*27*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #2 #3
/*30*/          OPC_EmitMergeInputChains1_0,
/*31*/          OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*34*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 4, 2, 3, 
                // Src: (st 0:i32, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a>> - Complexity = 18
                // Dst: (SW ZERO:i32, addr:i32:$dst)
/*43*/        /*Scope*/ 20, /*->64*/
/*44*/          OPC_CheckPredicate, 3, // Predicate_store_u
/*46*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*48*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #2 #3
/*51*/          OPC_EmitMergeInputChains1_0,
/*52*/          OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*55*/          OPC_MorphNodeTo, TARGET_VAL(Mips::USW), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 4, 2, 3, 
                // Src: (st 0:i32, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_u>> - Complexity = 18
                // Dst: (USW ZERO:i32, addr:i32:$dst)
/*64*/        /*Scope*/ 20, /*->85*/
/*65*/          OPC_CheckPredicate, 2, // Predicate_store_a
/*67*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*69*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #2 #3
/*72*/          OPC_EmitMergeInputChains1_0,
/*73*/          OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*76*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 4, 2, 3, 
                // Src: (st 0:i32, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a>> - Complexity = 18
                // Dst: (SW_P8 ZERO:i32, addr:i64:$dst)
/*85*/        /*Scope*/ 20, /*->106*/
/*86*/          OPC_CheckPredicate, 3, // Predicate_store_u
/*88*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*90*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #2 #3
/*93*/          OPC_EmitMergeInputChains1_0,
/*94*/          OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*97*/          OPC_MorphNodeTo, TARGET_VAL(Mips::USW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 4, 2, 3, 
                // Src: (st 0:i32, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_u>> - Complexity = 18
                // Dst: (USW_P8 ZERO:i32, addr:i64:$dst)
/*106*/       0, /*End of Scope*/
/*107*/     /*Scope*/ 54|128,6/*822*/, /*->931*/
/*109*/       OPC_RecordChild1, // #1 = $rt
/*110*/       OPC_Scope, 79|128,1/*207*/, /*->320*/ // 4 children in Scope
/*113*/         OPC_CheckChild1Type, MVT::i32,
/*115*/         OPC_RecordChild2, // #2 = $addr
/*116*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*118*/         OPC_Scope, 80, /*->200*/ // 4 children in Scope
/*120*/           OPC_CheckPredicate, 4, // Predicate_truncstore
/*122*/           OPC_Scope, 36, /*->160*/ // 2 children in Scope
/*124*/             OPC_CheckPredicate, 5, // Predicate_truncstorei8
/*126*/             OPC_Scope, 15, /*->143*/ // 2 children in Scope
/*128*/               OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*130*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*133*/               OPC_EmitMergeInputChains1_0,
/*134*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SB), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB CPURegs:i32:$rt, addr:i32:$addr)
/*143*/             /*Scope*/ 15, /*->159*/
/*144*/               OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*146*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*149*/               OPC_EmitMergeInputChains1_0,
/*150*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SB_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*159*/             0, /*End of Scope*/
/*160*/           /*Scope*/ 38, /*->199*/
/*161*/             OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*163*/             OPC_CheckPredicate, 7, // Predicate_truncstorei16_a
/*165*/             OPC_Scope, 15, /*->182*/ // 2 children in Scope
/*167*/               OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*169*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*172*/               OPC_EmitMergeInputChains1_0,
/*173*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SH), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_a>> - Complexity = 13
                      // Dst: (SH CPURegs:i32:$rt, addr:i32:$addr)
/*182*/             /*Scope*/ 15, /*->198*/
/*183*/               OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*185*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*188*/               OPC_EmitMergeInputChains1_0,
/*189*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SH_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_a>> - Complexity = 13
                      // Dst: (SH_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*198*/             0, /*End of Scope*/
/*199*/           0, /*End of Scope*/
/*200*/         /*Scope*/ 38, /*->239*/
/*201*/           OPC_CheckPredicate, 1, // Predicate_store
/*203*/           OPC_CheckPredicate, 2, // Predicate_store_a
/*205*/           OPC_Scope, 15, /*->222*/ // 2 children in Scope
/*207*/             OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*209*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*212*/             OPC_EmitMergeInputChains1_0,
/*213*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a>> - Complexity = 13
                    // Dst: (SW CPURegs:i32:$rt, addr:i32:$addr)
/*222*/           /*Scope*/ 15, /*->238*/
/*223*/             OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*225*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*228*/             OPC_EmitMergeInputChains1_0,
/*229*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a>> - Complexity = 13
                    // Dst: (SW_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*238*/           0, /*End of Scope*/
/*239*/         /*Scope*/ 40, /*->280*/
/*240*/           OPC_CheckPredicate, 4, // Predicate_truncstore
/*242*/           OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*244*/           OPC_CheckPredicate, 8, // Predicate_truncstorei16_u
/*246*/           OPC_Scope, 15, /*->263*/ // 2 children in Scope
/*248*/             OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*250*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*253*/             OPC_EmitMergeInputChains1_0,
/*254*/             OPC_MorphNodeTo, TARGET_VAL(Mips::USH), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_u>> - Complexity = 13
                    // Dst: (USH CPURegs:i32:$rt, addr:i32:$addr)
/*263*/           /*Scope*/ 15, /*->279*/
/*264*/             OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*266*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*269*/             OPC_EmitMergeInputChains1_0,
/*270*/             OPC_MorphNodeTo, TARGET_VAL(Mips::USH_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_u>> - Complexity = 13
                    // Dst: (USH_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*279*/           0, /*End of Scope*/
/*280*/         /*Scope*/ 38, /*->319*/
/*281*/           OPC_CheckPredicate, 1, // Predicate_store
/*283*/           OPC_CheckPredicate, 3, // Predicate_store_u
/*285*/           OPC_Scope, 15, /*->302*/ // 2 children in Scope
/*287*/             OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*289*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*292*/             OPC_EmitMergeInputChains1_0,
/*293*/             OPC_MorphNodeTo, TARGET_VAL(Mips::USW), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_u>> - Complexity = 13
                    // Dst: (USW CPURegs:i32:$rt, addr:i32:$addr)
/*302*/           /*Scope*/ 15, /*->318*/
/*303*/             OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*305*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*308*/             OPC_EmitMergeInputChains1_0,
/*309*/             OPC_MorphNodeTo, TARGET_VAL(Mips::USW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_u>> - Complexity = 13
                    // Dst: (USW_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*318*/           0, /*End of Scope*/
/*319*/         0, /*End of Scope*/
/*320*/       /*Scope*/ 58|128,1/*186*/, /*->508*/
/*322*/         OPC_CheckChild1Type, MVT::f32,
/*324*/         OPC_Scope, 41, /*->367*/ // 3 children in Scope
/*326*/           OPC_RecordChild2, // #2 = $addr
/*327*/           OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*329*/           OPC_CheckPredicate, 1, // Predicate_store
/*331*/           OPC_CheckPredicate, 2, // Predicate_store_a
/*333*/           OPC_Scope, 15, /*->350*/ // 2 children in Scope
/*335*/             OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*337*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*340*/             OPC_EmitMergeInputChains1_0,
/*341*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st FGR32:f32:$ft, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a>> - Complexity = 13
                    // Dst: (SWC1_P8 FGR32:f32:$ft, addr:i64:$addr)
/*350*/           /*Scope*/ 15, /*->366*/
/*351*/             OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*353*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*356*/             OPC_EmitMergeInputChains1_0,
/*357*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st FGR32:f32:$ft, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a>> - Complexity = 13
                    // Dst: (SWC1 FGR32:f32:$ft, addr:i32:$addr)
/*366*/           0, /*End of Scope*/
/*367*/         /*Scope*/ 87, /*->455*/
/*368*/           OPC_MoveChild, 2,
/*370*/           OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*373*/           OPC_RecordChild0, // #2 = $base
/*374*/           OPC_RecordChild1, // #3 = $index
/*375*/           OPC_SwitchType /*2 cases */, 37,  MVT::i32,// ->415
/*378*/             OPC_MoveParent,
/*379*/             OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*381*/             OPC_CheckPredicate, 1, // Predicate_store
/*383*/             OPC_Scope, 14, /*->399*/ // 2 children in Scope
/*385*/               OPC_CheckPredicate, 2, // Predicate_store_a
/*387*/               OPC_CheckPatternPredicate, 2, // (Subtarget.hasMips32r2Or64())
/*389*/               OPC_EmitMergeInputChains1_0,
/*390*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SWXC1), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (st FGR32:f32:$fs, (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a>> - Complexity = 7
                      // Dst: (SWXC1 FGR32:f32:$fs, CPURegs:i32:$base, CPURegs:i32:$index)
/*399*/             /*Scope*/ 14, /*->414*/
/*400*/               OPC_CheckPredicate, 3, // Predicate_store_u
/*402*/               OPC_CheckPatternPredicate, 2, // (Subtarget.hasMips32r2Or64())
/*404*/               OPC_EmitMergeInputChains1_0,
/*405*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SUXC1), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (st FGR32:f32:$fs, (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_u>> - Complexity = 7
                      // Dst: (SUXC1 FGR32:f32:$fs, CPURegs:i32:$base, CPURegs:i32:$index)
/*414*/             0, /*End of Scope*/
                  /*SwitchType*/ 37,  MVT::i64,// ->454
/*417*/             OPC_MoveParent,
/*418*/             OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*420*/             OPC_CheckPredicate, 1, // Predicate_store
/*422*/             OPC_Scope, 14, /*->438*/ // 2 children in Scope
/*424*/               OPC_CheckPredicate, 2, // Predicate_store_a
/*426*/               OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*428*/               OPC_EmitMergeInputChains1_0,
/*429*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SWXC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (st FGR32:f32:$fs, (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a>> - Complexity = 7
                      // Dst: (SWXC1_P8 FGR32:f32:$fs, CPU64Regs:i64:$base, CPU64Regs:i64:$index)
/*438*/             /*Scope*/ 14, /*->453*/
/*439*/               OPC_CheckPredicate, 3, // Predicate_store_u
/*441*/               OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*443*/               OPC_EmitMergeInputChains1_0,
/*444*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SUXC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (st FGR32:f32:$fs, (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_u>> - Complexity = 7
                      // Dst: (SUXC1_P8 FGR32:f32:$fs, CPU64Regs:i64:$base, CPU64Regs:i64:$index)
/*453*/             0, /*End of Scope*/
                  0, // EndSwitchType
/*455*/         /*Scope*/ 51, /*->507*/
/*456*/           OPC_RecordChild2, // #2 = $addr
/*457*/           OPC_Scope, 23, /*->482*/ // 2 children in Scope
/*459*/             OPC_CheckChild2Type, MVT::i32,
/*461*/             OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*463*/             OPC_CheckPredicate, 1, // Predicate_store
/*465*/             OPC_CheckPredicate, 3, // Predicate_store_u
/*467*/             OPC_CheckPatternPredicate, 3, // (Subtarget.hasMips32r2Or64()) && (!Subtarget.isABI_N64())
/*469*/             OPC_EmitMergeInputChains1_0,
/*470*/             OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*473*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SUXC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR32:f32:$src, CPURegs:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_u>> - Complexity = 4
                    // Dst: (SUXC1 FGR32:f32:$src, CPURegs:i32:$addr, ZERO:i32)
/*482*/           /*Scope*/ 23, /*->506*/
/*483*/             OPC_CheckChild2Type, MVT::i64,
/*485*/             OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*487*/             OPC_CheckPredicate, 1, // Predicate_store
/*489*/             OPC_CheckPredicate, 3, // Predicate_store_u
/*491*/             OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*493*/             OPC_EmitMergeInputChains1_0,
/*494*/             OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*497*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SUXC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR32:f32:$src, CPU64Regs:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_u>> - Complexity = 4
                    // Dst: (SUXC1_P8 FGR32:f32:$src, CPU64Regs:i64:$addr, ZERO_64:i64)
/*506*/           0, /*End of Scope*/
/*507*/         0, /*End of Scope*/
/*508*/       /*Scope*/ 2|128,1/*130*/, /*->640*/
/*510*/         OPC_CheckChild1Type, MVT::f64,
/*512*/         OPC_Scope, 57, /*->571*/ // 2 children in Scope
/*514*/           OPC_RecordChild2, // #2 = $addr
/*515*/           OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*517*/           OPC_CheckPredicate, 1, // Predicate_store
/*519*/           OPC_CheckPredicate, 2, // Predicate_store_a
/*521*/           OPC_Scope, 15, /*->538*/ // 3 children in Scope
/*523*/             OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*525*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*528*/             OPC_EmitMergeInputChains1_0,
/*529*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st FGR64:f64:$ft, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a>> - Complexity = 13
                    // Dst: (SDC164_P8 FGR64:f64:$ft, addr:i64:$addr)
/*538*/           /*Scope*/ 15, /*->554*/
/*539*/             OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64())
/*541*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*544*/             OPC_EmitMergeInputChains1_0,
/*545*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st FGR64:f64:$ft, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a>> - Complexity = 13
                    // Dst: (SDC164 FGR64:f64:$ft, addr:i32:$addr)
/*554*/           /*Scope*/ 15, /*->570*/
/*555*/             OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64())
/*557*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*560*/             OPC_EmitMergeInputChains1_0,
/*561*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SDC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st AFGR64:f64:$ft, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a>> - Complexity = 13
                    // Dst: (SDC1 AFGR64:f64:$ft, addr:i32:$addr)
/*570*/           0, /*End of Scope*/
/*571*/         /*Scope*/ 67, /*->639*/
/*572*/           OPC_MoveChild, 2,
/*574*/           OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*577*/           OPC_RecordChild0, // #2 = $base
/*578*/           OPC_RecordChild1, // #3 = $index
/*579*/           OPC_SwitchType /*2 cases */, 35,  MVT::i32,// ->617
/*582*/             OPC_MoveParent,
/*583*/             OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*585*/             OPC_CheckPredicate, 1, // Predicate_store
/*587*/             OPC_CheckPredicate, 2, // Predicate_store_a
/*589*/             OPC_Scope, 12, /*->603*/ // 2 children in Scope
/*591*/               OPC_CheckPatternPredicate, 6, // (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64())
/*593*/               OPC_EmitMergeInputChains1_0,
/*594*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC1), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (st AFGR64:f64:$fs, (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a>> - Complexity = 7
                      // Dst: (SDXC1 AFGR64:f64:$fs, CPURegs:i32:$base, CPURegs:i32:$index)
/*603*/             /*Scope*/ 12, /*->616*/
/*604*/               OPC_CheckPatternPredicate, 7, // (Subtarget.hasMips64()) && (!Subtarget.isABI_N64())
/*606*/               OPC_EmitMergeInputChains1_0,
/*607*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC164), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (st FGR64:f64:$fs, (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a>> - Complexity = 7
                      // Dst: (SDXC164 FGR64:f64:$fs, CPURegs:i32:$base, CPURegs:i32:$index)
/*616*/             0, /*End of Scope*/
                  /*SwitchType*/ 19,  MVT::i64,// ->638
/*619*/             OPC_MoveParent,
/*620*/             OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*622*/             OPC_CheckPredicate, 1, // Predicate_store
/*624*/             OPC_CheckPredicate, 2, // Predicate_store_a
/*626*/             OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*628*/             OPC_EmitMergeInputChains1_0,
/*629*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR64:f64:$fs, (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a>> - Complexity = 7
                    // Dst: (SDXC164_P8 FGR64:f64:$fs, CPU64Regs:i64:$base, CPU64Regs:i64:$index)
                  0, // EndSwitchType
/*639*/         0, /*End of Scope*/
/*640*/       /*Scope*/ 32|128,2/*288*/, /*->930*/
/*642*/         OPC_CheckChild1Type, MVT::i64,
/*644*/         OPC_RecordChild2, // #2 = $addr
/*645*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*647*/         OPC_Scope, 119, /*->768*/ // 4 children in Scope
/*649*/           OPC_CheckPredicate, 4, // Predicate_truncstore
/*651*/           OPC_Scope, 36, /*->689*/ // 3 children in Scope
/*653*/             OPC_CheckPredicate, 5, // Predicate_truncstorei8
/*655*/             OPC_Scope, 15, /*->672*/ // 2 children in Scope
/*657*/               OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*659*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*662*/               OPC_EmitMergeInputChains1_0,
/*663*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SB64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*672*/             /*Scope*/ 15, /*->688*/
/*673*/               OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*675*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*678*/               OPC_EmitMergeInputChains1_0,
/*679*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*688*/             0, /*End of Scope*/
/*689*/           /*Scope*/ 38, /*->728*/
/*690*/             OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*692*/             OPC_CheckPredicate, 7, // Predicate_truncstorei16_a
/*694*/             OPC_Scope, 15, /*->711*/ // 2 children in Scope
/*696*/               OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*698*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*701*/               OPC_EmitMergeInputChains1_0,
/*702*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SH64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_a>> - Complexity = 13
                      // Dst: (SH64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*711*/             /*Scope*/ 15, /*->727*/
/*712*/               OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*714*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*717*/               OPC_EmitMergeInputChains1_0,
/*718*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_a>> - Complexity = 13
                      // Dst: (SH64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*727*/             0, /*End of Scope*/
/*728*/           /*Scope*/ 38, /*->767*/
/*729*/             OPC_CheckPredicate, 9, // Predicate_truncstorei32
/*731*/             OPC_CheckPredicate, 10, // Predicate_truncstorei32_a
/*733*/             OPC_Scope, 15, /*->750*/ // 2 children in Scope
/*735*/               OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*737*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*740*/               OPC_EmitMergeInputChains1_0,
/*741*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SW64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>><<P:Predicate_truncstorei32_a>> - Complexity = 13
                      // Dst: (SW64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*750*/             /*Scope*/ 15, /*->766*/
/*751*/               OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*753*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*756*/               OPC_EmitMergeInputChains1_0,
/*757*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>><<P:Predicate_truncstorei32_a>> - Complexity = 13
                      // Dst: (SW64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*766*/             0, /*End of Scope*/
/*767*/           0, /*End of Scope*/
/*768*/         /*Scope*/ 38, /*->807*/
/*769*/           OPC_CheckPredicate, 1, // Predicate_store
/*771*/           OPC_CheckPredicate, 2, // Predicate_store_a
/*773*/           OPC_Scope, 15, /*->790*/ // 2 children in Scope
/*775*/             OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*777*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*780*/             OPC_EmitMergeInputChains1_0,
/*781*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a>> - Complexity = 13
                    // Dst: (SD CPU64Regs:i64:$rt, addr:i32:$addr)
/*790*/           /*Scope*/ 15, /*->806*/
/*791*/             OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*793*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*796*/             OPC_EmitMergeInputChains1_0,
/*797*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SD_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a>> - Complexity = 13
                    // Dst: (SD_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*806*/           0, /*End of Scope*/
/*807*/         /*Scope*/ 82, /*->890*/
/*808*/           OPC_CheckPredicate, 4, // Predicate_truncstore
/*810*/           OPC_Scope, 38, /*->850*/ // 2 children in Scope
/*812*/             OPC_CheckPredicate, 6, // Predicate_truncstorei16
/*814*/             OPC_CheckPredicate, 8, // Predicate_truncstorei16_u
/*816*/             OPC_Scope, 15, /*->833*/ // 2 children in Scope
/*818*/               OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*820*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*823*/               OPC_EmitMergeInputChains1_0,
/*824*/               OPC_MorphNodeTo, TARGET_VAL(Mips::USH64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_u>> - Complexity = 13
                      // Dst: (USH64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*833*/             /*Scope*/ 15, /*->849*/
/*834*/               OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*836*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*839*/               OPC_EmitMergeInputChains1_0,
/*840*/               OPC_MorphNodeTo, TARGET_VAL(Mips::USH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_u>> - Complexity = 13
                      // Dst: (USH64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*849*/             0, /*End of Scope*/
/*850*/           /*Scope*/ 38, /*->889*/
/*851*/             OPC_CheckPredicate, 9, // Predicate_truncstorei32
/*853*/             OPC_CheckPredicate, 11, // Predicate_truncstorei32_u
/*855*/             OPC_Scope, 15, /*->872*/ // 2 children in Scope
/*857*/               OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*859*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*862*/               OPC_EmitMergeInputChains1_0,
/*863*/               OPC_MorphNodeTo, TARGET_VAL(Mips::USW64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>><<P:Predicate_truncstorei32_u>> - Complexity = 13
                      // Dst: (USW64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*872*/             /*Scope*/ 15, /*->888*/
/*873*/               OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*875*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*878*/               OPC_EmitMergeInputChains1_0,
/*879*/               OPC_MorphNodeTo, TARGET_VAL(Mips::USW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>><<P:Predicate_truncstorei32_u>> - Complexity = 13
                      // Dst: (USW64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*888*/             0, /*End of Scope*/
/*889*/           0, /*End of Scope*/
/*890*/         /*Scope*/ 38, /*->929*/
/*891*/           OPC_CheckPredicate, 1, // Predicate_store
/*893*/           OPC_CheckPredicate, 3, // Predicate_store_u
/*895*/           OPC_Scope, 15, /*->912*/ // 2 children in Scope
/*897*/             OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*899*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*902*/             OPC_EmitMergeInputChains1_0,
/*903*/             OPC_MorphNodeTo, TARGET_VAL(Mips::USD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_u>> - Complexity = 13
                    // Dst: (USD CPU64Regs:i64:$rt, addr:i32:$addr)
/*912*/           /*Scope*/ 15, /*->928*/
/*913*/             OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*915*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*918*/             OPC_EmitMergeInputChains1_0,
/*919*/             OPC_MorphNodeTo, TARGET_VAL(Mips::USD_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_u>> - Complexity = 13
                    // Dst: (USD_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*928*/           0, /*End of Scope*/
/*929*/         0, /*End of Scope*/
/*930*/       0, /*End of Scope*/
/*931*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 73|128,12/*1609*/,  TARGET_VAL(ISD::LOAD),// ->2545
/*936*/     OPC_RecordMemRef,
/*937*/     OPC_RecordNode,   // #0 = 'ld' chained node
/*938*/     OPC_Scope, 124|128,10/*1404*/, /*->2345*/ // 3 children in Scope
/*941*/       OPC_RecordChild1, // #1 = $addr
/*942*/       OPC_CheckPredicate, 12, // Predicate_unindexedload
/*944*/       OPC_Scope, 40, /*->986*/ // 23 children in Scope
/*946*/         OPC_CheckPredicate, 13, // Predicate_sextload
/*948*/         OPC_CheckPredicate, 14, // Predicate_sextloadi8
/*950*/         OPC_CheckType, MVT::i32,
/*952*/         OPC_Scope, 15, /*->969*/ // 2 children in Scope
/*954*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*956*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*959*/           OPC_EmitMergeInputChains1_0,
/*960*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB:i32 addr:i32:$addr)
/*969*/         /*Scope*/ 15, /*->985*/
/*970*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*972*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*975*/           OPC_EmitMergeInputChains1_0,
/*976*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB_P8:i32 addr:i64:$addr)
/*985*/         0, /*End of Scope*/
/*986*/       /*Scope*/ 40, /*->1027*/
/*987*/         OPC_CheckPredicate, 15, // Predicate_zextload
/*989*/         OPC_CheckPredicate, 16, // Predicate_zextloadi8
/*991*/         OPC_CheckType, MVT::i32,
/*993*/         OPC_Scope, 15, /*->1010*/ // 2 children in Scope
/*995*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*997*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1000*/          OPC_EmitMergeInputChains1_0,
/*1001*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu:i32 addr:i32:$addr)
/*1010*/        /*Scope*/ 15, /*->1026*/
/*1011*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*1013*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1016*/          OPC_EmitMergeInputChains1_0,
/*1017*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addr:i64:$addr)
/*1026*/        0, /*End of Scope*/
/*1027*/      /*Scope*/ 42, /*->1070*/
/*1028*/        OPC_CheckPredicate, 13, // Predicate_sextload
/*1030*/        OPC_CheckPredicate, 17, // Predicate_sextloadi16
/*1032*/        OPC_CheckPredicate, 18, // Predicate_sextloadi16_a
/*1034*/        OPC_CheckType, MVT::i32,
/*1036*/        OPC_Scope, 15, /*->1053*/ // 2 children in Scope
/*1038*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1040*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1043*/          OPC_EmitMergeInputChains1_0,
/*1044*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_a>> - Complexity = 13
                  // Dst: (LH:i32 addr:i32:$addr)
/*1053*/        /*Scope*/ 15, /*->1069*/
/*1054*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*1056*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1059*/          OPC_EmitMergeInputChains1_0,
/*1060*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_a>> - Complexity = 13
                  // Dst: (LH_P8:i32 addr:i64:$addr)
/*1069*/        0, /*End of Scope*/
/*1070*/      /*Scope*/ 42, /*->1113*/
/*1071*/        OPC_CheckPredicate, 15, // Predicate_zextload
/*1073*/        OPC_CheckPredicate, 19, // Predicate_zextloadi16
/*1075*/        OPC_CheckPredicate, 20, // Predicate_zextloadi16_a
/*1077*/        OPC_CheckType, MVT::i32,
/*1079*/        OPC_Scope, 15, /*->1096*/ // 2 children in Scope
/*1081*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1083*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1086*/          OPC_EmitMergeInputChains1_0,
/*1087*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LHu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_zextloadi16_a>> - Complexity = 13
                  // Dst: (LHu:i32 addr:i32:$addr)
/*1096*/        /*Scope*/ 15, /*->1112*/
/*1097*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*1099*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1102*/          OPC_EmitMergeInputChains1_0,
/*1103*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LHu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_zextloadi16_a>> - Complexity = 13
                  // Dst: (LHu_P8:i32 addr:i64:$addr)
/*1112*/        0, /*End of Scope*/
/*1113*/      /*Scope*/ 40, /*->1154*/
/*1114*/        OPC_CheckPredicate, 21, // Predicate_load
/*1116*/        OPC_CheckPredicate, 22, // Predicate_load_a
/*1118*/        OPC_CheckType, MVT::i32,
/*1120*/        OPC_Scope, 15, /*->1137*/ // 2 children in Scope
/*1122*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1124*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1127*/          OPC_EmitMergeInputChains1_0,
/*1128*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a>> - Complexity = 13
                  // Dst: (LW:i32 addr:i32:$addr)
/*1137*/        /*Scope*/ 15, /*->1153*/
/*1138*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*1140*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1143*/          OPC_EmitMergeInputChains1_0,
/*1144*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a>> - Complexity = 13
                  // Dst: (LW_P8:i32 addr:i64:$addr)
/*1153*/        0, /*End of Scope*/
/*1154*/      /*Scope*/ 42, /*->1197*/
/*1155*/        OPC_CheckPredicate, 13, // Predicate_sextload
/*1157*/        OPC_CheckPredicate, 17, // Predicate_sextloadi16
/*1159*/        OPC_CheckPredicate, 23, // Predicate_sextloadi16_u
/*1161*/        OPC_CheckType, MVT::i32,
/*1163*/        OPC_Scope, 15, /*->1180*/ // 2 children in Scope
/*1165*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1167*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1170*/          OPC_EmitMergeInputChains1_0,
/*1171*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ULH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_u>> - Complexity = 13
                  // Dst: (ULH:i32 addr:i32:$addr)
/*1180*/        /*Scope*/ 15, /*->1196*/
/*1181*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*1183*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1186*/          OPC_EmitMergeInputChains1_0,
/*1187*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ULH_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_u>> - Complexity = 13
                  // Dst: (ULH_P8:i32 addr:i64:$addr)
/*1196*/        0, /*End of Scope*/
/*1197*/      /*Scope*/ 42, /*->1240*/
/*1198*/        OPC_CheckPredicate, 15, // Predicate_zextload
/*1200*/        OPC_CheckPredicate, 19, // Predicate_zextloadi16
/*1202*/        OPC_CheckPredicate, 24, // Predicate_zextloadi16_u
/*1204*/        OPC_CheckType, MVT::i32,
/*1206*/        OPC_Scope, 15, /*->1223*/ // 2 children in Scope
/*1208*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1210*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1213*/          OPC_EmitMergeInputChains1_0,
/*1214*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ULHu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_zextloadi16_u>> - Complexity = 13
                  // Dst: (ULHu:i32 addr:i32:$addr)
/*1223*/        /*Scope*/ 15, /*->1239*/
/*1224*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*1226*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1229*/          OPC_EmitMergeInputChains1_0,
/*1230*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ULHu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_zextloadi16_u>> - Complexity = 13
                  // Dst: (ULHu_P8:i32 addr:i64:$addr)
/*1239*/        0, /*End of Scope*/
/*1240*/      /*Scope*/ 40, /*->1281*/
/*1241*/        OPC_CheckPredicate, 21, // Predicate_load
/*1243*/        OPC_CheckPredicate, 25, // Predicate_load_u
/*1245*/        OPC_CheckType, MVT::i32,
/*1247*/        OPC_Scope, 15, /*->1264*/ // 2 children in Scope
/*1249*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1251*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1254*/          OPC_EmitMergeInputChains1_0,
/*1255*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ULW), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_u>> - Complexity = 13
                  // Dst: (ULW:i32 addr:i32:$addr)
/*1264*/        /*Scope*/ 15, /*->1280*/
/*1265*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*1267*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1270*/          OPC_EmitMergeInputChains1_0,
/*1271*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ULW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_u>> - Complexity = 13
                  // Dst: (ULW_P8:i32 addr:i64:$addr)
/*1280*/        0, /*End of Scope*/
/*1281*/      /*Scope*/ 32|128,1/*160*/, /*->1443*/
/*1283*/        OPC_CheckPredicate, 26, // Predicate_extload
/*1285*/        OPC_CheckType, MVT::i32,
/*1287*/        OPC_Scope, 17, /*->1306*/ // 6 children in Scope
/*1289*/          OPC_CheckPredicate, 27, // Predicate_extloadi1
/*1291*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1293*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1296*/          OPC_EmitMergeInputChains1_0,
/*1297*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBu:i32 addr:i32:$src)
/*1306*/        /*Scope*/ 17, /*->1324*/
/*1307*/          OPC_CheckPredicate, 28, // Predicate_extloadi8
/*1309*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1311*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1314*/          OPC_EmitMergeInputChains1_0,
/*1315*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBu:i32 addr:i32:$src)
/*1324*/        /*Scope*/ 40, /*->1365*/
/*1325*/          OPC_CheckPredicate, 29, // Predicate_extloadi16
/*1327*/          OPC_Scope, 17, /*->1346*/ // 2 children in Scope
/*1329*/            OPC_CheckPredicate, 30, // Predicate_extloadi16_a
/*1331*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1333*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1336*/            OPC_EmitMergeInputChains1_0,
/*1337*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LHu), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>><<P:Predicate_extloadi16_a>> - Complexity = 13
                    // Dst: (LHu:i32 addr:i32:$src)
/*1346*/          /*Scope*/ 17, /*->1364*/
/*1347*/            OPC_CheckPredicate, 31, // Predicate_extloadi16_u
/*1349*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1351*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1354*/            OPC_EmitMergeInputChains1_0,
/*1355*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ULHu), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>><<P:Predicate_extloadi16_u>> - Complexity = 13
                    // Dst: (ULHu:i32 addr:i32:$src)
/*1364*/          0, /*End of Scope*/
/*1365*/        /*Scope*/ 17, /*->1383*/
/*1366*/          OPC_CheckPredicate, 27, // Predicate_extloadi1
/*1368*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*1370*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1373*/          OPC_EmitMergeInputChains1_0,
/*1374*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addr:i64:$src)
/*1383*/        /*Scope*/ 17, /*->1401*/
/*1384*/          OPC_CheckPredicate, 28, // Predicate_extloadi8
/*1386*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*1388*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1391*/          OPC_EmitMergeInputChains1_0,
/*1392*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addr:i64:$src)
/*1401*/        /*Scope*/ 40, /*->1442*/
/*1402*/          OPC_CheckPredicate, 29, // Predicate_extloadi16
/*1404*/          OPC_Scope, 17, /*->1423*/ // 2 children in Scope
/*1406*/            OPC_CheckPredicate, 30, // Predicate_extloadi16_a
/*1408*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*1410*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1413*/            OPC_EmitMergeInputChains1_0,
/*1414*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LHu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>><<P:Predicate_extloadi16_a>> - Complexity = 13
                    // Dst: (LHu_P8:i32 addr:i64:$src)
/*1423*/          /*Scope*/ 17, /*->1441*/
/*1424*/            OPC_CheckPredicate, 31, // Predicate_extloadi16_u
/*1426*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*1428*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1431*/            OPC_EmitMergeInputChains1_0,
/*1432*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ULHu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>><<P:Predicate_extloadi16_u>> - Complexity = 13
                    // Dst: (ULHu_P8:i32 addr:i64:$src)
/*1441*/          0, /*End of Scope*/
/*1442*/        0, /*End of Scope*/
/*1443*/      /*Scope*/ 40, /*->1484*/
/*1444*/        OPC_CheckPredicate, 13, // Predicate_sextload
/*1446*/        OPC_CheckPredicate, 14, // Predicate_sextloadi8
/*1448*/        OPC_CheckType, MVT::i64,
/*1450*/        OPC_Scope, 15, /*->1467*/ // 2 children in Scope
/*1452*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1454*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1457*/          OPC_EmitMergeInputChains1_0,
/*1458*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$addr)
/*1467*/        /*Scope*/ 15, /*->1483*/
/*1468*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*1470*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1473*/          OPC_EmitMergeInputChains1_0,
/*1474*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$addr)
/*1483*/        0, /*End of Scope*/
/*1484*/      /*Scope*/ 40, /*->1525*/
/*1485*/        OPC_CheckPredicate, 15, // Predicate_zextload
/*1487*/        OPC_CheckPredicate, 16, // Predicate_zextloadi8
/*1489*/        OPC_CheckType, MVT::i64,
/*1491*/        OPC_Scope, 15, /*->1508*/ // 2 children in Scope
/*1493*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1495*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1498*/          OPC_EmitMergeInputChains1_0,
/*1499*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu64:i64 addr:i32:$addr)
/*1508*/        /*Scope*/ 15, /*->1524*/
/*1509*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*1511*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1514*/          OPC_EmitMergeInputChains1_0,
/*1515*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu64_P8:i64 addr:i64:$addr)
/*1524*/        0, /*End of Scope*/
/*1525*/      /*Scope*/ 42, /*->1568*/
/*1526*/        OPC_CheckPredicate, 13, // Predicate_sextload
/*1528*/        OPC_CheckPredicate, 17, // Predicate_sextloadi16
/*1530*/        OPC_CheckPredicate, 18, // Predicate_sextloadi16_a
/*1532*/        OPC_CheckType, MVT::i64,
/*1534*/        OPC_Scope, 15, /*->1551*/ // 2 children in Scope
/*1536*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1538*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1541*/          OPC_EmitMergeInputChains1_0,
/*1542*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_a>> - Complexity = 13
                  // Dst: (LH64:i64 addr:i32:$addr)
/*1551*/        /*Scope*/ 15, /*->1567*/
/*1552*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*1554*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1557*/          OPC_EmitMergeInputChains1_0,
/*1558*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_a>> - Complexity = 13
                  // Dst: (LH64_P8:i64 addr:i64:$addr)
/*1567*/        0, /*End of Scope*/
/*1568*/      /*Scope*/ 42, /*->1611*/
/*1569*/        OPC_CheckPredicate, 15, // Predicate_zextload
/*1571*/        OPC_CheckPredicate, 19, // Predicate_zextloadi16
/*1573*/        OPC_CheckPredicate, 20, // Predicate_zextloadi16_a
/*1575*/        OPC_CheckType, MVT::i64,
/*1577*/        OPC_Scope, 15, /*->1594*/ // 2 children in Scope
/*1579*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1581*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1584*/          OPC_EmitMergeInputChains1_0,
/*1585*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LHu64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_zextloadi16_a>> - Complexity = 13
                  // Dst: (LHu64:i64 addr:i32:$addr)
/*1594*/        /*Scope*/ 15, /*->1610*/
/*1595*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*1597*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1600*/          OPC_EmitMergeInputChains1_0,
/*1601*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LHu64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_zextloadi16_a>> - Complexity = 13
                  // Dst: (LHu64_P8:i64 addr:i64:$addr)
/*1610*/        0, /*End of Scope*/
/*1611*/      /*Scope*/ 42, /*->1654*/
/*1612*/        OPC_CheckPredicate, 13, // Predicate_sextload
/*1614*/        OPC_CheckPredicate, 32, // Predicate_sextloadi32
/*1616*/        OPC_CheckPredicate, 33, // Predicate_sextloadi32_a
/*1618*/        OPC_CheckType, MVT::i64,
/*1620*/        OPC_Scope, 15, /*->1637*/ // 2 children in Scope
/*1622*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1624*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1627*/          OPC_EmitMergeInputChains1_0,
/*1628*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_sextloadi32_a>> - Complexity = 13
                  // Dst: (LW64:i64 addr:i32:$addr)
/*1637*/        /*Scope*/ 15, /*->1653*/
/*1638*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*1640*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1643*/          OPC_EmitMergeInputChains1_0,
/*1644*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_sextloadi32_a>> - Complexity = 13
                  // Dst: (LW64_P8:i64 addr:i64:$addr)
/*1653*/        0, /*End of Scope*/
/*1654*/      /*Scope*/ 42, /*->1697*/
/*1655*/        OPC_CheckPredicate, 15, // Predicate_zextload
/*1657*/        OPC_CheckPredicate, 34, // Predicate_zextloadi32
/*1659*/        OPC_CheckPredicate, 35, // Predicate_zextloadi32_a
/*1661*/        OPC_CheckType, MVT::i64,
/*1663*/        OPC_Scope, 15, /*->1680*/ // 2 children in Scope
/*1665*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1667*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1670*/          OPC_EmitMergeInputChains1_0,
/*1671*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWu64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>><<P:Predicate_zextloadi32_a>> - Complexity = 13
                  // Dst: (LWu64:i64 addr:i32:$addr)
/*1680*/        /*Scope*/ 15, /*->1696*/
/*1681*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*1683*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1686*/          OPC_EmitMergeInputChains1_0,
/*1687*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWu64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>><<P:Predicate_zextloadi32_a>> - Complexity = 13
                  // Dst: (LWu64_P8:i64 addr:i64:$addr)
/*1696*/        0, /*End of Scope*/
/*1697*/      /*Scope*/ 40, /*->1738*/
/*1698*/        OPC_CheckPredicate, 21, // Predicate_load
/*1700*/        OPC_CheckPredicate, 22, // Predicate_load_a
/*1702*/        OPC_CheckType, MVT::i64,
/*1704*/        OPC_Scope, 15, /*->1721*/ // 2 children in Scope
/*1706*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1708*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1711*/          OPC_EmitMergeInputChains1_0,
/*1712*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a>> - Complexity = 13
                  // Dst: (LD:i64 addr:i32:$addr)
/*1721*/        /*Scope*/ 15, /*->1737*/
/*1722*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*1724*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1727*/          OPC_EmitMergeInputChains1_0,
/*1728*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LD_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a>> - Complexity = 13
                  // Dst: (LD_P8:i64 addr:i64:$addr)
/*1737*/        0, /*End of Scope*/
/*1738*/      /*Scope*/ 42, /*->1781*/
/*1739*/        OPC_CheckPredicate, 13, // Predicate_sextload
/*1741*/        OPC_CheckPredicate, 17, // Predicate_sextloadi16
/*1743*/        OPC_CheckPredicate, 23, // Predicate_sextloadi16_u
/*1745*/        OPC_CheckType, MVT::i64,
/*1747*/        OPC_Scope, 15, /*->1764*/ // 2 children in Scope
/*1749*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1751*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1754*/          OPC_EmitMergeInputChains1_0,
/*1755*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ULH64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_u>> - Complexity = 13
                  // Dst: (ULH64:i64 addr:i32:$addr)
/*1764*/        /*Scope*/ 15, /*->1780*/
/*1765*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*1767*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1770*/          OPC_EmitMergeInputChains1_0,
/*1771*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ULH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_u>> - Complexity = 13
                  // Dst: (ULH64_P8:i64 addr:i64:$addr)
/*1780*/        0, /*End of Scope*/
/*1781*/      /*Scope*/ 42, /*->1824*/
/*1782*/        OPC_CheckPredicate, 15, // Predicate_zextload
/*1784*/        OPC_CheckPredicate, 19, // Predicate_zextloadi16
/*1786*/        OPC_CheckPredicate, 24, // Predicate_zextloadi16_u
/*1788*/        OPC_CheckType, MVT::i64,
/*1790*/        OPC_Scope, 15, /*->1807*/ // 2 children in Scope
/*1792*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1794*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1797*/          OPC_EmitMergeInputChains1_0,
/*1798*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ULHu64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_zextloadi16_u>> - Complexity = 13
                  // Dst: (ULHu64:i64 addr:i32:$addr)
/*1807*/        /*Scope*/ 15, /*->1823*/
/*1808*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*1810*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1813*/          OPC_EmitMergeInputChains1_0,
/*1814*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ULHu64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_zextloadi16_u>> - Complexity = 13
                  // Dst: (ULHu64_P8:i64 addr:i64:$addr)
/*1823*/        0, /*End of Scope*/
/*1824*/      /*Scope*/ 42, /*->1867*/
/*1825*/        OPC_CheckPredicate, 13, // Predicate_sextload
/*1827*/        OPC_CheckPredicate, 32, // Predicate_sextloadi32
/*1829*/        OPC_CheckPredicate, 36, // Predicate_sextloadi32_u
/*1831*/        OPC_CheckType, MVT::i64,
/*1833*/        OPC_Scope, 15, /*->1850*/ // 2 children in Scope
/*1835*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1837*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1840*/          OPC_EmitMergeInputChains1_0,
/*1841*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ULW64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_sextloadi32_u>> - Complexity = 13
                  // Dst: (ULW64:i64 addr:i32:$addr)
/*1850*/        /*Scope*/ 15, /*->1866*/
/*1851*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*1853*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1856*/          OPC_EmitMergeInputChains1_0,
/*1857*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ULW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_sextloadi32_u>> - Complexity = 13
                  // Dst: (ULW64_P8:i64 addr:i64:$addr)
/*1866*/        0, /*End of Scope*/
/*1867*/      /*Scope*/ 40, /*->1908*/
/*1868*/        OPC_CheckPredicate, 21, // Predicate_load
/*1870*/        OPC_CheckPredicate, 25, // Predicate_load_u
/*1872*/        OPC_CheckType, MVT::i64,
/*1874*/        OPC_Scope, 15, /*->1891*/ // 2 children in Scope
/*1876*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1878*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1881*/          OPC_EmitMergeInputChains1_0,
/*1882*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ULD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_u>> - Complexity = 13
                  // Dst: (ULD:i64 addr:i32:$addr)
/*1891*/        /*Scope*/ 15, /*->1907*/
/*1892*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*1894*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1897*/          OPC_EmitMergeInputChains1_0,
/*1898*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ULD_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_u>> - Complexity = 13
                  // Dst: (ULD_P8:i64 addr:i64:$addr)
/*1907*/        0, /*End of Scope*/
/*1908*/      /*Scope*/ 114|128,1/*242*/, /*->2152*/
/*1910*/        OPC_CheckPredicate, 26, // Predicate_extload
/*1912*/        OPC_CheckType, MVT::i64,
/*1914*/        OPC_Scope, 17, /*->1933*/ // 8 children in Scope
/*1916*/          OPC_CheckPredicate, 27, // Predicate_extloadi1
/*1918*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1920*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1923*/          OPC_EmitMergeInputChains1_0,
/*1924*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$src)
/*1933*/        /*Scope*/ 17, /*->1951*/
/*1934*/          OPC_CheckPredicate, 28, // Predicate_extloadi8
/*1936*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1938*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1941*/          OPC_EmitMergeInputChains1_0,
/*1942*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$src)
/*1951*/        /*Scope*/ 40, /*->1992*/
/*1952*/          OPC_CheckPredicate, 29, // Predicate_extloadi16
/*1954*/          OPC_Scope, 17, /*->1973*/ // 2 children in Scope
/*1956*/            OPC_CheckPredicate, 30, // Predicate_extloadi16_a
/*1958*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1960*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1963*/            OPC_EmitMergeInputChains1_0,
/*1964*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LH64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>><<P:Predicate_extloadi16_a>> - Complexity = 13
                    // Dst: (LH64:i64 addr:i32:$src)
/*1973*/          /*Scope*/ 17, /*->1991*/
/*1974*/            OPC_CheckPredicate, 31, // Predicate_extloadi16_u
/*1976*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*1978*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1981*/            OPC_EmitMergeInputChains1_0,
/*1982*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ULH64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>><<P:Predicate_extloadi16_u>> - Complexity = 13
                    // Dst: (ULH64:i64 addr:i32:$src)
/*1991*/          0, /*End of Scope*/
/*1992*/        /*Scope*/ 40, /*->2033*/
/*1993*/          OPC_CheckPredicate, 37, // Predicate_extloadi32
/*1995*/          OPC_Scope, 17, /*->2014*/ // 2 children in Scope
/*1997*/            OPC_CheckPredicate, 38, // Predicate_extloadi32_a
/*1999*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*2001*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*2004*/            OPC_EmitMergeInputChains1_0,
/*2005*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LW64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>><<P:Predicate_extloadi32_a>> - Complexity = 13
                    // Dst: (LW64:i64 addr:i32:$src)
/*2014*/          /*Scope*/ 17, /*->2032*/
/*2015*/            OPC_CheckPredicate, 39, // Predicate_extloadi32_u
/*2017*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*2019*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*2022*/            OPC_EmitMergeInputChains1_0,
/*2023*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ULW64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>><<P:Predicate_extloadi32_u>> - Complexity = 13
                    // Dst: (ULW64:i64 addr:i32:$src)
/*2032*/          0, /*End of Scope*/
/*2033*/        /*Scope*/ 17, /*->2051*/
/*2034*/          OPC_CheckPredicate, 27, // Predicate_extloadi1
/*2036*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*2038*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*2041*/          OPC_EmitMergeInputChains1_0,
/*2042*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$src)
/*2051*/        /*Scope*/ 17, /*->2069*/
/*2052*/          OPC_CheckPredicate, 28, // Predicate_extloadi8
/*2054*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*2056*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*2059*/          OPC_EmitMergeInputChains1_0,
/*2060*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$src)
/*2069*/        /*Scope*/ 40, /*->2110*/
/*2070*/          OPC_CheckPredicate, 29, // Predicate_extloadi16
/*2072*/          OPC_Scope, 17, /*->2091*/ // 2 children in Scope
/*2074*/            OPC_CheckPredicate, 30, // Predicate_extloadi16_a
/*2076*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*2078*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*2081*/            OPC_EmitMergeInputChains1_0,
/*2082*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>><<P:Predicate_extloadi16_a>> - Complexity = 13
                    // Dst: (LH64_P8:i64 addr:i64:$src)
/*2091*/          /*Scope*/ 17, /*->2109*/
/*2092*/            OPC_CheckPredicate, 31, // Predicate_extloadi16_u
/*2094*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*2096*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*2099*/            OPC_EmitMergeInputChains1_0,
/*2100*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ULH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>><<P:Predicate_extloadi16_u>> - Complexity = 13
                    // Dst: (ULH64_P8:i64 addr:i64:$src)
/*2109*/          0, /*End of Scope*/
/*2110*/        /*Scope*/ 40, /*->2151*/
/*2111*/          OPC_CheckPredicate, 37, // Predicate_extloadi32
/*2113*/          OPC_Scope, 17, /*->2132*/ // 2 children in Scope
/*2115*/            OPC_CheckPredicate, 38, // Predicate_extloadi32_a
/*2117*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*2119*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*2122*/            OPC_EmitMergeInputChains1_0,
/*2123*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>><<P:Predicate_extloadi32_a>> - Complexity = 13
                    // Dst: (LW64_P8:i64 addr:i64:$src)
/*2132*/          /*Scope*/ 17, /*->2150*/
/*2133*/            OPC_CheckPredicate, 39, // Predicate_extloadi32_u
/*2135*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*2137*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*2140*/            OPC_EmitMergeInputChains1_0,
/*2141*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ULW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>><<P:Predicate_extloadi32_u>> - Complexity = 13
                    // Dst: (ULW64_P8:i64 addr:i64:$src)
/*2150*/          0, /*End of Scope*/
/*2151*/        0, /*End of Scope*/
/*2152*/      /*Scope*/ 96, /*->2249*/
/*2153*/        OPC_CheckPredicate, 15, // Predicate_zextload
/*2155*/        OPC_CheckPredicate, 34, // Predicate_zextloadi32
/*2157*/        OPC_CheckPredicate, 40, // Predicate_zextloadi32_u
/*2159*/        OPC_CheckType, MVT::i64,
/*2161*/        OPC_Scope, 42, /*->2205*/ // 2 children in Scope
/*2163*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*2165*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$a #2 #3
/*2168*/          OPC_EmitMergeInputChains1_0,
/*2169*/          OPC_EmitNode, TARGET_VAL(Mips::ULW64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3,  // Results = #4 
/*2178*/          OPC_EmitInteger, MVT::i32, 32, 
/*2181*/          OPC_EmitNode, TARGET_VAL(Mips::DSLL), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 4, 5,  // Results = #6 
/*2190*/          OPC_EmitInteger, MVT::i32, 32, 
/*2193*/          OPC_EmitNode, TARGET_VAL(Mips::DSRL), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 6, 7,  // Results = #8 
/*2202*/          OPC_CompleteMatch, 1, 8, 
                  // Src: (ld:i64 addr:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>><<P:Predicate_zextloadi32_u>> - Complexity = 13
                  // Dst: (DSRL:i64 (DSLL:i64 (ULW64:i64 addr:i32:$a), 32:i32), 32:i32)
/*2205*/        /*Scope*/ 42, /*->2248*/
/*2206*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*2208*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$a #2 #3
/*2211*/          OPC_EmitMergeInputChains1_0,
/*2212*/          OPC_EmitNode, TARGET_VAL(Mips::ULW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3,  // Results = #4 
/*2221*/          OPC_EmitInteger, MVT::i32, 32, 
/*2224*/          OPC_EmitNode, TARGET_VAL(Mips::DSLL), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 4, 5,  // Results = #6 
/*2233*/          OPC_EmitInteger, MVT::i32, 32, 
/*2236*/          OPC_EmitNode, TARGET_VAL(Mips::DSRL), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 6, 7,  // Results = #8 
/*2245*/          OPC_CompleteMatch, 1, 8, 
                  // Src: (ld:i64 addr:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>><<P:Predicate_zextloadi32_u>> - Complexity = 13
                  // Dst: (DSRL:i64 (DSLL:i64 (ULW64_P8:i64 addr:i64:$a), 32:i32), 32:i32)
/*2248*/        0, /*End of Scope*/
/*2249*/      /*Scope*/ 94, /*->2344*/
/*2250*/        OPC_CheckPredicate, 21, // Predicate_load
/*2252*/        OPC_CheckPredicate, 22, // Predicate_load_a
/*2254*/        OPC_SwitchType /*2 cases */, 34,  MVT::f32,// ->2291
/*2257*/          OPC_Scope, 15, /*->2274*/ // 2 children in Scope
/*2259*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*2261*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*2264*/            OPC_EmitMergeInputChains1_0,
/*2265*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a>> - Complexity = 13
                    // Dst: (LWC1_P8:f32 addr:i64:$addr)
/*2274*/          /*Scope*/ 15, /*->2290*/
/*2275*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*2277*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*2280*/            OPC_EmitMergeInputChains1_0,
/*2281*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a>> - Complexity = 13
                    // Dst: (LWC1:f32 addr:i32:$addr)
/*2290*/          0, /*End of Scope*/
                /*SwitchType*/ 50,  MVT::f64,// ->2343
/*2293*/          OPC_Scope, 15, /*->2310*/ // 3 children in Scope
/*2295*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*2297*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*2300*/            OPC_EmitMergeInputChains1_0,
/*2301*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a>> - Complexity = 13
                    // Dst: (LDC164_P8:f64 addr:i64:$addr)
/*2310*/          /*Scope*/ 15, /*->2326*/
/*2311*/            OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64())
/*2313*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*2316*/            OPC_EmitMergeInputChains1_0,
/*2317*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a>> - Complexity = 13
                    // Dst: (LDC164:f64 addr:i32:$addr)
/*2326*/          /*Scope*/ 15, /*->2342*/
/*2327*/            OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64())
/*2329*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*2332*/            OPC_EmitMergeInputChains1_0,
/*2333*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a>> - Complexity = 13
                    // Dst: (LDC1:f64 addr:i32:$addr)
/*2342*/          0, /*End of Scope*/
                0, // EndSwitchType
/*2344*/      0, /*End of Scope*/
/*2345*/    /*Scope*/ 15|128,1/*143*/, /*->2490*/
/*2347*/      OPC_MoveChild, 1,
/*2349*/      OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*2352*/      OPC_RecordChild0, // #1 = $base
/*2353*/      OPC_RecordChild1, // #2 = $index
/*2354*/      OPC_SwitchType /*2 cases */, 73,  MVT::i32,// ->2430
/*2357*/        OPC_MoveParent,
/*2358*/        OPC_CheckPredicate, 12, // Predicate_unindexedload
/*2360*/        OPC_CheckPredicate, 21, // Predicate_load
/*2362*/        OPC_SwitchType /*2 cases */, 32,  MVT::f32,// ->2397
/*2365*/          OPC_Scope, 14, /*->2381*/ // 2 children in Scope
/*2367*/            OPC_CheckPredicate, 22, // Predicate_load_a
/*2369*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasMips32r2Or64())
/*2371*/            OPC_EmitMergeInputChains1_0,
/*2372*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LWXC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:f32 (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a>> - Complexity = 7
                    // Dst: (LWXC1:f32 CPURegs:i32:$base, CPURegs:i32:$index)
/*2381*/          /*Scope*/ 14, /*->2396*/
/*2382*/            OPC_CheckPredicate, 25, // Predicate_load_u
/*2384*/            OPC_CheckPatternPredicate, 2, // (Subtarget.hasMips32r2Or64())
/*2386*/            OPC_EmitMergeInputChains1_0,
/*2387*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LUXC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:f32 (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_u>> - Complexity = 7
                    // Dst: (LUXC1:f32 CPURegs:i32:$base, CPURegs:i32:$index)
/*2396*/          0, /*End of Scope*/
                /*SwitchType*/ 30,  MVT::f64,// ->2429
/*2399*/          OPC_CheckPredicate, 22, // Predicate_load_a
/*2401*/          OPC_Scope, 12, /*->2415*/ // 2 children in Scope
/*2403*/            OPC_CheckPatternPredicate, 6, // (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64())
/*2405*/            OPC_EmitMergeInputChains1_0,
/*2406*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:f64 (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a>> - Complexity = 7
                    // Dst: (LDXC1:f64 CPURegs:i32:$base, CPURegs:i32:$index)
/*2415*/          /*Scope*/ 12, /*->2428*/
/*2416*/            OPC_CheckPatternPredicate, 7, // (Subtarget.hasMips64()) && (!Subtarget.isABI_N64())
/*2418*/            OPC_EmitMergeInputChains1_0,
/*2419*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC164), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:f64 (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a>> - Complexity = 7
                    // Dst: (LDXC164:f64 CPURegs:i32:$base, CPURegs:i32:$index)
/*2428*/          0, /*End of Scope*/
                0, // EndSwitchType
              /*SwitchType*/ 57,  MVT::i64,// ->2489
/*2432*/        OPC_MoveParent,
/*2433*/        OPC_CheckPredicate, 12, // Predicate_unindexedload
/*2435*/        OPC_CheckPredicate, 21, // Predicate_load
/*2437*/        OPC_SwitchType /*2 cases */, 32,  MVT::f32,// ->2472
/*2440*/          OPC_Scope, 14, /*->2456*/ // 2 children in Scope
/*2442*/            OPC_CheckPredicate, 22, // Predicate_load_a
/*2444*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*2446*/            OPC_EmitMergeInputChains1_0,
/*2447*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LWXC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:f32 (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a>> - Complexity = 7
                    // Dst: (LWXC1_P8:f32 CPU64Regs:i64:$base, CPU64Regs:i64:$index)
/*2456*/          /*Scope*/ 14, /*->2471*/
/*2457*/            OPC_CheckPredicate, 25, // Predicate_load_u
/*2459*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*2461*/            OPC_EmitMergeInputChains1_0,
/*2462*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LUXC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:f32 (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_u>> - Complexity = 7
                    // Dst: (LUXC1_P8:f32 CPU64Regs:i64:$base, CPU64Regs:i64:$index)
/*2471*/          0, /*End of Scope*/
                /*SwitchType*/ 14,  MVT::f64,// ->2488
/*2474*/          OPC_CheckPredicate, 22, // Predicate_load_a
/*2476*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*2478*/          OPC_EmitMergeInputChains1_0,
/*2479*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:f64 (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a>> - Complexity = 7
                  // Dst: (LDXC164_P8:f64 CPU64Regs:i64:$base, CPU64Regs:i64:$index)
                0, // EndSwitchType
              0, // EndSwitchType
/*2490*/    /*Scope*/ 53, /*->2544*/
/*2491*/      OPC_RecordChild1, // #1 = $addr
/*2492*/      OPC_CheckType, MVT::f32,
/*2494*/      OPC_Scope, 23, /*->2519*/ // 2 children in Scope
/*2496*/        OPC_CheckChild1Type, MVT::i32,
/*2498*/        OPC_CheckPredicate, 12, // Predicate_unindexedload
/*2500*/        OPC_CheckPredicate, 21, // Predicate_load
/*2502*/        OPC_CheckPredicate, 25, // Predicate_load_u
/*2504*/        OPC_CheckPatternPredicate, 3, // (Subtarget.hasMips32r2Or64()) && (!Subtarget.isABI_N64())
/*2506*/        OPC_EmitMergeInputChains1_0,
/*2507*/        OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*2510*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LUXC1), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:f32 CPURegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_u>> - Complexity = 4
                // Dst: (LUXC1:f32 CPURegs:i32:$addr, ZERO:i32)
/*2519*/      /*Scope*/ 23, /*->2543*/
/*2520*/        OPC_CheckChild1Type, MVT::i64,
/*2522*/        OPC_CheckPredicate, 12, // Predicate_unindexedload
/*2524*/        OPC_CheckPredicate, 21, // Predicate_load
/*2526*/        OPC_CheckPredicate, 25, // Predicate_load_u
/*2528*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*2530*/        OPC_EmitMergeInputChains1_0,
/*2531*/        OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*2534*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LUXC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:f32 CPU64Regs:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_u>> - Complexity = 4
                // Dst: (LUXC1_P8:f32 CPU64Regs:i64:$addr, ZERO_64:i64)
/*2543*/      0, /*End of Scope*/
/*2544*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 43,  TARGET_VAL(MipsISD::DynAlloc),// ->2591
/*2548*/    OPC_RecordNode,   // #0 = 'MipsDynAlloc' chained node
/*2549*/    OPC_CaptureGlueInput,
/*2550*/    OPC_RecordChild1, // #1 = $f
/*2551*/    OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->2570
/*2554*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$f #2 #3
/*2557*/      OPC_EmitMergeInputChains1_0,
/*2558*/      OPC_EmitNode, TARGET_VAL(Mips::DynAlloc), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*2567*/      OPC_CompleteMatch, 1, 4, 
              // Src: (MipsDynAlloc:i32 addr:i32:$f) - Complexity = 12
              // Dst: (DynAlloc:i32 addr:i32:$f)
            /*SwitchType*/ 18,  MVT::i64,// ->2590
/*2572*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*2574*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$f #2 #3
/*2577*/      OPC_EmitMergeInputChains1_0,
/*2578*/      OPC_EmitNode, TARGET_VAL(Mips::DynAlloc64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3,  // Results = #4 
/*2587*/      OPC_CompleteMatch, 1, 4, 
              // Src: (MipsDynAlloc:i64 addr:i64:$f) - Complexity = 12
              // Dst: (DynAlloc64:i64 addr:i64:$f)
            0, // EndSwitchType
          /*SwitchOpcode*/ 25|128,1/*153*/,  TARGET_VAL(ISD::XOR),// ->2748
/*2595*/    OPC_Scope, 46, /*->2643*/ // 2 children in Scope
/*2597*/      OPC_MoveChild, 0,
/*2599*/      OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*2602*/      OPC_RecordChild0, // #0 = $rs
/*2603*/      OPC_RecordChild1, // #1 = $rt
/*2604*/      OPC_MoveParent,
/*2605*/      OPC_MoveChild, 1,
/*2607*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2618*/      OPC_MoveParent,
/*2619*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->2631
/*2622*/        OPC_MorphNodeTo, TARGET_VAL(Mips::NOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 (or:i32 CPURegs:i32:$rs, CPURegs:i32:$rt), -1:i32) - Complexity = 11
                // Dst: (NOR:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
              /*SwitchType*/ 9,  MVT::i64,// ->2642
/*2633*/        OPC_MorphNodeTo, TARGET_VAL(Mips::NOR64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 (or:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt), -1:i64) - Complexity = 11
                // Dst: (NOR64:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
              0, // EndSwitchType
/*2643*/    /*Scope*/ 103, /*->2747*/
/*2644*/      OPC_RecordChild0, // #0 = $in
/*2645*/      OPC_Scope, 28, /*->2675*/ // 2 children in Scope
/*2647*/        OPC_MoveChild, 1,
/*2649*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2660*/        OPC_MoveParent,
/*2661*/        OPC_CheckType, MVT::i32,
/*2663*/        OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*2666*/        OPC_MorphNodeTo, TARGET_VAL(Mips::NOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 CPURegs:i32:$in, -1:i32) - Complexity = 8
                // Dst: (NOR:i32 CPURegs:i32:$in, ZERO:i32)
/*2675*/      /*Scope*/ 70, /*->2746*/
/*2676*/        OPC_RecordChild1, // #1 = $imm16
/*2677*/        OPC_Scope, 42, /*->2721*/ // 3 children in Scope
/*2679*/          OPC_MoveChild, 1,
/*2681*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2684*/          OPC_CheckPredicate, 41, // Predicate_immZExt16
/*2686*/          OPC_MoveParent,
/*2687*/          OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->2704
/*2690*/            OPC_EmitConvertToTarget, 1,
/*2692*/            OPC_EmitNodeXForm, 0, 2, // LO16
/*2695*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (XORi:i32 CPURegs:i32:$rs, (LO16:i32 (imm:i32):$imm16))
                  /*SwitchType*/ 14,  MVT::i64,// ->2720
/*2706*/            OPC_EmitConvertToTarget, 1,
/*2708*/            OPC_EmitNodeXForm, 0, 2, // LO16
/*2711*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XORi64), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 CPU64Regs:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (XORi64:i64 CPU64Regs:i64:$rs, (LO16:i64 (imm:i64):$imm16))
                  0, // EndSwitchType
/*2721*/        /*Scope*/ 11, /*->2733*/
/*2722*/          OPC_CheckType, MVT::i32,
/*2724*/          OPC_MorphNodeTo, TARGET_VAL(Mips::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
                  // Dst: (XOR:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*2733*/        /*Scope*/ 11, /*->2745*/
/*2734*/          OPC_CheckType, MVT::i64,
/*2736*/          OPC_MorphNodeTo, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt) - Complexity = 3
                  // Dst: (XOR64:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*2745*/        0, /*End of Scope*/
/*2746*/      0, /*End of Scope*/
/*2747*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 77|128,7/*973*/,  TARGET_VAL(ISD::BRCOND),// ->3725
/*2752*/    OPC_RecordNode,   // #0 = 'brcond' chained node
/*2753*/    OPC_Scope, 22|128,7/*918*/, /*->3674*/ // 2 children in Scope
/*2756*/      OPC_MoveChild, 1,
/*2758*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*2761*/      OPC_RecordChild0, // #1 = $rs
/*2762*/      OPC_Scope, 69|128,3/*453*/, /*->3218*/ // 2 children in Scope
/*2765*/        OPC_CheckChild0Type, MVT::i32,
/*2767*/        OPC_Scope, 27|128,1/*155*/, /*->2925*/ // 2 children in Scope
/*2770*/          OPC_MoveChild, 1,
/*2772*/          OPC_CheckInteger, 0, 
/*2774*/          OPC_MoveParent,
/*2775*/          OPC_MoveChild, 2,
/*2777*/          OPC_Scope, 22, /*->2801*/ // 6 children in Scope
/*2779*/            OPC_CheckCondCode, ISD::SETGE,
/*2781*/            OPC_MoveParent,
/*2782*/            OPC_CheckType, MVT::i32,
/*2784*/            OPC_MoveParent,
/*2785*/            OPC_RecordChild2, // #2 = $imm16
/*2786*/            OPC_MoveChild, 2,
/*2788*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2791*/            OPC_MoveParent,
/*2792*/            OPC_EmitMergeInputChains1_0,
/*2793*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$rs, 0:i32, SETGE:Other), (bb:Other):$imm16) - Complexity = 11
                    // Dst: (BGEZ CPURegs:i32:$rs, (bb:Other):$imm16)
/*2801*/          /*Scope*/ 22, /*->2824*/
/*2802*/            OPC_CheckCondCode, ISD::SETGT,
/*2804*/            OPC_MoveParent,
/*2805*/            OPC_CheckType, MVT::i32,
/*2807*/            OPC_MoveParent,
/*2808*/            OPC_RecordChild2, // #2 = $imm16
/*2809*/            OPC_MoveChild, 2,
/*2811*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2814*/            OPC_MoveParent,
/*2815*/            OPC_EmitMergeInputChains1_0,
/*2816*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BGTZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$rs, 0:i32, SETGT:Other), (bb:Other):$imm16) - Complexity = 11
                    // Dst: (BGTZ CPURegs:i32:$rs, (bb:Other):$imm16)
/*2824*/          /*Scope*/ 22, /*->2847*/
/*2825*/            OPC_CheckCondCode, ISD::SETLE,
/*2827*/            OPC_MoveParent,
/*2828*/            OPC_CheckType, MVT::i32,
/*2830*/            OPC_MoveParent,
/*2831*/            OPC_RecordChild2, // #2 = $imm16
/*2832*/            OPC_MoveChild, 2,
/*2834*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2837*/            OPC_MoveParent,
/*2838*/            OPC_EmitMergeInputChains1_0,
/*2839*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$rs, 0:i32, SETLE:Other), (bb:Other):$imm16) - Complexity = 11
                    // Dst: (BLEZ CPURegs:i32:$rs, (bb:Other):$imm16)
/*2847*/          /*Scope*/ 22, /*->2870*/
/*2848*/            OPC_CheckCondCode, ISD::SETLT,
/*2850*/            OPC_MoveParent,
/*2851*/            OPC_CheckType, MVT::i32,
/*2853*/            OPC_MoveParent,
/*2854*/            OPC_RecordChild2, // #2 = $imm16
/*2855*/            OPC_MoveChild, 2,
/*2857*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2860*/            OPC_MoveParent,
/*2861*/            OPC_EmitMergeInputChains1_0,
/*2862*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BLTZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$rs, 0:i32, SETLT:Other), (bb:Other):$imm16) - Complexity = 11
                    // Dst: (BLTZ CPURegs:i32:$rs, (bb:Other):$imm16)
/*2870*/          /*Scope*/ 26, /*->2897*/
/*2871*/            OPC_CheckCondCode, ISD::SETNE,
/*2873*/            OPC_MoveParent,
/*2874*/            OPC_CheckType, MVT::i32,
/*2876*/            OPC_MoveParent,
/*2877*/            OPC_RecordChild2, // #2 = $dst
/*2878*/            OPC_MoveChild, 2,
/*2880*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2883*/            OPC_MoveParent,
/*2884*/            OPC_EmitMergeInputChains1_0,
/*2885*/            OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*2888*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BNE CPURegs:i32:$lhs, ZERO:i32, (bb:Other):$dst)
/*2897*/          /*Scope*/ 26, /*->2924*/
/*2898*/            OPC_CheckCondCode, ISD::SETEQ,
/*2900*/            OPC_MoveParent,
/*2901*/            OPC_CheckType, MVT::i32,
/*2903*/            OPC_MoveParent,
/*2904*/            OPC_RecordChild2, // #2 = $dst
/*2905*/            OPC_MoveChild, 2,
/*2907*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2910*/            OPC_MoveParent,
/*2911*/            OPC_EmitMergeInputChains1_0,
/*2912*/            OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*2915*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BEQ CPURegs:i32:$lhs, ZERO:i32, (bb:Other):$dst)
/*2924*/          0, /*End of Scope*/
/*2925*/        /*Scope*/ 34|128,2/*290*/, /*->3217*/
/*2927*/          OPC_RecordChild1, // #2 = $rhs
/*2928*/          OPC_Scope, 88, /*->3018*/ // 2 children in Scope
/*2930*/            OPC_MoveChild, 1,
/*2932*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2935*/            OPC_CheckPredicate, 42, // Predicate_immSExt16
/*2937*/            OPC_MoveParent,
/*2938*/            OPC_MoveChild, 2,
/*2940*/            OPC_Scope, 37, /*->2979*/ // 2 children in Scope
/*2942*/              OPC_CheckCondCode, ISD::SETGE,
/*2944*/              OPC_MoveParent,
/*2945*/              OPC_CheckType, MVT::i32,
/*2947*/              OPC_MoveParent,
/*2948*/              OPC_RecordChild2, // #3 = $dst
/*2949*/              OPC_MoveChild, 2,
/*2951*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2954*/              OPC_MoveParent,
/*2955*/              OPC_EmitMergeInputChains1_0,
/*2956*/              OPC_EmitConvertToTarget, 2,
/*2958*/              OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5 
/*2967*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*2970*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 10
                      // Dst: (BEQ (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*2979*/            /*Scope*/ 37, /*->3017*/
/*2980*/              OPC_CheckCondCode, ISD::SETUGE,
/*2982*/              OPC_MoveParent,
/*2983*/              OPC_CheckType, MVT::i32,
/*2985*/              OPC_MoveParent,
/*2986*/              OPC_RecordChild2, // #3 = $dst
/*2987*/              OPC_MoveChild, 2,
/*2989*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2992*/              OPC_MoveParent,
/*2993*/              OPC_EmitMergeInputChains1_0,
/*2994*/              OPC_EmitConvertToTarget, 2,
/*2996*/              OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5 
/*3005*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*3008*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 10
                      // Dst: (BEQ (SLTiu:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*3017*/            0, /*End of Scope*/
/*3018*/          /*Scope*/ 68|128,1/*196*/, /*->3216*/
/*3020*/            OPC_MoveChild, 2,
/*3022*/            OPC_Scope, 23, /*->3047*/ // 6 children in Scope
/*3024*/              OPC_CheckCondCode, ISD::SETEQ,
/*3026*/              OPC_MoveParent,
/*3027*/              OPC_CheckType, MVT::i32,
/*3029*/              OPC_MoveParent,
/*3030*/              OPC_RecordChild2, // #3 = $imm16
/*3031*/              OPC_MoveChild, 2,
/*3033*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3036*/              OPC_MoveParent,
/*3037*/              OPC_EmitMergeInputChains1_0,
/*3038*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$rs, CPURegs:i32:$rt, SETEQ:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BEQ CPURegs:i32:$rs, CPURegs:i32:$rt, (bb:Other):$imm16)
/*3047*/            /*Scope*/ 23, /*->3071*/
/*3048*/              OPC_CheckCondCode, ISD::SETNE,
/*3050*/              OPC_MoveParent,
/*3051*/              OPC_CheckType, MVT::i32,
/*3053*/              OPC_MoveParent,
/*3054*/              OPC_RecordChild2, // #3 = $imm16
/*3055*/              OPC_MoveChild, 2,
/*3057*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3060*/              OPC_MoveParent,
/*3061*/              OPC_EmitMergeInputChains1_0,
/*3062*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$rs, CPURegs:i32:$rt, SETNE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BNE CPURegs:i32:$rs, CPURegs:i32:$rt, (bb:Other):$imm16)
/*3071*/            /*Scope*/ 35, /*->3107*/
/*3072*/              OPC_CheckCondCode, ISD::SETGE,
/*3074*/              OPC_MoveParent,
/*3075*/              OPC_CheckType, MVT::i32,
/*3077*/              OPC_MoveParent,
/*3078*/              OPC_RecordChild2, // #3 = $dst
/*3079*/              OPC_MoveChild, 2,
/*3081*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3084*/              OPC_MoveParent,
/*3085*/              OPC_EmitMergeInputChains1_0,
/*3086*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4 
/*3095*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*3098*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), ZERO:i32, (bb:Other):$dst)
/*3107*/            /*Scope*/ 35, /*->3143*/
/*3108*/              OPC_CheckCondCode, ISD::SETUGE,
/*3110*/              OPC_MoveParent,
/*3111*/              OPC_CheckType, MVT::i32,
/*3113*/              OPC_MoveParent,
/*3114*/              OPC_RecordChild2, // #3 = $dst
/*3115*/              OPC_MoveChild, 2,
/*3117*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3120*/              OPC_MoveParent,
/*3121*/              OPC_EmitMergeInputChains1_0,
/*3122*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4 
/*3131*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*3134*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), ZERO:i32, (bb:Other):$dst)
/*3143*/            /*Scope*/ 35, /*->3179*/
/*3144*/              OPC_CheckCondCode, ISD::SETLE,
/*3146*/              OPC_MoveParent,
/*3147*/              OPC_CheckType, MVT::i32,
/*3149*/              OPC_MoveParent,
/*3150*/              OPC_RecordChild2, // #3 = $dst
/*3151*/              OPC_MoveChild, 2,
/*3153*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3156*/              OPC_MoveParent,
/*3157*/              OPC_EmitMergeInputChains1_0,
/*3158*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4 
/*3167*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*3170*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), ZERO:i32, (bb:Other):$dst)
/*3179*/            /*Scope*/ 35, /*->3215*/
/*3180*/              OPC_CheckCondCode, ISD::SETULE,
/*3182*/              OPC_MoveParent,
/*3183*/              OPC_CheckType, MVT::i32,
/*3185*/              OPC_MoveParent,
/*3186*/              OPC_RecordChild2, // #3 = $dst
/*3187*/              OPC_MoveChild, 2,
/*3189*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3192*/              OPC_MoveParent,
/*3193*/              OPC_EmitMergeInputChains1_0,
/*3194*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4 
/*3203*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*3206*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), ZERO:i32, (bb:Other):$dst)
/*3215*/            0, /*End of Scope*/
/*3216*/          0, /*End of Scope*/
/*3217*/        0, /*End of Scope*/
/*3218*/      /*Scope*/ 69|128,3/*453*/, /*->3673*/
/*3220*/        OPC_CheckChild0Type, MVT::i64,
/*3222*/        OPC_Scope, 27|128,1/*155*/, /*->3380*/ // 2 children in Scope
/*3225*/          OPC_MoveChild, 1,
/*3227*/          OPC_CheckInteger, 0, 
/*3229*/          OPC_MoveParent,
/*3230*/          OPC_MoveChild, 2,
/*3232*/          OPC_Scope, 22, /*->3256*/ // 6 children in Scope
/*3234*/            OPC_CheckCondCode, ISD::SETGE,
/*3236*/            OPC_MoveParent,
/*3237*/            OPC_CheckType, MVT::i32,
/*3239*/            OPC_MoveParent,
/*3240*/            OPC_RecordChild2, // #2 = $imm16
/*3241*/            OPC_MoveChild, 2,
/*3243*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3246*/            OPC_MoveParent,
/*3247*/            OPC_EmitMergeInputChains1_0,
/*3248*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, 0:i64, SETGE:Other), (bb:Other):$imm16) - Complexity = 11
                    // Dst: (BGEZ64 CPU64Regs:i64:$rs, (bb:Other):$imm16)
/*3256*/          /*Scope*/ 22, /*->3279*/
/*3257*/            OPC_CheckCondCode, ISD::SETGT,
/*3259*/            OPC_MoveParent,
/*3260*/            OPC_CheckType, MVT::i32,
/*3262*/            OPC_MoveParent,
/*3263*/            OPC_RecordChild2, // #2 = $imm16
/*3264*/            OPC_MoveChild, 2,
/*3266*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3269*/            OPC_MoveParent,
/*3270*/            OPC_EmitMergeInputChains1_0,
/*3271*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BGTZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, 0:i64, SETGT:Other), (bb:Other):$imm16) - Complexity = 11
                    // Dst: (BGTZ64 CPU64Regs:i64:$rs, (bb:Other):$imm16)
/*3279*/          /*Scope*/ 22, /*->3302*/
/*3280*/            OPC_CheckCondCode, ISD::SETLE,
/*3282*/            OPC_MoveParent,
/*3283*/            OPC_CheckType, MVT::i32,
/*3285*/            OPC_MoveParent,
/*3286*/            OPC_RecordChild2, // #2 = $imm16
/*3287*/            OPC_MoveChild, 2,
/*3289*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3292*/            OPC_MoveParent,
/*3293*/            OPC_EmitMergeInputChains1_0,
/*3294*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, 0:i64, SETLE:Other), (bb:Other):$imm16) - Complexity = 11
                    // Dst: (BLEZ64 CPU64Regs:i64:$rs, (bb:Other):$imm16)
/*3302*/          /*Scope*/ 22, /*->3325*/
/*3303*/            OPC_CheckCondCode, ISD::SETLT,
/*3305*/            OPC_MoveParent,
/*3306*/            OPC_CheckType, MVT::i32,
/*3308*/            OPC_MoveParent,
/*3309*/            OPC_RecordChild2, // #2 = $imm16
/*3310*/            OPC_MoveChild, 2,
/*3312*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3315*/            OPC_MoveParent,
/*3316*/            OPC_EmitMergeInputChains1_0,
/*3317*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BLTZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, 0:i64, SETLT:Other), (bb:Other):$imm16) - Complexity = 11
                    // Dst: (BLTZ64 CPU64Regs:i64:$rs, (bb:Other):$imm16)
/*3325*/          /*Scope*/ 26, /*->3352*/
/*3326*/            OPC_CheckCondCode, ISD::SETNE,
/*3328*/            OPC_MoveParent,
/*3329*/            OPC_CheckType, MVT::i32,
/*3331*/            OPC_MoveParent,
/*3332*/            OPC_RecordChild2, // #2 = $dst
/*3333*/            OPC_MoveChild, 2,
/*3335*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3338*/            OPC_MoveParent,
/*3339*/            OPC_EmitMergeInputChains1_0,
/*3340*/            OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*3343*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BNE64 CPU64Regs:i64:$lhs, ZERO_64:i64, (bb:Other):$dst)
/*3352*/          /*Scope*/ 26, /*->3379*/
/*3353*/            OPC_CheckCondCode, ISD::SETEQ,
/*3355*/            OPC_MoveParent,
/*3356*/            OPC_CheckType, MVT::i32,
/*3358*/            OPC_MoveParent,
/*3359*/            OPC_RecordChild2, // #2 = $dst
/*3360*/            OPC_MoveChild, 2,
/*3362*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3365*/            OPC_MoveParent,
/*3366*/            OPC_EmitMergeInputChains1_0,
/*3367*/            OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*3370*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ64), 0|OPFL_Chain,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BEQ64 CPU64Regs:i64:$lhs, ZERO_64:i64, (bb:Other):$dst)
/*3379*/          0, /*End of Scope*/
/*3380*/        /*Scope*/ 34|128,2/*290*/, /*->3672*/
/*3382*/          OPC_RecordChild1, // #2 = $rhs
/*3383*/          OPC_Scope, 88, /*->3473*/ // 2 children in Scope
/*3385*/            OPC_MoveChild, 1,
/*3387*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3390*/            OPC_CheckPredicate, 42, // Predicate_immSExt16
/*3392*/            OPC_MoveParent,
/*3393*/            OPC_MoveChild, 2,
/*3395*/            OPC_Scope, 37, /*->3434*/ // 2 children in Scope
/*3397*/              OPC_CheckCondCode, ISD::SETGE,
/*3399*/              OPC_MoveParent,
/*3400*/              OPC_CheckType, MVT::i32,
/*3402*/              OPC_MoveParent,
/*3403*/              OPC_RecordChild2, // #3 = $dst
/*3404*/              OPC_MoveChild, 2,
/*3406*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3409*/              OPC_MoveParent,
/*3410*/              OPC_EmitMergeInputChains1_0,
/*3411*/              OPC_EmitConvertToTarget, 2,
/*3413*/              OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5 
/*3422*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*3425*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 10
                      // Dst: (BEQ (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*3434*/            /*Scope*/ 37, /*->3472*/
/*3435*/              OPC_CheckCondCode, ISD::SETUGE,
/*3437*/              OPC_MoveParent,
/*3438*/              OPC_CheckType, MVT::i32,
/*3440*/              OPC_MoveParent,
/*3441*/              OPC_RecordChild2, // #3 = $dst
/*3442*/              OPC_MoveChild, 2,
/*3444*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3447*/              OPC_MoveParent,
/*3448*/              OPC_EmitMergeInputChains1_0,
/*3449*/              OPC_EmitConvertToTarget, 2,
/*3451*/              OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5 
/*3460*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*3463*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 10
                      // Dst: (BEQ (SLTiu64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*3472*/            0, /*End of Scope*/
/*3473*/          /*Scope*/ 68|128,1/*196*/, /*->3671*/
/*3475*/            OPC_MoveChild, 2,
/*3477*/            OPC_Scope, 23, /*->3502*/ // 6 children in Scope
/*3479*/              OPC_CheckCondCode, ISD::SETEQ,
/*3481*/              OPC_MoveParent,
/*3482*/              OPC_CheckType, MVT::i32,
/*3484*/              OPC_MoveParent,
/*3485*/              OPC_RecordChild2, // #3 = $imm16
/*3486*/              OPC_MoveChild, 2,
/*3488*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3491*/              OPC_MoveParent,
/*3492*/              OPC_EmitMergeInputChains1_0,
/*3493*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ64), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, SETEQ:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BEQ64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, (bb:Other):$imm16)
/*3502*/            /*Scope*/ 23, /*->3526*/
/*3503*/              OPC_CheckCondCode, ISD::SETNE,
/*3505*/              OPC_MoveParent,
/*3506*/              OPC_CheckType, MVT::i32,
/*3508*/              OPC_MoveParent,
/*3509*/              OPC_RecordChild2, // #3 = $imm16
/*3510*/              OPC_MoveChild, 2,
/*3512*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3515*/              OPC_MoveParent,
/*3516*/              OPC_EmitMergeInputChains1_0,
/*3517*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, SETNE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BNE64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, (bb:Other):$imm16)
/*3526*/            /*Scope*/ 35, /*->3562*/
/*3527*/              OPC_CheckCondCode, ISD::SETGE,
/*3529*/              OPC_MoveParent,
/*3530*/              OPC_CheckType, MVT::i32,
/*3532*/              OPC_MoveParent,
/*3533*/              OPC_RecordChild2, // #3 = $dst
/*3534*/              OPC_MoveChild, 2,
/*3536*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3539*/              OPC_MoveParent,
/*3540*/              OPC_EmitMergeInputChains1_0,
/*3541*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4 
/*3550*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*3553*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), ZERO:i32, (bb:Other):$dst)
/*3562*/            /*Scope*/ 35, /*->3598*/
/*3563*/              OPC_CheckCondCode, ISD::SETUGE,
/*3565*/              OPC_MoveParent,
/*3566*/              OPC_CheckType, MVT::i32,
/*3568*/              OPC_MoveParent,
/*3569*/              OPC_RecordChild2, // #3 = $dst
/*3570*/              OPC_MoveChild, 2,
/*3572*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3575*/              OPC_MoveParent,
/*3576*/              OPC_EmitMergeInputChains1_0,
/*3577*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4 
/*3586*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*3589*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), ZERO:i32, (bb:Other):$dst)
/*3598*/            /*Scope*/ 35, /*->3634*/
/*3599*/              OPC_CheckCondCode, ISD::SETLE,
/*3601*/              OPC_MoveParent,
/*3602*/              OPC_CheckType, MVT::i32,
/*3604*/              OPC_MoveParent,
/*3605*/              OPC_RecordChild2, // #3 = $dst
/*3606*/              OPC_MoveChild, 2,
/*3608*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3611*/              OPC_MoveParent,
/*3612*/              OPC_EmitMergeInputChains1_0,
/*3613*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4 
/*3622*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*3625*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), ZERO:i32, (bb:Other):$dst)
/*3634*/            /*Scope*/ 35, /*->3670*/
/*3635*/              OPC_CheckCondCode, ISD::SETULE,
/*3637*/              OPC_MoveParent,
/*3638*/              OPC_CheckType, MVT::i32,
/*3640*/              OPC_MoveParent,
/*3641*/              OPC_RecordChild2, // #3 = $dst
/*3642*/              OPC_MoveChild, 2,
/*3644*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3647*/              OPC_MoveParent,
/*3648*/              OPC_EmitMergeInputChains1_0,
/*3649*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4 
/*3658*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*3661*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), ZERO:i32, (bb:Other):$dst)
/*3670*/            0, /*End of Scope*/
/*3671*/          0, /*End of Scope*/
/*3672*/        0, /*End of Scope*/
/*3673*/      0, /*End of Scope*/
/*3674*/    /*Scope*/ 49, /*->3724*/
/*3675*/      OPC_RecordChild1, // #1 = $cond
/*3676*/      OPC_Scope, 22, /*->3700*/ // 2 children in Scope
/*3678*/        OPC_CheckChild1Type, MVT::i32,
/*3680*/        OPC_RecordChild2, // #2 = $dst
/*3681*/        OPC_MoveChild, 2,
/*3683*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3686*/        OPC_MoveParent,
/*3687*/        OPC_EmitMergeInputChains1_0,
/*3688*/        OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*3691*/        OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                // Src: (brcond CPURegs:i32:$cond, (bb:Other):$dst) - Complexity = 3
                // Dst: (BNE CPURegs:i32:$cond, ZERO:i32, (bb:Other):$dst)
/*3700*/      /*Scope*/ 22, /*->3723*/
/*3701*/        OPC_CheckChild1Type, MVT::i64,
/*3703*/        OPC_RecordChild2, // #2 = $dst
/*3704*/        OPC_MoveChild, 2,
/*3706*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3709*/        OPC_MoveParent,
/*3710*/        OPC_EmitMergeInputChains1_0,
/*3711*/        OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*3714*/        OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                // Src: (brcond CPU64Regs:i64:$cond, (bb:Other):$dst) - Complexity = 3
                // Dst: (BNE64 CPU64Regs:i64:$cond, ZERO_64:i64, (bb:Other):$dst)
/*3723*/      0, /*End of Scope*/
/*3724*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 78,  TARGET_VAL(ISD::CTLZ),// ->3806
/*3728*/    OPC_Scope, 47, /*->3777*/ // 2 children in Scope
/*3730*/      OPC_MoveChild, 0,
/*3732*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3735*/      OPC_RecordChild0, // #0 = $rs
/*3736*/      OPC_MoveChild, 1,
/*3738*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3749*/      OPC_MoveParent,
/*3750*/      OPC_MoveParent,
/*3751*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->3764
/*3754*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasBitCount())
/*3756*/        OPC_MorphNodeTo, TARGET_VAL(Mips::CLO), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (ctlz:i32 (xor:i32 CPURegs:i32:$rs, -1:i32)) - Complexity = 11
                // Dst: (CLO:i32 CPURegs:i32:$rs)
              /*SwitchType*/ 10,  MVT::i64,// ->3776
/*3766*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasBitCount())
/*3768*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DCLO), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (ctlz:i64 (xor:i64 CPU64Regs:i64:$rs, -1:i64)) - Complexity = 11
                // Dst: (DCLO:i64 CPU64Regs:i64:$rs)
              0, // EndSwitchType
/*3777*/    /*Scope*/ 27, /*->3805*/
/*3778*/      OPC_RecordChild0, // #0 = $rs
/*3779*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->3792
/*3782*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasBitCount())
/*3784*/        OPC_MorphNodeTo, TARGET_VAL(Mips::CLZ), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (ctlz:i32 CPURegs:i32:$rs) - Complexity = 3
                // Dst: (CLZ:i32 CPURegs:i32:$rs)
              /*SwitchType*/ 10,  MVT::i64,// ->3804
/*3794*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasBitCount())
/*3796*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DCLZ), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (ctlz:i64 CPU64Regs:i64:$rs) - Complexity = 3
                // Dst: (DCLZ:i64 CPU64Regs:i64:$rs)
              0, // EndSwitchType
/*3805*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 54|128,23/*2998*/,  TARGET_VAL(ISD::SELECT),// ->6808
/*3810*/    OPC_Scope, 66|128,14/*1858*/, /*->5671*/ // 4 children in Scope
/*3813*/      OPC_MoveChild, 0,
/*3815*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*3818*/      OPC_RecordChild0, // #0 = $lhs
/*3819*/      OPC_Scope, 74|128,7/*970*/, /*->4792*/ // 2 children in Scope
/*3822*/        OPC_CheckChild0Type, MVT::i32,
/*3824*/        OPC_Scope, 83, /*->3909*/ // 4 children in Scope
/*3826*/          OPC_MoveChild, 1,
/*3828*/          OPC_CheckInteger, 0, 
/*3830*/          OPC_MoveParent,
/*3831*/          OPC_MoveChild, 2,
/*3833*/          OPC_Scope, 36, /*->3871*/ // 2 children in Scope
/*3835*/            OPC_CheckCondCode, ISD::SETEQ,
/*3837*/            OPC_MoveParent,
/*3838*/            OPC_CheckType, MVT::i32,
/*3840*/            OPC_MoveParent,
/*3841*/            OPC_RecordChild1, // #1 = $T
/*3842*/            OPC_RecordChild2, // #2 = $F
/*3843*/            OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->3856
/*3846*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, CPURegs:i32:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->3870
/*3858*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*3860*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, CPURegs:i32:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*3871*/          /*Scope*/ 36, /*->3908*/
/*3872*/            OPC_CheckCondCode, ISD::SETNE,
/*3874*/            OPC_MoveParent,
/*3875*/            OPC_CheckType, MVT::i32,
/*3877*/            OPC_MoveParent,
/*3878*/            OPC_RecordChild1, // #1 = $T
/*3879*/            OPC_RecordChild2, // #2 = $F
/*3880*/            OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->3893
/*3883*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVN_I_I:i32 CPURegs:i32:$T, CPURegs:i32:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->3907
/*3895*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*3897*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVN_I_I64:i64 CPU64Regs:i64:$T, CPURegs:i32:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*3908*/          0, /*End of Scope*/
/*3909*/        /*Scope*/ 17|128,1/*145*/, /*->4056*/
/*3911*/          OPC_RecordChild1, // #1 = $rhs
/*3912*/          OPC_MoveChild, 1,
/*3914*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3917*/          OPC_CheckPredicate, 42, // Predicate_immSExt16
/*3919*/          OPC_MoveParent,
/*3920*/          OPC_MoveChild, 2,
/*3922*/          OPC_Scope, 31, /*->3955*/ // 4 children in Scope
/*3924*/            OPC_CheckCondCode, ISD::SETGE,
/*3926*/            OPC_MoveParent,
/*3927*/            OPC_CheckType, MVT::i32,
/*3929*/            OPC_MoveParent,
/*3930*/            OPC_RecordChild1, // #2 = $T
/*3931*/            OPC_RecordChild2, // #3 = $F
/*3932*/            OPC_CheckType, MVT::i32,
/*3934*/            OPC_EmitConvertToTarget, 1,
/*3936*/            OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*3945*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                    // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                    // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), CPURegs:i32:$F)
/*3955*/          /*Scope*/ 31, /*->3987*/
/*3956*/            OPC_CheckCondCode, ISD::SETUGE,
/*3958*/            OPC_MoveParent,
/*3959*/            OPC_CheckType, MVT::i32,
/*3961*/            OPC_MoveParent,
/*3962*/            OPC_RecordChild1, // #2 = $T
/*3963*/            OPC_RecordChild2, // #3 = $F
/*3964*/            OPC_CheckType, MVT::i32,
/*3966*/            OPC_EmitConvertToTarget, 1,
/*3968*/            OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*3977*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                    // Src: (select:i32 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                    // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), CPURegs:i32:$F)
/*3987*/          /*Scope*/ 33, /*->4021*/
/*3988*/            OPC_CheckCondCode, ISD::SETGE,
/*3990*/            OPC_MoveParent,
/*3991*/            OPC_CheckType, MVT::i32,
/*3993*/            OPC_MoveParent,
/*3994*/            OPC_RecordChild1, // #2 = $T
/*3995*/            OPC_RecordChild2, // #3 = $F
/*3996*/            OPC_CheckType, MVT::i64,
/*3998*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*4000*/            OPC_EmitConvertToTarget, 1,
/*4002*/            OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*4011*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                    // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                    // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), CPU64Regs:i64:$F)
/*4021*/          /*Scope*/ 33, /*->4055*/
/*4022*/            OPC_CheckCondCode, ISD::SETUGE,
/*4024*/            OPC_MoveParent,
/*4025*/            OPC_CheckType, MVT::i32,
/*4027*/            OPC_MoveParent,
/*4028*/            OPC_RecordChild1, // #2 = $T
/*4029*/            OPC_RecordChild2, // #3 = $F
/*4030*/            OPC_CheckType, MVT::i64,
/*4032*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*4034*/            OPC_EmitConvertToTarget, 1,
/*4036*/            OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*4045*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                    // Src: (select:i64 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                    // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), CPU64Regs:i64:$F)
/*4055*/          0, /*End of Scope*/
/*4056*/        /*Scope*/ 15|128,1/*143*/, /*->4201*/
/*4058*/          OPC_MoveChild, 1,
/*4060*/          OPC_CheckInteger, 0, 
/*4062*/          OPC_MoveParent,
/*4063*/          OPC_MoveChild, 2,
/*4065*/          OPC_Scope, 20, /*->4087*/ // 6 children in Scope
/*4067*/            OPC_CheckCondCode, ISD::SETEQ,
/*4069*/            OPC_MoveParent,
/*4070*/            OPC_CheckType, MVT::i32,
/*4072*/            OPC_MoveParent,
/*4073*/            OPC_RecordChild1, // #1 = $T
/*4074*/            OPC_RecordChild2, // #2 = $F
/*4075*/            OPC_CheckType, MVT::f32,
/*4077*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, CPURegs:i32:$lhs, FGR32:f32:$F)
/*4087*/          /*Scope*/ 20, /*->4108*/
/*4088*/            OPC_CheckCondCode, ISD::SETNE,
/*4090*/            OPC_MoveParent,
/*4091*/            OPC_CheckType, MVT::i32,
/*4093*/            OPC_MoveParent,
/*4094*/            OPC_RecordChild1, // #1 = $T
/*4095*/            OPC_RecordChild2, // #2 = $F
/*4096*/            OPC_CheckType, MVT::f32,
/*4098*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVN_I_S:f32 FGR32:f32:$T, CPURegs:i32:$lhs, FGR32:f32:$F)
/*4108*/          /*Scope*/ 22, /*->4131*/
/*4109*/            OPC_CheckCondCode, ISD::SETEQ,
/*4111*/            OPC_MoveParent,
/*4112*/            OPC_CheckType, MVT::i32,
/*4114*/            OPC_MoveParent,
/*4115*/            OPC_RecordChild1, // #1 = $T
/*4116*/            OPC_RecordChild2, // #2 = $F
/*4117*/            OPC_CheckType, MVT::f64,
/*4119*/            OPC_CheckPatternPredicate, 10, // (!Subtarget.isFP64bit())
/*4121*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, CPURegs:i32:$lhs, AFGR64:f64:$F)
/*4131*/          /*Scope*/ 22, /*->4154*/
/*4132*/            OPC_CheckCondCode, ISD::SETNE,
/*4134*/            OPC_MoveParent,
/*4135*/            OPC_CheckType, MVT::i32,
/*4137*/            OPC_MoveParent,
/*4138*/            OPC_RecordChild1, // #1 = $T
/*4139*/            OPC_RecordChild2, // #2 = $F
/*4140*/            OPC_CheckType, MVT::f64,
/*4142*/            OPC_CheckPatternPredicate, 10, // (!Subtarget.isFP64bit())
/*4144*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, CPURegs:i32:$lhs, AFGR64:f64:$F)
/*4154*/          /*Scope*/ 22, /*->4177*/
/*4155*/            OPC_CheckCondCode, ISD::SETEQ,
/*4157*/            OPC_MoveParent,
/*4158*/            OPC_CheckType, MVT::i32,
/*4160*/            OPC_MoveParent,
/*4161*/            OPC_RecordChild1, // #1 = $T
/*4162*/            OPC_RecordChild2, // #2 = $F
/*4163*/            OPC_CheckType, MVT::f64,
/*4165*/            OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*4167*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, CPURegs:i32:$lhs, FGR64:f64:$F)
/*4177*/          /*Scope*/ 22, /*->4200*/
/*4178*/            OPC_CheckCondCode, ISD::SETNE,
/*4180*/            OPC_MoveParent,
/*4181*/            OPC_CheckType, MVT::i32,
/*4183*/            OPC_MoveParent,
/*4184*/            OPC_RecordChild1, // #1 = $T
/*4185*/            OPC_RecordChild2, // #2 = $F
/*4186*/            OPC_CheckType, MVT::f64,
/*4188*/            OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*4190*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, CPURegs:i32:$lhs, FGR64:f64:$F)
/*4200*/          0, /*End of Scope*/
/*4201*/        /*Scope*/ 76|128,4/*588*/, /*->4791*/
/*4203*/          OPC_RecordChild1, // #1 = $rhs
/*4204*/          OPC_Scope, 84|128,1/*212*/, /*->4419*/ // 2 children in Scope
/*4207*/            OPC_MoveChild, 1,
/*4209*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4212*/            OPC_CheckPredicate, 42, // Predicate_immSExt16
/*4214*/            OPC_MoveParent,
/*4215*/            OPC_MoveChild, 2,
/*4217*/            OPC_Scope, 31, /*->4250*/ // 6 children in Scope
/*4219*/              OPC_CheckCondCode, ISD::SETGE,
/*4221*/              OPC_MoveParent,
/*4222*/              OPC_CheckType, MVT::i32,
/*4224*/              OPC_MoveParent,
/*4225*/              OPC_RecordChild1, // #2 = $T
/*4226*/              OPC_RecordChild2, // #3 = $F
/*4227*/              OPC_CheckType, MVT::f32,
/*4229*/              OPC_EmitConvertToTarget, 1,
/*4231*/              OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*4240*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), FGR32:f32:$F)
/*4250*/            /*Scope*/ 31, /*->4282*/
/*4251*/              OPC_CheckCondCode, ISD::SETUGE,
/*4253*/              OPC_MoveParent,
/*4254*/              OPC_CheckType, MVT::i32,
/*4256*/              OPC_MoveParent,
/*4257*/              OPC_RecordChild1, // #2 = $T
/*4258*/              OPC_RecordChild2, // #3 = $F
/*4259*/              OPC_CheckType, MVT::f32,
/*4261*/              OPC_EmitConvertToTarget, 1,
/*4263*/              OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*4272*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), FGR32:f32:$F)
/*4282*/            /*Scope*/ 33, /*->4316*/
/*4283*/              OPC_CheckCondCode, ISD::SETGE,
/*4285*/              OPC_MoveParent,
/*4286*/              OPC_CheckType, MVT::i32,
/*4288*/              OPC_MoveParent,
/*4289*/              OPC_RecordChild1, // #2 = $T
/*4290*/              OPC_RecordChild2, // #3 = $F
/*4291*/              OPC_CheckType, MVT::f64,
/*4293*/              OPC_CheckPatternPredicate, 10, // (!Subtarget.isFP64bit())
/*4295*/              OPC_EmitConvertToTarget, 1,
/*4297*/              OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*4306*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), AFGR64:f64:$F)
/*4316*/            /*Scope*/ 33, /*->4350*/
/*4317*/              OPC_CheckCondCode, ISD::SETUGE,
/*4319*/              OPC_MoveParent,
/*4320*/              OPC_CheckType, MVT::i32,
/*4322*/              OPC_MoveParent,
/*4323*/              OPC_RecordChild1, // #2 = $T
/*4324*/              OPC_RecordChild2, // #3 = $F
/*4325*/              OPC_CheckType, MVT::f64,
/*4327*/              OPC_CheckPatternPredicate, 10, // (!Subtarget.isFP64bit())
/*4329*/              OPC_EmitConvertToTarget, 1,
/*4331*/              OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*4340*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), AFGR64:f64:$F)
/*4350*/            /*Scope*/ 33, /*->4384*/
/*4351*/              OPC_CheckCondCode, ISD::SETGE,
/*4353*/              OPC_MoveParent,
/*4354*/              OPC_CheckType, MVT::i32,
/*4356*/              OPC_MoveParent,
/*4357*/              OPC_RecordChild1, // #2 = $T
/*4358*/              OPC_RecordChild2, // #3 = $F
/*4359*/              OPC_CheckType, MVT::f64,
/*4361*/              OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*4363*/              OPC_EmitConvertToTarget, 1,
/*4365*/              OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*4374*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), FGR64:f64:$F)
/*4384*/            /*Scope*/ 33, /*->4418*/
/*4385*/              OPC_CheckCondCode, ISD::SETUGE,
/*4387*/              OPC_MoveParent,
/*4388*/              OPC_CheckType, MVT::i32,
/*4390*/              OPC_MoveParent,
/*4391*/              OPC_RecordChild1, // #2 = $T
/*4392*/              OPC_RecordChild2, // #3 = $F
/*4393*/              OPC_CheckType, MVT::f64,
/*4395*/              OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*4397*/              OPC_EmitConvertToTarget, 1,
/*4399*/              OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*4408*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), FGR64:f64:$F)
/*4418*/            0, /*End of Scope*/
/*4419*/          /*Scope*/ 113|128,2/*369*/, /*->4790*/
/*4421*/            OPC_MoveChild, 2,
/*4423*/            OPC_Scope, 29, /*->4454*/ // 11 children in Scope
/*4425*/              OPC_CheckCondCode, ISD::SETGE,
/*4427*/              OPC_MoveParent,
/*4428*/              OPC_CheckType, MVT::i32,
/*4430*/              OPC_MoveParent,
/*4431*/              OPC_RecordChild1, // #2 = $T
/*4432*/              OPC_RecordChild2, // #3 = $F
/*4433*/              OPC_CheckType, MVT::i32,
/*4435*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*4444*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
/*4454*/            /*Scope*/ 29, /*->4484*/
/*4455*/              OPC_CheckCondCode, ISD::SETUGE,
/*4457*/              OPC_MoveParent,
/*4458*/              OPC_CheckType, MVT::i32,
/*4460*/              OPC_MoveParent,
/*4461*/              OPC_RecordChild1, // #2 = $T
/*4462*/              OPC_RecordChild2, // #3 = $F
/*4463*/              OPC_CheckType, MVT::i32,
/*4465*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*4474*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
/*4484*/            /*Scope*/ 29, /*->4514*/
/*4485*/              OPC_CheckCondCode, ISD::SETLE,
/*4487*/              OPC_MoveParent,
/*4488*/              OPC_CheckType, MVT::i32,
/*4490*/              OPC_MoveParent,
/*4491*/              OPC_RecordChild1, // #2 = $T
/*4492*/              OPC_RecordChild2, // #3 = $F
/*4493*/              OPC_CheckType, MVT::i32,
/*4495*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*4504*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPURegs:i32:$F)
/*4514*/            /*Scope*/ 29, /*->4544*/
/*4515*/              OPC_CheckCondCode, ISD::SETULE,
/*4517*/              OPC_MoveParent,
/*4518*/              OPC_CheckType, MVT::i32,
/*4520*/              OPC_MoveParent,
/*4521*/              OPC_RecordChild1, // #2 = $T
/*4522*/              OPC_RecordChild2, // #3 = $F
/*4523*/              OPC_CheckType, MVT::i32,
/*4525*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*4534*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPURegs:i32:$F)
/*4544*/            /*Scope*/ 29, /*->4574*/
/*4545*/              OPC_CheckCondCode, ISD::SETEQ,
/*4547*/              OPC_MoveParent,
/*4548*/              OPC_CheckType, MVT::i32,
/*4550*/              OPC_MoveParent,
/*4551*/              OPC_RecordChild1, // #2 = $T
/*4552*/              OPC_RecordChild2, // #3 = $F
/*4553*/              OPC_CheckType, MVT::i32,
/*4555*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*4564*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
/*4574*/            /*Scope*/ 31, /*->4606*/
/*4575*/              OPC_CheckCondCode, ISD::SETGE,
/*4577*/              OPC_MoveParent,
/*4578*/              OPC_CheckType, MVT::i32,
/*4580*/              OPC_MoveParent,
/*4581*/              OPC_RecordChild1, // #2 = $T
/*4582*/              OPC_RecordChild2, // #3 = $F
/*4583*/              OPC_CheckType, MVT::i64,
/*4585*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*4587*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*4596*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
/*4606*/            /*Scope*/ 31, /*->4638*/
/*4607*/              OPC_CheckCondCode, ISD::SETUGE,
/*4609*/              OPC_MoveParent,
/*4610*/              OPC_CheckType, MVT::i32,
/*4612*/              OPC_MoveParent,
/*4613*/              OPC_RecordChild1, // #2 = $T
/*4614*/              OPC_RecordChild2, // #3 = $F
/*4615*/              OPC_CheckType, MVT::i64,
/*4617*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*4619*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*4628*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
/*4638*/            /*Scope*/ 31, /*->4670*/
/*4639*/              OPC_CheckCondCode, ISD::SETLE,
/*4641*/              OPC_MoveParent,
/*4642*/              OPC_CheckType, MVT::i32,
/*4644*/              OPC_MoveParent,
/*4645*/              OPC_RecordChild1, // #2 = $T
/*4646*/              OPC_RecordChild2, // #3 = $F
/*4647*/              OPC_CheckType, MVT::i64,
/*4649*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*4651*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*4660*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPU64Regs:i64:$F)
/*4670*/            /*Scope*/ 31, /*->4702*/
/*4671*/              OPC_CheckCondCode, ISD::SETULE,
/*4673*/              OPC_MoveParent,
/*4674*/              OPC_CheckType, MVT::i32,
/*4676*/              OPC_MoveParent,
/*4677*/              OPC_RecordChild1, // #2 = $T
/*4678*/              OPC_RecordChild2, // #3 = $F
/*4679*/              OPC_CheckType, MVT::i64,
/*4681*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*4683*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*4692*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPU64Regs:i64:$F)
/*4702*/            /*Scope*/ 31, /*->4734*/
/*4703*/              OPC_CheckCondCode, ISD::SETEQ,
/*4705*/              OPC_MoveParent,
/*4706*/              OPC_CheckType, MVT::i32,
/*4708*/              OPC_MoveParent,
/*4709*/              OPC_RecordChild1, // #2 = $T
/*4710*/              OPC_RecordChild2, // #3 = $F
/*4711*/              OPC_CheckType, MVT::i64,
/*4713*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*4715*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*4724*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
/*4734*/            /*Scope*/ 54, /*->4789*/
/*4735*/              OPC_CheckCondCode, ISD::SETNE,
/*4737*/              OPC_MoveParent,
/*4738*/              OPC_CheckType, MVT::i32,
/*4740*/              OPC_MoveParent,
/*4741*/              OPC_RecordChild1, // #2 = $T
/*4742*/              OPC_RecordChild2, // #3 = $F
/*4743*/              OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->4765
/*4746*/                OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*4755*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                        // Dst: (MOVN_I_I:i32 CPURegs:i32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->4788
/*4767*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*4769*/                OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*4778*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                        // Dst: (MOVN_I_I64:i64 CPU64Regs:i64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
                      0, // EndSwitchType
/*4789*/            0, /*End of Scope*/
/*4790*/          0, /*End of Scope*/
/*4791*/        0, /*End of Scope*/
/*4792*/      /*Scope*/ 108|128,6/*876*/, /*->5670*/
/*4794*/        OPC_CheckChild0Type, MVT::i64,
/*4796*/        OPC_Scope, 87, /*->4885*/ // 4 children in Scope
/*4798*/          OPC_MoveChild, 1,
/*4800*/          OPC_CheckInteger, 0, 
/*4802*/          OPC_MoveParent,
/*4803*/          OPC_MoveChild, 2,
/*4805*/          OPC_Scope, 38, /*->4845*/ // 2 children in Scope
/*4807*/            OPC_CheckCondCode, ISD::SETEQ,
/*4809*/            OPC_MoveParent,
/*4810*/            OPC_CheckType, MVT::i32,
/*4812*/            OPC_MoveParent,
/*4813*/            OPC_RecordChild1, // #1 = $T
/*4814*/            OPC_RecordChild2, // #2 = $F
/*4815*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->4830
/*4818*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*4820*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVZ_I64_I:i32 CPURegs:i32:$T, CPU64Regs:i64:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->4844
/*4832*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*4834*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVZ_I64_I64:i64 CPU64Regs:i64:$T, CPU64Regs:i64:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*4845*/          /*Scope*/ 38, /*->4884*/
/*4846*/            OPC_CheckCondCode, ISD::SETNE,
/*4848*/            OPC_MoveParent,
/*4849*/            OPC_CheckType, MVT::i32,
/*4851*/            OPC_MoveParent,
/*4852*/            OPC_RecordChild1, // #1 = $T
/*4853*/            OPC_RecordChild2, // #2 = $F
/*4854*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->4869
/*4857*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*4859*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVN_I64_I:i32 CPURegs:i32:$T, CPU64Regs:i64:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->4883
/*4871*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*4873*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVN_I64_I64:i64 CPU64Regs:i64:$T, CPU64Regs:i64:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*4884*/          0, /*End of Scope*/
/*4885*/        /*Scope*/ 21|128,1/*149*/, /*->5036*/
/*4887*/          OPC_RecordChild1, // #1 = $rhs
/*4888*/          OPC_MoveChild, 1,
/*4890*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4893*/          OPC_CheckPredicate, 42, // Predicate_immSExt16
/*4895*/          OPC_MoveParent,
/*4896*/          OPC_MoveChild, 2,
/*4898*/          OPC_Scope, 33, /*->4933*/ // 4 children in Scope
/*4900*/            OPC_CheckCondCode, ISD::SETGE,
/*4902*/            OPC_MoveParent,
/*4903*/            OPC_CheckType, MVT::i32,
/*4905*/            OPC_MoveParent,
/*4906*/            OPC_RecordChild1, // #2 = $T
/*4907*/            OPC_RecordChild2, // #3 = $F
/*4908*/            OPC_CheckType, MVT::i32,
/*4910*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*4912*/            OPC_EmitConvertToTarget, 1,
/*4914*/            OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*4923*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                    // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                    // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), CPURegs:i32:$F)
/*4933*/          /*Scope*/ 33, /*->4967*/
/*4934*/            OPC_CheckCondCode, ISD::SETUGE,
/*4936*/            OPC_MoveParent,
/*4937*/            OPC_CheckType, MVT::i32,
/*4939*/            OPC_MoveParent,
/*4940*/            OPC_RecordChild1, // #2 = $T
/*4941*/            OPC_RecordChild2, // #3 = $F
/*4942*/            OPC_CheckType, MVT::i32,
/*4944*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*4946*/            OPC_EmitConvertToTarget, 1,
/*4948*/            OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*4957*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                    // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                    // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), CPURegs:i32:$F)
/*4967*/          /*Scope*/ 33, /*->5001*/
/*4968*/            OPC_CheckCondCode, ISD::SETGE,
/*4970*/            OPC_MoveParent,
/*4971*/            OPC_CheckType, MVT::i32,
/*4973*/            OPC_MoveParent,
/*4974*/            OPC_RecordChild1, // #2 = $T
/*4975*/            OPC_RecordChild2, // #3 = $F
/*4976*/            OPC_CheckType, MVT::i64,
/*4978*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*4980*/            OPC_EmitConvertToTarget, 1,
/*4982*/            OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*4991*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                    // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                    // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), CPU64Regs:i64:$F)
/*5001*/          /*Scope*/ 33, /*->5035*/
/*5002*/            OPC_CheckCondCode, ISD::SETUGE,
/*5004*/            OPC_MoveParent,
/*5005*/            OPC_CheckType, MVT::i32,
/*5007*/            OPC_MoveParent,
/*5008*/            OPC_RecordChild1, // #2 = $T
/*5009*/            OPC_RecordChild2, // #3 = $F
/*5010*/            OPC_CheckType, MVT::i64,
/*5012*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*5014*/            OPC_EmitConvertToTarget, 1,
/*5016*/            OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*5025*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                    // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                    // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), CPU64Regs:i64:$F)
/*5035*/          0, /*End of Scope*/
/*5036*/        /*Scope*/ 101, /*->5138*/
/*5037*/          OPC_MoveChild, 1,
/*5039*/          OPC_CheckInteger, 0, 
/*5041*/          OPC_MoveParent,
/*5042*/          OPC_MoveChild, 2,
/*5044*/          OPC_Scope, 22, /*->5068*/ // 4 children in Scope
/*5046*/            OPC_CheckCondCode, ISD::SETEQ,
/*5048*/            OPC_MoveParent,
/*5049*/            OPC_CheckType, MVT::i32,
/*5051*/            OPC_MoveParent,
/*5052*/            OPC_RecordChild1, // #1 = $T
/*5053*/            OPC_RecordChild2, // #2 = $F
/*5054*/            OPC_CheckType, MVT::f32,
/*5056*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*5058*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVZ_I64_S:f32 FGR32:f32:$T, CPU64Regs:i64:$lhs, FGR32:f32:$F)
/*5068*/          /*Scope*/ 22, /*->5091*/
/*5069*/            OPC_CheckCondCode, ISD::SETNE,
/*5071*/            OPC_MoveParent,
/*5072*/            OPC_CheckType, MVT::i32,
/*5074*/            OPC_MoveParent,
/*5075*/            OPC_RecordChild1, // #1 = $T
/*5076*/            OPC_RecordChild2, // #2 = $F
/*5077*/            OPC_CheckType, MVT::f32,
/*5079*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*5081*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, CPU64Regs:i64:$lhs, FGR32:f32:$F)
/*5091*/          /*Scope*/ 22, /*->5114*/
/*5092*/            OPC_CheckCondCode, ISD::SETEQ,
/*5094*/            OPC_MoveParent,
/*5095*/            OPC_CheckType, MVT::i32,
/*5097*/            OPC_MoveParent,
/*5098*/            OPC_RecordChild1, // #1 = $T
/*5099*/            OPC_RecordChild2, // #2 = $F
/*5100*/            OPC_CheckType, MVT::f64,
/*5102*/            OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*5104*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I64_D64:f64 FGR64:f64:$T, CPU64Regs:i64:$lhs, FGR64:f64:$F)
/*5114*/          /*Scope*/ 22, /*->5137*/
/*5115*/            OPC_CheckCondCode, ISD::SETNE,
/*5117*/            OPC_MoveParent,
/*5118*/            OPC_CheckType, MVT::i32,
/*5120*/            OPC_MoveParent,
/*5121*/            OPC_RecordChild1, // #1 = $T
/*5122*/            OPC_RecordChild2, // #2 = $F
/*5123*/            OPC_CheckType, MVT::f64,
/*5125*/            OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*5127*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, CPU64Regs:i64:$lhs, FGR64:f64:$F)
/*5137*/          0, /*End of Scope*/
/*5138*/        /*Scope*/ 17|128,4/*529*/, /*->5669*/
/*5140*/          OPC_RecordChild1, // #1 = $rhs
/*5141*/          OPC_Scope, 20|128,1/*148*/, /*->5292*/ // 2 children in Scope
/*5144*/            OPC_MoveChild, 1,
/*5146*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5149*/            OPC_CheckPredicate, 42, // Predicate_immSExt16
/*5151*/            OPC_MoveParent,
/*5152*/            OPC_MoveChild, 2,
/*5154*/            OPC_Scope, 33, /*->5189*/ // 4 children in Scope
/*5156*/              OPC_CheckCondCode, ISD::SETGE,
/*5158*/              OPC_MoveParent,
/*5159*/              OPC_CheckType, MVT::i32,
/*5161*/              OPC_MoveParent,
/*5162*/              OPC_RecordChild1, // #2 = $T
/*5163*/              OPC_RecordChild2, // #3 = $F
/*5164*/              OPC_CheckType, MVT::f32,
/*5166*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*5168*/              OPC_EmitConvertToTarget, 1,
/*5170*/              OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*5179*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), FGR32:f32:$F)
/*5189*/            /*Scope*/ 33, /*->5223*/
/*5190*/              OPC_CheckCondCode, ISD::SETUGE,
/*5192*/              OPC_MoveParent,
/*5193*/              OPC_CheckType, MVT::i32,
/*5195*/              OPC_MoveParent,
/*5196*/              OPC_RecordChild1, // #2 = $T
/*5197*/              OPC_RecordChild2, // #3 = $F
/*5198*/              OPC_CheckType, MVT::f32,
/*5200*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*5202*/              OPC_EmitConvertToTarget, 1,
/*5204*/              OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*5213*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), FGR32:f32:$F)
/*5223*/            /*Scope*/ 33, /*->5257*/
/*5224*/              OPC_CheckCondCode, ISD::SETGE,
/*5226*/              OPC_MoveParent,
/*5227*/              OPC_CheckType, MVT::i32,
/*5229*/              OPC_MoveParent,
/*5230*/              OPC_RecordChild1, // #2 = $T
/*5231*/              OPC_RecordChild2, // #3 = $F
/*5232*/              OPC_CheckType, MVT::f64,
/*5234*/              OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*5236*/              OPC_EmitConvertToTarget, 1,
/*5238*/              OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*5247*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), FGR64:f64:$F)
/*5257*/            /*Scope*/ 33, /*->5291*/
/*5258*/              OPC_CheckCondCode, ISD::SETUGE,
/*5260*/              OPC_MoveParent,
/*5261*/              OPC_CheckType, MVT::i32,
/*5263*/              OPC_MoveParent,
/*5264*/              OPC_RecordChild1, // #2 = $T
/*5265*/              OPC_RecordChild2, // #3 = $F
/*5266*/              OPC_CheckType, MVT::f64,
/*5268*/              OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*5270*/              OPC_EmitConvertToTarget, 1,
/*5272*/              OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*5281*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), FGR64:f64:$F)
/*5291*/            0, /*End of Scope*/
/*5292*/          /*Scope*/ 118|128,2/*374*/, /*->5668*/
/*5294*/            OPC_MoveChild, 2,
/*5296*/            OPC_Scope, 31, /*->5329*/ // 10 children in Scope
/*5298*/              OPC_CheckCondCode, ISD::SETGE,
/*5300*/              OPC_MoveParent,
/*5301*/              OPC_CheckType, MVT::i32,
/*5303*/              OPC_MoveParent,
/*5304*/              OPC_RecordChild1, // #2 = $T
/*5305*/              OPC_RecordChild2, // #3 = $F
/*5306*/              OPC_CheckType, MVT::i32,
/*5308*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*5310*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*5319*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
/*5329*/            /*Scope*/ 31, /*->5361*/
/*5330*/              OPC_CheckCondCode, ISD::SETUGE,
/*5332*/              OPC_MoveParent,
/*5333*/              OPC_CheckType, MVT::i32,
/*5335*/              OPC_MoveParent,
/*5336*/              OPC_RecordChild1, // #2 = $T
/*5337*/              OPC_RecordChild2, // #3 = $F
/*5338*/              OPC_CheckType, MVT::i32,
/*5340*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*5342*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*5351*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
/*5361*/            /*Scope*/ 31, /*->5393*/
/*5362*/              OPC_CheckCondCode, ISD::SETLE,
/*5364*/              OPC_MoveParent,
/*5365*/              OPC_CheckType, MVT::i32,
/*5367*/              OPC_MoveParent,
/*5368*/              OPC_RecordChild1, // #2 = $T
/*5369*/              OPC_RecordChild2, // #3 = $F
/*5370*/              OPC_CheckType, MVT::i32,
/*5372*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*5374*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*5383*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPURegs:i32:$F)
/*5393*/            /*Scope*/ 31, /*->5425*/
/*5394*/              OPC_CheckCondCode, ISD::SETULE,
/*5396*/              OPC_MoveParent,
/*5397*/              OPC_CheckType, MVT::i32,
/*5399*/              OPC_MoveParent,
/*5400*/              OPC_RecordChild1, // #2 = $T
/*5401*/              OPC_RecordChild2, // #3 = $F
/*5402*/              OPC_CheckType, MVT::i32,
/*5404*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*5406*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*5415*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPURegs:i32:$F)
/*5425*/            /*Scope*/ 31, /*->5457*/
/*5426*/              OPC_CheckCondCode, ISD::SETGE,
/*5428*/              OPC_MoveParent,
/*5429*/              OPC_CheckType, MVT::i32,
/*5431*/              OPC_MoveParent,
/*5432*/              OPC_RecordChild1, // #2 = $T
/*5433*/              OPC_RecordChild2, // #3 = $F
/*5434*/              OPC_CheckType, MVT::i64,
/*5436*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*5438*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*5447*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
/*5457*/            /*Scope*/ 31, /*->5489*/
/*5458*/              OPC_CheckCondCode, ISD::SETUGE,
/*5460*/              OPC_MoveParent,
/*5461*/              OPC_CheckType, MVT::i32,
/*5463*/              OPC_MoveParent,
/*5464*/              OPC_RecordChild1, // #2 = $T
/*5465*/              OPC_RecordChild2, // #3 = $F
/*5466*/              OPC_CheckType, MVT::i64,
/*5468*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*5470*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*5479*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
/*5489*/            /*Scope*/ 31, /*->5521*/
/*5490*/              OPC_CheckCondCode, ISD::SETLE,
/*5492*/              OPC_MoveParent,
/*5493*/              OPC_CheckType, MVT::i32,
/*5495*/              OPC_MoveParent,
/*5496*/              OPC_RecordChild1, // #2 = $T
/*5497*/              OPC_RecordChild2, // #3 = $F
/*5498*/              OPC_CheckType, MVT::i64,
/*5500*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*5502*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*5511*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPU64Regs:i64:$F)
/*5521*/            /*Scope*/ 31, /*->5553*/
/*5522*/              OPC_CheckCondCode, ISD::SETULE,
/*5524*/              OPC_MoveParent,
/*5525*/              OPC_CheckType, MVT::i32,
/*5527*/              OPC_MoveParent,
/*5528*/              OPC_RecordChild1, // #2 = $T
/*5529*/              OPC_RecordChild2, // #3 = $F
/*5530*/              OPC_CheckType, MVT::i64,
/*5532*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*5534*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*5543*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPU64Regs:i64:$F)
/*5553*/            /*Scope*/ 56, /*->5610*/
/*5554*/              OPC_CheckCondCode, ISD::SETEQ,
/*5556*/              OPC_MoveParent,
/*5557*/              OPC_CheckType, MVT::i32,
/*5559*/              OPC_MoveParent,
/*5560*/              OPC_RecordChild1, // #2 = $T
/*5561*/              OPC_RecordChild2, // #3 = $F
/*5562*/              OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->5586
/*5565*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*5567*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4 
/*5576*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                        // Dst: (MOVZ_I64_I:i32 CPURegs:i32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->5609
/*5588*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*5590*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4 
/*5599*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                        // Dst: (MOVZ_I64_I64:i64 CPU64Regs:i64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
                      0, // EndSwitchType
/*5610*/            /*Scope*/ 56, /*->5667*/
/*5611*/              OPC_CheckCondCode, ISD::SETNE,
/*5613*/              OPC_MoveParent,
/*5614*/              OPC_CheckType, MVT::i32,
/*5616*/              OPC_MoveParent,
/*5617*/              OPC_RecordChild1, // #2 = $T
/*5618*/              OPC_RecordChild2, // #3 = $F
/*5619*/              OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->5643
/*5622*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*5624*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4 
/*5633*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                        // Dst: (MOVN_I64_I:i32 CPURegs:i32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->5666
/*5645*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*5647*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4 
/*5656*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                        // Dst: (MOVN_I64_I64:i64 CPU64Regs:i64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
                      0, // EndSwitchType
/*5667*/            0, /*End of Scope*/
/*5668*/          0, /*End of Scope*/
/*5669*/        0, /*End of Scope*/
/*5670*/      0, /*End of Scope*/
/*5671*/    /*Scope*/ 71, /*->5743*/
/*5672*/      OPC_RecordChild0, // #0 = $cond
/*5673*/      OPC_Scope, 32, /*->5707*/ // 2 children in Scope
/*5675*/        OPC_CheckChild0Type, MVT::i32,
/*5677*/        OPC_RecordChild1, // #1 = $T
/*5678*/        OPC_RecordChild2, // #2 = $F
/*5679*/        OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->5692
/*5682*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i32 CPURegs:i32:$cond, CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 3
                  // Dst: (MOVN_I_I:i32 CPURegs:i32:$T, CPURegs:i32:$cond, CPURegs:i32:$F)
                /*SwitchType*/ 12,  MVT::i64,// ->5706
/*5694*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*5696*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i64 CPURegs:i32:$cond, CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 3
                  // Dst: (MOVN_I_I64:i64 CPU64Regs:i64:$T, CPURegs:i32:$cond, CPU64Regs:i64:$F)
                0, // EndSwitchType
/*5707*/      /*Scope*/ 34, /*->5742*/
/*5708*/        OPC_CheckChild0Type, MVT::i64,
/*5710*/        OPC_RecordChild1, // #1 = $T
/*5711*/        OPC_RecordChild2, // #2 = $F
/*5712*/        OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->5727
/*5715*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*5717*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i32 CPU64Regs:i64:$cond, CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 3
                  // Dst: (MOVN_I64_I:i32 CPURegs:i32:$T, CPU64Regs:i64:$cond, CPURegs:i32:$F)
                /*SwitchType*/ 12,  MVT::i64,// ->5741
/*5729*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*5731*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i64 CPU64Regs:i64:$cond, CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 3
                  // Dst: (MOVN_I64_I64:i64 CPU64Regs:i64:$T, CPU64Regs:i64:$cond, CPU64Regs:i64:$F)
                0, // EndSwitchType
/*5742*/      0, /*End of Scope*/
/*5743*/    /*Scope*/ 78|128,7/*974*/, /*->6719*/
/*5745*/      OPC_MoveChild, 0,
/*5747*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*5750*/      OPC_RecordChild0, // #0 = $lhs
/*5751*/      OPC_Scope, 59|128,4/*571*/, /*->6325*/ // 2 children in Scope
/*5754*/        OPC_CheckChild0Type, MVT::i32,
/*5756*/        OPC_RecordChild1, // #1 = $rhs
/*5757*/        OPC_MoveChild, 2,
/*5759*/        OPC_Scope, 29, /*->5790*/ // 18 children in Scope
/*5761*/          OPC_CheckCondCode, ISD::SETGE,
/*5763*/          OPC_MoveParent,
/*5764*/          OPC_CheckType, MVT::i32,
/*5766*/          OPC_MoveParent,
/*5767*/          OPC_RecordChild1, // #2 = $T
/*5768*/          OPC_RecordChild2, // #3 = $F
/*5769*/          OPC_CheckType, MVT::f32,
/*5771*/          OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*5780*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*5790*/        /*Scope*/ 29, /*->5820*/
/*5791*/          OPC_CheckCondCode, ISD::SETUGE,
/*5793*/          OPC_MoveParent,
/*5794*/          OPC_CheckType, MVT::i32,
/*5796*/          OPC_MoveParent,
/*5797*/          OPC_RecordChild1, // #2 = $T
/*5798*/          OPC_RecordChild2, // #3 = $F
/*5799*/          OPC_CheckType, MVT::f32,
/*5801*/          OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*5810*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*5820*/        /*Scope*/ 29, /*->5850*/
/*5821*/          OPC_CheckCondCode, ISD::SETLE,
/*5823*/          OPC_MoveParent,
/*5824*/          OPC_CheckType, MVT::i32,
/*5826*/          OPC_MoveParent,
/*5827*/          OPC_RecordChild1, // #2 = $T
/*5828*/          OPC_RecordChild2, // #3 = $F
/*5829*/          OPC_CheckType, MVT::f32,
/*5831*/          OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*5840*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR32:f32:$F)
/*5850*/        /*Scope*/ 29, /*->5880*/
/*5851*/          OPC_CheckCondCode, ISD::SETULE,
/*5853*/          OPC_MoveParent,
/*5854*/          OPC_CheckType, MVT::i32,
/*5856*/          OPC_MoveParent,
/*5857*/          OPC_RecordChild1, // #2 = $T
/*5858*/          OPC_RecordChild2, // #3 = $F
/*5859*/          OPC_CheckType, MVT::f32,
/*5861*/          OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*5870*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR32:f32:$F)
/*5880*/        /*Scope*/ 29, /*->5910*/
/*5881*/          OPC_CheckCondCode, ISD::SETEQ,
/*5883*/          OPC_MoveParent,
/*5884*/          OPC_CheckType, MVT::i32,
/*5886*/          OPC_MoveParent,
/*5887*/          OPC_RecordChild1, // #2 = $T
/*5888*/          OPC_RecordChild2, // #3 = $F
/*5889*/          OPC_CheckType, MVT::f32,
/*5891*/          OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*5900*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*5910*/        /*Scope*/ 29, /*->5940*/
/*5911*/          OPC_CheckCondCode, ISD::SETNE,
/*5913*/          OPC_MoveParent,
/*5914*/          OPC_CheckType, MVT::i32,
/*5916*/          OPC_MoveParent,
/*5917*/          OPC_RecordChild1, // #2 = $T
/*5918*/          OPC_RecordChild2, // #3 = $F
/*5919*/          OPC_CheckType, MVT::f32,
/*5921*/          OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*5930*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVN_I_S:f32 FGR32:f32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*5940*/        /*Scope*/ 31, /*->5972*/
/*5941*/          OPC_CheckCondCode, ISD::SETGE,
/*5943*/          OPC_MoveParent,
/*5944*/          OPC_CheckType, MVT::i32,
/*5946*/          OPC_MoveParent,
/*5947*/          OPC_RecordChild1, // #2 = $T
/*5948*/          OPC_RecordChild2, // #3 = $F
/*5949*/          OPC_CheckType, MVT::f64,
/*5951*/          OPC_CheckPatternPredicate, 10, // (!Subtarget.isFP64bit())
/*5953*/          OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*5962*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*5972*/        /*Scope*/ 31, /*->6004*/
/*5973*/          OPC_CheckCondCode, ISD::SETUGE,
/*5975*/          OPC_MoveParent,
/*5976*/          OPC_CheckType, MVT::i32,
/*5978*/          OPC_MoveParent,
/*5979*/          OPC_RecordChild1, // #2 = $T
/*5980*/          OPC_RecordChild2, // #3 = $F
/*5981*/          OPC_CheckType, MVT::f64,
/*5983*/          OPC_CheckPatternPredicate, 10, // (!Subtarget.isFP64bit())
/*5985*/          OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*5994*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*6004*/        /*Scope*/ 31, /*->6036*/
/*6005*/          OPC_CheckCondCode, ISD::SETLE,
/*6007*/          OPC_MoveParent,
/*6008*/          OPC_CheckType, MVT::i32,
/*6010*/          OPC_MoveParent,
/*6011*/          OPC_RecordChild1, // #2 = $T
/*6012*/          OPC_RecordChild2, // #3 = $F
/*6013*/          OPC_CheckType, MVT::f64,
/*6015*/          OPC_CheckPatternPredicate, 10, // (!Subtarget.isFP64bit())
/*6017*/          OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*6026*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), AFGR64:f64:$F)
/*6036*/        /*Scope*/ 31, /*->6068*/
/*6037*/          OPC_CheckCondCode, ISD::SETULE,
/*6039*/          OPC_MoveParent,
/*6040*/          OPC_CheckType, MVT::i32,
/*6042*/          OPC_MoveParent,
/*6043*/          OPC_RecordChild1, // #2 = $T
/*6044*/          OPC_RecordChild2, // #3 = $F
/*6045*/          OPC_CheckType, MVT::f64,
/*6047*/          OPC_CheckPatternPredicate, 10, // (!Subtarget.isFP64bit())
/*6049*/          OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*6058*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), AFGR64:f64:$F)
/*6068*/        /*Scope*/ 31, /*->6100*/
/*6069*/          OPC_CheckCondCode, ISD::SETEQ,
/*6071*/          OPC_MoveParent,
/*6072*/          OPC_CheckType, MVT::i32,
/*6074*/          OPC_MoveParent,
/*6075*/          OPC_RecordChild1, // #2 = $T
/*6076*/          OPC_RecordChild2, // #3 = $F
/*6077*/          OPC_CheckType, MVT::f64,
/*6079*/          OPC_CheckPatternPredicate, 10, // (!Subtarget.isFP64bit())
/*6081*/          OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*6090*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*6100*/        /*Scope*/ 31, /*->6132*/
/*6101*/          OPC_CheckCondCode, ISD::SETNE,
/*6103*/          OPC_MoveParent,
/*6104*/          OPC_CheckType, MVT::i32,
/*6106*/          OPC_MoveParent,
/*6107*/          OPC_RecordChild1, // #2 = $T
/*6108*/          OPC_RecordChild2, // #3 = $F
/*6109*/          OPC_CheckType, MVT::f64,
/*6111*/          OPC_CheckPatternPredicate, 10, // (!Subtarget.isFP64bit())
/*6113*/          OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*6122*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*6132*/        /*Scope*/ 31, /*->6164*/
/*6133*/          OPC_CheckCondCode, ISD::SETGE,
/*6135*/          OPC_MoveParent,
/*6136*/          OPC_CheckType, MVT::i32,
/*6138*/          OPC_MoveParent,
/*6139*/          OPC_RecordChild1, // #2 = $T
/*6140*/          OPC_RecordChild2, // #3 = $F
/*6141*/          OPC_CheckType, MVT::f64,
/*6143*/          OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*6145*/          OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*6154*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*6164*/        /*Scope*/ 31, /*->6196*/
/*6165*/          OPC_CheckCondCode, ISD::SETUGE,
/*6167*/          OPC_MoveParent,
/*6168*/          OPC_CheckType, MVT::i32,
/*6170*/          OPC_MoveParent,
/*6171*/          OPC_RecordChild1, // #2 = $T
/*6172*/          OPC_RecordChild2, // #3 = $F
/*6173*/          OPC_CheckType, MVT::f64,
/*6175*/          OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*6177*/          OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*6186*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*6196*/        /*Scope*/ 31, /*->6228*/
/*6197*/          OPC_CheckCondCode, ISD::SETLE,
/*6199*/          OPC_MoveParent,
/*6200*/          OPC_CheckType, MVT::i32,
/*6202*/          OPC_MoveParent,
/*6203*/          OPC_RecordChild1, // #2 = $T
/*6204*/          OPC_RecordChild2, // #3 = $F
/*6205*/          OPC_CheckType, MVT::f64,
/*6207*/          OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*6209*/          OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*6218*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR64:f64:$F)
/*6228*/        /*Scope*/ 31, /*->6260*/
/*6229*/          OPC_CheckCondCode, ISD::SETULE,
/*6231*/          OPC_MoveParent,
/*6232*/          OPC_CheckType, MVT::i32,
/*6234*/          OPC_MoveParent,
/*6235*/          OPC_RecordChild1, // #2 = $T
/*6236*/          OPC_RecordChild2, // #3 = $F
/*6237*/          OPC_CheckType, MVT::f64,
/*6239*/          OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*6241*/          OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*6250*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR64:f64:$F)
/*6260*/        /*Scope*/ 31, /*->6292*/
/*6261*/          OPC_CheckCondCode, ISD::SETEQ,
/*6263*/          OPC_MoveParent,
/*6264*/          OPC_CheckType, MVT::i32,
/*6266*/          OPC_MoveParent,
/*6267*/          OPC_RecordChild1, // #2 = $T
/*6268*/          OPC_RecordChild2, // #3 = $F
/*6269*/          OPC_CheckType, MVT::f64,
/*6271*/          OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*6273*/          OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*6282*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*6292*/        /*Scope*/ 31, /*->6324*/
/*6293*/          OPC_CheckCondCode, ISD::SETNE,
/*6295*/          OPC_MoveParent,
/*6296*/          OPC_CheckType, MVT::i32,
/*6298*/          OPC_MoveParent,
/*6299*/          OPC_RecordChild1, // #2 = $T
/*6300*/          OPC_RecordChild2, // #3 = $F
/*6301*/          OPC_CheckType, MVT::f64,
/*6303*/          OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*6305*/          OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*6314*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*6324*/        0, /*End of Scope*/
/*6325*/      /*Scope*/ 7|128,3/*391*/, /*->6718*/
/*6327*/        OPC_CheckChild0Type, MVT::i64,
/*6329*/        OPC_RecordChild1, // #1 = $rhs
/*6330*/        OPC_MoveChild, 2,
/*6332*/        OPC_Scope, 31, /*->6365*/ // 12 children in Scope
/*6334*/          OPC_CheckCondCode, ISD::SETGE,
/*6336*/          OPC_MoveParent,
/*6337*/          OPC_CheckType, MVT::i32,
/*6339*/          OPC_MoveParent,
/*6340*/          OPC_RecordChild1, // #2 = $T
/*6341*/          OPC_RecordChild2, // #3 = $F
/*6342*/          OPC_CheckType, MVT::f32,
/*6344*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*6346*/          OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*6355*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*6365*/        /*Scope*/ 31, /*->6397*/
/*6366*/          OPC_CheckCondCode, ISD::SETUGE,
/*6368*/          OPC_MoveParent,
/*6369*/          OPC_CheckType, MVT::i32,
/*6371*/          OPC_MoveParent,
/*6372*/          OPC_RecordChild1, // #2 = $T
/*6373*/          OPC_RecordChild2, // #3 = $F
/*6374*/          OPC_CheckType, MVT::f32,
/*6376*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*6378*/          OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*6387*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*6397*/        /*Scope*/ 31, /*->6429*/
/*6398*/          OPC_CheckCondCode, ISD::SETLE,
/*6400*/          OPC_MoveParent,
/*6401*/          OPC_CheckType, MVT::i32,
/*6403*/          OPC_MoveParent,
/*6404*/          OPC_RecordChild1, // #2 = $T
/*6405*/          OPC_RecordChild2, // #3 = $F
/*6406*/          OPC_CheckType, MVT::f32,
/*6408*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*6410*/          OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*6419*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR32:f32:$F)
/*6429*/        /*Scope*/ 31, /*->6461*/
/*6430*/          OPC_CheckCondCode, ISD::SETULE,
/*6432*/          OPC_MoveParent,
/*6433*/          OPC_CheckType, MVT::i32,
/*6435*/          OPC_MoveParent,
/*6436*/          OPC_RecordChild1, // #2 = $T
/*6437*/          OPC_RecordChild2, // #3 = $F
/*6438*/          OPC_CheckType, MVT::f32,
/*6440*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*6442*/          OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*6451*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR32:f32:$F)
/*6461*/        /*Scope*/ 31, /*->6493*/
/*6462*/          OPC_CheckCondCode, ISD::SETEQ,
/*6464*/          OPC_MoveParent,
/*6465*/          OPC_CheckType, MVT::i32,
/*6467*/          OPC_MoveParent,
/*6468*/          OPC_RecordChild1, // #2 = $T
/*6469*/          OPC_RecordChild2, // #3 = $F
/*6470*/          OPC_CheckType, MVT::f32,
/*6472*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*6474*/          OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4 
/*6483*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVZ_I64_S:f32 FGR32:f32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*6493*/        /*Scope*/ 31, /*->6525*/
/*6494*/          OPC_CheckCondCode, ISD::SETNE,
/*6496*/          OPC_MoveParent,
/*6497*/          OPC_CheckType, MVT::i32,
/*6499*/          OPC_MoveParent,
/*6500*/          OPC_RecordChild1, // #2 = $T
/*6501*/          OPC_RecordChild2, // #3 = $F
/*6502*/          OPC_CheckType, MVT::f32,
/*6504*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*6506*/          OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4 
/*6515*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*6525*/        /*Scope*/ 31, /*->6557*/
/*6526*/          OPC_CheckCondCode, ISD::SETGE,
/*6528*/          OPC_MoveParent,
/*6529*/          OPC_CheckType, MVT::i32,
/*6531*/          OPC_MoveParent,
/*6532*/          OPC_RecordChild1, // #2 = $T
/*6533*/          OPC_RecordChild2, // #3 = $F
/*6534*/          OPC_CheckType, MVT::f64,
/*6536*/          OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*6538*/          OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*6547*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*6557*/        /*Scope*/ 31, /*->6589*/
/*6558*/          OPC_CheckCondCode, ISD::SETUGE,
/*6560*/          OPC_MoveParent,
/*6561*/          OPC_CheckType, MVT::i32,
/*6563*/          OPC_MoveParent,
/*6564*/          OPC_RecordChild1, // #2 = $T
/*6565*/          OPC_RecordChild2, // #3 = $F
/*6566*/          OPC_CheckType, MVT::f64,
/*6568*/          OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*6570*/          OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*6579*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*6589*/        /*Scope*/ 31, /*->6621*/
/*6590*/          OPC_CheckCondCode, ISD::SETLE,
/*6592*/          OPC_MoveParent,
/*6593*/          OPC_CheckType, MVT::i32,
/*6595*/          OPC_MoveParent,
/*6596*/          OPC_RecordChild1, // #2 = $T
/*6597*/          OPC_RecordChild2, // #3 = $F
/*6598*/          OPC_CheckType, MVT::f64,
/*6600*/          OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*6602*/          OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*6611*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR64:f64:$F)
/*6621*/        /*Scope*/ 31, /*->6653*/
/*6622*/          OPC_CheckCondCode, ISD::SETULE,
/*6624*/          OPC_MoveParent,
/*6625*/          OPC_CheckType, MVT::i32,
/*6627*/          OPC_MoveParent,
/*6628*/          OPC_RecordChild1, // #2 = $T
/*6629*/          OPC_RecordChild2, // #3 = $F
/*6630*/          OPC_CheckType, MVT::f64,
/*6632*/          OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*6634*/          OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*6643*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR64:f64:$F)
/*6653*/        /*Scope*/ 31, /*->6685*/
/*6654*/          OPC_CheckCondCode, ISD::SETEQ,
/*6656*/          OPC_MoveParent,
/*6657*/          OPC_CheckType, MVT::i32,
/*6659*/          OPC_MoveParent,
/*6660*/          OPC_RecordChild1, // #2 = $T
/*6661*/          OPC_RecordChild2, // #3 = $F
/*6662*/          OPC_CheckType, MVT::f64,
/*6664*/          OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*6666*/          OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4 
/*6675*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I64_D64:f64 FGR64:f64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*6685*/        /*Scope*/ 31, /*->6717*/
/*6686*/          OPC_CheckCondCode, ISD::SETNE,
/*6688*/          OPC_MoveParent,
/*6689*/          OPC_CheckType, MVT::i32,
/*6691*/          OPC_MoveParent,
/*6692*/          OPC_RecordChild1, // #2 = $T
/*6693*/          OPC_RecordChild2, // #3 = $F
/*6694*/          OPC_CheckType, MVT::f64,
/*6696*/          OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*6698*/          OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4 
/*6707*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*6717*/        0, /*End of Scope*/
/*6718*/      0, /*End of Scope*/
/*6719*/    /*Scope*/ 87, /*->6807*/
/*6720*/      OPC_RecordChild0, // #0 = $cond
/*6721*/      OPC_Scope, 48, /*->6771*/ // 2 children in Scope
/*6723*/        OPC_CheckChild0Type, MVT::i32,
/*6725*/        OPC_RecordChild1, // #1 = $T
/*6726*/        OPC_RecordChild2, // #2 = $F
/*6727*/        OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->6740
/*6730*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f32 CPURegs:i32:$cond, FGR32:f32:$T, FGR32:f32:$F) - Complexity = 3
                  // Dst: (MOVN_I_S:f32 FGR32:f32:$T, CPURegs:i32:$cond, FGR32:f32:$F)
                /*SwitchType*/ 28,  MVT::f64,// ->6770
/*6742*/          OPC_Scope, 12, /*->6756*/ // 2 children in Scope
/*6744*/            OPC_CheckPatternPredicate, 10, // (!Subtarget.isFP64bit())
/*6746*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 CPURegs:i32:$cond, AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 3
                    // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, CPURegs:i32:$cond, AFGR64:f64:$F)
/*6756*/          /*Scope*/ 12, /*->6769*/
/*6757*/            OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*6759*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 CPURegs:i32:$cond, FGR64:f64:$T, FGR64:f64:$F) - Complexity = 3
                    // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, CPURegs:i32:$cond, FGR64:f64:$F)
/*6769*/          0, /*End of Scope*/
                0, // EndSwitchType
/*6771*/      /*Scope*/ 34, /*->6806*/
/*6772*/        OPC_CheckChild0Type, MVT::i64,
/*6774*/        OPC_RecordChild1, // #1 = $T
/*6775*/        OPC_RecordChild2, // #2 = $F
/*6776*/        OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->6791
/*6779*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*6781*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f32 CPU64Regs:i64:$cond, FGR32:f32:$T, FGR32:f32:$F) - Complexity = 3
                  // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, CPU64Regs:i64:$cond, FGR32:f32:$F)
                /*SwitchType*/ 12,  MVT::f64,// ->6805
/*6793*/          OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*6795*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f64 CPU64Regs:i64:$cond, FGR64:f64:$T, FGR64:f64:$F) - Complexity = 3
                  // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, CPU64Regs:i64:$cond, FGR64:f64:$F)
                0, // EndSwitchType
/*6806*/      0, /*End of Scope*/
/*6807*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::CALLSEQ_END),// ->6837
/*6811*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*6812*/    OPC_CaptureGlueInput,
/*6813*/    OPC_RecordChild1, // #1 = $amt1
/*6814*/    OPC_MoveChild, 1,
/*6816*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*6819*/    OPC_MoveParent,
/*6820*/    OPC_RecordChild2, // #2 = $amt2
/*6821*/    OPC_MoveChild, 2,
/*6823*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*6826*/    OPC_MoveParent,
/*6827*/    OPC_EmitMergeInputChains1_0,
/*6828*/    OPC_MorphNodeTo, TARGET_VAL(Mips::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 62,  TARGET_VAL(ISD::FrameIndex),// ->6902
/*6840*/    OPC_RecordNode,   // #0 = $addr
/*6841*/    OPC_SwitchType /*2 cases */, 25,  MVT::i32,// ->6869
/*6844*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddr:$addr #1 #2
/*6847*/      OPC_Scope, 9, /*->6858*/ // 2 children in Scope
/*6849*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LEA_ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: addr:i32:$addr - Complexity = 9
                // Dst: (LEA_ADDiu:i32 addr:i32:$addr)
/*6858*/      /*Scope*/ 9, /*->6868*/
/*6859*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DynAlloc), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: addr:i32:$addr - Complexity = 9
                // Dst: (DynAlloc:i32 addr:i32:$addr)
/*6868*/      0, /*End of Scope*/
            /*SwitchType*/ 30,  MVT::i64,// ->6901
/*6871*/      OPC_Scope, 12, /*->6885*/ // 2 children in Scope
/*6873*/        OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddr:$addr #1 #2
/*6876*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LEA_ADDiu64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: addr:i64:$addr - Complexity = 9
                // Dst: (LEA_ADDiu64:i64 addr:i64:$addr)
/*6885*/      /*Scope*/ 14, /*->6900*/
/*6886*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*6888*/        OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddr:$addr #1 #2
/*6891*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DynAlloc64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: addr:i64:$addr - Complexity = 9
                // Dst: (DynAlloc64:i64 addr:i64:$addr)
/*6900*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 53,  TARGET_VAL(MipsISD::Ext),// ->6958
/*6905*/    OPC_RecordChild0, // #0 = $rs
/*6906*/    OPC_RecordChild1, // #1 = $pos
/*6907*/    OPC_MoveChild, 1,
/*6909*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6912*/    OPC_MoveParent,
/*6913*/    OPC_RecordChild2, // #2 = $sz
/*6914*/    OPC_MoveChild, 2,
/*6916*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6919*/    OPC_MoveParent,
/*6920*/    OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->6939
/*6923*/      OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips32r2())
/*6925*/      OPC_EmitConvertToTarget, 1,
/*6927*/      OPC_EmitConvertToTarget, 2,
/*6929*/      OPC_MorphNodeTo, TARGET_VAL(Mips::EXT), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 3, 4, 
              // Src: (MipsExt:i32 CPURegs:i32:$rs, (imm:i32):$pos, (imm:i32):$sz) - Complexity = 9
              // Dst: (EXT:i32 CPURegs:i32:$rs, (imm:i32):$pos, (imm:i32):$sz)
            /*SwitchType*/ 16,  MVT::i64,// ->6957
/*6941*/      OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips32r2())
/*6943*/      OPC_EmitConvertToTarget, 1,
/*6945*/      OPC_EmitConvertToTarget, 2,
/*6947*/      OPC_MorphNodeTo, TARGET_VAL(Mips::DEXT), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 3, 4, 
              // Src: (MipsExt:i64 CPU64Regs:i64:$rs, (imm:i32):$pos, (imm:i32):$sz) - Complexity = 9
              // Dst: (DEXT:i64 CPU64Regs:i64:$rs, (imm:i32):$pos, (imm:i32):$sz)
            0, // EndSwitchType
          /*SwitchOpcode*/ 56,  TARGET_VAL(MipsISD::Ins),// ->7017
/*6961*/    OPC_RecordChild0, // #0 = $rs
/*6962*/    OPC_RecordChild1, // #1 = $pos
/*6963*/    OPC_MoveChild, 1,
/*6965*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6968*/    OPC_MoveParent,
/*6969*/    OPC_RecordChild2, // #2 = $sz
/*6970*/    OPC_MoveChild, 2,
/*6972*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6975*/    OPC_MoveParent,
/*6976*/    OPC_RecordChild3, // #3 = $src
/*6977*/    OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->6997
/*6980*/      OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips32r2())
/*6982*/      OPC_EmitConvertToTarget, 1,
/*6984*/      OPC_EmitConvertToTarget, 2,
/*6986*/      OPC_MorphNodeTo, TARGET_VAL(Mips::INS), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 4, 5, 3, 
              // Src: (MipsIns:i32 CPURegs:i32:$rs, (imm:i32):$pos, (imm:i32):$sz, CPURegs:i32:$src) - Complexity = 9
              // Dst: (INS:i32 CPURegs:i32:$rs, (imm:i32):$pos, (imm:i32):$sz, CPURegs:i32:$src)
            /*SwitchType*/ 17,  MVT::i64,// ->7016
/*6999*/      OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips32r2())
/*7001*/      OPC_EmitConvertToTarget, 1,
/*7003*/      OPC_EmitConvertToTarget, 2,
/*7005*/      OPC_MorphNodeTo, TARGET_VAL(Mips::DINS), 0,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 4, 5, 3, 
              // Src: (MipsIns:i64 CPU64Regs:i64:$rs, (imm:i32):$pos, (imm:i32):$sz, CPU64Regs:i64:$src) - Complexity = 9
              // Dst: (DINS:i64 CPU64Regs:i64:$rs, (imm:i32):$pos, (imm:i32):$sz, CPU64Regs:i64:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 92|128,3/*476*/,  TARGET_VAL(ISD::ADD),// ->7497
/*7021*/    OPC_Scope, 71|128,1/*199*/, /*->7223*/ // 3 children in Scope
/*7024*/      OPC_RecordChild0, // #0 = $hi
/*7025*/      OPC_MoveChild, 1,
/*7027*/      OPC_SwitchOpcode /*2 cases */, 22|128,1/*150*/,  TARGET_VAL(MipsISD::Lo),// ->7182
/*7032*/        OPC_RecordChild0, // #1 = $lo
/*7033*/        OPC_MoveChild, 0,
/*7035*/        OPC_SwitchOpcode /*5 cases */, 26,  TARGET_VAL(ISD::TargetGlobalAddress),// ->7065
/*7039*/          OPC_MoveParent,
/*7040*/          OPC_MoveParent,
/*7041*/          OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7053
/*7044*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tglobaladdr:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaladdr:i32):$lo)
                  /*SwitchType*/ 9,  MVT::i64,// ->7064
/*7055*/            OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tglobaladdr:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaladdr:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetBlockAddress),// ->7094
/*7068*/          OPC_MoveParent,
/*7069*/          OPC_MoveParent,
/*7070*/          OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7082
/*7073*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tblockaddress:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tblockaddress:i32):$lo)
                  /*SwitchType*/ 9,  MVT::i64,// ->7093
/*7084*/            OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tblockaddress:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tblockaddress:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetJumpTable),// ->7123
/*7097*/          OPC_MoveParent,
/*7098*/          OPC_MoveParent,
/*7099*/          OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7111
/*7102*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tjumptable:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tjumptable:i32):$lo)
                  /*SwitchType*/ 9,  MVT::i64,// ->7122
/*7113*/            OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tjumptable:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tjumptable:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetConstantPool),// ->7152
/*7126*/          OPC_MoveParent,
/*7127*/          OPC_MoveParent,
/*7128*/          OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7140
/*7131*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tconstpool:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tconstpool:i32):$lo)
                  /*SwitchType*/ 9,  MVT::i64,// ->7151
/*7142*/            OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tconstpool:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tconstpool:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->7181
/*7155*/          OPC_MoveParent,
/*7156*/          OPC_MoveParent,
/*7157*/          OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7169
/*7160*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tglobaltlsaddr:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaltlsaddr:i32):$lo)
                  /*SwitchType*/ 9,  MVT::i64,// ->7180
/*7171*/            OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tglobaltlsaddr:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaltlsaddr:i64):$lo)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 37,  TARGET_VAL(MipsISD::GPRel),// ->7222
/*7185*/        OPC_RecordChild0, // #1 = $in
/*7186*/        OPC_MoveChild, 0,
/*7188*/        OPC_SwitchOpcode /*2 cases */, 13,  TARGET_VAL(ISD::TargetGlobalAddress),// ->7205
/*7192*/          OPC_MoveParent,
/*7193*/          OPC_MoveParent,
/*7194*/          OPC_CheckType, MVT::i32,
/*7196*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$gp, (MipsGPRel:i32 (tglobaladdr:i32):$in)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
                /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetConstantPool),// ->7221
/*7208*/          OPC_MoveParent,
/*7209*/          OPC_MoveParent,
/*7210*/          OPC_CheckType, MVT::i32,
/*7212*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$gp, (MipsGPRel:i32 (tconstpool:i32):$in)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*7223*/    /*Scope*/ 77|128,1/*205*/, /*->7430*/
/*7225*/      OPC_MoveChild, 0,
/*7227*/      OPC_SwitchOpcode /*2 cases */, 27|128,1/*155*/,  TARGET_VAL(MipsISD::Lo),// ->7387
/*7232*/        OPC_RecordChild0, // #0 = $lo
/*7233*/        OPC_MoveChild, 0,
/*7235*/        OPC_SwitchOpcode /*5 cases */, 27,  TARGET_VAL(ISD::TargetGlobalAddress),// ->7266
/*7239*/          OPC_MoveParent,
/*7240*/          OPC_MoveParent,
/*7241*/          OPC_RecordChild1, // #1 = $hi
/*7242*/          OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->7254
/*7245*/            OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tglobaladdr:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaladdr:i64):$lo)
                  /*SwitchType*/ 9,  MVT::i32,// ->7265
/*7256*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tglobaladdr:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaladdr:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetBlockAddress),// ->7296
/*7269*/          OPC_MoveParent,
/*7270*/          OPC_MoveParent,
/*7271*/          OPC_RecordChild1, // #1 = $hi
/*7272*/          OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->7284
/*7275*/            OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tblockaddress:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tblockaddress:i64):$lo)
                  /*SwitchType*/ 9,  MVT::i32,// ->7295
/*7286*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tblockaddress:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tblockaddress:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetJumpTable),// ->7326
/*7299*/          OPC_MoveParent,
/*7300*/          OPC_MoveParent,
/*7301*/          OPC_RecordChild1, // #1 = $hi
/*7302*/          OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->7314
/*7305*/            OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tjumptable:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tjumptable:i64):$lo)
                  /*SwitchType*/ 9,  MVT::i32,// ->7325
/*7316*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tjumptable:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tjumptable:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetConstantPool),// ->7356
/*7329*/          OPC_MoveParent,
/*7330*/          OPC_MoveParent,
/*7331*/          OPC_RecordChild1, // #1 = $hi
/*7332*/          OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->7344
/*7335*/            OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tconstpool:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tconstpool:i64):$lo)
                  /*SwitchType*/ 9,  MVT::i32,// ->7355
/*7346*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tconstpool:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tconstpool:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->7386
/*7359*/          OPC_MoveParent,
/*7360*/          OPC_MoveParent,
/*7361*/          OPC_RecordChild1, // #1 = $hi
/*7362*/          OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->7374
/*7365*/            OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tglobaltlsaddr:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaltlsaddr:i64):$lo)
                  /*SwitchType*/ 9,  MVT::i32,// ->7385
/*7376*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tglobaltlsaddr:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaltlsaddr:i32):$lo)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 39,  TARGET_VAL(MipsISD::GPRel),// ->7429
/*7390*/        OPC_RecordChild0, // #0 = $in
/*7391*/        OPC_MoveChild, 0,
/*7393*/        OPC_SwitchOpcode /*2 cases */, 14,  TARGET_VAL(ISD::TargetGlobalAddress),// ->7411
/*7397*/          OPC_MoveParent,
/*7398*/          OPC_MoveParent,
/*7399*/          OPC_RecordChild1, // #1 = $gp
/*7400*/          OPC_CheckType, MVT::i32,
/*7402*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsGPRel:i32 (tglobaladdr:i32):$in), CPURegs:i32:$gp) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
                /*SwitchOpcode*/ 14,  TARGET_VAL(ISD::TargetConstantPool),// ->7428
/*7414*/          OPC_MoveParent,
/*7415*/          OPC_MoveParent,
/*7416*/          OPC_RecordChild1, // #1 = $gp
/*7417*/          OPC_CheckType, MVT::i32,
/*7419*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsGPRel:i32 (tconstpool:i32):$in), CPURegs:i32:$gp) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*7430*/    /*Scope*/ 65, /*->7496*/
/*7431*/      OPC_RecordChild0, // #0 = $rs
/*7432*/      OPC_RecordChild1, // #1 = $imm16
/*7433*/      OPC_Scope, 36, /*->7471*/ // 3 children in Scope
/*7435*/        OPC_MoveChild, 1,
/*7437*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7440*/        OPC_CheckPredicate, 42, // Predicate_immSExt16
/*7442*/        OPC_MoveParent,
/*7443*/        OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->7457
/*7446*/          OPC_EmitConvertToTarget, 1,
/*7448*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16) - Complexity = 7
                  // Dst: (ADDiu:i32 CPURegs:i32:$rs, (imm:i32):$imm16)
                /*SwitchType*/ 11,  MVT::i64,// ->7470
/*7459*/          OPC_EmitConvertToTarget, 1,
/*7461*/          OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i64 CPU64Regs:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16) - Complexity = 7
                  // Dst: (DADDiu:i64 CPU64Regs:i64:$rs, (imm:i64):$imm16)
                0, // EndSwitchType
/*7471*/      /*Scope*/ 11, /*->7483*/
/*7472*/        OPC_CheckType, MVT::i32,
/*7474*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ADDu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
                // Dst: (ADDu:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*7483*/      /*Scope*/ 11, /*->7495*/
/*7484*/        OPC_CheckType, MVT::i64,
/*7486*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DADDu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt) - Complexity = 3
                // Dst: (DADDu:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*7495*/      0, /*End of Scope*/
/*7496*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 43|128,5/*683*/,  TARGET_VAL(ISD::SETCC),// ->8184
/*7501*/    OPC_RecordChild0, // #0 = $rs
/*7502*/    OPC_Scope, 82|128,2/*338*/, /*->7843*/ // 2 children in Scope
/*7505*/      OPC_CheckChild0Type, MVT::i32,
/*7507*/      OPC_RecordChild1, // #1 = $imm16
/*7508*/      OPC_Scope, 104, /*->7614*/ // 2 children in Scope
/*7510*/        OPC_MoveChild, 1,
/*7512*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7515*/        OPC_CheckPredicate, 42, // Predicate_immSExt16
/*7517*/        OPC_MoveParent,
/*7518*/        OPC_MoveChild, 2,
/*7520*/        OPC_Scope, 16, /*->7538*/ // 4 children in Scope
/*7522*/          OPC_CheckCondCode, ISD::SETLT,
/*7524*/          OPC_MoveParent,
/*7525*/          OPC_CheckType, MVT::i32,
/*7527*/          OPC_EmitConvertToTarget, 1,
/*7529*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SLTi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (setcc:i32 CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETLT:Other) - Complexity = 7
                  // Dst: (SLTi:i32 CPURegs:i32:$rs, (imm:i32):$imm16)
/*7538*/        /*Scope*/ 16, /*->7555*/
/*7539*/          OPC_CheckCondCode, ISD::SETULT,
/*7541*/          OPC_MoveParent,
/*7542*/          OPC_CheckType, MVT::i32,
/*7544*/          OPC_EmitConvertToTarget, 1,
/*7546*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (setcc:i32 CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETULT:Other) - Complexity = 7
                  // Dst: (SLTiu:i32 CPURegs:i32:$rs, (imm:i32):$imm16)
/*7555*/        /*Scope*/ 28, /*->7584*/
/*7556*/          OPC_CheckCondCode, ISD::SETGE,
/*7558*/          OPC_MoveParent,
/*7559*/          OPC_CheckType, MVT::i32,
/*7561*/          OPC_EmitConvertToTarget, 1,
/*7563*/          OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3 
/*7572*/          OPC_EmitInteger, MVT::i32, 1, 
/*7575*/          OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                  // Src: (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other) - Complexity = 7
                  // Dst: (XORi:i32 (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*7584*/        /*Scope*/ 28, /*->7613*/
/*7585*/          OPC_CheckCondCode, ISD::SETUGE,
/*7587*/          OPC_MoveParent,
/*7588*/          OPC_CheckType, MVT::i32,
/*7590*/          OPC_EmitConvertToTarget, 1,
/*7592*/          OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3 
/*7601*/          OPC_EmitInteger, MVT::i32, 1, 
/*7604*/          OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                  // Src: (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other) - Complexity = 7
                  // Dst: (XORi:i32 (SLTiu:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*7613*/        0, /*End of Scope*/
/*7614*/      /*Scope*/ 98|128,1/*226*/, /*->7842*/
/*7616*/        OPC_MoveChild, 2,
/*7618*/        OPC_Scope, 14, /*->7634*/ // 10 children in Scope
/*7620*/          OPC_CheckCondCode, ISD::SETLT,
/*7622*/          OPC_MoveParent,
/*7623*/          OPC_CheckType, MVT::i32,
/*7625*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i32 CPURegs:i32:$rs, CPURegs:i32:$rt, SETLT:Other) - Complexity = 3
                  // Dst: (SLT:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*7634*/        /*Scope*/ 14, /*->7649*/
/*7635*/          OPC_CheckCondCode, ISD::SETULT,
/*7637*/          OPC_MoveParent,
/*7638*/          OPC_CheckType, MVT::i32,
/*7640*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i32 CPURegs:i32:$rs, CPURegs:i32:$rt, SETULT:Other) - Complexity = 3
                  // Dst: (SLTu:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*7649*/        /*Scope*/ 14, /*->7664*/
/*7650*/          OPC_CheckCondCode, ISD::SETGT,
/*7652*/          OPC_MoveParent,
/*7653*/          OPC_CheckType, MVT::i32,
/*7655*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGT:Other) - Complexity = 3
                  // Dst: (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs)
/*7664*/        /*Scope*/ 14, /*->7679*/
/*7665*/          OPC_CheckCondCode, ISD::SETUGT,
/*7667*/          OPC_MoveParent,
/*7668*/          OPC_CheckType, MVT::i32,
/*7670*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGT:Other) - Complexity = 3
                  // Dst: (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs)
/*7679*/        /*Scope*/ 26, /*->7706*/
/*7680*/          OPC_CheckCondCode, ISD::SETEQ,
/*7682*/          OPC_MoveParent,
/*7683*/          OPC_CheckType, MVT::i32,
/*7685*/          OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*7694*/          OPC_EmitInteger, MVT::i32, 1, 
/*7697*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other) - Complexity = 3
                  // Dst: (SLTiu:i32 (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*7706*/        /*Scope*/ 26, /*->7733*/
/*7707*/          OPC_CheckCondCode, ISD::SETNE,
/*7709*/          OPC_MoveParent,
/*7710*/          OPC_CheckType, MVT::i32,
/*7712*/          OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*7715*/          OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #3 
/*7724*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other) - Complexity = 3
                  // Dst: (SLTu:i32 ZERO:i32, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs))
/*7733*/        /*Scope*/ 26, /*->7760*/
/*7734*/          OPC_CheckCondCode, ISD::SETLE,
/*7736*/          OPC_MoveParent,
/*7737*/          OPC_CheckType, MVT::i32,
/*7739*/          OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2 
/*7748*/          OPC_EmitInteger, MVT::i32, 1, 
/*7751*/          OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), 1:i32)
/*7760*/        /*Scope*/ 26, /*->7787*/
/*7761*/          OPC_CheckCondCode, ISD::SETULE,
/*7763*/          OPC_MoveParent,
/*7764*/          OPC_CheckType, MVT::i32,
/*7766*/          OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2 
/*7775*/          OPC_EmitInteger, MVT::i32, 1, 
/*7778*/          OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), 1:i32)
/*7787*/        /*Scope*/ 26, /*->7814*/
/*7788*/          OPC_CheckCondCode, ISD::SETGE,
/*7790*/          OPC_MoveParent,
/*7791*/          OPC_CheckType, MVT::i32,
/*7793*/          OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*7802*/          OPC_EmitInteger, MVT::i32, 1, 
/*7805*/          OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*7814*/        /*Scope*/ 26, /*->7841*/
/*7815*/          OPC_CheckCondCode, ISD::SETUGE,
/*7817*/          OPC_MoveParent,
/*7818*/          OPC_CheckType, MVT::i32,
/*7820*/          OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*7829*/          OPC_EmitInteger, MVT::i32, 1, 
/*7832*/          OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*7841*/        0, /*End of Scope*/
/*7842*/      0, /*End of Scope*/
/*7843*/    /*Scope*/ 82|128,2/*338*/, /*->8183*/
/*7845*/      OPC_CheckChild0Type, MVT::i64,
/*7847*/      OPC_RecordChild1, // #1 = $imm16
/*7848*/      OPC_Scope, 104, /*->7954*/ // 2 children in Scope
/*7850*/        OPC_MoveChild, 1,
/*7852*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7855*/        OPC_CheckPredicate, 42, // Predicate_immSExt16
/*7857*/        OPC_MoveParent,
/*7858*/        OPC_MoveChild, 2,
/*7860*/        OPC_Scope, 16, /*->7878*/ // 4 children in Scope
/*7862*/          OPC_CheckCondCode, ISD::SETLT,
/*7864*/          OPC_MoveParent,
/*7865*/          OPC_CheckType, MVT::i32,
/*7867*/          OPC_EmitConvertToTarget, 1,
/*7869*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SLTi64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (setcc:i32 CPU64Regs:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16, SETLT:Other) - Complexity = 7
                  // Dst: (SLTi64:i32 CPU64Regs:i64:$rs, (imm:i64):$imm16)
/*7878*/        /*Scope*/ 16, /*->7895*/
/*7879*/          OPC_CheckCondCode, ISD::SETULT,
/*7881*/          OPC_MoveParent,
/*7882*/          OPC_CheckType, MVT::i32,
/*7884*/          OPC_EmitConvertToTarget, 1,
/*7886*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (setcc:i32 CPU64Regs:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16, SETULT:Other) - Complexity = 7
                  // Dst: (SLTiu64:i32 CPU64Regs:i64:$rs, (imm:i64):$imm16)
/*7895*/        /*Scope*/ 28, /*->7924*/
/*7896*/          OPC_CheckCondCode, ISD::SETGE,
/*7898*/          OPC_MoveParent,
/*7899*/          OPC_CheckType, MVT::i32,
/*7901*/          OPC_EmitConvertToTarget, 1,
/*7903*/          OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3 
/*7912*/          OPC_EmitInteger, MVT::i32, 1, 
/*7915*/          OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other) - Complexity = 7
                  // Dst: (XORi:i32 (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*7924*/        /*Scope*/ 28, /*->7953*/
/*7925*/          OPC_CheckCondCode, ISD::SETUGE,
/*7927*/          OPC_MoveParent,
/*7928*/          OPC_CheckType, MVT::i32,
/*7930*/          OPC_EmitConvertToTarget, 1,
/*7932*/          OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3 
/*7941*/          OPC_EmitInteger, MVT::i32, 1, 
/*7944*/          OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other) - Complexity = 7
                  // Dst: (XORi:i32 (SLTiu64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*7953*/        0, /*End of Scope*/
/*7954*/      /*Scope*/ 98|128,1/*226*/, /*->8182*/
/*7956*/        OPC_MoveChild, 2,
/*7958*/        OPC_Scope, 14, /*->7974*/ // 10 children in Scope
/*7960*/          OPC_CheckCondCode, ISD::SETLT,
/*7962*/          OPC_MoveParent,
/*7963*/          OPC_CheckType, MVT::i32,
/*7965*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, SETLT:Other) - Complexity = 3
                  // Dst: (SLT64:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*7974*/        /*Scope*/ 14, /*->7989*/
/*7975*/          OPC_CheckCondCode, ISD::SETULT,
/*7977*/          OPC_MoveParent,
/*7978*/          OPC_CheckType, MVT::i32,
/*7980*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, SETULT:Other) - Complexity = 3
                  // Dst: (SLTu64:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*7989*/        /*Scope*/ 14, /*->8004*/
/*7990*/          OPC_CheckCondCode, ISD::SETGT,
/*7992*/          OPC_MoveParent,
/*7993*/          OPC_CheckType, MVT::i32,
/*7995*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGT:Other) - Complexity = 3
                  // Dst: (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs)
/*8004*/        /*Scope*/ 14, /*->8019*/
/*8005*/          OPC_CheckCondCode, ISD::SETUGT,
/*8007*/          OPC_MoveParent,
/*8008*/          OPC_CheckType, MVT::i32,
/*8010*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGT:Other) - Complexity = 3
                  // Dst: (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs)
/*8019*/        /*Scope*/ 26, /*->8046*/
/*8020*/          OPC_CheckCondCode, ISD::SETEQ,
/*8022*/          OPC_MoveParent,
/*8023*/          OPC_CheckType, MVT::i32,
/*8025*/          OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #2 
/*8034*/          OPC_EmitInteger, MVT::i64, 1, 
/*8037*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other) - Complexity = 3
                  // Dst: (SLTiu64:i32 (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), 1:i64)
/*8046*/        /*Scope*/ 26, /*->8073*/
/*8047*/          OPC_CheckCondCode, ISD::SETNE,
/*8049*/          OPC_MoveParent,
/*8050*/          OPC_CheckType, MVT::i32,
/*8052*/          OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*8055*/          OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #3 
/*8064*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other) - Complexity = 3
                  // Dst: (SLTu64:i32 ZERO_64:i64, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs))
/*8073*/        /*Scope*/ 26, /*->8100*/
/*8074*/          OPC_CheckCondCode, ISD::SETLE,
/*8076*/          OPC_MoveParent,
/*8077*/          OPC_CheckType, MVT::i32,
/*8079*/          OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2 
/*8088*/          OPC_EmitInteger, MVT::i32, 1, 
/*8091*/          OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), 1:i32)
/*8100*/        /*Scope*/ 26, /*->8127*/
/*8101*/          OPC_CheckCondCode, ISD::SETULE,
/*8103*/          OPC_MoveParent,
/*8104*/          OPC_CheckType, MVT::i32,
/*8106*/          OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2 
/*8115*/          OPC_EmitInteger, MVT::i32, 1, 
/*8118*/          OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), 1:i32)
/*8127*/        /*Scope*/ 26, /*->8154*/
/*8128*/          OPC_CheckCondCode, ISD::SETGE,
/*8130*/          OPC_MoveParent,
/*8131*/          OPC_CheckType, MVT::i32,
/*8133*/          OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*8142*/          OPC_EmitInteger, MVT::i32, 1, 
/*8145*/          OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), 1:i32)
/*8154*/        /*Scope*/ 26, /*->8181*/
/*8155*/          OPC_CheckCondCode, ISD::SETUGE,
/*8157*/          OPC_MoveParent,
/*8158*/          OPC_CheckType, MVT::i32,
/*8160*/          OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*8169*/          OPC_EmitInteger, MVT::i32, 1, 
/*8172*/          OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), 1:i32)
/*8181*/        0, /*End of Scope*/
/*8182*/      0, /*End of Scope*/
/*8183*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 71,  TARGET_VAL(ISD::AND),// ->8258
/*8187*/    OPC_RecordChild0, // #0 = $rs
/*8188*/    OPC_RecordChild1, // #1 = $imm16
/*8189*/    OPC_Scope, 42, /*->8233*/ // 3 children in Scope
/*8191*/      OPC_MoveChild, 1,
/*8193*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8196*/      OPC_CheckPredicate, 41, // Predicate_immZExt16
/*8198*/      OPC_MoveParent,
/*8199*/      OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->8216
/*8202*/        OPC_EmitConvertToTarget, 1,
/*8204*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*8207*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ANDi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (and:i32 CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ANDi:i32 CPURegs:i32:$rs, (LO16:i32 (imm:i32):$imm16))
              /*SwitchType*/ 14,  MVT::i64,// ->8232
/*8218*/        OPC_EmitConvertToTarget, 1,
/*8220*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*8223*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DANDi), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (and:i64 CPU64Regs:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (DANDi:i64 CPU64Regs:i64:$rs, (LO16:i64 (imm:i64):$imm16))
              0, // EndSwitchType
/*8233*/    /*Scope*/ 11, /*->8245*/
/*8234*/      OPC_CheckType, MVT::i32,
/*8236*/      OPC_MorphNodeTo, TARGET_VAL(Mips::AND), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (and:i32 CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
              // Dst: (AND:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*8245*/    /*Scope*/ 11, /*->8257*/
/*8246*/      OPC_CheckType, MVT::i64,
/*8248*/      OPC_MorphNodeTo, TARGET_VAL(Mips::AND64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (and:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt) - Complexity = 3
              // Dst: (AND64:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*8257*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 71,  TARGET_VAL(ISD::OR),// ->8332
/*8261*/    OPC_RecordChild0, // #0 = $rs
/*8262*/    OPC_RecordChild1, // #1 = $imm16
/*8263*/    OPC_Scope, 42, /*->8307*/ // 3 children in Scope
/*8265*/      OPC_MoveChild, 1,
/*8267*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8270*/      OPC_CheckPredicate, 41, // Predicate_immZExt16
/*8272*/      OPC_MoveParent,
/*8273*/      OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->8290
/*8276*/        OPC_EmitConvertToTarget, 1,
/*8278*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*8281*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (or:i32 CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ORi:i32 CPURegs:i32:$rs, (LO16:i32 (imm:i32):$imm16))
              /*SwitchType*/ 14,  MVT::i64,// ->8306
/*8292*/        OPC_EmitConvertToTarget, 1,
/*8294*/        OPC_EmitNodeXForm, 0, 2, // LO16
/*8297*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ORi64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 CPU64Regs:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ORi64:i64 CPU64Regs:i64:$rs, (LO16:i64 (imm:i64):$imm16))
              0, // EndSwitchType
/*8307*/    /*Scope*/ 11, /*->8319*/
/*8308*/      OPC_CheckType, MVT::i32,
/*8310*/      OPC_MorphNodeTo, TARGET_VAL(Mips::OR), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (or:i32 CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
              // Dst: (OR:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*8319*/    /*Scope*/ 11, /*->8331*/
/*8320*/      OPC_CheckType, MVT::i64,
/*8322*/      OPC_MorphNodeTo, TARGET_VAL(Mips::OR64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (or:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt) - Complexity = 3
              // Dst: (OR64:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*8331*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 75,  TARGET_VAL(ISD::SHL),// ->8410
/*8335*/    OPC_RecordChild0, // #0 = $rt
/*8336*/    OPC_RecordChild1, // #1 = $shamt
/*8337*/    OPC_Scope, 43, /*->8382*/ // 2 children in Scope
/*8339*/      OPC_MoveChild, 1,
/*8341*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8344*/      OPC_CheckType, MVT::i32,
/*8346*/      OPC_Scope, 16, /*->8364*/ // 2 children in Scope
/*8348*/        OPC_CheckPredicate, 43, // Predicate_immZExt5
/*8350*/        OPC_MoveParent,
/*8351*/        OPC_CheckType, MVT::i32,
/*8353*/        OPC_EmitConvertToTarget, 1,
/*8355*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SLL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i32 CPURegs:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SLL:i32 CPURegs:i32:$rt, (imm:i32):$shamt)
/*8364*/      /*Scope*/ 16, /*->8381*/
/*8365*/        OPC_CheckPredicate, 44, // Predicate_immZExt6
/*8367*/        OPC_MoveParent,
/*8368*/        OPC_CheckType, MVT::i64,
/*8370*/        OPC_EmitConvertToTarget, 1,
/*8372*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DSLL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i64 CPU64Regs:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSLL:i64 CPU64Regs:i64:$rt, (imm:i32):$shamt)
/*8381*/      0, /*End of Scope*/
/*8382*/    /*Scope*/ 26, /*->8409*/
/*8383*/      OPC_CheckChild1Type, MVT::i32,
/*8385*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8397
/*8388*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SLLV), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (shl:i32 CPURegs:i32:$rt, CPURegs:i32:$rs) - Complexity = 3
                // Dst: (SLLV:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
              /*SwitchType*/ 9,  MVT::i64,// ->8408
/*8399*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DSLLV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (shl:i64 CPU64Regs:i64:$rt, CPURegs:i32:$rs) - Complexity = 3
                // Dst: (DSLLV:i64 CPURegs:i32:$rs, CPU64Regs:i64:$rt)
              0, // EndSwitchType
/*8409*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 75,  TARGET_VAL(ISD::SRL),// ->8488
/*8413*/    OPC_RecordChild0, // #0 = $rt
/*8414*/    OPC_RecordChild1, // #1 = $shamt
/*8415*/    OPC_Scope, 43, /*->8460*/ // 2 children in Scope
/*8417*/      OPC_MoveChild, 1,
/*8419*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8422*/      OPC_CheckType, MVT::i32,
/*8424*/      OPC_Scope, 16, /*->8442*/ // 2 children in Scope
/*8426*/        OPC_CheckPredicate, 43, // Predicate_immZExt5
/*8428*/        OPC_MoveParent,
/*8429*/        OPC_CheckType, MVT::i32,
/*8431*/        OPC_EmitConvertToTarget, 1,
/*8433*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SRL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i32 CPURegs:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SRL:i32 CPURegs:i32:$rt, (imm:i32):$shamt)
/*8442*/      /*Scope*/ 16, /*->8459*/
/*8443*/        OPC_CheckPredicate, 44, // Predicate_immZExt6
/*8445*/        OPC_MoveParent,
/*8446*/        OPC_CheckType, MVT::i64,
/*8448*/        OPC_EmitConvertToTarget, 1,
/*8450*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DSRL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i64 CPU64Regs:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSRL:i64 CPU64Regs:i64:$rt, (imm:i32):$shamt)
/*8459*/      0, /*End of Scope*/
/*8460*/    /*Scope*/ 26, /*->8487*/
/*8461*/      OPC_CheckChild1Type, MVT::i32,
/*8463*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8475
/*8466*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SRLV), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (srl:i32 CPURegs:i32:$rt, CPURegs:i32:$rs) - Complexity = 3
                // Dst: (SRLV:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
              /*SwitchType*/ 9,  MVT::i64,// ->8486
/*8477*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DSRLV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (srl:i64 CPU64Regs:i64:$rt, CPURegs:i32:$rs) - Complexity = 3
                // Dst: (DSRLV:i64 CPURegs:i32:$rs, CPU64Regs:i64:$rt)
              0, // EndSwitchType
/*8487*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 75,  TARGET_VAL(ISD::SRA),// ->8566
/*8491*/    OPC_RecordChild0, // #0 = $rt
/*8492*/    OPC_RecordChild1, // #1 = $shamt
/*8493*/    OPC_Scope, 43, /*->8538*/ // 2 children in Scope
/*8495*/      OPC_MoveChild, 1,
/*8497*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8500*/      OPC_CheckType, MVT::i32,
/*8502*/      OPC_Scope, 16, /*->8520*/ // 2 children in Scope
/*8504*/        OPC_CheckPredicate, 43, // Predicate_immZExt5
/*8506*/        OPC_MoveParent,
/*8507*/        OPC_CheckType, MVT::i32,
/*8509*/        OPC_EmitConvertToTarget, 1,
/*8511*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SRA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 CPURegs:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SRA:i32 CPURegs:i32:$rt, (imm:i32):$shamt)
/*8520*/      /*Scope*/ 16, /*->8537*/
/*8521*/        OPC_CheckPredicate, 44, // Predicate_immZExt6
/*8523*/        OPC_MoveParent,
/*8524*/        OPC_CheckType, MVT::i64,
/*8526*/        OPC_EmitConvertToTarget, 1,
/*8528*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DSRA), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 CPU64Regs:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSRA:i64 CPU64Regs:i64:$rt, (imm:i32):$shamt)
/*8537*/      0, /*End of Scope*/
/*8538*/    /*Scope*/ 26, /*->8565*/
/*8539*/      OPC_CheckChild1Type, MVT::i32,
/*8541*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8553
/*8544*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SRAV), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sra:i32 CPURegs:i32:$rt, CPURegs:i32:$rs) - Complexity = 3
                // Dst: (SRAV:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
              /*SwitchType*/ 9,  MVT::i64,// ->8564
/*8555*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DSRAV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (sra:i64 CPU64Regs:i64:$rt, CPURegs:i32:$rs) - Complexity = 3
                // Dst: (DSRAV:i64 CPURegs:i32:$rs, CPU64Regs:i64:$rt)
              0, // EndSwitchType
/*8565*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ROTR),// ->8652
/*8569*/    OPC_RecordChild0, // #0 = $rt
/*8570*/    OPC_RecordChild1, // #1 = $shamt
/*8571*/    OPC_Scope, 47, /*->8620*/ // 2 children in Scope
/*8573*/      OPC_MoveChild, 1,
/*8575*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8578*/      OPC_CheckType, MVT::i32,
/*8580*/      OPC_Scope, 18, /*->8600*/ // 2 children in Scope
/*8582*/        OPC_CheckPredicate, 43, // Predicate_immZExt5
/*8584*/        OPC_MoveParent,
/*8585*/        OPC_CheckType, MVT::i32,
/*8587*/        OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips32r2())
/*8589*/        OPC_EmitConvertToTarget, 1,
/*8591*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ROTR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (rotr:i32 CPURegs:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (ROTR:i32 CPURegs:i32:$rt, (imm:i32):$shamt)
/*8600*/      /*Scope*/ 18, /*->8619*/
/*8601*/        OPC_CheckPredicate, 44, // Predicate_immZExt6
/*8603*/        OPC_MoveParent,
/*8604*/        OPC_CheckType, MVT::i64,
/*8606*/        OPC_CheckPatternPredicate, 13, // (Subtarget.hasMips64r2())
/*8608*/        OPC_EmitConvertToTarget, 1,
/*8610*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DROTR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (rotr:i64 CPU64Regs:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DROTR:i64 CPU64Regs:i64:$rt, (imm:i32):$shamt)
/*8619*/      0, /*End of Scope*/
/*8620*/    /*Scope*/ 30, /*->8651*/
/*8621*/      OPC_CheckChild1Type, MVT::i32,
/*8623*/      OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->8637
/*8626*/        OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips32r2())
/*8628*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ROTRV), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (rotr:i32 CPURegs:i32:$rt, CPURegs:i32:$rs) - Complexity = 3
                // Dst: (ROTRV:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
              /*SwitchType*/ 11,  MVT::i64,// ->8650
/*8639*/        OPC_CheckPatternPredicate, 13, // (Subtarget.hasMips64r2())
/*8641*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DROTRV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (rotr:i64 CPU64Regs:i64:$rt, CPURegs:i32:$rs) - Complexity = 3
                // Dst: (DROTRV:i64 CPURegs:i32:$rs, CPU64Regs:i64:$rt)
              0, // EndSwitchType
/*8651*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 38,  TARGET_VAL(ISD::ADDC),// ->8693
/*8655*/    OPC_RecordChild0, // #0 = $src
/*8656*/    OPC_RecordChild1, // #1 = $imm
/*8657*/    OPC_Scope, 21, /*->8680*/ // 2 children in Scope
/*8659*/      OPC_MoveChild, 1,
/*8661*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8664*/      OPC_CheckPredicate, 42, // Predicate_immSExt16
/*8666*/      OPC_MoveParent,
/*8667*/      OPC_CheckType, MVT::i32,
/*8669*/      OPC_EmitConvertToTarget, 1,
/*8671*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (addc:i32 CPURegs:i32:$src, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
              // Dst: (ADDiu:i32 CPURegs:i32:$src, (imm:i32):$imm)
/*8680*/    /*Scope*/ 11, /*->8692*/
/*8681*/      OPC_CheckType, MVT::i32,
/*8683*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDu), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs) - Complexity = 3
              // Dst: (ADDu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
/*8692*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 38|128,2/*294*/,  TARGET_VAL(ISD::FSUB),// ->8991
/*8697*/    OPC_Scope, 118|128,1/*246*/, /*->8946*/ // 2 children in Scope
/*8700*/      OPC_MoveChild, 0,
/*8702*/      OPC_SwitchOpcode /*2 cases */, 57|128,1/*185*/,  TARGET_VAL(ISD::ConstantFP),// ->8892
/*8707*/        OPC_CheckPredicate, 45, // Predicate_fpimm0
/*8709*/        OPC_MoveParent,
/*8710*/        OPC_MoveChild, 1,
/*8712*/        OPC_SwitchOpcode /*2 cases */, 116,  TARGET_VAL(ISD::FADD),// ->8832
/*8716*/          OPC_Scope, 56, /*->8774*/ // 2 children in Scope
/*8718*/            OPC_MoveChild, 0,
/*8720*/            OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*8723*/            OPC_RecordChild0, // #0 = $fs
/*8724*/            OPC_RecordChild1, // #1 = $ft
/*8725*/            OPC_MoveParent,
/*8726*/            OPC_RecordChild1, // #2 = $fr
/*8727*/            OPC_MoveParent,
/*8728*/            OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->8743
/*8731*/              OPC_CheckPatternPredicate, 14, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath)
/*8733*/              OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fadd:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr)) - Complexity = 13
                      // Dst: (NMADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                    /*SwitchType*/ 28,  MVT::f64,// ->8773
/*8745*/              OPC_Scope, 12, /*->8759*/ // 2 children in Scope
/*8747*/                OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath)
/*8749*/                OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr)) - Complexity = 13
                        // Dst: (NMADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*8759*/              /*Scope*/ 12, /*->8772*/
/*8760*/                OPC_CheckPatternPredicate, 16, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath)
/*8762*/                OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr)) - Complexity = 13
                        // Dst: (NMADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*8772*/              0, /*End of Scope*/
                    0, // EndSwitchType
/*8774*/          /*Scope*/ 56, /*->8831*/
/*8775*/            OPC_RecordChild0, // #0 = $fr
/*8776*/            OPC_MoveChild, 1,
/*8778*/            OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*8781*/            OPC_RecordChild0, // #1 = $fs
/*8782*/            OPC_RecordChild1, // #2 = $ft
/*8783*/            OPC_MoveParent,
/*8784*/            OPC_MoveParent,
/*8785*/            OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->8800
/*8788*/              OPC_CheckPatternPredicate, 14, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath)
/*8790*/              OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fadd:f32 FGR32:f32:$fr, (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft))) - Complexity = 13
                      // Dst: (NMADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                    /*SwitchType*/ 28,  MVT::f64,// ->8830
/*8802*/              OPC_Scope, 12, /*->8816*/ // 2 children in Scope
/*8804*/                OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath)
/*8806*/                OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 AFGR64:f64:$fr, (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft))) - Complexity = 13
                        // Dst: (NMADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*8816*/              /*Scope*/ 12, /*->8829*/
/*8817*/                OPC_CheckPatternPredicate, 16, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath)
/*8819*/                OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 FGR64:f64:$fr, (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft))) - Complexity = 13
                        // Dst: (NMADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*8829*/              0, /*End of Scope*/
                    0, // EndSwitchType
/*8831*/          0, /*End of Scope*/
                /*SwitchOpcode*/ 56,  TARGET_VAL(ISD::FSUB),// ->8891
/*8835*/          OPC_MoveChild, 0,
/*8837*/          OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*8840*/          OPC_RecordChild0, // #0 = $fs
/*8841*/          OPC_RecordChild1, // #1 = $ft
/*8842*/          OPC_MoveParent,
/*8843*/          OPC_RecordChild1, // #2 = $fr
/*8844*/          OPC_MoveParent,
/*8845*/          OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->8860
/*8848*/            OPC_CheckPatternPredicate, 14, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath)
/*8850*/            OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fsub:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr)) - Complexity = 13
                    // Dst: (NMSUB_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                  /*SwitchType*/ 28,  MVT::f64,// ->8890
/*8862*/            OPC_Scope, 12, /*->8876*/ // 2 children in Scope
/*8864*/              OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath)
/*8866*/              OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fsub:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr)) - Complexity = 13
                      // Dst: (NMSUB_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*8876*/            /*Scope*/ 12, /*->8889*/
/*8877*/              OPC_CheckPatternPredicate, 16, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath)
/*8879*/              OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fsub:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr)) - Complexity = 13
                      // Dst: (NMSUB_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*8889*/            0, /*End of Scope*/
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 50,  TARGET_VAL(ISD::FMUL),// ->8945
/*8895*/        OPC_RecordChild0, // #0 = $fs
/*8896*/        OPC_RecordChild1, // #1 = $ft
/*8897*/        OPC_MoveParent,
/*8898*/        OPC_RecordChild1, // #2 = $fr
/*8899*/        OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->8914
/*8902*/          OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips32r2())
/*8904*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fsub:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr) - Complexity = 6
                  // Dst: (MSUB_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                /*SwitchType*/ 28,  MVT::f64,// ->8944
/*8916*/          OPC_Scope, 12, /*->8930*/ // 2 children in Scope
/*8918*/            OPC_CheckPatternPredicate, 17, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit())
/*8920*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr) - Complexity = 6
                    // Dst: (MSUB_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*8930*/          /*Scope*/ 12, /*->8943*/
/*8931*/            OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit())
/*8933*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr) - Complexity = 6
                    // Dst: (MSUB_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*8943*/          0, /*End of Scope*/
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*8946*/    /*Scope*/ 43, /*->8990*/
/*8947*/      OPC_RecordChild0, // #0 = $fs
/*8948*/      OPC_RecordChild1, // #1 = $ft
/*8949*/      OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->8961
/*8952*/        OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_S), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
                // Dst: (FSUB_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
              /*SwitchType*/ 26,  MVT::f64,// ->8989
/*8963*/        OPC_Scope, 11, /*->8976*/ // 2 children in Scope
/*8965*/          OPC_CheckPatternPredicate, 10, // (!Subtarget.isFP64bit())
/*8967*/          OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_D32), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                  // Dst: (FSUB_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*8976*/        /*Scope*/ 11, /*->8988*/
/*8977*/          OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*8979*/          OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_D64), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                  // Dst: (FSUB_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*8988*/        0, /*End of Scope*/
              0, // EndSwitchType
/*8990*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(MipsISD::FPBrcond),// ->9040
/*8994*/    OPC_RecordNode,   // #0 = 'MipsFPBrcond' chained node
/*8995*/    OPC_CaptureGlueInput,
/*8996*/    OPC_MoveChild, 1,
/*8998*/    OPC_CheckType, MVT::i32,
/*9000*/    OPC_Scope, 18, /*->9020*/ // 2 children in Scope
/*9002*/      OPC_CheckInteger, 0, 
/*9004*/      OPC_MoveParent,
/*9005*/      OPC_RecordChild2, // #1 = $dst
/*9006*/      OPC_MoveChild, 2,
/*9008*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*9011*/      OPC_MoveParent,
/*9012*/      OPC_EmitMergeInputChains1_0,
/*9013*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BC1F), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsFPBrcond 0:i32, (bb:Other):$dst) - Complexity = 8
              // Dst: (BC1F (bb:Other):$dst)
/*9020*/    /*Scope*/ 18, /*->9039*/
/*9021*/      OPC_CheckInteger, 1, 
/*9023*/      OPC_MoveParent,
/*9024*/      OPC_RecordChild2, // #1 = $dst
/*9025*/      OPC_MoveChild, 2,
/*9027*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*9030*/      OPC_MoveParent,
/*9031*/      OPC_EmitMergeInputChains1_0,
/*9032*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BC1T), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsFPBrcond 1:i32, (bb:Other):$dst) - Complexity = 8
              // Dst: (BC1T (bb:Other):$dst)
/*9039*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CALLSEQ_START),// ->9060
/*9043*/    OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*9044*/    OPC_RecordChild1, // #1 = $amt
/*9045*/    OPC_MoveChild, 1,
/*9047*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*9050*/    OPC_MoveParent,
/*9051*/    OPC_EmitMergeInputChains1_0,
/*9052*/    OPC_MorphNodeTo, TARGET_VAL(Mips::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
          /*SwitchOpcode*/ 18,  TARGET_VAL(MipsISD::Sync),// ->9081
/*9063*/    OPC_RecordNode,   // #0 = 'MipsSync' chained node
/*9064*/    OPC_RecordChild1, // #1 = $stype
/*9065*/    OPC_MoveChild, 1,
/*9067*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9070*/    OPC_MoveParent,
/*9071*/    OPC_EmitMergeInputChains1_0,
/*9072*/    OPC_EmitConvertToTarget, 1,
/*9074*/    OPC_MorphNodeTo, TARGET_VAL(Mips::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 2, 
            // Src: (MipsSync (imm:i32):$stype) - Complexity = 6
            // Dst: (SYNC (imm:i32):$stype)
          /*SwitchOpcode*/ 74,  TARGET_VAL(MipsISD::JmpLink),// ->9158
/*9084*/    OPC_RecordNode,   // #0 = 'MipsJmpLink' chained node
/*9085*/    OPC_CaptureGlueInput,
/*9086*/    OPC_RecordChild1, // #1 = $target
/*9087*/    OPC_Scope, 46, /*->9135*/ // 3 children in Scope
/*9089*/      OPC_MoveChild, 1,
/*9091*/      OPC_SwitchOpcode /*3 cases */, 11,  TARGET_VAL(ISD::Constant),// ->9106
/*9095*/        OPC_MoveParent,
/*9096*/        OPC_EmitMergeInputChains1_0,
/*9097*/        OPC_EmitConvertToTarget, 1,
/*9099*/        OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (MipsJmpLink (imm:iPTR):$target) - Complexity = 6
                // Dst: (JAL (imm:iPTR):$target)
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->9120
/*9109*/        OPC_CheckType, MVT::i32,
/*9111*/        OPC_MoveParent,
/*9112*/        OPC_EmitMergeInputChains1_0,
/*9113*/        OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsJmpLink (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (JAL (tglobaladdr:i32):$dst)
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetExternalSymbol),// ->9134
/*9123*/        OPC_CheckType, MVT::i32,
/*9125*/        OPC_MoveParent,
/*9126*/        OPC_EmitMergeInputChains1_0,
/*9127*/        OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsJmpLink (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (JAL (texternalsym:i32):$dst)
              0, // EndSwitchOpcode
/*9135*/    /*Scope*/ 10, /*->9146*/
/*9136*/      OPC_CheckChild1Type, MVT::i32,
/*9138*/      OPC_EmitMergeInputChains1_0,
/*9139*/      OPC_MorphNodeTo, TARGET_VAL(Mips::JALR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsJmpLink CPURegs:i32:$rs) - Complexity = 3
              // Dst: (JALR CPURegs:i32:$rs)
/*9146*/    /*Scope*/ 10, /*->9157*/
/*9147*/      OPC_CheckChild1Type, MVT::i64,
/*9149*/      OPC_EmitMergeInputChains1_0,
/*9150*/      OPC_MorphNodeTo, TARGET_VAL(Mips::JALR64), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsJmpLink CPU64Regs:i64:$rs) - Complexity = 3
              // Dst: (JALR64 CPU64Regs:i64:$rs)
/*9157*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 7|128,1/*135*/,  TARGET_VAL(MipsISD::Hi),// ->9297
/*9162*/    OPC_RecordChild0, // #0 = $in
/*9163*/    OPC_MoveChild, 0,
/*9165*/    OPC_SwitchOpcode /*5 cases */, 23,  TARGET_VAL(ISD::TargetGlobalAddress),// ->9192
/*9169*/      OPC_MoveParent,
/*9170*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->9181
/*9173*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (tglobaladdr:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->9191
/*9183*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::TargetBlockAddress),// ->9218
/*9195*/      OPC_MoveParent,
/*9196*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->9207
/*9199*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->9217
/*9209*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::TargetJumpTable),// ->9244
/*9221*/      OPC_MoveParent,
/*9222*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->9233
/*9225*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (tjumptable:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->9243
/*9235*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tjumptable:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::TargetConstantPool),// ->9270
/*9247*/      OPC_MoveParent,
/*9248*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->9259
/*9251*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (tconstpool:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->9269
/*9261*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tconstpool:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->9296
/*9273*/      OPC_MoveParent,
/*9274*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->9285
/*9277*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (tglobaltlsaddr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->9295
/*9287*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 47|128,1/*175*/,  TARGET_VAL(MipsISD::Lo),// ->9476
/*9301*/    OPC_RecordChild0, // #0 = $in
/*9302*/    OPC_MoveChild, 0,
/*9304*/    OPC_SwitchOpcode /*5 cases */, 31,  TARGET_VAL(ISD::TargetGlobalAddress),// ->9339
/*9308*/      OPC_MoveParent,
/*9309*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9324
/*9312*/        OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*9315*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tglobaladdr:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tglobaladdr:i32):$in)
              /*SwitchType*/ 12,  MVT::i64,// ->9338
/*9326*/        OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*9329*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetBlockAddress),// ->9373
/*9342*/      OPC_MoveParent,
/*9343*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9358
/*9346*/        OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*9349*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tblockaddress:i32):$in)
              /*SwitchType*/ 12,  MVT::i64,// ->9372
/*9360*/        OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*9363*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetJumpTable),// ->9407
/*9376*/      OPC_MoveParent,
/*9377*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9392
/*9380*/        OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*9383*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tjumptable:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tjumptable:i32):$in)
              /*SwitchType*/ 12,  MVT::i64,// ->9406
/*9394*/        OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*9397*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tjumptable:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetConstantPool),// ->9441
/*9410*/      OPC_MoveParent,
/*9411*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9426
/*9414*/        OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*9417*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tconstpool:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tconstpool:i32):$in)
              /*SwitchType*/ 12,  MVT::i64,// ->9440
/*9428*/        OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*9431*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tconstpool:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->9475
/*9444*/      OPC_MoveParent,
/*9445*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9460
/*9448*/        OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*9451*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tglobaltlsaddr:i32):$in)
              /*SwitchType*/ 12,  MVT::i64,// ->9474
/*9462*/        OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*9465*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 46|128,1/*174*/,  TARGET_VAL(MipsISD::Wrapper),// ->9654
/*9480*/    OPC_RecordChild0, // #0 = $gp
/*9481*/    OPC_RecordChild1, // #1 = $in
/*9482*/    OPC_MoveChild, 1,
/*9484*/    OPC_SwitchOpcode /*6 cases */, 25,  TARGET_VAL(ISD::TargetGlobalAddress),// ->9513
/*9488*/      OPC_MoveParent,
/*9489*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9501
/*9492*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
              /*SwitchType*/ 9,  MVT::i64,// ->9512
/*9503*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::TargetConstantPool),// ->9541
/*9516*/      OPC_MoveParent,
/*9517*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9529
/*9520*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tconstpool:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
              /*SwitchType*/ 9,  MVT::i64,// ->9540
/*9531*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tconstpool:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::TargetExternalSymbol),// ->9569
/*9544*/      OPC_MoveParent,
/*9545*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9557
/*9548*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (texternalsym:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (texternalsym:i32):$in)
              /*SwitchType*/ 9,  MVT::i64,// ->9568
/*9559*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (texternalsym:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (texternalsym:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::TargetBlockAddress),// ->9597
/*9572*/      OPC_MoveParent,
/*9573*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9585
/*9576*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tblockaddress:i32):$in)
              /*SwitchType*/ 9,  MVT::i64,// ->9596
/*9587*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::TargetJumpTable),// ->9625
/*9600*/      OPC_MoveParent,
/*9601*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9613
/*9604*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tjumptable:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tjumptable:i32):$in)
              /*SwitchType*/ 9,  MVT::i64,// ->9624
/*9615*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tjumptable:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->9653
/*9628*/      OPC_MoveParent,
/*9629*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9641
/*9632*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tglobaltlsaddr:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaltlsaddr:i32):$in)
              /*SwitchType*/ 9,  MVT::i64,// ->9652
/*9643*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 69,  TARGET_VAL(MipsISD::FPCmp),// ->9726
/*9657*/    OPC_RecordChild0, // #0 = $fs
/*9658*/    OPC_Scope, 22, /*->9682*/ // 2 children in Scope
/*9660*/      OPC_CheckChild0Type, MVT::f32,
/*9662*/      OPC_RecordChild1, // #1 = $ft
/*9663*/      OPC_RecordChild2, // #2 = $cc
/*9664*/      OPC_MoveChild, 2,
/*9666*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9669*/      OPC_MoveParent,
/*9670*/      OPC_EmitConvertToTarget, 2,
/*9672*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_S32), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (MipsFPCmp FGR32:f32:$fs, FGR32:f32:$ft, (imm:i32):$cc) - Complexity = 6
              // Dst: (FCMP_S32:i32 FGR32:f32:$fs, FGR32:f32:$ft, (imm:i32):$cc)
/*9682*/    /*Scope*/ 42, /*->9725*/
/*9683*/      OPC_CheckChild0Type, MVT::f64,
/*9685*/      OPC_RecordChild1, // #1 = $ft
/*9686*/      OPC_RecordChild2, // #2 = $cc
/*9687*/      OPC_MoveChild, 2,
/*9689*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9692*/      OPC_MoveParent,
/*9693*/      OPC_Scope, 14, /*->9709*/ // 2 children in Scope
/*9695*/        OPC_CheckPatternPredicate, 10, // (!Subtarget.isFP64bit())
/*9697*/        OPC_EmitConvertToTarget, 2,
/*9699*/        OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_D32), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (MipsFPCmp AFGR64:f64:$fs, AFGR64:f64:$ft, (imm:i32):$cc) - Complexity = 6
                // Dst: (FCMP_D32:i32 AFGR64:f64:$fs, AFGR64:f64:$ft, (imm:i32):$cc)
/*9709*/      /*Scope*/ 14, /*->9724*/
/*9710*/        OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*9712*/        OPC_EmitConvertToTarget, 2,
/*9714*/        OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_D64), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (MipsFPCmp FGR64:f64:$fs, FGR64:f64:$ft, (imm:i32):$cc) - Complexity = 6
                // Dst: (FCMP_D64:i32 FGR64:f64:$fs, FGR64:f64:$ft, (imm:i32):$cc)
/*9724*/      0, /*End of Scope*/
/*9725*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 19,  TARGET_VAL(MipsISD::ExtractElementF64),// ->9748
/*9729*/    OPC_RecordChild0, // #0 = $src
/*9730*/    OPC_RecordChild1, // #1 = $n
/*9731*/    OPC_MoveChild, 1,
/*9733*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9736*/    OPC_MoveParent,
/*9737*/    OPC_EmitConvertToTarget, 1,
/*9739*/    OPC_MorphNodeTo, TARGET_VAL(Mips::ExtractElementF64), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
            // Src: (MipsExtractElementF64:i32 AFGR64:f64:$src, (imm:i32):$n) - Complexity = 6
            // Dst: (ExtractElementF64:i32 AFGR64:f64:$src, (imm:i32):$n)
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::Constant),// ->9834
/*9751*/    OPC_RecordNode,   // #0 = $in
/*9752*/    OPC_CheckType, MVT::i32,
/*9754*/    OPC_Scope, 16, /*->9772*/ // 4 children in Scope
/*9756*/      OPC_CheckPredicate, 42, // Predicate_immSExt16
/*9758*/      OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*9761*/      OPC_EmitConvertToTarget, 0,
/*9763*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (imm:i32)<<P:Predicate_immSExt16>>:$in - Complexity = 4
              // Dst: (ADDiu:i32 ZERO:i32, (imm:i32):$in)
/*9772*/    /*Scope*/ 16, /*->9789*/
/*9773*/      OPC_CheckPredicate, 41, // Predicate_immZExt16
/*9775*/      OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*9778*/      OPC_EmitConvertToTarget, 0,
/*9780*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$in - Complexity = 4
              // Dst: (ORi:i32 ZERO:i32, (imm:i32):$in)
/*9789*/    /*Scope*/ 15, /*->9805*/
/*9790*/      OPC_CheckPredicate, 46, // Predicate_immLow16Zero
/*9792*/      OPC_EmitConvertToTarget, 0,
/*9794*/      OPC_EmitNodeXForm, 1, 1, // HI16
/*9797*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (imm:i32)<<P:Predicate_immLow16Zero>>:$in - Complexity = 4
              // Dst: (LUi:i32 (HI16:i32 (imm:i32):$in))
/*9805*/    /*Scope*/ 27, /*->9833*/
/*9806*/      OPC_EmitConvertToTarget, 0,
/*9808*/      OPC_EmitNodeXForm, 1, 1, // HI16
/*9811*/      OPC_EmitNode, TARGET_VAL(Mips::LUi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3 
/*9819*/      OPC_EmitConvertToTarget, 0,
/*9821*/      OPC_EmitNodeXForm, 0, 4, // LO16
/*9824*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
              // Src: (imm:i32):$imm - Complexity = 3
              // Dst: (ORi:i32 (LUi:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*9833*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->9985
/*9838*/    OPC_RecordMemRef,
/*9839*/    OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*9840*/    OPC_RecordChild1, // #1 = $ptr
/*9841*/    OPC_Scope, 70, /*->9913*/ // 2 children in Scope
/*9843*/      OPC_CheckChild1Type, MVT::i32,
/*9845*/      OPC_RecordChild2, // #2 = $incr
/*9846*/      OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->9896
/*9849*/        OPC_Scope, 14, /*->9865*/ // 3 children in Scope
/*9851*/          OPC_CheckPredicate, 47, // Predicate_atomic_load_add_8
/*9853*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*9855*/          OPC_EmitMergeInputChains1_0,
/*9856*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*9865*/        /*Scope*/ 14, /*->9880*/
/*9866*/          OPC_CheckPredicate, 48, // Predicate_atomic_load_add_16
/*9868*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*9870*/          OPC_EmitMergeInputChains1_0,
/*9871*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*9880*/        /*Scope*/ 14, /*->9895*/
/*9881*/          OPC_CheckPredicate, 49, // Predicate_atomic_load_add_32
/*9883*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*9885*/          OPC_EmitMergeInputChains1_0,
/*9886*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*9895*/        0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->9912
/*9898*/        OPC_CheckPredicate, 50, // Predicate_atomic_load_add_64
/*9900*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*9902*/        OPC_EmitMergeInputChains1_0,
/*9903*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_add:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_ADD_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*9913*/    /*Scope*/ 70, /*->9984*/
/*9914*/      OPC_CheckChild1Type, MVT::i64,
/*9916*/      OPC_RecordChild2, // #2 = $incr
/*9917*/      OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->9967
/*9920*/        OPC_Scope, 14, /*->9936*/ // 3 children in Scope
/*9922*/          OPC_CheckPredicate, 47, // Predicate_atomic_load_add_8
/*9924*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*9926*/          OPC_EmitMergeInputChains1_0,
/*9927*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*9936*/        /*Scope*/ 14, /*->9951*/
/*9937*/          OPC_CheckPredicate, 48, // Predicate_atomic_load_add_16
/*9939*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*9941*/          OPC_EmitMergeInputChains1_0,
/*9942*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*9951*/        /*Scope*/ 14, /*->9966*/
/*9952*/          OPC_CheckPredicate, 49, // Predicate_atomic_load_add_32
/*9954*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*9956*/          OPC_EmitMergeInputChains1_0,
/*9957*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*9966*/        0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->9983
/*9969*/        OPC_CheckPredicate, 50, // Predicate_atomic_load_add_64
/*9971*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*9973*/        OPC_EmitMergeInputChains1_0,
/*9974*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_add:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_ADD_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*9984*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->10136
/*9989*/    OPC_RecordMemRef,
/*9990*/    OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*9991*/    OPC_RecordChild1, // #1 = $ptr
/*9992*/    OPC_Scope, 70, /*->10064*/ // 2 children in Scope
/*9994*/      OPC_CheckChild1Type, MVT::i32,
/*9996*/      OPC_RecordChild2, // #2 = $incr
/*9997*/      OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->10047
/*10000*/       OPC_Scope, 14, /*->10016*/ // 3 children in Scope
/*10002*/         OPC_CheckPredicate, 51, // Predicate_atomic_load_sub_8
/*10004*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*10006*/         OPC_EmitMergeInputChains1_0,
/*10007*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*10016*/       /*Scope*/ 14, /*->10031*/
/*10017*/         OPC_CheckPredicate, 52, // Predicate_atomic_load_sub_16
/*10019*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*10021*/         OPC_EmitMergeInputChains1_0,
/*10022*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*10031*/       /*Scope*/ 14, /*->10046*/
/*10032*/         OPC_CheckPredicate, 53, // Predicate_atomic_load_sub_32
/*10034*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*10036*/         OPC_EmitMergeInputChains1_0,
/*10037*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*10046*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->10063
/*10049*/       OPC_CheckPredicate, 54, // Predicate_atomic_load_sub_64
/*10051*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*10053*/       OPC_EmitMergeInputChains1_0,
/*10054*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_sub:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_SUB_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*10064*/   /*Scope*/ 70, /*->10135*/
/*10065*/     OPC_CheckChild1Type, MVT::i64,
/*10067*/     OPC_RecordChild2, // #2 = $incr
/*10068*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->10118
/*10071*/       OPC_Scope, 14, /*->10087*/ // 3 children in Scope
/*10073*/         OPC_CheckPredicate, 51, // Predicate_atomic_load_sub_8
/*10075*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*10077*/         OPC_EmitMergeInputChains1_0,
/*10078*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*10087*/       /*Scope*/ 14, /*->10102*/
/*10088*/         OPC_CheckPredicate, 52, // Predicate_atomic_load_sub_16
/*10090*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*10092*/         OPC_EmitMergeInputChains1_0,
/*10093*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*10102*/       /*Scope*/ 14, /*->10117*/
/*10103*/         OPC_CheckPredicate, 53, // Predicate_atomic_load_sub_32
/*10105*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*10107*/         OPC_EmitMergeInputChains1_0,
/*10108*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*10117*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->10134
/*10120*/       OPC_CheckPredicate, 54, // Predicate_atomic_load_sub_64
/*10122*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*10124*/       OPC_EmitMergeInputChains1_0,
/*10125*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_sub:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_SUB_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*10135*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->10287
/*10140*/   OPC_RecordMemRef,
/*10141*/   OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*10142*/   OPC_RecordChild1, // #1 = $ptr
/*10143*/   OPC_Scope, 70, /*->10215*/ // 2 children in Scope
/*10145*/     OPC_CheckChild1Type, MVT::i32,
/*10147*/     OPC_RecordChild2, // #2 = $incr
/*10148*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->10198
/*10151*/       OPC_Scope, 14, /*->10167*/ // 3 children in Scope
/*10153*/         OPC_CheckPredicate, 55, // Predicate_atomic_load_and_8
/*10155*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*10157*/         OPC_EmitMergeInputChains1_0,
/*10158*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*10167*/       /*Scope*/ 14, /*->10182*/
/*10168*/         OPC_CheckPredicate, 56, // Predicate_atomic_load_and_16
/*10170*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*10172*/         OPC_EmitMergeInputChains1_0,
/*10173*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*10182*/       /*Scope*/ 14, /*->10197*/
/*10183*/         OPC_CheckPredicate, 57, // Predicate_atomic_load_and_32
/*10185*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*10187*/         OPC_EmitMergeInputChains1_0,
/*10188*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*10197*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->10214
/*10200*/       OPC_CheckPredicate, 58, // Predicate_atomic_load_and_64
/*10202*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*10204*/       OPC_EmitMergeInputChains1_0,
/*10205*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_and:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_AND_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*10215*/   /*Scope*/ 70, /*->10286*/
/*10216*/     OPC_CheckChild1Type, MVT::i64,
/*10218*/     OPC_RecordChild2, // #2 = $incr
/*10219*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->10269
/*10222*/       OPC_Scope, 14, /*->10238*/ // 3 children in Scope
/*10224*/         OPC_CheckPredicate, 55, // Predicate_atomic_load_and_8
/*10226*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*10228*/         OPC_EmitMergeInputChains1_0,
/*10229*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*10238*/       /*Scope*/ 14, /*->10253*/
/*10239*/         OPC_CheckPredicate, 56, // Predicate_atomic_load_and_16
/*10241*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*10243*/         OPC_EmitMergeInputChains1_0,
/*10244*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*10253*/       /*Scope*/ 14, /*->10268*/
/*10254*/         OPC_CheckPredicate, 57, // Predicate_atomic_load_and_32
/*10256*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*10258*/         OPC_EmitMergeInputChains1_0,
/*10259*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*10268*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->10285
/*10271*/       OPC_CheckPredicate, 58, // Predicate_atomic_load_and_64
/*10273*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*10275*/       OPC_EmitMergeInputChains1_0,
/*10276*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_and:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_AND_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*10286*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->10438
/*10291*/   OPC_RecordMemRef,
/*10292*/   OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*10293*/   OPC_RecordChild1, // #1 = $ptr
/*10294*/   OPC_Scope, 70, /*->10366*/ // 2 children in Scope
/*10296*/     OPC_CheckChild1Type, MVT::i32,
/*10298*/     OPC_RecordChild2, // #2 = $incr
/*10299*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->10349
/*10302*/       OPC_Scope, 14, /*->10318*/ // 3 children in Scope
/*10304*/         OPC_CheckPredicate, 59, // Predicate_atomic_load_or_8
/*10306*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*10308*/         OPC_EmitMergeInputChains1_0,
/*10309*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*10318*/       /*Scope*/ 14, /*->10333*/
/*10319*/         OPC_CheckPredicate, 60, // Predicate_atomic_load_or_16
/*10321*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*10323*/         OPC_EmitMergeInputChains1_0,
/*10324*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*10333*/       /*Scope*/ 14, /*->10348*/
/*10334*/         OPC_CheckPredicate, 61, // Predicate_atomic_load_or_32
/*10336*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*10338*/         OPC_EmitMergeInputChains1_0,
/*10339*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*10348*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->10365
/*10351*/       OPC_CheckPredicate, 62, // Predicate_atomic_load_or_64
/*10353*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*10355*/       OPC_EmitMergeInputChains1_0,
/*10356*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_or:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_OR_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*10366*/   /*Scope*/ 70, /*->10437*/
/*10367*/     OPC_CheckChild1Type, MVT::i64,
/*10369*/     OPC_RecordChild2, // #2 = $incr
/*10370*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->10420
/*10373*/       OPC_Scope, 14, /*->10389*/ // 3 children in Scope
/*10375*/         OPC_CheckPredicate, 59, // Predicate_atomic_load_or_8
/*10377*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*10379*/         OPC_EmitMergeInputChains1_0,
/*10380*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*10389*/       /*Scope*/ 14, /*->10404*/
/*10390*/         OPC_CheckPredicate, 60, // Predicate_atomic_load_or_16
/*10392*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*10394*/         OPC_EmitMergeInputChains1_0,
/*10395*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*10404*/       /*Scope*/ 14, /*->10419*/
/*10405*/         OPC_CheckPredicate, 61, // Predicate_atomic_load_or_32
/*10407*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*10409*/         OPC_EmitMergeInputChains1_0,
/*10410*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*10419*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->10436
/*10422*/       OPC_CheckPredicate, 62, // Predicate_atomic_load_or_64
/*10424*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*10426*/       OPC_EmitMergeInputChains1_0,
/*10427*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_or:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_OR_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*10437*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->10589
/*10442*/   OPC_RecordMemRef,
/*10443*/   OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*10444*/   OPC_RecordChild1, // #1 = $ptr
/*10445*/   OPC_Scope, 70, /*->10517*/ // 2 children in Scope
/*10447*/     OPC_CheckChild1Type, MVT::i32,
/*10449*/     OPC_RecordChild2, // #2 = $incr
/*10450*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->10500
/*10453*/       OPC_Scope, 14, /*->10469*/ // 3 children in Scope
/*10455*/         OPC_CheckPredicate, 63, // Predicate_atomic_load_xor_8
/*10457*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*10459*/         OPC_EmitMergeInputChains1_0,
/*10460*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*10469*/       /*Scope*/ 14, /*->10484*/
/*10470*/         OPC_CheckPredicate, 64, // Predicate_atomic_load_xor_16
/*10472*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*10474*/         OPC_EmitMergeInputChains1_0,
/*10475*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*10484*/       /*Scope*/ 14, /*->10499*/
/*10485*/         OPC_CheckPredicate, 65, // Predicate_atomic_load_xor_32
/*10487*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*10489*/         OPC_EmitMergeInputChains1_0,
/*10490*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*10499*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->10516
/*10502*/       OPC_CheckPredicate, 66, // Predicate_atomic_load_xor_64
/*10504*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*10506*/       OPC_EmitMergeInputChains1_0,
/*10507*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_xor:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_XOR_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*10517*/   /*Scope*/ 70, /*->10588*/
/*10518*/     OPC_CheckChild1Type, MVT::i64,
/*10520*/     OPC_RecordChild2, // #2 = $incr
/*10521*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->10571
/*10524*/       OPC_Scope, 14, /*->10540*/ // 3 children in Scope
/*10526*/         OPC_CheckPredicate, 63, // Predicate_atomic_load_xor_8
/*10528*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*10530*/         OPC_EmitMergeInputChains1_0,
/*10531*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*10540*/       /*Scope*/ 14, /*->10555*/
/*10541*/         OPC_CheckPredicate, 64, // Predicate_atomic_load_xor_16
/*10543*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*10545*/         OPC_EmitMergeInputChains1_0,
/*10546*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*10555*/       /*Scope*/ 14, /*->10570*/
/*10556*/         OPC_CheckPredicate, 65, // Predicate_atomic_load_xor_32
/*10558*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*10560*/         OPC_EmitMergeInputChains1_0,
/*10561*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*10570*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->10587
/*10573*/       OPC_CheckPredicate, 66, // Predicate_atomic_load_xor_64
/*10575*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*10577*/       OPC_EmitMergeInputChains1_0,
/*10578*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_xor:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_XOR_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*10588*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->10740
/*10593*/   OPC_RecordMemRef,
/*10594*/   OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*10595*/   OPC_RecordChild1, // #1 = $ptr
/*10596*/   OPC_Scope, 70, /*->10668*/ // 2 children in Scope
/*10598*/     OPC_CheckChild1Type, MVT::i32,
/*10600*/     OPC_RecordChild2, // #2 = $incr
/*10601*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->10651
/*10604*/       OPC_Scope, 14, /*->10620*/ // 3 children in Scope
/*10606*/         OPC_CheckPredicate, 67, // Predicate_atomic_load_nand_8
/*10608*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*10610*/         OPC_EmitMergeInputChains1_0,
/*10611*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*10620*/       /*Scope*/ 14, /*->10635*/
/*10621*/         OPC_CheckPredicate, 68, // Predicate_atomic_load_nand_16
/*10623*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*10625*/         OPC_EmitMergeInputChains1_0,
/*10626*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*10635*/       /*Scope*/ 14, /*->10650*/
/*10636*/         OPC_CheckPredicate, 69, // Predicate_atomic_load_nand_32
/*10638*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*10640*/         OPC_EmitMergeInputChains1_0,
/*10641*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*10650*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->10667
/*10653*/       OPC_CheckPredicate, 70, // Predicate_atomic_load_nand_64
/*10655*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*10657*/       OPC_EmitMergeInputChains1_0,
/*10658*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_nand:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_NAND_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*10668*/   /*Scope*/ 70, /*->10739*/
/*10669*/     OPC_CheckChild1Type, MVT::i64,
/*10671*/     OPC_RecordChild2, // #2 = $incr
/*10672*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->10722
/*10675*/       OPC_Scope, 14, /*->10691*/ // 3 children in Scope
/*10677*/         OPC_CheckPredicate, 67, // Predicate_atomic_load_nand_8
/*10679*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*10681*/         OPC_EmitMergeInputChains1_0,
/*10682*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*10691*/       /*Scope*/ 14, /*->10706*/
/*10692*/         OPC_CheckPredicate, 68, // Predicate_atomic_load_nand_16
/*10694*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*10696*/         OPC_EmitMergeInputChains1_0,
/*10697*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*10706*/       /*Scope*/ 14, /*->10721*/
/*10707*/         OPC_CheckPredicate, 69, // Predicate_atomic_load_nand_32
/*10709*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*10711*/         OPC_EmitMergeInputChains1_0,
/*10712*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*10721*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->10738
/*10724*/       OPC_CheckPredicate, 70, // Predicate_atomic_load_nand_64
/*10726*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*10728*/       OPC_EmitMergeInputChains1_0,
/*10729*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_nand:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_NAND_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*10739*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->10891
/*10744*/   OPC_RecordMemRef,
/*10745*/   OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*10746*/   OPC_RecordChild1, // #1 = $ptr
/*10747*/   OPC_Scope, 70, /*->10819*/ // 2 children in Scope
/*10749*/     OPC_CheckChild1Type, MVT::i32,
/*10751*/     OPC_RecordChild2, // #2 = $incr
/*10752*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->10802
/*10755*/       OPC_Scope, 14, /*->10771*/ // 3 children in Scope
/*10757*/         OPC_CheckPredicate, 71, // Predicate_atomic_swap_8
/*10759*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*10761*/         OPC_EmitMergeInputChains1_0,
/*10762*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*10771*/       /*Scope*/ 14, /*->10786*/
/*10772*/         OPC_CheckPredicate, 72, // Predicate_atomic_swap_16
/*10774*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*10776*/         OPC_EmitMergeInputChains1_0,
/*10777*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*10786*/       /*Scope*/ 14, /*->10801*/
/*10787*/         OPC_CheckPredicate, 73, // Predicate_atomic_swap_32
/*10789*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*10791*/         OPC_EmitMergeInputChains1_0,
/*10792*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*10801*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->10818
/*10804*/       OPC_CheckPredicate, 74, // Predicate_atomic_swap_64
/*10806*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*10808*/       OPC_EmitMergeInputChains1_0,
/*10809*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_swap:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_SWAP_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*10819*/   /*Scope*/ 70, /*->10890*/
/*10820*/     OPC_CheckChild1Type, MVT::i64,
/*10822*/     OPC_RecordChild2, // #2 = $incr
/*10823*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->10873
/*10826*/       OPC_Scope, 14, /*->10842*/ // 3 children in Scope
/*10828*/         OPC_CheckPredicate, 71, // Predicate_atomic_swap_8
/*10830*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*10832*/         OPC_EmitMergeInputChains1_0,
/*10833*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*10842*/       /*Scope*/ 14, /*->10857*/
/*10843*/         OPC_CheckPredicate, 72, // Predicate_atomic_swap_16
/*10845*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*10847*/         OPC_EmitMergeInputChains1_0,
/*10848*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*10857*/       /*Scope*/ 14, /*->10872*/
/*10858*/         OPC_CheckPredicate, 73, // Predicate_atomic_swap_32
/*10860*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*10862*/         OPC_EmitMergeInputChains1_0,
/*10863*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*10872*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->10889
/*10875*/       OPC_CheckPredicate, 74, // Predicate_atomic_swap_64
/*10877*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*10879*/       OPC_EmitMergeInputChains1_0,
/*10880*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_swap:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_SWAP_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*10890*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 29|128,1/*157*/,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->11052
/*10895*/   OPC_RecordMemRef,
/*10896*/   OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*10897*/   OPC_RecordChild1, // #1 = $ptr
/*10898*/   OPC_Scope, 75, /*->10975*/ // 2 children in Scope
/*10900*/     OPC_CheckChild1Type, MVT::i32,
/*10902*/     OPC_RecordChild2, // #2 = $cmp
/*10903*/     OPC_RecordChild3, // #3 = $swap
/*10904*/     OPC_SwitchType /*2 cases */, 50,  MVT::i32,// ->10957
/*10907*/       OPC_Scope, 15, /*->10924*/ // 3 children in Scope
/*10909*/         OPC_CheckPredicate, 75, // Predicate_atomic_cmp_swap_8
/*10911*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*10913*/         OPC_EmitMergeInputChains1_0,
/*10914*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*10924*/       /*Scope*/ 15, /*->10940*/
/*10925*/         OPC_CheckPredicate, 76, // Predicate_atomic_cmp_swap_16
/*10927*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*10929*/         OPC_EmitMergeInputChains1_0,
/*10930*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*10940*/       /*Scope*/ 15, /*->10956*/
/*10941*/         OPC_CheckPredicate, 77, // Predicate_atomic_cmp_swap_32
/*10943*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64())
/*10945*/         OPC_EmitMergeInputChains1_0,
/*10946*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*10956*/       0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->10974
/*10959*/       OPC_CheckPredicate, 78, // Predicate_atomic_cmp_swap_64
/*10961*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*10963*/       OPC_EmitMergeInputChains1_0,
/*10964*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: (atomic_cmp_swap:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_CMP_SWAP_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)
              0, // EndSwitchType
/*10975*/   /*Scope*/ 75, /*->11051*/
/*10976*/     OPC_CheckChild1Type, MVT::i64,
/*10978*/     OPC_RecordChild2, // #2 = $cmp
/*10979*/     OPC_RecordChild3, // #3 = $swap
/*10980*/     OPC_SwitchType /*2 cases */, 50,  MVT::i32,// ->11033
/*10983*/       OPC_Scope, 15, /*->11000*/ // 3 children in Scope
/*10985*/         OPC_CheckPredicate, 75, // Predicate_atomic_cmp_swap_8
/*10987*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*10989*/         OPC_EmitMergeInputChains1_0,
/*10990*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*11000*/       /*Scope*/ 15, /*->11016*/
/*11001*/         OPC_CheckPredicate, 76, // Predicate_atomic_cmp_swap_16
/*11003*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*11005*/         OPC_EmitMergeInputChains1_0,
/*11006*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*11016*/       /*Scope*/ 15, /*->11032*/
/*11017*/         OPC_CheckPredicate, 77, // Predicate_atomic_cmp_swap_32
/*11019*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*11021*/         OPC_EmitMergeInputChains1_0,
/*11022*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*11032*/       0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->11050
/*11035*/       OPC_CheckPredicate, 78, // Predicate_atomic_cmp_swap_64
/*11037*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*11039*/       OPC_EmitMergeInputChains1_0,
/*11040*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: (atomic_cmp_swap:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_CMP_SWAP_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)
              0, // EndSwitchType
/*11051*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::SUB),// ->11081
/*11055*/   OPC_RecordChild0, // #0 = $rs
/*11056*/   OPC_RecordChild1, // #1 = $rt
/*11057*/   OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->11069
/*11060*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SUBu), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sub:i32 CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
              // Dst: (SUBu:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
            /*SwitchType*/ 9,  MVT::i64,// ->11080
/*11071*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DSUBu), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sub:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt) - Complexity = 3
              // Dst: (DSUBu:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::BR),// ->11116
/*11084*/   OPC_RecordNode,   // #0 = 'br' chained node
/*11085*/   OPC_RecordChild1, // #1 = $target
/*11086*/   OPC_MoveChild, 1,
/*11088*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*11091*/   OPC_MoveParent,
/*11092*/   OPC_Scope, 10, /*->11104*/ // 2 children in Scope
/*11094*/     OPC_CheckPatternPredicate, 19, // (TM.getRelocationModel() == Reloc::Static)
/*11096*/     OPC_EmitMergeInputChains1_0,
/*11097*/     OPC_MorphNodeTo, TARGET_VAL(Mips::J), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$target) - Complexity = 3
              // Dst: (J (bb:Other):$target)
/*11104*/   /*Scope*/ 10, /*->11115*/
/*11105*/     OPC_CheckPatternPredicate, 20, // (TM.getRelocationModel() == Reloc::PIC_)
/*11107*/     OPC_EmitMergeInputChains1_0,
/*11108*/     OPC_MorphNodeTo, TARGET_VAL(Mips::B), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$imm16) - Complexity = 3
              // Dst: (B (bb:Other):$imm16)
/*11115*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::BRIND),// ->11145
/*11119*/   OPC_RecordNode,   // #0 = 'brind' chained node
/*11120*/   OPC_RecordChild1, // #1 = $rs
/*11121*/   OPC_Scope, 10, /*->11133*/ // 2 children in Scope
/*11123*/     OPC_CheckChild1Type, MVT::i32,
/*11125*/     OPC_EmitMergeInputChains1_0,
/*11126*/     OPC_MorphNodeTo, TARGET_VAL(Mips::JR), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (brind CPURegs:i32:$rs) - Complexity = 3
              // Dst: (JR CPURegs:i32:$rs)
/*11133*/   /*Scope*/ 10, /*->11144*/
/*11134*/     OPC_CheckChild1Type, MVT::i64,
/*11136*/     OPC_EmitMergeInputChains1_0,
/*11137*/     OPC_MorphNodeTo, TARGET_VAL(Mips::JR64), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (brind CPU64Regs:i64:$rs) - Complexity = 3
              // Dst: (JR64 CPU64Regs:i64:$rs)
/*11144*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 13,  TARGET_VAL(MipsISD::Ret),// ->11161
/*11148*/   OPC_RecordNode,   // #0 = 'MipsRet' chained node
/*11149*/   OPC_CaptureGlueInput,
/*11150*/   OPC_RecordChild1, // #1 = $target
/*11151*/   OPC_CheckChild1Type, MVT::i32,
/*11153*/   OPC_EmitMergeInputChains1_0,
/*11154*/   OPC_MorphNodeTo, TARGET_VAL(Mips::RET), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (MipsRet CPURegs:i32:$target) - Complexity = 3
            // Dst: (RET CPURegs:i32:$target)
          /*SwitchOpcode*/ 29,  TARGET_VAL(MipsISD::DivRem),// ->11193
/*11164*/   OPC_RecordChild0, // #0 = $rs
/*11165*/   OPC_Scope, 12, /*->11179*/ // 2 children in Scope
/*11167*/     OPC_CheckChild0Type, MVT::i32,
/*11169*/     OPC_RecordChild1, // #1 = $rt
/*11170*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SDIV), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRem CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
              // Dst: (SDIV:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*11179*/   /*Scope*/ 12, /*->11192*/
/*11180*/     OPC_CheckChild0Type, MVT::i64,
/*11182*/     OPC_RecordChild1, // #1 = $rt
/*11183*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DSDIV), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRem CPU64Regs:i64:$rs, CPU64Regs:i64:$rt) - Complexity = 3
              // Dst: (DSDIV:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*11192*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 29,  TARGET_VAL(MipsISD::DivRemU),// ->11225
/*11196*/   OPC_RecordChild0, // #0 = $rs
/*11197*/   OPC_Scope, 12, /*->11211*/ // 2 children in Scope
/*11199*/     OPC_CheckChild0Type, MVT::i32,
/*11201*/     OPC_RecordChild1, // #1 = $rt
/*11202*/     OPC_MorphNodeTo, TARGET_VAL(Mips::UDIV), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRemU CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
              // Dst: (UDIV:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*11211*/   /*Scope*/ 12, /*->11224*/
/*11212*/     OPC_CheckChild0Type, MVT::i64,
/*11214*/     OPC_RecordChild1, // #1 = $rt
/*11215*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DUDIV), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRemU CPU64Regs:i64:$rs, CPU64Regs:i64:$rt) - Complexity = 3
              // Dst: (DUDIV:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*11224*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 77,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->11305
/*11228*/   OPC_RecordChild0, // #0 = $rt
/*11229*/   OPC_MoveChild, 1,
/*11231*/   OPC_Scope, 29, /*->11262*/ // 3 children in Scope
/*11233*/     OPC_CheckValueType, MVT::i8,
/*11235*/     OPC_MoveParent,
/*11236*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->11249
/*11239*/       OPC_CheckPatternPredicate, 21, // (Subtarget.hasSEInReg())
/*11241*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEB), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 CPURegs:i32:$rt, i8:Other) - Complexity = 3
                // Dst: (SEB:i32 CPURegs:i32:$rt)
              /*SwitchType*/ 10,  MVT::i64,// ->11261
/*11251*/       OPC_CheckPatternPredicate, 21, // (Subtarget.hasSEInReg())
/*11253*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEB64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 CPU64Regs:i64:$rt, i8:Other) - Complexity = 3
                // Dst: (SEB64:i64 CPU64Regs:i64:$rt)
              0, // EndSwitchType
/*11262*/   /*Scope*/ 29, /*->11292*/
/*11263*/     OPC_CheckValueType, MVT::i16,
/*11265*/     OPC_MoveParent,
/*11266*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->11279
/*11269*/       OPC_CheckPatternPredicate, 21, // (Subtarget.hasSEInReg())
/*11271*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEH), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 CPURegs:i32:$rt, i16:Other) - Complexity = 3
                // Dst: (SEH:i32 CPURegs:i32:$rt)
              /*SwitchType*/ 10,  MVT::i64,// ->11291
/*11281*/       OPC_CheckPatternPredicate, 21, // (Subtarget.hasSEInReg())
/*11283*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEH64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 CPU64Regs:i64:$rt, i16:Other) - Complexity = 3
                // Dst: (SEH64:i64 CPU64Regs:i64:$rt)
              0, // EndSwitchType
/*11292*/   /*Scope*/ 11, /*->11304*/
/*11293*/     OPC_CheckValueType, MVT::i32,
/*11295*/     OPC_MoveParent,
/*11296*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_64), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i64 CPU64Regs:i64:$src, i32:Other) - Complexity = 3
              // Dst: (SLL64_64:i64 CPU64Regs:i64:$src)
/*11304*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 20,  TARGET_VAL(MipsISD::MAdd),// ->11328
/*11308*/   OPC_CaptureGlueInput,
/*11309*/   OPC_RecordChild0, // #0 = $rs
/*11310*/   OPC_RecordChild1, // #1 = $rt
/*11311*/   OPC_RecordChild2, // #2 = physreg input LO
/*11312*/   OPC_RecordChild3, // #3 = physreg input HI
/*11313*/   OPC_EmitCopyToReg, 2, Mips::LO,
/*11316*/   OPC_EmitCopyToReg, 3, Mips::HI,
/*11319*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MADD), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsMAdd CPURegs:i32:$rs, CPURegs:i32:$rt, LO:i32, HI:i32) - Complexity = 3
            // Dst: (MADD:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 20,  TARGET_VAL(MipsISD::MAddu),// ->11351
/*11331*/   OPC_CaptureGlueInput,
/*11332*/   OPC_RecordChild0, // #0 = $rs
/*11333*/   OPC_RecordChild1, // #1 = $rt
/*11334*/   OPC_RecordChild2, // #2 = physreg input LO
/*11335*/   OPC_RecordChild3, // #3 = physreg input HI
/*11336*/   OPC_EmitCopyToReg, 2, Mips::LO,
/*11339*/   OPC_EmitCopyToReg, 3, Mips::HI,
/*11342*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MADDU), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsMAddu CPURegs:i32:$rs, CPURegs:i32:$rt, LO:i32, HI:i32) - Complexity = 3
            // Dst: (MADDU:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 20,  TARGET_VAL(MipsISD::MSub),// ->11374
/*11354*/   OPC_CaptureGlueInput,
/*11355*/   OPC_RecordChild0, // #0 = $rs
/*11356*/   OPC_RecordChild1, // #1 = $rt
/*11357*/   OPC_RecordChild2, // #2 = physreg input LO
/*11358*/   OPC_RecordChild3, // #3 = physreg input HI
/*11359*/   OPC_EmitCopyToReg, 2, Mips::LO,
/*11362*/   OPC_EmitCopyToReg, 3, Mips::HI,
/*11365*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsMSub CPURegs:i32:$rs, CPURegs:i32:$rt, LO:i32, HI:i32) - Complexity = 3
            // Dst: (MSUB:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 20,  TARGET_VAL(MipsISD::MSubu),// ->11397
/*11377*/   OPC_CaptureGlueInput,
/*11378*/   OPC_RecordChild0, // #0 = $rs
/*11379*/   OPC_RecordChild1, // #1 = $rt
/*11380*/   OPC_RecordChild2, // #2 = physreg input LO
/*11381*/   OPC_RecordChild3, // #3 = physreg input HI
/*11382*/   OPC_EmitCopyToReg, 2, Mips::LO,
/*11385*/   OPC_EmitCopyToReg, 3, Mips::HI,
/*11388*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MSUBU), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsMSubu CPURegs:i32:$rs, CPURegs:i32:$rt, LO:i32, HI:i32) - Complexity = 3
            // Dst: (MSUBU:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::MUL),// ->11415
/*11400*/   OPC_RecordChild0, // #0 = $rs
/*11401*/   OPC_RecordChild1, // #1 = $rt
/*11402*/   OPC_CheckType, MVT::i32,
/*11404*/   OPC_CheckPatternPredicate, 22, // (Subtarget.hasMips32())
/*11406*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MUL), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (mul:i32 CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MUL:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::SUBC),// ->11431
/*11418*/   OPC_RecordChild0, // #0 = $lhs
/*11419*/   OPC_RecordChild1, // #1 = $rhs
/*11420*/   OPC_CheckType, MVT::i32,
/*11422*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SUBu), 0|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (subc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs) - Complexity = 3
            // Dst: (SUBu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
          /*SwitchOpcode*/ 51,  TARGET_VAL(ISD::BITCAST),// ->11485
/*11434*/   OPC_RecordChild0, // #0 = $fs
/*11435*/   OPC_SwitchType /*4 cases */, 10,  MVT::i32,// ->11448
/*11438*/     OPC_CheckChild0Type, MVT::f32,
/*11440*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (MFC1:i32 FGR32:f32:$fs)
            /*SwitchType*/ 10,  MVT::i64,// ->11460
/*11450*/     OPC_CheckChild0Type, MVT::f64,
/*11452*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DMFC1), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i64 FGR64:f64:$fs) - Complexity = 3
              // Dst: (DMFC1:i64 FGR64:f64:$fs)
            /*SwitchType*/ 10,  MVT::f32,// ->11472
/*11462*/     OPC_CheckChild0Type, MVT::i32,
/*11464*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MTC1), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (bitconvert:f32 CPURegs:i32:$rt) - Complexity = 3
              // Dst: (MTC1:f32 CPURegs:i32:$rt)
            /*SwitchType*/ 10,  MVT::f64,// ->11484
/*11474*/     OPC_CheckChild0Type, MVT::i64,
/*11476*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DMTC1), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:f64 CPU64Regs:i64:$rt) - Complexity = 3
              // Dst: (DMTC1:f64 CPU64Regs:i64:$rt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::ANY_EXTEND),// ->11497
/*11488*/   OPC_RecordChild0, // #0 = $src
/*11489*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (anyext:i64 CPURegs:i32:$src) - Complexity = 3
            // Dst: (SLL64_32:i64 CPURegs:i32:$src)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::SIGN_EXTEND),// ->11509
/*11500*/   OPC_RecordChild0, // #0 = $src
/*11501*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 CPURegs:i32:$src) - Complexity = 3
            // Dst: (SLL64_32:i64 CPURegs:i32:$src)
          /*SwitchOpcode*/ 68,  TARGET_VAL(MipsISD::CMovFP_T),// ->11580
/*11512*/   OPC_CaptureGlueInput,
/*11513*/   OPC_RecordChild0, // #0 = $rs
/*11514*/   OPC_RecordChild1, // #1 = $F
/*11515*/   OPC_SwitchType /*4 cases */, 9,  MVT::i32,// ->11527
/*11518*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_I), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_T:i32 CPURegs:i32:$rs, CPURegs:i32:$F) - Complexity = 3
              // Dst: (MOVT_I:i32 CPURegs:i32:$rs, CPURegs:i32:$F)
            /*SwitchType*/ 11,  MVT::i64,// ->11540
/*11529*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*11531*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_I64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_T:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F) - Complexity = 3
              // Dst: (MOVT_I64:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F)
            /*SwitchType*/ 9,  MVT::f32,// ->11551
/*11542*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_S), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_T:f32 FGR32:f32:$fs, FGR32:f32:$F) - Complexity = 3
              // Dst: (MOVT_S:f32 FGR32:f32:$fs, FGR32:f32:$F)
            /*SwitchType*/ 26,  MVT::f64,// ->11579
/*11553*/     OPC_Scope, 11, /*->11566*/ // 2 children in Scope
/*11555*/       OPC_CheckPatternPredicate, 10, // (!Subtarget.isFP64bit())
/*11557*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_D32), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_T:f64 AFGR64:f64:$fs, AFGR64:f64:$F) - Complexity = 3
                // Dst: (MOVT_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$F)
/*11566*/     /*Scope*/ 11, /*->11578*/
/*11567*/       OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*11569*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_D64), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_T:f64 FGR64:f64:$fs, FGR64:f64:$F) - Complexity = 3
                // Dst: (MOVT_D64:f64 FGR64:f64:$fs, FGR64:f64:$F)
/*11578*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 68,  TARGET_VAL(MipsISD::CMovFP_F),// ->11651
/*11583*/   OPC_CaptureGlueInput,
/*11584*/   OPC_RecordChild0, // #0 = $rs
/*11585*/   OPC_RecordChild1, // #1 = $F
/*11586*/   OPC_SwitchType /*4 cases */, 9,  MVT::i32,// ->11598
/*11589*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_I), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_F:i32 CPURegs:i32:$rs, CPURegs:i32:$F) - Complexity = 3
              // Dst: (MOVF_I:i32 CPURegs:i32:$rs, CPURegs:i32:$F)
            /*SwitchType*/ 11,  MVT::i64,// ->11611
/*11600*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasMips64())
/*11602*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_I64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_F:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F) - Complexity = 3
              // Dst: (MOVF_I64:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F)
            /*SwitchType*/ 9,  MVT::f32,// ->11622
/*11613*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_S), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_F:f32 FGR32:f32:$fs, FGR32:f32:$F) - Complexity = 3
              // Dst: (MOVF_S:f32 FGR32:f32:$fs, FGR32:f32:$F)
            /*SwitchType*/ 26,  MVT::f64,// ->11650
/*11624*/     OPC_Scope, 11, /*->11637*/ // 2 children in Scope
/*11626*/       OPC_CheckPatternPredicate, 10, // (!Subtarget.isFP64bit())
/*11628*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_D32), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_F:f64 AFGR64:f64:$fs, AFGR64:f64:$F) - Complexity = 3
                // Dst: (MOVF_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$F)
/*11637*/     /*Scope*/ 11, /*->11649*/
/*11638*/       OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*11640*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_D64), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_F:f64 FGR64:f64:$fs, FGR64:f64:$F) - Complexity = 3
                // Dst: (MOVF_D64:f64 FGR64:f64:$fs, FGR64:f64:$F)
/*11649*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 43,  TARGET_VAL(ISD::BSWAP),// ->11697
/*11654*/   OPC_RecordChild0, // #0 = $rt
/*11655*/   OPC_SwitchType /*2 cases */, 20,  MVT::i32,// ->11678
/*11658*/     OPC_EmitNode, TARGET_VAL(Mips::WSBH), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1 
/*11666*/     OPC_EmitInteger, MVT::i32, 16, 
/*11669*/     OPC_MorphNodeTo, TARGET_VAL(Mips::ROTR), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (bswap:i32 CPURegs:i32:$rt) - Complexity = 3
              // Dst: (ROTR:i32 (WSBH:i32 CPURegs:i32:$rt), 16:i32)
            /*SwitchType*/ 16,  MVT::i64,// ->11696
/*11680*/     OPC_EmitNode, TARGET_VAL(Mips::DSBH), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0,  // Results = #1 
/*11688*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DSHD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (bswap:i64 CPU64Regs:i64:$rt) - Complexity = 3
              // Dst: (DSHD:i64 (DSBH:i64 CPU64Regs:i64:$rt))
            0, // EndSwitchType
          /*SwitchOpcode*/ 113,  TARGET_VAL(ISD::FP_TO_SINT),// ->11813
/*11700*/   OPC_RecordChild0, // #0 = $src
/*11701*/   OPC_Scope, 42, /*->11745*/ // 2 children in Scope
/*11703*/     OPC_CheckChild0Type, MVT::f32,
/*11705*/     OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->11724
/*11708*/       OPC_EmitNode, TARGET_VAL(Mips::TRUNC_W_S), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1 
/*11716*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (fp_to_sint:i32 FGR32:f32:$src) - Complexity = 3
                // Dst: (MFC1:i32 (TRUNC_W_S:f32 FGR32:f32:$src))
              /*SwitchType*/ 18,  MVT::i64,// ->11744
/*11726*/       OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*11728*/       OPC_EmitNode, TARGET_VAL(Mips::TRUNC_L_S), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1 
/*11736*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DMFC1), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (fp_to_sint:i64 FGR32:f32:$src) - Complexity = 3
                // Dst: (DMFC1:i64 (TRUNC_L_S:f64 FGR32:f32:$src))
              0, // EndSwitchType
/*11745*/   /*Scope*/ 66, /*->11812*/
/*11746*/     OPC_CheckChild0Type, MVT::f64,
/*11748*/     OPC_SwitchType /*2 cases */, 40,  MVT::i32,// ->11791
/*11751*/       OPC_Scope, 18, /*->11771*/ // 2 children in Scope
/*11753*/         OPC_CheckPatternPredicate, 10, // (!Subtarget.isFP64bit())
/*11755*/         OPC_EmitNode, TARGET_VAL(Mips::TRUNC_W_D32), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1 
/*11763*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (fp_to_sint:i32 AFGR64:f64:$src) - Complexity = 3
                  // Dst: (MFC1:i32 (TRUNC_W_D32:f32 AFGR64:f64:$src))
/*11771*/       /*Scope*/ 18, /*->11790*/
/*11772*/         OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*11774*/         OPC_EmitNode, TARGET_VAL(Mips::TRUNC_W_D64), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1 
/*11782*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (fp_to_sint:i32 FGR64:f64:$src) - Complexity = 3
                  // Dst: (MFC1:i32 (TRUNC_W_D64:f32 FGR64:f64:$src))
/*11790*/       0, /*End of Scope*/
              /*SwitchType*/ 18,  MVT::i64,// ->11811
/*11793*/       OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*11795*/       OPC_EmitNode, TARGET_VAL(Mips::TRUNC_L_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1 
/*11803*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DMFC1), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (fp_to_sint:i64 FGR64:f64:$src) - Complexity = 3
                // Dst: (DMFC1:i64 (TRUNC_L_D64:f64 FGR64:f64:$src))
              0, // EndSwitchType
/*11812*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TRUNCATE),// ->11843
/*11816*/   OPC_RecordChild0, // #0 = $src
/*11817*/   OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64())
/*11819*/   OPC_EmitInteger, MVT::i32, Mips::sub_32,
/*11822*/   OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*11831*/   OPC_EmitInteger, MVT::i32, 0, 
/*11834*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
            // Src: (trunc:i32 CPU64Regs:i64:$src) - Complexity = 3
            // Dst: (SLL:i32 (EXTRACT_SUBREG:i32 CPU64Regs:i64:$src, sub_32:i32), 0:i32)
          /*SwitchOpcode*/ 21,  TARGET_VAL(ISD::ZERO_EXTEND),// ->11867
/*11846*/   OPC_RecordChild0, // #0 = $src
/*11847*/   OPC_EmitNode, TARGET_VAL(Mips::DSLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0,  // Results = #1 
/*11855*/   OPC_EmitInteger, MVT::i32, 32, 
/*11858*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DSRL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
            // Src: (zext:i64 CPURegs:i32:$src) - Complexity = 3
            // Dst: (DSRL:i64 (DSLL64_32:i64 CPURegs:i32:$src), 32:i32)
          /*SwitchOpcode*/ 32|128,1/*160*/,  TARGET_VAL(ISD::FADD),// ->12031
/*11871*/   OPC_Scope, 55, /*->11928*/ // 2 children in Scope
/*11873*/     OPC_MoveChild, 0,
/*11875*/     OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*11878*/     OPC_RecordChild0, // #0 = $fs
/*11879*/     OPC_RecordChild1, // #1 = $ft
/*11880*/     OPC_MoveParent,
/*11881*/     OPC_RecordChild1, // #2 = $fr
/*11882*/     OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->11897
/*11885*/       OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips32r2())
/*11887*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_S), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                // Src: (fadd:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr) - Complexity = 6
                // Dst: (MADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
              /*SwitchType*/ 28,  MVT::f64,// ->11927
/*11899*/       OPC_Scope, 12, /*->11913*/ // 2 children in Scope
/*11901*/         OPC_CheckPatternPredicate, 17, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit())
/*11903*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D32), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fadd:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr) - Complexity = 6
                  // Dst: (MADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*11913*/       /*Scope*/ 12, /*->11926*/
/*11914*/         OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit())
/*11916*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fadd:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr) - Complexity = 6
                  // Dst: (MADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*11926*/       0, /*End of Scope*/
              0, // EndSwitchType
/*11928*/   /*Scope*/ 101, /*->12030*/
/*11929*/     OPC_RecordChild0, // #0 = $fr
/*11930*/     OPC_Scope, 54, /*->11986*/ // 2 children in Scope
/*11932*/       OPC_MoveChild, 1,
/*11934*/       OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*11937*/       OPC_RecordChild0, // #1 = $fs
/*11938*/       OPC_RecordChild1, // #2 = $ft
/*11939*/       OPC_MoveParent,
/*11940*/       OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->11955
/*11943*/         OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips32r2())
/*11945*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fadd:f32 FGR32:f32:$fr, (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft)) - Complexity = 6
                  // Dst: (MADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                /*SwitchType*/ 28,  MVT::f64,// ->11985
/*11957*/         OPC_Scope, 12, /*->11971*/ // 2 children in Scope
/*11959*/           OPC_CheckPatternPredicate, 17, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit())
/*11961*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fadd:f64 AFGR64:f64:$fr, (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)) - Complexity = 6
                    // Dst: (MADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*11971*/         /*Scope*/ 12, /*->11984*/
/*11972*/           OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit())
/*11974*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fadd:f64 FGR64:f64:$fr, (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft)) - Complexity = 6
                    // Dst: (MADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*11984*/         0, /*End of Scope*/
                0, // EndSwitchType
/*11986*/     /*Scope*/ 42, /*->12029*/
/*11987*/       OPC_RecordChild1, // #1 = $ft
/*11988*/       OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->12000
/*11991*/         OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_S), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fadd:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
                  // Dst: (FADD_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
                /*SwitchType*/ 26,  MVT::f64,// ->12028
/*12002*/         OPC_Scope, 11, /*->12015*/ // 2 children in Scope
/*12004*/           OPC_CheckPatternPredicate, 10, // (!Subtarget.isFP64bit())
/*12006*/           OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_D32), 0,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                    // Src: (fadd:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                    // Dst: (FADD_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*12015*/         /*Scope*/ 11, /*->12027*/
/*12016*/           OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*12018*/           OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_D64), 0,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                    // Src: (fadd:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                    // Dst: (FADD_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*12027*/         0, /*End of Scope*/
                0, // EndSwitchType
/*12029*/     0, /*End of Scope*/
/*12030*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 84,  TARGET_VAL(ISD::ConstantFP),// ->12118
/*12034*/   OPC_Scope, 32, /*->12068*/ // 2 children in Scope
/*12036*/     OPC_CheckPredicate, 45, // Predicate_fpimm0
/*12038*/     OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->12052
/*12041*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*12044*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fpimm:f32)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (MTC1:f32 ZERO:i32)
              /*SwitchType*/ 13,  MVT::f64,// ->12067
/*12054*/       OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*12056*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*12059*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fpimm:f64)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (DMTC1:f64 ZERO_64:i64)
              0, // EndSwitchType
/*12068*/   /*Scope*/ 48, /*->12117*/
/*12069*/     OPC_CheckPredicate, 79, // Predicate_fpimm0neg
/*12071*/     OPC_SwitchType /*2 cases */, 19,  MVT::f32,// ->12093
/*12074*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*12077*/       OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1 
/*12085*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_S), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                // Src: (fpimm:f32)<<P:Predicate_fpimm0neg>> - Complexity = 4
                // Dst: (FNEG_S:f32 (MTC1:f32 ZERO:i32))
              /*SwitchType*/ 21,  MVT::f64,// ->12116
/*12095*/       OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*12097*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*12100*/       OPC_EmitNode, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1 
/*12108*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
                // Src: (fpimm:f64)<<P:Predicate_fpimm0neg>> - Complexity = 4
                // Dst: (FNEG_D64:f64 (DMTC1:f64 ZERO_64:i64))
              0, // EndSwitchType
/*12117*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FABS),// ->12160
/*12121*/   OPC_RecordChild0, // #0 = $fs
/*12122*/   OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->12135
/*12125*/     OPC_CheckPatternPredicate, 23, // (TM.Options.NoNaNsFPMath)
/*12127*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FABS_S:f32 FGR32:f32:$fs)
            /*SwitchType*/ 22,  MVT::f64,// ->12159
/*12137*/     OPC_CheckPatternPredicate, 23, // (TM.Options.NoNaNsFPMath)
/*12139*/     OPC_Scope, 8, /*->12149*/ // 2 children in Scope
/*12141*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 AFGR64:f64:$fs) - Complexity = 3
                // Dst: (FABS_D32:f64 AFGR64:f64:$fs)
/*12149*/     /*Scope*/ 8, /*->12158*/
/*12150*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 FGR64:f64:$fs) - Complexity = 3
                // Dst: (FABS_D64:f64 FGR64:f64:$fs)
/*12158*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FNEG),// ->12202
/*12163*/   OPC_RecordChild0, // #0 = $fs
/*12164*/   OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->12177
/*12167*/     OPC_CheckPatternPredicate, 23, // (TM.Options.NoNaNsFPMath)
/*12169*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fneg:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FNEG_S:f32 FGR32:f32:$fs)
            /*SwitchType*/ 22,  MVT::f64,// ->12201
/*12179*/     OPC_CheckPatternPredicate, 23, // (TM.Options.NoNaNsFPMath)
/*12181*/     OPC_Scope, 8, /*->12191*/ // 2 children in Scope
/*12183*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 AFGR64:f64:$fs) - Complexity = 3
                // Dst: (FNEG_D32:f64 AFGR64:f64:$fs)
/*12191*/     /*Scope*/ 8, /*->12200*/
/*12192*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 FGR64:f64:$fs) - Complexity = 3
                // Dst: (FNEG_D64:f64 FGR64:f64:$fs)
/*12200*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FSQRT),// ->12244
/*12205*/   OPC_RecordChild0, // #0 = $fs
/*12206*/   OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->12217
/*12209*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FSQRT_S:f32 FGR32:f32:$fs)
            /*SwitchType*/ 24,  MVT::f64,// ->12243
/*12219*/     OPC_Scope, 10, /*->12231*/ // 2 children in Scope
/*12221*/       OPC_CheckPatternPredicate, 10, // (!Subtarget.isFP64bit())
/*12223*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 AFGR64:f64:$fs) - Complexity = 3
                // Dst: (FSQRT_D32:f64 AFGR64:f64:$fs)
/*12231*/     /*Scope*/ 10, /*->12242*/
/*12232*/       OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*12234*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 FGR64:f64:$fs) - Complexity = 3
                // Dst: (FSQRT_D64:f64 FGR64:f64:$fs)
/*12242*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 43,  TARGET_VAL(ISD::FDIV),// ->12290
/*12247*/   OPC_RecordChild0, // #0 = $fs
/*12248*/   OPC_RecordChild1, // #1 = $ft
/*12249*/   OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->12261
/*12252*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_S), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
              // Dst: (FDIV_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
            /*SwitchType*/ 26,  MVT::f64,// ->12289
/*12263*/     OPC_Scope, 11, /*->12276*/ // 2 children in Scope
/*12265*/       OPC_CheckPatternPredicate, 10, // (!Subtarget.isFP64bit())
/*12267*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_D32), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                // Dst: (FDIV_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*12276*/     /*Scope*/ 11, /*->12288*/
/*12277*/       OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*12279*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_D64), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                // Dst: (FDIV_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*12288*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 43,  TARGET_VAL(ISD::FMUL),// ->12336
/*12293*/   OPC_RecordChild0, // #0 = $fs
/*12294*/   OPC_RecordChild1, // #1 = $ft
/*12295*/   OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->12307
/*12298*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_S), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
              // Dst: (FMUL_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
            /*SwitchType*/ 26,  MVT::f64,// ->12335
/*12309*/     OPC_Scope, 11, /*->12322*/ // 2 children in Scope
/*12311*/       OPC_CheckPatternPredicate, 10, // (!Subtarget.isFP64bit())
/*12313*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_D32), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                // Dst: (FMUL_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*12322*/     /*Scope*/ 11, /*->12334*/
/*12323*/       OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*12325*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_D64), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                // Dst: (FMUL_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*12334*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 11,  TARGET_VAL(MipsISD::BuildPairF64),// ->12350
/*12339*/   OPC_RecordChild0, // #0 = $lo
/*12340*/   OPC_RecordChild1, // #1 = $hi
/*12341*/   OPC_MorphNodeTo, TARGET_VAL(Mips::BuildPairF64), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (MipsBuildPairF64:f64 CPURegs:i32:$lo, CPURegs:i32:$hi) - Complexity = 3
            // Dst: (BuildPairF64:f64 CPURegs:i32:$lo, CPURegs:i32:$hi)
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FP_ROUND),// ->12378
/*12353*/   OPC_RecordChild0, // #0 = $src
/*12354*/   OPC_Scope, 10, /*->12366*/ // 2 children in Scope
/*12356*/     OPC_CheckPatternPredicate, 10, // (!Subtarget.isFP64bit())
/*12358*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_D32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fround:f32 AFGR64:f64:$src) - Complexity = 3
              // Dst: (CVT_S_D32:f32 AFGR64:f64:$src)
/*12366*/   /*Scope*/ 10, /*->12377*/
/*12367*/     OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*12369*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_D64), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fround:f32 FGR64:f64:$src) - Complexity = 3
              // Dst: (CVT_S_D64:f32 FGR64:f64:$src)
/*12377*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FP_EXTEND),// ->12406
/*12381*/   OPC_RecordChild0, // #0 = $src
/*12382*/   OPC_Scope, 10, /*->12394*/ // 2 children in Scope
/*12384*/     OPC_CheckPatternPredicate, 10, // (!Subtarget.isFP64bit())
/*12386*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D32_S), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 FGR32:f32:$src) - Complexity = 3
              // Dst: (CVT_D32_S:f64 FGR32:f32:$src)
/*12394*/   /*Scope*/ 10, /*->12405*/
/*12395*/     OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*12397*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D64_S), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 FGR32:f32:$src) - Complexity = 3
              // Dst: (CVT_D64_S:f64 FGR32:f32:$src)
/*12405*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 113,  TARGET_VAL(ISD::SINT_TO_FP),// ->12522
/*12409*/   OPC_RecordChild0, // #0 = $src
/*12410*/   OPC_Scope, 64, /*->12476*/ // 2 children in Scope
/*12412*/     OPC_CheckChild0Type, MVT::i32,
/*12414*/     OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->12433
/*12417*/       OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1 
/*12425*/       OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_W), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                // Src: (sint_to_fp:f32 CPURegs:i32:$src) - Complexity = 3
                // Dst: (CVT_S_W:f32 (MTC1:f32 CPURegs:i32:$src))
              /*SwitchType*/ 40,  MVT::f64,// ->12475
/*12435*/       OPC_Scope, 18, /*->12455*/ // 2 children in Scope
/*12437*/         OPC_CheckPatternPredicate, 10, // (!Subtarget.isFP64bit())
/*12439*/         OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1 
/*12447*/         OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D32_W), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
                  // Src: (sint_to_fp:f64 CPURegs:i32:$src) - Complexity = 3
                  // Dst: (CVT_D32_W:f64 (MTC1:f32 CPURegs:i32:$src))
/*12455*/       /*Scope*/ 18, /*->12474*/
/*12456*/         OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*12458*/         OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1 
/*12466*/         OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D64_W), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
                  // Src: (sint_to_fp:f64 CPURegs:i32:$src) - Complexity = 3
                  // Dst: (CVT_D64_W:f64 (MTC1:f32 CPURegs:i32:$src))
/*12474*/       0, /*End of Scope*/
              0, // EndSwitchType
/*12476*/   /*Scope*/ 44, /*->12521*/
/*12477*/     OPC_CheckChild0Type, MVT::i64,
/*12479*/     OPC_SwitchType /*2 cases */, 18,  MVT::f32,// ->12500
/*12482*/       OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*12484*/       OPC_EmitNode, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1 
/*12492*/       OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_L), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                // Src: (sint_to_fp:f32 CPU64Regs:i64:$src) - Complexity = 3
                // Dst: (CVT_S_L:f32 (DMTC1:f64 CPU64Regs:i64:$src))
              /*SwitchType*/ 18,  MVT::f64,// ->12520
/*12502*/       OPC_CheckPatternPredicate, 11, // (Subtarget.isFP64bit())
/*12504*/       OPC_EmitNode, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1 
/*12512*/       OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D64_L), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
                // Src: (sint_to_fp:f64 CPU64Regs:i64:$src) - Complexity = 3
                // Dst: (CVT_D64_L:f64 (DMTC1:f64 CPU64Regs:i64:$src))
              0, // EndSwitchType
/*12521*/   0, /*End of Scope*/
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 12524 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 185
  // #OPC_RecordNode                     = 22
  // #OPC_RecordChild                    = 398
  // #OPC_RecordMemRef                   = 10
  // #OPC_CaptureGlueInput               = 11
  // #OPC_MoveChild                      = 120
  // #OPC_MoveParent                     = 395
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 333
  // #OPC_CheckPredicate                 = 250
  // #OPC_CheckOpcode                    = 74
  // #OPC_SwitchOpcode                   = 13
  // #OPC_CheckType                      = 272
  // #OPC_SwitchType                     = 100
  // #OPC_CheckChildType                 = 61
  // #OPC_CheckInteger                   = 12
  // #OPC_CheckCondCode                  = 139
  // #OPC_CheckValueType                 = 3
  // #OPC_CheckComplexPat                = 103
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 21
  // #OPC_EmitStringInteger              = 1
  // #OPC_EmitRegister                   = 45
  // #OPC_EmitConvertToTarget            = 66
  // #OPC_EmitMergeInputChains           = 227
  // #OPC_EmitCopyToReg                  = 8
  // #OPC_EmitNode                       = 125
  // #OPC_EmitNodeXForm                  = 9
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 4
  // #OPC_MorphNodeTo                    = 558

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (!Subtarget.isABI_N64());
  case 1: return (Subtarget.isABI_N64());
  case 2: return (Subtarget.hasMips32r2Or64());
  case 3: return (Subtarget.hasMips32r2Or64()) && (!Subtarget.isABI_N64());
  case 4: return (!Subtarget.isABI_N64()) && (Subtarget.hasMips64());
  case 5: return (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64());
  case 6: return (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64());
  case 7: return (Subtarget.hasMips64()) && (!Subtarget.isABI_N64());
  case 8: return (Subtarget.hasBitCount());
  case 9: return (Subtarget.hasMips64());
  case 10: return (!Subtarget.isFP64bit());
  case 11: return (Subtarget.isFP64bit());
  case 12: return (Subtarget.hasMips32r2());
  case 13: return (Subtarget.hasMips64r2());
  case 14: return (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath);
  case 15: return (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath);
  case 16: return (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath);
  case 17: return (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit());
  case 18: return (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit());
  case 19: return (TM.getRelocationModel() == Reloc::Static);
  case 20: return (TM.getRelocationModel() == Reloc::PIC_);
  case 21: return (Subtarget.hasSEInReg());
  case 22: return (Subtarget.hasMips32());
  case 23: return (TM.Options.NoNaNsFPMath);
  }
}

bool CheckNodePredicate(SDNode *Node, unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 2: { // Predicate_store_a
    SDNode *N = Node;

  StoreSDNode *SD = cast<StoreSDNode>(N);
  return SD->getMemoryVT().getSizeInBits()/8 <= SD->getAlignment();

  }
  case 3: { // Predicate_store_u
    SDNode *N = Node;

  StoreSDNode *SD = cast<StoreSDNode>(N);
  return SD->getMemoryVT().getSizeInBits()/8 > SD->getAlignment();

  }
  case 4: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 5: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 6: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 7: { // Predicate_truncstorei16_a
    SDNode *N = Node;

  StoreSDNode *SD = cast<StoreSDNode>(N);
  return SD->getMemoryVT().getSizeInBits()/8 <= SD->getAlignment();

  }
  case 8: { // Predicate_truncstorei16_u
    SDNode *N = Node;

  StoreSDNode *SD = cast<StoreSDNode>(N);
  return SD->getMemoryVT().getSizeInBits()/8 > SD->getAlignment();

  }
  case 9: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 10: { // Predicate_truncstorei32_a
    SDNode *N = Node;

  StoreSDNode *SD = cast<StoreSDNode>(N);
  return SD->getMemoryVT().getSizeInBits()/8 <= SD->getAlignment();

  }
  case 11: { // Predicate_truncstorei32_u
    SDNode *N = Node;

  StoreSDNode *SD = cast<StoreSDNode>(N);
  return SD->getMemoryVT().getSizeInBits()/8 > SD->getAlignment();

  }
  case 12: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 13: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 14: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 15: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 16: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 17: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 18: { // Predicate_sextloadi16_a
    SDNode *N = Node;

  LoadSDNode *LD = cast<LoadSDNode>(N);
  return LD->getMemoryVT().getSizeInBits()/8 <= LD->getAlignment();

  }
  case 19: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 20: { // Predicate_zextloadi16_a
    SDNode *N = Node;

  LoadSDNode *LD = cast<LoadSDNode>(N);
  return LD->getMemoryVT().getSizeInBits()/8 <= LD->getAlignment();

  }
  case 21: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 22: { // Predicate_load_a
    SDNode *N = Node;

  LoadSDNode *LD = cast<LoadSDNode>(N);
  return LD->getMemoryVT().getSizeInBits()/8 <= LD->getAlignment();

  }
  case 23: { // Predicate_sextloadi16_u
    SDNode *N = Node;

  LoadSDNode *LD = cast<LoadSDNode>(N);
  return LD->getMemoryVT().getSizeInBits()/8 > LD->getAlignment();

  }
  case 24: { // Predicate_zextloadi16_u
    SDNode *N = Node;

  LoadSDNode *LD = cast<LoadSDNode>(N);
  return LD->getMemoryVT().getSizeInBits()/8 > LD->getAlignment();

  }
  case 25: { // Predicate_load_u
    SDNode *N = Node;

  LoadSDNode *LD = cast<LoadSDNode>(N);
  return LD->getMemoryVT().getSizeInBits()/8 > LD->getAlignment();

  }
  case 26: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 27: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 28: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 29: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 30: { // Predicate_extloadi16_a
    SDNode *N = Node;

  LoadSDNode *LD = cast<LoadSDNode>(N);
  return LD->getMemoryVT().getSizeInBits()/8 <= LD->getAlignment();

  }
  case 31: { // Predicate_extloadi16_u
    SDNode *N = Node;

  LoadSDNode *LD = cast<LoadSDNode>(N);
  return LD->getMemoryVT().getSizeInBits()/8 > LD->getAlignment();

  }
  case 32: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 33: { // Predicate_sextloadi32_a
    SDNode *N = Node;

  LoadSDNode *LD = cast<LoadSDNode>(N);
  return LD->getMemoryVT().getSizeInBits()/8 <= LD->getAlignment();

  }
  case 34: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 35: { // Predicate_zextloadi32_a
    SDNode *N = Node;

  LoadSDNode *LD = cast<LoadSDNode>(N);
  return LD->getMemoryVT().getSizeInBits()/8 <= LD->getAlignment();

  }
  case 36: { // Predicate_sextloadi32_u
    SDNode *N = Node;

  LoadSDNode *LD = cast<LoadSDNode>(N);
  return LD->getMemoryVT().getSizeInBits()/8 > LD->getAlignment();

  }
  case 37: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 38: { // Predicate_extloadi32_a
    SDNode *N = Node;

  LoadSDNode *LD = cast<LoadSDNode>(N);
  return LD->getMemoryVT().getSizeInBits()/8 <= LD->getAlignment();

  }
  case 39: { // Predicate_extloadi32_u
    SDNode *N = Node;

  LoadSDNode *LD = cast<LoadSDNode>(N);
  return LD->getMemoryVT().getSizeInBits()/8 > LD->getAlignment();

  }
  case 40: { // Predicate_zextloadi32_u
    SDNode *N = Node;

  LoadSDNode *LD = cast<LoadSDNode>(N);
  return LD->getMemoryVT().getSizeInBits()/8 > LD->getAlignment();

  }
  case 41: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  if (N->getValueType(0) == MVT::i32)
    return (uint32_t)N->getZExtValue() == (unsigned short)N->getZExtValue();
  else
    return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

  }
  case 42: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<16>(N->getSExtValue()); 
  }
  case 43: { // Predicate_immZExt5
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return Imm == (Imm & 0x1f);
  }
  case 44: { // Predicate_immZExt6
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return Imm == (Imm & 0x3f);
  }
  case 45: { // Predicate_fpimm0
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);

  return N->isExactlyValue(+0.0);

  }
  case 46: { // Predicate_immLow16Zero
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  int64_t Val = N->getSExtValue();
  return isInt<32>(Val) && !(Val & 0xffff);

  }
  case 47: { // Predicate_atomic_load_add_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 48: { // Predicate_atomic_load_add_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 49: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 50: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 51: { // Predicate_atomic_load_sub_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 52: { // Predicate_atomic_load_sub_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 53: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 54: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 55: { // Predicate_atomic_load_and_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 56: { // Predicate_atomic_load_and_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 57: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 58: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 59: { // Predicate_atomic_load_or_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 60: { // Predicate_atomic_load_or_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 61: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 62: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 63: { // Predicate_atomic_load_xor_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 64: { // Predicate_atomic_load_xor_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 65: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 66: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 67: { // Predicate_atomic_load_nand_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 68: { // Predicate_atomic_load_nand_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 69: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 70: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 71: { // Predicate_atomic_swap_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 72: { // Predicate_atomic_swap_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 73: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 74: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 75: { // Predicate_atomic_cmp_swap_8
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 76: { // Predicate_atomic_cmp_swap_16
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 77: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 78: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 79: { // Predicate_fpimm0neg
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);

  return N->isExactlyValue(-0.0);

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
    return SelectAddr(Parent, N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return getImm(N, N->getZExtValue() & 0xFFFF);

  }
  case 1: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return getImm(N, (N->getZExtValue() >> 16) & 0xFFFF);

  }
  }
}

