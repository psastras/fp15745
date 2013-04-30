	.section	__TEXT,__text,regular,pure_instructions
	.section	__TEXT,__const
	.align	3
LCPI0_0:
	.quad	0                       ## double 0.000000e+00
	.quad	4607182418800017408     ## double 1.000000e+00
	.section	__TEXT,__literal8,8byte_literals
	.align	3
LCPI0_1:
	.quad	4636737291354636288     ## double 1.000000e+02
                                        ##  (0x4059000000000000)
	.section	__TEXT,__text,regular,pure_instructions
	.globl	__Z9InitBlockPfS_S_i
	.align	4, 0x90
__Z9InitBlockPfS_S_i:                   ## @_Z9InitBlockPfS_S_i
	.cfi_startproc
## BB#0:
	subq	$56, %rsp
Ltmp1:
	.cfi_def_cfa_offset 64
	incl	_EdgeProfCounters(%rip)
	movq	%rdi, 48(%rsp)
	movq	%rsi, 40(%rsp)
	movq	%rdx, 32(%rsp)
	movl	%ecx, 28(%rsp)
	imull	%ecx, %ecx
	movl	%ecx, 24(%rsp)
	movl	$0, 20(%rsp)
	incl	_EdgeProfCounters+4(%rip)
	jmp	LBB0_1
	.align	4, 0x90
LBB0_2:                                 ##   in Loop: Header=BB0_1 Depth=1
	incl	_EdgeProfCounters+8(%rip)
	callq	_rand
	movslq	%eax, %rax
	imulq	$274877907, %rax, %rcx  ## imm = 0x10624DD3
	movq	%rcx, %rdx
	shrq	$63, %rdx
	sarq	$38, %rcx
	addl	%edx, %ecx
	imull	$1000, %ecx, %ecx       ## imm = 0x3E8
	subl	%ecx, %eax
	movq	48(%rsp), %rcx
	movslq	20(%rsp), %rdx
	cvtsi2ss	%eax, %xmm0
	cvtss2sd	%xmm0, %xmm0
	divsd	LCPI0_1(%rip), %xmm0
	cvtsd2ss	%xmm0, %xmm0
	movss	%xmm0, (%rcx,%rdx,4)
	movq	32(%rsp), %rax
	movslq	20(%rsp), %rcx
	movl	$0, (%rax,%rcx,4)
	incl	_EdgeProfCounters+16(%rip)
	incl	20(%rsp)
	incl	_EdgeProfCounters+20(%rip)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	movl	20(%rsp), %eax
	cmpl	24(%rsp), %eax
	jl	LBB0_2
## BB#3:
	incl	_EdgeProfCounters+12(%rip)
	movl	$0, 16(%rsp)
	incl	_EdgeProfCounters+24(%rip)
	leaq	LCPI0_0(%rip), %rax
	jmp	LBB0_4
	.align	4, 0x90
LBB0_8:                                 ##   in Loop: Header=BB0_4 Depth=1
	incl	_EdgeProfCounters+44(%rip)
	incl	_EdgeProfCounters+56(%rip)
	incl	16(%rsp)
	incl	_EdgeProfCounters+60(%rip)
LBB0_4:                                 ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB0_6 Depth 2
	movl	16(%rsp), %ecx
	cmpl	28(%rsp), %ecx
	jge	LBB0_9
## BB#5:                                ##   in Loop: Header=BB0_4 Depth=1
	incl	_EdgeProfCounters+28(%rip)
	movl	$0, 12(%rsp)
	incl	_EdgeProfCounters+36(%rip)
	jmp	LBB0_6
	.align	4, 0x90
LBB0_7:                                 ##   in Loop: Header=BB0_6 Depth=2
	incl	_EdgeProfCounters+40(%rip)
	movl	12(%rsp), %ecx
	movl	28(%rsp), %edx
	imull	%ecx, %edx
	movl	16(%rsp), %esi
	addl	%esi, %edx
	cmpl	%ecx, %esi
	movslq	%edx, %rcx
	sete	%dl
	movzbl	%dl, %edx
	movsd	(%rax,%rdx,8), %xmm0
	cvtsd2ss	%xmm0, %xmm0
	movq	40(%rsp), %rdx
	movss	%xmm0, (%rdx,%rcx,4)
	incl	_EdgeProfCounters+48(%rip)
	incl	12(%rsp)
	incl	_EdgeProfCounters+52(%rip)
LBB0_6:                                 ##   Parent Loop BB0_4 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	movl	12(%rsp), %ecx
	cmpl	28(%rsp), %ecx
	jge	LBB0_8
	jmp	LBB0_7
LBB0_9:
	incl	_EdgeProfCounters+32(%rip)
	addq	$56, %rsp
	ret
	.cfi_endproc

	.globl	__Z9BlockMultPfS_S_i
	.align	4, 0x90
__Z9BlockMultPfS_S_i:                   ## @_Z9BlockMultPfS_S_i
	.cfi_startproc
## BB#0:
	incl	_EdgeProfCounters+64(%rip)
	movq	%rdi, -8(%rsp)
	movq	%rsi, -16(%rsp)
	movq	%rdx, -24(%rsp)
	movl	%ecx, -28(%rsp)
	movl	$0, -32(%rsp)
	incl	_EdgeProfCounters+68(%rip)
	jmp	LBB1_1
	.align	4, 0x90
LBB1_8:                                 ##   in Loop: Header=BB1_1 Depth=1
	incl	_EdgeProfCounters+88(%rip)
	incl	_EdgeProfCounters+120(%rip)
	incl	-32(%rsp)
	incl	_EdgeProfCounters+124(%rip)
LBB1_1:                                 ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB1_3 Depth 2
                                        ##       Child Loop BB1_5 Depth 3
	movl	-32(%rsp), %eax
	cmpl	-28(%rsp), %eax
	jge	LBB1_9
## BB#2:                                ##   in Loop: Header=BB1_1 Depth=1
	incl	_EdgeProfCounters+72(%rip)
	movl	$0, -36(%rsp)
	incl	_EdgeProfCounters+80(%rip)
	jmp	LBB1_3
	.align	4, 0x90
LBB1_7:                                 ##   in Loop: Header=BB1_3 Depth=2
	incl	_EdgeProfCounters+100(%rip)
	incl	_EdgeProfCounters+112(%rip)
	incl	-36(%rsp)
	incl	_EdgeProfCounters+116(%rip)
LBB1_3:                                 ##   Parent Loop BB1_1 Depth=1
                                        ## =>  This Loop Header: Depth=2
                                        ##       Child Loop BB1_5 Depth 3
	movl	-36(%rsp), %eax
	cmpl	-28(%rsp), %eax
	jge	LBB1_8
## BB#4:                                ##   in Loop: Header=BB1_3 Depth=2
	incl	_EdgeProfCounters+84(%rip)
	movl	$0, -40(%rsp)
	incl	_EdgeProfCounters+92(%rip)
	jmp	LBB1_5
	.align	4, 0x90
LBB1_6:                                 ##   in Loop: Header=BB1_5 Depth=3
	incl	_EdgeProfCounters+96(%rip)
	movl	-28(%rsp), %ecx
	movl	-32(%rsp), %eax
	imull	%ecx, %eax
	movl	-40(%rsp), %edx
	leal	(%rax,%rdx), %esi
	movslq	%esi, %rsi
	movq	-16(%rsp), %rdi
	movss	(%rdi,%rsi,4), %xmm0
	imull	%ecx, %edx
	movl	-36(%rsp), %ecx
	addl	%ecx, %edx
	movslq	%edx, %rdx
	movq	-24(%rsp), %rsi
	mulss	(%rsi,%rdx,4), %xmm0
	addl	%ecx, %eax
	movslq	%eax, %rax
	movq	-8(%rsp), %rcx
	addss	(%rcx,%rax,4), %xmm0
	movss	%xmm0, (%rcx,%rax,4)
	incl	_EdgeProfCounters+104(%rip)
	incl	-40(%rsp)
	incl	_EdgeProfCounters+108(%rip)
LBB1_5:                                 ##   Parent Loop BB1_1 Depth=1
                                        ##     Parent Loop BB1_3 Depth=2
                                        ## =>    This Inner Loop Header: Depth=3
	movl	-40(%rsp), %eax
	cmpl	-28(%rsp), %eax
	jge	LBB1_7
	jmp	LBB1_6
LBB1_9:
	incl	_EdgeProfCounters+76(%rip)
	ret
	.cfi_endproc

	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbx
Ltmp4:
	.cfi_def_cfa_offset 16
	subq	$48, %rsp
Ltmp5:
	.cfi_def_cfa_offset 64
Ltmp6:
	.cfi_offset %rbx, -16
	movq	%rsi, %rbx
	leaq	_EdgeProfCounters(%rip), %rdx
	movl	$50, %ecx
	callq	_llvm_start_edge_profiling
	incl	_EdgeProfCounters+128(%rip)
	movl	$0, 44(%rsp)
	movl	%eax, 40(%rsp)
	movq	%rbx, 32(%rsp)
	cmpl	$3, 40(%rsp)
	jne	LBB2_15
## BB#1:
	incl	_EdgeProfCounters+132(%rip)
	movq	32(%rsp), %rax
	movq	8(%rax), %rdi
	callq	_atoi
	movl	%eax, %ebx
	movq	32(%rsp), %rax
	movq	16(%rax), %rdi
	callq	_atoi
	imull	%ebx, %eax
	movl	%eax, 4(%rsp)
	incl	_EdgeProfCounters+140(%rip)
	movslq	4(%rsp), %rdi
	imulq	%rdi, %rdi
	shlq	$2, %rdi
	callq	_malloc
	movq	%rax, 24(%rsp)
	movslq	4(%rsp), %rdi
	imulq	%rdi, %rdi
	shlq	$2, %rdi
	callq	_malloc
	movq	%rax, 16(%rsp)
	movslq	4(%rsp), %rdi
	imulq	%rdi, %rdi
	shlq	$2, %rdi
	callq	_malloc
	movq	%rax, 8(%rsp)
	cmpq	$0, 24(%rsp)
	je	LBB2_2
## BB#3:
	incl	_EdgeProfCounters+144(%rip)
	cmpq	$0, 16(%rsp)
	je	LBB2_4
## BB#5:
	incl	_EdgeProfCounters+152(%rip)
	cmpq	$0, 8(%rsp)
	je	LBB2_6
## BB#8:
	incl	_EdgeProfCounters+160(%rip)
	movl	4(%rsp), %ecx
	movq	8(%rsp), %rdx
	movq	16(%rsp), %rsi
	movq	24(%rsp), %rdi
	callq	__Z9InitBlockPfS_S_i
	movl	4(%rsp), %ecx
	movq	16(%rsp), %rdx
	movq	24(%rsp), %rsi
	movq	8(%rsp), %rdi
	callq	__Z9BlockMultPfS_S_i
	movl	$0, (%rsp)
	incl	_EdgeProfCounters+168(%rip)
	leaq	L_.str2(%rip), %rbx
	jmp	LBB2_9
	.align	4, 0x90
LBB2_13:                                ##   in Loop: Header=BB2_9 Depth=1
	incl	_EdgeProfCounters+192(%rip)
	incl	(%rsp)
	incl	_EdgeProfCounters+196(%rip)
LBB2_9:                                 ## =>This Inner Loop Header: Depth=1
	movl	4(%rsp), %eax
	imull	%eax, %eax
	cmpl	%eax, (%rsp)
	jge	LBB2_14
## BB#10:                               ##   in Loop: Header=BB2_9 Depth=1
	incl	_EdgeProfCounters+172(%rip)
	movslq	(%rsp), %rax
	movq	24(%rsp), %rcx
	movss	(%rcx,%rax,4), %xmm0
	movq	8(%rsp), %rcx
	ucomiss	(%rcx,%rax,4), %xmm0
	jne	LBB2_12
	jp	LBB2_12
	jmp	LBB2_11
LBB2_12:                                ##   in Loop: Header=BB2_9 Depth=1
	incl	_EdgeProfCounters+180(%rip)
	movslq	(%rsp), %rax
	movq	24(%rsp), %rcx
	movss	(%rcx,%rax,4), %xmm0
	movq	8(%rsp), %rcx
	cvtss2sd	%xmm0, %xmm0
	movss	(%rcx,%rax,4), %xmm1
	cvtss2sd	%xmm1, %xmm1
	movq	%rbx, %rdi
	movl	%eax, %esi
	movl	%eax, %edx
	movb	$2, %al
	callq	_printf
	incl	_EdgeProfCounters+188(%rip)
	jmp	LBB2_13
LBB2_11:                                ## %._crit_edge29
                                        ##   in Loop: Header=BB2_9 Depth=1
	incl	_EdgeProfCounters+184(%rip)
	jmp	LBB2_13
LBB2_14:
	incl	_EdgeProfCounters+176(%rip)
	leaq	L_.str3(%rip), %rdi
	xorb	%al, %al
	callq	_printf
	movq	24(%rsp), %rdi
	callq	_free
	movq	16(%rsp), %rdi
	callq	_free
	movq	8(%rsp), %rdi
	callq	_free
	xorl	%eax, %eax
	addq	$48, %rsp
	popq	%rbx
	ret
LBB2_15:
	incl	_EdgeProfCounters+136(%rip)
	movq	___stderrp@GOTPCREL(%rip), %rax
	movq	(%rax), %rdi
	leaq	L_.str(%rip), %rsi
	xorb	%al, %al
	callq	_fprintf
	movl	$1, %edi
	callq	_exit
LBB2_2:                                 ## %._crit_edge
	incl	_EdgeProfCounters+148(%rip)
	jmp	LBB2_7
LBB2_4:                                 ## %._crit_edge13
	incl	_EdgeProfCounters+156(%rip)
	jmp	LBB2_7
LBB2_6:                                 ## %._crit_edge18
	incl	_EdgeProfCounters+164(%rip)
LBB2_7:
	movq	32(%rsp), %rax
	movq	(%rax), %rdx
	movq	___stderrp@GOTPCREL(%rip), %rax
	movq	(%rax), %rdi
	leaq	L_.str1(%rip), %rsi
	xorb	%al, %al
	callq	_fprintf
	movq	24(%rsp), %rdi
	callq	_free
	movq	16(%rsp), %rdi
	callq	_free
	movq	8(%rsp), %rdi
	callq	_free
	movl	$2, %edi
	callq	_exit
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	 "usage: mmult m blk\n"

L_.str1:                                ## @.str1
	.asciz	 "%s: out of memory!\n"

L_.str2:                                ## @.str2
	.asciz	 "Error a[%d] (%g) != c[%d] (%g) \n"

L_.str3:                                ## @.str3
	.asciz	 "Done.\n"

.zerofill __DATA,__bss,_EdgeProfCounters,200,4 ## @EdgeProfCounters

.subsections_via_symbols
