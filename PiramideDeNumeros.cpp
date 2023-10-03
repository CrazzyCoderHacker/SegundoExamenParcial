#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int i;
	int j;
	int grande;
	
    printf("De cuanto quieres tu piramide: ");
    scanf("%d", &grande);

    for (i = 1; i <= grande; i++) 
	{
        for (j = 1; j <= i; j++) 
		{
            printf("%d ", j);
        }
        printf("\n");
    }
	return 0;
}
