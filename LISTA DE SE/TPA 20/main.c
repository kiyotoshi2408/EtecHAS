#include <stdio.h>

int main(void) {
    float a, b, c;
    printf("Digite o valor do primeiro lado: ");
    scanf("%f", &a);
    printf("Digite o valor do segundo lado: ");
    scanf("%f", &b);
    printf("Digite o valor do terceiro lado: ");
    scanf("%f", &c);

    if ((a+b>c) && (a+c>b) && (b+c>a)) { 
        if (a==b && b==c) { 
            printf("Os valores formam um triangulo equilatero.\n");
        } else if (a==b || a==c || b==c) { 
            printf("Os valores formam um triangulo isosceles.\n");
        } else { 
            printf("Os valores formam um triangulo escaleno.\n");
        }
    } else {
        printf("Nao forma um triangulo.\n");
    }
    return 0;
}
