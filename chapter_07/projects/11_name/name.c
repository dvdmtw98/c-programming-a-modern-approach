/*
Write a program that takes a first name and last name entered by the user and displays the last name, a comma, and the first initial, followed by a period:
Enter a first and last name: Lloyd Fosdick
Fosdick, L.

The user’s input may contain extra spaces before the first name, between the first and last names, and after the last name.
*/

#include <stdio.h>

int main(void) {
    char character, initial;

    printf("Enter a first and last name: ");
    /* Skip whitespace at the start */
    while ((character = getchar()) == ' ')
        ;

    initial = character;
    /* Skip whitespace after first name */
    while ((character = getchar()) != ' ')
        ;

    /* Print characters of last name while skipping trailing whitespaces */
    while ((character = getchar()) != '\n' && character != ' ') {
        putchar(character);
    }

    printf(", %c.\n", initial);

    return 0;
}
