#include <iostream>
#include <stdio.h>
#include <math.h>



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{

int i; 

for(i=1;i<=100;i++)
{
	printf("%d\n", i);
	if(i%3==0)
	{
		printf("Es multiplo de 3\n");
	}
	else
	{
		printf("No es multiplo\n");
	}
	
	
}






  
	
	
	return 0;
}
