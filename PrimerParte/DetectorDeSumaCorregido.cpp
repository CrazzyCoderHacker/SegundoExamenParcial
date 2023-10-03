#include <iostream>
#include <stdio.h>



int main(int argc, char** argv) 
{
	int n1, n2, resultado, suma; 
	
	printf("Introduzca un numero: \n");
	scanf("%d", &n1);
	
	printf("Introduzca otro numero: \n");
	scanf("%d", &n2);
	
	printf("Cuanto suman?:\n");
	scanf("%d", &suma);
	
	resultado=n1+n2;
	
	if(suma==resultado)
	{
	printf("Correcto\n");	
	}
	
	else 
	{
		printf("Incorrecto: a suma es %d \n", resultado);
	}
	return 0;
}
