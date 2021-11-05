global main

section .text

main:
mov rax, 1
mov rdi, 1
mov rsi, msg
mov rdx, 17
syscall

mov rax, 60
mov rdi, rdi
syscall

section .mens
msg: db "Hello, world", 10
