// Create a simple menu-driven program that displays options (“1. Greet”, “2. Say Goodbye”, “3. Exit”). Use a do-while loop to repeatedly show the menu and process the user’s choice until they select the ‘Exit’ option.

#include <stdio.h>

#define HEADER \
    " ============ Digite a opção: ============ \n" \
    "1. Saudação\n" \
    "2. Dizer adeus\n" \
    "3. Sair\n\n"

int show_menu();

int main()
{
    int escolha;
    do {
        escolha = show_menu();
    } while (escolha != 3);

    printf("Good boy.\n");
}

int show_menu() {
    int escolha;

    printf(HEADER);

    if (scanf("%d", &escolha) != 1) {
        while (getchar() != '\n');
        return -1;
    }

    return escolha;
}