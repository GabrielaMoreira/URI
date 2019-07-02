#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main(){
	int valorA, valorB, valorC, maior;
		
	scanf("%d %d %d", &valorA, &valorB, &valorC);
	
	maior = (valorA + valorB + abs(valorA - valorB))/2;
	maior = (maior + valorC + abs(maior - valorC))/2;
	
	printf("%d eh o maior\n", maior);
	
return 0;
}