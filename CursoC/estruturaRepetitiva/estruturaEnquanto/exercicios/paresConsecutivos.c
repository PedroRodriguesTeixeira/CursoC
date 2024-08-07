#include <stdio.h>

/*O programa deve ler um valor inteiro X indefinidas vezes. (O programa irá parar quando o valor de X
for igual a 0). Para cada X lido, imprima a soma dos 5 pares consecutivos a partir de X, inclusive o X
, se for par. Se o valor de entrada for 4, por exemplo, a saída deve ser 40, que é o resultado da operação:
4+6+8+10+12, enquanto que se o valor de entrada for 11, por exempo, a saída deve ser 80, que é a
soma de 12+14+16+18+20.*/

int main (void){

    int num, soma = 0;

    printf("\nPARES CONSECUTIVOS\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    while(num != 0){
        if(num%2!=0){
            num += 1;
        }
        soma = num * 5 + 20;
        printf("%d\n", soma);

        printf("Digite um numero inteiro");
        scanf("%d", &num);
    }

    return 0;
}
