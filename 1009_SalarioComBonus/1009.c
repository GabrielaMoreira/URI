#include<stdio.h>

int main(){
	char nome[25];
	double salarioInicial, vendas, salarioFinal;
	
	scanf("%s", nome);
	scanf("%lf", &salarioInicial);	
	scanf("%lf", &vendas);
	
	salarioFinal = (vendas * 0.15) + salarioInicial;
	
	printf("TOTAL = R$ %.2lf\n", salarioFinal);

	return 0;
}