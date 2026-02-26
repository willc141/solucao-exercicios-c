// Practice Problem: Write a C program to print numbers from 10 down to 1 in descending order using a while loop.

#include <stdio.h>

#define START 10
#define END 1
#define NL() printf("\n");

int main()
{
    int i = START;

    while (i >= END)
    {
        printf("%d ", i);
        i--;
    }
    NL();
}
