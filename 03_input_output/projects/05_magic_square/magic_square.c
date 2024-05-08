/*
Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns, and diagonals:

Enter the numbers from 1 to 16 in any order:
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

16  3   2   13
5   10  11  8
9   6   7   12
4   15  14  1

Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 34

If the row, column, and diagonal sums are all the same (as they are in this example), the numbers are said to form a magic square. The magic square shown here appears in a 1514 engraving by artist and mathematician Albrecht Dürer. (Note that the middle numbers in the last row give the date of the engraving.)
*/

#include <stdio.h>

int main(void) {
    int num1, num2, num3, num4, num5, num6, num7, num8,
        num9, num10, num11, num12, num13, num14, num15, num16,
        row1_sum, row2_sum, row3_sum, row4_sum,
        column1_sum, column2_sum, column3_sum, column4_sum,
        diagonal1_sum, diagonal2_sum;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    if (scanf(
            "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
            &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8,
            &num9, &num10, &num11, &num12, &num13, &num14, &num15, &num16) != 16) {
        printf("Failed to read 16 numbers\n");
        return 1;
    }

    printf("\n%d\t%d\t%d\t%d\n", num1, num2, num3, num4);
    printf("%d\t%d\t%d\t%d\n", num5, num6, num7, num8);
    printf("%d\t%d\t%d\t%d\n", num9, num10, num11, num12);
    printf("%d\t%d\t%d\t%d\n\n", num13, num14, num15, num16);

    row1_sum = num1 + num2 + num3 + num4;
    row2_sum = num5 + num6 + num7 + num8;
    row3_sum = num9 + num10 + num11 + num12;
    row4_sum = num13 + num14 + num15 + num16;
    printf("Row sums: %d %d %d %d\n", row1_sum, row2_sum, row3_sum, row4_sum);

    column1_sum = num1 + num5 + num9 + num13;
    column2_sum = num2 + num6 + num10 + num14;
    column3_sum = num3 + num7 + num11 + num15;
    column4_sum = num4 + num8 + num12 + num16;
    printf("Column sums: %d %d %d %d\n", column1_sum, column2_sum, column3_sum, column4_sum);

    diagonal1_sum = num1 + num6 + num11 + num16;
    diagonal2_sum = num4 + num7 + num10 + num13;
    printf("Diagonal sums: %d %d\n", diagonal1_sum, diagonal2_sum);

    return 0;
}
