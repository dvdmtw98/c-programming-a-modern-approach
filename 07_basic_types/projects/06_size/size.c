/*
Write a program that prints the values of sizeof(int), sizeof(short), sizeof(long), sizeof(float), sizeof(double) and sizeof(long double).
*/

#include <stdio.h>

int main(void) {
    printf("Size of short int: %ld\n", (unsigned long)sizeof(short int));
    printf("Size of int: %ld\n", (unsigned long)sizeof(int));
    printf("Size of long int: %ld\n", (unsigned long)sizeof(long int));
    printf("\n");
    printf("Size of float: %ld\n", (unsigned long)sizeof(float));
    printf("Size of double: %ld\n", (unsigned long)sizeof(double));
    printf("Size of long double: %ld\n", (unsigned long)sizeof(long double));

    return 0;
}
