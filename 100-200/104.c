// remover_valor(Node** head, int valor) que remove o primeiro nó que contém aquele valor.

#include <stdio.h>
#include <stdlib.h>

struct Lista {
  int dado;
  struct Lista *proximo;
};

typedef struct Lista Item;

Item* criar_lista(int valor);
Item* adicionar_fim(Item* cabeca, int valor);
Item* remover_valor(Item* cabeca, int valor);
void imprimir(Item* cabeca);
void limpar_lista(Item* cabeca);

int main()
{
  Item* lista = NULL;
  int numero_a_ser_removido;

  printf("Inserindo 10, 20, 30 no final...\n");
  lista = adicionar_fim(lista, 10);
  lista = adicionar_fim(lista, 20);
  lista = adicionar_fim(lista, 30);
  imprimir(lista);

  printf("Digite o numero a ser removido (1° ocorrencia): ");
  scanf("%d", &numero_a_ser_removido);

  lista = remover_valor(lista, numero_a_ser_removido);

  imprimir(lista);

  limpar_lista(lista);

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

  if (novo == NULL) return cabeca; // se a alocacao falhar, retorna a lista atual
  if (cabeca == NULL) return novo; // se a lista for vazia, retorna a criada
  
  Item* atual = cabeca;

  while (atual->proximo != NULL) {
    atual = atual->proximo;
  }

  atual->proximo = novo;
  return cabeca;
}

Item* remover_valor(Item* cabeca, int valor) {
  Item* atual = cabeca;

  if (cabeca->dado == valor) {
    Item* temp = cabeca;
    cabeca = cabeca->proximo;
    free(temp);
    return cabeca;
  }
  
  while (atual->proximo != NULL) {
    if (atual->proximo->dado == valor) {
      Item* temp = atual->proximo;
      atual->proximo = temp->proximo;
      free(temp);
      return cabeca;
    }
    atual = atual->proximo;
  }

  printf("Erro/O numero a ser removido nao existe.\n");
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

void limpar_lista(Item* cabeca) {
  Item* atual = cabeca;

  while (atual != NULL) {
    Item* temp = atual;
    atual = atual->proximo;
    free(temp);
  }
}
