// Count the number of vowels (A, E, I, O, U, and their lowercase counterparts) in a given string using a character pointer for traversal.

#include <stdio.h>
#include <ctype.h>

int contar_vogais(char string[]);

int main()
{
    char frase[] = "The quick brown fox Jumps over the lazy dog";
    int total_vogais = contar_vogais(frase);
    printf("A frase tem %d vogais.\n", total_vogais);
}

int contar_vogais(char string[]) {
    
    char *ptr = string;
    int total = 0;

    while (*ptr != '\0') {
        string[(unsigned char)*ptr] = tolower(string[(unsigned char)*ptr]);
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u') {
            total++;
        }
        ptr++;
    }
    return total;
}