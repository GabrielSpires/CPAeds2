#include <stdio.h>
#include "lista.h"

int main(){
	int i;
	TipoLista minhaLista;
	TipoItem x;
	FLVazia(&minhaLista);

	for(i=0; i<10; i++){
		x.Chave = i;
		if(Insere(x, &minhaLista)){
			printf("Elemento %d inserido!\n", x.Chave);
		}else{
			printf("Lista cheia! O elemento nao pode ser inserido!\n");
		}
	}

	printf("Ultima posiçao: %d\n", minhaLista.Ultimo);

	for(i=0; i<10; i++){
		if(Retira(minhaLista.Primeiro, &minhaLista, &x)){
			printf("Elemento %d retirado!\n", x.Chave);
		}else{
			printf("Posicao invalida! O elemento nao pode ser retirado!\n");
		}
	}

	Imprime(minhaLista);

	return 0;
}