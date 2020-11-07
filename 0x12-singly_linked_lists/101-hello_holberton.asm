	global main

	section .text
	extern printf
	global main
main:
	push	rbp
	mov	rsi, hh
	mov	rdi, ff
	mov	rax, 0
	call 	printf
	pop	rbp
	mov	rax, 0
	ret

section .data
ff:	db	"%s", 10, 0
hh:	db	"Hello, Holberton",0
