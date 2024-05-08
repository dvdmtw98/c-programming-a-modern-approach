/*
Modify the sum2.c program of Section 7.1 to sum a series of double values.
*/

#include <stdio.h>

int main(void) {
    double n, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");
    if (scanf("%lf", &n) != 1) {
        printf("Parsing error\n");
        return 1;
    }

    while (n != 0) {
        sum += n;
        if (scanf("%lf", &n) != 1) {
            printf("Parsing error\n");
            return 1;
        }
    }

    printf("The sum is: %.4f\n", sum);

    return 0;
}
