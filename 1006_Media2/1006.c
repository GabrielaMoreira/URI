#include<stdio.h>

int main(){
	double notaA, notaB, notaC, media;
	
	scanf("%lf", &notaA);		
	
	if(notaA>=0 && notaA<=10){
		scanf("%lf", &notaB);
		if(notaB>=0 && notaB<=10){
			scanf("%lf", &notaC);
			if(notaC>=0 && notaC<=10){
				media = (notaA*2 + notaB*3 + notaC*5)/10;
				printf("MEDIA = %.1lf\n", media);
			}
		}
	}
	
	return 0;

}