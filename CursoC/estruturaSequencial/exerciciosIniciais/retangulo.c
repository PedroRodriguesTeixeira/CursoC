#include <stdio.h>
#include <math.h>

/*Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor
da área, perímetro e diagonal deste retângulo, com quatro casas decimais, conforme exemplos.*/

int main() {
    double base, altura, perimetro, diagonal, area;

    printf("DIGITE A BASE DO RETANGULO:");
    scanf("%lf", &base);
    printf("DIGITE A ALTURA DO RETANGULO:");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

    printf("A AREA = %.4lf\n", area);
    printf("O PERIMETRO = %.4lf\n", perimetro);
    printf("A DIAGONAL = %.4lf\n", diagonal);

    return 0;
}

