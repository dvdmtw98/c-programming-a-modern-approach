/*
Modify Programming Project 11 so that the program continues adding terms until the current term becomes less than e, where e is a small (floating-point) number entered by the user.
*/

#include <stdio.h>

int main(void) {
    int counter = 1, factorial = 1;
    float num, term, epsilon = 1.0f;

    printf("Enter a (very small) float: ");
    if (scanf("%f", &num) != 1) {
        printf("Failed to read number\n");
        return 1;
    }

    for (;;) {
        factorial *= counter;
        term = 1.0f / factorial;

        if (term < num) {
            break;
        }

        epsilon += term;
        counter++;
    }

    printf("1/%d! = %g which is smaller than %g\n", counter, term, num);
    printf("Value of e: %g\n", epsilon);

    return 0;
}
