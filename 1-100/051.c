// Um programa que aloca um array dinâmico com x elementos, pede x elementos ao usuário e retorna quais são pares junto ao seu indice e quantos pares existem

#include <stdio.h>
#include <stdlib.h>

void aloca_array(int **array, int total_elementos);
void total_pares(int *array, int total_elementos);

int main()
{
    int total;
    int *array = NULL;
    printf("Quantos elementos o array terá? -> ");
    scanf("%d", &total);

    aloca_array(&array, total);
    if (array == NULL) { // checa se a alocação teve algum problema
        fprintf(stderr, "Não foi possível alocar.\n");
        return 1;
    }

    for (int i = 0; i < total; i++) {
        printf("Digite o %d° elemento do array: ", i+1);
        if (!(scanf("%d", &array[i]) == 1)) { // valida se não é um inteiro
            printf("Digite um número inteiro!\n");
            return 1;
        }
    }
    total_pares(array, total);
    free(array);
    return 0;
}

void aloca_array(int **array, int total_elementos)
{
    *array = malloc(total_elementos * sizeof(int));
}

void total_pares(int *array, int total_elementos)
{
    int contador = 0;

    printf("\nNúmeros pares:\n");

    for (int i = 0; i < total_elementos; i++) {
        if (array[i] % 2 == 0) {
            printf("Indice: %d | Numero: %d\n", i, array[i]);
            contador++;
        }
    }
    printf("\nForam encontrados %d par(es).\n", contador);
}