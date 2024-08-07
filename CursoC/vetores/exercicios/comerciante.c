#include <stdio.h>

/*Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto,
mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de
venda das mesmas. Fazer um programa que leia tais dados e determine e escreva quantas mercadorias
proporcionaram:
 lucro < 10%
 10% ≤ lucro ≤ 20%
 lucro > 20%
Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como
o lucro total.*/

int main(void){

    int n;

    printf("\n ===Algoritmo do comerciante ===\n");
    printf("Serao digitados dados de quantos produtos?");
    scanf("%d", &n);

    char nome[n][30];
    double precoCompra[n], precoVenda[n], lucroTotal;
    for (int i = 0; i < n; ++i) {
        printf("Nome: ");
        fflush(stdin);
        scanf("%s", nome[i]);
        printf("Preco de compra: ");
        scanf("%lf", &precoCompra[i]);
        printf("Preco de venda: ");
        scanf("%lf", &precoVenda[i]);
    }

    double totalDeCompra = 0, totalDeVenda = 0;
    for (int i = 0; i < n; ++i) {
        totalDeCompra += precoCompra[i];
        totalDeVenda += precoVenda[i];
    }

    double porcentagem[n];
    int menor = 0, entre = 0, acima = 0;
    for (int i = 0; i < n; ++i) {
        porcentagem[i] = (precoVenda[i] - precoCompra[i]) / precoCompra[i] * 100.0;
        if(porcentagem[i] < 10.0){
            menor++;
        } else if(porcentagem[i] < 20.0){
            entre++;
        } else acima++;
    }


    printf("RELATORIO:\n");
    printf("Lucro abaixo de 10%%: %d\n", menor);
    printf("Lucro entre 10%% e 20%%: %d\n", entre);
    printf("Lucro acima de 20%%: %d\n", acima);
    printf("Valor total de compra: %.2lf\n", totalDeCompra);
    printf("Valor total de compra: %.2lf\n", totalDeVenda);
    printf("Lucro total: %.2lf\n", lucroTotal = totalDeVenda - totalDeCompra);


    return 0;
}