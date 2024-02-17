/*
Condense the dweight.c program by
(1) replacing the assignments to height, length, and width with initializers and
(2) removing the weight variable, instead calculating (volume + 165) / 166 within the last printf.
*/

#include <stdio.h>

int main(void)
{
    int length = 12, width = 10, height = 8, volume;

    volume = length * width * height;

    printf("Dimension: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional Weight (pounds): %d\n", (volume + 165) / 166);

    return 0;
}
