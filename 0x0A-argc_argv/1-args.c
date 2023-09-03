#include <stdio.h>

/**
 * main - A program that print the number of arguements you passed into it
 *
 * @argc: An argument counter
 *
 * @argv: An argurmnt values
 *
 * Return: Always o (success)
 */

int main(int argc, char* argv[] __attribute__((unused)))
{
	int i = 0;

	while (i < argc)
	{
		i++;
	}
	printf("%d\n", i);
	return (0);
}