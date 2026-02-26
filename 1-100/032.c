// Practice Problem: Write a C program to copy the contents of one string (source) to another string (destination) manually without using the built-in strcpy() function.

#include <stdio.h>

void copy(char fonte[], char destino[]);

int main()
{
    char fonte[] = "Me copie!";
    char destino[20]; 
    copy(fonte, destino);
}

void copy(char fonte[], char destino[])
{
    int i = 0;
    while (fonte[i] != '\0') {
        destino[i] = fonte[i];
        i++;
    }

    destino[i] = '\0';
    
    printf("Origem: %s\n", fonte);
    printf("Destino: %s\n", destino);
}