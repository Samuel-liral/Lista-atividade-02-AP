#include <stdio.h>

int main() {
	int num;
	
	printf("Insira um numero: ");
	scanf("%d", &num);
	
	if(num > 10) {
		printf("E maior que 10!");
	}else {
		printf("Nao e maior que 10!");
	}
	
	return 0;
}
