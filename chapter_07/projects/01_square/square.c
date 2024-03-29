/*
The square2.c program of Section 6.3 will fail (usually by printing strange answers) if i * i exceeds the maximum int value. Run the program and determine the smallest value of n that causes failure. Try changing the type of i to short and running the program again. (Don't forget to update the conversion specifications in the call of printf!) Then try long. From these experiments, what can you conclude about the number of bits used to store integer types on your machine?
*/

#include <stdio.h>

int main(void) {
    long int i;
    /* The error occurs at such a large number that type of n also had to be changed */
    long int n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    if (scanf("%ld", &n) != 1) {
        printf("Failed to read number\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        printf("%40ld%40ld\n", i, i * i);
    }

    return 0;
}

/*
i is a short int
Unexpected values when n = 182
Square of 181 = 32,761 requires 16 bits (2 byte) to be stored in binary
Which means my system uses 2 bytes to store short int

i is a int
Unexpected values when n = 46,341
Square of 46,340 = 2,147,395,600 requires 32 bits (4 byte) to be stored in binary
Which means my system uses 4 bytes to store int

i is a long int
Unexpected values when n = 3,037,000,500
Square of 3,037,000,499 = 9,223,372,030,926,249,001 requires 64 bits (8 byte) to be stored in binary
Which means my system uses 8 bytes to store long int
*/
