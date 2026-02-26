// Use pointer arithmetic to traverse an integer array and print all its elements.

#include <stdio.h>

#define ARRAY_SIZE 6

int main() {
    int array[ARRAY_SIZE] = { 10, 20, 5, 8, 10, 8 };
    int *ponteiro = array;

    for (int i = 0; i < ARRAY_SIZE; i++)
        printf("Elemento %d: %d\n", i, *(ponteiro + i));
}