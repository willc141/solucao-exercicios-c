// Define a structure Point with members x and y. Declare a variable of this structure and a pointer to it. Access and modify the structure members using the arrow operator (->).

#include <stdio.h>

typedef struct {
    int x;
    int y;
} Ponto;

int main()
{
    Ponto p1 = { 10, 20 };
    Ponto *ponteiro = &p1;

    printf("Valor original de p1: (%d, %d)\n", p1.x, p1.y);
    printf("Valores modificados via ponteiro:\n");

    printf("X: %d\n", ponteiro->x = 5);
    printf("Y: %d\n", ponteiro->y = 15);
    /* ou também assim (funciona igual e eh mais limpo):
    ponteiro->x = 5;
    ponteiro->y = 15;
    */
}