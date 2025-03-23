/* Questão 10: Leia um número real e imprima a quinta parte deste número. */ 
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
 	setlocale(LC_ALL, "Portuguese"); 
 	 
 	float num, quinta_parte; 
 	 
 	printf("Digite um número real: \n");
	scanf("%f", &num); 
 	 	 
 	quinta_parte= num / 5; 
 	 	 
 	printf("Esse é a quinta parte dele: %f", quinta_parte); 
 	 
 	return 0; 
}
