#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main(){
	int numeroFuncionario, horasTrabalhadas;
	double salarioHora, salarioTotal;
	
	scanf("%d %d %lf", &numeroFuncionario, &horasTrabalhadas, &salarioHora);
	salarioTotal = salarioHora * horasTrabalhadas;
	printf("NUMBER = %d\nSALARY = U$ %.2lf\n", numeroFuncionario, salarioTotal);
	
return 0;
}