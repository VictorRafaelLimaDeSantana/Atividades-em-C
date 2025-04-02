/* Questão 7: Faça um programa que leia um número real e o imprima.*/
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
 	setlocale(LC_ALL, "Portuguese"); 
 	 
 	float num; 
 	 
 	printf("Digite um número real: \n");
	 scanf("%f", &num); 
 	 
 	if(num >= 0){
	 printf("Número real digitado: %f", num); 
 	} 
 	return 0; 
}  
