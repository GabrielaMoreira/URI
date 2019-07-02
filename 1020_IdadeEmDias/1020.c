#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main(){
	int idadeInicial, ano, mes, dia, auxValor;
	
	scanf("%d", &idadeInicial);
	auxValor = idadeInicial;
	
	ano = auxValor / 365; auxValor = auxValor - ano * 365;
	mes = auxValor / 30;
	dia = auxValor % 30; 
	
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
	
return 0;
}