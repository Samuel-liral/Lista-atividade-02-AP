#include <stdio.h>

int main() {
	float salario_f, vendas, comissao, salario_t;
	const float limite_v = 1500.00;
	const float comissao_ate_l = 0.03;
	const float comissao_acima_l = 0.05;
	
	printf("Insira o salario fixo: R$");
	scanf("%f", &salario_f);
	
	printf("Insira o valor total das vendas: R$");
	scanf("%f", &vendas);
	
	if(vendas <= limite_v) {
		comissao = vendas * comissao_ate_l;
	}else {
		comissao = (limite_v * comissao_ate_l) + ((vendas - limite_v) * comissao_acima_l);
	}
	
	salario_t = salario_f + comissao;
	
	printf("O salario total e de: R$%.2f\n", salario_t);
	
	return 0;
}
