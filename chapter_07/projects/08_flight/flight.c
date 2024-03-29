/*
Modify Programming Project 8 from Chapter 5 so that the user enters a time using the 12-hour clock. The input will have the form hours:minutes followed by either A, P, AM, or PM (either lower-case or upper-case). White space is allowed (but not required) between the numerical time and the AM/PM indicator. Examples of valid input:
1:15P
1:15PM
1:15p
1:15pm
1:15 P
1:15 PM
1:15 p
1:15 pm

You may assume that the input has one of these forms; there is no need to test for errors.
*/

#include <ctype.h>
#include <stdio.h>

int main(void) {

    int hour, minute, input_time,
        departure_time1 = (8 * 60),
        departure_time2 = (9 * 60) + 43,
        departure_time3 = (11 * 60) + 19,
        departure_time4 = (12 * 60) + 47,
        departure_time5 = (14 * 60),
        departure_time6 = (15 * 60) + 45,
        departure_time7 = (19 * 60),
        departure_time8 = (21 * 60) + 45;
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
    input_time = (hour * 60) + minute;

    printf("Closest departure time is  ");

    /* The (time2 - time1) / 2 logic is used to find the midpoint between the 2 times */
    if (input_time <= departure_time1 + (departure_time2 - departure_time1) / 2) {
        printf("8:00 a.m., arriving at 10:16 a.m.\n");
    } else if (input_time < departure_time2 + (departure_time3 - departure_time2) / 2) {
        printf("9:43 a.m., arriving at 11:52 a.m.\n");
    } else if (input_time < departure_time3 + (departure_time4 - departure_time3) / 2) {
        printf("11:19 a.m., arriving at 1:31 p.m.\n");
    } else if (input_time < departure_time4 + (departure_time5 - departure_time4) / 2) {
        printf("12:47 p.m., arriving at 3:00 p.m.\n");
    } else if (input_time < departure_time5 + (departure_time6 - departure_time5) / 2) {
        printf("2:00 p.m., arriving at 4:08 p.m.\n");
    } else if (input_time < departure_time6 + (departure_time7 - departure_time6) / 2) {
        printf("3:45 p.m., arriving at 5:55 p.m.\n");
    } else if (input_time < departure_time7 + (departure_time8 - departure_time7) / 2) {
        printf("7:00 p.m., arriving at 9:20 p.m.\n");
    } else {
        printf("9:45 p.m., arriving at 11:58 p.m.\n");
    }

    return 0;
}
