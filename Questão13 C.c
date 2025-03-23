/* Questão 13: Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius.
A formula de conversão é: ?? = ?? - 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
 	setlocale(LC_ALL, "Portuguese"); 
 	 
 	float celsius, kelvin; 
 	 
 	printf("Digite uma temperatura em Kelvin: \n");
	scanf("%f", &kelvin); 
 	 
 	celsius = kelvin - 273.15; 
 	 	 
 	printf("Esse é a temperatura em Celsius: %f", celsius); 
 	 
 	return 0; 
}
