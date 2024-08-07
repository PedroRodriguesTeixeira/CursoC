#include <stdio.h>

int main() {
    int num1, num2;

    do {
        printf("DIGITE DOIS NUMEROS: ");
        scanf("%d %d", &num1, &num2);
        if (num1 > num2) {
            printf("DECRESCENTE\n");
        } else if (num1 < num2) {
            printf("CRESCENTE\n");
        }
    } while (num1 != num2);

    return 0;
}
