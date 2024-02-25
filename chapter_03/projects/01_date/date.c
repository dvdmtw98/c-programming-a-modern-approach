/*
Write a program that accepts a date from the user in the form mm/dd/yyyy and then displays it in the form yyyymmdd:

Enter a date (mm/dd/yyyy): 2/17/2011
You entered the date 20110217
*/

#include <stdio.h>

int main(void) {
    int date, month, year;

    printf("Enter a date (mm/dd/yyyy): ");
    if (scanf("%d/%d/%d", &month, &date, &year) != 3) {
        printf("Failed to read input");
        return 1;
    }

    printf("You entered the date %d%.2d%.2d\n", year, month, date);

    return 0;
}
