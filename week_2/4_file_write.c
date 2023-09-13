#include <stdio.h>

int main() {
    FILE *file = fopen("3_file_write.txt", "w");
    if (file == NULL) {
        printf("Failed to open the file for writing.\n");
        return 1;
    }

    // TODO: write the squares of numbers 0-10 all each on new lines to the file

    return 0;
}

int solution() {
    FILE *file = fopen("3_file_write.txt", "w");
    if (file == NULL) {
        printf("Failed to open the file for writing.\n");
        return 1;
    }

    // TODO: write the squares of numbers 0-10 all each on new lines to the file

    for (int i = 0; i <= 10; i++) {
        fprintf(file, "%d\n", i * i);
    }

    fclose(file);

    return 0;
}