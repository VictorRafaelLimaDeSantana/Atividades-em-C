/*Questão 5 Registros: Faça um programa que armazene em um registro de dados (estrutura composta)
os dados de um funcionário de uma empresa, compostos de:
Nome, Idade, Sexo (M/F), CPF, Data de Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de até 30 caracteres) e salario.
Os dados devem ser digitados pelo usuário, armazenados na estrutura e exibidos na tela.*/

#include <stdio.h>
#include <locale.h>

struct Data{
	int dia, mes, ano;
};
struct Funcionario{
	char nome[80];
	int idade;
	char sexo;
	char cpf[15];
	struct Data dataNascimento;
	int codigoSetor;
	char cargo[30];
	float salario;
};
void Dados(struct Funcionario *funcionario){
	printf("Digite o nome do funcionario: ");
	scanf(" %[^\n]", funcionario->nome);
	
	printf("Digite a idade do funcionario: ");
	scanf("%d", &funcionario->idade);
	
	printf("Digite o sexo do funcionario (M/F): ");
	scanf(" %c", &funcionario->sexo);
	
	printf("Digite o CPF do funcionario: ");
	scanf(" %[^\n]", funcionario->cpf);
	
	printf("Digite a data de nascimento do funcionario (DD/MM/AAAA): ");
	scanf("%d/%d/%d",	&funcionario->dataNascimento.dia, &funcionario->dataNascimento.mes, &funcionario->dataNascimento.ano);
	
	printf("Digite o codigo do setor onde o funcionario trabalha: ");
	scanf("%d", &funcionario->codigoSetor);
	
	printf("Digite o cargo que o funcionario ocupa: ");
	scanf(" %[^\n]", funcionario->cargo);
	
	printf("Digite o salario do funcionario: ");
	scanf("%f", &funcionario->salario);
}
void MostrarDados(struct Funcionario funcionario){
	printf("\nNome: %s\n", funcionario.nome);
	printf("Idade: %d anos\n", funcionario.idade);
	printf("Sexo: %c\n", funcionario.sexo);
	printf("CPF: %s\n", funcionario.cpf);
	printf("Data de Nascimento: %02d/%02d/%04d\n", funcionario.dataNascimento.dia, funcionario.dataNascimento.mes, funcionario.dataNascimento.ano);
	printf("Codigo do Setor: %d\n", funcionario.codigoSetor);
	printf("Cargo: %s\n", funcionario.cargo);
	printf("Salario: R$ %.2f\n", funcionario.salario);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	struct Funcionario funcionario;
	
	Dados(&funcionario);
	MostrarDados(funcionario);
	return 0;
}

