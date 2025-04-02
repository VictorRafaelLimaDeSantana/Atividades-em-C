/*Questão 2 Vetores: Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int valor[6];
	int num;
	
	printf("Digite valores inteiros para o vetor de 6 slots: \n");
	for(num=0; num<6; num++){
	scanf("%d", &valor[num]);
}
	printf("Valores lidos: \n");
	for(num = 0; num<6; num++){
	printf("\n%d", valor[num]);
}
	return 0;
}

