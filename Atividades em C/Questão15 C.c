/* Questão 15: Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s (metros por segundo).
A formula de conversão é: ?? = ?? 3.6 , sendo K a velocidade em km/h e M em m/s. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
 	setlocale(LC_ALL, "Portuguese"); 
 	 
 	float km, metros; 
 	 
 	printf("Digite uma velocidade em km/h: \n");
	scanf("%f", &km); 
 	 
 	metros= km / 3.6; 
 	 	 
 	printf("Esse é os metros percorridos: %f", metros); 
 	 
 	return 0; 
} 
