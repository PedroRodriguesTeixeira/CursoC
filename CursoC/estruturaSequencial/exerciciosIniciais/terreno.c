#include <stdio.h>

/*Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com
duas casas decimais, conforme exemplo.*/

int main() {
    double tamanho, valorDoMetro, largura, comprimento;

    printf("DIGITE A LARGURA DO TERRENO:");
    scanf("%lf", &largura);
    printf("DIGITE O COMPRIMENTO DO TERRENO:");
    scanf("%lf", &comprimento);
    printf("DIGITE O VALOR DO METRO QUADRADO:");
    scanf("%lf", &valorDoMetro);

    tamanho = largura * comprimento;
    double valorTotal = tamanho * valorDoMetro;

    printf("AREA DO TERRENO: %.2lf\n", tamanho);
    printf("VALOR TOTAL DO TERRENO: %.2lf\n", valorTotal);

    return 0;
}
