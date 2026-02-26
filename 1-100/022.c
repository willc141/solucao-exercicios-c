// Practice Problem: Write a C program to print all odd numbers between 1 and N using a single for loop and use the continue keyword to skip the even numbers.
//odd = impar

#include <stdio.h>

#define START 1

void exibir_ate_n(int numero);

int main()
{
    int numero;

    printf("Até qual número você deseja exibir os ímpares? -> ");
    scanf("%d", &numero);

    exibir_ate_n(numero);
    printf("\n");

    return 0;
}

void exibir_ate_n(int numero)
{
    for (int i = START; i <= numero; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d ", i);
    }
}