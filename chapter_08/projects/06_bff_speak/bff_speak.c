/*
The prototypical Internet newbie is a fellow named B1FF, who has a unique way of writing messages. Here’s a typical B1FF communiqué:
H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!

Write a “B1FF filter” that reads a message entered by the user and translates it into B1FF speak:
Enter message: Hey dude, C is rilly cool
In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!

Your program should convert the message to upper-case letters, substitute digits for certain letters (A -> 4, B -> 8, E -> 3, I -> 1, O -> 0, S -> 5), and then append 10 or so exclamation marks.

Hint: Store the original message in an array of characters, then go back through the array,
translating and printing characters one by one.
*/

#include <ctype.h>
#include <stdio.h>

#define SIZE 40

int main(void) {
    int i = 0;
    char input_char, message[SIZE] = {0};

    printf("Enter message: ");
    while ((input_char = getchar()) != '\n' && i < SIZE) {
        message[i++] = input_char;
    }

    printf("In B1FF-speak: ");
    for (i = 0; i < SIZE; i++) {
        switch (message[i]) {
            case 'a':
            case 'A':
                putchar('4');
                break;

            case 'b':
            case 'B':
                putchar('8');
                break;

            case 'e':
            case 'E':
                putchar('3');
                break;

            case 'i':
            case 'I':
                putchar('1');
                break;

            case 'o':
            case 'O':
                putchar('0');
                break;

            case 's':
            case 'S':
                putchar('5');
                break;

            default:
                putchar(toupper(message[i]));
                break;
        }
    }
    printf("!!!!!!!!\n");

    return 0;
}
