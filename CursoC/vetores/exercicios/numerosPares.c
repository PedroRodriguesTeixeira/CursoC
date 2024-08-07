#include <stdio.h>

/*Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na
tela todos os números pares, e também a quantidade de números pares.*/

int main(void){

    int N;

    printf("\n === Algoritmo numeros pares === \n");
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    int vet[N];
    for (int i = 0; i < N; ++i) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }
    printf("\nNUMERO PARES: \n");
    for (int i = 0; i < N; ++i) {
        if(vet[i]%2==0){
            printf("%d  ", vet[i]);
        }
    }
    int contadorPares = 0;
    for (int i = 0; i < N; ++i) {
        if(vet[i]%2==0){
            ++contadorPares;
        }
    }
    printf("\nQuantidade de pares: %d", contadorPares);


    return 0;
}