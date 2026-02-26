// Practice Problem: Write a C program that takes a floating-point number (a decimal number, like 3.14159) from the user and prints it, formatted to display with only two decimal places.

#include <stdio.h>

int main()
{
    float numero;

    printf("Digite um float (ex: 3.14159): ");
    scanf("%f", &numero);

    printf("O numero arredondado para 2 casas decimais é: %.2f\n", numero);

    return 0;
}
