/*
One of the oldest known encryption techniques is the Caesar cipher, attributed to Julius Caesar. It involves replacing each letter in a message with another letter that is a fixed number of positions later in the alphabet. (If the replacement would go past the letter Z, the cipher “wraps around” to the beginning of the alphabet. For example, if each letter is replaced by the letter two positions after it, then Y would be replaced by A, and Z would be replaced by
B.) Write a program that encrypts a message using a Caesar cipher. The user will enter the message to be encrypted and the shift amount (the number of positions by which letters should be shifted):
Enter message to be encrypted: Go ahead, make my day.
Enter shift amount (1-25): 3
Encrypted message: Jr dkhdg, pdnh pb gdb.

Notice that the program can decrypt a message if the user enters 26 minus the original key:
Enter message to be encrypted: Jr dkhdg, pdnh pb gdb.
Enter shift amount (1-25): 23
Encrypted message: Go ahead, make my day.

You may assume that the message does not exceed 80 characters. Characters other than letters should be left unchanged. Lower-case letters remain lower-case when encrypted, and upper-case letters remain upper-case.

Hint: To handle the wrap-around problem, use the expression ((ch - 'A') + n) % 26 + 'A' to calculate the encrypted version of an uppercase letter, where ch stores the letter and n stores the shift amount. (You’ll need a similar expression for lower-case letters.)
*/

#include <stdio.h>

int main(void) {
    char message[80] = {0}, letter, final_letter;
    int iter1 = 0, iter2, shift;

    printf("Enter message to be encrypted: ");
    while ((letter = getchar()) != '\n') {
        message[iter1++] = letter;
    }

    printf("Enter shift amount (1-25): ");
    if (scanf("%d", &shift) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    printf("Encrypted message: ");
    for (iter2 = 0; iter2 < iter1; iter2++) {
        if (message[iter2] >= 'A' && message[iter2] <= 'Z') {
            final_letter = ((message[iter2] - 'A') + shift) % 26 + 'A';
        } else if (message[iter2] >= 'a' && message[iter2] <= 'z') {
            final_letter = ((message[iter2] - 'a') + shift) % 26 + 'a';
        } else {
            final_letter = message[iter2];
        }

        putchar(final_letter);
    }
    printf("\n");

    return 0;
}
