// Crie uma função que retorna o número de elementos na lista

#include <stdio.h>
#include <stdlib.h>

typedef struct Lista {
    int dado;
    struct Lista* proximo;
} Lista;

Lista* criar_lista(int valor);
Lista* inserir_final(Lista* lista, int valor);
void destruir_lista(Lista* lista);
int total_elementos(Lista* lista);

int main()
{
  Lista* lista = NULL;
  lista = inserir_final(lista, 10);
  lista = inserir_final(lista, 20);
  lista = inserir_final(lista, 30);
  lista = inserir_final(lista, 40);
  lista = inserir_final(lista, 10);
  lista = inserir_final(lista, 20);
  lista = inserir_final(lista, 30);
  lista = inserir_final(lista, 40);

  int total = total_elementos(lista);
  printf("Total de elementos na lista: %d\n", total);

  destruir_lista(lista);
}

int total_elementos(Lista *lista)
{
  int total = 0;
  Lista* atual = lista;

  while (atual != NULL) {
    atual = atual->proximo;
    total++;
  }

  return total;
}

Lista* criar_lista(int valor)
{
  Lista* novo = (Lista*)malloc(sizeof(Lista));
  if (novo == NULL) {
    fprintf(stderr, "Erro ao alocar.\n");
    return NULL;
  }
  novo->dado = valor;
  novo->proximo = NULL;

  return novo;
}

Lista* inserir_final(Lista* lista, int valor)
{
  Lista* novo = criar_lista(valor);
  if (novo == NULL) return lista;
  if (lista == NULL) return novo;

  Lista* atual = lista;

  while (atual->proximo != NULL) {
    atual = atual->proximo;
  }
  atual->proximo = novo;

  return lista;
}

void destruir_lista(Lista* lista) {
    Lista* atual = lista;
    
    while (atual != NULL) {
        Lista* temp = atual;
        atual = atual->proximo;
        free(temp);
    }
}