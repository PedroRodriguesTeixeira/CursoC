#include <stdio.h>

/*Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente). Seu programa deve
mostrar o valor do troco a ser devolvido ao cliente.*/

int main() {
    float calculo, troco, preco_unit, dinheiro_rec;
    int qnt;

    printf("Digite o preço unitário do produto: ");
    scanf("%f", &preco_unit);

    printf("Digite quantos produtos foram passados: ");
    scanf("%d", &qnt);

    calculo = preco_unit * qnt;

    printf("Preço total é de: %.2f\n", calculo);

    printf("Digite a quantidade de dinheiro que será enviada para pagar: ");
    scanf("%f", &dinheiro_rec);

    troco = dinheiro_rec - calculo;

    printf("Troco de: %.2f\n", troco);

    return 0;
}

