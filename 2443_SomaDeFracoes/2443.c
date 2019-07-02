#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int MDC(int, int);

int main(){
	int numerador1, numerador2, denominador1, denominador2, respNum, respDen, respNumS, respDenS ;
	
	scanf("%d %d %d %d", &numerador1, &denominador1, &numerador2, &denominador2);
	
	
	if(denominador1 != denominador2)
	{
		respNum = (numerador1 * denominador2) + (numerador2 * denominador1);
		respDen = denominador1 * denominador2;
	}		
	else
	{
		respNum = numerador1 + numerador2;
		respDen = denominador1;
	}
		
	respNumS = respNum / MDC(respNum, respDen);
	respDenS = respDen / MDC(respNum, respDen);
	
	printf("%d %d\n", respNumS, respDenS);

return 0;
}

int MDC(int n, int d){
	
	if(n < 0) n = -n;
	if(d < 0) d = -d;
	
	if(n % d == 0)
		return d;
	else
		return MDC(d, n % d);
}