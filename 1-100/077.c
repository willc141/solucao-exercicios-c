// Write a function find_min_max that takes an integer array, its size, and two integer pointers (min_ptr and max_ptr). The function should find the minimum and maximum elements in the array and use the pointers to return these values to the caller.
// os comentários na função achar_menor_maior foram pra me explicar melhor o fluxo do código 

#include <stdio.h>

void achar_menor_maior(int array[], int tamanho_array, int *ptr_minimo, int *ptr_maximo);

int main()
{
    int dados[] = {15, 7, 22, 1, 9};
    int tamanho = 5;
    int ptr_min;
    int ptr_max;
    
    achar_menor_maior(dados, tamanho, &ptr_min, &ptr_max);

    printf("O maior elemento do array é: %d\n", ptr_max);
    printf("O menor elemento do array é: %d\n", ptr_min);
}

void achar_menor_maior(int array[], int tamanho, int *ptr_min, int *ptr_max)
{
    *ptr_min = array[0];
    *ptr_max = array[0];

    for (int i = 1; i < tamanho; i++) {
        if (array[i] < *ptr_min) // se o índice atual do array for menor que o primeiro elemento
            *ptr_min = array[i]; // o índice atual vira o menor valor
        if (array[i] > *ptr_max) // se o índice atual do array for maior que o primeiro elemento
            *ptr_max = array[i]; // o índice atual vira o maior valor
    }
}