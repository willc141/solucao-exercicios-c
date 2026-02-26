// Write a function swap(int *a, int *b) that swaps the values of two integers using their pointers. Demonstrate the swap in the main function.

#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int x = 100;
    int y = 200;

    printf("Antes de trocar:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    swap(&x, &y);

    printf("Antes de trocar: \n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}