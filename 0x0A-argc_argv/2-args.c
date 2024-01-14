#include <stdio.h>
/**
 * main - a program prints all argumetns.
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: 0 (Success).
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
		return (0);
}
