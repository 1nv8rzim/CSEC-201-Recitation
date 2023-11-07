section .data
    input_prompt db "Enter a number: ", 0       ; The format string for scanf (expects an integer)
    input_format db "%d", 0                     ; The format string for scanf (expects an integer)
    output_format db "You entered: %d", 10, 0   ; The format string for printf
    number dd 0                                 ; This will store the integer read from standard input

section .text
    global _start

extern scanf
extern printf

_start:
    ; printf("Enter a number: ")
    push input_prompt   ; Push the address of the format string onto the stack
    call printf         ; Call printf
    add esp, 4          ; Clean up the stack (one 4-byte argument was pushed)

    ; scanf("%d", &number)
    push number         ; Push the address of 'number' onto the stack for scanf to store an integer
    push input_format   ; Push the format string onto the stack
    call scanf          ; Call scanf
    add esp, 8          ; Clean up the stack (two 4-byte arguments were pushed)

    ; printf("You entered: %d\n", number)
    push dword [number] ; Push the value of 'number' onto the stack
    push output_format  ; Push the output format string onto the stack
    call printf         ; Call printf
    add esp, 8          ; Clean up the stack (two 4-byte arguments were pushed)

    ; return 0
    mov eax, 1          ; syscall number for exit
    xor ebx, ebx        ; exit code 0
    int 0x80            ; interrupt to request kernel service