#include <stdio.h>

int main() {
	int num1, num2;
	
	printf("Insira o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Insira o segundo numero: ");
	scanf("%d", &num2);
	
	if(num1 > num2) {
		printf("Os numeros em ordem crescente: %d, %d", num2, num1);
	}else {
		printf("Os numeros em ordem crescente: %d, %d", num1, num2);
	}
	
	return 0;
}
