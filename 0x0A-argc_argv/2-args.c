#include <stdio.h>

/**
 * main - A program that prints all arguements it receives
 *
 * @argc: The arguement counter
 *
 * @argv: The arguement values
 *
 * Return: Always 0 (success)
 */

int main(int argc __attribute__((unused)), char **argv)
{
	while (*argv)
	{
		printf("%s\n", *argv);
			argv++;
	}
	return (0);
}

