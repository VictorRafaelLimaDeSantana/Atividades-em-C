/*Questão 14 Matriz: Faça um programa que permita ao usuário entrar com uma matriz de 3 x 3 números inteiros.
Em seguida, gere um vetor pela soma dos números de cada coluna da matriz e mostrar na tela esse vetor. Por exemplo, a matriz: 

5 -8 10 
1 2 15 
25 10 7 

Vai gerar um vetor, onde cada posic¸ao˜ e a soma das colunas da matriz. A primeira posição será 5 + 1 + 25, e assim por diante: 
31 4 3 */
#include <stdio.h>  
  
int main() {
	int matriz[3][3];
	int vetor[3];
	int linha, coluna;
	
	printf("Digite os valores da matriz 3x3:\n");
	for (linha = 0; linha < 3; linha++) {
	for (coluna = 0; coluna < 3; coluna++) {
	printf("Elemento [%d][%d]: ", linha + 1, coluna + 1);
	scanf("%d", &matriz[linha][coluna]);  
        }  
    }  
  
    for (coluna = 0; coluna < 3; coluna++) {
	int soma = 0;  
    for (linha = 0; linha < 3; linha++) {
	soma += matriz[linha][coluna];  
        }  
    vetor[coluna] = soma;  
    }  
    
    printf("\nMatriz 3x3:\n");
	for (linha = 0; linha < 3; linha++) {
	for (coluna = 0; coluna < 3; coluna++) {
	printf("%4d ", matriz[linha][coluna]);  
        }
		printf("\n");  
    }  
     
    printf("\nVetor pela soma dos números de cada coluna:\n");
	printf("[");  
	
    for (coluna = 0; coluna < 3; coluna++) {
	printf("%d", vetor[coluna]);
	
	if (coluna < 2) printf(", ");  
    }  
    printf("]\n");  
  
    return 0;  
}   
