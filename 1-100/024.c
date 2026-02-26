// Write a C program that uses nested for-loops to print a solid rectangle pattern of (@) with 3 rows and 3 columns.

#include <stdio.h>

void print_rectangle(int linhas, int colunas);

int main()
{
    int linhas, colunas;
    linhas = 3;
    colunas = 3;
    
    print_rectangle(linhas, colunas);
}

void print_rectangle(int linhas, int colunas)
{
    int i, j;
    
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("@");
        }
        printf("\n");
    }
}