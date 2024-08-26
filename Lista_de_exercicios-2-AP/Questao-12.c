#include <stdio.h>

int main() {
	int num_conta;
	float saldo, debito, credito, saldo_atual;
	
	printf("Insira o numero da conta: ");
	scanf("%d", &num_conta);
	
	printf("Insira o saldo da conta: ");
	scanf("%f", &saldo);
	
	printf("Insira o debito da conta: ");
	scanf("%f", &debito);
	
	printf("Insira o credito da conta: ");
	scanf("%f", &credito);
	
	saldo_atual = saldo - debito + credito;
	
	printf("Saldo atual da conta %d: R$%.2f\n", num_conta, saldo_atual);
	
	if(saldo_atual >= 0) {
		printf("Saldo Positivo.");
	}else {
		printf("Saldo Negativo.");
	}
	
	return 0;
}
