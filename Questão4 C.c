/* Questão 4 : Elabore um algoritmo em Portugol Studio que utiliza o comando para para imprimir os números impares de 1 a 20 .
O algoritmo deve seguir a estrutura básica do comando para e deve exibir cada número em uma linha separada. 
*/
 
#include <stdio.h>
#include <locale.h>

int main() { 
 	setlocale(LC_ALL, "Portuguese"); 
     
    for(int i=1; i<=20; i++){
	if(i%2 ==1){
	printf("%d \n", i); 
        } 
    }
return 0; 
} 

