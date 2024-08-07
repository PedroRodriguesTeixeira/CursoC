#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas, colunas, i, j;

    printf("DIGITE O NUMERO DE LINHAS:");
    scanf("%d", &linhas);
    printf("DIGITE O NUMERO DE COLUNAS:");
    scanf("%d", &colunas);

    int mat[linhas][colunas];

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("QUAL NUMERO DA MATRIZ[%d][%d]:", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
