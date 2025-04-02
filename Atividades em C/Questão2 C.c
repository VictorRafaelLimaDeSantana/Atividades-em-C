/* Questão 2 : Você foi encarregado de criar um menu simples para um programa de gerenciamento de tarefas. O menu deve oferecer :  
Adicionar  
 
Remover 
 
Listar  
 
Sair  
*/
 #include <stdio.h>
 #include <locale.h>
 
 int main() { 
 	setlocale(LC_ALL, "Portuguese");
	 
	 int menu; 
     
    printf("O que você deseja?\nDigite 1 para adicionar\nDigite 2 para remover\nDigite 3 para listar \nDigite 4 para sair.\n");
	 scanf("\n%d", &menu); 

    switch(menu){ 
     
    case 1: printf("Você selecionou Adicionar."); break;
	case 2: printf("Você selecionou Remover."); break;
	case 3: printf("Você selecionou Listar."); break;
	case 4: printf("Você selecionou Sair."); break; 
    } 
return 0; 
}
