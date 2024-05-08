/*
Write a program that generates a “random walk” across a 10 × 10 array. The array will contain characters (all '.' initially). The program must randomly “walk” from element to element, always going up, down, left, or right by one element. The elements visited by the program will be labeled with the letters A through Z, in the order visited. Here’s an example of the desired output:
A . . . . . . . . .
B C D . . . . . . .
. F E . . . . . . .
H G . . . . . . . .
I . . . . . . . . .
J . . . . . . . Z .
K . . R S T U V Y .
L M P Q . . . W X .
. N O . . . . . . .
. . . . . . . . . .

Hint: Use the srand and rand functions (see deal.c) to generate random numbers. After generating a number, look at its remainder when divided by 4. There are four possible values for the remainder—0, 1, 2, and 3—indicating the direction of the next move. Before performing a move, check that (a) it won’t go outside the array, and (b) it doesn’t take us to
an element that already has a letter assigned. If either condition is violated, try moving in another direction. If all four directions are blocked, the program must terminate. Here's an example of premature termination:
A B G H I . . . . .
. C F . J K . . . .
. D E . M L . . . .
. . . . N O . . . .
. . W X Y P Q . . .
. . V U T S R . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
Y is blocked on all four sides, so there’s no place to put Z.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 10
#define COLUMN 10

#define EMPTY '.'
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

int main(void) {
    int row, column, index, direction, possible_move[4];
    char matrix[ROW][COLUMN], letter;

    srand((unsigned)time(NULL));

    for (row = 0; row < ROW; row++) {
        for (column = 0; column < COLUMN; column++) {
            matrix[row][column] = '.';
        }
    }

    row = column = 0;
    for (letter = 'A'; letter <= 'Z'; letter++) {
        matrix[row][column] = letter;

        for (index = 0; index < 4; index++) {
            possible_move[index] = 0;
        }

        if (column - 1 >= 0 && matrix[row][column - 1] == EMPTY) {
            possible_move[UP] = 1;
        }
        if (column + 1 < COLUMN && matrix[row][column + 1] == EMPTY) {
            possible_move[DOWN] = 1;
        }
        if (row - 1 >= 0 && matrix[row - 1][column] == EMPTY) {
            possible_move[LEFT] = 1;
        }
        if (row + 1 < ROW && matrix[row + 1][column] == EMPTY) {
            possible_move[RIGHT] = 1;
        }

        if (possible_move[UP] + possible_move[DOWN] + possible_move[LEFT] + possible_move[RIGHT] == 0) {
            break;
        }

        while (1) {
            direction = rand() % 4;
            if (possible_move[direction]) {
                switch (direction) {
                    case UP:
                        --column;
                        break;

                    case DOWN:
                        ++column;
                        break;

                    case LEFT:
                        --row;
                        break;

                    case RIGHT:
                        ++row;
                        break;
                }
                break;
            }
        }
    }

    for (row = 0; row < ROW; row++) {
        for (column = 0; column < COLUMN; column++) {
            printf("%c ", matrix[row][column]);
        }
        printf("\n");
    }

    return 0;
}
