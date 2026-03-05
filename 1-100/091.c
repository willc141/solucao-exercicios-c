// Write a function that accepts an array and its size, then returns a pointer to the maximum element in that array. Print the value and the index of the max element using that pointer.

#include <stdio.h>

int* achar_maior_valor(int *array, int tamanho);

int main()
{
    int arr[] = {12, 45, 7, 99, 23};
    int *maior = achar_maior_valor(arr, 5);
    printf("Maior valor: %d\n", *maior);
}

int* achar_maior_valor(int *array, int tamanho)
{
    int *maior_valor = array;

    for (int i = 0; i < tamanho; i++) {
        if (*(array + i) > *maior_valor) {
            maior_valor = array + i;
        }
    }
    return maior_valor;
}