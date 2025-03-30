/*Questão 17 Matriz: Faça um programa que leia duas matrizes A e B de tamanho 3 x 3 e calcule C = A * B. */
 
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
	
	printf("Digite os valores da matriz B:\n");
	lerMatriz(matrizB);
	multiplicarMatrizes(matrizA, matrizB, matrizC);  
  
    printf("\nMatriz A:\n");  
    imprimirMatriz(matrizA);
	
	printf("\nMatriz B:\n");
	imprimirMatriz(matrizB);
	
	printf("\nMatriz C (A * B):\n");
	imprimirMatriz(matrizC);  
  
    return 0;  
}  
