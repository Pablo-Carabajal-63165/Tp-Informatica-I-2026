//Nombre: Pablo Nicolás Carabajal
//Legajo: 63165
//Curso: 1R7
//Año:2026
//Trabajo Práctico N°6

#include <stdio.h>
#define PI 3.14159265358979323846

float calcularAreaRectangulo(float l, float a);
float calcularPerimetroRectangulo(float l, float a);
float calcularAreaCirculo(float l);
float calcularPerimetroCirculo(float l);
void imprimirResultados(int o, float a, float p);

int main(void){

	int opcion=0;
	float longitud=0;
	float altura=0;
	float area=0;
	float perimetro=0;

	do{
		printf("Ingrese la figura que desea calcular(1: rectangulo, 2: circulo): ");
		scanf("%d",&opcion);

	

		switch(opcion){
			case 1:
				printf("\nOpcion de rectángulo seleccionada\n\n");
				printf("Ingrese longitud: ");
				scanf("%f",&longitud);
				printf("\nIngrese altura: ");
				scanf("%f",&altura);

				area=calcularAreaRectangulo(longitud, altura);
				perimetro=calcularPerimetroRectangulo(longitud, altura);

				imprimirResultados(opcion, area, perimetro);

				break;
			case 2:

				printf("\nOpcion de círculo seleccionada\n\n");
				printf("Ingrese radio: ");
				scanf("%f",&longitud);
			
				area=calcularAreaCirculo(longitud);
				perimetro=calcularPerimetroCirculo(longitud);

				imprimirResultados(opcion, area, perimetro);

				break;
			default:
				printf("Ingrese una opcion correcta\n");
				break;	
		}
	}
	while(!(opcion==1 || opcion==2));

	return 0;
}

float calcularAreaRectangulo(float l, float a){

	float area=0;

	return area=l*a ;
}

float calcularPerimetroRectangulo(float l, float a){

	float perimetro=0;

	return perimetro=2*(l+a);
}


float calcularAreaCirculo(float l){

	float area=0;

	return area=PI*(l*l);
}

float calcularPerimetroCirculo(float l){

	float perimetro=0;

	return perimetro=2*PI*l;
}

void imprimirResultados(int o, float a, float p){

	if(o==1){

		printf("\nEl área del rectángulo es: %.2f\n\n",a);
		printf("El perímetro de rectángulo es: %.2f\n\n",p);
	}
	else{

		printf("\nEl área del círculo es: %.2f\n\n",a);
		printf("El perímetro del círculo es: %.2f\n\n",p);
	}
}
