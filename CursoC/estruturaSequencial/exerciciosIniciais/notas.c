#include <stdio.h>
#include <stdlib.h>

/**/

float nota1, nota2, notaFinal;

int main (){

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    notaFinal = nota1 + nota2;

    printf("%.1f\n", notaFinal);

    if (notaFinal < 60.00) {
        printf("Reprovado!");
    }  else {
        printf("Aprovado!");
    }




    return 0;
}
