#include <stdio.h>

int main() {
	float h_trab, salario_h, salario_total, h_extra, salario_extra;
	const int h_semana = 40;
	const int semana_mes = 4;
	
	printf("Insira as horas trabalhadas: ");
	scanf("%f", &h_trab);
	
	printf("Insira o valor do salario por hora trabalhada: ");
	scanf("%f", &salario_h);
	
	if(h_trab > h_semana * semana_mes) {
		h_extra = h_trab - (h_semana * semana_mes);
	}else {
		h_extra = 0;
	}
	
	salario_extra = h_extra * (salario_h * 1.5);
	
	salario_total = (h_trab - h_extra) * salario_h + salario_extra;
	
	printf("O salario total do funcionario e de: R$%.2f\n", salario_total);
	
	return 0;
}
