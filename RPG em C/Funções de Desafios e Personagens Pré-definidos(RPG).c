/* Funções de Desafios e Personagens Pré-definidos(RPG) */

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
