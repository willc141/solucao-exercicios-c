// Practice Problem: Define a Car structure (members: model_year, color). Declare a variable of this structure and a pointer to this structure. Use the structure pointer to: 1) assign values to the members, and 2) print the assigned values.

#include <stdio.h>

struct Carro {
    int ano_do_modelo;
    char cor[50];
};

void clear(void);

int main()
{
    struct Carro *carroPtr, carro1;
    carroPtr = &carro1;

    printf("Digite o ano do modelo do carro: ");
    scanf("%d", &carroPtr->ano_do_modelo);
    clear();
    printf("Digite a cor do carro: ");
    fgets(carroPtr->cor, 50, stdin);

    printf("\n--- Carro ---\n");
    printf("Ano do modelo: %d\n", carroPtr->ano_do_modelo);
    printf("Cor do carro: %s", carroPtr->cor);
}

void clear (void)
{
    while ( getchar() != '\n' );
}