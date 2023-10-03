#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 

{
	int v1, v2, v3;
	int temp;
	
	printf("1. Primer numero: ");
	scanf("%d", &v1);
	printf("2. Segundo numero: ");
	scanf("%d",&v2);
	printf("3. Tercer numero: ");
	scanf("%d",&v3);
	
	temp=v1;
	v1=v2;
	v2=v3;
	v3=temp;
	
	
	printf("Valor 1: %d\n", v1);
	printf("Valor 2: %d\n", v2);
	printf("Valor 3: %d\n", v3);
	return 0;
}
