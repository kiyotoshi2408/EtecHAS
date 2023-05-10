#include <stdio.h>

int main(void) {
  float prova1, prova2, atividade1, atividade2, atividade3, atividade4, media_provas, media_total;
  printf("Digite a nota da prova 1: ");
  scanf("%f", &prova1);
  printf("Digite a nota da prova 2: ");
  scanf("%f", &prova2);
  printf("Digite a nota da atividade 1: ");
  scanf("%f", &atividade1);
  printf("Digite a nota da atividade 2: ");
  scanf("%f", &atividade2);
  printf("Digite a nota da atividade 3: ");
  scanf("%f", &atividade3);
  printf("Digite a nota da atividade 4: ");
  scanf("%f", &atividade4);

  // Cálculo da média das provas
  media_provas = (prova1 + prova2) / 2;

  // Cálculo da média total
  media_total = (media_provas * 0.6) + atividade1 + atividade2 + atividade3 + atividade4;

  printf("AV1 = %.1f, ", media_total);

  if (media_total > 6.0) {
    printf("você está acima da média.");
  } else if (media_total < 6.0) {
    printf("você está abaixo da média.");
  } else {
    printf("você está na média.");
  }

  return 0;
}
