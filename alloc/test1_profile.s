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
	pushq	%rbp
Ltmp7:
	.cfi_def_cfa_offset 16
	pushq	%r15
Ltmp8:
	.cfi_def_cfa_offset 24
	pushq	%r14
Ltmp9:
	.cfi_def_cfa_offset 32
	pushq	%r13
Ltmp10:
	.cfi_def_cfa_offset 40
	pushq	%r12
Ltmp11:
	.cfi_def_cfa_offset 48
	pushq	%rbx
Ltmp12:
	.cfi_def_cfa_offset 56
	pushq	%rax
Ltmp13:
	.cfi_def_cfa_offset 64
Ltmp14:
	.cfi_offset %rbx, -56
Ltmp15:
	.cfi_offset %r12, -48
Ltmp16:
	.cfi_offset %r13, -40
Ltmp17:
	.cfi_offset %r14, -32
Ltmp18:
	.cfi_offset %r15, -24
Ltmp19:
	.cfi_offset %rbp, -16
	movl	%ecx, %r14d
	movq	%rdx, %r13
	movq	%rsi, (%rsp)            ## 8-byte Spill
	movq	%rdi, %r12
	movl	%r14d, %r15d
	imull	%r15d, %r15d
	xorl	%ebx, %ebx
	xorl	%ebp, %ebp
	jmp	LBB0_1
	.align	4, 0x90
LBB0_8:                                 ##   in Loop: Header=BB0_1 Depth=1
	callq	_rand
	movslq	%eax, %rcx
	imulq	$274877907, %rcx, %rax  ## imm = 0x10624DD3
	movq	%rax, %rdx
	shrq	$63, %rdx
	sarq	$38, %rax
	addl	%edx, %eax
	imull	$1000, %eax, %eax       ## imm = 0x3E8
	subl	%eax, %ecx
	cvtsi2ss	%ecx, %xmm0
	cvtss2sd	%xmm0, %xmm0
	divsd	LCPI0_1(%rip), %xmm0
	cvtsd2ss	%xmm0, %xmm0
	movss	%xmm0, (%r12,%rbx,4)
	movl	$0, (%r13,%rbx,4)
	incq	%rbx
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	cmpl	%r15d, %ebx
	jl	LBB0_8
## BB#2:
	leaq	LCPI0_0(%rip), %rdi
	movq	(%rsp), %rsi            ## 8-byte Reload
	jmp	LBB0_3
	.align	4, 0x90
LBB0_6:                                 ##   in Loop: Header=BB0_3 Depth=1
	incl	%ebp
LBB0_3:                                 ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB0_4 Depth 2
	xorl	%edx, %edx
	cmpl	%r14d, %ebp
	movl	%ebp, %ecx
	jge	LBB0_7
	jmp	LBB0_4
	.align	4, 0x90
LBB0_5:                                 ##   in Loop: Header=BB0_4 Depth=2
	cmpl	%edx, %ebp
	sete	%al
	movzbl	%al, %eax
	movsd	(%rdi,%rax,8), %xmm0
	cvtsd2ss	%xmm0, %xmm0
	movslq	%ecx, %rax
	movss	%xmm0, (%rsi,%rax,4)
	addl	%r14d, %ecx
	incl	%edx
LBB0_4:                                 ##   Parent Loop BB0_3 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	cmpl	%r14d, %edx
	jge	LBB0_6
	jmp	LBB0_5
LBB0_7:
	addq	$8, %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	ret
	.cfi_endproc

	.globl	__Z9BlockMultPfS_S_i
	.align	4, 0x90
__Z9BlockMultPfS_S_i:                   ## @_Z9BlockMultPfS_S_i
	.cfi_startproc
## BB#0:
	pushq	%r14
Ltmp23:
	.cfi_def_cfa_offset 16
	pushq	%rbx
Ltmp24:
	.cfi_def_cfa_offset 24
Ltmp25:
	.cfi_offset %rbx, -24
Ltmp26:
	.cfi_offset %r14, -16
	movq	%rdx, %r14
	movq	%rsi, %rbx
	movq	%rdi, %r11
	xorl	%edi, %edi
	xorl	%r10d, %r10d
	jmp	LBB1_1
	.align	4, 0x90
LBB1_6:                                 ##   in Loop: Header=BB1_1 Depth=1
	addl	%ecx, %edi
	incl	%r10d
LBB1_1:                                 ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB1_2 Depth 2
                                        ##       Child Loop BB1_3 Depth 3
	cmpl	%ecx, %r10d
	movl	$0, %esi
	jge	LBB1_7
	jmp	LBB1_2
	.align	4, 0x90
LBB1_5:                                 ##   in Loop: Header=BB1_2 Depth=2
	incl	%esi
LBB1_2:                                 ##   Parent Loop BB1_1 Depth=1
                                        ## =>  This Loop Header: Depth=2
                                        ##       Child Loop BB1_3 Depth 3
	xorl	%edx, %edx
	cmpl	%ecx, %esi
	movl	%edi, %r9d
	movl	%esi, %r8d
	jge	LBB1_6
	jmp	LBB1_3
	.align	4, 0x90
LBB1_4:                                 ##   in Loop: Header=BB1_3 Depth=3
	movslq	%r9d, %rax
	movss	(%rbx,%rax,4), %xmm0
	movslq	%r8d, %rax
	mulss	(%r14,%rax,4), %xmm0
	movl	%r10d, %eax
	imull	%ecx, %eax
	addl	%esi, %eax
	movslq	%eax, %rax
	addss	(%r11,%rax,4), %xmm0
	movss	%xmm0, (%r11,%rax,4)
	addl	%ecx, %r8d
	incl	%r9d
	incl	%edx
LBB1_3:                                 ##   Parent Loop BB1_1 Depth=1
                                        ##     Parent Loop BB1_2 Depth=2
                                        ## =>    This Inner Loop Header: Depth=3
	cmpl	%ecx, %edx
	jge	LBB1_5
	jmp	LBB1_4
LBB1_7:
	popq	%rbx
	popq	%r14
	ret
	.cfi_endproc

	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp34:
	.cfi_def_cfa_offset 16
	pushq	%r15
Ltmp35:
	.cfi_def_cfa_offset 24
	pushq	%r14
Ltmp36:
	.cfi_def_cfa_offset 32
	pushq	%r13
Ltmp37:
	.cfi_def_cfa_offset 40
	pushq	%r12
Ltmp38:
	.cfi_def_cfa_offset 48
	pushq	%rbx
Ltmp39:
	.cfi_def_cfa_offset 56
	pushq	%rax
Ltmp40:
	.cfi_def_cfa_offset 64
Ltmp41:
	.cfi_offset %rbx, -56
Ltmp42:
	.cfi_offset %r12, -48
Ltmp43:
	.cfi_offset %r13, -40
Ltmp44:
	.cfi_offset %r14, -32
Ltmp45:
	.cfi_offset %r15, -24
Ltmp46:
	.cfi_offset %rbp, -16
	movq	%rsi, %rbx
	movl	%edi, %eax
	cmpl	$3, %eax
	jne	LBB2_10
## BB#1:
	movq	8(%rbx), %rax
	movq	%rax, %rdi
	callq	_atoi
	movl	%eax, %r14d
	movq	16(%rbx), %rax
	movq	%rax, %rdi
	callq	_atoi
	movl	%eax, %ebp
	imull	%r14d, %ebp
	movslq	%ebp, %r14
	imulq	%r14, %r14
	shlq	$2, %r14
	movq	%r14, %rdi
	callq	_malloc
	movq	%rax, %r15
	movq	%r14, %rdi
	callq	_malloc
	movq	%rax, %r12
	movq	%r14, %rdi
	callq	_malloc
	movq	%rax, %r14
	testq	%r15, %r15
	je	LBB2_11
## BB#2:
	testq	%r12, %r12
	je	LBB2_11
## BB#3:
	testq	%r14, %r14
	je	LBB2_11
## BB#4:
	movq	%r15, %rdi
	movq	%r12, %rsi
	movq	%r14, %rdx
	movl	%ebp, %ecx
	callq	__Z9InitBlockPfS_S_i
	movq	%r14, %rdi
	movq	%r15, %rsi
	movq	%r12, %rdx
	movl	%ebp, %ecx
	callq	__Z9BlockMultPfS_S_i
	xorl	%ebx, %ebx
	imull	%ebp, %ebp
	leaq	L_.str2(%rip), %r13
	jmp	LBB2_5
	.align	4, 0x90
LBB2_8:                                 ##   in Loop: Header=BB2_5 Depth=1
	incq	%rbx
LBB2_5:                                 ## =>This Inner Loop Header: Depth=1
	cmpl	%ebp, %ebx
	jge	LBB2_9
## BB#6:                                ##   in Loop: Header=BB2_5 Depth=1
	movss	(%r15,%rbx,4), %xmm0
	ucomiss	(%r14,%rbx,4), %xmm0
	jne	LBB2_7
	jnp	LBB2_8
LBB2_7:                                 ##   in Loop: Header=BB2_5 Depth=1
	movss	(%r15,%rbx,4), %xmm0
	cvtss2sd	%xmm0, %xmm1
	movss	(%r14,%rbx,4), %xmm0
	cvtss2sd	%xmm0, %xmm2
	movq	%r13, %rdi
	movl	%ebx, %esi
	movaps	%xmm1, %xmm0
	movl	%ebx, %edx
	movaps	%xmm2, %xmm1
	movb	$2, %al
	callq	_printf
	jmp	LBB2_8
LBB2_9:
	leaq	L_.str3(%rip), %rax
	movq	%rax, %rdi
	xorb	%al, %al
	callq	_printf
	movq	%r15, %rdi
	callq	_free
	movq	%r12, %rdi
	callq	_free
	movq	%r14, %rdi
	callq	_free
	xorl	%eax, %eax
	addq	$8, %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	ret
LBB2_10:
	movq	___stderrp@GOTPCREL(%rip), %rax
	movq	(%rax), %rcx
	leaq	L_.str(%rip), %rax
	movq	%rcx, %rdi
	movq	%rax, %rsi
	xorb	%al, %al
	callq	_fprintf
	movl	$1, %edi
	callq	_exit
LBB2_11:
	movq	(%rbx), %rdx
	movq	___stderrp@GOTPCREL(%rip), %rax
	movq	(%rax), %rcx
	leaq	L_.str1(%rip), %rax
	movq	%rcx, %rdi
	movq	%rax, %rsi
	xorb	%al, %al
	callq	_fprintf
	movq	%r15, %rdi
	callq	_free
	movq	%r12, %rdi
	callq	_free
	movq	%r14, %rdi
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


.subsections_via_symbols
