#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    float fahrenheit, celsius;

    printf("Enter temperature (in fahrenheit): ");
    if (scanf("%f", &fahrenheit) != 1)
    {
        printf("Unable to read input value");
        return 1;
    }

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
    printf("Temperate (in celsius): %.2f\n", celsius);

    return 0;
}
