/* Questão 14: Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin.
A formula de conversão é: ?? = ?? + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
 	setlocale(LC_ALL, "Portuguese"); 
 	 
 	float celsius, kelvin; 
 	 
 	printf("Digite uma temperatura em Celsius: \n");
	scanf("%f", &kelvin); 
 	 
 	kelvin= celsius + 273.15; 
 	 	 
 	printf("Esse é a temperatura em Kelvin: %f", kelvin); 
 	 
 	return 0; 
} 
