/*Definição das Estruturas e Funções Auxiliares(RPG)*/

#include <stdio.h> 
#include <time.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// Protótipos de funções
void exibirDescricaoPersonagem(int personagem);
int rolarDado();
void limparTela();

// Estrutura do personagem do jogador
struct programadores {
    char nome[100];
    char genero;
    int vida;
    int criacao;
    int paciencia;
    int inteligencia;
    int velocidade;
    int jogada_de_mestre;
    int nivel;
    int experiencia;
    int vida_maxima;
};

// Estrutura dos chefes/inimigos
struct chefes {
    char nome[100];
    int vida_chefe;
    int argumentacao;
    int deboche;
    int dificuldade;
    char desafio[100];
};

// Funções auxiliares
int rolarDado() {
    return (rand() % 20) + 1;
}

void limparTela() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
