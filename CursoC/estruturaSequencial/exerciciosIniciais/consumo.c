#include <stdio.h>

 /*Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de
combustível gasto por este carro ao percorrer tal distância. Seu programa deve mostrar o consumo
médio do carro, com três casas decimais.*/

int main() {
    float km, combst, r;

    printf("Digite a distância percorrida em km: ");
    scanf("%f", &km);
    printf("Combustível gasto: ");
    scanf("%f", &combst);

    r = km / combst;

    printf("Consumo médio: %.3f\n", r);

    return 0;
}

