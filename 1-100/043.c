// Declare um array de 6 inteiros. Crie dois ponteiros: um no 2º elemento e outro no 5º. Calcule e imprima a distância entre eles em número de elementos.

#include <stdio.h>

int main()
{
    int array[] = { 42, 89, 66, 23, 15, 19 };
    int *ptr1 = array + 1;
    int *ptr2 = array + 4;
    long distancia = ptr2 - ptr1;
    
    printf("A distância entre os 2 ponteiros é: %ld\n", distancia);
}