/*
Write a program that reads an integer entered by the user and displays it in octal (base 8):

Enter a number between 0 and 32767: 1953
In octal, your number is: 03641

The output should be displayed using five digits, even if fewer digits are sufficient.

Hint: To convert the number to octal, first divide it by 8; the remainder is the last digit of the octal number (1, in this case). Then divide the original number by 8 and repeat the process to arrive at the next-to-last digit. (printf is capable of displaying numbers in base 8, as we'll see in Chapter 7, so there’s actually an easier way to write this program.)
*/

#include <stdio.h>

int main(void) {
    int num, digit1, digit2, digit3, digit4, digit5;

    printf("Enter a number between 0 and 32767: ");
    if (scanf("%5d", &num) != 1) {
        printf("Failed to read input");
        return 1;
    }

    digit1 = num % 8;
    num = num / 8;
    digit2 = num % 8;
    num = num / 8;
    digit3 = num % 8;
    num = num / 8;
    digit4 = num % 8;
    num = num / 8;
    digit5 = num % 8;
    num = num / 8;

    printf("In octal, your number is: %d%d%d%d%d\n", digit5, digit4, digit3, digit2, digit1);

    return 0;
}
