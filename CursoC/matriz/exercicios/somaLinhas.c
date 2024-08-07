#include <stdio.h>

/*Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado*/

int main(void){

    int m, n;

    printf("\n=== Algoritmo soma de linhas ===\n");
    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &m);
    printf("Qual quantidade de colunas da matriz? ");
    scanf("%d", &n);

    double matriz[m][n];

    for (int i = 0; i < m; ++i) {
        printf("Digite os elementos da %da linha: ", i+1);
        for (int j = 0; j < n; ++j) {
            scanf("%lf", &matriz[i][j]);
        }
    }
    
    float vet[m];
    for (int i = 0; i < m; ++i) {
        float somador = 0.0;
        for (int j = 0; j < n; ++j) {
            somador += matriz[i][j];
        }
        vet[i] = somador;
    }
    printf("Vetor gerado:\n");
    for (int i = 0; i < m; ++i) {
        printf("%.1f\n", vet[i]);
    }


    return 0;
}