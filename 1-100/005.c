// Practice Problem: Calculate simple interest for a loan, given the Principal amount (P), Rate of interest (R), and Time in years (T) as input.

#include <stdio.h>

int main()
{
    float principal_amount, rate_interest, time_in_years;
    float resultado;

    printf("Digite a quantidade principal: ");
    scanf("%f", &principal_amount);

    printf("Digite a taxa de interesse: ");
    scanf("%f", &rate_interest);

    printf("Digite o tempo em anos: ");
    scanf("%f", &time_in_years);

    resultado = principal_amount * rate_interest * time_in_years / 100;

    printf("\nResultado: %.2f\n", resultado);
}
