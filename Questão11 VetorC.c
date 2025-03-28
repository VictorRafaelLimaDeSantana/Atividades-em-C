/*Questão 11 Vetores: Faça um programa que receba do usuário dois vetores, A e B, com 10 números inteiros cada.
Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados do vetor C.*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int A[10], B[10], C[10];
	
	printf("Digite 10 números inteiros para o vetor A:\n");
	for (int i = 0; i < 10; i++) {
	scanf("%d", &A[i]);
}
	printf("Digite 10 números inteiros para o vetor B:\n");
	for (int i = 0; i < 10; i++) {
	scanf("%d", &B[i]);
}
	for (int i = 0; i < 10; i++) {
	C[i] = A[i] - B[i];
}
	printf("Vetor C (A - B):\n");
	for (int i = 0; i < 10; i++) {
	printf("%d ", C[i]);
}
printf("\n");
return 0;
}

