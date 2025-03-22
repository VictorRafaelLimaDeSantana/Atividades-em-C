/*Questão 1: Você foi contratado para criar um programa simples que deve determinar se um aluno foi aprovado ou reprovado em uma prova com
base em sua nota. A classificação de aprovação é que o aluno deve ter uma nota maior ou igual a 7.0. */

#include <stdio.h> 
#include <locale.h>

int main() { 
 	setlocale(LC_ALL, "Portuguese"); 
 	
	float nota; 
 	 
 	printf("Digite a nota do aluno:");
	 scanf("%f", &nota); 
 	 	 
 	if(nota>=7.0){
 		
	printf("Aprovado!"); 
	
 	}else if(nota<7.0){
 		
	 printf("Reprovado!"); 
	 
    } 
return 0; 
}
