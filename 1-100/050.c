// Escreva void aloca_array(int **ptr, int n) que aloca um array internamente e faz *ptr apontar para ele. Use no main.

#include <stdio.h>
#include <stdlib.h>

void aloca_array(int **ptr, int n);

int main()
{
    int *arr = NULL;
    int total;
    printf("Quantos elementos o array deve ter? -> ");
    scanf("%d", &total);
    aloca_array(&arr, total);

    for (int i = 0; i < total; i++)
        arr[i] = i + 1;

    for (int i = 0; i < total; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}

void aloca_array(int **ptr, int n)
{
    *ptr = malloc(n * sizeof(int));
}