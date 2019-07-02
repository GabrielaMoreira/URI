#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int MDC(int, int);

int main(){
	int ocorrencias, cont, denominador1, numerador1, denominador2, numerador2, respNumerador, respDenominador, respDenominadorS, respNumeradorS ;
	char operador;
	
	scanf("%d", &ocorrencias);
	
	for(cont = 0; cont < ocorrencias; cont++)
	{
		scanf("%d / %d", &numerador1, &denominador1);
		scanf(" %c", &operador);
		scanf("%d / %d", &numerador2, &denominador2);
		
		
		if(operador == '+')
		{
			respNumerador = (numerador1 * denominador2 + numerador2 * denominador1);
			respDenominador = denominador1 * denominador2;
		}
		if(operador == '-')
		{
			respNumerador = (numerador1 * denominador2 - numerador2 * denominador1);
			respDenominador = denominador1 * denominador2;
		}
		if(operador == '*')
		{
			respNumerador = numerador1 * numerador2;
			respDenominador = denominador1 * denominador2;
		}
		if(operador == '/')
		{
			respNumerador = numerador1 * denominador2;
			respDenominador = numerador2 * denominador1;
		}
		
		respNumeradorS = respNumerador / MDC(respNumerador, respDenominador);
		respDenominadorS = respDenominador / MDC(respNumerador, respDenominador);
		
		printf("%d/%d = %d/%d\n", respNumerador, respDenominador, respNumeradorS, respDenominadorS);
	}


return 0;
}


int MDC(int n, int m){
	
	if(n < 0) n = -n;
	if(m < 0) m = -m;
	
	if(n % m == 0)
		return m;
	else
		return MDC(m, n % m);

}

