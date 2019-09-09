	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14	sdk_version 10, 14
	.globl	_subroutine1            ## -- Begin function subroutine1
	.p2align	4, 0x90
_subroutine1:                           ## @subroutine1
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movl	%edi, -4(%rbp)
	movss	%xmm0, -8(%rbp)
	movss	%xmm1, -12(%rbp)
	movq	%rsi, -24(%rbp)
	movl	-4(%rbp), %edi
	movl	%edi, -28(%rbp)
	movq	-24(%rbp), %rsi
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	%eax, -32(%rbp)         ## 4-byte Spill
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_subroutine2            ## -- Begin function subroutine2
	.p2align	4, 0x90
_subroutine2:                           ## @subroutine2
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	%edi, -4(%rbp)
	movss	%xmm0, -8(%rbp)
	movss	%xmm1, -12(%rbp)
	movq	%rsi, -24(%rbp)
	movl	-4(%rbp), %edi
	movl	%edi, -28(%rbp)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3               ## -- Begin function main
LCPI2_0:
	.quad	4736236149176008704     ## double 444444444
LCPI2_1:
	.quad	4719713058673393664     ## double 33333333
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
	subq	$32, %rsp
	movsd	LCPI2_0(%rip), %xmm0    ## xmm0 = mem[0],zero
	movsd	LCPI2_1(%rip), %xmm1    ## xmm1 = mem[0],zero
	movl	$11111, -4(%rbp)        ## imm = 0x2B67
	movsd	%xmm1, -16(%rbp)
	movsd	%xmm0, -24(%rbp)
	leaq	L_.str.1(%rip), %rax
	movq	%rax, -32(%rbp)
	movl	-4(%rbp), %edi
	movsd	-16(%rbp), %xmm0        ## xmm0 = mem[0],zero
	cvtsd2ss	%xmm0, %xmm0
	movsd	-24(%rbp), %xmm1        ## xmm1 = mem[0],zero
	cvtsd2ss	%xmm1, %xmm1
	movq	-32(%rbp), %rsi
	callq	_subroutine1
	xorl	%eax, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%s"

L_.str.1:                               ## @.str.1
	.asciz	"test"


.subsections_via_symbols
