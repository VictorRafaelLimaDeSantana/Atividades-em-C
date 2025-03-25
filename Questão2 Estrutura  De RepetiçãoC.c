/*Questão 2 Estrutura de Repetição: Faça um programa utilizando o comando while que mostra uma contagem regressiva na tela,
iniciando em 10 e terminando em 0. Mostrar uma mensagem "FIM! "após a contagem. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){
	setlocale(LC_ALL, "Portuguese");
	int num; 
     
    while(num>=0){ 
 	for(num=10; num>=0; num--){
	 printf("%d\n", num); 
	} 
	} 
 	printf("FIM!"); 
 
 	return 0; 
} 

