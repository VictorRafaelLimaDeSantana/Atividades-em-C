/* Questão 8 Procedimentos e Funções: Faça uma função que receba uma matriz de 3 x 3 elementos.
Calcule a soma dos elementos que estão acima da diagonal principal. */
 
#include <stdio.h> 
#include <locale.h> 
 
int resultado(int matriz[3][3]){
	int soma = 0;
	
	for(int a = 0; a < 3; a++){
	for(int b = 0; b < 3; b++){
	if(a < b){ 
    soma = soma + matriz[a][b]; 
            } 
        } 
 
    } 
    return soma; 
} 
void leituraMatriz(){ 
    int matriz[3][3], a, b, resultadoSoma; 
     
    printf("Digite números para a matriz 3x3: \n");
	for(int a = 0; a < 3; a++){
	for(int b = 0; b < 3; b++){
	scanf("%d", &matriz[a][b]); 
    } 
} 
    resultadoSoma = resultado(matriz); 
     
    printf("Esse é o resultado da soma dos números acima da diagonal principal: %d", resultadoSoma); 
} 
    int main(){ 
    setlocale(LC_ALL, "Portuguese"); 
    
    leituraMatriz();
	return 0; 
} 

