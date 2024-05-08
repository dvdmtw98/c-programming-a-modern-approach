/*
Write a program that asks the user for a 12-hour time, then displays the time in 24-hour form:
Enter a 12-hour time: 9:11 PM
Equivalent 24-hour time: 21:11
See Programming Project 8 for a description of the input format.
*/

#include <ctype.h>
#include <stdio.h>

int main(void) {
    int hour, minute;
    char am_pm;

    printf("Enter a 12-hour time: ");
    if (scanf("%2d:%2d %c", &hour, &minute, &am_pm) != 3) {
        printf("Failed to read time\n");
        return 1;
    }

    if (toupper(am_pm) == 'P' && hour != 12) {
        hour += 12;
    } else if (toupper(am_pm) == 'A' && hour == 12) {
        hour = 0;
    }

    printf("Equivalent 24-hour time: %2d:%2d\n", hour, minute);

    return 0;
}
