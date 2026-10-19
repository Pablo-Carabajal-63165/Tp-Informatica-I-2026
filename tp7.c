//https://github.com/Pablo-Carabajal-63165/Tp-Informatica-I-2026.git

#include<stdio.h>
#define TAM 5

int main(void){

	int barra[TAM]={0};
	float precio[TAM]={0};
	int i;
	float max=0, min=0;
	int cod;

	printf("Ingrese %d  productos, se solicitara el código y el precio:\n\n ",TAM);

	for(i=0 ; i<TAM ; i++){
		do{
			printf("\nIngrese el código de barras (1-999999999): ");
			scanf("%d",&barra[i]);

			if(!(barra[i]>0 && barra[i]<999999999)){
				printf("Error. El código de barras debe estar entre 1 y 999999999\n");
			}

		}while(!(barra[i]>0 && barra[i]<999999999));

		do{
			printf("\nIngrese el precio: ");
			scanf("%f",&precio[i]);

			if(!(precio[i]>0)){
				printf("Error. El precio debe ser positivo\n");
			}

		}while(!(precio[i]>0));

	}


	printf("\n\nCódigo\tPrecio\n\n");

	for(i=0 ; i<TAM ; i++){
		printf("%d\t%.2f\n\n",barra[i],precio[i]);
	}


	for(i=0 ; i<TAM ; i++){
		if(precio[i]>max){
			max=precio[i];
			cod=barra[i];
		}
	}

	printf("\nMás caro: [%d] %.2f\n",cod,max);


	min=max;

	for(i=0 ; i<TAM ; i++){
		if(precio[i]<=min){
			min=precio[i];
			cod=barra[i];
		}
	}

	printf("\nMás barato: [%d] %.2f\n",cod,min);

	return 0;

}
