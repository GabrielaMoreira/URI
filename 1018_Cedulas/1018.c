#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main(){
	int valorSaque, nota100, nota50, nota20, nota10, nota5, nota2, nota1, auxValor;
	
	scanf("%d", &valorSaque);
	auxValor = valorSaque;
	
	nota100 = auxValor/100; auxValor = auxValor - nota100 * 100;
	nota50 = auxValor/50; auxValor = auxValor - nota50 * 50;
	nota20 = auxValor/20; auxValor = auxValor - nota20 * 20;
	nota10 = auxValor/10; auxValor = auxValor - nota10 * 10;
	nota5 = auxValor/5; auxValor = auxValor - nota5 * 5;
	nota2 = auxValor/2; auxValor = auxValor - nota2 * 2;
	nota1 = auxValor/1; auxValor = auxValor - nota1 * 1;
	
	printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", valorSaque, nota100, nota50, nota20, nota10, nota5, nota2, nota1);
return 0;
}