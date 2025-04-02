/*Questão 3 Registros: Crie uma estrutura representando os alunos de um determinado curso.
A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.
a)	Permita ao usuário entrar com os dados de 5 alunos.
b)	Encontre o aluno com maior nota da primeira prova.
c)	Encontre o aluno com maior média geral.
d)	Encontre o aluno com menor média geral
e)	Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#define NUM_ALUNOS 5

struct Aluno{
	int matricula;
	char nome[80];
	float nota1, nota2, nota3;
};
void Dados(struct Aluno alunos[], int tamanho){
	for(int i = 0; i < tamanho; i++){
	printf("Digite a matricula do %d° aluno: ", i + 1);
	scanf("%d", &alunos[i].matricula);
	
	printf("Digite o nome do %d° aluno: ", i + 1);
	scanf(" %[^\n]", alunos[i].nome);
	
	printf("Digite a nota da primeira prova do %d° aluno: ", i + 1);
	scanf("%f", &alunos[i].nota1);
	
	printf("Digite a nota da segunda prova do %d° aluno: ", i + 1);
	scanf("%f", &alunos[i].nota2);
	
	printf("Digite a nota da terceira prova do %d° aluno: ", i + 1);
	scanf("%f", &alunos[i].nota3); printf("\n");
}
}
float Media(struct Aluno aluno){
return (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3.0;
}
void MaiorNotaP(struct Aluno alunos[], int tamanho){
	int indiceMaior = 0;
	for(int i = 1; i < tamanho; i++){
	if(alunos[i].nota1 > alunos[indiceMaior].nota1){ indiceMaior = i;
}
}
	printf("\nAluno	com	maior	nota	da	primeira	prova:	%s	(Nota:	%.2f)\n", alunos[indiceMaior].nome, alunos[indiceMaior].nota1);
}
void MaiorMedia(struct Aluno alunos[], int tamanho){
	int indiceMaior = 0;
	float maiorMedia = Media(alunos[0]);
	for(int i = 1; i < tamanho; i++){
	float mediaAtual = Media(alunos[i]);
	if(mediaAtual > maiorMedia){
	maiorMedia = mediaAtual; indiceMaior = i;
}
} 
	printf("Aluno com maior media geral: %s (Media: %.2f)\n", alunos[indiceMaior].nome, maiorMedia);
}
void MenorMedia(struct Aluno alunos[], int tamanho){
	int indiceMenor = 0;
	float menorMedia = Media(alunos[0]);
	for(int i = 1; i < tamanho; i++){
	float mediaAtual = Media(alunos[i]);
	if(mediaAtual < menorMedia){
	menorMedia = mediaAtual; indiceMenor = i;
}
}
	printf("Aluno com menor media geral: %s (Media: %.2f)\n", alunos[indiceMenor].nome, menorMedia);
}
void Aprovacao(struct Aluno alunos[], int tamanho){
	for(int i = 0; i < tamanho; i++){ float media = Media(alunos[i]); if(media >= 6.0){
	printf("Aluno %s foi APROVADO com media %.2f\n", alunos[i].nome, media);
}else{
	printf("Aluno %s foi REPROVADO com media %.2f\n", alunos[i].nome, media);
}
}
}
int main(){
	setlocale(LC_ALL, "Portuguese");
	struct Aluno alunos[NUM_ALUNOS];
	
	Dados(alunos, NUM_ALUNOS);
	MaiorNotaP(alunos, NUM_ALUNOS);
	MaiorMedia(alunos, NUM_ALUNOS);
	MenorMedia(alunos, NUM_ALUNOS);
	Aprovacao(alunos, NUM_ALUNOS);
	return 0;
}

