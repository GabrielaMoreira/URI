#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define	TRUE	1
#define	FALSE	0
#define CAPAC	51

struct Pilha{
	int topo;
	int capacidade;
	char* vogal;
};

void InicializaPilha(struct Pilha*);
void PushPilha(struct Pilha*, char);
char PopPilha(struct Pilha*);

int main(){
	struct Pilha pilhaVogal;
	char palavra[CAPAC];
	char metadeA[CAPAC], metadeB[CAPAC];
	int cont, j, quantidade, tamanho;
	
	InicializaPilha(&pilhaVogal);
	quantidade = 0;
	
	scanf("%s", palavra);
	tamanho = strlen(palavra);
	palavra[tamanho] = '\0';
	
	
	for(j = 0, cont = 0; cont < tamanho; cont++){
		if(palavra[cont] == 'a' || palavra[cont] == 'e' || palavra[cont] == 'i' || palavra[cont] == 'o' || palavra[cont] == 'u'){
			metadeA[j] = palavra[cont];
			PushPilha(&pilhaVogal, palavra[cont]);
			quantidade++;
			j++;
		}	
	}
	metadeA[j] = '\0';
	
	if(quantidade == 1)
	{
		puts("S");
	}
	else
	{
		for(cont = 0; cont < quantidade; cont++)
			metadeB[cont] = PopPilha(&pilhaVogal);
		metadeB[cont] = '\0';
				
		if(strcmp(metadeB, metadeA) == 0)
			puts("S");
		else
			puts("N");
	}

return 0;
}


void InicializaPilha(struct Pilha* p){
	p->topo = -1;
	p->capacidade = CAPAC;
	p->vogal = (char *) malloc (CAPAC * sizeof(char));
}

void PushPilha(struct Pilha* p, char vgl){
	p->topo++;
	p->vogal[p->topo] = vgl;
}

char PopPilha(struct Pilha* p){
	char aux;
	
	aux = p->vogal[p->topo];
	p->topo--;
	
	return aux;	
}