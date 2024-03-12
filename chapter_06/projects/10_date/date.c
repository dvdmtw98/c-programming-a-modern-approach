/*
Programming Project 9 in Chapter 5 asked you to write a program that determines which of two dates comes earlier on the calendar. Generalize the program so that the user may enter any number of dates. The user will enter 0/0/0 to indicate that no more dates will be entered:
Enter a date (mm/dd/yy): 3/6/08
Enter a date (mm/dd/yy): 5/17/07
Enter a date (mm/dd/yy): 6/3/07
Enter a date (mm/dd/yy): 0/0/0
5/17/07 is the earliest date
*/

#include <stdio.h>

int main(void) {
    int day1 = 0, month1 = 0, year1 = 0,
        day2, month2, year2,
        date_type = 0;

    for (;;) {
        printf("Enter a date (mm/dd/yy): ");
        if (scanf("%2d/%2d/%2d", &month2, &day2, &year2) != 3) {
            printf("Failed to read the date\n");
            return 1;
        }

        if (month2 == 0 && day2 == 0 && year2 == 0) {
            break;
        }

        /* Get 1st date entered by user as earliest date */
        if (month1 == 0 && day1 == 0 && year1 == 0) {
            month1 = month2;
            day1 = day2;
            year1 = year2;
        }

        /*
        -1: Date 2 is larger
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
        }

        if (date_type == 1) {
            month1 = month2;
            day1 = day2;
            year1 = year2;
        }
    }

    printf("%d/%d/%.2d is the earliest date\n", month1, day1, year1);

    return 0;
}
