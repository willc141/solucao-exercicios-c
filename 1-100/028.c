// Practice Problem: Write a C program that takes an integer array and a search value (key) from the user. Check if the key is present in the array. If found, print its index; otherwise, print a “Not found” message.

#include <stdio.h>

#define ARRAYSIZE 5

int main()
{
    int arr[ARRAYSIZE] = {10, 25, 30, 45, 50};
    int elemento;
    int indice_encontrado = -1;

    printf("Digite o elemento a procurar na lista: ");
    scanf("%d", &elemento);

    for (int i = 0; i < ARRAYSIZE; i++) {
        if (arr[i] == elemento) {
            indice_encontrado = i;
            break;
        }
    }

    if (indice_encontrado != -1) {
        printf("Encontrei o valor %d na posição %d\n", elemento, indice_encontrado);
    } else {
        printf("Não encontrei.\n");
    }

    return 0;
}