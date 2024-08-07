#include <stdio.h>

int main (void){

    int N;

    printf("\n=== PROGRAMA DAS MATRIZES ===\n");
    printf("Qual a ordem da matriz?");
    scanf("%d", &N);

    int matriz[N][N];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Diagonal principal: \n");
    for (int i = 0; i < N; ++i) {
        printf("%d ", matriz[i][i]);
    }

    int contadorNegativo = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if(matriz[i][j] < 0){

                ++contadorNegativo;

            }
        }
    }
    printf("\nQuantidade de numeros negativos = %d", contadorNegativo);


    return 0;
}
