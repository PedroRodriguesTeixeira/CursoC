#include <stdio.h>
#include <locale.h>

int idade, idade2;
char nome1[40], nome2[40];
float idadeMedia;

/*Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os
nomes e a idade média entre essas pessoas, com uma casa decimal, conforme exemplo.*/

int main (){

    setlocale(LC_ALL, "PT-BR");

    printf("Dados da primeira pessoa: \n");
    printf("Nome: ");
    fflush(stdin);
    fgets(nome1, 40, stdin);
    printf("Idade: ");
    scanf("%i", &idade);

    printf("\n");

    printf("Dados da segunda pessoa: ");
    getchar();
    fgets(nome2, 40, stdin);
    printf("Idade: ");
    scanf("%i", &idade2);


    idadeMedia = (float) (idade + idade2) / 2.0;

    printf("Idade media de %s e %s e' de %.1f", nome1, nome2, idadeMedia);


    return 0;
}
