#include<stdio.h>

int main(){
	double raio, pi, volume, raioTres;
	pi = 3.14159;
	scanf("%lf", &raio);
	
	raioTres = raio * raio * raio;
	volume = (4.0/3) * pi * raioTres;
	
	printf("VOLUME = %.3lf\n", volume);

	return 0;
}