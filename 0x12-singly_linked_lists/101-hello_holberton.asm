; File: 101-hello_holberton.asm
; Description: 64-bit assembly program that prints "Hello, Holberton" followed by a new line.

extern printf

section .text
    global _start

_start:
    ; Prepare the stack for the call to printf
    push rbp

    ; Set up the arguments for printf
    mov rdi, fmt     ; Format string
    mov rsi, msg     ; Message string
    mov rax, 0       ; Clear rax (varargs)

    ; Call printf
    call printf

    ; Clean up the stack
    pop rbp

    ; Exit the program
    mov rax, 60      ; System call for exit
    xor rdi, rdi     ; Exit code 0
    syscall

section .data
    msg: db "Hello, Holberton", 0
    fmt: db "%s", 10, 0
