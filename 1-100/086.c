// Take three integer inputs from the user, calculate their average as a float, and print the result.

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    float media;
    printf("Digite 3 inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    media = (num1 + num2 + num3) / 3;
    printf("A média é: %.2f\n", media);
}