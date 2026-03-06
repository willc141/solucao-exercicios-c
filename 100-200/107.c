// criar_no(int valor) que aloca e retorna um novo nó com proximo e anterior apontando pra NULL.


#include <stdio.h>
#include <stdlib.h>

struct Lista {
  int dado;
  struct Lista *proximo;
  struct Lista *anterior;
};

typedef struct Lista Item;

Item* criar_no(int valor);

int main() {
  Item* lista = NULL;

  printf("criando nó com valor 30...\n");
  lista = criar_no(30);

  Item* atual = lista;

  while (atual != NULL) {
    printf("%d --> ", atual->dado);
    atual = atual->proximo;
  }
  printf("NULL\n");

  return 0;
}

Item* criar_no(int valor) {
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
