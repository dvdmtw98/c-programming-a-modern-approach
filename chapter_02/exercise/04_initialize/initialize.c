/*
Write a program that declares several int and float variables—without initializing them—and then prints their values. Is there any pattern to the values? (Usually there isn't.)
*/

#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4;
    float num5, num6, num7, num8;

    printf("Value of num1: %d\n", num1);
    printf("Value of num2: %d\n", num2);
    printf("Value of num3: %d\n", num3);
    printf("Value of num4: %d\n", num4);
    printf("Value of num5: %f\n", num5);
    printf("Value of num6: %f\n", num6);
    printf("Value of num7: %f\n", num7);
    printf("Value of num8: %f\n", num8);

    return 0;
}

/*
On my system even after running the code multiple times the values where always 0

Value of num1: 0
Value of num2: 0
Value of num3: 0
Value of num4: 0
Value of num5: 0.000000
Value of num6: 0.000000
Value of num7: 0.000000
Value of num8: 0.000000
*/
