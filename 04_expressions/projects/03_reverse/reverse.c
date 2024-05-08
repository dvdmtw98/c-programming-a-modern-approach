/*
Rewrite the program in Programming Project 2 so that it prints the reversal of a three-digit number without using arithmetic to split the number into digits.

Hint: See the upc.c program of Section 4.1.
*/

#include <stdio.h>

int main(void) {
    int hundreds, tens, units;

    printf("Enter a three-digit number: ");
    if (scanf("%1d%1d%1d", &hundreds, &tens, &units) != 3) {
        printf("Failed to read input\n");
        return 1;
    }

    printf("The reverse is: %d%d%d\n", units, tens, hundreds);

    return 0;
}
