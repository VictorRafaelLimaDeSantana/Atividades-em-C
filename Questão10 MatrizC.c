/*Questão 10 Matriz: Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
    setlocale(LC_ALL, "Portuguese");
	
	int matriz1[3][3];
	int a, b; 
     
    printf("Digite números inteiros para uma matriz 3x3: \n");
    
	for(a = 0; a < 3; a++){
	for(b = 0; b < 3; b++){
	scanf("%d", &matriz1[a][b]); 
        } 
    } 
    printf("\nEssa é a matriz transposta dos números digitados anteriormente: \n");
	
	for(b = 0; b < 3; b++){
	for(a = 0; a < 3; a++){
	printf("%d ", matriz1[a][b]); 
        }
	printf("\n"); 
    } 
    return 0; 
} 

