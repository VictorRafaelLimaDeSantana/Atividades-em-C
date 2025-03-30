/*Questão 16 Matriz: Faça um programa que leia duas matrizes 2 x 2 com valores reais. Ofereça ao usuário um menu de opções: 
 
a)	Somar as duas matrizes 
b)	Subtrair a primeira matriz da segunda 
c)	Adicionar uma constante as duas matrizes 
d)	Imprimir as matrizes 
 
Nas duas primeiras opções uma terceira matriz 3 x 3 deve ser criada.
Na terceira opção o valor da constante deve ser lido e o resultado da adição da constante deve ser armazenado na própria matriz.*/ 
 
#include <stdio.h>
#include <locale.h>
#define TAM 2

void lerMatriz(float matriz[TAM][TAM]) {
    int linha, coluna;
    for (linha = 0; linha < TAM; linha++) {
        for (coluna = 0; coluna < TAM; coluna++) {
            printf("Elemento [%d][%d]: ", linha + 1, coluna + 1);
            scanf("%f", &matriz[linha][coluna]);
        }
    }
}

void imprimirMatriz(float matriz[TAM][TAM]) {
    int linha, coluna;
    for (linha = 0; linha < TAM; linha++) {
        for (coluna = 0; coluna < TAM; coluna++) {
            printf("%.2f ", matriz[linha][coluna]);
        }
        printf("\n");
    }
}

void somarMatrizes(float matriz1[TAM][TAM], float matriz2[TAM][TAM], float resultado[3][3]) {
    int linha, coluna;
    printf("\nResultado da soma:\n");
    for (linha = 0; linha < TAM; linha++) {
        for (coluna = 0; coluna < TAM; coluna++) {
            resultado[linha][coluna] = matriz1[linha][coluna] + matriz2[linha][coluna];
            printf("%.2f ", resultado[linha][coluna]);
        }
        printf("\n");
    }
}

void subtrairMatrizes(float matriz1[TAM][TAM], float matriz2[TAM][TAM], float resultado[3][3]) {
    int linha, coluna;
    printf("\nResultado da subtração:\n");
    for (linha = 0; linha < TAM; linha++) {
        for (coluna = 0; coluna < TAM; coluna++) {
            resultado[linha][coluna] = matriz2[linha][coluna] - matriz1[linha][coluna];
            printf("%.2f ", resultado[linha][coluna]);
        }
        printf("\n");
    }
}

void adicionarConstante(float matriz[TAM][TAM]) {
    float constante;
    printf("Digite a constante: ");
    scanf("%f", &constante);
    int linha, coluna;
    for (linha = 0; linha < TAM; linha++) {
        for (coluna = 0; coluna < TAM; coluna++) {
            matriz[linha][coluna] += constante;
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float matriz1[TAM][TAM], matriz2[TAM][TAM];
    float resultado[3][3];  // Para armazenar as matrizes resultado das operações de soma e subtração
    int opcao;

    printf("Digite os valores da primeira matriz:\n");
    lerMatriz(matriz1);

    printf("Digite os valores da segunda matriz:\n");
    lerMatriz(matriz2);

    do {
        printf("\nMenu de opções:\n");
        printf("1. Somar as duas matrizes\n");
        printf("2. Subtrair a primeira matriz da segunda\n");
        printf("3. Adicionar uma constante às duas matrizes\n");
        printf("4. Imprimir as matrizes\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                somarMatrizes(matriz1, matriz2, resultado);
                break;

            case 2:
                subtrairMatrizes(matriz1, matriz2, resultado);
                break;

            case 3:
                adicionarConstante(matriz1);
                adicionarConstante(matriz2);
                break;

            case 4:
                printf("\nMatriz 1:\n");
                imprimirMatriz(matriz1);
                printf("\nMatriz 2:\n");
                imprimirMatriz(matriz2);
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}
