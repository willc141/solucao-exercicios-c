/// remover_valor(Item** cabeca, int valor) que remove o primeiro nó com aquele valor.

#include <stdio.h>
#include <stdlib.h>

struct Lista {
  int dado;
  struct Lista *proximo;
  struct Lista *anterior;
};

typedef struct Lista Item;

Item* criar_lista(int valor);
Item* remover_valor(Item* cabeca, int valor);
Item* inserir_fim(Item* cabeca, int valor);
void imprimir(Item* cabeca);

int main() {
  Item* lista = NULL;
  printf("Inserindo 10, 20, 30 no final...\n");
  lista = inserir_fim(lista, 10);
  lista = inserir_fim(lista, 20);
  lista = inserir_fim(lista, 30);
  imprimir(lista);
  
  printf("removendo 10...\n");
  lista = remover_valor(lista, 10);
  
  imprimir(lista);
  
  printf("removendo 20...\n");
  lista = remover_valor(lista, 20);
  
  imprimir(lista);
  
  printf("removendo 30...\n");
  lista = remover_valor(lista, 30);
  
  imprimir(lista);
  return 0;
}

Item* remover_valor(Item* cabeca, int valor) {
  if (cabeca == NULL) return NULL;
  
  // casoseja o primeiro elemento da lista
  if (cabeca->dado == valor) {
    cabeca = cabeca->proximo;
    if (cabeca != NULL) cabeca->anterior = NULL;
    free(cabeca);
    return cabeca;
  }

  Item* atual = cabeca;
  while (atual != NULL) {
    if (atual->dado == valor) {
      // checa antes se anterior & proximo nao sao null pra poder liberar
      if (atual->anterior != NULL) atual->anterior->proximo = atual->proximo;
      if (atual->proximo != NULL) atual->proximo->anterior = atual->anterior;
      free(atual);
      return cabeca;
    }
    atual = atual->proximo;
  }

  return cabeca;
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

void imprimir(Item* cabeca) {
  Item* atual = cabeca;

  printf("NULL <--> ");
  while (atual != NULL) {
    printf("%d <--> ", atual->dado);
    atual = atual->proximo;
  }
  printf("NULL\n\n");
}

Item* inserir_fim(Item* cabeca, int valor) {
  Item* novo = criar_lista(valor);
  
  if (novo == NULL) return cabeca; // se a alocação falhar, retorna a lista atual
  if (cabeca == NULL) return novo; // se a lista esta vazia, retorna a recem criada
  
  Item* atual = cabeca;
  
  while (atual->proximo != NULL) {
    atual = atual->proximo;
  }
  
  novo->anterior = atual;
  novo->proximo = atual->proximo;
  atual->proximo = novo;

  return cabeca;
}