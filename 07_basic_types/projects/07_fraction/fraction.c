/*
Modify Programming Project 6 from Chapter 3 so that the user may add, subtract, multiply, or divide two fractions (by entering either +, -, *, or / between the fractions).
*/

#include <stdio.h>

int main(void) {
    int num1, denom1, num2, denom2, result_num, result_denom;
    int temp_num, temp_denom, temp;
    char operator;

    printf("Enter two fractions separated by a operator: ");
    if (scanf("%d /%d %c %d /%d", &num1, &denom1, &operator, & num2, &denom2) != 5) {
        printf("Failed to read inputs\n");
        return 1;
    }

    /* Fraction Rules: https://www.splashlearn.com/math-vocabulary/wp-content/uploads/2023/09/Fraction-rules-2.png */
    switch (operator) {
        case '+':
            result_num = (num1 * denom2) + (num2 * denom1);
            result_denom = denom1 * denom2;
            break;

        case '-':
            result_num = (num1 * denom2) - (num2 * denom1);
            result_denom = denom1 * denom2;
            break;

        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            break;

        case '/':
            result_num = num1 * denom2;
            result_denom = num2 * denom1;
            break;

        default:
            printf("Invalid operator provided\n");
            return 1;
    }

    /* The GCD code from Chapter 6 - Project 2 can be used to show fraction in reduced form */
    printf("Result: %d/%d\n", result_num, result_denom);

    return 0;
}
