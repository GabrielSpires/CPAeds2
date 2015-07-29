#include "heap.h"

void troca(Aluno *a, Aluno *b){
	Aluno aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

void monta_heap(Aluno *v, int k, int dir){
	int j;
	while(2*k <= dir){
		j = (2*k) + 1;
		if (j + 1 <= dir && strcmp(v[j].nome, v[j + 1].nome) > 0)
			j++;
		if (strcmp(v[k].nome, v[j].nome) <= 0)
			break;
		
		troca(&v[k], &v[j]);
		k = j;
	}
}

void constroi(Aluno *v, int tam){
	int esq = tam/2;
	while(esq >= 0){
		monta_heap(v, esq, tam - 1);
		esq--;
	}
}

void heap(Aluno *v, int tam){
	int dir = 0;

	constroi(v, tam);
	imprime(v, tam);
	dir = tam - 1;
}

void imprime(Aluno *v, int tam){
	for (int i = 0; i < tam; ++i){
		printf("Aluno %d: %s %d\n", i+1, v[i].nome, v[i].idade);
	}
}