// Print the size of int, float, double, char, and long double on your system.

#include <stdio.h>

int main()
{
    printf("Tamanho de int: %lu\n", sizeof(int));
    printf("Tamanho de float: %lu\n", sizeof(float));
    printf("Tamanho de double: %lu\n", sizeof(double));
    printf("Tamanho de char: %lu\n", sizeof(char));
    printf("Tamanho de long double: %lu\n", sizeof(long double));
}