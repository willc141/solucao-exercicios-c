#include <stdio.h>

typedef struct {
    char nome[50];
    int numero_inscricao;
    float porcentagem;
} Estudante;

void clear(void);

int main()
{
    Estudante estudantes[3];
    
    for (int i = 0; i < 3; i++) {
        printf("--- Digite os dados do estudante %d ---\n", i);

        printf("Digite o nome do(a) estudante: ");
        fgets(estudantes[i].nome, 50, stdin);
    
        printf("Digite o número de inscrição: ");
        scanf("%d", &estudantes[i].numero_inscricao);
    
        printf("Digite a porcentagem: ");
        scanf("%f", &estudantes[i].porcentagem);
        clear(); // limpa o buffer
    }
    
    printf("\n--- Todos os dados dos estudantes ---\n");
    for (int i = 0; i < 3; i++) {
        printf("\nEstudante %d: Nome=%sNumero Insc.=%d, Porcentagem=%.2f%%\n", i + 1, estudantes[i].nome, estudantes[i].numero_inscricao, estudantes[i]. porcentagem);
    }
}

void clear (void)
{
    while ( getchar() != '\n' );
}