// Buscar um valor
// retorna 1 se achar

#include <stdio.h>
#include <stdlib.h>

struct No {
  int data;
  struct No* next;
};

int buscar_valor(struct No *head, int valor) {
  struct No* atual = head;

  while (atual != NULL) {
    if (atual->data == valor) {
      return 1;
    }
    atual = atual->next;
  }
  return 0;
}

int main() {
  struct No *head = malloc(sizeof(struct No));
  head->data = 10;
  head->next = NULL;
  
  struct No *no2 = malloc(sizeof(struct No));
  no2->data = 20;
  no2->next = NULL;
  
  head->next = no2;

  struct No *no3 = malloc(sizeof(struct No));
  no3->data = 30;
  no3->next = NULL;

  no2->next = no3;
  
  int resultado = buscar_valor(head, 20);

  if (resultado) {
    printf("Encontrei\n!");
  } else {
    printf("Não encontrei.\n");
  }
  return 0;
}