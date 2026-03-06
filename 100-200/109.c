// imprimir_frente(Item* cabeca) e imprimir_tras(Item* cabeca) que percorrem e imprimem a lista nos dois sentidos.

#include <stdio.h>
#include <stdlib.h>

struct Lista {
  int dado;
  struct Lista *proximo;
  struct Lista *anterior;
};

typedef struct Lista Item;

Item* criar_lista(int valor);
Item* inserir_inicio(Item* cabeca, int valor);
void imprimir_frente(Item* cabeca);
void imprimir_tras(Item* cabeca);

int main() {
  Item* lista = NULL;

  printf("\nInserindo 5, 20, 30, 72 no início...\n");
  lista = inserir_inicio(lista, 5);
  lista = inserir_inicio(lista, 20);
  lista = inserir_inicio(lista, 72);
  lista = inserir_inicio(lista, 30);

  imprimir_frente(lista);
  printf("\n");
  imprimir_tras(lista);
  return 0;
}

Item* criar_lista(int valor) {
  Item* novo = (Item*)malloc(sizeof(Item));

  if (novo == NULL) {
    fprintf(stderr, "falha ao alocar.\n");
    return NULL;
  }

  novo->dado = valor;
  novo->proximo = NULL;
  novo->anterior = NULL;

  return novo;
}

Item* inserir_inicio(Item* cabeca, int valor) {
  Item* novo = criar_lista(valor);

  if (novo == NULL) return cabeca; // se falhar ao alocar, retorna a lista atual
  
  novo->proximo = cabeca;
  novo->anterior = NULL;
  if (cabeca != NULL) { // evita segfault se cabeça for null
    cabeca->anterior = novo;
  }

  return novo;
}

void imprimir_frente(Item* cabeca) {
  Item* atual = cabeca;

  printf("NULL <--> ");
  while (atual != NULL) {
    printf("%d <--> ", atual->dado);
    atual = atual->proximo;
  }
  printf("NULL\n");
}

void imprimir_tras(Item* cabeca) {
  Item* atual = cabeca;
  
  // avança atual pro final da lista
  while (atual->proximo != NULL) {
    atual = atual->proximo;
  }

  // imprime do final ao começo
  printf("NULL <--> ");
  while (atual != NULL) {
    printf("%d <--> ", atual->dado);
    atual = atual->anterior;
  }
  printf("NULL\n");
}