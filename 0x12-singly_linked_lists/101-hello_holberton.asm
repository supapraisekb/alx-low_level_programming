section .rodata
msg db 'Hello, Holberton',10,0
fmt db '%s',10,0


section .text
global main
extern printf

main:
push msg
push fmt
call printf
add rsp,16
xor eax,eax
ret
