/*Questão 6 Estrutura de Repetição: Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais impares. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){
	setlocale(LC_ALL, "Portuguese"); 
  	
	int num; 
  	 
  	printf("Digite um número inteiro: \n");
	scanf("%d", &num); 
  	 
    for(num = num; num >= 0; num--){
	if(num%2==1){
	printf("%d\n", num); 
	} 
	} 
 	return 0; 
}  

