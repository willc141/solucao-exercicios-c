//!Escreva void inverte(int *arr, int tamanho) que inverta o array in-place usando dois ponteiros caminhando um em direção ao outro.

#include <stdio.h>

void inverte(int *arr, int tamanho);

int main()
{
    int array[] = { 10, 20, 4, 230, 503, 60 };
    inverte(array, 6);
    for (int i = 0; i < 6; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void inverte(int *arr, int tamanho)
{
    int *esquerda = arr;
    int *direita = arr + tamanho - 1;
    
    while (esquerda < direita) {
        int temp = 0;
        temp = *esquerda;
        *esquerda = *direita;
        *direita = temp;
        esquerda++;
        direita--;
    }
}