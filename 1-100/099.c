// Escreva uma função inserir_inicio(Node** head, int valor) que insere um novo nó no começo da lista.

#include <stdio.h>
#include <stdlib.h>

struct Lista {
  int dado;
  struct Lista *proximo;
};

typedef struct Lista Item;

Item* inserir_inicio(Item* cabeca, int valor);

int main() {

  Item* lista = NULL; 

  printf("Inserindo 10, 15, 25 e 5 no início...\n");
  lista = inserir_inicio(lista, 10);
  lista = inserir_inicio(lista, 15);
  lista = inserir_inicio(lista, 25);
  lista = inserir_inicio(lista, 5);

  Item* atual = lista;

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

Item* inserir_inicio(Item* cabeca, int valor) {
  Item* novo = (Item*)malloc(sizeof(Item));

  if (novo == NULL) return cabeca;

  novo->dado = valor;
  novo->proximo = NULL;

  novo->proximo = cabeca;

  return novo;
}
