/*
Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added:
Enter an amount: 100.00
With tax added: $105.00
*/

#include <stdio.h>

#define TAX_VALUE 5.0f

int main(void)
{
    float original_amount, taxed_amount;

    printf("Enter an amount: ");
    if (scanf("%f", &original_amount) != 1)
    {
        printf("Failed to initialize amount");
        return 1;
    }

    taxed_amount = original_amount + (original_amount * (TAX_VALUE / 100.0f));
    printf("With tax added: $%.2f\n", taxed_amount);

    return 0;
}
