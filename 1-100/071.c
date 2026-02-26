/*
Allocate an initial array of 2 integers using malloc(), storing values 10 and 20.
Use realloc() to increase the array size to 4 integers.
Store values 30 and 40 in the two new slots.
Print all 4 elements.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = malloc(2 * sizeof(int));
    p[0] = 10;
    p[1] = 20;

    for (int i = 0; i < 2; i++) {
        printf("%d\n", p[i]);
    }

    p = realloc(p, 4 * sizeof(int));
    p[2] = 30;
    p[3] = 40;

    for (int i = 0; i < 4; i++) {
        printf("%d\n", p[i]);
    }
    free(p);
}