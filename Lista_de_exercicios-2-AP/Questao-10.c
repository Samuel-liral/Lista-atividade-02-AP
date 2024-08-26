#include <stdio.h>

int main() {
	char nome[50];
	float altura, peso_ideal;
	char sexo;
	
	printf("Insira o nome da pessoa: ");
	scanf("%s", &nome);
	
	printf("Insira a altura da pessoa (Metros): ");
	scanf("%f", &altura);
	
	printf("Insira o sexo da pessoa (M ou F): ");
	scanf(" %c", &sexo);
	
	if(sexo == 'M' || sexo == 'm') {
		peso_ideal = (72.7 * altura) - 58;
	}else if (sexo == 'F' || sexo == 'f') {
		peso_ideal = (62.1 * altura) - 44.7;
	}else {
		printf("Sexo Invalido.");
		return 1;
	}
	
	printf("%s, seu peso ideal e: %.2f kg\n", nome, peso_ideal);
	
	return 0;
}
