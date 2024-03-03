/*
The following table shows the daily flights from one city to another:
Departure time          Arrival time
8:00 a.m.               10:16 a.m.
9:43 a.m.               11:52 a.m.
11:19 a.m.              1:31 p.m.
12:47 p.m.              3:00 p.m.
2:00 p.m.               4:08 p.m.
3:45 p.m.               5:55 p.m.
7:00 p.m.               9:20 p.m.
9:45 p.m.               11:58 p.m.

Write a program that asks user to enter a time (expressed in hours and minutes, using the 24-hour clock). The program then displays the departure and arrival times for the flight whose departure time is closest to that entered by the user:
Enter a 24-hour time: 13:15
Closest departure time is 12:47 p.m., arriving at 3:00 p.m.

Hint: Convert the input into a time expressed in minutes since midnight, and compare it to the departure times, also expressed in minutes since midnight. For example, 13:15 is 13 × 60 + 15 = 795 minutes since midnight, which is closer to 12:47 p.m. (767 minutes since midnight) than to any of the other departure times.
*/

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

    printf("Enter a 24-hour time: ");
    if (scanf("%2d:%2d", &hour, &minute) != 2) {
        printf("Failed to read time\n");
        return 1;
    }

    input_time = (hour * 60) + minute;

    printf("Closest departure time is  ");

    // The (time2 - time1) / 2 logic is used to find the midpoint between the 2 times
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
