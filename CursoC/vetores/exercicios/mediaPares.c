#include <stdio.h>

/*Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média
aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for
digitado, mostrar a mensagem "NENHUM NUMERO PAR"*/

int main(void){
    
    int n;

    printf("\n === Algoritmo de media dos numeros pares === \n");
    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d",&n);

    int vet[n];
    for (int i = 0; i < n; ++i) {
        printf("Digite um numero inteiro:");
        scanf("%d", &vet[i]);
    }
    float media = 0;
    int contadorPar = 0;
    for (int i = 0; i < n; ++i) {
        if(vet[i]%2==0){
            media += vet[i];
            contadorPar++;
        }
    }
    if(media != 0){
    printf("MEDIA DOS PARES: = ");
    printf("%.1f", media = media/contadorPar);
    } else printf("NENHUM NUMERO PAR\n");
    return 0;
}