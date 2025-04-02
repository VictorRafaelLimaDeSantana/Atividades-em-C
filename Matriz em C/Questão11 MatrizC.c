/*Questão 11 Matriz: Gere matriz 4 x 4 com valores no intervalo [1, 20].
Escreva um programa que transforme a matriz gerada numa matriz triangular inferior, ou seja,
atribuindo zero a todos os elementos acima da diagonal principal. Imprima a matriz original e a matriz transformada. */
 
#include <stdio.h>  
#include <stdlib.h>  
#include <time.h>  
#include <locale.h>

int main() {
	int matriz[4][4];
	int linha, coluna;
	
	srand(time(NULL));   
  
    printf("Matriz Original:\n");
	
	for (linha = 0; linha < 4; linha++) {
	for (coluna = 0; coluna < 4; coluna++) {
	matriz[linha][coluna] = rand() % 20 + 1;
	printf("%4d ", matriz[linha][coluna]);  
        }
	printf("\n");  
    }  
  
    for (linha = 0; linha < 4; linha++) {
	for (coluna = 0; coluna < 4; coluna++) {
	if (coluna > linha) {
	matriz[linha][coluna] = 0;   
            }  
        }  
    }  
    printf("\nMatriz Triangular Inferior:\n");
	for (linha = 0; linha < 4; linha++) {
	for (coluna = 0; coluna < 4; coluna++) {
	printf("%4d ", matriz[linha][coluna]);  
        }
		printf("\n");  
    }  
    return 0;  
}  
