/*Questão 18 Matriz: Faça um programa que leia uma matriz A de tamanho 3 x 3 e calcule B = A2 */
 
#include <stdio.h>  
#include <locale.h>
#define TAM 3  
  
void lerMatriz(float matriz[TAM][TAM]) {
	int linha, coluna;
	
	for (linha = 0; linha < TAM; linha++) {
	for (coluna = 0; coluna < TAM; coluna++) {
	printf("Elemento [%d][%d]: ", linha + 1, coluna + 1);
	scanf("%f", &matriz[linha][coluna]);  
        }  
    }  
}  
  
void imprimirMatriz(float matriz[TAM][TAM]) {  
    int linha, coluna;
	
	for (linha = 0; linha < TAM; linha++) {
	for (coluna = 0; coluna < TAM; coluna++) {
	printf("%.2f ", matriz[linha][coluna]);  
        }
	printf("\n");  
    }  
}  
  
 
void 	multiplicarMatrizes(float 	matrizA[TAM][TAM], 	float 	matrizB[TAM][TAM], 	float matrizC[TAM][TAM]) {  
    int linha, coluna, k;
	for (linha = 0; linha < TAM; linha++) {
	for (coluna = 0; coluna < TAM; coluna++) {
	matrizC[linha][coluna] = 0;
	for (k = 0; k < TAM; k++) {
	matrizC[linha][coluna] += matrizA[linha][k] * matrizB[k][coluna];  
            }  
        }  
    }  
}  
  
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float matrizA[TAM][TAM], matrizB[TAM][TAM], matrizC[TAM][TAM];  
  
    printf("Digite os valores da matriz A:\n");
	lerMatriz(matrizA);  
  
    for (int linha = 0; linha < TAM; linha++) {
	for (int coluna = 0; coluna < TAM; coluna++) {
	matrizB[linha][coluna] = matrizA[linha][coluna];  
        }  
    }  
  
    multiplicarMatrizes(matrizA, matrizB, matrizC);  
  
    printf("\nMatriz A:\n");
	imprimirMatriz(matrizA);
	
	printf("\nMatriz A^2:\n");
	imprimirMatriz(matrizC);  
  
    return 0;  
}  
