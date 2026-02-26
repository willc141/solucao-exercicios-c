// Practice Problem: Write a C program that calculates and prints the sum, difference, product, and quotient (division) of two integers.

#include <stdio.h>

int main()
{
    int soma, diferenca, produto;
    float quociente, num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    soma = num1 + num2;
    diferenca = num1 - num2;
    produto = num1 * num2;
    quociente = num1 / num2;

    printf("\nSoma: %.2d", soma);
    printf("\nDiferença: %.2d", diferenca);
    printf("\nProduto: %.2d", produto);
    printf("\nQuociente: %.2f\n", quociente);
}
