/*Questão 2 Registros: Construa uma estrutura aluno com nome, número de matrícula e curso.
Leia do usuário a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.*/

#include <stdio.h>
#include <locale.h>

struct aluno {
    int matricula;
    char nome[100];
    char curso[100];
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    struct aluno a[5];
    
    for (int i = 0; i < 5; i++) {
        printf("\nDigite o nome do %d° aluno: ", i + 1);
        getchar();
        scanf("%99[^\n]", a[i].nome);
        
        printf("\nDigite a matrícula do %d° aluno: ", i + 1);
        scanf("%d", &a[i].matricula);
        
        printf("\nDigite o curso do %d° aluno: ", i + 1);
        getchar();
        scanf("%99[^\n]", a[i].curso);
    }

    printf("\nAlunos cadastrados e suas informações:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nNome: %s\nMatrícula: %d\nCurso: %s\n", a[i].nome, a[i].matricula, a[i].curso);
    }

    return 0;
}

