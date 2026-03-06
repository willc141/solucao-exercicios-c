// remover_inicio(Node** head) que remove o primeiro elemento e libera a memória corretamente.

#include <stdio.h>
#include <stdlib.h>

struct Lista {
  int dado;
  struct Lista *proximo;
};

typedef struct Lista Item;

Item* remover_inicio(Item* cabeca);
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
  
  printf("Removendo o primeiro elemento...\n");
  lista = remover_inicio(lista);
  
  imprimir(lista);
}

Item* criar_lista(int valor) {
  Item* novo = (Item*)malloc(sizeof(Item));

  if (novo == NULL) {
    fprintf(stderr, "Impossivel alocar.\n");
    return NULL;
  }

  novo->dado = valor;
  novo->proximo = NULL;

  return novo;
}

Item* inserir_fim(Item* cabeca, int valor) {
  Item* novo = criar_lista(valor);

  if (novo == NULL) return cabeca; // se falhar em alocar, retorna a lista como estava
  if (cabeca == NULL) return novo; // se lista esta vazia, o novo nó eh a cabeça
  
  Item* atual = cabeca;
  while(atual->proximo != NULL) {
    atual = atual->proximo;
  }

  atual->proximo = novo;
  return cabeca;
}

Item* remover_inicio(Item* cabeca) {
  if (cabeca == NULL) return cabeca;

  Item* atual = cabeca;
  Item* proximo = atual->proximo;
  free(atual);
  
  return proximo;
}

void imprimir(Item* cabeca) {
  Item* atual = cabeca;
  while (atual != NULL) {
    printf("%d --> ", atual->dado);
    atual = atual->proximo;
  }
  printf("NULL\n");
}
