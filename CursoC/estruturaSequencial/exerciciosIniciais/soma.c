#include <stdio.h>

/*Fazer um programa para ler dois valores inteiros X e Y, e depois mostrar na tela o valor da soma destes
números.*/

int main() {
    int X, Y, resultado;

    printf("Escreva o primeiro valor da soma: ");
    scanf("%d", &X);
    printf("Escreva o segundo valor para a soma: ");
    scanf("%d", &Y);

    resultado = X + Y;

    printf("O valor da sua soma é igual a: %d\n", resultado);

    return 0;
}