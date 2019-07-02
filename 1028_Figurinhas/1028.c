#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int CalculaMDC(int, int);

int main(){
	int ocorrencias, F1, F2, qtdFigurinhas, cont;
	
	scanf("%d", &ocorrencias);
	
	for(cont = 0; cont < ocorrencias; cont++)
	{
		scanf("%d %d", &F1, &F2);
		
		qtdFigurinhas = CalculaMDC(F1, F2);
	
		printf("%d\n", qtdFigurinhas);	
	}

return 0;
}

int CalculaMDC(int m, int n){
		
	if(m < 0) m = -m;
	if(n < 0) n = -n;
	
	if( m % n == 0)
		return n;
	else
		return CalculaMDC(n, m % n);
}