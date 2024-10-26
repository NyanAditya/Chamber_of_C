	.file	"char2.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 4
LC0:
	.ascii "ASCII code of %c & %c is %d & %d\12\0"
LC1:
	.ascii "%c + %c = %c\12\0"
LC2:
	.ascii "ASCII code of %c is %d\12\0"
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
	pushl	%ebx
	andl	$-16, %esp
	subl	$48, %esp
	.cfi_offset 3, -12
	call	___main
	movb	$97, 47(%esp)
	movb	$65, 46(%esp)
	movsbl	46(%esp), %ebx
	movsbl	47(%esp), %ecx
	movsbl	46(%esp), %edx
	movsbl	47(%esp), %eax
	movl	%ebx, 16(%esp)
	movl	%ecx, 12(%esp)
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movsbl	47(%esp), %edx
	movsbl	46(%esp), %eax
	leal	(%edx,%eax), %ecx
	movsbl	46(%esp), %edx
	movsbl	47(%esp), %eax
	movl	%ecx, 12(%esp)
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movsbl	47(%esp), %edx
	movsbl	46(%esp), %eax
	addl	%eax, %edx
	movsbl	47(%esp), %ecx
	movsbl	46(%esp), %eax
	addl	%ecx, %eax
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	$0, %eax
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
