/*
Using the array of Exercise 8, write a program fragment that computes the average temperature for a month (averaged over all days of the month and all hours of the day).
*/

#include <stdio.h>

#define DAYS 30
#define HOURS 24

int main(void) {
    int i, j;
    float average_temperature,
        temperature_sum = 0,
        temperature_readings[DAYS][HOURS] = {0}; /* Needs to be initialized with real values */

    for (i = 0; i < DAYS; i++) {
        for (j = 0; j < HOURS; j++) {
            temperature_sum += temperature_readings[i][j];
        }
    }

    average_temperature = temperature_sum / (DAYS * HOURS);
    printf("Average Temperature: .2f\n", average_temperature);

    return 0;
}
