// Practice Problem: Write a C program to check if a given integer is a palindrome (reads the same forwards and backward, e.g., 121,3553).

#include <stdio.h>
#include <stdbool.h>

int reverse(long int num);

int main()
{
    long int num, resultado;

    printf("Digite um número inteiro: ");
    scanf("%ld", &num);

    resultado = reverse(num);

    if (!resultado) {
        printf("O número %ld é um palíndromo\n", num);
        return 0;
    }

    printf("O número %ld não é um palíndromo\n", num);
    return 1;
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
    
    if (numero_reverse != num) return false;

    return true;
}