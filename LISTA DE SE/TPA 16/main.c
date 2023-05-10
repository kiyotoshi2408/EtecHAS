#include <stdio.h>
#include <stdlib.h>

int idade, sexo;
float salario;

void separator() {
  for (int i = 0; i < 30; i++) {
    printf("=");
  }
}
int main(void) {
  separator();
  
  printf("\nInsira seu salário: ");
  scanf("%f", &salario);
  printf("Insira sua idade: ");
  scanf("%d", &idade);
  printf("Insira seu sexo [1 - Masculino, 2 - Feminino]: ");
  scanf("%d", &sexo);

  system("clear");
  separator();

  if (sexo == 1) {
    if (idade <= 20) {
      salario = salario * 5.34 / 100;
    }
    else if (idade <= 40) {
      salario = salario * 8.44 / 100;
    }else{
      salario = salario * 10.12 / 100;
    }
  }
  else if (sexo == 2) {
    if (idade <= 20) {
      salario = salario * 3.56 / 100;
    }
    else if (idade <= 40) {
      salario = salario * 6.43 / 100;
    }else{
      salario = salario * 8.02 / 100;
    }
  }
  else {
    printf("\nErro!");
  }
  printf("\nValor do convenio: %.2f", salario);
  
  return 0;
}