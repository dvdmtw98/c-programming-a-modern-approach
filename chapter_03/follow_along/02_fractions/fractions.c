/* Adds two fractions */

#include <stdio.h>

int main(void) {
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter first fraction: ");
    if (scanf("%d/%d", &num1, &denom1) != 2) {
        printf("Failed to read fraction");
        return 1;
    }

    printf("Enter second fraction: ");
    if (scanf("%d/%d", &num2, &denom2) != 2) {
        printf("Failed to read fraction");
        return 1;
    }

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
