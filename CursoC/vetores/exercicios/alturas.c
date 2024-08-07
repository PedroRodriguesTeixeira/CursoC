#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    int qntDePessoas, contadorMenores;
    double soma, media, percentualMenores;

    printf("\n== ALTURAS ==\n");

    printf("Quantas pessoas voce deseja adicionar?");
    scanf("%d", &qntDePessoas);

    char nome[qntDePessoas][50];
    int idade[qntDePessoas];
    double altura[qntDePessoas];

    for(int i = 0; i < qntDePessoas; i++){

            printf("\nDados da %da\n", i+1);
            printf("Digite o nome: ");
            fseek(stdin, 0, SEEK_END);
            fflush(stdin);
            fgets(nome[i], 50, stdin);
            printf("Digite a idade: ");
            scanf("%d", &idade[i]);
            printf("Digite a altura: ");
            scanf("%lf", &altura[i]);
    }


    soma = 0;
    for (int i = 0; i < qntDePessoas; ++i) {

        soma += altura[i];

    }
    media = soma/qntDePessoas;
    printf("\nAltra media : %.2lf\n", media);

    contadorMenores = 0;
    for (int i = 0; i < qntDePessoas; ++i) {
        if(idade[i] < 16){
            ++contadorMenores;
        }
    }
    percentualMenores = contadorMenores * 100.0 / qntDePessoas;
    printf("Porcentagem de menores de 16 : %1.lf %%\n", percentualMenores);

    for (int i = 0; i < qntDePessoas; ++i) {
        if(idade[i] < 16){
            printf("%s", nome[i]);
        }
    }

    return 0;
}