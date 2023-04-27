section .data
    fmt db 'Hello, Holberton',0xa,0    ; the format string to be passed to printf

section .text
    global main

    extern printf              ; declare the printf function from the C library

main:
    push rbp                   ; set up stack frame
    mov rbp, rsp

    mov rdi, fmt               ; load the address of the format string into the first argument register
    xor eax, eax               ; clear the second argument register (printf format string is already loaded)
    call printf                ; call the printf function from the C library

    xor eax, eax               ; set return value to 0
    pop rbp                    ; restore stack frame
    ret                        ; return from main function
