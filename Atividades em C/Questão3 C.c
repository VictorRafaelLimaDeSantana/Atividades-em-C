/* Questão 3 : Desenvolva um algoritmo que calcule a média de 3 notas informadas pelo usuário.
Use o laço de repetição para solicitar as notas e calcular a soma.  
 */
 
 #include <stdio.h>
 #include <locale.h>
 
 int main() { 
 	setlocale(LC_ALL, "Portuguese");
	 
	 float nota, soma=0, media;
	 
    for(int i=1; i<=3; i++){ 
 	printf("Digite as notas do aluno: \n");
	 scanf("%f", &nota);
	 
	 soma=soma+nota; 
    } 
    media=soma/3;
	printf("Essa é a média do aluno: %f", media); 
return 0; 
} 

