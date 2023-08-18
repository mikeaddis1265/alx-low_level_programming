#include "main.h"
/**
 *
 * print_diagonal-prints out \  diagonally
 *
 *@n- int type specify how many times it gets print
 *Return -nothing
 *
 */
void print_diagonal(int n)
{
	int i = 1;
	int j;
if (n > 0)
{
	for (; i <= n; i++)
	{
		j = i;
		for (; j > 1; j--)
		{
 			_putchar(32);
		}
			_putchar(92);
			_putchar('\n');
	}
}
else
{
	_putchar('\n');
}

}


