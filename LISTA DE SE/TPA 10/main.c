#include <stdio.h>

int main(void) {
  // Var
  float num_a;
  float num_b;
  float num_c;

  // Intro
  printf("Insira o primeiro número: ");
  scanf("%f", &num_a);
  printf("Insira o primeiro número: ");
  scanf("%f", &num_b);
  printf("Insira o primeiro número: ");
  scanf("%f", &num_c);
 
  // Calc
  if (num_a > num_b && num_a > num_c) {
    printf("%.2f é o maior número", num_a);
  }else{
    if (num_c > num_a && num_c > num_b) {
      printf("%.2f é o maior número", num_c);
    }else{
      printf("%.2f é o maior número", num_b);
    }
  }
  
  return 0;
}