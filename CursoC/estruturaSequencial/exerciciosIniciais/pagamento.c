#include <stdio.h>

/*Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a
quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com
uma mensagem explicativa, conforme exemplo.*/

int main() {
    char nome[50];
    float qntD, qntH, soma;

    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("Digite o valor que voce recebe por hora: ");
    scanf("%f", &qntD);
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &qntH);

    soma = qntD * qntH;

    printf("O pagamento para %s deve ser: %.2f\n", nome, soma);

    return 0;
}
