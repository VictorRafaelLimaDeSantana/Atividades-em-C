/* Questão 1 Estrutura condicional: Faça um programa que receba dois números e mostre qual deles é o maior. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
 	setlocale(LC_ALL, "Portuguese"); 
 	 
 	int num, num2; 
 	 
 	printf("Digite dois números um de cada vez: \n");
	scanf("%d", &num);
	scanf("%d", &num2); 
 	 
 	if(num > num2){
	printf("O primeiro número é maior: %d", num); 
 	}else if(num2 > num){
	printf("O segundo número é maior: %d", num2); 
 	} 
 	return 0; 
}
