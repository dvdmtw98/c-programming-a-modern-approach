/*
Modify the program of Programming Project 2 so that it prompts the user to enter the radius of the sphere.
*/

#include <stdio.h>

#define PI 3.14159265358979323846

int main(void) {
    float radius, volume;

    printf("Enter radius of sphere (in meters): ");
    if (scanf("%f", &radius) != 1) {
        printf("Failed to initialize radius");
        return 1;
    }

    volume = (4.0f / 3.0f) * PI * radius * radius * radius;
    printf("Volume (in cubic meters): %.2f\n", volume);

    return 0;
}
