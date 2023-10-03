#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<math.h>




int main() 
{
	
	    
	int I, F;
	int a;
	
    printf("Year de inicio: ");
    scanf("%d", &I);

    printf("Year de fin: ");
    scanf("%d", &F);

    printf("Years bisiestos en  %d a %d:\n", I, F);

    for (a=I;a<=F;a++) 
	{
        if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) 
		{
            printf("%d\n", a);
        }
    }
	



    
	return 0;
}
