// Practice Problem: Define a structure named Date with members day, month, and year. Then, define a structure named Employee with members id, name, and an embedded (or nested) structure of type Date named date_of_joining. Read and display the record for one employee.

#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    int id;
    char nome[50];
    Data data_entrou;
} Funcionario;

int main() {
    Funcionario f1;

    printf("Digite o nome do funcionário: ");
    fgets(f1.nome, 50, stdin);
    printf("Digite o ID do funcionário: ");
    scanf("%d", &f1.id);
    printf("Digite a data em que o funcionário entrou (dia mes ano): ");
    scanf("%d %d %d", &f1.data_entrou.dia, &f1.data_entrou.mes, &f1.data_entrou.ano);

    printf("\n ---- Funcionário ---- \n");
    printf(" Nome: %s", f1.nome);
    printf(" ID: %d\n", f1.id);
    printf(" Data que entrou: %d/%d/%d\n", f1.data_entrou.dia, f1.data_entrou.mes, f1.data_entrou.ano);
}