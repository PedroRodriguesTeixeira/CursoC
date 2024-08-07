#include <stdio.h>

/*Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes
devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome
da pessoa mais velha.*/

int main(void){
    
    int n, maioridade, posicaoMaior;

    printf("\n === Encontre o mais velho ===\n");
    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &n);


    int idade[n];
    char nome[n][30];
    for (int i = 0; i < n; ++i) {
        printf("Dados da %da pessoa\n", i+1);
        printf("Nome (apenas o primeiro nome sem espaco): ");
        scanf("%s", nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
    }
    maioridade = idade[0];
    posicaoMaior = 0;

    for (int i=1; i<n; i++) {
        if (idade[i] > maioridade) {
            maioridade = idade[i];
            posicaoMaior = i;
        }
    }

    printf("PESSOA MAIS VELHA: %s\n", nome[posicaoMaior]);

    return 0;
}