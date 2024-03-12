/*
Programming Project 8 in Chapter 2 asked you to write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments. Modify the program so that it also asks the user to enter the number of payments and then displays the balance remaining after each of these payments.
*/

#include <stdio.h>

int main(void) {
    float loan, interest, payment, monthly_interest;
    int total_payments, payment_counter;

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

    printf("Enter number of payment: ");
    if (scanf("%d", &total_payments) != 1) {
        printf("Failed to payment count\n");
        return 1;
    }

    for (payment_counter = 1; payment_counter <= total_payments; payment_counter++) {
        monthly_interest = (((loan * interest) / 100.0f) / 12.0f);
        loan = loan - payment + monthly_interest;
        printf("Balance remaining after payment %.2d: %.2f\n", payment_counter, loan);
    }

    return 0;
}
