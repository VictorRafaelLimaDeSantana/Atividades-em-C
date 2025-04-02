/*Questão 7 Registros: Criar um sistema que permita cadastrar 5 produtos com nome, quantidade e preço.
Exiba o valor total de cada produto (quantidade * preço) e o valor total do estoque.*/

#include <stdio.h>
#include <locale.h>

struct produto {
	char nome[50];
	int quantidade;
	float preco;
};
int main(){
	setlocale(LC_ALL, "Portuguese");
	struct produto produtos[5];
	
	for(int i = 0; i < 5; i++){
	printf("Digite o nome do produto %d: ", i + 1);
	scanf("%s", produtos[i].nome);
	
	printf("Digite a quantidade do produto %d: ", i + 1);
	scanf("%d", &produtos[i].quantidade);
	
	printf("Digite o preço do produto %d: ", i + 1);
	scanf("%f", &produtos[i].preco);
	printf("\n");
}
	float valor_total_estoque = 0.0;
	printf("\nProdutos cadastrados:\n");
	for(int i = 0; i < 5; i++){
	float valor_total_produto = produtos[i].quantidade * produtos[i].preco; valor_total_estoque += valor_total_produto;
	printf("Produto: %s, Total: R$ %.2f\n", produtos[i].nome, valor_total_produto);
}
	printf("\nValor total do estoque: R$ %.2f\n", valor_total_estoque);
	return 0;
}

