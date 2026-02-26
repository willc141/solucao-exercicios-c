// Practice Problem: Write a C program to determine if a given year is a leap year.

// Leap year: A year is a leap year if it is divisible by 400, OR if it is divisible by 4 but NOT by 100. Use the modulo operator (%) and the logical OR (||) and logical AND (&&) operators.

#include <stdio.h>
#include <stdbool.h>

int ehBissexto(int ano);

int main()
{
    int ano;
    
    printf("Digite um ano: ");
    scanf("%d", &ano);
    
    if (ehBissexto(ano)) {
        printf("%d é bissexto.\n", ano);
        return 0;
    }
    
    printf("%d não é bissexto.\n", ano);
    return 0;
}

int ehBissexto(int ano)
{
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        return true;
    }
    
    return false;
}