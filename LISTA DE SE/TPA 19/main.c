#include <stdio.h>

int main(void) {
    float lado1, lado2, lado3;

    printf("Digite o valor do primeiro numero: ");
    scanf("%f", &lado1);

    printf("Digite o valor do segundo numero: ");
    scanf("%f", &lado2);

    printf("Digite o valor do terceiro numero: ");
    scanf("%f", &lado3);

    if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2) {
        printf("Forma um triangulo\n");
    } else {
        printf("Não forma um triangulo\n");
    }

    return 0;
}
