// inverter(Node** head) que inverte a ordem dos nós sem criar uma nova lista (apenas reorganizando os ponteiros).

#include <stdio.h>
#include <stdlib.h>

struct Lista {
  int dado;
  struct Lista *proximo;
};

typedef struct Lista Item;

Item* criar_lista(int valor);
Item* inverter(Item* cabeca);
Item* inserir_fim(Item* cabeca, int valor);
void liberar_lista(Item* cabeca);
void imprimir(Item* cabeca);

int main() {
  Item* lista = NULL;

  printf("Inserindo valores na lista...\n");
  lista = inserir_fim(lista, 10);
  lista = inserir_fim(lista, 20);
  lista = inserir_fim(lista, 30);
  imprimir(lista);
  
  printf("Invertendo lista...\n");
  lista = inverter(lista);
  imprimir(lista);
  
}

Item* criar_lista(int valor) {
  Item* novo = (Item*)malloc(sizeof(Item));

  if (novo == NULL) {
    fprintf(stderr, "impossivel alocar.\n");
    return NULL;
  }

  novo->dado = valor;
  novo->proximo = NULL;

  return novo;
}

Item* inserir_fim(Item* cabeca, int valor) {
  Item* novo = criar_lista(valor);

  if (novo == NULL) return cabeca; // se alocacao falhou, retorna a lista atual
  if (cabeca == NULL) return novo; // se lista vazia, retorna a recem criada
  // uga uga booga
  
  Item* atual = cabeca;
  while (atual->proximo != NULL) {
    atual = atual->proximo;
  }

  atual->proximo = novo;
  return cabeca;

}

Item* inverter(Item* cabeca) {
  Item* atual = cabeca;
  Item* anterior = NULL;
  Item* proximo = NULL;

  while (atual != NULL) {
    proximo = atual->proximo;
    atual->proximo = anterior;
    anterior = atual;
    atual = proximo;
  }
  
  return anterior;
}

void liberar_lista(Item* cabeca) {
  Item* atual = cabeca;
  
  while (atual != NULL) {
    Item* temp = atual;
    atual = atual->proximo;
    free(temp);
  }
}

void imprimir(Item* cabeca) {
  Item* atual = cabeca;
  
  while (atual != NULL) {
    printf("%d --> ", atual->dado);
    atual = atual->proximo;
  }
  printf("NULL\n");
}