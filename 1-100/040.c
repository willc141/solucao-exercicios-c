// Declare int a = 10. Sem tocar em a diretamente após a declaração, use um ponteiro para triplicar seu valor e imprima o resultado.

#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr = &a;
    *ptr *= 3;
    
    printf("ponteiro: %d\n", *ptr);
}