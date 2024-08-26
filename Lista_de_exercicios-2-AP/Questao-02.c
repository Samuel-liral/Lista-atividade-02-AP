#include <stdio.h>

int main() {
	int num;
	
	printf("Insira um numero: ");
	scanf("%d", &num);
	
	if(num >= 0) {
		printf("O numero e positivo! ");
	}else {
		printf("O numero e negativo! ");
	}
	
	return 0;
}

