/*Questão 15 Matriz: Faça programa que leia uma matriz 3 x 6 com valores reais. 
 
a)	Imprima a soma de todos os elementos das colunas ímpares. 
b)	Imprima a média aritmética dos elementos da segunda e quarta colunas. 
c)	Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2. 
d)	Imprima a matriz modificada. */
 
#include <stdio.h>  
#include <locale.h>  

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float matriz[3][6];
	int linha, coluna;
	float somaColunasImpares = 0;
	float somaColunas2e4[2] = {0, 0};   
    int contColunas2e4[2] = {0, 0};   
  
    printf("Digite os valores da matriz 3x6:\n");  
    for (linha = 0; linha < 3; linha++) {
	for (coluna = 0; coluna < 6; coluna++) {
	printf("Elemento [%d][%d]: ", linha + 1, coluna + 1);
	scanf("%f", &matriz[linha][coluna]);  
        }  
    }  
     
    for (linha = 0; linha < 3; linha++) {
	for (coluna = 0; coluna < 6; coluna++) {
	if (coluna % 2 != 0) {   
    somaColunasImpares += matriz[linha][coluna];  
            }  
    if (coluna == 1 || coluna == 3) {  
    somaColunas2e4[coluna == 1 ? 0 : 1] += matriz[linha][coluna];
	contColunas2e4[coluna == 1 ? 0 : 1]++;  
            }  
        }  
    }  
      
    printf("\nSoma das colunas ímpares: %.2f\n", somaColunasImpares);
	printf("Média aritmética da coluna 2: %.2f\n", somaColunas2e4[0] / contColunas2e4[0]);  
    printf("Média aritmética da coluna 4: %.2f\n", somaColunas2e4[1] / contColunas2e4[1]);  
  
    for (linha = 0; linha < 3; linha++) {  
        matriz[linha][5] = matriz[linha][0] + matriz[linha][1];  
    }  
    
    printf("\nMatriz modificada:\n");
	for (linha = 0; linha < 3; linha++) {
	for (coluna = 0; coluna < 6; coluna++) {  
    printf("%.2f ", matriz[linha][coluna]);  
        }
	printf("\n");  
    }  
  
    return 0;  
}  
