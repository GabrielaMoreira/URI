#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main(){
	double valorA, valorB, total;
	
	scanf("%lf %lf", &valorA, &valorB);
	total = valorA * (3.5/11) + valorB * (7.5/11);	
	printf("MEDIA = %.5lf\n", total);
	
return 0;
}