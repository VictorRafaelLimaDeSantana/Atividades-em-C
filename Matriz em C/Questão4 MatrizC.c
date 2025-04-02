/*Questão 4 Matriz: Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
    setlocale(LC_ALL, "Portuguese"); 
     
    int matriz[4][4]; 
    int a, b, maiorN= 0, linha= 0, coluna=0; 
     
    printf("Digite números inteiros para umas matriz 4x4: \n"); 
     
    for(a = 0; a < 4; a++){
	for(b = 0; b < 4; b++){
	scanf("%d", &matriz[a][b]); 
        } 
        } 
    printf("\nMatriz: \n");
	for(a = 0; a < 4; a++){
	for(b = 0; b < 4; b++){
	printf("%d ", matriz[a][b]); 
        }
		printf("\n"); 
    } 
    maiorN = matriz[0][0]; 
     
    for(a = 0; a < 4; a++){
	for(b = 0; b < 4; b++){
	if(matriz[a][b] > maiorN){
	maiorN = matriz[a][b];
	linha = a;
	coluna = b; 
            } 
        } 
    } 
    printf("\nEsse é o maior número digitado e a linha e coluna onde ele se encontra: %d, [%d] [%d]", maiorN, linha + 1, coluna + 1);
	return 0; 
} 

