#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * followed by a new line
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	for (; i < 10; i++)
	{
		for (; c <= 'z'; c++)
		{
			_putchar(c);
		}
		c = 'a';
		_putchar(10);
	}
}

