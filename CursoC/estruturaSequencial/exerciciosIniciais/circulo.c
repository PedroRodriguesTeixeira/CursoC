#include <stdio.h>
#include <math.h>

/*Fazer um programa para ler o valor "r" do raio de um círculo, e depois mostrar o valor da área do
círculo com três casas decimais. A fórmula da área do círculo é a seguinte: 𝑎𝑟𝑒𝑎 = 𝜋. 𝑟ଶ. Você pode
usar o valor de 𝜋 fornecido pela biblioteca da sua linguagem de programação, ou então, se preferir, use
diretamente o valor 3.14159.*/

int main() {

    float area, r, p;


    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &r);


    p = M_PI;


    area = p * pow(r, 2);


    printf("O valor da area e: %.3f\n", area);

    return 0;
}
