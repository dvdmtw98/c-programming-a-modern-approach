/*
Write a program that calculates the average word length for a sentence:
Enter a sentence: It was deja vu all over again.
Average word length: 3.4
For simplicity, your program should consider a punctuation mark to be part of the word to which it is attached. Display the average word length to one decimal place.
*/

#include <stdio.h>

int main(void) {
    char character;
    float char_count = 0, word_count = 0;

    printf("Enter a sentence: ");

    while ((character = getchar()) != '\n') {
        if (character != ' ') {
            char_count += 1;
        } else {
            word_count += 1;
        }
    }
    word_count += 1;

    printf("Average word length: %.1f\n", char_count / word_count);
    return 0;
}
