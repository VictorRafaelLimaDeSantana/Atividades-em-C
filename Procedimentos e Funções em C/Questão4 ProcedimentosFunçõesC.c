/* Questão 4 Procedimentos e Funções: Faça uma função que receba uma temperatura em graus Celsius e retorne-a convertida em graus Fahrenheit.
A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius. */
 
#include <stdio.h> 
#include <locale.h> 
 
float temperatura(float celsius, float fahrenheit){
	return fahrenheit = celsius * (9.0/5.0) + 32; 
} 
int main(){ 
    setlocale(LC_ALL,"Portuguese");
	float celsius, fahrenheit, temperaturaF; 
 
    printf("Digite a temperatura em Celsius que será convertida para Fahrenheit: \n");
	scanf("%f", &celsius); 
     
    temperaturaF = temperatura(celsius, fahrenheit);
	printf("%f", temperaturaF);
	return 0; 
} 

