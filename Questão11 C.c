/* Questão 11: Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
A formula de conversão é: ?? = ?? ? (9.0 / 5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
 	setlocale(LC_ALL, "Portuguese"); 
 	 
 	float celsius, fahrenheit; 
 	 
 	printf("Digite uma temperatura em Celsius: \n");
	scanf("%f", &celsius); 
 	 	 
 	fahrenheit = celsius * (9.0 / 5.0) + 32.0; 
 	 	 
 	printf("Esse é a temperatura em Fahrenheit: %f", fahrenheit); 
 	 
 	return 0; 
} 
