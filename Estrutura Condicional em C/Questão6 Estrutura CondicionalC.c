/*Questão 6 Estrutura Condicional: Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela,
a soma de todos os seus algarismos. Por exemplo, ao número 251 corresponder ao valor 8 (2 + 5 + 1).
Se o número lido não for maior do que zero, o programa terminar a com a mensagem "Número inválido". */
 
#include <stdio.h> 
#include <locale.h> 
 
int main() { 
 	setlocale(LC_ALL, "Portuguese"); 
    int numero, soma = 0, digito; 
 
    printf("Digite um número inteiro maior que zero: ");
	scanf("%d", &numero); 
 
    if (numero <= 0) { 
        printf("Número inválido\n"); 
    } else {
        while (numero > 0){
		digito = numero % 10;
		soma += digito;
		numero /= 10; 
    }
    printf("A soma dos algarismos é: %d\n", soma); 
    } 
    return 0;
}
