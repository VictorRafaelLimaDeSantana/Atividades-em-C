/*Questão 1 Recursividade: Calcular o fatorial de um número usando recursividade. */

#include <stdio.h>
#include <locale.h>

int fatorial(int n) {
	if (n == 0) {
	return 1;
    }else{
	return n * fatorial(n - 1);
    } 
} 
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Digite um número inteiro para calcular o fatorial: ");
	scanf("%d", &numero);
	
	if (numero < 0) {
	printf("Erro: Não existe fatorial de número negativo.\n"); 
    }else{
	printf("O fatorial de %d é %d.\n", numero, fatorial(numero)); 
    }
    return 0; 
} 

