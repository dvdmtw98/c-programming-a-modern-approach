/*
Write a program that counts the number of vowels (a, e, i, o, and u) in a sentence:
Enter a sentence: And that's the way it is.
Your sentence contains 6 vowels.
*/

#include <ctype.h>
#include <stdio.h>

int main(void) {
    char character;
    int count = 0;

    printf("Enter a sentence: ");
    while ((character = getchar()) != '\n') {
        switch (tolower(character)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count += 1;
                break;

            default:
                break;
        }
    }

    printf("Your sentence contains %d vowels.\n", count);
    return 0;
}
