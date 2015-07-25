#include <stdio.h>
#include "fila.h"

void FFVazia(TipoFila *Fila){
	Fila->Frente = Fila->Tras = 0;
}

int Vazia(TipoFila Fila){
	if(Fila.Frente == Fila.Tras){
		return 1;
	}else return 0;
}

// Insere no fim da fila
int Enfileira(TipoItem x, TipoFila *Fila){
	if(Fila->Tras % MAXTAM+1 == Fila->Frente){
		printf("Fila cheia! Impossivel enfileirar!\n");
		return 0;
	}else{
		Fila->Item[Fila->Tras] = x;
		Fila->Tras = Fila->Tras % MAXTAM+1;
		return 1;
	}
}

// Remove o primeiro da fila 
int Desenfileira(TipoFila *Fila, TipoItem *Item){
	if(Vazia(*Fila)){
		printf("Fila vazia! Impossivel desenfileirar!\n");
		return 0;
	}else{
		*Item = Fila->Item[Fila->Frente];
		Fila->Frente = Fila->Frente % MAXTAM+1;
		return 1;
	}
}

void Imprime(TipoFila Fila){
	int i;
	for(i=Fila.Frente; i <= Fila.Tras-1; i++){
		printf("Item %d: %d\n", i, Fila.Item[i].Chave);
	}
}