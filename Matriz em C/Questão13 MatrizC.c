/*Questão 13 Matriz: Leia uma matriz 10 x 3 com as notas de 10 alunos em 3 provas.
Em seguida, escreva o número de alunos cuja pior nota foi na prova 1, o número de alunos cuja pior nota foi na prova 2,
e o número de alunos cuja pior nota foi na prova 3. Em caso de empate das piores notas de um aluno,
o critério de desempate é arbitrário, mas o aluno deve ser contabilizado apenas uma vez. */
 
#include <stdio.h>  
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int notas[10][3];
    int aluno, prova;
    int piorNota1 = 0, piorNota2 = 0, piorNota3 = 0;

    printf("Digite as notas de 10 alunos em 3 provas:\n");

    for (aluno = 0; aluno < 10; aluno++) {
        for (prova = 0; prova < 3; prova++) {
            printf("Aluno %d, Prova %d: ", aluno + 1, prova + 1);
            scanf("%d", &notas[aluno][prova]);
        }
    }

    for (aluno = 0; aluno < 10; aluno++) {
        int menor = notas[aluno][0];
        int provaMenor = 1;
        int empate = 0;

        for (prova = 1; prova < 3; prova++) {
            if (notas[aluno][prova] < menor) {
                menor = notas[aluno][prova];
                provaMenor = prova + 1;
                empate = 0;
            } else if (notas[aluno][prova] == menor) {
                empate = 1;
            }
        }

        if (empate == 0) {
            if (provaMenor == 1) piorNota1++;
            else if (provaMenor == 2) piorNota2++;
            else piorNota3++;
        } else {
            if (provaMenor == 1) piorNota1++;
            else if (provaMenor == 2) piorNota2++;
            else piorNota3++;
        }
    }

    printf("\nNúmero de alunos com pior nota em cada prova:\n");
    printf("Prova 1: %d\n", piorNota1);
    printf("Prova 2: %d\n", piorNota2);
    printf("Prova 3: %d\n", piorNota3);

    return 0;
}
