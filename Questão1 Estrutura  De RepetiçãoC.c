/*Questão 1 Estrutura de Repetição: Faça um programa que determine o mostre os cinco primeiros múltiplos de 3,
considerando números maiores que 0. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num; 
     
    for(num=1; num<=15; num++){
	if(num%3 == 0){
		
	printf("%d\n", num); 
 	} 
 	} 
 	return 0; 
} 

