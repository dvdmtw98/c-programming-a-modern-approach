/*
Extend the program in Programming Project 1 to handle three-digit numbers.
*/

#include <stdio.h>

int main(void) {
    int num, units_digit, tens_digit;

    printf("Enter a three-digit number: ");
    if (scanf("%3d", &num) != 1) {
        printf("Failed to read input");
        return 1;
    }

    units_digit = num % 10;
    num = num / 10;
    tens_digit = num % 10;
    num = num / 10;

    printf("The reverse is: %d%d%d\n", units_digit, tens_digit, num);

    return 0;
}
