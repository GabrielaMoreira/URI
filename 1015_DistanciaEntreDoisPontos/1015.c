#include<stdio.h>
#include<math.h>

int main(){
	double x1, x2, y1, y2, prodX, prodY, distancia;
	
	scanf("%lf %lf", &x1, &y1);
	scanf("%lf %lf", &x2, &y2);
	
	prodX = (x2-x1)*(x2-x1); //operação ao quadrado
	prodY = (y2-y1)*(y2-y1);
	distancia = sqrt(prodX + prodY);
	
	printf("%.4lf\n", distancia);

	return 0;
}