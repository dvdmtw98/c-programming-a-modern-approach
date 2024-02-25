/*
Write a program that asks the user to enter a two-digit number, then prints the number with its digits reversed. A session with the program should have the following appearance:

Enter a two-digit number: 28
The reversal is: 82

Read the number using %d, then break it into two digits.
Hint: If n is an integer, then n % 10 is the last digit in n and n / 10 is n with the last digit removed.
*/

#include <stdio.h>

int main(void) {
    int num, units_digit, tens_digit;

    printf("Enter a two-digit number: ");
    if (scanf("%2d", &num) != 1) {
        printf("Failed to read input");
        return 1;
    }

    units_digit = num % 10;
    tens_digit = num / 10;

    printf("The reverse is: %d%d\n", units_digit, tens_digit);

    return 0;
}
