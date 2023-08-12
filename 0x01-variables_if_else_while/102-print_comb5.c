#include<stdio.h>

/*
 * main - starting point
 *
 * Description : print all combination of two two-digit numbers
 *
 * return 0
 * */
int main()
{	int i;
	int j;
	int k;
	int z;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			for ( k = 0; k <= 9; k++)
			{
				for ( z = 0; z <= 9; z++)
				{	
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(z + '0');
			  	if( i != 9 || j != 8 || k != 9 || z != 9 )
				{
					putchar(',');
			 	}	
			 	}	
			}	
				
		}	
	}
return (0);	
}	

