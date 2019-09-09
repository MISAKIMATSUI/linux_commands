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
	pushq	%r12
	pushq	%rbx
	.cfi_offset %rbx, -48
	.cfi_offset %r12, -40
	.cfi_offset %r14, -32
	.cfi_offset %r15, -24
	movl	$1000000000, %r14d      ## imm = 0x3B9ACA00
	xorl	%ebx, %ebx
	cmpl	$2, %edi
	jl	LBB0_6
## %bb.1:
	movq	%rsi, %r15
	movl	%edi, %r12d
	movq	8(%rsi), %rdi
	callq	_atoi
	movl	%eax, %r14d
	cmpl	$2, %r12d
	je	LBB0_6
## %bb.2:
	movq	16(%r15), %rdi
	callq	_atoi
	movl	%eax, %ebx
	cmpl	$5, %r12d
	jl	LBB0_6
## %bb.3:
	movq	32(%r15), %rdi
	callq	_atoi
	cmpl	$9, %eax
	ja	LBB0_5
## %bb.4:
	movl	%eax, %eax
	leaq	LJTI0_0(%rip), %rcx
	movslq	(%rcx,%rax,4), %rax
	addq	%rcx, %rax
	jmpq	*%rax
LBB0_5:
	## InlineAsm Start
DUMMY1:
	## InlineAsm End
LBB0_6:
	addl	$3, %ebx
LBB0_7:
	addl	$3, %ebx
LBB0_8:
	addl	$3, %ebx
LBB0_9:
	addl	$3, %ebx
LBB0_10:
	addl	$3, %ebx
LBB0_11:
	addl	$3, %ebx
LBB0_12:
	addl	$3, %ebx
LBB0_13:
	addl	$3, %ebx
LBB0_14:
	addl	$3, %ebx
LBB0_15:
	addl	$3, %ebx
	## InlineAsm Start
DUMMY2:
	## InlineAsm End
	decl	%r14d
	jg	LBB0_5
## %bb.16:
	leaq	L_.str(%rip), %rdi
	xorl	%eax, %eax
	movl	%ebx, %esi
	callq	_printf
	xorl	%eax, %eax
	popq	%rbx
	popq	%r12
	popq	%r14
	popq	%r15
	popq	%rbp
	retq
	.cfi_endproc
	.p2align	2, 0x90
	.data_region jt32
.set L0_0_set_6, LBB0_6-LJTI0_0
.set L0_0_set_7, LBB0_7-LJTI0_0
.set L0_0_set_8, LBB0_8-LJTI0_0
.set L0_0_set_9, LBB0_9-LJTI0_0
.set L0_0_set_10, LBB0_10-LJTI0_0
.set L0_0_set_11, LBB0_11-LJTI0_0
.set L0_0_set_12, LBB0_12-LJTI0_0
.set L0_0_set_13, LBB0_13-LJTI0_0
.set L0_0_set_14, LBB0_14-LJTI0_0
.set L0_0_set_15, LBB0_15-LJTI0_0
LJTI0_0:
	.long	L0_0_set_6
	.long	L0_0_set_7
	.long	L0_0_set_8
	.long	L0_0_set_9
	.long	L0_0_set_10
	.long	L0_0_set_11
	.long	L0_0_set_12
	.long	L0_0_set_13
	.long	L0_0_set_14
	.long	L0_0_set_15
	.end_data_region
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"a = %d\n"


.subsections_via_symbols
