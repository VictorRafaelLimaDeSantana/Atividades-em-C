/*Questão 11 Estrutura de Repetição: Escreva um algoritmo que leia certa quantidade de números e
imprima o maior deles e quantas vezes o maior número foi lido. A quantidade de números a serem lidos deve ser fornecida pelo usuário. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
 	 
 	setlocale(LC_ALL, "Portuguese"); 
 	 
 	int n, i, num, maior, contador = 0; 
 
    printf("Digite a quantidade de números a serem lidos: ");
	scanf("%d", &n); 
	
    if (n <= 0) { 
        printf("Quantidade inválida.\n");
		return 1; 
    } 
    printf("Digite o número 1: ");
	scanf("%d", &maior);
	contador = 1;
	
    for (i = 1; i < n; i++) {
	printf("Digite o número %d: ", i + 1);
	scanf("%d", &num); 
         
        if (num > maior) {
		maior = num;
		contador = 1; 
        } else if (num == maior) {
		contador++; 
        } 
    } 
    printf("O maior número é %d e ele foi lido %d vezes.\n", maior, contador); 
 
    return 0; 
}  
