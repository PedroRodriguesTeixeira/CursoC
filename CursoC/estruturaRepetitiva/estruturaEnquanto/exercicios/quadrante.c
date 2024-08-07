#include <stdio.h>

/*Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no
sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4). O
algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem
escrever mensagem alguma).*/

int main(void){


    int X, Y;

    printf("\nAlgoritmo das coordenadas\n");

    printf("Digite a coordenada X: ");
    scanf("%d", &X);
    printf("Digite a coordenada Y: ");
    scanf("%d", &Y);

    while(X != 0 && Y != 0){

    if(X > 0 && Y > 0){
        printf("QUADRANTE Q1\n");
    } else if (X < 0 && Y > 0){
        printf("QUADRANTE Q2\n");
    } else if(X < 0 && Y < 0){
        printf("QUADRANTE Q3\n");
    } else {
        printf("QUADRANTE Q4\n");
    }

    printf("Digite a coordenada X: ");
    scanf("%d", &X);
    printf("Digite a coordenada Y: ");
    scanf("%d", &Y);

    }




    return 0;
}
