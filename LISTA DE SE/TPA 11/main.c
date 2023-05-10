#include <stdio.h>

int main(void) {
  // Var
  float salario;
  float calc;
  
  // Intro
  printf("Digite seu salario: ");
  scanf("%f", &salario);

  // Calc
  if (salario <= 1247.70) {
    calc = salario * 8 / 100;
  }else{
    if (salario <= 2079.50) {
      calc = salario * 9 / 100;
    }else {
      if (salario <= 4159.00) {
        calc = salario * 11 / 100;
      }else {
        calc = 468.00;
      }
    }  
  }

  // Display
  printf("você irá pagar: R$%.2f", calc);
  
  return 0;
}