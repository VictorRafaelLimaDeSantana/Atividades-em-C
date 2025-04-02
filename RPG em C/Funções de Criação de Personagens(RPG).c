/* Funções de Criação de Personagens(RPG)*/

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

