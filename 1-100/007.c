// Practice Problem: Write a C program swap two integer values, A and B, without using a third temporary variable.

#include <stdio.h>

int main()
{
    int num1, num2;
    num1 = 10;
    num2 = 20;

    printf("Antes da troca:\n");
    printf("num1 = %d | num2 = %d\n", num1, num2);

    num1 += num2;
    num2 = num1 - num2;
    num1 -= num2;

    printf("Depois da troca:\n");
    printf("num1 = %d | num2 = %d\n", num1, num2);
}
