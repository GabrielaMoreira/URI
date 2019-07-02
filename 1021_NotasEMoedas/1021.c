#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main(){
	int nota100, nota50, nota20, nota10, nota5, nota2, moeda100, moeda50, moeda25, moeda10, moeda5, auxValorNota;
	double valorSaque, auxValorMoeda, moeda1;
	
	scanf("%lf", &valorSaque);
	auxValorNota = valorSaque;
	auxValorMoeda = (valorSaque * 100) - (auxValorNota * 100);
	
	nota100 = auxValorNota / 100; 	auxValorNota = auxValorNota - nota100 * 100;
	nota50 = auxValorNota / 50; 	auxValorNota = auxValorNota - nota50 * 50;
	nota20 = auxValorNota / 20; 	auxValorNota = auxValorNota - nota20 * 20;
	nota10 = auxValorNota / 10; 	auxValorNota = auxValorNota - nota10 * 10;
	nota5 = auxValorNota / 5; 		auxValorNota = auxValorNota - nota5 * 5;
	nota2 = auxValorNota / 2; 		auxValorNota = auxValorNota - nota2 * 2;	
	moeda100 = auxValorNota;		auxValorNota = auxValorNota - moeda100;
		
	moeda50 = auxValorMoeda / 50; 	auxValorMoeda = auxValorMoeda - moeda50 * 50;
	moeda25 = auxValorMoeda / 25; 	auxValorMoeda = auxValorMoeda - moeda25 * 25;
	moeda10 = auxValorMoeda / 10; 	auxValorMoeda = auxValorMoeda - moeda10 * 10;
	moeda5 = auxValorMoeda / 5; 	auxValorMoeda = auxValorMoeda - moeda5 * 5;
	moeda1 = auxValorMoeda; 		auxValorMoeda = auxValorMoeda - moeda1; 
	
	
	printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", nota100, nota50, nota20, nota10, nota5, nota2);
	
	printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%.0lf moeda(s) de R$ 0.01\n", moeda100, moeda50, moeda25, moeda10, moeda5, moeda1);
return 0;
}