/*Questão 7 Estrutura Condicional: Faça um algoritmo que calcule a média ponderada das notas de 3 provas.
A primeira e a segunda prova têm peso 1 e a terceira tem peso 2.
Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado.
A nota para aprovação deve ser igual ou superior a 60 pontos. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main() { 
 	setlocale(LC_ALL, "Portuguese"); 
float nota, nota2, nota3, media_ponderada, media_final; 
 
printf("Digite a primeira nota: "); 
    scanf("%f", &nota); 
 
    printf("\nDigite a segunda nota: ");
	scanf("%f", &nota2); 
     
    printf("\nDigite a terceira nota: ");
	scanf("%f", &nota3); 
     
    media_ponderada = (nota * 1 + nota2 * 1 + nota3 * 2) / 4; 
     
    if(media_ponderada >= 60){
	printf("Aprovado! %f", media_ponderada); 
    }else{ 
     	printf("Reprovado! %f", media_ponderada); 
    } 
    return 0; 
}
