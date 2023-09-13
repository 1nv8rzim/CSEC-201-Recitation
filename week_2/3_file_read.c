#include <stdio.h>

int main() {
    FILE *file = fopen("3_file_read.txt", "r");
    if (file == NULL) {
        printf("Failed to open the file for writing.\n");
        return 1;
    }

    // TODO: read and print out all chracters which are not vowels

    return 0;
}

int solution() {
    FILE *file = fopen("3_file_read.txt", "r");
    if (file == NULL) {
        printf("Failed to open the file for writing.\n");
        return 1;
    }

    while (1) {
        char c = fgetc(file);
        if (c == EOF) {
            break;
        }
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            printf("%c", c);
        }
    }

    fclose(file);

    return 0;
}