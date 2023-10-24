section .data
    hello db 'Hello, World!',0 ; Define a null-terminated string 'Hello, World!'
    hello_len equ $ - hello    ; Calculate the length of the string

section .text
    global _start             ; Entry point for the program

_start:
    ; Write "Hello, World!" to stdout
    mov eax, 4                ; Set syscall number 4 (write) in EAX
    mov ebx, 1                ; File descriptor 1 (stdout) in EBX
    mov ecx, hello            ; Load the address of the string into ECX
    mov edx, hello_len        ; Load the length of the string into EDX
    int 0x80                  ; Perform syscall to write to stdout

    ; Exit the program
    mov eax, 1                ; Set syscall number 1 (exit) in EAX
    int 0x80                  ; Perform syscall to exit the program
