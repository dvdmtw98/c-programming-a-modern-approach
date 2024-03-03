/*
Write a program that asks the user for a two-digit number, then prints the English word for the number:
Enter a two-digit number: 45
You entered the number forty-five.

Hint: Break the number into two digits. Use one switch statement to print the word for the first digit (“twenty,” “thirty,” and so forth). Use a second switch statement to print the word for the second digit. Don’t forget that the numbers between 11 and 19 require special treatment.
*/

#include <stdio.h>

int main(void) {

    int number;
    printf("Enter a two-digit number: ");
    if (scanf("%d", &number) != 1) {
        printf("Failed to read input\n");
        return 1;
    }

    if (number < 10 || number > 99) {
        printf("Enter a number with only two-digits\n");
        return 0;
    }

    printf("You entered the number ");

    if (number / 10 == 1) {
        switch (number) {
            case 10:
                printf("ten.\n");
                break;

            case 11:
                printf("eleven.\n");
                break;

            case 12:
                printf("twelve.\n");
                break;

            case 13:
                printf("thirteen.\n");
                break;

            case 14:
                printf("fourteen.\n");
                break;

            case 15:
                printf("fifteen.\n");
                break;

            case 16:
                printf("sixteen.\n");
                break;

            case 17:
                printf("seventeen.\n");
                break;

            case 18:
                printf("eighteen.\n");
                break;

            case 19:
                printf("nineteen.\n");
                break;
        }
    } else {
        switch (number / 10) {
            case 2:
                printf("twenty-");
                break;

            case 3:
                printf("thirty-");
                break;

            case 4:
                printf("forty-");
                break;

            case 5:
                printf("fifty-");
                break;

            case 6:
                printf("sixty-");
                break;

            case 7:
                printf("seventy-");
                break;

            case 8:
                printf("eighty-");
                break;

            case 9:
                printf("ninety-");
                break;
        }

        switch (number % 10) {
            case 1:
                printf("one.\n");
                break;

            case 2:
                printf("two.\n");
                break;

            case 3:
                printf("three.\n");
                break;

            case 4:
                printf("four.\n");
                break;

            case 5:
                printf("five.\n");
                break;

            case 6:
                printf("six.\n");
                break;

            case 7:
                printf("seven.\n");
                break;

            case 8:
                printf("eight.\n");
                break;

            case 9:
                printf("nine.\n");
                break;
        }
    }

    return 0;
}
