// Write a function allocate_memory that dynamically allocates memory for a single integer and stores the value 99 in it. The function must take a double pointer (int **) as an argument to ensure the pointer variable in the main function is updated with the address of the newly allocated memory.

#include <stdio.h>
#include <stdlib.h>

void alocar_memoria(int **ptr);

int main()
{
    int *data_ptr = NULL;

    printf("endereço do ponteiro antes da chamada: %p\n", (void *)data_ptr);

    alocar_memoria(&data_ptr);

    printf("endereço do ponteiro depois da chamada: %p\n", (void *)data_ptr);

    if (data_ptr != NULL) {
        printf("Valor acessado pelo ponteiro: %d\n", *data_ptr);
        free(data_ptr);
    }
}

void alocar_memoria(int **ptr)
{
    *ptr = malloc(1 * sizeof(int));
    **ptr = 99;
}