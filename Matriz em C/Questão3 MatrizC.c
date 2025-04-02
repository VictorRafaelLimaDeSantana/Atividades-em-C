/*Questão 3 Matriz: Faça um programa que preenche uma matriz com o produto do valor da linha e da coluna de cada elemento.
Em seguida, imprima na tela a matriz. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
    setlocale(LC_ALL, "Portuguese"); 
     
    int matriz[3][3];
	int a, b; 
     
    printf("Digite números inteiros para umas matriz 3x3: \n"); 
     
    for(a = 0; a < 3; a++){
	for(b = 0; b < 3; b++){
	scanf("%d", &matriz[a][b]); 
        } 
    } 
    printf("\nMatriz: \n");
	for(a = 0; a < 3; a++){
	for(b = 0; b < 3; b++){
	printf("%d ", matriz[a][b]); 
        }
		printf("\n"); 
    } 
    return 0; 
} 

