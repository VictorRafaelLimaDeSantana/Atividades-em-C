/* Questão 13 Estrutura Condicional: Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar.
As condições para aposentadoria são: 
 Ter pelo menos 65 anos, 
Ou ter trabalhado pelo menos 30 anos, 
Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main(){
	setlocale(LC_ALL, "Portuguese"); 
     
    int idade, tempo_s; 
     
    printf("Digite a sua idade: ");
	scanf("%d", &idade); 
     
    if(idade >= 65){
	printf("Pode se aposentar.");
	return 0; 
    } 
     
    printf("\nDigite quantos anos você trabalhou: ");
	scanf("%d", &tempo_s); 
     
    if(tempo_s >= 30){
	printf("Pode se aposentar.");
	return 0; 
    } 
     
    if(idade >=60 && tempo_s >= 25){
	printf("Pode se aposentar."); 
    }else{
    printf("Não pode se aposentar."); 
    } 
    return 0; 
} 
