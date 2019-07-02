#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

#define TRUE	0
#define FALSE	1

int main(){
	double a, b, c, delta, raiz1, raiz2, valido;
	
	valido = TRUE;	
	scanf("%lf %lf %lf", &a, &b, &c);	
	
	if(a > 0)
	{
		delta = pow(b, 2) - (4 * a * c);
		
		if(delta >=0)
		{
			raiz1 = (-b + sqrt(delta))/(2*a);
			raiz2 = (-b - sqrt(delta))/(2*a);
		}
		else
			valido = FALSE;		
	}
	else
		valido = FALSE;
		
	if(valido == FALSE)
		printf("Impossivel calcular\n");
	else
		printf("R1 = %.5lf\nR2 = %.5lf\n", raiz1, raiz2);
}