/*
Modify the interest.c program of Section 8.1 so that it compounds interest monthly instead of annually. The form of the output shouldn’t change; the balance should still be shown at annual intervals.
*/

#include <stdio.h>

#define NUM_RATES (int)(sizeof(value) / sizeof(value[0]))
#define INITIAL_BALANCE 100

int main(void) {
    int i, interest_rate, num_years, year, month;
    double value[5];

    printf("Enter interest rate: ");
    if (scanf("%d", &interest_rate) != 1) {
        printf("Invalid interest rate\n");
        return -1;
    }

    printf("Enter number of years: ");
    if (scanf("%d", &num_years) != 1) {
        printf("Invalid value for years\n");
        return -1;
    }

    printf("\nYears");
    for (i = 0; i < NUM_RATES; i++) {
        printf("%7d%%", interest_rate + i);
        value[i] = INITIAL_BALANCE;
    }

    printf("\n");
    for (year = 1; year <= num_years; year++) {
        printf("%3d ", year);
        for (i = 0; i < NUM_RATES; i++) {
            for (month = 1; month <= 12; month++) {
                value[i] += ((double)(interest_rate + i) / 12) / 100.0 * value[i];
            }
            printf("%9.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}
