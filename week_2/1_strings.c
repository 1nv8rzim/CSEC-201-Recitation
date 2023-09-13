#include <stdio.h>

int len(char* str) {
    // TODO: implement a len functions for strings
}


int main() {
    char str1[] = "Hello, World!";
    char* str2 = "Hello, World!";
    
    printf("str1: [length=%d] %s\n", len(str1), str1);
    printf("str2: [length=%d] %s\n", len(str1), str2);

    return 0;
}

int solution(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}