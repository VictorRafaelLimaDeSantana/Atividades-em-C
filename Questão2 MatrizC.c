/*Questão 2 Matriz: Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.*/ 
 
#include <stdio.h> 
#include <locale.h>

int main(){ 
    setlocale(LC_ALL, "Portuguese");
    
    int matriz[5][5];
    int a, b; 
    
    for(a = 0; a < 5; a++){
        for(b = 0; b < 5; b++) {
            if(a == b) {
                matriz[a][b] = 1;
            } else { 
                matriz[a][b] = 0;
            }
        } 
    } 
    
    printf("Matriz: \n");
    for(a = 0; a < 5; a++){
        for(b = 0; b < 5; b++){
            printf("%d ", matriz[a][b]);
        }
        printf("\n"); 
    } 
    return 0; 
}
