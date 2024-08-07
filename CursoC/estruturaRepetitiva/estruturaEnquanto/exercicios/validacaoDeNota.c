#include <stdio.h>

/*Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a
média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao
intervalo [0,10]). Cada nota deve ser validada separadamente.*/

int main (void){

    float nota1, nota2, media;

    printf("\n Validacao de Notas \n");
    printf("Digite a primeira nota:");
    scanf("%f", &nota1);
    while(nota1 < 0 || nota1 > 10.00){
        printf("Valor invalido! Tente de novo: ");
        scanf("%f", &nota1);
    }
    printf("Digite a segunda nota:");
    scanf("%f", &nota2);
    while(nota2 < 0 || nota2 > 10.00){
        printf("Valor invalido! Tente de novo: ");
        scanf("%f", &nota2);
    }

    media = (nota1 + nota2) /2;

    printf("MEIDA = %.2f", media);



    return 0;
}
