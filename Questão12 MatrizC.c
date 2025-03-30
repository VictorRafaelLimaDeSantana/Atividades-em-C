/*Questão 12 Matriz: Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de bingo.
Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de modo a não ter números repetidos dentro das cartelas.
O programa deve exibir na tela a matriz. */
 
#include <stdio.h>  
#include <stdlib.h>  
#include <time.h>  
  
#define LINHAS 5  
#define COLUNAS 5  
#define MAX_NUMERO 99  
  
void gerarCartela(int cartela[LINHAS][COLUNAS]) {
	
	int numerosGerados[MAX_NUMERO + 1] = {0};
	int linha, coluna;  
  
    for (linha = 0; linha < LINHAS; linha++) {
	for (coluna = 0; coluna < COLUNAS; coluna++) {
	int numeroGerado;
	do {  
        numeroGerado = rand() % (MAX_NUMERO + 1);   
    } while (numerosGerados[numeroGerado] == 1);   
  
    cartela[linha][coluna] = numeroGerado;
	numerosGerados[numeroGerado] = 1;   
        }  
    }  
}
void imprimirCartela(int cartela[LINHAS][COLUNAS]) {

	int linha, coluna;
	
    for (linha = 0; linha < LINHAS; linha++) {
	for (coluna = 0; coluna < COLUNAS; coluna++) {
	printf("%2d ", cartela[linha][coluna]);  
        }
	printf("\n");  
    }  
}  

int main() {
	
	srand(time(NULL));   
    int cartela[LINHAS][COLUNAS];  
  
    gerarCartela(cartela);
	imprimirCartela(cartela);  
  
    return 0;  
}  
