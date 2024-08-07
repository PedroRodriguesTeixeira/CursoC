#include <stdio.h>

/*Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
fatorial de N.*/

int main(void){

    int N;

    printf("\nFATORIAL\n");
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int fatorial = 1;
    for (int i = 1; i < N; ++i) {
        fatorial += fatorial * i;
    }
    printf("FATORIAL = %d", fatorial);


    return 0;
}
