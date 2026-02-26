// Practice Problem: Write a C program to print the first 10 natural numbers (1 to 10) in ascending order using a for loop.

#include <stdio.h>

#define MAX 10
#define NL() printf("\n");

int main()
{
    for (int i = 0; i <= MAX; i++)
    {
        printf("%d ", i);
    }
    NL();
}
