#include <stdio.h>

int main() {
	int ano_atual, ano_nasc, idade;
	
	printf("Insira o ano atual: ");
	scanf("%d", &ano_atual);
	
	printf("Insira o seu ano de nascimento: ");
	scanf("%d", &ano_nasc);
	
	idade = ano_atual - ano_nasc;
	
	if(idade >= 16) {
		printf("Voce poderia votar neste ano!");
	}else {
		printf("Voce nao pode votar ainda!");
	}
	
	return 0;
}
