#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float num_a, num_b, num_c; 

  printf("Insira o primeiro numero: ");
  scanf("%f", &num_a);
  printf("Insira o segundo numero: ");
  scanf("%f", &num_b);
  printf("Insira o terceiro numero: ");
  scanf("%f", &num_c);

  system("clear");
  
  if (num_a <= num_b && num_a <= num_a <= num_c) {
    if (num_b <= num_c) {
      printf("%.2f, %.2f, %.2f", num_a, num_b, num_c);
    }else{
      printf("%.2f, %.2f, %.2f", num_a, num_c, num_b);
    }
  }else if (num_b <= num_a && num_b <= num_c) {
    if (num_a <= num_c) {
      printf("%.2f, %.2f, %.2f", num_b, num_a, num_c);
    }else {
      printf("%.2f, %.2f, %.2f", num_b, num_c, num_a);
    }
  }else {
    if (num_a <= num_b) {
      printf("%.2f, %.2f, %.2f", num_c, num_a, num_b);
    }else {
      printf("%.2f, %.2f, %.2f", num_c, num_b, num_a);
    }
  }
  
  return 0;
}