// Practice Problem: Write a C program to print the multiplication table of a given integer N from 1 × N up to 10 × N.

#include <stdio.h>

#define START 1
#define END 10

void printar_tabela(int numero);

int main()
{
    int num;

    printf("Digite o número para qual você quer ver a tabela de multiplicação até 10: ");
    scanf("%d", &num);

    printar_tabela(num);
    printf("\n");
}

void printar_tabela(int numero)
{
    int resultado;
    resultado = 0;
    for (int i = START; i <= END; i++)
    {
        resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
    }
}