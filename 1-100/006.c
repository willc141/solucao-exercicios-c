// Practice Problem: Write a C program to read two integer values, A and B, and then swap their contents so that A holds the original value of B, and B holds the original value of A. Use a third, temporary variable.

#include <stdio.h>

int main()
{
    int num1, num2, temp;
    num1 = 10;
    num2 = 20;
    temp = 0;

    printf("Antes da troca:\n");
    printf("num1 = %d | num2 = %d\n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("Depois da troca:\n");
    printf("num1 = %d | num2 = %d\n", num1, num2);
}
