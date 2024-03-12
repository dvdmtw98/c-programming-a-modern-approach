/*
Modify the upc.c program of Section 4.1 so that it checks whether a UPC is valid. After the user enters a UPC, the program will display either VALID or NOT VALID.
*/

#include <stdio.h>

int main(void) {
    int d,
        i1, i2, i3, i4, i5,
        j1, j2, j3, j4, j5,
        first_sum, second_sum, total,
        upc, check;

    printf("Enter the first (single) digit: ");
    if (scanf("%1d", &d) != 1) {
        printf("Failed to read first (single) digit\n");
        return 1;
    }

    printf("Enter first group of five digits: ");
    if (scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5) != 5) {
        printf("Failed to read the first group of five digits\n");
        return 1;
    }

    printf("Enter second group of five digits: ");
    if (scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5) != 5) {
        printf("Failed to read the second group of five digits\n");
        return 1;
    }

    printf("Enter the last (single) digit: ");
    if (scanf("%1d", &check) != 1) {
        printf("Failed to read the last (single) digit\n");
        return 1;
    }

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    upc = 9 - ((total - 1) % 10);

    if (upc == check) {
        printf("VALID\n");
    } else {
        printf("NOT VALID\n");
    }

    return 0;
}
