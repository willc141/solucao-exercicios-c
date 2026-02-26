// Practice Problem: Write a C program to calculate both the area and circumference of a circle, given its radius. Use a pre-defined constant for π with value 3.14159.

#include <stdio.h>

#define PI 3.14159

int main()
{
    float raio, area, circunferencia;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;
    circunferencia = 2 * (PI * raio);

    printf("\nArea: %.3f", area);
    printf("\nCircunferencia: %.3f\n", circunferencia);
}
