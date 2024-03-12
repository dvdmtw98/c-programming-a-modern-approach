/*
Write a program that finds the largest in a series of numbers entered by the user. The program must prompt the user to enter numbers one by one. When the user enters 0 or a negative number, the program must display the largest nonnegative number entered:
Enter a number: 60
Enter a number: 38.3
Enter a number: 4.89
Enter a number: 100.62
Enter a number: 75.2295
Enter a number: 0
The largest number entered was 100.62

Notice that the numbers aren’t necessarily integers.
*/

#include <stdio.h>

int main(void) {
    float largest = 0.0f, num;

    for (;;) {
        printf("Enter a number: ");
        if (scanf("%f", &num) != 1) {
            printf("Failed to read input\n");
            return 1;
        }

        if (num == 0) {
            break;
        }

        if (num > largest) {
            largest = num;
        }
    }

    printf("The largest number entered was %f\n", largest);

    return 0;
}
