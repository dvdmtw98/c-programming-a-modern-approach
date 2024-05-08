/*
Modify the repdigit.c program so that it prints a table showing how many times each digit appears in the number:
Enter a number: 41271092
Digit: 0 1 2 3 4 5 6 7 8 9
Occurrences: 1 2 2 0 1 0 0 1 0 1
*/

#include <stdio.h>

int main(void) {
    int digit_seen[10] = {0};
    int digit, iter;
    long n;

    printf("Enter a number: ");
    if (scanf("%ld", &n) != 1) {
        printf("Failed to read input\n");
        return 1;
    }

    while (n > 0) {
        digit = n % 10;
        digit_seen[digit]++;
        n /= 10;
    }

    printf("Digit:      ");
    for (iter = 0; iter < 10; iter++) {
        printf("%3d", iter);
    }

    printf("\nOccurrences:");
    for (iter = 0; iter < 10; iter++) {
        printf("%3d", digit_seen[iter]);
    }
    printf("\n");

    return 0;
}
