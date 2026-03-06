// inserir_inicio(Item** cabeca, int valor) que insere um nó no começo e faz as ligações nos dois sentidos corretamente.

#include <stdio.h>
#include <stdlib.h>

struct Lista {
  int dado;
  struct Lista* proximo;
  struct Lista* anterior;
};

typedef struct Lista Item;

Item* inserir_inicio(Item* cabeca, int valor);
Item* criar_lista(int valor);
void imprimir(Item* cabeca);

int main() {
  Item* lista = NULL;

  printf("\nInserindo 5, 20, 30 no início...\n");
  lista = inserir_inicio(lista, 5);
  lista = inserir_inicio(lista, 20);
  lista = inserir_inicio(lista, 30);

  imprimir(lista);

  return 0;
}

Item* criar_lista(int valor) {
  Item* novo = (Item*)malloc(sizeof(Item));

  if (novo == NULL) {
    fprintf(stderr, "impossivel alocar.\n");
    return NULL;
  }

  novo->dado = valor;
  novo->proximo = NULL;
  novo->anterior = NULL;
  return novo;
}

Item* inserir_inicio(Item* cabeca, int valor) {
  Item* novo = criar_lista(valor);

  if (novo == NULL) return cabeca; // se alocacao falhar, retorna a lista como estava

  novo->proximo = cabeca;
  novo->anterior = NULL;

  if (cabeca != NULL) {
    cabeca->anterior = novo;
  }
  
  return novo;
}

void imprimir(Item* cabeca) {
  Item* atual = cabeca;

  printf("NULL <--> ");
  while (atual != NULL) {
    printf("%d <--> ", atual->dado);
    atual = atual->proximo;
  }
  printf("NULL\n");
}