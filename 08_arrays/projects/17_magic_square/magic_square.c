/*
Write a program that prints an n × n magic square (a square arrangement of the numbers 1, 2, …, n2 in which the sums of the rows, columns, and diagonals are all the same). The user will specify the value of n:

This program creates a magic square of a specified size.
The size must be an odd number between 1 and 99.
Enter size of magic square: 5
   17   24    1    8   15
   23    5    7   14   16
    4    6   13   20   22
   10   12   19   21    3
   11   18   25    2    9

Store the magic square in a two-dimensional array. Start by placing the number 1 in the middle of row 0. Place each of the remaining numbers 2, 3, …, n2 by moving up one row and over one column. Any attempt to go outside the bounds of the array should “wrap around” to the opposite side of the array. For example, instead of storing the next number in row –1, we would store it in row n – 1 (the last row). Instead of storing the next number in column n, we would store it in column 0. If a particular array element is already occupied, put the number directly below the previously stored number. If your compiler supports variable-length arrays, declare the array to have n rows and n columns. If not, declare the array to have 99 rows and 99 columns.
*/

#include <stdio.h>

int main(void) {
    int size, row, col, count, new_row, new_col;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    if (scanf("%2d", &size) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (size % 2 == 0) {
        printf("Magic square size has to be an odd number\n");
        return 1;
    }

    /* Variable-length array initialization */
    int magic_square[size][size];
    for (row = 0; row < size; row++) {
        for (col = 0; col < size; col++) {
            magic_square[row][col] = 0;
        }
    }

    count = 1, row = 0, col = size / 2;
    while (count <= size * size) {
        magic_square[row][col] = count;

        if (row == 0) {
            new_row = size - 1;
        } else {
            new_row = row - 1;
        }

        if (col == size - 1) {
            new_col = 0;
        } else {
            new_col = col + 1;
        }

        if (magic_square[new_row][new_col] != 0) {
            row = row + 1;
        } else {
            row = new_row;
            col = new_col;
        }

        count++;
    }

    for (row = 0; row < size; row++) {
        for (col = 0; col < size; col++) {
            printf("%6d", magic_square[row][col]);
        }
        printf("\n");
    }

    return 0;
}
