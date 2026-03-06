// uma funcao que retorna 1 se o valor existe na lista, 0 caso contrário.

#include <stdio.h>
#include <stdlib.h>

struct Lista {
  int dado;
  struct Lista *proximo;
};

typedef struct Lista Item;

Item* criar_lista(int valor);
Item* adicionar_fim(Item* cabeca, int valor);
int buscar(Item* cabeca, int valor);

int main() {
  Item* lista = NULL;
  int numero_a_procurar;

  printf("Inserindo valores na lista...\n");
  lista = adicionar_fim(lista, 10);
  lista = adicionar_fim(lista, 20);
  lista = adicionar_fim(lista, 30);

  printf("Digite o numero para procurar na lista: ");
  scanf("%d", &numero_a_procurar);

  int achou = buscar(lista, numero_a_procurar);

  if (achou) {
    printf("Valor encontrado.\n");
  } else {
    printf("Valor não encontrado.\n");
  }

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

  return novo;
}

Item* adicionar_fim(Item* cabeca, int valor) {
  Item* novo = criar_lista(valor);
  
  if (novo == NULL) return cabeca; // se falhar ao alocar, retorna a lista como estava
  if (cabeca == NULL) return novo; // se a lista estiver vazia, retorna a nova criada
  
  Item* atual = cabeca;
  while (atual->proximo != NULL) {
    atual = atual->proximo;
  }

  atual->proximo = novo;

  return cabeca;
}

int buscar(Item* cabeca, int valor) {
  // 1 se achar, 0 se nao achar

  Item* atual = cabeca;
  while (atual != NULL) {
    if (atual->dado == valor) {
      return 1; // achou
    }
    atual = atual->proximo;
  }

  return 0; // nao achou
}
