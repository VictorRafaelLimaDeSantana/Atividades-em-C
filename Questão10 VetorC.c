/*Questão 10 Vetores: Escreva um programa que leia números inteiros no intervalo [0,50] e os armazene em um vetor com 10 posições.
Preencha um segundo vetor apenas com os números ?mpares do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int vetor1[10], vetor2[10], j = 0;
	
	printf("Digite 10 números inteiros no intervalo [0, 50]:\n"); for (int i = 0; i < 10; i++) {
	do {
	scanf("%d", &vetor1[i]);
} while (vetor1[i] < 0 || vetor1[i] > 50);
}
	for (int i = 0; i < 10; i++) {
	if (vetor1[i] % 2 != 0) {
	vetor2[j] = vetor1[i]; j++;
}
}
	printf("\nVetor 1 (números lidos):\n");
	for (int i = 0; i < 10; i++) {
	printf("%d ", vetor1[i]);
	if ((i + 1) % 2 == 0) {
	printf("\n");
}
}
	if (10 % 2 != 0) {
	printf("\n");
}
	printf("\nVetor 2 (números ímpares do vetor 1):\n");
	for (int i = 0; i < j; i++) {
	printf("%d ", vetor2[i]);
	if ((i + 1) % 2 == 0) {
	printf("\n");
} }
	if (j % 2 != 0) {
	printf("\n");
}
	return 0;
}

