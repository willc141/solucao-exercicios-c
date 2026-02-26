// Practice Problems: Write a C program that prompts the user to enter two separate integers, calculates their sum, and then prints the result.

#include <stdio.h>

int main()
{
    int primeiro_numero, segundo_numero, soma;

    printf("Digite o primeiro inteiro: ");
    scanf("%d", &primeiro_numero);

    printf("Digite o segundo inteiro: ");
    scanf("%d", &segundo_numero);

    soma = primeiro_numero + segundo_numero;

    printf("\nA soma %d + %d = %d\n", primeiro_numero, segundo_numero, soma);
}
