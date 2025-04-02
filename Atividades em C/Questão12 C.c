/* Questão 12: Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
A formula de conversão é: ?? = 5.0 ? (?? - 32.0) 9.0 , sendo C a temperatura em Celsius e F a temperatura em Fahrenheit. */ 
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
 	setlocale(LC_ALL, "Portuguese"); 
 	 
 	float celsius, fahrenheit; 
 	 
 	printf("Digite uma temperatura em Fahrenheit: \n");
	scanf("%f", &fahrenheit); 
 	 	 
 	celsius = 5.0 * (fahrenheit - 32) / 9.0; 
 	 	 
 	printf("Esse é a temperatura em Celsius: %f", celsius); 
 	 
 	return 0; 
} 
