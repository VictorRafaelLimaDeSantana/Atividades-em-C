/*Questão 12 Estrutura de Repetição: Faça um programa que receba dois números. Calcule e mostre: 
A soma dos números pares desse intervalo de números, incluindo os números digitados; 
A multiplicação dos números impares desse intervalo, incluindo os digitados; */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){ 
	setlocale(LC_ALL, "Portuguese"); 
 
	int num1, num2, i;
	int somaPares = 0;
	int produtoImpares = 1; 
 
    printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &num2); 
 
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (i = num1; i <= num2; i++) {
        if (i % 2 == 0) {
            somaPares += i;
        } else {
            produtoImpares *= i;
        }
    }

    printf("A soma dos números pares no intervalo é: %d\n", somaPares);
    printf("O produto dos números ímpares no intervalo é: %lld\n", produtoImpares);
     
    return 0; 
}  

