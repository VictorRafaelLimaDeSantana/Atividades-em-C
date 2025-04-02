/* Função de Batalha(RPG) */

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
