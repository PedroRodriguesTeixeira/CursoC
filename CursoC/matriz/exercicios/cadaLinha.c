#include <stdio.h>

/*Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10). Mostrar qual o maior elemento
de cada linha. Suponha não haver empates.*/

int main(void){

    int n;

    printf("\n=== Encontre o maior valor em cada linha da matriz ===\n");
    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int matriz[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Maior elemento de cada linha:\n");
    int maior, aux[n];
    for (int i = 0; i < n; ++i) {
        maior = matriz[i][0];
        for (int j = 0; j < n; ++j) {
            if(matriz[i][j]>maior){
                maior = matriz[i][j];
            }
        }
        aux[i] = maior;
    }

    for (int i = 0; i < n; ++i) {
        printf("%d\n", aux[i]);
    }


    return 0;
}