#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int comparaSort(const void *, const void *);

int main(){
	int numeros[4], numerosCopia[4];
	int cont;
	
	for(cont = 0; cont < 3; cont++)
		scanf("%d", &numeros[cont]);
	numeros[4] = '\0';
	
	for(cont = 0; cont < 4; cont++)
		numerosCopia[cont] = numeros[cont];
	
	qsort(numeros, 3, sizeof(int), comparaSort);
	
	for(cont = 0; cont < 3; cont++)
		printf("%d\n", numeros[cont]);
	
	puts("");
	
	for(cont = 0; cont < 3; cont++)
		printf("%d\n", numerosCopia[cont]);
	
	
return 0;
}

int comparaSort(const void *p1, const void *p2){
	int *i = (int *)p1, *j = (int *)p2;
	
	if(*i < *j)
		return -1;
	else 
		if(*i == *j)
			return 0;
		else
			return 1;
}