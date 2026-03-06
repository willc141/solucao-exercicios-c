// contar(Node* head) que retorna o número de nós da lista.

#include <stdio.h>
#include <stdlib.h>

struct Lista {
  int dado;
  struct Lista *proximo;
};

typedef struct Lista Item;

int contar(Item* cabeca);
Item* criar_lista(int valor);
Item* adicionar_fim(Item* cabeca, int valor);
void deletar_lista(Item* cabeca);

int main() {
  Item* lista = NULL;
  int tamanho;

  printf("Inserindo alguns elementos no final...\n");
  lista = adicionar_fim(lista, 10);
  lista = adicionar_fim(lista, 25);
  lista = adicionar_fim(lista, 30);
  lista = adicionar_fim(lista, 42);
  lista = adicionar_fim(lista, 24);
  lista = adicionar_fim(lista, 34);
  
  tamanho = contar(lista);
  
  printf("O tamanho da lista é: %d\n", tamanho);
}

int contar(Item* cabeca) {
  Item* atual = cabeca;
  int total_nos = 0;

  while (atual != NULL) {
    atual = atual->proximo;
    total_nos++;
  }

  return total_nos;
}

Item* criar_lista(int valor) {
  Item* novo = malloc(sizeof(Item));

  if (novo == NULL) {
    fprintf(stderr, "impossivel alocar.\n");
    return NULL;
  }

  novo->dado = valor;
  novo->proximo = NULL;

  return novo;
}

Item* adicionar_fim(Item* cabeca, int valor) {
  Item* novo = criar_lista(valor);

  if (novo == NULL) return cabeca; // se a alocacao nao for possivel, retorna a lista como estava 
  if (cabeca == NULL) return novo; // se a lista esta vazia, retorna a nova criada
  
  Item* atual = cabeca;
  while(atual->proximo != NULL) {
    atual = atual->proximo;
  }

  atual->proximo = novo;
  return cabeca;
}

void deletar_lista(Item* cabeca) {
  Item* atual = cabeca;

  while (atual != NULL) {
    Item* temp = atual;
    atual = atual->proximo;
    free(temp);
  }
}
