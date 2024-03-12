/*
Write a program that asks the user to enter a fraction, then reduces the fraction to lowest terms:
Enter a fraction: 6/12
In lowest terms: 1/2

Hint: To reduce a fraction to lowest terms, first compute the GCD of the numerator and denominator. Then divide both the numerator and denominator by the GCD.
*/

#include <stdio.h>

int main(void) {
    int numerator, denominator,
        num1, num2, remainder;

    printf("Enter a fraction: ");
    if (scanf("%d/%d", &numerator, &denominator) != 2) {
        printf("Failed to read the fraction\n");
        return 1;
    }

    num1 = numerator;
    num2 = denominator;

    while (num2 != 0) {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    numerator = numerator / num1;
    denominator = denominator / num1;
    printf("In lowest terms: %d/%d\n", numerator, denominator);

    return 0;
}
