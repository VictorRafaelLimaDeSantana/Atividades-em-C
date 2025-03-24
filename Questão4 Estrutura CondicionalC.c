/*Questão 4 Estrutura Condicional: Leia o salário de um trabalhador e o valor da prestação de um empréstimo.
Se a prestação for maior que 20% do salário imprima: "Empréstimo não concedido", caso contrário imprima: "Empréstimo concedido". */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
 	setlocale(LC_ALL, "Portuguese"); 
 	 
 	float salario, prestacao, limite_emprestimo; 
 	 
 	printf("Digite o valor do salario: \n");
	scanf("%f", &salario); 
 	 
 	printf("Digite o valor do emprestimo: \n"); 
 	scanf("%f", &prestacao); 
 	 
 	limite_emprestimo= salario * 0.20; 
 	 
 	if(prestacao > limite_emprestimo){
	printf("Emprestimo não concedido!"); 
 	}else{ 
 	printf("Emprestimo condedido!"); 
 	} 
 	return 0; 
} 
