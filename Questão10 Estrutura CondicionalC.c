/*Questão 10 Estrutura Condicional: Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas
(as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa então pede dois valores numéricos e realiza a operação,
mostrando o resultado e saindo. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main() { 
 	setlocale(LC_ALL, "Portuguese"); 
    int num, num1, num2, soma, sub, mult, div; 
     
    printf("Digite 1 para a operação de soma, 2 para subtração, 3 para multiplicação e 4 para divisão. \n");     scanf("%d", &num); 
     
    switch(num){
	case 1: 
    printf("Digite dois números: \n");
	scanf("%d", &num1);
	scanf("%d", &num2); 
 
	soma= num1 + num2;
	printf("\nEsse é o resultado da soma: %d", soma);
	break; 
 
	case 2: 
    printf("Digite dois números: \n");
	scanf("%d", &num1);
	scanf("%d", &num2); 
     
    sub= num1 - num2;
	printf("\nEsse é o resultado da subtração: %d", sub);
	break; 
     
    case 3: 
    printf("Digite dois números: \n");
	scanf("%d", &num1);
	scanf("%d", &num2); 
     
    mult= num1 * num2;
	printf("\nEsse é o resultado da multiplicação: %d", mult);
	break; 
     
    case 4: 
    printf("Digite dois números: \n");
	scanf("%d", &num1);
	scanf("%d", &num2); 
     
    div= num1 / num2;
	printf("\nEsse é o resultado da divisão: %d", div);
	break; 
    } 
    return 0; 
} 
