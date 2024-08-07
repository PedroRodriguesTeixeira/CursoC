#include <stdio.h>

/*Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
o vetor C gerado.*/

int main(void){
    
    int n;

    printf("\n === Algoritmo soma de vetores === \n");
    printf("Quantos cada vetor tera'? ");
    scanf("%d", &n);

    printf("Digite os valores de A: \n");
    int a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    printf("Digite os valores de B: \n");
    int b[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &b[i]);
    }
    printf("VALOR RESULTANTE:\n");
    int c[n];
    for (int i = 0; i < n; ++i) {
        c[i] = a[i] + b[i];
        printf("%d\n", c[i]);
    }


    return 0;
}