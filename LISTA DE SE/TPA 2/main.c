#include <stdio.h>

int main(void) {
  // Var
  int idd;

  // Display
  printf("Você é menor de idade?\nDigite a sua idade: ");
  scanf("%d", &idd);

  //Case
  if (idd > 17) {
    printf("Você é maior de idade!");
  }else{
    printf("Você é menor de idade!");
  }
}