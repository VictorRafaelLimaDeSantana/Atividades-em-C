/*Questão 3 Vetores: Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor,
armazenando o resultado em outro vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	double vetor1[10], vetor2[10];
	
	printf("Digite 10 números reais:\n");
	for (int i = 0; i < 10; i++) {
	scanf("%lf", &vetor1[i]);
}
	for (int i = 0; i < 10; i++) {
	vetor2[i] = vetor1[i] * vetor1[i];
}
	printf("\nVetor original (vetor1):\n");
	for (int i = 0; i < 10; i++) {
	printf("%.2f ", vetor1[i]);
}
	printf("\nVetor com os quadrados (vetor2):\n");
	for (int i = 0; i < 10; i++) {
	printf("%.2f ", vetor2[i]);
}
	return 0;
}

