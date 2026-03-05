// Write a C program for a size N, allocates an integer array of that size using malloc, and fills it with values. Print the memory address of the array to show it is located on the Heap, then free the memory.

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 3

int main()
{
    int *ptr = (int *)malloc(ARRAY_SIZE * sizeof(int));
    if (ptr == NULL) {
        fprintf(stderr, "Erro ao alocar.");
    }
    ptr[0] = 100;
    ptr[1] = 200;
    ptr[2] = 300;

    printf("Array alocado no endereço Heap %p\n", &ptr);
    for (int i = 0; i < ARRAY_SIZE; i++)
        printf("Valor no indice %d: %d\n", i, ptr[i]);
    free(ptr);
}