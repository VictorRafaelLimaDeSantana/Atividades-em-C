/* Questão 3 Estrutura Condicional: Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
 	setlocale(LC_ALL, "Portuguese"); 
 	 
 	int num; 
 	 
 	printf("Digite um número: \n");
	scanf("%d", &num); 
 	 
 	if(num%2 == 0){
 	printf("Esse número é par: %d", num); 
 	}else if(num%2 ==1){
	printf("Esse número é impar: %d", num); 
 	} 
 	return 0; 
} 
