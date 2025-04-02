/* Questão 7 Procedimentos e Funções: Faça uma função que receba um vetor de reais e retorne a média dele. */
 
#include <stdio.h> 
#include <locale.h> 
 
float valorMedia(float vetor[], int tamanho){
	float soma = 0.0;
	
	for(int i = 0; i < tamanho; i++){
	soma = soma + vetor[i]; 
    } 
    return soma / tamanho; 
} 
void vetorMedia(){
	int tamanho;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho); 
     
    float vetor[tamanho]; 
 
    printf("\nDigite os números do vetor:\n");
	for(int i = 0; i < tamanho; i++){
	printf("\n%d° Número: ", i + 1);
	scanf("%f", &vetor[i]); 
    } 
    float media = valorMedia(vetor, tamanho);
	printf("\nA média dos números do vetor é: %f", media); 
} 
int main(){ 
setlocale(LC_ALL, "Portuguese");

	vetorMedia();
	return 0; 
} 

