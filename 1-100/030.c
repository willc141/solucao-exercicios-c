// Practice Problem: Write a C function named find_max that takes an integer array and its size as parameters, and returns the largest element in the array.

#include <stdio.h>

#define ARRAYSIZE 6

int achar_maior_valor(int array[], int tamanho);

int main()
{
    int dados[ARRAYSIZE] = {8, 15, 2, 70, 9, 33};
    int maior = achar_maior_valor(dados, ARRAYSIZE);
    
    printf("O maior elemento no array é: %d\n", maior);
}

int achar_maior_valor(int array[], int tamanho) {
    int maior_valor = array[0];

    for (int i = 0; i < tamanho; i++) {
        if (array[i] > maior_valor)
            maior_valor = array[i];
    }

    return maior_valor;
}