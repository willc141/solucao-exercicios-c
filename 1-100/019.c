// Practice Problem: Write a C program to counts the total number of digits in a given number.

#include <stdio.h>

int contar_digitos(long int numero);

int main()
{
    long int numero;
    printf("Digite um número para ver quantos dígitos ele tem: ");
    scanf("%ld", &numero);

    int quantidade_de_digitos = contar_digitos(numero);

    printf("O número %ld tem %d dígitos.\n", numero, quantidade_de_digitos);
}

int contar_digitos(long int numero)
{
    if (numero < 0)
        numero = -numero; // descarta o sinal, -66676 -> 66676

    int contador = 0;

    do {
        numero /= 10;
        contador++;
    } while (numero != 0);

    return contador;
}