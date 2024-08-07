#include <stdio.h>

/*Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três
números lidos. Em caso de empate, mostrar apenas uma vez.*/

int main() {
    printf("\nENCONTRE O MENOR NUMERO!\n");

    int num1, num2, num3;

    printf("DIGITE 3 NUMEROS: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 < num2 && num1 < num3) {
        printf("MENOR = %d", num1);
    } else if (num2 < num1 && num2 < num3) {
        printf("MENOR = %d", num2);
    } else {
        printf("MENOR = %d", num3);
    }

    return 0;
}

