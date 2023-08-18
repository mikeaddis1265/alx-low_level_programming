#include "main.h"
/**
 *
 * print_triangle - fuction prints triangle
 *
 *size -int type
 *
 * Return - nothing
 */
void print_triangle(int size)
{
 int i = 1;
 int j;
 int k;

if (size    >   0)
{
for (; i <= size; i++)
{
	j = size - i;

	for (; j > 0; j--)
	{
		_putchar(' ');
	}
	k = i;

	for (; k > 0; k--)
	{
		_putchar('#');
	}
	_putchar('\n');
}

}
else
{
	_putchar('\n');
}

}
