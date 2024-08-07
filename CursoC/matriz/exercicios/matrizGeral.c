#include <stdio.h>
#include <math.h>

/*Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais. Em seguida, fazer as
seguintes ações:
a) calcular e imprimir a soma de todos os elementos positivos da matriz.
b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha.
c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna.
d) imprimir os elementos da diagonal principal da matriz.
e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir
a matriz alterada.*/

int main(void){

    int n;

    printf("\n ===Algoritmo da matriz=== \n");
    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    float matriz[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
    float soma = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(matriz[i][j]>0){
                soma += matriz[i][j];
            }
        }
    }
    printf("\nSoma dos positivos: %.1f\n", soma);

    int linha;
    printf("\nEscolha uma  linha: ");
    scanf("%d", &linha);
    printf("Linha escolhida: ");
    for (int i = 0; i < n; ++i) {
        printf("%.1f  ", matriz[linha][i]);
    }
    printf("\n");
    int coluna;
    printf("\nEscolha uma coluna: ");
    scanf("%d", &coluna);
    printf("Coluna escolhida: ");
    for (int i = 0; i < n; ++i) {
            printf("%.1f  ", matriz[i][coluna]);
    }

    printf("\n");

    printf("\nDiagonal principal: ");
    for (int i = 0; i < n; ++i) {
        printf("%.1f  ", matriz[i][i]);
    }

    printf("\n");

    printf("\nMatriz alterada: \n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(matriz[i][j]<0){
                matriz[i][j] = pow(matriz[i][j], 2.0);
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%.1f ", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}
