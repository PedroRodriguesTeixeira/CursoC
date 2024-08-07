#include <stdio.h>

/*Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida, mostrar na tela
o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento,
considerando a primeira posição como 0 (zero).*/

int main(void){

    int n = 0;

    printf("\n === Algoritmo maior posicao === \n");
    printf("Quantas posicoes voce vai digitar? ");
    scanf("%d", &n);

    float vet[n];
    for (int i = 0; i < n; ++i) {
        printf("Digite um numero: ");
        scanf("%f", &vet[i]);
    }
    printf("\nMAIOR POSICAO:\n");
    int contadorPosicao = 0;
    float maiorPosicao = vet[0];
    for (int i = 0; i < n; ++i) {
        if(vet[i]>maiorPosicao){
             maiorPosicao = vet[i];
             contadorPosicao = i;
        }
    }
    printf("%.1f\n", maiorPosicao);

    printf("POSICAO DO MAIOR VALOR: ");
    printf("POSICAO DO MAIOR VALOR: %d", contadorPosicao);



    return 0;
}