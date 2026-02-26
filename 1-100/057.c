// Write a function named square_value that takes a pointer to an integer as its only argument. The function should calculate the square of the integer the pointer points to and store the result back into the same memory location.

#include <stdio.h>

void valor_ao_quadrado(int *valor);

int main()
{
    int num = 5;
    printf("Antes: %d\n", num);
    valor_ao_quadrado(&num);
    printf("Depois: %d\n", num);
}

void valor_ao_quadrado(int *valor)
{
    *valor = (*valor) * (*valor);
}