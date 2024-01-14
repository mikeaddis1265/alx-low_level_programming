#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that calculate product of two numbers.
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: 1(Error) if it does not recieve two numbers.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1, num2, product;

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		product = num1 * num2;
		printf("%d\n", product);
		return (0);
	}
}
