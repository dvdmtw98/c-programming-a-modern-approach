/*
Write a program that reverses the words in a sentence:
Enter a sentence: you can cage a swallow can't you?
Reversal of sentence: you can't swallow a cage can you?

Hint: Use a loop to read the characters one by one and store them in a one-dimensional char array. Have the loop stop at a period, question mark, or exclamation point (the "terminating character"), which is saved in a separate char variable. Then use a second loop to search backward through the array for the beginning of the last word. Print the last word, then search backward for the next-to-last word. Repeat until the beginning of the array is reached. Finally, print the terminating character.
*/

#include <stdio.h>

#define SIZE 200

int main(void) {
    char sentence[SIZE] = {0}, letter, terminator = '.';
    int iter1 = 0, iter2, iter3, start, word_length = 0;

    printf("Enter a sentence: ");
    while ((letter = getchar()) != '\n' && iter1 < SIZE) {
        if (letter == '.' || letter == '?' || letter == '!') {
            terminator = letter;
            break;
        }

        sentence[iter1++] = letter;
    }

    printf("Reversal of sentence: ");
    for (iter2 = iter1; iter2 >= 0; iter2--) {
        if (sentence[iter2] == ' ' || iter2 == 0) {
            start = iter2 == 0 ? 0 : iter2 + 1;
            for (iter3 = start; iter3 < iter2 + word_length; iter3++) {
                putchar(sentence[iter3]);
            }

            word_length = 0;
            if (iter2 != 0) {
                putchar(' ');
            }
        }
        word_length++;
    }
    printf("%c\n", terminator);

    return 0;
}
