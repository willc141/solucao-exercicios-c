// Practice Problem: Write a C program to print odd numbers between 1 and 20 using a do...while loop.

#include <stdio.h>

#define START 1
#define END 20

void printar_pares();

int main()
{
    printar_pares();
    printf("\n");
}

void printar_pares()
{
    int i = START;
    do {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;
    } while (i <= END);
}