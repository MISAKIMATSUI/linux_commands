	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14	sdk_version 10, 14
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3               ## -- Begin function main
LCPI0_0:
	.quad	4607182418800017408     ## double 1
	.section	__TEXT,__literal4,4byte_literals
	.p2align	2
LCPI0_1:
	.long	1065353216              ## float 1
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movsd	LCPI0_0(%rip), %xmm0    ## xmm0 = mem[0],zero
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movsd	%xmm0, -24(%rbp)
	xorps	%xmm0, %xmm0
	movss	%xmm0, -28(%rbp)
	movl	$1, -32(%rbp)
LBB0_1:                                 ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB0_3 Depth 2
	cmpl	$104010, -32(%rbp)      ## imm = 0x1964A
	jge	LBB0_8
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
	movl	$1, -36(%rbp)
LBB0_3:                                 ##   Parent Loop BB0_1 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	cmpl	$181030, -36(%rbp)      ## imm = 0x2C326
	jge	LBB0_6
## %bb.4:                               ##   in Loop: Header=BB0_3 Depth=2
	movss	LCPI0_1(%rip), %xmm0    ## xmm0 = mem[0],zero,zero,zero
	movl	-32(%rbp), %eax
	imull	-36(%rbp), %eax
	cvtsi2sdl	%eax, %xmm1
	mulsd	-24(%rbp), %xmm1
	movsd	%xmm1, -24(%rbp)
	addss	-28(%rbp), %xmm0
	movss	%xmm0, -28(%rbp)
## %bb.5:                               ##   in Loop: Header=BB0_3 Depth=2
	movl	-36(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -36(%rbp)
	jmp	LBB0_3
LBB0_6:                                 ##   in Loop: Header=BB0_1 Depth=1
	jmp	LBB0_7
LBB0_7:                                 ##   in Loop: Header=BB0_1 Depth=1
	movl	-32(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -32(%rbp)
	jmp	LBB0_1
LBB0_8:
	movsd	-24(%rbp), %xmm0        ## xmm0 = mem[0],zero
	leaq	L_.str(%rip), %rdi
	movb	$1, %al
	callq	_printf
	movss	-28(%rbp), %xmm0        ## xmm0 = mem[0],zero,zero,zero
	cvtss2sd	%xmm0, %xmm0
	leaq	L_.str.1(%rip), %rdi
	movl	%eax, -40(%rbp)         ## 4-byte Spill
	movb	$1, %al
	callq	_printf
	xorl	%ecx, %ecx
	movl	%eax, -44(%rbp)         ## 4-byte Spill
	movl	%ecx, %eax
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"a = %f\n"

L_.str.1:                               ## @.str.1
	.asciz	"count = %f\n"


.subsections_via_symbols
