// Dynamically allocate memory for a single integer using malloc(). Store the value 108 in this allocated memory, print the value and its memory address, and then free the memory using free().

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = malloc(1 * sizeof(int));
    *p = 108;
    printf("Valor armazenado dinamicamente: %d\n", *p);
    printf("Endereço de memória alocado: %p\n", &p);

    free(p);
}