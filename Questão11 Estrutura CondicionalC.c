/*Questão 11 Estrutura Condicional: Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5,
mas não simultaneamente pelos dois. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main() { 
 	setlocale(LC_ALL, "Portuguese");
	int num; 
 
	printf("Digite um número: \n");
	scanf("%d", &num);
	if(num%3==0 && num%5==0){ 
    printf("Esse número é divisível por 3 e 5!"); 
    }else if(num%3==0){
	printf("Esse número é divisível por 3!"); 
    }else if(num%5==0){
	printf("Esse número é divisível por 5!"); 
    } 
    return 0; 
} 
