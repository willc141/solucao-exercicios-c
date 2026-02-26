// Implemente meu_strcpy(char *dest, const char *src) copiando caractere a caractere com ponteiros.

#include <stdio.h>

void meu_strcpy(char *dest, const char *src);

int main()
{
    const char fonte[] = "Me copie!";
    char destino[20]; 
    meu_strcpy(destino, fonte);
}

void meu_strcpy(char *dest, const char *src)
{
    char *destino = dest;
    const char *fonte = src;
    while (*fonte != '\0') {
        *destino = *fonte;
        destino++;
        fonte++;
    }
    
    *destino = '\0';
    
    printf("Origem: %s\n", src);
    printf("Destino: %s\n", dest);
}