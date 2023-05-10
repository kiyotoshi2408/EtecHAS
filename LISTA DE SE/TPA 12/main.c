#include <stdio.h>

int main(void) {
  // Var
  float salario;

  // Intro
  printf("Insira seu salario: ");
  scanf("%f", &salario);

  // Case
  if (salario <= 1710.78) {
    salario = 0;
  }else{
    if (salario <= 2563.91) {
      salario = salario * 7.5 / 100;
      salario = salario - 128.31;
    }else {
      if (salario <= 3418.59) {
        salario = salario * 15 / 100;
        salario = salario - 320.60;
      }else{
        if (salario <= 4271.59) {
          salario = salario * 22.5 / 100;
          salario = salario - 577.00;
        }else {
          salario = salario * 27.5 / 100;
          salario = salario - 790.58;
        }
      }
    }
  }

  // Display
  printf("Você irá pagar: R$%.2f", salario);
  
  return 0;
}