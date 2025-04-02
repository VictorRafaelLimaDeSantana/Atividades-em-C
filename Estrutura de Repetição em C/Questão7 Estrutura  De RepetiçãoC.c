/*Questão 7 Estrutura de Repetição: Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, soma= 0; 
  	 
    for(num = 1; num <= 50; num++){
	soma += 2 * num;
	}
 	printf("Essa é a soma dos primeiros 50 números pares: %d", soma); 
 
 	return 0; 
} 

