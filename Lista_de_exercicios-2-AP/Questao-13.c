#include <stdio.h>

int main() {
	int quantidade_atual, quantidade_maxima, quantidade_minima, quantidade_media;
	
	printf("Insira a quantidade atual em estoque: ");
	scanf("%d", &quantidade_atual);
	
	printf("Insira a quantidade maxima em estoque: ");
	scanf("%d", &quantidade_maxima);
	
	printf("Insira a quantidade minima em estoque: ");
	scanf("%d", &quantidade_minima);
	
	quantidade_media = (quantidade_maxima + quantidade_minima) / 2;
	
	printf("A quantidade media e de: %d\n", quantidade_media);
	
	if(quantidade_atual >= quantidade_media) {
		printf("Nao efetuar compra.");
	}else {
		printf("Efetuar compra.");
	}
	
	return 0;
}
