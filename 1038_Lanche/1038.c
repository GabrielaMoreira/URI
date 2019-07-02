#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main(){
	int codigo, quantidade;
	double totalPagar;
	
	scanf("%d %d", &codigo, &quantidade);
	
	if(codigo == 1)
		totalPagar = quantidade * 4;
	if(codigo == 2)
		totalPagar = quantidade * 4.50;
	if(codigo == 3)
		totalPagar = quantidade * 5;
	if(codigo == 4)
		totalPagar = quantidade * 2;
	if(codigo == 5)
		totalPagar = quantidade * 1.50;
		
	printf("Total: R$ %.2lf\n", totalPagar);
	
return 0;
}