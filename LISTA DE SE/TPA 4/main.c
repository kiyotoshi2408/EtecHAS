#include <stdio.h>

int main(void) {
  // Var
  float num_a;
  float num_b;

  // Code
  printf("Insira o primeiro valor: ");
  scanf("%f", &num_a);
  printf("Insira o segundo valor: ");
  scanf("%f", &num_b);

  // Case
  if (num_a > num_b) {
    printf("%.2f é maior que %.2f", num_a, num_b);
  }else{
    printf("%.2f é maior que %.2f", num_b, num_a);
  }

  return 0;
}