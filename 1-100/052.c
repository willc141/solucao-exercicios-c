// Practice Problem: Define a structure named Student with members for their name (string), roll_number (integer), and percentage (float). Write a C program to input the details for one student and then display those details

#include <stdio.h>

#define HEADER "--- Detalhes do(a) estudante ---"

typedef struct {
    char nome[50];
    int numero_inscricao;
    float porcentagem;
} Estudante;

int main()
{
    Estudante e1;
    
    printf("Digite o nome do(a) estudante: ");
    fgets(e1.nome, 50, stdin);

    printf("Digite o número de inscrição: ");
    scanf("%d", &e1.numero_inscricao);

    printf("Digite a porcentagem: ");
    scanf("%f", &e1.porcentagem);
    
    printf(HEADER);
    printf("\nNome: %s", e1.nome);
    printf("Numero de inscrição: %d ", e1.numero_inscricao);
    printf("\nPorcentagem: %.2f%%\n", e1.porcentagem);
}