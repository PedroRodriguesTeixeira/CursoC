#include <stdio.h>

int main() {
    int N, i;
    double vet[10];

    printf("Quantos numeros serao digitados:");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("Digite os números:");
        scanf("%lf", &vet[i]);
    }

    printf("\nNUMEROS DIGITADOS\n");
    for (i = 0; i < N; i++) {
        printf("%.1lf\n", vet[i]);
    }

    return 0;
}
