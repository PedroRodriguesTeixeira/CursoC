#include <stdio.h>

/*Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números inteiros, conforme
exemplo. Em seguida, mostrar na tela somente os números negativos da matriz.*/

int main(void){
    
    int m, n;

    printf("\n===Encontrador de numeros negativos na matriz===\n");
    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &m);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &n);

    int matriz[m][n];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Valores negativos:\n");
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if(matriz[i][j]<0){
                printf("%d\n", matriz[i][j]);
            }
        }
    }



    return 0;
}