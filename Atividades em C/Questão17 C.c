/* Questão 17: A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso. 
Sendo que da quantia total:  O primeiro ganhador recebera 46%;  O segundo recebera 32%;  O terceiro recebera o restante.
Calcule e imprima a quantia ganha por cada um dos ganhadores. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
 	setlocale(LC_ALL, "Portuguese"); 
 	 
 	float premio_1, premio_2, premio_3; 
 	 
 	premio_1 = 78000000 * 0.46; 
 	 
 	 	printf("O primeiro ganhador recebera: %f", premio_1); 
 	 
 	premio_2 = 78000000 * 0.32; 
 	 
 	 	printf("\nO segundo ganhador recebera: %f", premio_2); 
 	 	 
 	premio_3 = 78000000 * 0.22; 
 	 	 	 
 	 	printf("\nO terceiro ganhador recebera: %f", premio_3); 
 	 	
 	return 0; 
} 
