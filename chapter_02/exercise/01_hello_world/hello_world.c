/*
Create and run Kernighan and Ritchie's famous “hello, world” program:

#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}

Do you get a warning message from the compiler? If so, what’s needed to make it go away?
*/

#include <stdio.h>

int main(void)
{
    printf("Hello, World\n");

    return 0;
}

// Error when compiled using C89
// gcc -O -Wall -W -pedantic -ansi -std=c89 -o hello_world.o hello_world.c
// Need to add return statement
