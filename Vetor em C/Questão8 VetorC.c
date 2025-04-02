/*Questão 8 Vetores: Faça um programa que leia um vetor de 10 números. Leia um número x.
Conte os múltiplos de um número inteiro x num vetor e mostre-os na tela.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetor[10], x;

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite um número inteiro x: ");
    scanf("%d", &x);

    printf("Múltiplos de %d no vetor:\n", x);
    int cont = 0;

    for (int i = 0; i < 10; i++) {
        if (vetor[i] % x == 0) {
            printf("%d ", vetor[i]);
            cont++;
        }
    }
    if (cont == 0) {
        printf("Não há múltiplos de %d no vetor.\n", x);
    }
    return 0;
}
