#include <stdio.h>

int main(void) 
{
	float p;
	float a;
	float bim;
	
	printf("Ingrese el peso en kg: ");
	scanf("%f",&p);
	printf("Ingrese su altura en metros: ");
	scanf("%f",&a);
	
	bim=p/(a*a);
	
	printf("Su indice de masa corporal es: %.2f\n\n",bim);
	
	printf("Indice             | Condicion\n");
	printf("------------------------------\n");
	printf("Menor a 18.5       | Bajo Peso\n");
	printf("18.5 a 24.9        | Normal\n");
	printf("25.0 a 29.9        | Sobrepeso\n");
	printf("Mayor o igual a 30 | Obesidad");
	
	
	return 0;
}
