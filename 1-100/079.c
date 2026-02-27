// Practice Problem: Declare a function pointer that can point to a function that takes two integers and returns an integer. Assign it to a simple add function. Call the add function using both its original name and the function pointer.

#include <stdio.h>

int soma(int a, int b) { return a + b; }

int main()
{
    int (*operacao)(int, int);
    int x = 5, y = 3;

    operacao = soma;
    printf("Resultado chamando o ponteiro para função: %d\n", operacao(x, y));
    printf("Resultado chamando a função diretamente: %d\n", soma(x, y));
}