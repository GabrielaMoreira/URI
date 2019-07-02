#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

#define	TRUE	0
#define	FALSE	1

int main(){
	int alunoJantar[500][100]; 
	int nAluno, nJantar, cont1, cont2, qtdjantarPresente, flag;
	
	while(scanf("%d %d", &nAluno, &nJantar), (nAluno != 0 && nJantar != 0) )
	{
		for(cont1 = 0; cont1 < nJantar; cont1++)
		{
			for(cont2 = 0; cont2 < nAluno; cont2++)
			{
				scanf("%d", &alunoJantar[cont1][cont2]);
			}
		}	
					
		for(cont2 = 0; cont2 < nAluno; cont2 ++)
		{
			flag = FALSE;
			qtdjantarPresente = 0;
			
			for(cont1 = 0; cont1 < nJantar; cont1++)
			{
				if(alunoJantar[cont1][cont2] == 1)
					qtdjantarPresente++;
			}
			
			if(qtdjantarPresente == nJantar){
					flag = TRUE;
					break;
			}
		}
				
		if(flag == TRUE)
			puts("yes");
		else
			puts("no");		
	}	

return 0;
}