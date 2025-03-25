/*Questão 3 Estrutura de Repetição: Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000 em 1000,
imprimindo seu valor na tela, até que seu valor seja 100000 (cem mil). */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int soma= 1000, num; 
  	 
    for(num= 0; num <= 100900; num++){
	printf("%d\n", num);
	num = num + 1000; 
 	} 
 	return 0; 
} 

