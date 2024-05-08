/*
Write a program that reads a 5 × 5 array of integers and then prints the row sums and the column sums:
Enter row 1: 8 3 9 0 10
Enter row 2: 3 5 17 1 1
Enter row 3: 2 8 6 23 1
Enter row 4: 15 7 3 2 9
Enter row 5: 6 14 2 6 0

Row totals: 30 27 40 36 28
Column totals: 34 37 37 32 21
*/

#include <stdio.h>

#define ROW 5
#define COLUMN 5

int main(void) {
    int matrix[ROW][COLUMN], i, j, temp_sum;

    for (i = 0; i < ROW; i++) {
        printf("Enter row %d: ", i + 1);
        for (j = 0; j < COLUMN; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input\n");
                return 1;
            }
        }
    }

    printf("\nRow totals: ");
    for (i = 0; i < ROW; i++) {
        temp_sum = 0;
        for (j = 0; j < COLUMN; j++) {
            temp_sum += matrix[i][j];
        }
        printf("%d ", temp_sum);
    }

    printf("\nColumn totals: ");
    for (i = 0; i < ROW; i++) {
        temp_sum = 0;
        for (j = 0; j < COLUMN; j++) {
            temp_sum += matrix[j][i];
        }
        printf("%d ", temp_sum);
    }
    printf("\n");

    return 0;
}
