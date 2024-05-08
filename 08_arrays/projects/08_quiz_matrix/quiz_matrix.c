/*
Modify Programming Project 7 so that it prompts for five quiz grades for each of five students, then computes the total score and average score for each student, and the average score, high score, and low score for each quiz.
*/

#include <stdio.h>

#define QUIZ_COUNT 5
#define STUDENT_COUNT 5

int main(void) {
    int quiz_matrix[QUIZ_COUNT][STUDENT_COUNT],
        i, j, temp_total, temp_high, temp_low;
    float average_score;

    for (i = 0; i < QUIZ_COUNT; i++) {
        printf("Enter grades of student %d: ", i + 1);
        for (j = 0; j < STUDENT_COUNT; j++) {
            if (scanf("%d", &quiz_matrix[i][j]) != 1) {
                printf("Invalid input\n");
                return 1;
            }
        }
    }

    printf("\nStudent  Total  Average\n");
    for (i = 0; i < QUIZ_COUNT; i++) {
        temp_total = 0;
        for (j = 0; j < STUDENT_COUNT; j++) {
            temp_total += quiz_matrix[i][j];
        }
        average_score = (float)temp_total / QUIZ_COUNT;
        printf("%4d     %3d      %.2f\n", i, temp_total, average_score);
    }

    printf("\nQuiz  Average  High  Low\n");
    for (i = 0; i < QUIZ_COUNT; i++) {
        temp_total = 0;
        temp_high = temp_low = quiz_matrix[0][i];
        for (j = 0; j < STUDENT_COUNT; j++) {
            temp_total += quiz_matrix[j][i];
            if (temp_high < quiz_matrix[j][i]) {
                temp_high = quiz_matrix[j][i];
            }
            if (temp_low > quiz_matrix[j][i]) {
                temp_low = quiz_matrix[j][i];
            }
        }
        average_score = (float)temp_total / STUDENT_COUNT;
        printf("%2d     %.2f     %2d   %2d\n", i, average_score, temp_high, temp_low);
    }

    return 0;
}
