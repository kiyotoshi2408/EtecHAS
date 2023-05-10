#include <stdio.h>

int main(void) {
	// Var
	int nota_a;
	int nota_b;
	
	// Code
	printf("Digite sua primeira nota: ");
	scanf("%d", &nota_a);
	printf("Digite sua segunda nota: ");
	scanf("%d", &nota_b);
	
	// Calc
	float media_a = nota_a + nota_b;
	float media_b = media_a / 2;
	
	// Case
	if ((nota_a <= 10) && (nota_b <= 10)) {
		printf("Sua media eh de: %.2f", media_b);
		if (media_b > 5) {
			printf("\nvocê está aprovado :)");	
		}else{
			printf("\nvocê reprovou :(");
		}
	}else{
		printf("nota invalida ");
	};
	
	return 0;

}