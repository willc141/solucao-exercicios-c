// Write a function sum_array that accepts an integer pointer (the array base address) and the size of the array. The function must calculate and return the sum of all elements using pointer arithmetic for traversal.

#include <stdio.h>

int sum_array(int *arr, int tamanho);

int main()
{
    int numeros[] = {10, 5, 8, 2, 15};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int resultado = sum_array(numeros, tamanho);
    printf("A soma dos elementos do array é: %d\n", resultado);
}

int sum_array(int *arr, int tamanho)
{
    int *ptr = arr;
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += *ptr++;
    }
    return soma;
}