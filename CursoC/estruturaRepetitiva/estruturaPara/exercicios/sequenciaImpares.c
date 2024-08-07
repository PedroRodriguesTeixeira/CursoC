#include <stdio.h>

/*Leia um valor inteiro X. Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X,
se for o caso.*/

int main(void){

    int x, soma = 1;

    printf("\nSequencia de Impares\n");
    printf("Digite o valor de x: ");
    scanf("%d", &x);

    /*
    for (int i = 0; i < x; ++i) {
        if(soma%2!=0) {
            printf("%d\n", soma);
            soma = soma + 1;
        } else soma = soma + 1;
    }
    */
    //solucao mais facil
    for (int i = 0; i <= x; ++i) {
        if(i%2!=0){
            printf("%d\n", i);
        }
    }


    return 0;
}
