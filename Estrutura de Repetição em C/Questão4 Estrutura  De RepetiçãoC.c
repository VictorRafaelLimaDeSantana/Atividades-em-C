/*Questão 4 Estrutura de Repetição: Faça um programa que peça ao usuário para digitar 10 valores e some-os. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, soma= 0; 
  	 
    for(int i = 1; i <= 10; i++){ 
     
    	printf("Digite um números: ");
		scanf("%d", &num);
		soma = soma + num; 
 	} 
 	printf("Esse é o resultado da soma desses números: %d", soma); 
 
 	return 0; 
} 

