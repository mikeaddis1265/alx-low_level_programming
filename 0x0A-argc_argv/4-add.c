#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that adds positive numbers
 * @argc: The arguments' counter
 * @argv: The argument's values
 * Return: Always 0 (Success)
 */

int main(int argc, char* argv[])
{
	int i;
	int result = 0;
		for (i = 0; i < argc; i++)
		{
			if (atoi(argv[i]) >= 0 && atoi(argv[i]) <= 9)
			{
				result += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}	
		}

		printf("%d\n", result);
		return (0);

}

