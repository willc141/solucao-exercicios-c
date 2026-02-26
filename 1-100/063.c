// Write a program to reverse an integer array in place (without using a second array) by swapping elements using pointers.

#include <stdio.h>

void reverse(int *array, int tamanho);

int main()
{
    int numeros[] = {1, 2, 3, 4, 5, 6};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    printf("Antes de reverter: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", numeros[i]);
    }
    
    reverse(numeros, tamanho);
    
    printf("\nDepois de reverter: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", numeros[i]);
    }
    printf("\n");
}

void reverse(int *array, int tamanho)
{
    int *ptr1 = array;
    int *ptr2 = array + tamanho - 1;

    while (ptr1 < ptr2) {
        int tmp = 0;    
        tmp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = tmp;
        ptr2--;
        ptr1++;
    }
}