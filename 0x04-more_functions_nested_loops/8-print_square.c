
#include "main.h"
/**
 * print_square -function print square diagram
 *
 * @size- is int type variabel
 *
 * Return -nothing
 *
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else 
	{	
		int i = 0;
	
	for (; i < size; i++)
	{
		int j = 0;
		for (; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}

	}
}

