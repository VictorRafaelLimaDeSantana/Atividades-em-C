/*Questão 9 Matriz: Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na diagonal principal. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
    setlocale(LC_ALL, "Portuguese");
	
	int matriz1[3][3], soma= 0, a, b; 
     
    printf("Digite números inteiros para a primeira matriz 3x3: \n");
	for(a = 0; a < 3 ; a++){
	for(b = 0; b < 3 ; b++){
	scanf("%d",&matriz1[a][b]); 
        }
		}
		printf("\n");
		for(a = 0; a < 3; a++){
		for(b = 0; b < 3; b++){
		printf("\t%d",matriz1[a][b]); 
        } 
        printf("\n"); 
    } 
    soma= matriz1[0][0] + matriz1[1][1] + matriz1[2][2]; 
    printf("Essa é a soma dos números da diagonal principal: %d", soma);
	return 0; 
} 

