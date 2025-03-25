/*Questão 10 Estrutura de Repetição: Faça um programa que leia um número inteiro positivo n e calcule a soma dos n primeiros números naturais. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
 	 
 	setlocale(LC_ALL, "Portuguese"); 
 	 
 	int num, soma=0; 
  	 
  	printf("Digite um número inteiro positivo: \n");
	scanf("%d", &num); 
  	 
    for(num = num; num >= 0; num--){
	soma= soma + num; 
} 
 	printf("Essa é a soma dos números naturais até o número digitado: %d", soma); 
 
 	return 0; 
} 

