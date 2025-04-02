/* Questão 2 Procedimentos e Funções: Faça uma função que receba a data atual (dia, mês e ano em inteiro)
e exiba-a na tela no formato textual por extenso. Exemplo: Data: 01/01/2000, Imprimir: 1 de janeiro de 2000. */
 
#include <stdio.h> 
#include <locale.h> 
 
void data(int dia, int mes, int ano){ switch(mes){ 
    
    case 1: 
    printf("%d de janeiro de %d", dia, ano);
	break; 
     
    case 2:
	printf("%d de fevereiro de %d", dia, ano);
	break; 
     
    case 3:
	printf("%d de março de %d", dia, ano);
	break; 
     
    case 4:
	printf("%d de abril de %d", dia, ano);
	break; 
     
    case 5:
	printf("%d de maio de %d", dia, ano);
	break; 
     
    case 6:
	printf("%d de junho de %d", dia, ano);
	break; 
     
    case 7:
	printf("%d de julho de %d", dia, ano);
	break; 
     
    case 8:
	printf("%d de agosto de %d", dia, ano);
	break; 
     
    case 9: 
    printf("%d de setembro de %d", dia, ano);
	break; 
     
    case 10:
	printf("%d de outubro de %d", dia, ano);
	break; 
     
    case 11:
	printf("%d de novembro de %d", dia, ano);
	break; 
     
    case 12:
	printf("%d de dezembro de %d", dia, ano);
	break; 
     
    default: 
    printf("Mês digitado incorretamente");
	break; 
    } 
 }    
int main(){ 
     
setlocale(LC_ALL,"Portuguese"); 
 
    int dia, mes, ano; 
     
    printf("Digite o dia, mês e ano que você está: \n");
	scanf("%d %d %d", &dia, &mes, &ano); 
     
    data(dia, mes, ano);
	return 0; 
} 

