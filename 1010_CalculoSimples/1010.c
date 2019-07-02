#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main(){
	int codPeca, qtdPeca, cont;
	double precoPeca, total;
	
	total = 0;
	
	for(cont = 0; cont < 2; cont++)
	{
		scanf("%d %d %lf", &codPeca, &qtdPeca, &precoPeca);
		total = total + qtdPeca * precoPeca;
	}
	
	printf("VALOR A PAGAR: R$ %.2lf\n", total);
	
return 0;
}