#include<stdio.h>
#include<stdlib.h>
#include<cstdio>
#include<iostream>
#include<conio.h>


using namespace std;

//Prototipos de Funciones y Procedimientos
void RentabilidadConAltcoin();
void RentabilidadConUsdt();
void Grafico();

int main(){
	RentabilidadConAltcoin();
//	RentabilidadConUsdt();
	printf("-------------------------------------------------------------------------------------------------------------------- \n");
	printf("\n\n");
	
system("pause");
return 0;
}

void RentabilidadConAltcoin()
{
	
	float precioCompra;
	float precioVenta;
	float usdt;
	char altcoin[20];
	
	printf("Ingrese capital inicial en tether\n");
	scanf("%f",&usdt);
	
	printf("Ingrese nombre de Altcoin \n");
	scanf("%s",&altcoin);
	

	printf("Ingrese precio de compra de %s \n",altcoin);
	scanf("%f",&precioCompra);
	
	printf("Ingrese precio de venta de %s \n",altcoin);
	scanf("%f",&precioVenta);
	
	printf("\n\n\n\n");
	float CantidadAltcoin = usdt / precioCompra;
	float balance=CantidadAltcoin * precioVenta;
	
	printf("Tenencia %.2f %s | %.2f USDT \n",CantidadAltcoin,altcoin,usdt);
	
	float porcentaje = (balance /usdt *100 ) -100; 
		
	printf("%s  %.2f USDT | %.2f %%\n",precioCompra<precioVenta ? "Ganancia" : "Perdida",balance-usdt,porcentaje);	

	printf("Balance %.2f USDT\n",balance);

	
	
	
}


void RentabilidadConUsdt()
{
	float precio;
	float usdt;
	
	printf("Ingrese capital inicial en tether\n");
	scanf("%f",&usdt);
	
	printf("Ingrese precio de altcoin  \n");
	scanf("%f",&precio);
	
	float cantidad=usdt/precio ;
	
	printf("Cantidad de la altcoin: %f \n",cantidad);
	
	Grafico();
	
	int i=0;	
	for(i=1;i<=1000;i++){
	
	//float porcentaje = 1+(i100);
		float porcentaje =(i*0.01);
		float formula = 1+ porcentaje; 
		
		printf("	+%d		%.2f	%.2f 	||	-%d		%.2f	%.2f   \n",i,precio*formula,(cantidad*precio*formula),i,(precio-(precio*porcentaje)),(cantidad*(precio-(precio*porcentaje))));
		
	}
}


void Grafico()
{
    printf("-------------------------------------------------------------------------------------------------------------------- \n");
	printf("	                                                ||                                                    	\n ");
	printf("	Procentaje	Precio		Valor en USDT	||	Procentaje	Precio		Valor en USDT   \n");
	printf("	________________________________________________||____________________________________________________	\n");
	printf("	________________________________________________||____________________________________________________	\n ");
	printf("	                                                ||                                                    	\n ");
}
