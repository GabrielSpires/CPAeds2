#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int idade;
	char nome[21];
}Aluno;

void troca(Aluno *a, Aluno *b);
void monta_heap(Aluno *v, int k, int dir);
void constroi(Aluno *v, int tam);
void heap(Aluno *v, int tam);
void imprime(Aluno *v, int tam);