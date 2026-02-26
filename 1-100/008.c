// Practice Problem: Write a C program that prompts the user to enter a single character and prints its corresponding ASCII (American Standard Code for Information Interchange) value.

#include <stdio.h>

int main()
{
    char caractere;
    
    printf("Digite um caractere: ");
    scanf("%c", &caractere);
    
    printf("O valor de %c em ASCII é: %d\n", caractere, caractere);
}