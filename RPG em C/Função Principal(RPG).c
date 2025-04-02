/* Função Principal(RPG) */

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
