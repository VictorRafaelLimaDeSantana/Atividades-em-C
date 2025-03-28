/*Questão 7 Vetores: Faça um programa que preencha um vetor com 10 números reais,
calcule e mostre quantidade de números negativos e a soma dos números positivos desse vetor.*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	double vetor[10];
	int quantidade_negativos = 0;
	double soma_positivos = 0.0;
	
	printf("Digite 10 números reais:\n");
	for (int i = 0; i < 10; i++) {
	scanf("%lf", &vetor[i]);
}

	for (int i = 0; i < 10; i++) {
	if (vetor[i] < 0) {
	quantidade_negativos++;
	} else if (vetor[i] > 0) { soma_positivos += vetor[i];
}
}
	printf("Quantidade de números negativos: %d\n", quantidade_negativos);
	printf("Soma dos números positivos: %.2f\n", soma_positivos);
return 0;
}

