#include <stdio.h>

/*Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida,
mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos
os elementos do vetor que estejam abaixo da média, com uma casa decimal cada.*/

int main(void){

    int n;

    printf("\n === Algoritmo abaixo da media === \n");
    printf("Quantos elementos tera' o vetor? ");
    scanf("%d", &n);

    float vet[n], media = 0;
    for (int i = 0; i < n; ++i) {
        printf("Digite um numero:");
        scanf("%f", &vet[i]);
        media += vet[i];
    }
    media = media / n;
    printf("MEDIA DO VETOR = %.3f\n", media);

    printf("ELEMENTOS ABAIXO DA MEDIA:\n");
    for (int i = 0; i < n; ++i) {
        if(vet[i]<media){
            printf("%.1f\n", vet[i]);
        }
    }



    return 0;
}
