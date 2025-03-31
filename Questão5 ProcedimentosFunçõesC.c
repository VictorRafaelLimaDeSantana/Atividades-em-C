/* Questão 5 Procedimentos e Funções: Crie um programa que receba três valores (obrigatoriamente maiores que zero),
representando as medidas dos três lados de um triângulo. Elabore funções para: 
 
a) Determinar se eles lados formam um triângulo, sabendo que:  
O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados.

b) Determinar e mostrar o tipo de triângulo, caso as medidas formem um triângulo. Sendo que: 
 Chama-se equilátero o triângulo que tem três lados iguais. 
 Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais. 
 Recebe o nome de escaleno o triângulo que tem os três lados diferentes. */

#include <stdio.h>
#include <locale.h>

int verifica_triangulo(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return 0;
    }
    return (a + b > c) && (a + c > b) && (b + c > a);
}

const char* tipo_triangulo(float a, float b, float c) {
    if (a == b && b == c) {
        return "Equilátero";
    } else if (a == b || b == c || a == c) {
        return "Isósceles";
    } else {
        return "Escaleno";
    }
}
int main() {

    setlocale(LC_ALL, "Portuguese");

    float a, b, c;

    printf("Digite o comprimento do primeiro lado: ");
    scanf("%f", &a);
    printf("Digite o comprimento do segundo lado: ");
    scanf("%f", &b);
    printf("Digite o comprimento do terceiro lado: ");
    scanf("%f", &c);

    if (!verifica_triangulo(a, b, c)) {
        printf("Os valores fornecidos nao formam um triangulo.\n");
    } else {
        const char* tipo = tipo_triangulo(a, b, c);
        printf("Os valores formam um triangulo do tipo %s.\n", tipo);
    }
    return 0;
}

