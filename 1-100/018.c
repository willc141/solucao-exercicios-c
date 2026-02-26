// Practice Problem: Write a C program to calculate the factorial of a given non-negative integer N. (The factorial of N is the product of all positive integers less than or equal to N, denoted N!).

#include <stdio.h>
#include <stdbool.h>

int factorial(int numero);

int main()
{
    int num, resultado;

    printf("Digite o número que deseja calcular o fatorial: ");
    scanf("%d", &num);

    resultado = factorial(num);
    if (!resultado) {
        printf("O número não pode ser negativo!\n");
        return 1;
    }

    printf("O fatorial de %d = %d\n", num, resultado);
}

int factorial(int numero)
{
    int res = 1;

    if (numero < 0) return false;

    for (int i = 1; i <= numero; i++) {
        res *= i;
    }
    return res;
}