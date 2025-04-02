/* Código de RPG Completo */

#include <stdio.h> 
#include <time.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void exibirDescricaoPersonagem(int personagem);

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

struct chefes {
    char nome[100];
    int vida_chefe;
    int argumentacao;
    int deboche;
    int dificuldade;
    char desafio[100];
};

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

void criar(struct programadores *programador) {
    limparTela();
    printf("Bem-vindo ao Mundo de Vida de Programador: DAILY CHALLENGES! \n\n");
    
    printf("Digite o nome do personagem: ");
    scanf("%99s", programador->nome);
    while(getchar() != '\n');
    
    printf("Digite o gênero do personagem (M/F): ");
    scanf(" %c", &programador->genero);
    while(getchar() != '\n');
    
    limparTela();

    int pontos = 100;
    printf("Você tem %d pontos para distribuir entre as habilidades:\n", pontos);

    do {
        printf("\nVida (0 a %d): ", pontos);
        scanf("%d", &programador->vida);
        while(getchar() != '\n');
        
        if (programador->vida < 0 || programador->vida > pontos) {
            printf("Valor inválido! Você pode distribuir no máximo %d pontos.\n", pontos);
        }
    } while (programador->vida < 0 || programador->vida > pontos);
    pontos -= programador->vida;

    do {
        printf("\nPontos disponíveis: %d", pontos);
        printf("\nCriatividade (0 a %d): ", pontos);
        scanf("%d", &programador->criacao);
        while(getchar() != '\n');
        
        if (programador->criacao < 0 || programador->criacao > pontos) {
            printf("Valor inválido! Você tem apenas %d pontos disponíveis.\n", pontos);
        }
    } while (programador->criacao < 0 || programador->criacao > pontos);
    pontos -= programador->criacao;

    do {
        printf("\nPontos disponíveis: %d", pontos);
        printf("\nPaciência (0 a %d): ", pontos);
        scanf("%d", &programador->paciencia);
        while(getchar() != '\n');
        
        if (programador->paciencia < 0 || programador->paciencia > pontos) {
            printf("Valor inválido! Você tem apenas %d pontos disponíveis.\n", pontos);
        }
    } while (programador->paciencia < 0 || programador->paciencia > pontos);
    pontos -= programador->paciencia;

    do {
        printf("\nPontos disponíveis: %d", pontos);
        printf("\nInteligência (0 a %d): ", pontos);
        scanf("%d", &programador->inteligencia);
        while(getchar() != '\n');
        
        if (programador->inteligencia < 0 || programador->inteligencia > pontos) {
            printf("Valor inválido! Você tem apenas %d pontos disponíveis.\n", pontos);
        }
    } while (programador->inteligencia < 0 || programador->inteligencia > pontos);
    pontos -= programador->inteligencia;

    do {
        printf("\nPontos disponíveis: %d", pontos);
        printf("\nVelocidade (0 a %d): ", pontos);
        scanf("%d", &programador->velocidade);
        while(getchar() != '\n');
        
        if (programador->velocidade < 0 || programador->velocidade > pontos) {
            printf("Valor inválido! Você tem apenas %d pontos disponíveis.\n", pontos);
        }
    } while (programador->velocidade < 0 || programador->velocidade > pontos);
    pontos -= programador->velocidade;

    programador->nivel = 1;
    programador->experiencia = 0;
    programador->jogada_de_mestre = 10;
    programador->vida_maxima = programador->vida;
    
    printf("\nPersonagem criado com sucesso!\n");
    printf("\nPressione Enter para continuar...");
    getchar();
    limparTela();
}

void status(struct programadores programador) {
    printf("\nStatus de %s:\n\n", programador.nome);
    printf("Vida: %d\n", programador.vida);
    printf("Criatividade: %d\n", programador.criacao);
    printf("Paciência: %d\n", programador.paciencia);
    printf("Velocidade: %d\n", programador.velocidade);
    printf("Inteligência: %d\n", programador.inteligencia);
    printf("Nível: %d\n", programador.nivel);
    printf("Experiência: %d\n", programador.experiencia);
    printf("Jogada de Mestre: %d\n", programador.jogada_de_mestre);
}

void senai(struct programadores *programador, int alunos) {
    switch (alunos) {
        case 1:
            strcpy(programador->nome, "DARLAN");
            programador->vida = 45;
            programador->criacao = 25;
            programador->paciencia = 15;
            programador->velocidade = 5;
            programador->inteligencia = 10;
            break;
        case 2:
            strcpy(programador->nome, "VICTOR");
            programador->vida = 35;
            programador->criacao = 20;
            programador->paciencia = 10;
            programador->velocidade = 10;
            programador->inteligencia = 25;
            break;
        case 3:
            strcpy(programador->nome, "ERICK MATHEUS");
            programador->vida = 40;
            programador->criacao = 25;
            programador->paciencia = 5;
            programador->velocidade = 10;
            programador->inteligencia = 20;
            break;
        case 4:
            strcpy(programador->nome, "QUÉCILA");
            programador->vida = 35;
            programador->criacao = 25;
            programador->paciencia = 5;
            programador->velocidade = 20;
            programador->inteligencia = 15;
            break;
        default:
            printf("\nOpção Inválida! Por favor, escolha um número entre 1 e 4.\n");
            return;
    }
    
    programador->nivel = 1;
    programador->experiencia = 0;
    programador->jogada_de_mestre = 10;
    programador->vida_maxima = programador->vida;
}

void exibirDescricaoPersonagem(int personagem) {
    limparTela();
    printf("Descrição do Personagem:\n\n");
    switch(personagem) {
        case 1:
            printf("DARLAN - O Mestre das Conexões\n");
            printf("Vida alta e criatividade elevada, mas com pouca velocidade.\n");
            break;
        case 2:
            printf("VICTOR - O Analítico\n");
            printf("Inteligência excepcional, mas com pouca paciência.\n");
            break;
        case 3:
            printf("ERICK MATHEUS - O Inovador\n");
            printf("Bom equilíbrio entre criatividade e inteligência.\n");
            break;
        case 4:
            printf("QUÉCILA - A Ágil\n");
            printf("Extremamente rápida e criativa, mas com pouca paciência.\n");
            break;
    }
    printf("\nPressione Enter para continuar...");
    getchar();
    getchar();
    limparTela();
}

void batalha(struct programadores *programador, struct chefes *chefe) {
    printf("\nDesafio: %s – (%s)\n", chefe->nome, chefe->desafio);
    
    while (programador->vida > 0 && chefe->vida_chefe > 0) {
        limparTela();
        printf("\nVocê está enfrentando %s...\n", chefe->nome);
        printf("Vida do Programador: %d\n", programador->vida);
        printf("Vida do Chefe: %d\n", chefe->vida_chefe);
        
        printf("\nEscolha sua ação:\n");
        printf("1 – Atacar\n");
        printf("2 – Defender\n");
        printf("3 – Jogada de Mestre\n");
        printf("Escolha: ");
        
        int escolha;
        scanf("%d", &escolha);
        
        int dado = rolarDado();
        
        switch (escolha) {
            case 1:
                chefe->vida_chefe -= programador->inteligencia + dado;
                printf("\nVocê atacou e causou %d de dano!\n", programador->inteligencia + dado);
                break;
            case 2:
                programador->vida += 10;
                printf("\nVocê se defendeu e recuperou 10 pontos de vida!\n");
                break;
            case 3:
                if (programador->jogada_de_mestre > 0) {
                    chefe->vida_chefe -= (programador->inteligencia * 2);
                    printf("\nJogada de Mestre! Você causou %d de dano crítico!\n", programador->inteligencia * 2);
                    programador->jogada_de_mestre--;
                } else {
                    printf("\nVocê não tem mais Jogadas de Mestre disponíveis!\n");
                }
                break;
            default:
                printf("\nEscolha inválida! Você perdeu a vez.\n");
        }
        
        if (chefe->vida_chefe > 0) {
            programador->vida -= chefe->argumentacao + rolarDado();
            printf("\nO chefe atacou e causou dano! Vida atual: %d\n", programador->vida);
        }
        
        printf("\nPressione Enter para continuar...");
        getchar();
        getchar();
        limparTela();

        if (programador->vida <= 0) {
            printf("\nVocê foi derrotado pelo desafio %s! Fim de jogo.\n", chefe->nome);
            exit(0); 
        } else if (chefe->vida_chefe <= 0) {
            printf("\nVocê superou o desafio %s!\n", chefe->nome);
            programador->experiencia += chefe->dificuldade * 10;
            programador->vida = programador->vida + programador->vida_maxima / 2;
            if (programador->vida > programador->vida_maxima) {
                programador->vida = programador->vida_maxima;
            }
            return;
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    
    struct programadores programador;
    struct chefes chefe[] = {
        {"Bug da Conexão", 50, 10, 8, 12, "Rede de Internet"},
        {"Erros de Sintaxe", 60, 12, 10, 14, "Editor de Código"},
        {"O Demônio do Desempenho", 80, 16, 15, 18, "Sistema Operacional"},
        {"Exceção não Tratada", 70, 14, 12, 16, "Ambiente de Produção"}
    };

    int escolha;
    int desafiosConcluidos = 0;
    int desafios[4] = {0};
    
    do {
        printf("Escolha uma opção: \n\n");
        printf("1 – Criar o seu próprio personagem.\n");
        printf("2 – Escolher um personagem pré-definido\n\n");
        printf("Escolha: ");
        scanf("%d", &escolha);
        
        if (escolha < 1 || escolha > 2) {
            printf("\nOpção Inválida! Por favor, escolha 1 ou 2.\n");
            sleep(2);
        }
    } while (escolha < 1 || escolha > 2);
    
    if (escolha == 1) {
        criar(&programador);  
    }else{
        int personagemEscolhido = 0;
        while (personagemEscolhido < 1 || personagemEscolhido > 4) {
            limparTela();             
            printf("Escolha o personagem pré-definido:\n");
            printf("1 – Darlan\n2 – Victor\n3 – Erick Matheus\n4 – Quécila\n\n");
            printf("Escolha: ");
            scanf("%d", &personagemEscolhido);
            
            if (personagemEscolhido < 1 || personagemEscolhido > 4) {                 
                printf("\nOpção Inválida! Por favor, escolha um número entre 1 e 4.\n");
                sleep(2);
            }         
        }
        limparTela();
        exibirDescricaoPersonagem(personagemEscolhido);         
        senai(&programador, personagemEscolhido);
    }
    
    while (desafiosConcluidos < 4) {
        status(programador);
        printf("\nEscolha um desafio:\n");
        for (int i = 0; i < 4; i++) {
            if (desafios[i] == 0) {
                printf("%d - %s\n", i + 1, chefe[i].nome);
            }
        }
        printf("\nEscolha um número entre 1 e 4 para enfrentar um desafio: ");
        scanf("%d", &escolha);
        
        if (desafios[escolha - 1] == 0) {
            desafios[escolha - 1] = 1;
            batalha(&programador, &chefe[escolha - 1]);
            desafiosConcluidos++;
        }else{             
            limparTela();             
            printf("\nVocê já completou esse desafio!\n");
        }
    }
    printf("\nParabéns, você completou todos os desafios!\n");
    return 0;
}
