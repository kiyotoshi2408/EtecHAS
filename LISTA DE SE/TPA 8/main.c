#include <stdio.h>

int main(void) {
  // Var
  float num;
  
  // Intro
  printf("Seu número é positivo?\nDigite aqui: ");
  scanf("%f", &num);

  // Case
  if (num > 0) {
    printf("Seu número é positivo!");
  }else{
    if (num == 0) {
      printf("Seu número é nulo!");
    }else{
      printf("Seu número é negativo!");
    }
  }
  
  return 0;
}