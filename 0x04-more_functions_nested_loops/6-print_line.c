#include "main.h"
/**
 * print_line -print a stright line
 *
 * n- is numberof line to be drawn
 *
 * Return -nothing
 *
*/
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	int i = 0;
		for (; i < n; i++)
		{
			_putchar(95);
		}
	_putchar('\n');
	}
}

