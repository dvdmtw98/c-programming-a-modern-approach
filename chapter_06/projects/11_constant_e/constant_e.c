/*
The value of the mathematical constant e can be expressed as an infinite series:
e = 1 + 1/1! + 1/2! + 1/3! + …
Write a program that approximates e by computing the value of
1 + 1/1! + 1/2! + 1/3! + … + 1/n!
where n is an integer entered by the user.
*/

#include <stdio.h>

int main(void) {
    int n, counter, factorial = 1;
    float e = 1.0f;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Failed to read number\n");
        return 1;
    }

    for (counter = 1; counter <= n; counter++) {
        factorial *= counter;
        e += 1.0f / factorial;
    }

    printf("Value of e: %f\n", e);

    return 0;
}
