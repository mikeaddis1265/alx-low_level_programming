#include "main.h"
/**
 *set_bit - sets the value of a bit to 1 at a given index.
 *@n: number input.
 *@index: staring from 0 of the bit you want to set.
 *
 *Return: 1 if it works, or -1 if an error occured.
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check;

	if (index > sizeof(n) * 8)
		return (-1);

	check = 1;
	check <<= index;

	*n = *n | check;

	return (1);
}
