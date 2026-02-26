// Implemente sua própria versão do strlen usando ponteiros, sem índices.

#include <stdio.h>

int string_length(const char *string);

int main()
{
    
    printf("Tamanho da string: %d\n", string_length("hello"));
}

int string_length(const char *string)
{
    const char *p = string;
    
    while (*p != '\0')
        p++;
    return p - string;

}