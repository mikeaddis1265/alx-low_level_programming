#include "main.h"
/**
 * print_most_numbers-playing with numbers
 *
 * Return- noting
 *
 */
void print_most_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		if ((i != 2) && (i != 4))
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
