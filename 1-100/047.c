// Leia um n do usuário, aloque um array de n inteiros com os quadrados de 1 a n, imprima e libere.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total_elementos;

    printf("Quantos elementos terá o array? -> ");
    scanf("%d", &total_elementos);

    if (total_elementos < 0) {
        printf("Impossível ter um valor negativo. Descartando o sinal.\n\n");
        total_elementos = -total_elementos;
    }
    
    int *p = malloc(total_elementos * sizeof(int));
    if (p == NULL) {
        fprintf(stderr, "erro de alocação.\n");
        return 1;
    }

    for (int i = 0; i < total_elementos; i++) {
        p[i] = (i + 1) * (i + 1);
    }
    
    for (int i = 0; i < total_elementos; i++)
        printf("%d ", p[i]);
    printf("\n");

    free(p);
    p = NULL;
   
    return 0;
}