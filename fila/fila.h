#include <stdio.h>

// Define-se as estruturas, bem similar ao TAD Lista
#define MAXTAM  1000

typedef int TipoApontador;

typedef int TipoChave;

typedef struct {
  TipoChave Chave;
  /* outros componentes */
} TipoItem;

typedef struct {
  TipoItem Item[MAXTAM];
  TipoApontador Frente, Tras;
} TipoFila;

void FFVazia(TipoFila *Fila);

int Vazia(TipoFila Fila);

// Insere no fim da fila
int Enfileira(TipoItem x, TipoFila *Fila);

// Remove o primeiro da fila 
int Desenfileira(TipoFila *Fila, TipoItem *Item);

void Imprime(TipoFila Fila);