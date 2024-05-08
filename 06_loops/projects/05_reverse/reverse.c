/*
Programming Project 1 in Chapter 4 asked you to write a program that displays a two-digit number with its digits reversed. Generalize the program so that the number can have one, two, three, or more digits.

Hint: Use a do loop that repeatedly divides the number by 10, stopping when it reaches 0.
*/

#include <stdio.h>

int main(void) {
    int num, last_digit;

    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Failed to read input\n");
        return 1;
    }

    printf("The reverse is: ");

    do {
        last_digit = num % 10;
        printf("%d", last_digit);
        num = num / 10;
    } while (num != 0);

    printf("\n");

    return 0;
}
