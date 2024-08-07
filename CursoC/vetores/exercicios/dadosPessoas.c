#include <stdio.h>
#include <stdlib.h>

/*Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa
que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número
de homens.
*/

int main(void){

    int n;

    printf("\n=== Algoritmo dados pessoais ===\n");
    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    float altura[n], numeroDeMulheres = 0, mediaMulheres = 0;
    int numeroDeHomens = 0;
    char genero[n];
    for (int i = 0; i < n; ++i) {
        printf("Altura da %da pessoa", i+1);
        scanf("%f", &altura[i]);
        printf("O genero da %da pessoa: (M/F)", i+1);
        fflush(stdin);
        scanf("%c", &genero[i]);
        if(genero[i] == 'F' || genero[i] == 'f'){
            mediaMulheres += altura[i];
            ++numeroDeMulheres;
        }
        if(genero[i] == 'm' || genero[i] == 'M'){
            ++numeroDeHomens;
        }

    }
    printf("Menor altura: ");
    float menorAltura = altura[0];
    for (int i = 1; i < n; ++i) {
        if(altura[i]<menorAltura){
            menorAltura = altura[i];
        }
    }
    printf("%.2f\n", menorAltura);


    printf("Maior altura: ");
    float maiorAltura = altura[0];
    for (int i = 1; i < n; ++i) {
        if(altura[i]>maiorAltura){
            maiorAltura = altura[i];
        }
    }
    printf("%.2f\n", maiorAltura);
    printf("Media altura das mulheres: %.2f\n", mediaMulheres = mediaMulheres / numeroDeMulheres);
    printf("Numero de homens: %d", numeroDeHomens);


    return 0;
}