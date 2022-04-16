#include<stdio.h>
#include<stdlib.h>
#include<cstdio>
#include<iostream>
#include<conio.h>


using namespace std;

//Prototipos de Funciones y Procedimientos
void RentabilidadConAltcoin();
void RentabilidadConUsdt();
void menu();
void RentabilidadConTenenciaEnAltcoin();
//void Grafico();

int main(){
	
menu();

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
	float porcentaje = (balance /usdt *100 ) -100;
	
	printf("Tenencia %.2f %s | %.2f USDT | %.2f ARS \n",CantidadAltcoin,altcoin,usdt,usdt*190);
		
	printf("%s  %.2f USDT | %.2f %%\n",precioCompra<precioVenta ? "Ganancia" : "Perdida",balance-usdt,porcentaje);	

	
}


void menu(){
	int opcion;
	
	do
    {
		printf("Elija operacion a realizar \n\n");
		printf(" 1. Si ya tenes Altcoin pero no te acordas a que precio compraste \n	y te acordas cuantos usdt invertiste inicialmente \n\n");
		printf(" 2. Si tenes USDT y queres calcular rentabilidad comprando y vendiendo x Altcoin \n	para un precio de compra y un precio de venta puntuales \n\n");
		printf(" 3. Si tenes USDT y queres proyectar los porcentajes de ganancia y perdida \n\n");
		printf(" 4. Salir \n\n");
		printf( "Introduzca opci%cn (1-4): \n", 162 );
		printf("Opcion elegida -> ");
		scanf("%d",&opcion);
		printf("\n\n\n");
	
		switch(opcion) //donde opción es la variable a comparar
			{
			    case 1: RentabilidadConTenenciaEnAltcoin();
			    		printf("\n\n\n");
			    break;
			    case 2: RentabilidadConAltcoin();
			    		printf("\n\n\n");
			    break;
			    case 3: RentabilidadConUsdt();
			    		printf("\n\n\n");
			    break;
			  //  default: 
				//	printf("Opcion equivocada \n");
				//	printf("Otaku olor a pata :v\n No te olvides de darle de comer a la mama \n\n\n\n");
			}
	}while(opcion!=4);
	printf("-------------------------------------------------------------------------------------------------------------------- \n");
	printf("\n\n");
}

void RentabilidadConTenenciaEnAltcoin()
{
	float precioActual;
	float tenencia;
	float deuda;
	float capital_incial;
	char altcoin[20];
	

	printf("Ingrese capital inicial en tether\n");
	scanf("%f",&capital_incial);
	
	printf("Ingrese nombre de Altcoin \n");
	scanf("%s",&altcoin);
	
	printf("Ingrese tenencia de %s \n",altcoin);
	scanf("%f",&tenencia);

	printf("Ingrese precio actual de %s \n",altcoin);
	scanf("%f",&precioActual);
	
	printf("Ingrese deuda tomada\n");
 	scanf("%f",&deuda);
 	
 	//clrscr();
		
	bool Condicion = tenencia*precioActual>capital_incial+deuda;
	float Equilibrio = (capital_incial+deuda)/tenencia;
	float balance = (tenencia*precioActual)-(capital_incial+deuda);
	float porcentaje = (((tenencia * precioActual) - deuda) / capital_incial * 100)-100;
	printf("\n\n\n\n");
	
	
	printf("Tenencia %.2f %s | %.2f USDT | %.2f ARS \n",tenencia,altcoin,tenencia*precioActual,tenencia*precioActual*190);
		
	printf("%s  %.2f USDT | %.2f %% \n",Condicion ? "Ganancia" : "Perdida",balance,porcentaje);
	if(!Condicion) {
		printf("\n\nPara estar en tablas \n",12.0);
		printf("Necesito que el precio suba a -> %.2f \n",Equilibrio);
	}
		
		
	

//	printf("Balance %.2f USDT | %.2f ARS\n",tenencia*precioActual,tenencia*precioActual*190);
	
	
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
	
	//Grafico();
	
	int i=0;	
	for(i=1;i<=50;i++){
	
	//float porcentaje = 1+(i100);
		float porcentaje =(i*0.01);
		float formula = 1+ porcentaje; 
		
		if(i % 3 == 0){
			printf("	+%d %%		%.2f	%.2f 	||	-%d %%		%.2f	%.2f   \n",i,precio*formula,(cantidad*precio*formula),i,(precio-(precio*porcentaje)),(cantidad*(precio-(precio*porcentaje))));
		}
		
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
