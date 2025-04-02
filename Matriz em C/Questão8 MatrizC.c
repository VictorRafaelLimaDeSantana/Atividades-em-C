/*Questão 8 Matriz: Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão abaixo da diagonal principal. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
    setlocale(LC_ALL, "Portuguese");
	
	int matriz1[3][3];
	int a, b, soma = 0; 
     
    printf("Digite números inteiros para uma matriz 3x3: \n");
	for(a = 0; a < 3; a++){
	for(b = 0; b < 3; b++){
	scanf("%d", &matriz1[a][b]); 
        }
		}
		printf("\n");
		for(a = 1; a < 3; a++){
		for(b = 0; b < 3; b++){
		if(a > b){ 
        soma += matriz1[a][b]; 
            } 
        } 
    } 
    printf("\nSoma: %d", soma);
	return 0; 
}  
