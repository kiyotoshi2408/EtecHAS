#include <stdio.h>

int main(void) {
  float salario;
  float inss;
  float ir;

  printf("Insira seu salario: ");
  scanf("%f", &salario);

  // IR
  if (salario <= 1710.78) {
    ir = 0;
  }else{
    if (salario <= 2563.91) {
      ir = salario * 7.5 / 100;
    }else {
      if (salario <= 3418.59) {
        ir = salario * 15 / 100;
      }else{
        if (salario <= 4271.59) {
          ir = salario * 22.5 / 100;
        }else {
          ir = salario * 27.5 / 100;
        }
      }
    }
  }

  // INSS
  if (salario <= 1247.70) {
    inss = salario * 8 / 100;
  }else{
    if (salario <= 2079.50) {
      inss = salario * 9 / 100;
    }else {
      if (salario <= 4159.00) {
        inss = salario * 11 / 100;
      }else {
        inss = 468.00;
      }
    }  
  }

  // Salario Liquido
  float liquido = salario - inss - ir; 
  
  printf("Salario Bruto: %.2f, INSS: %.2f, IR: %.2f, Salario Liquido: %.2f", salario, inss, ir, liquido );
  
  return 0;
}