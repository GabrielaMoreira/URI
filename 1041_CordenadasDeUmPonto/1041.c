#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main(){
	float pontoA, pontoB;
	
	scanf("%f %f", &pontoA, &pontoB);
	
	if(pontoA == 0 && pontoB == 0)
		puts("Origem");
	if(pontoA == 0 && pontoB != 0)
		puts("Eixo Y");
	if(pontoB == 0 && pontoA != 0)
		puts("Eixo X");
	if(pontoA > 0 && pontoB > 0)
		puts("Q1");
	if(pontoA < 0 && pontoB > 0)
		puts("Q2");
	if(pontoA < 0 && pontoB < 0)
		puts("Q3");
	if(pontoA > 0 && pontoB < 0)
		puts("Q4");

return 0;
}