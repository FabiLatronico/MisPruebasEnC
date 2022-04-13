#include<stdio.h>
#include<stdlib.h>
//#include<cstdio>

int main(){

float precio;
float usdt;

printf("Ingrese capital inicial en tether\n");
scanf("%f",&usdt);

printf("Ingrese precio de altcoin  \n");
scanf("%f",&precio);

float cantidad=usdt/precio ;

printf("Cantidad de la altcoin: %f \n",cantidad);


	printf("-------------------------------------------------------------------------------------------------------------------- \n");
	printf("	                                                ||                                                    	\n ");
	printf("	Procentaje	Precio		Valor en USDT	||	Procentaje	Precio		Valor en USDT   \n");
	printf("	________________________________________________||____________________________________________________	\n");
	printf("	________________________________________________||____________________________________________________	\n ");
	printf("	                                                ||                                                    	\n ");
	int i=0;
		
	for(i=1;i<=60;i++){
	
	//float porcentaje = 1+(i100);
		float porcentaje =(i*0.01);
		float formula = 1+ porcentaje; 
		
		printf("	+%d		%f	%f 	||	-%d		%f	%f   \n",i,precio*formula,(cantidad*precio*formula),i,(precio-(precio*porcentaje)),(cantidad*(precio-(precio*porcentaje))));
		
	}
	printf("-------------------------------------------------------------------------------------------------------------------- \n");
		printf("\n\n");

//Agrego un cambio
	
system("pause");
return 0;
}
