#include <stdio.h>

int main (void){

    int i = 0, idade = 0;
    double total = 0;

    printf("Digite um numero para calcular a media:");
    scanf("%d", &idade);


    while(idade >= 0){
        total += idade;
        ++i;
        printf("Digite um numero para calcular a media:");
        scanf("%d", &idade);

    }

    if (i == 0){
        printf("IMPOSSÍVEL CALCULAR");
    } else printf("MEDIA = %.2lf", total = total/i);


}
