/*Questão 14 Estrutura de Repetição: Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número,
com exceção dele próprio. Ex: a soma dos divisores do número 66 e 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.*/
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
 	setlocale(LC_ALL, "Portuguese"); 
 	 
 	int num;
	int soma = 0; 
 
    printf("Digite um número inteiro: ");
	scanf("%d", &num); 
 
    if (num <= 0) {
	printf("Número inválido. Por favor, digite um número positivo.");
	return 1; 
    } 
    printf("Divisores de %d: ", num); 
     
    for(int i = 1; i < num; i++){
	if (num % i == 0) {
	printf("%d ", i);
	soma += i; 
        } 
    } 
    printf("\nSoma dos divisores: %d\n", soma); 
 
    return 0; 
} 

