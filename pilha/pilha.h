#include <stdio.h>
#define MAXTAM 1000


typedef int TipoApontador;
typedef int TipoChave;
typedef struct {
  TipoChave Chave;
  /* --- outros componentes --- */
} TipoItem;

typedef struct {
  TipoItem Item[MAXTAM];
  TipoApontador Topo;
} TipoPilha;


void FPVazia(TipoPilha *Pilha);

int Vazia(TipoPilha Pilha);

// Insere no topo da pilha
int Empilha(TipoItem x, TipoPilha *Pilha);

// Remove o item que está no topo da pilha
int Desempilha(TipoPilha *Pilha, TipoItem *Item);

int Tamanho(TipoPilha Pilha);

void Imprime(TipoPilha Pilha);