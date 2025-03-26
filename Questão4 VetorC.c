/*Questão 4 Vetores: Faça um programa que leia um vetor de 8 posições e, em seguida,
leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor.
Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int vetor[8];
	int X, Y, soma;
	
	printf("Digite 8 números inteiros:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }
    
    printf("Digite dois índices (X e Y) para calcular a soma: ");
    scanf("%d", &X);
    scanf("%d", &Y);
    
    if (X >= 0 && X < 8 && Y >= 0 && Y < 8) {
        soma = vetor[X] + vetor[Y];
        printf("A soma dos valores nas posições %d e %d é: %d\n", X, Y, soma);
    } else {
        printf("Índices inválidos. Os índices devem estar entre 0 e 7.\n");
    }
    return 0;
}
