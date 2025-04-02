/* Questão 8: Peça ao usuário para digitar três valores inteiros e imprima a soma deles.*/
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
 	setlocale(LC_ALL, "Portuguese"); 
 	 
 	int num, soma=0; 
 	 
 	for(int i = 1; i <= 3; i++){
	 printf("Digite um número inteiro: \n");
	 scanf("%d", &num); 
 	 	 
 	 	soma= soma+num; 
 	 	 
 	} 
 	printf("Soma dos números digitados: %d", soma); 
 	return 0; 
}  
