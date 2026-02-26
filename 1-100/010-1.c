// Practice Problem: Write a C program to find and print the largest of given three numbers (A, B, and C).

#include <stdio.h>

float achar_maior(float num1, float num2, float num3);

int main()
{
    float primeiro_numero, segundo_numero, terceiro_numero;
    float maior_numero;

    printf("Digite o primeiro número: ");
    scanf("%f", &primeiro_numero);

    printf("Digite o segundo número: ");
    scanf("%f", &segundo_numero);

    printf("Digite o terceiro número: ");
    scanf("%f", &terceiro_numero);

    maior_numero = achar_maior(primeiro_numero, segundo_numero, terceiro_numero);

    printf("O maior número é: %.2f\n", maior_numero);
}

float achar_maior(float num1, float num2, float num3)
{
    float maior;

    if (num1 >= num2 && num1 >= num3) {
        maior = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        maior = num2;
    } else {
        maior = num3;
    }
    
    return maior;
}