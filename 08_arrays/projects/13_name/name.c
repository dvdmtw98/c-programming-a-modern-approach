/*
Modify Programming Project 11 from Chapter 7 so that the program labels its output:
Enter a first and last name: Lloyd Fosdick
You entered the name: Fosdick, L.
The program will need to store the last name (but not the first name) in an array of characters until it can be printed. You may assume that the last name is no more than 20 characters long.
*/

#include <stdio.h>

int main(void) {
    int index = 0;
    char letter, initial, last_name[20] = {0};

    printf("Enter a first and last name: ");
    /* Skip whitespace at the start */
    while ((letter = getchar()) == ' ')
        ;

    initial = letter;
    /* Skip whitespace after first name */
    while ((letter = getchar()) != ' ')
        ;

    /* Read characters of last name while skipping trailing whitespaces */
    while ((letter = getchar()) != '\n' && index < 20) {
        if (letter != ' ') {
            last_name[index++] = letter;
        }
    }

    for (index = 0; index < 20; index++) {
        printf("%c", last_name[index]);
    }
    printf(", %c.\n", initial);

    return 0;
}
