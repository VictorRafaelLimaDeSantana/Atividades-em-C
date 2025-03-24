/*Questão 12 Estrutura Condicional: Dados três valores A B, C, verificar se eles podem ser valores dos lados de um triangulo e,
se forem, se é um triangulo escaleno, equilátero ou isósceles, considerando os seguintes conceitos: 
O comprimento de cada lado de um triangulo é menor do que a soma dos outros dois lados. 
Chama-se equilátero o triangulo que tem três lados iguais. 
Denominam-se isósceles o triangulo que tem o comprimento de dois lados iguais.
Recebe o nome de escaleno o triangulo que tem os três lados diferentes. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){
	setlocale(LC_ALL, "Portuguese"); 
     
    int a, b, c; 
     
    printf("Digite o valor do primeiro lado: ");
	scanf("%d", &a); 
 
    printf("Digite o valor do segundo lado: ");
	scanf("%d", &b); 
 
    printf("Digite o valor do terceiro lado: ");
	scanf("%d", &c); 
     
    if(a < b + c && b < a + c && c < a + b){
	if(a == b && b == c){
	printf("Esse é um triângulo equilátero! \n"); 
    }else if(a == b && b != c || a != b && b == c || a != b && c == a){
	printf("Esse é um triângulo isósceles! \n"); 
    }else{
	printf("Esse é um triângulo escaleno! \n");}
    }else{
	printf("Os valores escolhidos não formam um triângulo. \n"); 
    } 
    return 0; 
} 
