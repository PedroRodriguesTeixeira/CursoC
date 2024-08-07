#include <stdio.h>

int main (void){

    int numTabuada, calculo;

    printf("\n === TABUADA ===\n");
    printf("Digite o numero que voce deseja saber a tabuada:");
    scanf("%d", &numTabuada);

    for(int i = 1; i <= 10; i++){

        printf("%d x %d = %d\n", numTabuada, i, calculo = numTabuada * i);

    }


}
