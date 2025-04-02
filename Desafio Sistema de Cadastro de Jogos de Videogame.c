/* Desafio Sistema de Cadastro de Jogos de Videogame: Criar um programa que simula um sistema de cadastro de jogos de videogame utilizando structs.
O programa deve permitir o cadastro de vários jogos, cada um com nome, gênero, ano de lançamento e preço.
Ao final, o sistema deve mostrar todos os jogos cadastrados e o preço médio dos jogos cadastrados. */

#include <stdio.h>
#include <locale.h>
#include <string.h>

struct cadastro {
    char Nome[100];
    char Genero[100];
    int AnoLancamento;
    float Preco;
};

void Informacoes(struct cadastro a) {
    printf("\nNome: %s\n", a.Nome);
    printf("Gênero: %s\n", a.Genero);
    printf("Ano de Lançamento: %d\n", a.AnoLancamento);
    printf("Preço: R$ %.2f\n", a.Preco);
}
int main() {
    setlocale(LC_ALL, "Portuguese");

    struct cadastro jogo[100];
    int quantjogos;
    float somapreco = 0;
    float mediapreco;

    printf("Digite a quantidade de jogos que deseja cadastrar: ");
    scanf("%d", &quantjogos);

    if (quantjogos <= 0) {
        if (quantjogos < 0) {
            printf("\nErro: Foi digitado um número negativo!\n");
        } else {
            printf("\nNenhum jogo cadastrado!\n");
        }
    }else if (quantjogos > 100) {
        printf("\nDigite um valor abaixo de 100 jogos!\n");
    }else{
        for (int x = 0; x < quantjogos; x++) {
            printf("\nDigite o nome do jogo: ");
            getchar();
            scanf("%99[^\n]", jogo[x].Nome);

            printf("Digite o gênero do jogo: ");
            getchar();
            scanf("%99[^\n]", jogo[x].Genero);

            printf("Digite o ano de lançamento do jogo: ");
            scanf("%d", &jogo[x].AnoLancamento);
            
            printf("Digite o preço do jogo: ");
            scanf("%f", &jogo[x].Preco);

            somapreco += jogo[x].Preco;
        }

        mediapreco = somapreco / quantjogos;
        
        printf("\nInformações dos jogos cadastrados: \n");
        for (int x = 0; x < quantjogos; x++) {
            Informacoes(jogo[x]);
        }
        printf("\nMédia final do preço de todos os jogos digitados: R$ %.2f\n", mediapreco);
    }
    return 0;
}

