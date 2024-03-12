/*
Write a program that finds the largest and smallest of four integers entered by the user:
Enter four integers: 21 43 10 35
Largest: 43
Smallest: 10

Use as few if statements as possible. Hint: Four if statements are sufficient.
*/

#include <stdio.h>

int main(void) {
    int num1, num2, num3, num4,
        max1, max2, largest,
        min1, min2, smallest;

    printf("Enter four integers: ");
    if (scanf("%d %d %d %d", &num1, &num2, &num3, &num4) != 4) {
        printf("Failed to read the (four) numbers\n");
        return 1;
    }

    if (num1 > num2) {
        max1 = num1;
        min1 = num2;
    } else {
        max1 = num2;
        min1 = num1;
    }

    if (num3 > num4) {
        max2 = num3;
        min2 = num4;
    } else {
        max2 = num4;
        min2 = num3;
    }

    if (max1 > max2) {
        largest = max1;
    } else {
        largest = max2;
    }

    if (min1 < min2) {
        smallest = min1;
    } else {
        smallest = min2;
    }

    printf("Largest : %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}
