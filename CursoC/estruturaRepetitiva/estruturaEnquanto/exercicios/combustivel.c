#include <stdio.h>

/*Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes.
Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma:
1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a
4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o
código informado for o número 4, devendo então mostrar a mensagem "MUITO OBRIGADO", bem
como as quantidades de cada combustível.*/

int main(void){

    int alcool = 0, gasolina  = 0, diesel = 0;

    printf("\nPREFERENCIA DE COMBUSTIVEL\n");
    printf("1.Alcool\n2.Gasolina\n3.Disel\n");

    int tipoDeCombustivel = 0;
    while(tipoDeCombustivel != 4){
        printf("Informe um codigo (1,2,3) ou 4 para parar:");
        scanf("%d", &tipoDeCombustivel);

        switch (tipoDeCombustivel) {
            case 1: ++alcool;
            break;
            case 2: ++gasolina;
            break;
            case 3: ++diesel;
            break;
            default:
                printf("Codigo invalido! Tente de novo!\n");
            break;
        }
    }
    printf("Muito obrigado!\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Disel: %d\n", diesel);

    return 0;
}
