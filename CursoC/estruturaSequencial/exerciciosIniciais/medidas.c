#include <stdio.h>
#include <math.h>

/*Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados
com quatro casas decimais):
a) a área do quadrado que tem lado A
b) a área do triângulo retângulo que base A e altura B
c) a área do trapézio que tem bases A e B, e altura C*/

int main() {
    float A, B, C;
    float areaQuadrado, areaTriangulo, areaTrapezio;

    printf("Digite a medida A: ");
    scanf("%f", &A);
    printf("Digite a medida B: ");
    scanf("%f", &B);
    printf("Digite a medida C: ");
    scanf("%f", &C);

    areaQuadrado = pow(A, 2);
    areaTriangulo = (A * B) / 2;
    areaTrapezio = ((A + B) * C) / 2;

    printf("AREA DO QUADRADO: %.2f\n", areaQuadrado);
    printf("AREA DO TRIANGULO: %.2f\n", areaTriangulo);
    printf("AREA DO TRAPEZIO: %.2f\n", areaTrapezio);

    return 0;
}
