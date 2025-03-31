/* Questão 6 Procedimentos e Funções: Faça uma função que receba dois números inteiros positivos por parâmetro
e retorne a soma dos N números inteiros existentes entre eles. */
 
#include <stdio.h> 
#include <locale.h> 
 
int somaInteiros(int a, int b){
	int soma = 0; 
 
    int menor = (a < b) ? a : b;
	int maior = (a > b) ? a : b; 
     
    if(menor == maior){
	return 0; 
    } 
    for(int i = menor + 1; i < maior; i++){
	soma += i; 
    } 
    return soma; 
} 
int main(){ 
    setlocale(LC_ALL, "Portuguese"); 
 
    int num1, num2; 
     
    printf("Digite o primeiro número inteiro positivo: ");
	scanf("%d", &num1); 
	
    printf("\nDigite o segundo número inteiro positivo: ");
	scanf("%d", &num2); 
     
    if(num1 >= 0 && num2 >= 0){ 
        int resultado = somaInteiros(num1, num2); 
        printf("\nA soma dos números entre %d e %d é: %d\n", num1, num2, resultado); 
    }else{ 
        printf("\nPor favor, insira apenas números inteiros positivos.\n"); 
    } 
    return 0; 
}  

