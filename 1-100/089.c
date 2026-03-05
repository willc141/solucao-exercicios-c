// Take an integer input from the user (an ASCII value) and print the corresponding character.

#include <stdio.h>

int main()
{
    int valor_ascii;
    printf("Digite o valor em ASCII: ");
    scanf("%d", &valor_ascii);

    printf("O caractere correspondente ao código %d em ASCII é: %c\n", valor_ascii, valor_ascii);
}