    global main

    section .text
main:
    mov	rax, 1
    mov	rdi, 1
    mov	rsi, hh
    mov	rdx, 17
    syscall

    mov rax, 60
    xor rdi, rdi
    syscall

section .data
hh:    db      "Hello, Holberton",10
