// Escreva uma função troca(int *a, int *b) que troque os valores de duas variáveis. Teste no main.

#include <stdio.h>

int troca(int *a, int *b);

int main()
{
    int num1 = 10, num2 = 20;
    /* antes: */
    printf("num1: %d\nnum2 = %d", num1, num2);

    troca(&num1, &num2);

    /* depois */
    printf("\nnum1: %d\nnum2 = %d\n", num1, num2);
}

int troca(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}