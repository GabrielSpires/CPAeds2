#include <stdio.h>
#include "pilha.h"

void FPVazia(TipoPilha *Pilha){
	Pilha->Topo = 0;
}

int Vazia(TipoPilha Pilha){
	return (Pilha.Topo == 0);
}

// Insere no topo da pilha
int Empilha(TipoItem x, TipoPilha *Pilha){
	if(Pilha->Topo == MAXTAM){
		return 0;
	}else{
		Pilha->Item[Pilha->Topo] = x;
		Pilha->Topo++;
	}
}

// Remove o item que está no topo da pilha
int Desempilha(TipoPilha *Pilha, TipoItem *Item){
	if(Vazia(*Pilha)){
		return 0;
	}else{
		*Item = Pilha->Item[Pilha->Topo-1];
		Pilha->Topo--;
	}
}

int Tamanho(TipoPilha Pilha){
	return Pilha.Topo;
}

void Imprime(TipoPilha Pilha){
	int i;
	for(i=0; i<Pilha.Topo; i++){
		printf("Elemento %d: %d\n", i, Pilha.Item[i].Chave);
	}
}