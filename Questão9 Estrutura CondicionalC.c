/*Questão 9 Estrutura Condicional: Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente
a este número. Isto e, domingo se 1, segunda-feira se 2, e assim por diante. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main() { 
 	setlocale(LC_ALL, "Portuguese");
	int num; 
     
    printf("Digite um número de 1 a 7: \n");
	scanf("%d", &num); 
     
    switch(num){
	case 1: 
    printf("Esse número corresponde ao Domingo.");
	break; 
     
    case 2:
	printf("Esse número corresponde a Segunda-feira. ");
	break; 
     
    case 3:
	printf("Esse número corresponde a Terça-feira. ");
	break; 
 
	case 4: 
	printf("Esse número corresponde a Quarta-feira."); 
	break; 
     
    case 5:
	printf("Esse número corresponde a Quinta-feira. ");
	break; 
     
    case 6:
	printf("Esse número corresponde a Sexta-feira. ");
	break; 
     
    case 7: 
    printf("Esse número corresponde ao Sábado. ");
	break; 
    } 
    return 0; 
} 
