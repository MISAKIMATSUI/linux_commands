	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14	sdk_version 10, 14
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	pushq	%r15
	pushq	%r14
	pushq	%rbx
	pushq	%rax
	.cfi_offset %rbx, -40
	.cfi_offset %r14, -32
	.cfi_offset %r15, -24
	movl	$1000000000, %ebx       ## imm = 0x3B9ACA00
	cmpl	$2, %edi
	jl	LBB0_4
## %bb.1:
	movq	%rsi, %r14
	movl	%edi, %r15d
	movq	8(%rsi), %rdi
	callq	_atoi
	movl	%eax, %ebx
	cmpl	$5, %r15d
	jl	LBB0_4
## %bb.2:
	movq	32(%r14), %rdi
	callq	_atoi
	cmpl	$10, %eax
	jb	LBB0_4
LBB0_3:
	## InlineAsm Start
DUMMY1:
	## InlineAsm End
LBB0_4:
	## InlineAsm Start
DUMMY2:
	## InlineAsm End
	decl	%ebx
	jg	LBB0_3
## %bb.5:
	xorl	%eax, %eax
	addq	$8, %rsp
	popq	%rbx
	popq	%r14
	popq	%r15
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function

.subsections_via_symbols
