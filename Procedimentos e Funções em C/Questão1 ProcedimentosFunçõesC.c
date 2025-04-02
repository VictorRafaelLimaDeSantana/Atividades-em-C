/* Questão 1 Procedimentos e Funções: Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro. */
 
#include <stdio.h> 
#include <locale.h> 
 
int dobro(int num); 
 
int main(){ 
 	setlocale(LC_ALL, "Portuguese");
	int resultado, num; 
 	 
 	printf("Digite um número inteiro: \n");
	scanf("%d", &num);
	
	resultado= dobro(num); 
 	printf("Esse é o dobro do número digitado: %d", resultado); 
} 
int dobro(int num){ 
 	 	return num *2; 
}

