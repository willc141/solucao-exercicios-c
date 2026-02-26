// Declare an integer variable (num), a pointer to the integer (ptr1), and a pointer to the pointer (double pointer, ptr2). Assign addresses correctly and print the final value of num using all three variables: num, *ptr1, and **ptr2.

#include <stdio.h>

int main()
{
    int numero = 77;
    int *ptr1 = &numero;
    int **ptr2 = &ptr1;
    
    printf("Valor original (numero): %d\n", numero);
    printf("Valor via *ptr1: %d\n", *ptr1);
    printf("Valor via **ptr2: %d\n", **ptr2);

    printf("Endereço de numero: %p\n", &numero);
    printf("Valor guardado em ptr1: %p\n", ptr1);
    printf("Endereço de ptr1: %p\n", &ptr1);
    printf("Valor armazenado em ptr2: %p\n", ptr2);
}