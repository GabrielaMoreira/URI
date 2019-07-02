#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main(){
	double valorA, valorB, valorC;
	double areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;
	
	scanf("%lf %lf %lf", &valorA, &valorB, &valorC);
	
	areaTriangulo = (valorA * valorC) / 2;
	areaCirculo = pow(valorC, 2) * 3.14159;
	areaTrapezio = ((valorA + valorB) * valorC) / 2;
	areaQuadrado =  pow(valorB, 2);
	areaRetangulo = valorA * valorB;
	
	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo);
	
return 0;
}