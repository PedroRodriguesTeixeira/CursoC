#include <stdio.h>

int main (void){

    int x, y, troca, soma = 0;

    printf("\n === Soma dos numeros primos entre os numeros === \n");
    printf("Digite o primeiro numero:");
    scanf("%d", &x);
    printf("Digite o segundo numero:");
    scanf("%d", &y);


    if(x > y){
        troca = x;
        x = y;
        y = troca;
    }

    for(int i = x+1; i < y; i++){

        if(i%2 != 0){
            soma += i;
        }

    }

    printf("%d", soma);



}