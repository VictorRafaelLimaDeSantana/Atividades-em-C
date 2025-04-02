/*Questão 5 Estrutura de Repetição: Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
    setlocale(LC_ALL, "Portuguese");
	
	int num, menor_n, maior_n; 
  	 
    for(int i = 1; i <= 10; i++){ 
     
    	printf("Digite um número: ");
		scanf("%d", &num);
		if(i == 1){ 
 	 	 	maior_n = num;
			menor_n = num;
			}else{ 
 	 	 	if(num > maior_n){ 
 	 	 	 	maior_n = num; 
 	 	 	} 
 	 	 	if(num < menor_n){ 
 	 	 	 	menor_n = num; 
 	 	 	} 
 	 	 	} 
 	 	} 
 	 	printf("\nMaior número: %d", maior_n);
		printf("\nMenor número: %d", menor_n);
		return 0; 
} 

