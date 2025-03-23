/* Questão 9: Leia um número real e imprima o resultado do quadrado desse número. */ 
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
 	setlocale(LC_ALL, "Portuguese"); 
 	 
 	int num, quadrado; 
 	 
 	 	printf("Digite um número inteiro: \n");
		scanf("%d", &num); 
 	 	 
 	quadrado = num * num; 
 	 	 
 	printf("Esse é o valor ao quadrado: %d", quadrado); 
 	 
 	return 0; 
}
