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
	xorl	%eax, %eax
	movl	_a(%rip), %ecx
	xorl	_a(%rip), %ecx
	movl	%ecx, _a(%rip)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_a                      ## @a
.zerofill __DATA,__common,_a,4,2
	.globl	_b                      ## @b
.zerofill __DATA,__common,_b,4,2

.subsections_via_symbols
