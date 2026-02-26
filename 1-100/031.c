// Practice Problem: Develop a C program that prompts the user to enter a string (a sequence of characters) and then calculates and prints the length of that string without using the built-in strlen() function.

#include <stdio.h>

#define ARRAY_LENGTH 100

int string_len(char string[]);

int main()
{
    char str[ARRAY_LENGTH];
    int tamanho;
    
    printf("Digite uma string para ver seu tamanho: ");
    fgets(str, ARRAY_LENGTH, stdin);

    tamanho = string_len(str);

    printf("\nO tamanho da string é: %d\n", tamanho);

}

int string_len(char string[])
{
    int tamanho = 0;
    while (string[tamanho] != '\0') {
        tamanho++;
    }

    // se quisesse desconsiderar o '\n' (newline), faria tamanho -= 1

    return tamanho;
}