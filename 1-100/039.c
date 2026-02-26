// Declare uma variável int com o valor 7, um ponteiro apontando para ela, e imprima: o valor direto, o endereço via &, o endereço armazenado no ponteiro, e o valor via derreferência.

#include <stdio.h>

int main()
{
    int valor = 7;
    int *ptr = &valor;
    printf("Valor direto: %d\n", valor);
    printf("Endereço: %p\n", &ptr);
    printf("Endereço no ptr: %p\n", ptr);
    printf("Valor via derref: %d\n", *ptr);
}