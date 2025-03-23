/* Questão 6: Faça um programa que leia um número inteiro e o imprima. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
 	setlocale(LC_ALL, "Portuguese"); 
 	 
 	int num; 
 	 
 	printf("Digite um número inteiro: \n");  	scanf("%d", &num); 
 	 
 	printf("Número inteiro digitado: %d", num); 
 	 
 	return 0; 
}
