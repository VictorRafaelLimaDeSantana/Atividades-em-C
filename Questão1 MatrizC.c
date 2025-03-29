/*Questão 1 Matriz: Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
    setlocale(LC_ALL, "Portuguese"); 
     
    int matriz[4][4];
	int a,b; 
     
    printf("Digite números inteiros: \n"); 
     
    for(a= 0; a<4; a++){
	for(b= 0; b<4; b++){
	scanf("%d", &matriz[a][b]); 
    } 
    } 
    for(a=0; a<4; a++){
	for(b=0; b<4; b++){
	if(matriz[a][b] > 10){ 
    printf("\nNúmero maior que 10 digitado: %d ", matriz[a][b]); 
    }
	} 
    } 
    return 0; 
}
