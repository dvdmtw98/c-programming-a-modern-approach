/*
Write a program that evaluates an expression:
Enter an expression: 1 + 2.5 * 3
Value of expression: 10.5

The operands in the expression are floating-point numbers; the operators are +, -, *, and /.
The expression is evaluated from left to right (no operator takes precedence over any other operator).
*/

#include <stdio.h>

int main(void) {
    char character;
    float number, total;

    printf("Enter an expression: ");
    if (scanf("%f", &total) != 1) {
        printf("Failed to read number");
        return 1;
    }

    while ((character = getchar()) != '\n') {
        switch (character) {
            case '+':
                if (scanf("%f", &number) != 1) {
                    printf("Failed to read number");
                    return 1;
                }
                total += number;
                break;

            case '-':
                if (scanf("%f", &number) != 1) {
                    printf("Failed to read number");
                    return 1;
                }
                total -= number;
                break;

            case '*':
                if (scanf("%f", &number) != 1) {
                    printf("Failed to read number");
                    return 1;
                }
                total *= number;
                break;

            case '/':
                if (scanf("%f", &number) != 1) {
                    printf("Failed to read number");
                    return 1;
                }
                total /= number;
                break;

            default:
                break;
        }
    }

    printf("Value of expression: %.2f\n", total);
    return 0;
}
