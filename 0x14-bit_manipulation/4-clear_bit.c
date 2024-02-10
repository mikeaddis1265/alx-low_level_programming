#include "main.h"
/**
 *clear_bit - function that sets the value of a bit to 0 at given index.
 *@n: input nubmer.
 *@index: starting from 0 of the bit you want to set.
 *
 *Return: 1 if it worked, or -1 if an error occured.
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check;

	if (index > sizeof(n) * 8)
		return (-1);

	check = 1;
	check <<= index;

	*n = *n & (~check);
	return (1);
}
