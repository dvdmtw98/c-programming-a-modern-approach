/*
Show how to replace a continue statement by an equivalent goto statement.
e.g. Program to print even numbers
*/

#include <stdio.h>

int main(void) {
    int i;

    printf("Using continue:\n");
    for (i = 0; i <= 10; i++) {
        if (i % 2 != 0) {
            continue;
        }
        printf("%d ", i);
    }

    printf("\n");

    printf("Using Goto:\n");
    for (i = 0; i <= 10; i++) {
        if (i % 2 != 0) {
            goto done;
        }
        printf("%d ", i);
    done:;
    }

    printf("\n");

    return 0;
}
