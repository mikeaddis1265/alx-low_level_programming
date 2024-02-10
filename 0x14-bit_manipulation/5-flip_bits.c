#include "main.h"
/**
 * countSetbits - function to count set bits.
 * @n : unsigned long int type.
 *
 * Return: count of set bits
 */
unsigned int countSetbits(unsigned long int n)
{
	unsigned int count;

	count = 0;
	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}
/**
 * flip_bits - find the number of bits  you would need to flip
 * to get from one number to another.
 * @n : input number.
 * @m : second number.
 *
 * Return: number of flips.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetbits(n ^ m));
}
