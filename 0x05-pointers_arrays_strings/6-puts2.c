#include "main.h"
/**
 * puts2-function prints every other character of a string,
 *
 * @str -char variable pointer
 *
 * Return - nothing
 *
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}

