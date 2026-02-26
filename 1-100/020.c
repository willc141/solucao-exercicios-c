// Practice Problem: Write a C program to reverse a given integer (e.g., 1234 becomes 4321).

#include <stdio.h>

int reverse(long int num);

int main()
{
    long int num, resultado;

    printf("Digite um número inteiro: ");
    scanf("%ld", &num);

    resultado = reverse(num);

    printf("O número %ld revertido é: %ld\n", num, resultado);
}

int reverse(long int num)
{
    int ultimo_digito = 0;
    long int numero_reverse = 0;

    if (num < 0)
        num = -num;

    while (num != 0) {
        ultimo_digito = num % 10;
        numero_reverse = numero_reverse * 10 + ultimo_digito;
        num /= 10;
    }

    return numero_reverse;
}