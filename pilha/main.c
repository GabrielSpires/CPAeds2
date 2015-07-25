#include <stdio.h>
#include "pilha.h"

int main(){
	int i;
	TipoPilha minhaPilha;
	TipoItem x;
	FPVazia(&minhaPilha);

	for(i=0; i<10; i++){
		x.Chave = i;
		if(Empilha(x, &minhaPilha)){
			printf("Elemento %d empilhado!\n", x.Chave);
		}else{
			printf("Erro! Impossivel empilhar elemento!\n");
		}
	}

	Imprime(minhaPilha);
	printf("Tamanho da pilha: %d\n", Tamanho(minhaPilha));

	for(i=0; i<10; i++){
		if(Desempilha(&minhaPilha, &x)){
			printf("Elemento %d desempilhado!\n", x.Chave);
		}else{
			printf("Erro! Impossivel desempilhar elemento!\n");
		}
	}

	return 0;
}