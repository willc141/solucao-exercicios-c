// Practice Problem: Write a C program that prompts the user to enter 5 integer values, stores them in an array, and then prints all the stored elements.

#include <stdio.h>

#define ARRAYSIZE 5

int main()
{
    int array[ARRAYSIZE];

    for (int i = 0; i < ARRAYSIZE; i++) {
        printf("Digite o elemento %d: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("\n");

    for (int i = 0; i < ARRAYSIZE; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
}