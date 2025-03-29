/*Questão 5 Matriz: Leia uma matriz 5 x 5. Leia também um valor X.
O programa deverá fazer uma busca desse valor na matriz e, ao final,
escrever a localização (linha e coluna) ou uma mensagem de não encontrado.*/ 
 
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[5][5];
    int a, b, num;
    int encontrado = 0;

    printf("Digite números inteiros para uma matriz 5x5: \n");

    for (a = 0; a < 5; a++) {
        for (b = 0; b < 5; b++) {
            scanf("%d", &matriz[a][b]);
        }
    }
    printf("Digite um número para ser encontrado na matriz: ");
    scanf("%d", &num);

    for (a = 0; a < 5; a++) {
        for (b = 0; b < 5; b++) {
            if (matriz[a][b] == num) {
                printf("\nValor encontrado na linha %d e coluna %d.\n", a + 1, b + 1);
                encontrado = 1;
                break;
            }
        }
        if (encontrado) {
            break;
        }
    }

    if (!encontrado) {
        printf("\nValor não encontrado.\n");
    }
    return 0;
}
