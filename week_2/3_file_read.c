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