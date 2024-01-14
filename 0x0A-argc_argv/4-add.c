#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - function that add numbers.
 *
 *@argc: argumentcount
 *
 *@argv: argumentvector
 *
 *Return: 0(success) or 1(fail).
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{	int i, sum = 0, num;

		while (--argc)
		{
			for (i = 0; argv[argc][i]; i++)
			{
				if (!(isdigit(argv[argc][i])))
				{
					printf("Error\n");
					return (1);
				}
			}

			num = atoi(argv[argc]);
			sum = sum + num;

		}
			printf("%d\n", sum);
			return (0);
	}
}

























































































































































