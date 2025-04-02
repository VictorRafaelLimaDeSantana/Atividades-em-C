/*Questão 9 Vetores: Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i + 5 * i) %(i + 1),
sendo i a posição do elemento no vetor. Em seguida imprima o vetor na tela.*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int vetor[50];

    for (int i = 0; i < 50; i++) {
        vetor[i] = (i + 5 * i) % (i + 1);
    }

    printf("Vetor preenchido:\n");
    for (int i = 0; i < 50; i++) {
        printf("%d ", vetor[i]);
 
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}
