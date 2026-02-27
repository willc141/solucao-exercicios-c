// Define a struct Circle with a radius (float). Dynamically allocate memory for a single Circle structure using malloc(). Populate its members, print the area (Area = π×r2), and then free the memory.

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

typedef struct {
    float raio;
} Circulo;

int main()
{
    Circulo *ptr = malloc(sizeof(Circulo));
    ptr->raio = 12.5f;
    float area = PI * (ptr->raio) * (ptr->raio);

    printf("Raio: %.2f\n", ptr->raio);
    printf("Area: %.2f\n", area);
}