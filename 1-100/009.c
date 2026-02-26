// Practice Problem: Write a C program to determines whether given integer is even or odd.

#include <stdio.h>
#include <stdbool.h>

int ehPar(int num);

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (ehPar(numero)) {
        printf("%d é par.\n", numero);
    } else {
        printf("%d é impar.\n", numero);
    }
}

int ehPar(int num)
{
    if (num % 2 != 0) {
        return false;
    }

    return true;
}