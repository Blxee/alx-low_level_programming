section .data
    msg db 'Hello, Holberton',0xa  ; the string to be printed, terminated with newline (0xa)

section .text
    global _start

_start:
    ; write the message to stdout
    mov eax, 4       ; system call number for write
    mov ebx, 1       ; file descriptor for stdout
    mov ecx, msg     ; pointer to the message
    mov edx, 14      ; message length
    int 0x80         ; call kernel

    ; exit program with status code 0
    mov eax, 1       ; system call number for exit
    xor ebx, ebx     ; exit status code 0
    int 0x80         ; call kernel
