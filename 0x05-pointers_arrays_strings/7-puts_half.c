#include "main.h"
/**
 * puts_half -function that prints the second half of a string
 *
 * str -is a char pointer
 *
 * Return - nothing
 */
void puts_half(char *str)
{
	int count; /* count -  variable that holds the number of strings */
	int j;
	count = 0;

	while (str[count] != '\0')
	{
		count++;
	}


	if (count % 2 == 0)
	{
		j = (count / 2);
	}
	else
	{
		j = (count + 1) / 2;

	}

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');

}

