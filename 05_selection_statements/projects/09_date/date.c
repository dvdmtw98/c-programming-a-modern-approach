/*
Write a program that prompts the user to enter two dates and then indicates which date comes earlier on the calendar:

Enter first date (mm/dd/yy): 3/6/08
Enter second date (mm/dd/yy): 5/17/07
5/17/07 is earlier than 3/6/08
*/

#include <stdio.h>

int main(void) {
    int day1, month1, year1,
        day2, month2, year2,
        date_type;

    printf("Enter first date (mm/dd/yy): ");
    if (scanf("%2d/%2d/%2d", &month1, &day1, &year1) != 3) {
        printf("Failed to read first date\n");
        return 1;
    }

    printf("Enter second date (mm/dd/yy): ");
    if (scanf("%2d/%2d/%2d", &month2, &day2, &year2) != 3) {
        printf("Failed to read second date\n");
        return 1;
    }

    /*
    -1: Date 2 is larger
    0: Dates are equal
    1: Date 1 is larger
    */

    if (year1 > year2) {
        date_type = 1;
    } else if (year1 < year2) {
        date_type = -1;
    } else if (month1 > month2) {
        date_type = 1;
    } else if (month1 < month2) {
        date_type = -1;
    } else if (day1 > day2) {
        date_type = 1;
    } else if (day1 < day2) {
        date_type = -1;
    } else {
        date_type = 0;
    }

    switch (date_type) {
        case 1:
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, day2, year2, month1, day1, year1);
            break;

        case -1:
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2);
            break;

        case 0:
            printf("%d/%d/%.2d is equal to %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2);
            break;
    }

    return 0;
}
