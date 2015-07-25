#include <stdio.h>
#include "lista.h"

void FLVazia(TipoLista *Lista){
	Lista->Primeiro = Lista->Ultimo = INICIOARRANJO;
}

int Vazia(TipoLista Lista){
	return (Lista.Primeiro == Lista.Ultimo);
}

int Insere(TipoItem x, TipoLista *Lista){
	if(Lista->Ultimo == MAXTAM){
		printf("Nao foi possivel inserir (lista cheia).\n");
		return 0;
	}else{
		Lista->Item[Lista->Ultimo] = x;
		Lista->Ultimo++;
		return 1;
	}
}

int Retira(TipoPonteiro p, TipoLista *Lista, TipoItem *Item){
	if(Vazia(*Lista) || p >= Lista->Ultimo){
		return 0;
	}else{
		int i;
		*Item = Lista->Item[p];
		Lista->Ultimo--;
		for(i=p; i < Lista->Ultimo; i++){
			Lista->Item[i] = Lista->Item[i+1];
		}
		return 1;
	}
}

void Imprime(TipoLista Lista){
	int i;
	if(!Vazia(Lista)){
		for(i=0; i<Lista.Ultimo; i++){
			printf("Lista %d: %d\n", Lista.Primeiro+i, Lista.Item[Lista.Primeiro+i].Chave);
		}
	}else{
		printf("Impossivel imprimir uma lista vazia, idiota!\n");
	}
}