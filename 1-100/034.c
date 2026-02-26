// Practice Problem: Write a C program to count the number of words in a given string (sentence). Assume words are separated by one or more spaces, and the string may start or end with spaces.

#include <stdio.h>

int contar_palavras(char string[]);

int main() {
    char str[] = "Essa é uma string de teste"; // 6 palavras
    int quantidade_de_palavras;

    quantidade_de_palavras = contar_palavras(str);
    printf("A string possui %d palavras.", quantidade_de_palavras);

    return 0;
}

int contar_palavras(char string[])
{
    int total_palavras = 0;
    int dentro = 0;
    int i = 0;
    while (string[i] != '\0') {
        if (string[i] != ' ' && !dentro) {
            total_palavras++;
            dentro = 1;
        } else if (string[i] == ' ') {
            dentro = 0;
        }
        i++;
    }
    return total_palavras;
}