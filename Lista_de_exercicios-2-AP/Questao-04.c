#include <stdio.h>

int main() {
	float nota1, nota2, media;
	
	printf("Insira a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Insira a segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	printf("Media final: %.2f\n", media);
	
	if(media >=7) {
		printf("O aluno foi aprovado!\n");
	}else {
		printf("O aluno reprovou!\n");
	}
	
	return 0;
}
