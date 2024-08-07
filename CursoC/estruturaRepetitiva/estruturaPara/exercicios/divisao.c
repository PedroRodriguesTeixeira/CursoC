#include <stdio.h>

/*Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo
segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”.*/

int main(void){
    
    int casos;
    float numerador, denominador, divisao;

    printf("\nDIVISAO\n");
    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &casos);

    for (int i = 0; i < casos; ++i) {
        printf("Entre com o numerador: ");
        scanf("%f", &numerador);
        printf("Entre com o denominador: ");
        scanf("%f", &denominador);
        if(denominador == 0){
            printf("DIVISAO IMPOSSIVEL!\n");
        } else printf("DIVISAO = %.2f\n", divisao = numerador / denominador);
    }


    return 0;
}
