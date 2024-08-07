#include <stdio.h>

/*Fazer um programa para ler a area do trapazeio.*/

int main() {

    float B, b, h, area;

    printf("Programa para calcular a area de um Trapezio\n");
    printf("Coloque o numero da BASE(B):\n");
    scanf("%f", &B);
    printf("Coloque o numero da base(b):\n");
    scanf("%f", &b);
    printf("Coloque o valor da altura(h):\n");
    scanf("%f", &h);


    area = (B + b) / 2 * h;


    printf("O valor da area desse trapezio e: %.2f\n", area);

    return 0;
}

