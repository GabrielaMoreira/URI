#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main(){
	int tempoViagem, velocidade;
	double quantidadeCombustivel;
			
	scanf("%d %d", &tempoViagem, &velocidade);
	quantidadeCombustivel = (tempoViagem * velocidade) / 12.0;
	printf("%.3lf\n", quantidadeCombustivel);
	
return 0;
}