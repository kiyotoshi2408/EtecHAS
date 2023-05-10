#include <stdio.h>

int main(void) {
  // Var
  float nota_a;
  float nota_b;

  // Intro
  printf("Insira a primeira nota: ");
  scanf("%f", &nota_a);
  printf("Insira a segunda nota: ");
  scanf("%f", &nota_b);

  // Calc
  float media_a = nota_a + nota_b;
  float media_b = media_a / 2;

  // Case
  if (media_b > 5) {
    printf("Você está aprovado");  
  }else{
    printf("Você reprovou");
  }

  return 0;
}