// Write a function print_generic_data that takes a generic pointer (void *) and an integer indicating the data type (1 for int, 2 for float). Inside the function, cast the void * to the correct data type pointer and print the value it holds.

#include <stdio.h>

void exibir_dado_generico(void *ponteiro_dado, int tipo_dado);

int main()
{
    int i_val = 123;
    float f_val = 45.67f;

    exibir_dado_generico(&i_val, 1);
    exibir_dado_generico(&f_val, 2);
}

void exibir_dado_generico(void *ponteiro_dado, int tipo_dado)
{
    if (tipo_dado == 1) {
        int valor = *((int *)ponteiro_dado);
        printf("Tipo de dado: Inteiro, Valor: %d\n", valor);
    } else if (tipo_dado == 2) {
        float valor = *((float *)ponteiro_dado);
        printf("Tipo de dado: float, Valor: %.2f\n", valor);
    } else {
        printf("Tipo de dado: desconhecido.\n");
    }
}