/*Questão 1 Registros: Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma estrutura.
Exiba os dados armazenados ao final.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

struct registro{
	char nome[80];
	int idade;
	char endereco[80];
};
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	struct registro a;
	printf("Digite seu nome: ");
	scanf("%79[^\n]", a.nome);
	getchar();
	
	printf("Digite sua idade: ");
	scanf("%d", &a.idade);
	getchar();
	
	printf("Digite seu endereço: "); 
	scanf("%[^\n]", a.endereco);
	fflush(stdin);
	
	printf("\nNome: %s \nIdade: %d \nEndereço: %s", a.nome, a.idade, a.endereco);
	return 0;
}

