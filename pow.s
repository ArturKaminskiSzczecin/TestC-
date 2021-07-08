	.file	"pow.cpp"
	.text
	.align 2
	.globl	_ZN4Arge6nbYearEidii
	.type	_ZN4Arge6nbYearEidii, @function
_ZN4Arge6nbYearEidii:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movsd	%xmm0, -32(%rbp)
	movl	%esi, -24(%rbp)
	movl	%edx, -36(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L2
.L3:
	pxor	%xmm1, %xmm1
	cvtsi2sdl	-20(%rbp), %xmm1
	movsd	-32(%rbp), %xmm2
	movsd	.LC0(%rip), %xmm0
	mulsd	%xmm0, %xmm2
	pxor	%xmm0, %xmm0
	cvtsi2sdl	-20(%rbp), %xmm0
	mulsd	%xmm2, %xmm0
	addsd	%xmm0, %xmm1
	pxor	%xmm0, %xmm0
	cvtsi2sdl	-24(%rbp), %xmm0
	addsd	%xmm1, %xmm0
	cvttsd2sil	%xmm0, %eax
	movl	%eax, -20(%rbp)
	addl	$1, -4(%rbp)
.L2:
	movl	-20(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jl	.L3
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_ZN4Arge6nbYearEidii, .-_ZN4Arge6nbYearEidii
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC0:
	.long	1202590843
	.long	1065646817
	.ident	"GCC: (GNU) 11.1.1 20210531 (Red Hat 11.1.1-3)"
	.section	.note.GNU-stack,"",@progbits
