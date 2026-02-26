// Write a function custom_strlen to calculate the length of a string (null-terminated character array) without using the standard C library function strlen(). The function must use a character pointer to traverse the string until it finds the null terminator (\0).

#include <stdio.h>

int custom_strlen(char string[]);

int main()
{
    char minhaString[] = "Hello world!";
    int tamanho = custom_strlen(minhaString);
    printf("Tamanho da string: %d\n", tamanho);
}

int custom_strlen(char string[])
{
    char *ptr = string;
    int tamanho = 0;
    while (*ptr != '\0') { // enquanto *ptr não achar o fim da string...
        tamanho++;
        ptr++;
    }
    return tamanho;
}