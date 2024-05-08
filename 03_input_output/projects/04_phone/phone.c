/*
Write a program that prompts the user to enter a telephone number in the form (xxx) xxxxxxx and then displays the number in the form xxx.xxx.xxx:

Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
You entered 404.817.6900
*/

#include <stdio.h>

int main(void) {
    int area_code, telephone_prefix, line_number;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    if (scanf("(%d) %d-%d", &area_code, &telephone_prefix, &line_number) != 3) {
        printf("Failed to read phone number\n");
        return 1;
    }

    printf("You entered %d.%d.%d\n", area_code, telephone_prefix, line_number);

    return 0;
}
