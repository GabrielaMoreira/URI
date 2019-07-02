#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main(){
	int quilometros;
	double combustivel, consumo;
		
	scanf("%d %lf", &quilometros, &combustivel);
	
	consumo = quilometros / combustivel;
	
	printf("%.3lf km/l\n", consumo);
	
return 0;
}