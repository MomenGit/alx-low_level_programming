; File: hello_holberton.asm

section .data
format db "%s", 10, 0
message db "Hello, Holberton", 0

section .text
extern printf ;C function to be called
global main ;main function

main:
 push rbp
 mov rdi, format
 mov rsi, message
 mov rax, 0
 call printf ;call C function.

 pop rbp ;restore stack

 mov rax, 0 ;normal, no error, return value
 ret ;return
