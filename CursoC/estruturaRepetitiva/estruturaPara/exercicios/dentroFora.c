#include <stdio.h>

/*Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo,
conforme exemplo*/

int main(void){

    int N, num, dentro = 0, fora = 0;

    printf("\nNumeros dentro do intervalo [10,20]\n");
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    for (int i = 0; i < N; ++i) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num >= 10 && num <= 20){
            ++dentro;
        } else ++fora;
    }
    printf("%d DENTRO\n", dentro);
    printf("%d FORA\n", fora);



    return 0;
}
