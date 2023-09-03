#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 * @argc: The arguments' counter
 * @argv: The arguments' values
 * Return: Always 0 (Success)
 */

int main(int argc, char* argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		int i;
		int result = 1;

		for (i = 1; i < argc; i++)
		{
		    result = result * atoi(argv[i]);
		}
		printf("%d\n", result);
		return (0);
	}
}
