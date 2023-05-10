#include <stdio.h>

int main(void) {
    int n1, n2, n3;
    
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 != n2 && n1 != n3 && n2 != n3) {
        if (n1 > n2 && n1 > n3) {
            if (n2 > n3) {
                printf("O numero intermediario eh %d\n", n2);
            } else {
                printf("O numero intermediario eh %d\n", n3);
            }
        } else if (n2 > n1 && n2 > n3) {
            if (n1 > n3) {
                printf("O numero intermediario eh %d\n", n1);
            } else {
                printf("O numero intermediario eh %d\n", n3);
            }
        } else {
            if (n1 > n2) {
                printf("O numero intermediario eh %d\n", n1);
            } else {
                printf("O numero intermediario eh %d\n", n2);
            }
        }
    } else {
        printf("Os numeros nao sao diferentes\n");
    }

    return 0;
}
