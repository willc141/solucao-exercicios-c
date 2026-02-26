// Practice Problem: Write a C program to calculate and print the sum of all elements in a integer array of size 5.

#include <stdio.h>

#define ARRAYSIZE 5

int main()
{
    int array[ARRAYSIZE];
    int soma = 0;

    for (int i = 0; i < ARRAYSIZE; i++) {
        printf("Digite o elemento %d: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("\n");

    for (int i = 0; i < ARRAYSIZE; i++) {
        soma += array[i];
    }

    printf("A soma de todos os elementos do array é: %d\n", soma);
}