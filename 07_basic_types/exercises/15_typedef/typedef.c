/*
Use typedef to create types named Int8, Int16, and Int32.
Define the types so that they represent 8-bit, 16-bit, and 32-bit integers on your machine.
*/

#include <stdio.h>

typedef char Int8;
typedef short int Int16;
typedef int Int32;

int main(void) {
    printf("Int8: %lu-bits\n", (unsigned long)sizeof(Int8) * 8);
    printf("Int16: %lu-bits\n", (unsigned long)sizeof(Int16) * 8);
    printf("Int32: %lu-bits\n", (unsigned long)sizeof(Int32) * 8);

    return 0;
}

/*
In C99 the result of sizeof() can be used directly without typecasting using the %zu format specifier
*/
