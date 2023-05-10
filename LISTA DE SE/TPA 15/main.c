#include <stdio.h>
#include <stdlib.h>

void separator() {
  for (int i = 0; i < 30; i++) {
    printf("=");
  }
}
int main(void) {
  float numero, numero_a, numero_b;

  separator();
  
  printf("\nInsira o primeiro número: ");
  scanf("%f", &numero);
  printf("Insira o segundo número: ");
  scanf("%f", &numero_a);
  printf("Insira o terceiro número: ");
  scanf("%f", &numero_b);

  system("clear");
  separator();
  
  if (numero == numero_a && numero == numero_b) {
    printf("\nTodos os números são iguais");
  }else if (numero == numero_a || numero == numero_b) {
    printf("\nApenas 2 números são iguais");
  }else if (numero_a == numero || numero_a == numero_b) {
    printf("\nApenas 2 números são iguais");
  }else if (numero_b == numero || numero_b == numero_a) {
    printf("\nApenas 2 números são iguais");
  }else{
    printf("\nNenhum dos números são iguais");
  }
  
  return 0;
}