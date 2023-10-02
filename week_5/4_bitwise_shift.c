#include <stdio.h>

int main()
{
    unsigned char a = 10; // Binary: 00001010
    unsigned char b = 2;

    // Left shift by 2 positions
    // 00001010 << 2
    // 00101000 = 40

    // Same as: 10 * 2^2 = 10 * 4 = 40

    int leftShiftResult = a << b;
    printf("%d << %d = %d\n", a, b, leftShiftResult);

    // Right shift by 2 position
    // 00001010 >> 2
    // 00000010 = 2

    // Same as: 10 // 2^2 = 10 // 4 = 2

    int rightShiftResult = a >> b; // Shifting right by 1 bit
    printf("%d >> %d = %d\n", a, b, rightShiftResult);
    return 0;
}
