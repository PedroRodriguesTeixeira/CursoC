#include <stdio.h>

int main (void){


    int n, i, x, soma;

    printf("Quantos numeros serao digitados?");
    scanf("%d", &n);

    soma = 0;

    for(i = 0; i<n; i++){
        printf("Digite um numero: ");
        scanf("%d", &x);
        soma = soma + x;
    }

    printf("SOMA = %d\n", soma);


}