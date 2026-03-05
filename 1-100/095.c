#include <stdio.h>
#include <stdlib.h>

struct No {
  int data;
  struct No* next;
};

void imprimir_lista(struct No *cabeca) {
  struct No* atual = cabeca;

  while (atual != NULL) {
    printf("%d --> ", atual->data);
    atual = atual->next;
  }
  printf("NULL\n");
}

int main() {
  struct No *cabeca = malloc(sizeof(struct No));
  cabeca->data = 10;
  cabeca->next = NULL;
  
  struct No *no2 = malloc(sizeof(struct No));
  no2->data = 20;
  no2->next = NULL;
  
  cabeca->next = no2;

  struct No *no3 = malloc(sizeof(struct No));
  no3->data = 30;
  no3->next = NULL;

  no2->next = no3;
  
  imprimir_lista(cabeca);
  return 0;
}