// adivinhe o "número aleatório" (obs: fiz para praticar, não está diretamente no site.)

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int gerar_numero(int alcance);

int main()
{
    int numero_maquina = gerar_numero(100);
    int escolha_usuario;
    int tentativas = 0;
    printf("A máquina escolheu um número entre 0 a 100. Tente adivinhar\n");

    do {
        printf("Seu chute: ");
        scanf("%d", &escolha_usuario);

        if (escolha_usuario > numero_maquina) {
            printf("\nSeu chute é maior que o número escolhido.\n");
        } else if (escolha_usuario < numero_maquina) {
            printf("\nSeu chute é menor que o número escolhido.\n");
        }

        tentativas++;
    } while (escolha_usuario != numero_maquina);

    printf("\nVocê acertou com %d tentativas.\n", tentativas);
}

int gerar_numero(int alcance)
{
    srand(time(NULL));
    int numero_aleatorio = rand() % alcance;
    return numero_aleatorio;
}