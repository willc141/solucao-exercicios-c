// Simulate a 2×3 2D array using a single pointer to dynamically allocated memory. Allocate memory for 6 integers. Use pointer arithmetic to access and print the value at the conceptual row 1, column 2 (index [1][2]).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int LINHAS = 2;
    const int COLUNAS = 3;
    int *ponteiro_matriz = NULL;

    ponteiro_matriz = (int *)malloc(LINHAS * COLUNAS * sizeof(int));
    if (ponteiro_matriz == NULL) {
        fprintf(stderr, "Falha ao alocar.\n");
        return 1;
    }

    for (int i = 0; i < LINHAS * COLUNAS; i++) {
        *(ponteiro_matriz + i) = i + 10;
    }
    
    int linha = 1;
    int coluna = 2;
    int indice = linha * COLUNAS + coluna;
    int valor = *(ponteiro_matriz + indice);

    printf("Array 2x3 simulado:\n");
    printf("Valor no indice [%d][%d]: (offset %d): %d\n", linha, coluna, indice, valor);

    free(ponteiro_matriz);
    return 0;
}