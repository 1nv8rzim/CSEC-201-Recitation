#include <stdio.h>

int main()
{
    unsigned char a = 12; // Binary: 00001100
    unsigned char b = 25; // Binary: 00011001

    // Bitwise XOR
    // 00001100
    // 00011001
    // --------
    // 00010101 = 21

    int result = a ^ b;

    printf("%d ^ %d = %d\n", a, b, result);

    return 0;
}
