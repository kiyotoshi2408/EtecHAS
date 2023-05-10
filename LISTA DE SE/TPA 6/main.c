#include <stdio.h>

int main(void) {
  // Var
  float nota;

  // Intro
  printf("Sua nota é valida?\nDigite sua nota: ");
  scanf("%f", &nota);

  // Case
  if (nota > 10) {
    printf("Nota invalida!");
  }else{
    printf("Nota Valida!");
  }

  return 0;
}