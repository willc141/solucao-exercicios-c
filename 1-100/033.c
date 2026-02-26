// Practice Problem: Write a C program to count the total number of vowels (A, E, I, O, U, and their lowercase counterparts) and consonants in a given string.

#include <stdio.h>
#include <ctype.h> // tolower
void contar_letras(char string[]);

int main() 
{
    char str[] = "Programar em C é divertido."; // não é não :)
    contar_letras(str);
}

void contar_letras(char string[])
{
    int i = 0;
    int vogais, consoantes;
    vogais = consoantes = 0;

    while (string[i] != '\0') {
        char caractere = tolower(string[i]);

        if (caractere >= 'a' && caractere <= 'z') {
            if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
                vogais++;
            } else {
                consoantes++;
            }
        }
        i++;
    }
    
    printf("Quantidade de vogais: %d\n", vogais);
    printf("Quantidade de consoantes: %d\n", consoantes);
}