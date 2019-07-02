#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main(){
	int tempoInicial, segundos, minutos, horas, auxValor;
	
	scanf("%d", &tempoInicial);
	auxValor = tempoInicial;
	
	horas = auxValor / 3600; auxValor = auxValor - horas * 3600;
	minutos = auxValor / 60;
	segundos = auxValor % 60; 
	
	printf("%d:%d:%d\n", horas, minutos, segundos);
	
return 0;
}