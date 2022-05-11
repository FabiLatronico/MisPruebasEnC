#include "misFunciones.h"

using namespace std;


//void Grafico();

int main(){
clrscr();
	int opcion;
	
	do
    {
		printf("Elija operacion a realizar \n\n");
		printf(" 1. Si ya tenes Altcoin pero no te acordas a que precio compraste \n	y te acordas cuantos usdt invertiste inicialmente \n\n");
		printf(" 2. Si tenes USDT y queres calcular rentabilidad comprando y vendiendo x Altcoin \n	para un precio de compra y un precio de venta puntuales \n\n");
		printf(" 3. Si tenes USDT y queres proyectar los porcentajes de ganancia y perdida \n\n");
		printf(" 4. Interes compuesto \n\n");
		printf(" 5. Salir \n\n");
		printf( "Introduzca opci%cn (1-4): \n", 162 );
		printf("Opcion elegida -> ");
		scanf("%d",&opcion);
		printf("\n\n\n");
		
		clrscr();
		switch(opcion) //donde opci�n es la variable a comparar
			{
			    case 1: RentabilidadConTenenciaEnAltcoin();
			    		clrscr();
			    break;
			    case 2: RentabilidadConAltcoin();
			    		clrscr();
			    break;
			    case 3: RentabilidadConUsdt();
			    		clrscr();
			    break;
			    case 4: printf("Interes compuesto de 1000 de capital 18 %% a 5 anios %f",interesCompuesto(1000, 18 , 5));
			    		system("pause");
			    		clrscr();
			    break;
			    
			}
	}while(opcion!=5);
return 0;
}

