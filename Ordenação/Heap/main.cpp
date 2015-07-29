#include "heap.h"

int main(){
	Aluno *meusAlunos;
	int n;
	printf("Numero de alunos: ");
	scanf("%d", &n);

	meusAlunos = (Aluno*)malloc(n*sizeof(Aluno));

	printf("Entre com o nome e idade dos alunos: \n");
	for (int i = 0; i < n; ++i){
		printf("Aluno %d: ", i+1);
		scanf("%s %d", meusAlunos[i].nome, &meusAlunos[i].idade);
	}

	heap(meusAlunos, n);

	return 0;
}