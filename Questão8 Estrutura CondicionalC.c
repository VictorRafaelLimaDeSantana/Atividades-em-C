/*Questão 8 Estrutura Condicional: A nota final de um estudante e calculada a partir de três notas atribuídas entre o intervalo de 0 até 10,
respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final.
A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. 
De acordo com o resultado, mostre na tela se o aluno este reprovado (media entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi aprovado.
Faça todas as verificações necessárias. */
 
#include <stdio.h> 
#include <locale.h> 
 
int main() { 
 	setlocale(LC_ALL, "Portuguese"); 
    float trlb, avs, exf, mdP, mdP2; 
 
    printf("Digite a sua nota no Trabalho de Laboratório: ");
	scanf("%f", &trlb); 
	
	if (trlb < 0 || trlb > 10) {
        printf("Nota do Trabalho de Laboratório inválida. Deve estar entre 0 e 10.\n");
        return 1;
    }
    
	printf("\nDigite a sua nota na Avaliação Semestral: ");
	scanf("%f", &avs); 
	
 	if (avs < 0 || avs > 10) {
        printf("Nota da Avaliação Semestral inválida. Deve estar entre 0 e 10.\n");
        return 1;
	}
	
	printf("\nDigite a sua nota no Exame Final: ");
	scanf("%f", &exf);
	
	if (exf < 0 || exf > 10) {
        printf("Nota do Exame Final inválida. Deve estar entre 0 e 10.\n");
        return 1;
    }
    
    mdP = (trlb * 2) + (avs * 3) + (exf * 5); 
    mdP2 = mdP / 10;
    
    if (mdP2 >= 0 && mdP2 < 3.0) {
        printf("Aluno reprovado! Média: %.2f\n", mdP2);
    } else if (mdP2 >= 3.0 && mdP2 <= 4.9) {
        printf("Aluno de recuperação! Média: %.2f\n", mdP2);
    } else if (mdP2 >= 5.0 && mdP2 <= 10) {
        printf("Aluno aprovado! Média: %.2f\n", mdP2);
    }
    return 0;
}
