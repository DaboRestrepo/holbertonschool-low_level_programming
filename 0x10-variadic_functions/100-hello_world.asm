global main

section .text

main:
mov rax, 1
mov rdi, 1
mov rsi, msg
mov rdx, msglen
syscall

mov rax, 60
mov rdi, 0
syscall

section .mens
msg: db "Hello, World", 10
msglen: equ $ - msg
