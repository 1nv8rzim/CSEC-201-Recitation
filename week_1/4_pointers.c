#include <stdio.h>

int main() {
    int num = 10;
    int *ptr; 

    printf("Original Number: %d\n", num);

    ptr = &num; 
    
    // Use the pointer 'ptr' to change the value of 'num' to 20

    printf("Modified Number: %d\n", num);

    return 0;
}
