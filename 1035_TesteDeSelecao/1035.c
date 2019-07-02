#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

#define TRUE	0
#define FALSE	1

int main(){
	int valorA, valorB, valorC, valorD, valido;
	valido = TRUE;
	
	scanf("%d %d %d %d", &valorA, &valorB, &valorC, &valorD);
	
	if(valorB <= valorC)
		valido = FALSE;
	if(valorD <= valorA)
		valido = FALSE;
	if((valorC + valorD) <= (valorA + valorB))
		valido = FALSE;
	if(valorC < 0)
		valido = FALSE;
	if(valorD < 0)
		valido = FALSE;
	if(valorA % 2 != 0)
		valido = FALSE;
	
	if(valido == FALSE)
		printf("Valores nao aceitos\n");
	else
		printf("Valores aceitos\n");	

return 0;
}