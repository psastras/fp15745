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
	movl	%ecx, %ebx
	movq	%rdx, (%rsp)            ## 8-byte Spill
	movq	%rsi, %r14
	movq	%rdi, %r13
	movl	%ebx, %r12d
	imull	%r12d, %r12d
	xorl	%r15d, %r15d
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
	movss	%xmm0, (%r13,%r15,4)
	movq	(%rsp), %rax            ## 8-byte Reload
	movl	$0, (%rax,%r15,4)
	incq	%r15
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	cmpl	%r12d, %r15d
	jl	LBB0_8
## BB#2:
	leaq	LCPI0_0(%rip), %rsi
	jmp	LBB0_3
	.align	4, 0x90
LBB0_6:                                 ##   in Loop: Header=BB0_3 Depth=1
	incl	%ebp
LBB0_3:                                 ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB0_4 Depth 2
	xorl	%ecx, %ecx
	cmpl	%ebx, %ebp
	movl	%ebp, %edx
	jge	LBB0_7
	jmp	LBB0_4
	.align	4, 0x90
LBB0_5:                                 ##   in Loop: Header=BB0_4 Depth=2
	cmpl	%ecx, %ebp
	sete	%al
	movzbl	%al, %eax
	movsd	(%rsi,%rax,8), %xmm0
	cvtsd2ss	%xmm0, %xmm0
	movslq	%edx, %rax
	movss	%xmm0, (%r14,%rax,4)
	addl	%ebx, %edx
	incl	%ecx
LBB0_4:                                 ##   Parent Loop BB0_3 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	cmpl	%ebx, %ecx
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
	pushq	%rbp
Ltmp23:
	.cfi_def_cfa_offset 16
	pushq	%rbx
Ltmp24:
	.cfi_def_cfa_offset 24
Ltmp25:
	.cfi_offset %rbx, -24
Ltmp26:
	.cfi_offset %rbp, -16
	movl	%ecx, %r8d
	movq	%rdx, %rbx
	movq	%rsi, %r11
	xorl	%ebp, %ebp
	xorl	%r10d, %r10d
	jmp	LBB1_1
	.align	4, 0x90
LBB1_6:                                 ##   in Loop: Header=BB1_1 Depth=1
	addl	%r8d, %ebp
	incl	%r10d
LBB1_1:                                 ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB1_2 Depth 2
                                        ##       Child Loop BB1_3 Depth 3
	cmpl	%r8d, %r10d
	movl	$0, %r9d
	jge	LBB1_7
	jmp	LBB1_2
	.align	4, 0x90
LBB1_5:                                 ##   in Loop: Header=BB1_2 Depth=2
	incl	%r9d
LBB1_2:                                 ##   Parent Loop BB1_1 Depth=1
                                        ## =>  This Loop Header: Depth=2
                                        ##       Child Loop BB1_3 Depth 3
	xorl	%esi, %esi
	cmpl	%r8d, %r9d
	movl	%ebp, %edx
	movl	%r9d, %ecx
	jge	LBB1_6
	jmp	LBB1_3
	.align	4, 0x90
LBB1_4:                                 ##   in Loop: Header=BB1_3 Depth=3
	movslq	%edx, %rax
	movss	(%r11,%rax,4), %xmm0
	movslq	%ecx, %rax
	mulss	(%rbx,%rax,4), %xmm0
	movl	%r10d, %eax
	imull	%r8d, %eax
	addl	%r9d, %eax
	movslq	%eax, %rax
	addss	(%rdi,%rax,4), %xmm0
	movss	%xmm0, (%rdi,%rax,4)
	addl	%r8d, %ecx
	incl	%edx
	incl	%esi
LBB1_3:                                 ##   Parent Loop BB1_1 Depth=1
                                        ##     Parent Loop BB1_2 Depth=2
                                        ## =>    This Inner Loop Header: Depth=3
	cmpl	%r8d, %esi
	jge	LBB1_5
	jmp	LBB1_4
LBB1_7:
	popq	%rbx
	popq	%rbp
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
	movq	%rsi, %r12
	movl	%edi, %eax
	cmpl	$3, %eax
	jne	LBB2_10
## BB#1:
	movq	8(%r12), %rax
	movq	%rax, %rdi
	callq	_atoi
	movl	%eax, %ebx
	movq	16(%r12), %rax
	movq	%rax, %rdi
	callq	_atoi
	movl	%eax, %ebp
	imull	%ebx, %ebp
	movslq	%ebp, %rbx
	imulq	%rbx, %rbx
	shlq	$2, %rbx
	movq	%rbx, %rdi
	callq	_malloc
	movq	%rax, %r14
	movq	%rbx, %rdi
	callq	_malloc
	movq	%rax, %r13
	movq	%rbx, %rdi
	callq	_malloc
	movq	%rax, %r15
	testq	%r14, %r14
	je	LBB2_11
## BB#2:
	testq	%r13, %r13
	je	LBB2_11
## BB#3:
	testq	%r15, %r15
	je	LBB2_11
## BB#4:
	movq	%r14, %rdi
	movq	%r13, %rsi
	movq	%r15, %rdx
	movl	%ebp, %ecx
	callq	__Z9InitBlockPfS_S_i
	movq	%r15, %rdi
	movq	%r14, %rsi
	movq	%r13, %rdx
	movl	%ebp, %ecx
	callq	__Z9BlockMultPfS_S_i
	xorl	%ebx, %ebx
	imull	%ebp, %ebp
	leaq	L_.str2(%rip), %r12
	jmp	LBB2_5
	.align	4, 0x90
LBB2_8:                                 ##   in Loop: Header=BB2_5 Depth=1
	incq	%rbx
LBB2_5:                                 ## =>This Inner Loop Header: Depth=1
	cmpl	%ebp, %ebx
	jge	LBB2_9
## BB#6:                                ##   in Loop: Header=BB2_5 Depth=1
	movss	(%r14,%rbx,4), %xmm0
	ucomiss	(%r15,%rbx,4), %xmm0
	jne	LBB2_7
	jnp	LBB2_8
LBB2_7:                                 ##   in Loop: Header=BB2_5 Depth=1
	movss	(%r14,%rbx,4), %xmm0
	cvtss2sd	%xmm0, %xmm1
	movss	(%r15,%rbx,4), %xmm0
	cvtss2sd	%xmm0, %xmm2
	movq	%r12, %rdi
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
	movq	%r14, %rdi
	callq	_free
	movq	%r13, %rdi
	callq	_free
	movq	%r15, %rdi
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
	movq	(%rax), %rax
	leaq	L_.str(%rip), %rcx
	movq	%rax, %rdi
	movq	%rcx, %rsi
	xorb	%al, %al
	callq	_fprintf
	movl	$1, %edi
	callq	_exit
LBB2_11:
	movq	(%r12), %rcx
	movq	___stderrp@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	leaq	L_.str1(%rip), %rdx
	movq	%rax, %rdi
	movq	%rdx, %rsi
	movq	%rcx, %rdx
	xorb	%al, %al
	callq	_fprintf
	movq	%r14, %rdi
	callq	_free
	movq	%r13, %rdi
	callq	_free
	movq	%r15, %rdi
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
