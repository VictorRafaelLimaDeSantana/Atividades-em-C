/*Questão 2 Estrutura Condicional: Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número.
Se o número for negativo, mostre uma mensagem dizendo que o número e inválido. */
 
#include <stdio.h> 
#include <locale.h>
#include <math.h>

int main(){ 
 	setlocale(LC_ALL, "Portuguese"); 
 	 
 	float num; 
 	
 	printf("Digite um número: \n");
	scanf("%f", &num); 
 	
 	if (num >= 0) {
        printf("A raiz quadrada de %.2f é %.2f \n", num, sqrt(num));
    } else {
        printf("Número inválido! Não é possível calcular a raiz quadrada de um número negativo.\n");
    }
 	return 0; 
} 
