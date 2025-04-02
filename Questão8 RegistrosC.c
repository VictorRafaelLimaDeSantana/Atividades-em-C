/*Questão 8 Registros: Criar um sistema para cadastrar 3 reservas de hotel. Cada reserva deve conter o
nome do hóspede, número do quarto e número de noites.
Em seguida, exiba o valor total a pagar para cada reserva considerando um preço fixo por noite.*/

#include <stdio.h>
#include <locale.h>

struct reserva {
	char nome[50];
	int numero_quarto;
	int noites;
};
int main(){
	setlocale(LC_ALL, "Portuguese");
	struct reserva reservas[3];
	
	for(int i = 0; i < 3; i++){
	printf("Digite o nome do hóspede %d: ", i + 1);
	scanf("%s", reservas[i].nome);
	
	printf("Digite o número do quarto %d: ", i + 1);
	scanf("%d", &reservas[i].numero_quarto);
	
	printf("Digite o número de noites: ");
	scanf("%d", &reservas[i].noites);
	printf("\n");
}
	float preco_por_noite = 150.00;
	printf("\nReservas cadastradas:\n");
	for(int i = 0; i < 3; i++){
	float total_reserva = reservas[i].noites * preco_por_noite;
	printf("Hóspede: %s, Quarto: %d, Total a pagar: R$ %.2f\n", reservas[i].nome, reservas[i].numero_quarto, total_reserva);
}
	return 0;
}

