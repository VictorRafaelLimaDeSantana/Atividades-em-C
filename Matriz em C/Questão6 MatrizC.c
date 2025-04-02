/*Questão 6 Matriz: Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição entre as matrizes anteriores. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
    setlocale(LC_ALL, "Portuguese"); 
    int matriz1[4][4], matriz2[4][4], matriz3[4][4], a, b; 
     
    printf("Digite números inteiros para a primeira matriz 4x4: \n");
	for(a = 0; a < 4 ; a++){
	for(b = 0; b < 4 ; b++){
	scanf("%d",&matriz1[a][b]); 
        } 
    } 
    printf("Digite números inteiros para a segunda matriz 4x4: \n");
	for(a = 0; a < 4; a++){
	for(b = 0; b < 4; b++){
	scanf("%d",&matriz2[a][b]); 
        }
		}
		printf("\n");
		for(a = 0; a < 4; a++){
		for(b = 0; b < 4; b++){ 
            if(matriz1[a][b] >= matriz2[a][b] ){ 
                matriz3[a][b] = matriz1[a][b]; 
            }else{ 
                matriz3[a][b] = matriz2[a][b]; 
            } 
        } 
    } 
    for(a = 0; a < 4; a++){
	for(b = 0; b < 4; b++){
	printf("\t%d",matriz3[a][b]); 
        } 
         printf("\n"); 
    } 
    return 0; 
} 
