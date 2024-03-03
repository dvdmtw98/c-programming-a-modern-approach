/*
Write a program that calculates how many digits a number contains:
Enter a number: 374
The number 374 has 3 digits

You may assume that the number has no more than four digits.
Hint: Use if statements to test the number. For example, if the number is between 0 and 9, it has one digit. If the number is between 10 and 99, it has two digits.
*/

#include <stdio.h>

int main(void) {
    int num;

    printf("Enter a number: ");
    if (scanf("%4d", &num) != 1) {
        printf("Failed to read number\n");
        return 1;
    }

    if (num >= 0 && num <= 9) {
        printf("The number %d has 1 digit\n", num);
    } else if (num >= 10 && num <= 99) {
        printf("The number %d has 2 digits\n", num);
    } else if (num >= 100 && num <= 999) {
        printf("The number %d has 3 digits\n", num);
    } else {
        printf("The number %d has 4 digits\n", num);
    }

    return 0;
}
