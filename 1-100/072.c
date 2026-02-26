// Write a robust program that attempts to dynamically allocate a very large block of memory (e.g., 1 GB). Include a check for the NULL return value from malloc() and handle the memory allocation failure gracefully by printing an error message and exiting with a non-zero status code.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    size_t tamanho_em_bytes = (size_t)1024 * 1024 * 1024;
    void *bloco_grande = NULL;

    bloco_grande = malloc(tamanho_em_bytes);

    if (bloco_grande == NULL) {
        fprintf(stderr, "erro ao alocar\n");
        return 1;
    }
    
    printf("Alocação feita com sucesso.\n");
    return 0;
}