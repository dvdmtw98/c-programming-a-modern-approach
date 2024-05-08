/*
Modify the repdigit.c program of Section 8.1 so that it shows which digits (if any) were repeated:
Enter a number: 939577
Repeated digit(s): 7 9
*/

#include <stdio.h>

int main(void) {
    int digit_seen[10] = {0};
    int digit, iter;
    long n;

    printf("Enter a number: ");
    if (scanf("%ld", &n) != 1) {
        printf("Failed to read input\n");
        return 1;
    }

    while (n > 0) {
        digit = n % 10;
        digit_seen[digit]++;
        n /= 10;
    }

    printf("Repeated digit(s): ");
    for (iter = 0; iter < 10; iter++) {
        if (digit_seen[iter] > 1) {
            printf("%d  ", iter);
        }
    }
    printf("\n");

    return 0;
}
