/*Questão 5 Estrutura Condicional: Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal,
utilizando as seguintes formulas (onde h corresponde à altura):
Homens: (72.7 ? ?) - 58 
Mulheres: (62.1 ? ?) - 44.7 */

#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
 	setlocale(LC_ALL, "Portuguese"); 
 	 
 	float altura, peso, sexo, F, M; 
 	 
 	printf("Digite a sua altura: \n");
	scanf("%f", &altura); 
 	 
 	printf("Digite o seu sexo:(F para feminino e M para masculino.) \n");
	scanf("%f", &sexo); 
 	 
 	if(sexo == F){
	peso= (62.1 * altura) - 44.7; 
 	printf("Esse é seu peso ideal: %f", peso); 
 	}else if(sexo == M){
	peso= (72.7 * altura) - 58; 
 	printf("Esse é seu peso ideal: %f", peso); 
 	} 
 	return 0; 
}
