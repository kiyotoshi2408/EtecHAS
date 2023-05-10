#include <stdio.h>

int main(void) {
  float nmm;

  printf("== Verificador de Número ==\nDigite o número: ");
  scanf("%f", &nmm);

  if (nmm >= 0) {
    printf("O número é positivo");
  }else{
    printf("O número não é positivo");
  };
  
  return 0;
}