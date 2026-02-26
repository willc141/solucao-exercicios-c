// Practice Problem: Write a C program to reverse a given string.

#include <stdio.h>

int string_len(char string[]);
void reverse(char string[]);

int main()
{
    char str[] = "Willian";
    reverse(str);
}

void reverse(char string[])
{
    int tamanho = string_len(string);

    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", string[i]);
    }
    printf("\n");
}

int string_len(char string[])
{
    int tamanho = 0;
    while (string[tamanho] != '\0') {
        tamanho++;
    }

    return tamanho;
}