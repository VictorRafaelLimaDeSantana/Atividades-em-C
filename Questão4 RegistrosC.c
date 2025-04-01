/*Questão 4 Registros: Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de alunos:
Matricula, Nome, Código da Disciplina, Nota1 e Nota2. Considere uma turma de ´ até 10 alunos.
Após ler todos os dados digitados, e depois de armazena-los em um vetor de estrutura,
exibir na tela a listagem final dos alunos com as suas respectivas medias finais (use uma média ponderada:
Nota1 com peso=1.0 e Nota2 com peso=2.0).*/

#include <stdio.h>
#include <locale.h>
#define NUM_ALUNOS 10

struct Aluno{ int matricula;
	char nome[80];
	int codigoDisciplina;
	float nota1, nota2;
};
void Dados(struct Aluno alunos[], int tamanho){
	for(int i = 0; i < tamanho; i++){
	printf("Digite a matricula do %d° aluno: ", i + 1);
	scanf("%d", &alunos[i].matricula);
	
	printf("Digite o nome do %d° aluno: ", i + 1);
	scanf(" %[^\n]", alunos[i].nome);
	
	printf("Digite o codigo da disciplina do %d° aluno: ", i + 1);
	scanf("%d", &alunos[i].codigoDisciplina);
	
	printf("Digite a nota 1 do %d° aluno: ", i + 1);
	scanf("%f", &alunos[i].nota1);
	
	printf("Digite a nota 2 do %d° aluno: ", i + 1);
	scanf("%f", &alunos[i].nota2); printf("\n");
}
}
float MediaP(struct Aluno aluno){
return (aluno.nota1 * 1.0f) + (aluno.nota2 * 2.0f) / 3.0f;
}
void Listagem(struct Aluno alunos[], int tamanho){
	printf("\nListagem final dos alunos:\n"); for(int i = 0; i < tamanho; i++){
	float media = MediaP(alunos[i]);
	
	printf("Número da Matricula: %d\n", alunos[i].matricula);
	printf("Nome: %s\n", alunos[i].nome);
	printf("Codigo da Disciplina: %d\n", alunos[i].codigoDisciplina);
	printf("Nota 1: %.2f\n", alunos[i].nota1);
	printf("Nota 2: %.2f\n", alunos[i].nota2);
	printf("Media Final: %.2f\n\n", media);
}
}
int main(){
	setlocale(LC_ALL, "Portuguese");
	struct Aluno alunos[NUM_ALUNOS];
	int quantidadeAlunos;
	
	printf("Digite a quantidade de alunos (maximo 10): ");
	scanf("%d", &quantidadeAlunos);
	
	while(quantidadeAlunos > 10 || quantidadeAlunos <= 0){
	printf("Quantidade invalida! Digite novamente: ");
	scanf("%d", &quantidadeAlunos);
}
	Dados(alunos, quantidadeAlunos);
	Listagem(alunos, quantidadeAlunos);
	return 0;
}

