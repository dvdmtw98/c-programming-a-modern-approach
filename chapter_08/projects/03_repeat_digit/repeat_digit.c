/*
Modify the repdigit.c program of Section 8.1 so that the user can enter more than one number to be tested for repeated digits. The program should terminate when the user enters a number that’s less than or equal to 0.
*/

#include <stdio.h>

int main(void) {
    int digit_seen[10] = {0};
    int digit, iter;
    long num;

    while (1) {
        printf("Enter a number: ");
        if (scanf("%ld", &num) != 1) {
            printf("Failed to read input\n");
            return 1;
        }

        if (num <= 0) {
            break;
        }

        while (num > 0) {
            digit = num % 10;
            digit_seen[digit]++;
            num /= 10;
        }

        printf("Digit:      ");
        for (iter = 0; iter < 10; iter++) {
            printf("%3d", iter);
        }

        printf("\nOccurrences:");
        for (iter = 0; iter < 10; iter++) {
            printf("%3d", digit_seen[iter]);
            digit_seen[iter] = 0;
        }
        printf("\n\n");
    }

    return 0;
}
