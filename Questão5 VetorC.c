/*Questão 5 Vetores: Faça um programa que receba do usuário um vetor com 10 posições.
Em seguida deverá ser impresso o maior e o menor elemento do vetor e a posição em que ele se encontra. */

#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[10];
	int maior, menor, pos_maior, pos_menor;
	
	printf("Digite 10 números inteiros:\n");

	for (int i = 0; i < 10; i++) { scanf("%d", &vetor[i]);
	}
	maior = menor = vetor[0]; pos_maior = pos_menor = 0;
	for (int i = 1; i < 10; i++) { if (vetor[i] > maior) { maior = vetor[i]; pos_maior = i;
	}
	if (vetor[i] < menor) {
		menor = vetor[i]; pos_menor = i;
	}
	}
	printf("Maior valor: %d na posição %d\n", maior, pos_maior); printf("Menor valor: %d na posição %d\n", menor, pos_menor);
	return 0;
}
