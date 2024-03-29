/*
Write a program that computes the factorial of a positive integer:
Enter a positive integer: 6
Factorial of 6: 720

(a) Use a short variable to store the value of the factorial. What is the largest value of n for which the program correctly prints the factorial of n?
(b) Repeat part (a), using an int variable instead.
(c) Repeat part (a), using a long variable instead.
(d) Repeat part (a), using a long long variable instead (if your compiler supports the long long type).
(e) Repeat part (a), using a float variable instead.
(f) Repeat part (a), using a double variable instead.
(g) Repeat part (a), using a long double variable instead.

In cases (e)–(g), the program will display a close approximation of the factorial, not necessarily the exact value.
*/

#include <stdio.h>

int main(void) {
    int num, count;
    long long int factorial = 1;

    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Failed to read number\n");
        return 1;
    }

    for (count = 1; count <= num; count++) {
        factorial *= count;
    }

    printf("Factorial of %d: %lld\n", num, factorial);
    return 0;
}

/*
num = 7 (short int)
num = 12 (int)
num = 20 (long int)

Need to compile with -std=c99
num = 20 (long long int)

num = 34 (float)
num = 170 (double)
num = 1754 (long double)
*/
