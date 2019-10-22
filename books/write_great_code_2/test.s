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
	movq	__ZL1l(%rip), %rcx
	movswq	__ZL1s(%rip), %rdx
	addq	%rdx, %rcx
	movsbq	__ZL1c(%rip), %rdx
	addq	%rdx, %rcx
	movq	%rcx, __ZL1l(%rip)
	movq	__ZL1a(%rip), %rcx
	addq	__ZL1b(%rip), %rcx
	addq	__ZL1d(%rip), %rcx
	movq	%rcx, __ZL1a(%rip)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
.zerofill __DATA,__bss,__ZL1l,8,3       ## @_ZL1l
.zerofill __DATA,__bss,__ZL1s,2,1       ## @_ZL1s
.zerofill __DATA,__bss,__ZL1c,1,0       ## @_ZL1c
.zerofill __DATA,__bss,__ZL1a,8,3       ## @_ZL1a
.zerofill __DATA,__bss,__ZL1b,8,3       ## @_ZL1b
.zerofill __DATA,__bss,__ZL1d,8,3       ## @_ZL1d

.subsections_via_symbols
