#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name, followed by a new line.
 *
 * @argc : programcount
 *
 * @argv : argument vector(array)
 *
 * Return: 0 - success.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s \n", argv[0]);
	exit(EXIT_SUCCESS);
}

