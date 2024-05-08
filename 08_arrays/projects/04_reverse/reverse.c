/*
Modify the reverse.c program of Section 8.1 to use the expression (int) (sizeof(a) / sizeof(a[0])) (or a macro with this value) for the array length.
*/

#include <stdio.h>

#define LENGTH (int)(sizeof(a) / sizeof(a[0]))

int main(void) {
    int a[10], i;

    printf("Enter %d numbers: ", LENGTH);
    for (i = 0; i < LENGTH; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("Invalid Input Provided\n");
            return 1;
        }
    }

    printf("In reverse order:");
    for (i = LENGTH - 1; i >= 0; i--) {
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}
