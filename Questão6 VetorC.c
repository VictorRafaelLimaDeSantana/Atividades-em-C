/*Questão 6 Vetores: Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa.*/

#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese"); int vetor[6];
	
	printf("Digite 6 números inteiros:\n");
	for (int i = 0; i < 6; i++) {
	scanf("%d", &vetor[i]);
}
	printf("Valores na ordem inversa:\n"); for (int i = 5; i >= 0; i--) {
	printf("%d ", vetor[i]);
}
printf("\n");
return 0;
}

