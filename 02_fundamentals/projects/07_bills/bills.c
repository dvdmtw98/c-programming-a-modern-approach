/*
Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills:

Enter a dollar amount: 93

$20 bills: 4
$10 bills: 1
$5 bills: 0
$1 bills: 3

Hint: Divide the amount by 20 to determine the number of $20 bills needed, and then reduce
the amount by the total value of the $20 bills. Repeat for the other bill sizes. Be sure to use
integer values throughout, not floating-point numbers.
*/

#include <stdio.h>

int main(void) {
    int amount, bills_20, bills_10, bills_5;

    printf("Enter a dollar amount: ");
    if (scanf("%d", &amount) != 1) {
        printf("Failed to initialize value of amount\n");
        return 1;
    }

    bills_20 = amount / 20;
    amount = amount - (20 * bills_20);
    printf("$20 bills: %d\n", bills_20);

    bills_10 = amount / 10;
    amount = amount - (10 * bills_10);
    printf("$10 bills: %d\n", bills_10);

    bills_5 = amount / 5;
    amount = amount - (5 * bills_5);
    printf("$5 bills: %d\n", bills_5);

    printf("$1 bills: %d\n", amount);

    return 0;
}
