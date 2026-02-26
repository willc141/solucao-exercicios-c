// Comece com {1, 2, 3} alocado dinamicamente. Use realloc para expandir para 6 elementos, preencha com 4, 5, 6, imprima e libere. Cuidado com o retorno do realloc.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = malloc(3 * sizeof(int));
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    
    int *tmp = realloc(p, 6 * sizeof(int));
    if (tmp == NULL)
        return 1;
    p = tmp;
    
    p[3] = 4;
    p[4] = 5;
    p[5] = 6;
    
    for (int i = 0; i < 6; i++)
        printf("%d ", p[i]); // 1 2 3 4 5 6
    printf("\n");
    free(p);
}