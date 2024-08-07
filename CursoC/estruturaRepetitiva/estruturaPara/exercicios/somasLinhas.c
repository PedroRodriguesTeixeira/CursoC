#include <stdio.h>

int main (void){

    int M, N;

    printf("Qual a quantidade de linhas da matriz?");
    scanf("%d", &M);
    printf("Qual a quantidade de colunas da matriz?");
    scanf("%d", &N);

    double matriz[M][N];
    double vetSoma[M];
    for (int i = 0; i < M; ++i) {
        printf("Digite os elementos da %da. Linha: \n", i+1);
        for (int j = 0; j < N; ++j) {
            scanf("%lf", &matriz[i][j]);
            vetSoma[i] += matriz[i][j];
        }
        printf("\n");
    }
    printf("Vetor gerado: \n");
    for (int i = 0; i < M; ++i) {
        printf("%.1lf\n", vetSoma[i]);
    }


    return 0;

}
