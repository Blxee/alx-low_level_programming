section .data
    fmt db 'Hello, Holberton',0xa,0

section .text
    global main

    extern printf

main:
    push rbp
    mov rbp, rsp

    mov rdi, fmt
    xor eax, eax
    call printf

    xor eax, eax
    pop rbp
    ret
