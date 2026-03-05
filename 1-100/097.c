// Defina a struct de um nó de uma linked list de inteiros e crie um único nó com o valor 42 usando malloc. Imprima o valor e libere a memória.

#include <stdio.h>
#include <stdlib.h>

struct Lista {
  int dado;
  struct Lista *proximo;
};

typedef struct Lista Item;

int main() {
  Item* novo = (Item*)malloc(sizeof(Item)); // aloca 1 elemento com o tamanho de Item

  printf("Inserindo 42 na lista...\n");

  novo->dado = 42;
  novo->proximo = NULL;

  printf("Valor: %d\n", novo->dado);
  
  free(novo);
}
