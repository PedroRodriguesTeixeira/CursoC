#include <stdio.h>

int main (void){

    float soma =  0, media = 0;
    int qntDeNumero;

    printf("Quantos numeros voce deseja digitar?");
    scanf("%d", &qntDeNumero);

    float num[qntDeNumero];


    for(int i = 0; i < qntDeNumero; i++){

        printf("Digite um numero: ");
        scanf("%f", &num[i]);

    }

    printf("VALORES: ");
    for(int j = 0; j < qntDeNumero; j++){

        printf("%.1f ", num[j]);

    }

    printf("\nSOMA: ");
    for(int s = 0; s < qntDeNumero; s++){

        soma += num[s];

    }
    printf("%.2f", soma);

    media = soma / qntDeNumero;
    printf("\nMEDIA: %.2f", media);



}
