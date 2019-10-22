	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14	sdk_version 10, 14
	.section	__TEXT,__literal4,4byte_literals
	.p2align	2               ## -- Begin function main
LCPI0_0:
	.long	1077936128              ## float 3
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
	xorl	%eax, %eax
	movss	LCPI0_0(%rip), %xmm0    ## xmm0 = mem[0],zero,zero,zero
	movl	$0, __ZZ4mainE1j(%rip)
	addss	__ZZ4mainE1i(%rip), %xmm0
	movslq	__ZZ4mainE1j(%rip), %rcx
	leaq	__ZZ4mainE1a(%rip), %rdx
	movss	%xmm0, (%rdx,%rcx,4)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
.zerofill __DATA,__bss,__ZZ4mainE1j,4,2 ## @_ZZ4mainE1j
	.section	__DATA,__data
	.p2align	2               ## @_ZZ4mainE1i
__ZZ4mainE1i:
	.long	1084227584              ## float 5

	.p2align	4               ## @_ZZ4mainE1a
__ZZ4mainE1a:
	.long	0                       ## float 0
	.long	1065353216              ## float 1
	.long	1073741824              ## float 2
	.long	1077936128              ## float 3
	.long	1082130432              ## float 4
	.long	1084227584              ## float 5
	.long	1086324736              ## float 6
	.long	1088421888              ## float 7


.subsections_via_symbols
