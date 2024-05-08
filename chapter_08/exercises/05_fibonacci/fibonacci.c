/*
The Fibonacci numbers are 0, 1, 1, 2, 3, 5, 8, 13, …, where each number is the sum of the two preceding numbers. Write a program fragment that declares an array named fib_numbers of length 40 and fills the array with the first 40 Fibonacci numbers.

Hint: Fill in the first two numbers individually, then use a loop to compute the remaining numbers.
*/

#include <stdio.h>

#define SIZE (int)(sizeof(fibonacci_series) / sizeof(fibonacci_series[0]))

int main(void) {
    int i;
    int fibonacci_series[40] = {0, 1};

    for (i = 2; i < SIZE; i++) {
        fibonacci_series[i] = fibonacci_series[i - 1] + fibonacci_series[i - 2];
    }

    return 0;
}
