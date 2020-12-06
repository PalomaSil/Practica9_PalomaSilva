/* 	Práctica#9                             Silva Rodríguez Paloma Mariel
	Fecha de entrega: 6 de Diciembre de 2020*/
//						Estructuras de repetición

/* 1.-Determinar cuánto ahorrará una persona en un año, si al final de cada
mes deposita variables cantidades de dinero; además, se requiere saber cuánto
lleva ahorrado cada mes. */

//Declaración de librerías
#include<stdio.h>

//Declaración de variables globales
//No hay variables globales


//Declaración de función principal

int main(){
	
	//Declaración de variables locales
	//Uso de variables para saber las veces que se harán depósitos y saber por cuánto son
	
	int C1,C2, ds;
	float depoN, ahorroMen,ahorroA;
	
	depoN=0;
	ahorroMen=0;
	ahorroA=0;
	for (C1=1; C1<=12; C1++){
		printf("\n\n¿Cuantos depositos hara en el mes %i?\n",C1);
		scanf("%i",&ds);
		C2=1;
		while(C2<=ds){
			printf("Ingrese la cantidad del depósito:\n $ ");
			scanf("%f",&depoN);
			ahorroMen+=depoN;
			C2++;
		}
		
		printf("\nLa cantidad ahorrada en el mes %i, es de:\n $ %f",C1,ahorroMen);
		ahorroA+=ahorroMen;
		ahorroMen=0;	
	}
	printf("\n\nLa cantidad ahorrada en los 12 meses es de:\n $ %f",ahorroA);
	return 0;
}








//2.-Determinar, de N cantidades, cuántas son menores o iguales a cero y cuántas mayores a cero. 

//Declaración de librerías
#include<stdio.h>

//Declaración de variables globales
//No hay variables globales


//Declaración de función principal

int main(){
	
	//Declaración de variables locales
	//Uso de variables para saber si son negativas o positivas
	int C=0,N,P,nc;
	signed int cantidad;
	
	//Bloque de instrucciones
	/*Este bloque es para ingresar N cantidades y ver cuáles son menores o iguales a cero y 
	cuántas mayores a cero*/
	
	N=0;
	P=0;
	printf("Ingrese el número de cantidades a determinar:\n");
	scanf("%i",&nc);
	while (++C<=nc){
		printf("\nIngrese la cantidad:\n");
		scanf("%i",&cantidad);
		if(cantidad<=0){
			N++;
		}
		else{
			P++;
		}
	}
	printf("Cantidades negativas:\n %i \n",N);
	printf("Cantidades positivas:\n %i",P);
	return 0;
}







//3.-Generar e imprimir los números pares que se encuentran entre 0 y 100. 

//Declaración de librerías
#include<stdio.h>

//Declaración de variables globales
//No hay variables globales


//Declaración de función principal

int main(){
	
	//Declaración de variables locales
	//Uso de variables para identificar sólo los números pares
	
	int C;
	
	//Bloque de instrucciones
	//Bloque en donde se evaluará cada número del 0 al 100 para seleccionar solamente los pares
	
	for ( C=0; C<=100; C++){
		if(C%2==0){
			printf("El número %i, es par\n",C);
			C++;
		}
		else{
			C++;
		}
	}
	return 0;
}
