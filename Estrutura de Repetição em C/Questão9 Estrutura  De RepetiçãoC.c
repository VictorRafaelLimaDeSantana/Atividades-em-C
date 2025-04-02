/*Questão 9 Estrutura de Repetição: Faça um programa que leia um número inteiro positivo impar N e
imprima todos os números impares de 1 até N em ordem crescente. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){
	setlocale(LC_ALL, "Portuguese"); 
  	int num; 
  	 
  	printf("Digite um número inteiro positivo impar: \n");
	scanf("%d", &num); 
  	 
    for(int i = 1; i <= num; i++){ 
     	if(i%2 ==1){ 
     printf("%d\n", i);
	}
	}
	return 0; 
}

