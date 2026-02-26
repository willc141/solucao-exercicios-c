// Declare two integer variables, A and B, and initialize them. Declare two pointers, ptrA and ptrB, pointing to A and B, respectively. Write a program to compare the values pointed to by ptrA and ptrB, and print which variable holds the larger value.

#include <stdio.h>

int main() {
    int A = 161;
    int B = 141;
    int *ptrA = &A;
    int *ptrB = &B;

    if (*ptrA > *ptrB) {
        printf("ptrA é maior que ptrB\n");
    } else if (*ptrB > *ptrA) {
        printf("ptrB é maior que ptrA\n");
    } else {
        printf("ptrA e ptrB são iguais\n");
    }

    if (ptrA > ptrB) {
        printf("Endereço de A é maior que o endereço de B\n");
    } else {
        printf("Endereço de B é maior que o endereço de A\n");
    }
    
    printf("%p", ptrA);
}