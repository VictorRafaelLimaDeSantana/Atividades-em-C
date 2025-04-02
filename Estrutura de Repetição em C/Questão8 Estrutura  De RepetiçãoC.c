/*Questão 8 Estrutura de Repetição: Faça um programa que leia um número inteiro positivo N e
imprima todos os números naturais de 0 até N em ordem decrescente. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){
	setlocale(LC_ALL, "Portuguese"); 
  	
	int num; 
  	
  	printf("Digite um número inteiro positivo N: ");
    scanf("%d", &num);
    
  	if (num < 0) {
    printf("Por favor, digite um número inteiro positivo!\n");
    } else {
    for (int i = num; i >= 0; i--) {
    printf("%d ", i);
        }
    printf("\n");
    }
 	return 0; 
} 

