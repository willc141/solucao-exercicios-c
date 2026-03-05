// Escreva uma função inserir_fim(Node** head, int valor) que insere no final.

#include <stdio.h>
#include <stdlib.h>

struct Lista {
  int dado;
  struct Lista *proximo;
};

typedef struct Lista Item;

Item* inserir_fim(Item* cabeca, int valor);

int main() {

  Item* lista = NULL;

  printf("Inserindo 10, 20, 30 no final...\n");
  lista = inserir_fim(lista, 10);
  lista = inserir_fim(lista, 20);
  lista = inserir_fim(lista, 30);
  
  Item* atual = lista;
  while (atual != NULL) {
    printf("%d --> ", atual->dado);
    atual = atual->proximo;
  }
  printf("NULL\n");
  
  // libera lista
  while (atual != NULL) {
    Item* proximo = atual->proximo;
    free(atual);
    atual = proximo;
  }
  
  return 0;

}

Item* inserir_fim(Item* cabeca, int valor) {
  Item* novo = (Item*)malloc(sizeof(Item));
  
  novo->dado = valor;
  novo->proximo = NULL;

  if (novo == NULL) return cabeca;
  if (cabeca == NULL) return novo; // se lista está vazia, o novo nó é a cabeça 

  Item* atual = cabeca;
  while (atual->proximo != NULL) {
    atual = atual->proximo;
  }

  atual->proximo = novo;
  return cabeca;
}
