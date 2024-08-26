#include <stdio.h>

int main() {
	int quantidade;
	float preco, total_compra;
	
	printf("Quantas macas foram compradas? ");
	scanf("%d", &quantidade);
	
	if(quantidade < 12) {
		preco = 1.30;
	}else {
		preco = 1.00;
	}
	
	total_compra = quantidade * preco;
	
	printf("O custo total da compra e: R$%.2f\n", total_compra);
	
	return 0;
}
