#include <stdio.h>

int main (void){

    double c, f;
    char resp;

    do{
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &c);
        f = 9.0 * c / 5.0 + 32.0;
        printf("O equivalente em fahrenheit: %.1lf\n", f);
        printf("Deseja repetir (s/n): ");
        fflush(stdin);
        scanf("%c", &resp);
    } while (resp == 's');


    return 0;
}
