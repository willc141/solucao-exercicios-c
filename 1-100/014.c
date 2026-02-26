// Practice Problem: Write a C program to calculate and print the sum of the first N natural numbers.

#include <stdio.h>

#define START 0

int somar_ate_n(int n);

int main()
{
    int numero;
    int resultado;
    
    printf("Até qual número natural você deseja somar?: ");
    scanf("%d", &numero);

    resultado = somar_ate_n(numero);
    printf("O resultado é: %d\n", resultado);
}

int somar_ate_n(int n)
{
    int soma;
    soma = START;
    for (int i = START; i <= n; i++)
    {
        soma += i;
    }
    
    return soma;
}