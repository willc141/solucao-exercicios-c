// Write a program to reverse an dynamic array in place (without using a second array) by swapping elements using pointers.

#include <stdio.h>
#include <stdlib.h>

void reverse(int *array, int tamanho);
void aloca_array(int **array, int total);

int main()
{
    int *numeros = NULL;
    int tamanho;
    printf("Quantos elementos terá no array? ");
    scanf("%d", &tamanho);

    aloca_array(&numeros, tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o %d elemento do array: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("Antes de reverter: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }

    reverse(numeros, tamanho);
    
    printf("\nDepois de reverter: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    free(numeros);
}

void reverse(int *array, int tamanho)
{
    int *ptr1 = array; // primeiro elemento
    int *ptr2 = array + tamanho - 1; // fim do array

    while (ptr1 < ptr2) {
        int tmp;
        tmp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = tmp;
        ptr2--;
        ptr1++;
    }
}

void aloca_array(int **ptr, int total)
{
    *ptr = malloc(total * sizeof(int));
    if (*ptr == NULL) {
        fprintf(stderr, "Erro ao alocar.\n");
        exit(1);
    }
}