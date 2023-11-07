section .data
    prompt1 db "Enter the first integer: ", 0
    prompt2 db "Enter the second integer: ", 0
    output_format db "The sum is: %d", 10, 0 ; The format string for printf with a newline
    input_format db "%d", 0                  ; The format string for scanf
    number1 dd 0                             ; This will store the first integer
    number2 dd 0                             ; This will store the second integer
    sum dd 0                                 ; This will store the sum of the two integers

section .text
    global _start

extern scanf
extern printf

_start:
    ; printf("Enter the first integer: ");
    push prompt1
    call printf

    ; scanf("%d", &number1);
    push number1
    push input_format
    call scanf

    ; printf("Enter the second integer: ");
    push prompt2
    call printf

    ; scanf("%d", &number2);
    push number2
    push input_format
    call scanf

    ; sum = number1 + number2;
    mov eax, [number1]  ; eax = number1
    add eax, [number2]  ; eax = eax + number2
    mov [sum], eax      ; sum = eax

    ; printf("The sum is: %d\n", sum);
    push dword [sum]
    push output_format
    call printf

    ; return 0;
    mov eax, 1        ; syscall number for exit
    xor ebx, ebx      ; exit code 0
    int 0x80          ; interrupt to request kernel service
