section .data
    prompt db 'Enter string: ', 0 ; Define a null-terminated input prompt
    prompt_len equ $ - prompt           ; Calculate the length of the prompt
    outmsg db 'You entered: ', 0        ; Define a null-terminated output message
    outmsg_len equ $ - outmsg           ; Calculate the length of the output message

section .bss
    input resb 32                       ; Reserve space for user input

section .text
    global _start                      ; Entry point for the program

_start:
    ; Display input prompt
    mov eax, 4                          ; Set syscall number 4 (write) in EAX
    mov ebx, 1                          ; File descriptor 1 (stdout) in EBX
    mov ecx, prompt                     ; Load the address of the prompt into ECX
    mov edx, prompt_len                 ; Load the length of the prompt into EDX
    int 0x80                            ; Perform syscall to write to stdout

    ; Read user input
    mov eax, 3                          ; Set syscall number 3 (read) in EAX
    mov ebx, 0                          ; File descriptor 0 (stdin) in EBX
    mov ecx, input                      ; Load the address of the input buffer into ECX
    mov edx, 32                         ; Maximum number of bytes to read into EDX
    int 0x80                            ; Perform syscall to read from stdin

    ; Display the input message
    mov eax, 4                          ; Set syscall number 4 (write) in EAX
    mov ebx, 1                          ; File descriptor 1 (stdout) in EBX
    mov ecx, outmsg                     ; Load the address of the output message into ECX
    mov edx, outmsg_len                 ; Load the length of the output message into EDX
    int 0x80                            ; Perform syscall to write to stdout

    ; Print the user input
    mov eax, 4                          ; Set syscall number 4 (write) in EAX
    mov ebx, 1                          ; File descriptor 1 (stdout) in EBX
    mov ecx, input                      ; Load the address of the input buffer into ECX
    int 0x80                            ; Perform syscall to write to stdout

    ; Exit the program
    mov eax, 1                          ; Set syscall number 1 (exit) in EAX
    int 0x80                            ; Perform syscall to exit the program
