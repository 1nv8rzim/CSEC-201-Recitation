#include <stdio.h>

typedef struct
{
    unsigned char A;
    unsigned char B;
    unsigned char C;
    unsigned char D;
    unsigned char E;
} SHA_40;

void printSHA(SHA_40 sha)
{
    // Print the SHA-40 digests
}

int main()
{
    SHA_40 sha = {11, 22, 33, 44, 55};
    printSHA(sha);
    return 0;
}