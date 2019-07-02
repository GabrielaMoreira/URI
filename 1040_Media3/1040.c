#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main(){
	double notaA, notaB, notaC, notaD, notaE, mediaFinal;
	
	scanf("%lf %lf %lf %lf", &notaA, &notaB, &notaC, &notaD);
	
	mediaFinal = notaA * 0.2 + notaB * 0.3 + notaC * 0.4 + notaD * 0.1;	
	printf("Media: %.1lf\n", mediaFinal);
	
	if(mediaFinal < 5.0)
		printf("Aluno reprovado.\n");
	else
		if(mediaFinal <= 6.9)
		{
			printf("Aluno em exame.\n");
			
			scanf("%lf", &notaE);
			printf("Nota do exame: %.1lf\n", notaE);
			
			mediaFinal = (mediaFinal + notaE)/2;
			
			if(mediaFinal >= 5.0)				
				printf("Aluno aprovado.\n");
			else
				printf("Aluno reprovado.\n");
			
			printf("Media final: %.1lf\n", mediaFinal);
		}			
		else
			printf("Aluno aprovado.\n");

return 0;
}