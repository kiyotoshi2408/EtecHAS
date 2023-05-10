#include <stdio.h>

int main(void) {
  int npi;
  
  printf("== Verificador de números pares e ímpares ==\nDigite o número: ");
  scanf("%d", &npi);

  if (npi % 2 == 0) {
        printf("%d é um número par.\n", npi);
    } else {
        printf("%d é um número ímpar.\n", npi);
    }
  
  return 0;
}