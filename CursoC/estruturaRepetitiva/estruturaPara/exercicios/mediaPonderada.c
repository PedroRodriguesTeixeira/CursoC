#include <stdio.h>

/*Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de
teste consiste de 3 valores reais, para os quais você deverá calcular e mostrar a média ponderada, sendo
que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. Vale lembrar
que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso, dividida
pela soma dos pesos.*/

int main (void){
    
    int N;
    float num1, num2, num3, media;

    printf("\nMEDIA PONDERADA\n");
    printf("Quantos casos voce deseja digitar? ");
    scanf("%d", &N);

    for (int i = 0; i < N; ++i) {
        printf("Digite 3 numeros:\n");
        scanf("%f %f %f", &num1, &num2, &num3);
        media = (num1 * 2 + num2 * 3 + num3 * 5) / 10;
        printf("MEDIA = %.1f\n", media);
    }


    return 0;
}
