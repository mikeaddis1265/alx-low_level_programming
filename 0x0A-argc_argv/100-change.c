#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for an amount.
 * of money.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
	       	return (0);	
	}
	else
	{
		int cents, ncoins = 0;

		cents = atoi(argv[1]);

		if (cents < 0)
		{
			printf("%d\n", 0);
		    return (0);	
		}

		while (cents > 0)
		{
			if (cents >= 25)
			{
				cents -= 25;
			}
			else if (cents >= 10)
			{
				cents -= 10;
			}
			else if (cents >= 5)
			{
				cents -= 5;
			}
			else if (cents >= 1)
			{
				cents -= 1;
			}

		        ncoins += 1;
		}

		printf("%d\n", ncoins);
	        return (0);


	}
}
