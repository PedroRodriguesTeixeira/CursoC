#include <stdio.h>

int main (void){

    int qntDeNumeros;

    printf("\n === Observador de numeros negativos ===\n");
    printf("Quantos numeros voce vai digitar?");
    scanf("%d", &qntDeNumeros);

    int num[qntDeNumeros]; //fazendo isso voce nao deixa as posicoes ociosas!

    for(int i = 0; i < qntDeNumeros; i++){

        printf("Digite um numero: ");
        scanf("%d", &num[i]);

    }

    printf("Numeros negativos:\n");
    for(int j = 0; j < qntDeNumeros; j++){

        if(num[j] < 0){
            printf("%d\n", num[j]);
        }

    }


}