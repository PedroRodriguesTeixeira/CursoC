#include <stdio.h>

/*Fazer um programa para ler uma duração de tempo em segundos, daí imprimir na tela esta duração no
formato horas:minutos:segundos.*/

int main() {
    int duracao, horas, resto, segundos, minutos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &duracao);

    horas = duracao / 3600;
    resto = duracao % 3600;
    segundos = resto % 60;
    minutos = resto / 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
