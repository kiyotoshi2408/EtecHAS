#include <stdio.h>

int main(void) {
  // Var
  float av1;
  float av2;
  float av3;

  // Intro
  printf("Digite o primeiro número: ");
  scanf("%f", &av1);
  printf("Digite o segundo número: ");
  scanf("%f", &av2);
  printf("Digite o terceiro número: ");
  scanf("%f", &av3);

  // Calc
  float media_a = av1 + av2 + av3;
  media_a = media_a / 3;

  // Case
  if (media_a > 5) {
    printf("Você está aprovado!");
  }else{
    printf("Você reprovou!");
  }
  return 0;
}