// imprimir(Node* head) que percorre e imprime todos os elementos.

#include <stdio.h>
#include <stdlib.h>

struct Lista {
  int dado;
  struct Lista *proximo;
};

typedef struct Lista Item;

Item* criar_lista(int valor);
Item* inserir_fim(Item* cabeca, int valor);
void imprimir(Item* cabeca);

int main() {
  Item* lista = NULL;

  printf("Inserindo 10, 20, 30 no final...\n");
  lista = inserir_fim(lista, 10);
  lista = inserir_fim(lista, 20);
  lista = inserir_fim(lista, 30);
  imprimir(lista);
  
  return 0;
}

Item* criar_lista(int valor) {
  Item* novo = (Item*)malloc(sizeof(Item));

  if (novo == NULL) {
    fprintf(stderr, "Erro ao alocar.\n");
    return NULL;
  }

  novo->dado = valor;
  novo->proximo = NULL;

  return novo;
}

Item* inserir_fim(Item* cabeca, int valor) {
  Item* novo = criar_lista(valor);

  if (novo == NULL) return cabeca; // se não for possível alocar, retorna a lista como estava
  if (cabeca == NULL) return novo; // se lista está vazia, o novo nó é a cabeça 

  Item* atual = cabeca;
  while (atual->proximo != NULL) {
    atual = atual->proximo;
  }

  atual->proximo = novo;
  return cabeca;
}

void imprimir(Item* cabeca) {
  Item* atual = cabeca;

  while (atual != NULL) {
    printf("%d --> ", atual->dado);
    atual = atual->proximo;
  }
  printf("NULL\n");
}
