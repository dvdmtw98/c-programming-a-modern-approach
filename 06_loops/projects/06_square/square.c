/*
Write a program that prompts the user to enter a number n, then prints all even squares between 1 and n.
For example, if the user enters 100, the program should print the following:
4
16
36
64
100
*/

#include <stdio.h>

int main(void) {
    int num, counter = 2;

    printf("Enter upper limit: ");
    if (scanf("%d", &num) != 1) {
        printf("Failed to read integer\n");
        return 1;
    }

    while (counter * counter <= num) {
        printf("%d\n", counter * counter);
        counter += 2;
    }

    return 0;
}
