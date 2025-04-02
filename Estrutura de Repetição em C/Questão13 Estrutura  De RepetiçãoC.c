/*Questão 13 Estrutura de Repetição: Faça um programa que leia um número positivo e imprima seus divisores. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
 	setlocale(LC_ALL, "Portuguese"); 
 	 
 	int num, i; 
 
    printf("Digite um número positivo: ");
	scanf("%d", &num); 
 
    if(num <= 0){
	printf("Por favor, digite um número positivo.\n");
	return 1; 
 	} 
    printf("Divisores de %d: ", num);
	for(i = 1; i <= num; i++){
	if(num % i == 0){
	printf("%d \n", i); 
        } 
    } 
    return 0; 
} 

