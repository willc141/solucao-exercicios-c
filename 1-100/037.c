// Escreva uma função troca(int *a, int *b) que troca os valores de duas variáveis usando ponteiros.

#include <stdio.h>

int troca(int *a, int *b);

int main() {
    int x = 5, y = 3;
    printf("\n\nx = %d", x);
    printf("\ny = %d\n", y);

    troca(&x, &y);

    printf("\n\nx = %d", x);
    printf("\ny = %d\n", y);
    
}

int troca(int *a, int *b) {
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}