#include <stdio.h>

/*Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para
organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano,
quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada. Este
laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas
informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia
utilizada e a quantidade de cobaias utilizadas em cada experimento. Faça um programa que leia um
valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um
inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de
cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o
percentual deve ser apresentado com dois dígitos após o ponto.*/

int main(void){

    int N, qntCobaias, coelho = 0, rato = 0, sapo = 0, total;
    char tipoCobaia;

    printf("\nEXPERIENCIAS\n");
    printf("Quantos casos de teste serao digitado? ");
    scanf("%d", &N);

    for (int i = 0; i < N; ++i) {
        printf("Quantidade de cobaias: ");
        scanf("%d", &qntCobaias);
        printf("Tipo de cobaias: ");
        fflush(stdin);
        scanf("%c", &tipoCobaia);
        if(tipoCobaia == 'c' || tipoCobaia == 'C'){
            coelho += qntCobaias;
        } else if (tipoCobaia == 'r' || tipoCobaia == 'R'){
            rato += qntCobaias;
        } else if(tipoCobaia == 's' || tipoCobaia == 'S'){
            sapo += qntCobaias;
        }
    }
    printf("RELATORIO FINAL:\n");
    total = coelho + rato + sapo;
    printf("TOTAL: %d cobaias\n", total);
    printf("TOTAL: %d coelhos\n", coelho);
    printf("TOTAL: %d ratos\n", rato);
    printf("TOTAL: %d sapos\n", sapo);

    float pCoelho, pSapo, pRato;
    printf("Percentual de coelhos: %.2f\n", pCoelho = (float) coelho / total * 100.00);
    printf("Percentual de ratos: %.2f\n", pRato =  (float)rato / total * 100.00);
    printf("Percentual de sapos: %.2f\n", pSapo =  (float) sapo / total * 100.00);

    return 0;
}
