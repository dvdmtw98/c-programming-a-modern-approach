/*
Modify Programming Project 8 from Chapter 5 so that the departure times are stored in an array and the arrival times are stored in a second array. (The times are integers, representing the number of minutes since midnight.) The program will use a loop to search the array of departure times for the one closest to the time entered by the user.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int user_time, hour, minute;
    int flight, flight_index = 0, time_delta, smallest_delta;
    int depart_times[8] = {
        (8 * 60),
        (9 * 60) + 43,
        (11 * 60) + 19,
        (12 * 60) + 47,
        (14 * 60),
        (15 * 60) + 45,
        (19 * 60),
        (21 * 60) + 45,
    };
    int arrive_times[8] = {
        (8 * 60) + 16,
        (11 * 60) + 52,
        (13 * 60) + 31,
        (15 * 60),
        (16 * 60) + 8,
        (17 * 60) + 55,
        (21 * 60) + 20,
        (23 * 60) + 58,
    };

    printf("Enter a 24-hour time: ");
    if (scanf("%2d:%2d", &hour, &minute) != 2) {
        printf("Failed to read time\n");
        return 1;
    }
    user_time = (hour * 60) + minute;

    smallest_delta = 1440;
    for (flight = 0; flight < 8; flight++) {
        time_delta = abs(user_time - depart_times[flight]);
        if (time_delta < smallest_delta) {
            smallest_delta = time_delta;
            flight_index = flight;
        }
    }

    printf("Closest departure time is %.2d:%.2d", depart_times[flight_index] / 60, depart_times[flight_index] % 60);
    printf(", arriving at %.2d:%.2d\n", arrive_times[flight_index] / 60, arrive_times[flight_index] % 60);

    return 0;
}
