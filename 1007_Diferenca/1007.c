#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main(){
	int valorA, valorB, valorC, valorD, diferenca;
	
	scanf("%d %d %d %d", &valorA, &valorB, &valorC, &valorD);
	diferenca = valorA * valorB - valorC * valorD;
	printf("DIFERENCA = %d\n", diferenca);
	
return 0;
}