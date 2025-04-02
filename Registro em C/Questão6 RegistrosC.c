/*Questão 6 Registros: Criar um sistema que permita cadastrar 3 alunos com as seguintes informações: matrícula, nome e nota final.
Em seguida, exibir os dados cadastrados.*/

#include <stdio.h>
#include <locale.h>

struct aluno{
	int matricula;
	char nome[50];
	float nota;
};
int main(){
	setlocale(LC_ALL, "Portuguese");
	struct aluno alunos[3];
	
	for(int i = 0; i < 3; i++){
	printf("Digite o nome do %d° aluno: ", i + 1);
	scanf("%49s", alunos[i].nome);
	
	printf("Digite a matrícula do %d° aluno: ", i + 1);
	scanf("%d", &alunos[i].matricula);
	
	printf("Digite a nota do %d° aluno: ", i + 1);
	scanf("%f", &alunos[i].nota);
	printf("\n");
}
	printf("\nAlunos cadastrados:\n");
	for(int i = 0; i < 3; i++){
	printf("Matrícula: %d, Nome: %s, Nota: %.2f\n", alunos[i].matricula, alunos[i].nome, alunos[i].nota);
}
	return 0;
}

