// Practice Problem: Implement a basic calculator that takes two numbers and an operator (+,−,∗,/) as input, and performs the calculation using a switch statement.

#include <stdio.h>
#include <stdbool.h>

static float calcular(float num1, float num2, char operador);

int main()
{
    char operador;
    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);
    
    float resultado = calcular(num1, num2, operador);
    
    if (resultado == 0 || resultado) {
        printf("O resultado é: %.2f\n", resultado);
        return 0;
    }
    
    printf("Impossível dividir por 0!\n");
    printf("Digite valores válidos!\n");
    return 1;
}

static float calcular(float num1, float num2, char operador)
{
    float res;
    res = 0;
    switch (operador) {
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '/':
            if (num2 == 0) return false;
            else res = num1 / num2;
            break;
    }

    return res;
}