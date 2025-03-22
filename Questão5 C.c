/* Questão 5: Crie um programa em pseudocódigo Portugol que calcule a soma, subtração, multiplicação e divisão de dois números.
O programa deve solicitar ao usuário que insira dois valores e, em seguida, apresentar o resultado de cada uma dessas operações.
Utilize os seguintes valores de exemplo: 
 
Valor 1: 10 
Valor 2: 20
*/

#include <stdio.h> 
#include <locale.h> 
 
int main() { 
 
   setlocale(LC_ALL, "Portuguese"); 
    
   int num1, num2, soma, subt, mult, div; 
    
   printf("Digite o número 10: ");
   scanf("%d", &num1); 
    
   printf("Digite o número 20: ");
   scanf("%d", &num2); 
    
   soma = num1 + num2;
   subt = num1 - num2;
   mult = num1 * num2;
   div = num1 / num2; 
    
   printf("\nResultado da soma: %d", soma);
   printf("\nResultado da subtração: %d", subt);
   printf("\nResultado da multiplicação: %d", mult);
   printf("\nResultado da divisão: %d", div); 
return 0; 
}
