#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou
igual a 6.0 (seis).*/

int main(void){


    int n;
    printf("\n === Algoritmo dos aprovados ===\n");
    printf("Quantos alunos serao digitados?");
    scanf("%d", &n);

    char nome[n][50];
    float nota1, nota2, media[n];
    for (int i = 0; i < n; ++i) {
        printf("Digite o primeiro nome, primeira e segunda nota %da aluno: ", i+1);
        fflush(stdin);
        fgets(nome[i], 50, stdin);
        scanf("%f", &nota1);
        scanf("%f", &nota2);
        media[i] = (nota1 + nota2) /2;
    }
    float contagemDeAprovados = 0;
    printf("Alunos aprovados:\n ");
    for (int i = 0; i < n; ++i) {
        if(media[i]>=6.0){
            printf("%s", nome[i]);
        }
    }



    return 0;
}