// Peça o tamanho do array dinâmico e números inteiros ao usuário X vezes, preencha o array com este número e retorne a soma de todos os elementos.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total, soma;
    soma = 0;
    printf("Digite o total de elementos do array: ");
    scanf("%d", &total);

    int *p = malloc(total * sizeof(int));
    if (p == NULL) {
        fprintf(stderr, "Falha ao alocar.\n");
        return 1;
    }

    for (int i = 0; i < total; i++) {
        printf("Digite o %d elemento do array: ", i+1);
        scanf("%d", &p[i]);
    }

    for (int i = 0; i < total; i++) {
        soma += p[i];
    }

    printf("\nA soma dos elementos do array é: %d\n", soma);

    free(p);
}