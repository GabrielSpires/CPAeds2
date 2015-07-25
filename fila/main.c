#include <stdio.h>
#include "fila.h"

int main(){
	int i;
	TipoFila minhaFila;
	TipoItem x;
	FFVazia(&minhaFila);

	printf("Fila vazia? %d\n", Vazia(minhaFila));

	for(i=0; i<10; i++){
		x.Chave = i;
		if(Enfileira(x, &minhaFila)){
			printf("Elemento %d enfileirado!\n", x.Chave);
		}else{
			printf("Erro! O elemento nao pode ser enfileirado!\n");
		}
	}

	Imprime(minhaFila);

	for(i=0; i<10; i++){
		if(Desenfileira(&minhaFila, &x)){
			printf("Elemento %d desenfileirado!\n", x.Chave);
		}else{
			printf("Erro! O elemento nao pode ser desenfileirado!\n");
		}
	}

	Imprime(minhaFila);

	return 0;
}