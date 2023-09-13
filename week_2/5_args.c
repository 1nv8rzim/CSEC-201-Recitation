#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sum = 0;

    // TODO: sum all arguments and print the result

    for (int i = 1; i < argc; i++) {
        if (i == argc - 1) {
            printf("%s = ", argv[i]);
            break;
        } else {
            printf("%s + ", argv[i]);
        }
    }
    printf("%d\n", sum);

    return 0;
}

int solution(int argc, char *argv[]) {
    int sum = 0;

    // TODO: sum all arguments and print the result

    for (int i = 1; i < argc; i++) {
        sum += atoi(argv[i]);
    }

    for (int i = 1; i < argc; i++) {
        if (i == argc - 1) {
            printf("%s = ", argv[i]);
            break;
        } else {
            printf("%s + ", argv[i]);
        }
    }
    printf("%d\n", sum);

    return 0;
}