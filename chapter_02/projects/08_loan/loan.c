/*
Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments:

Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66

Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71

Display each balance with two digits after the decimal point.

Hint: Each month, the balance is decreased by the amount of the payment, but increased by the balance times the monthly
interest rate. To find the monthly interest rate, convert the interest rate entered by the user to a percentage and divide it by 12.
*/

#include <stdio.h>

int main(void) {
    float loan, interest, payment, monthly_interest;

    printf("Enter amount of loan: ");
    if (scanf("%f", &loan) != 1) {
        printf("Failed to initialize loan\n");
        return 1;
    }

    printf("Enter interest rate: ");
    if (scanf("%f", &interest) != 1) {
        printf("Failed to initialize interest\n");
        return 1;
    }

    printf("Enter monthly payment: ");
    if (scanf("%f", &payment) != 1) {
        printf("Failed to initialize monthly payment\n");
        return 1;
    }

    monthly_interest = (((loan * interest) / 100.0f) / 12.0f);
    loan = loan - payment + monthly_interest;
    printf("Balance remaining after first payment: %.2f\n", loan);

    monthly_interest = (((loan * interest) / 100.0f) / 12.0f);
    loan = loan - payment + monthly_interest;
    printf("Balance remaining after second payment: %.2f\n", loan);

    monthly_interest = (((loan * interest) / 100.0f) / 12.0f);
    loan = loan - payment + monthly_interest;
    printf("Balance remaining after third payment: %.2f\n", loan);

    return 0;
}
