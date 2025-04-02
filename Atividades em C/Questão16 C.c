/* Questão 16: Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h (quilômetros por hora).
A formula de conversão é: ?? = ?? ? 3.6, sendo K a velocidade em km/h e M em m/s. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
 	setlocale(LC_ALL, "Portuguese"); 
 	 
 	float km, metros; 
 	 
 	printf("Digite uma velocidade em metros/s: \n");
	scanf("%f", &metros); 
 	 
 	km= metros * 3.6; 
 	 	 
 	printf("Esse é a velocidade em km: %f", km); 
 	 
 	return 0; 
} 
