// inserir_fim(Item** cabeca, int valor).

#include <stdio.h>
#include <stdlib.h>

struct Lista {
  int dado;
  struct Lista *proximo;
  struct Lista *anterior;
};

typedef struct Lista Item;

Item* criar_lista(int valor);
Item* inserir_fim(Item* cabeca, int valor);
void imprimir(Item* cabeca);

int main() {
  Item* lista = NULL;

  printf("\nInserindo 10, 20, 30 no fim...\n");
  lista = inserir_fim(lista, 10);
  lista = inserir_fim(lista, 20);
  lista = inserir_fim(lista, 30);
  
  imprimir(lista);
  
  printf("\nInserindo 80 no fim...\n");
  lista = inserir_fim(lista, 80);
  imprimir(lista);

  return 0;
}

Item* criar_lista(int valor) {
  Item* novo = (Item*)malloc(sizeof(Item));

  if (novo == NULL) {
    fprintf(stderr, "impossivel alocar.");
    return NULL;
  }

  novo->dado = valor;
  novo->proximo = NULL;
  novo->anterior = NULL;

  return novo;
}

Item* inserir_fim(Item* cabeca, int valor) {
  Item* novo = criar_lista(valor);

  if (novo == NULL) return cabeca; // se a alocacao falhar, retorna a lista como esta
  if (cabeca == NULL) return novo; // se a lista tiver vazia, retorna a recem criada.
  
  Item* atual = cabeca;
  while (atual->proximo != NULL) {
    atual = atual->proximo;
  }

  novo->anterior = atual;
  novo->proximo = atual->proximo;
  atual->proximo = novo;

  return cabeca;
}

void imprimir(Item* cabeca) {
  Item* atual = cabeca;

  printf("NULL <--> ");
  while (atual != NULL) {
    printf("%d <--> ", atual->dado);
    atual = atual->proximo;
  }
  printf("NULL\n\n");
}