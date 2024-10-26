	.file	"arr.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "The value of *ptr is %u\12\0"
LC1:
	.ascii "The value of arr is %u\12\0"
LC2:
	.ascii "The value of arr[0] is %u\12\0"
LC3:
	.ascii "The value of *arr is %u\12\0"
LC4:
	.ascii "The value of arr + 3 is %u\12\0"
LC5:
	.ascii "arr + i = %u\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$48, %esp
	call	___main
	movl	$1, 20(%esp)
	movl	$2, 24(%esp)
	movl	$3, 28(%esp)
	movl	$4, 32(%esp)
	movl	$5, 36(%esp)
	leal	20(%esp), %eax
	movl	%eax, 40(%esp)
	movl	40(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	leal	20(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	20(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	20(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	leal	20(%esp), %eax
	addl	$12, %eax
	movl	%eax, 4(%esp)
	movl	$LC4, (%esp)
	call	_printf
	movl	$0, 44(%esp)
	jmp	L2
L3:
	movl	44(%esp), %eax
	leal	0(,%eax,4), %edx
	leal	20(%esp), %eax
	addl	%edx, %eax
	movl	%eax, 4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	addl	$1, 44(%esp)
L2:
	cmpl	$4, 44(%esp)
	jle	L3
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
