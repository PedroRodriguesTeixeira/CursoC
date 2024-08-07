#include <stdio.h>

/*Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Mostrar a soma dos elementos acima da
diagonal principal. Um exemplo de números acima da diagonal
principal é mostrado ao lado (no caso as células com fundo cinza).*/

int main(void){

    int n;

    printf("\n=== Algoritmo acima Diagonal ===\n");
    printf("Qual a ordem da matriz?");
    scanf("%d", &n);

    int matriz[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    int somaDiagonal = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(j>i){
                somaDiagonal += matriz[i][j];
            }
        }
    }
    printf("Soma elementos acima da diagonal principal = %d", somaDiagonal);



    return 0;
}