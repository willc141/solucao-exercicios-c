// Write a program demonstrating the effect of adding 1 to an integer pointer and adding 1 to a character pointer. Print the original and resulting addresses to illustrate how pointer arithmetic scales according to the data type size.

#include <stdio.h>

#define HEADER_1 " ---- Aritmética de ponteiro Inteiro ---- \n"
#define HEADER_2 " ---- Aritmética de ponteiro Char ---- \n"

int main()
{
    int arrA[2];
    char arrB[2];
    int *ptrA = arrA;
    char *ptrB = arrB;

    printf("Tamanho de ponteiro inteiro: %ld\n", sizeof(int));
    printf("Tamanho de ponteiro char: %ld\n", sizeof(char));

    printf(HEADER_1);
    printf("Endereço original de ptrA: %p\n", (void *)ptrA);
    ptrA++;
    printf("Novo endereço de ptrA: %p\n", (void *)ptrA);

    printf(HEADER_2);
    printf("Endereço original de ptrB: %p\n", (void *)ptrB);
    ptrB++;
    printf("Novo endereço de ptrA: %p\n", (void *)ptrB);
}