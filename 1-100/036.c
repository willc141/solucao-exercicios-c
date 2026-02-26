// Practice Problem: Write a C program to count the frequencia of each unique character (case-insensitive) in a given string.

#include <stdio.h>
#include <ctype.h>

#define ARRAYSIZE 100

void contar_frequencia(char string[]);

int main()
{
    char str[ARRAYSIZE];
    printf("Digite uma string: ");
    fgets(str, ARRAYSIZE, stdin);

    contar_frequencia(str);
    return 0;
}

void contar_frequencia(char string[])
{
    int frequencia[26] = { 0 };

    int i;
    int indice;

    for (i = 0; string[i] != '\0'; i++) {
        char caractere = tolower(string[i]);

        if (caractere >= 'a' && caractere <= 'z') {
            indice = caractere - 'a';
            frequencia[indice]++;
        }
    }
    
    for (i = 0; i < 26; i++) {
        if (frequencia[i] > 0) {
            printf("%c: %d\n", 'a' + i, frequencia[i]);
        }
    }
}