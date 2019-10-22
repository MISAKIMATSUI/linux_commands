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
	subq	$48, %rsp
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	cmpl	$1, -8(%rbp)
	jle	LBB0_2
## %bb.1:
	movq	-16(%rbp), %rax
	movq	8(%rax), %rdi
	callq	_atoi
	movl	%eax, -40(%rbp)         ## 4-byte Spill
	jmp	LBB0_3
LBB0_2:
	movl	$1000000, %eax          ## imm = 0xF4240
	movl	%eax, -40(%rbp)         ## 4-byte Spill
	jmp	LBB0_3
LBB0_3:
	movl	-40(%rbp), %eax         ## 4-byte Reload
	movl	%eax, -20(%rbp)
	movslq	-20(%rbp), %rcx
	shlq	$2, %rcx
	movq	%rcx, %rdi
	callq	_malloc
	movq	%rax, -32(%rbp)
	movl	$0, -36(%rbp)
LBB0_4:                                 ## =>This Inner Loop Header: Depth=1
	movl	-36(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jge	LBB0_7
## %bb.5:                               ##   in Loop: Header=BB0_4 Depth=1
	movq	-32(%rbp), %rax
	movslq	-36(%rbp), %rcx
	movl	$10, (%rax,%rcx,4)
## %bb.6:                               ##   in Loop: Header=BB0_4 Depth=1
	movl	-36(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -36(%rbp)
	jmp	LBB0_4
LBB0_7:
	movl	-4(%rbp), %eax
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function

.subsections_via_symbols
