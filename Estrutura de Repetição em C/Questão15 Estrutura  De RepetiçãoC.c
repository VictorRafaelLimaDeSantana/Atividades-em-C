/*Questão 15 Estrutura de Repetição: Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos de 3 ou 5. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
 	setlocale(LC_ALL, "Portuguese"); 
 	 
 	int soma = 0; 
    for(int i = 1; i < 1000; i++){
	if(i % 3 == 0 || i % 5 == 0){
	soma += i; 
        } 
    } 
    printf("A soma dos múltiplos de 3 ou 5 abaixo de 1000 é: %d\n", soma);
	return 0; 
} 
 
