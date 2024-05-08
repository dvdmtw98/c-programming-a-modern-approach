/*
Modify Programming Project 4 from Chapter 7 so that the program labels its output:
Enter phone number: 1-800-COL-LECT
In numeric form: 1-800-265-5328
The program will need to store the phone number (either in its original form or in its numeric form) in an array of characters until it can be printed. You may assume that the phone number is no more than 15 characters long.
*/

#include <stdio.h>

#define SIZE (int)(sizeof(phone_no) / sizeof(phone_no[0]))

int main(void) {
    int number;
    char phone_no[15] = {0};

    printf("Enter phone number: ");
    for (number = 0; number < SIZE; number++) {
        if (scanf("%c", &phone_no[number]) != 1) {
            printf("Invalid input\n");
            return 1;
        }
    }

    printf("In numeric form: ");
    for (number = 0; number < SIZE; number++) {
        switch (phone_no[number]) {
            case 'A':
            case 'B':
            case 'C':
                phone_no[number] = '2';
                break;

            case 'D':
            case 'E':
            case 'F':
                phone_no[number] = '3';
                break;

            case 'G':
            case 'H':
            case 'I':
                phone_no[number] = '4';
                break;

            case 'J':
            case 'K':
            case 'L':
                phone_no[number] = '5';
                break;

            case 'M':
            case 'N':
            case 'O':
                phone_no[number] = '6';
                break;

            case 'P':
            case 'R':
            case 'S':
                phone_no[number] = '7';
                break;

            case 'T':
            case 'U':
            case 'V':
                phone_no[number] = '8';
                break;

            case 'W':
            case 'X':
            case 'Y':
                phone_no[number] = '9';
                break;
        }

        printf("%c", phone_no[number]);
    }
    printf("\n");

    return 0;
}
