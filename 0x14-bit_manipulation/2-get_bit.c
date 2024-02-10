#include "main.h"
/**
 * get_bit - function that return the value of a bit at a given index.
 * @n: nmber input.
 * @index: index staring from zero.
 *
 * Return: alue of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check;

	check = 1;


	if (index > sizeof(n) * 8)
		return (-1);

	check <<= index;

	if (check & n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
