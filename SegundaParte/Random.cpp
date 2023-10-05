#include <iostream>
#include <math.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(int argc, char** argv) 
{
 int i, x, y, t;

    srand(time(NULL));
    x = rand() % 5 + 1;

    while (x != 5) 
	{
        if (x == 1) 
		{
            i = rand() % 9 + 1;
            y = rand() % 9 + 1;
            t = i + y;
            printf("%d + %d = %d\n", i, y, t);
        } 
			else if (x == 2) 
			{
	            i = rand() % 9 ;
	            y = rand() % 9 ;
	            t = i - y;
	            printf("%d - %d = %d\n", i, y, t);
	        } 
				else if (x == 3) 
				{
		            i = rand() % 9 + 1;
		            y = rand() % 9 + 1;
		            t = i * y;
		            printf("%d * %d = %d\n", i, y, t);
		        } 
					else if (x == 4) 
					{
			            i = rand() % 9 + 1;
			            y = rand() % 9 + 1;
			            t = i / y;
			            printf("%d / %d = %d\n", i, y, t);
			        }

        x = rand() % 5 + 1;
    }

    printf("Se acabo estimado\n");	
	return 0;
}
