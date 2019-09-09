	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14	sdk_version 10, 14
	.globl	__Z4swapRbbb            ## -- Begin function _Z4swapRbbb
	.p2align	4, 0x90
__Z4swapRbbb:                           ## @_Z4swapRbbb
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movb	%dl, %al
	movb	%sil, %cl
	movq	%rdi, -8(%rbp)
	andb	$1, %cl
	movb	%cl, -9(%rbp)
	andb	$1, %al
	movb	%al, -10(%rbp)
	movb	-9(%rbp), %al
	andb	$1, %al
	movzbl	%al, %edx
	movb	-10(%rbp), %al
	andb	$1, %al
	movzbl	%al, %esi
	addl	%esi, %edx
	movq	-8(%rbp), %rdi
	movb	(%rdi), %al
	andb	$1, %al
	movzbl	%al, %esi
	subl	%esi, %edx
	cmpl	$0, %edx
	setne	%al
	movq	-8(%rbp), %rdi
	andb	$1, %al
	movb	%al, (%rdi)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__Z10basic_swapRbbb     ## -- Begin function _Z10basic_swapRbbb
	.p2align	4, 0x90
__Z10basic_swapRbbb:                    ## @_Z10basic_swapRbbb
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movb	%dl, %al
	movb	%sil, %cl
	movq	%rdi, -8(%rbp)
	andb	$1, %cl
	movb	%cl, -9(%rbp)
	andb	$1, %al
	movb	%al, -10(%rbp)
	movq	-8(%rbp), %rdi
	movb	(%rdi), %al
	andb	$1, %al
	movzbl	%al, %edx
	movb	-9(%rbp), %al
	andb	$1, %al
	movzbl	%al, %esi
	cmpl	%esi, %edx
	jne	LBB1_2
## %bb.1:
	movb	-10(%rbp), %al
	movq	-8(%rbp), %rcx
	andb	$1, %al
	movb	%al, (%rcx)
	jmp	LBB1_3
LBB1_2:
	movb	-9(%rbp), %al
	movq	-8(%rbp), %rcx
	andb	$1, %al
	movb	%al, (%rcx)
LBB1_3:
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__Z8InitRandv           ## -- Begin function _Z8InitRandv
	.p2align	4, 0x90
__Z8InitRandv:                          ## @_Z8InitRandv
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	xorl	%eax, %eax
	movl	%eax, %edi
	callq	_time
	movl	%eax, %ecx
	movl	%ecx, %edi
	callq	_srand
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
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
	jle	LBB3_2
## %bb.1:
	movq	-16(%rbp), %rax
	movq	8(%rax), %rdi
	callq	_atoi
	movl	%eax, -40(%rbp)         ## 4-byte Spill
	jmp	LBB3_3
LBB3_2:
	movl	$40000, %eax            ## imm = 0x9C40
	movl	%eax, -40(%rbp)         ## 4-byte Spill
	jmp	LBB3_3
LBB3_3:
	movl	-40(%rbp), %eax         ## 4-byte Reload
	movl	%eax, -20(%rbp)
	cmpl	$2, -8(%rbp)
	jle	LBB3_5
## %bb.4:
	movq	-16(%rbp), %rax
	movq	16(%rax), %rdi
	callq	_atoi
	movl	%eax, -44(%rbp)         ## 4-byte Spill
	jmp	LBB3_6
LBB3_5:
	movl	$40000, %eax            ## imm = 0x9C40
	movl	%eax, -44(%rbp)         ## 4-byte Spill
	jmp	LBB3_6
LBB3_6:
	movl	-44(%rbp), %eax         ## 4-byte Reload
	movl	%eax, -24(%rbp)
	movl	$0, -28(%rbp)
LBB3_7:                                 ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB3_9 Depth 2
	movl	-28(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jge	LBB3_14
## %bb.8:                               ##   in Loop: Header=BB3_7 Depth=1
	movl	$0, -32(%rbp)
LBB3_9:                                 ##   Parent Loop BB3_7 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	movl	-32(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jge	LBB3_12
## %bb.10:                              ##   in Loop: Header=BB3_9 Depth=2
	callq	_rand
	cltd
	movl	$2, %ecx
	idivl	%ecx
	cmpl	$0, %edx
	setne	%sil
	andb	$1, %sil
	movb	%sil, -33(%rbp)
	callq	_rand
	cltd
	movl	$2, %ecx
	idivl	%ecx
	cmpl	$0, %edx
	setne	%sil
	andb	$1, %sil
	movb	%sil, -34(%rbp)
	callq	_rand
	cltd
	movl	$2, %ecx
	idivl	%ecx
	cmpl	$0, %edx
	setne	%sil
	andb	$1, %sil
	movb	%sil, -35(%rbp)
	movb	-34(%rbp), %sil
	movb	-35(%rbp), %dil
	andb	$1, %sil
	andb	$1, %dil
	leaq	-33(%rbp), %r8
	movb	%dil, -45(%rbp)         ## 1-byte Spill
	movq	%r8, %rdi
	movzbl	%sil, %esi
	movb	-45(%rbp), %r9b         ## 1-byte Reload
	movzbl	%r9b, %edx
	callq	__Z10basic_swapRbbb
## %bb.11:                              ##   in Loop: Header=BB3_9 Depth=2
	movl	-32(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -32(%rbp)
	jmp	LBB3_9
LBB3_12:                                ##   in Loop: Header=BB3_7 Depth=1
	jmp	LBB3_13
LBB3_13:                                ##   in Loop: Header=BB3_7 Depth=1
	movl	-28(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -28(%rbp)
	jmp	LBB3_7
LBB3_14:
	movl	-4(%rbp), %eax
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__DATA,__mod_init_func,mod_init_funcs
	.globl	_fp                     ## @fp
	.p2align	3
_fp:
	.quad	__Z8InitRandv


.subsections_via_symbols
