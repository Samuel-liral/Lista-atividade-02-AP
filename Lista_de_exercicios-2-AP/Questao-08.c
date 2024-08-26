#include <stdio.h>

int main() {
	int hora_i, hora_f, duracao;
	
	printf("Insira a hora de inicio da partida (0-23): ");
	scanf("%d", &hora_i);
	
	printf("Insira a hora do fim da partida (0-23): ");
	scanf("%d", &hora_f);
	
	if(hora_f >= hora_i) {
		duracao = hora_f - hora_i;
	}else {
		duracao = (24 - hora_i) + hora_f;
	}
	
	if(duracao == 0) {
		duracao = 24;
	}
	
	printf("A duracao da partida foi de %dh.\n", duracao);
	
	return 0;
}
