// Crie manualmente uma lista com 3 nós: 10 -> 20 -> 30 -> NULL. Imprima todos os valores percorrendo a lista.

#include <stdio.h>
#include <stdlib.h>

struct Lista {
  int dado;
  struct Lista *proximo;
};

typedef struct Lista Item;

int main() {
  Item* novo = (Item*)malloc(sizeof(Item));
  Item* novo2 = (Item*)malloc(sizeof(Item));
  Item* novo3 = (Item*)malloc(sizeof(Item));

  novo->dado = 10;
  novo->proximo = novo2;

  novo2->dado = 20;
  novo2->proximo = novo3;
  
  novo3->dado = 30;
  novo3->proximo = NULL;

  Item* atual = novo;

  while (atual != NULL) {
    printf("%d --> ", atual->dado);
    atual = atual->proximo;
  }
  printf("NULL\n");

  while (atual != NULL) {
    Item* proximo = atual->proximo;
    free(atual);
    atual = proximo;
  }
  
  return 0;
}
