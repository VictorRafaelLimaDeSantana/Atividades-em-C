/* Questão 3 Procedimentos e Funções: Faça uma função que receba 3 números inteiros como parâmetro,
representando horas, minutos e segundos, e os converta em segundos. */
 
#include <stdio.h> 
#include <locale.h> 
 
int tempo(int hora, int minuto, int segundo){
	return (hora * 3600) + (minuto * 60) + segundo; 
} 
int main(){ 
     
setlocale(LC_ALL,"Portuguese"); 
 
    int hora, minuto, segundo, totalSegundos; 
     
    printf("Digite a hora, minuto e segundos do momento: \n");
	scanf("%d %d %d", &hora, &minuto, &segundo); 
     
    totalSegundos= tempo(hora, minuto, segundo);
	printf("%d", totalSegundos);
	return 0; 
} 

