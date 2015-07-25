#include <stdio.h>

#define INICIOARRANJO   0 // O início da lista é a posição 0 do vetor
#define MAXTAM          1000 // Caso se queira uma lista maior, este valor deve ser alterado

// A chave da lista é um numero inteiro
typedef int TipoChave;
// Um ponteiro na lista de arranjo é um número inteiro
typedef int TipoPonteiro;
// usamos o TipoItem para abstrair o elemento da lista
typedef struct {
  TipoChave Chave;
  /* outros componentes */
} TipoItem;
typedef struct {
	// A lista de arranjos é um vetor
  TipoItem Item[MAXTAM];
  	// Numa lista é importante saber onde ficam o começo e o fim desta
  TipoPonteiro Primeiro, Ultimo;
} TipoLista;
// Inicializa uma lista vazia (0 = Primeiro = Ultimo)
void FLVazia(TipoLista *Lista);
// Verifica se uma lista é vazia
int Vazia(TipoLista Lista);
// Insere um elemento no fim da lista. Retorna 1, se conseguir, 0 se a lista estiver cheia.
int Insere(TipoItem x, TipoLista *Lista);
// Remove o item que estiver na posição p da lista,  O elemento removido é armazenado na variavel "Item".
// retorna 0 se não conseguir ou 1 se tiver sucesso
int Retira(TipoPonteiro p, TipoLista *Lista, TipoItem *Item);
// Exibe todos os elementos da lista na tela
void Imprime(TipoLista Lista);