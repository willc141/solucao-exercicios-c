// Escreva uma função que recebe um ponteiro para inteiro e incrementa o valor original em 1, sem retornar nada (void)

#include <stdio.h>

void incrementa(int *ptr);

int main()
{
    int numero = 10;

    /* antes de incrementar */
    printf("%d\n", numero);
    
    incrementa(&numero);
    
    /* depois de incrementar */
    printf("%d\n", numero);
}

void incrementa(int *ptr)
{
    (*ptr)++;
}