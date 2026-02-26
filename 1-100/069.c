// Dynamically allocate memory for an array of 5 integers using malloc(). Read 5 integer values from the user into the array, print them using pointer arithmetic, and finally, free the allocated memory.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int total_elementos = 5;
    int *p = malloc(5 * sizeof(int));

    for (int i = 0; i < total_elementos; i++) {
        printf("Digite o %d elemento: ", i+1);
        scanf("%d", &p[i]);
    }

    printf("\n");

    for (int i = 0; i < total_elementos; i++)
        printf("%d ", p[i]);
    printf("\n");

    free(p);
}