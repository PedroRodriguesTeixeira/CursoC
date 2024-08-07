#include <stdio.h>
#include "string.h"

/*Leia um valor inteiro N. Este valor será a quantidade de números inteiros que serão lidos em seguida.
Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também
se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir
apenas NULO.*/

int main(void){

    int N, num;

    printf("\nCacador de numeros\n");
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    for (int i = 0; i < N; ++i) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num == 0){
            printf("NULO\n");
        } else if(num%2!=0){
            printf("IMPAR ");
        } else printf("PAR ");
        if(num < 0){
            printf("NEGATIVO\n");
        } else if (num > 0) printf("POSITIVO\n");
        
    }

    return 0;
}
