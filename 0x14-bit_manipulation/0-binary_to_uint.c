#include "main.h"
/*
 * binary_to_uint- converts a binary number to unsigned int.
 *
 * @b: pointer to string of 0 and 1 chars.
 *
 * Return: the converted number.
 */

unsigned int power(unsigned int base, unsigned int expo)
{
    unsigned int result = 1;
    while (expo > 0)
    {
        result *= base;
        expo--;
    }
    return result;
}
unsigned int binary_to_uint(const char *b)
{
    unsigned int numberOfbits = 0, number = 0, i;
    const char *ptr;

    if (!b)
        return 0;

    ptr = b;
    while (*ptr != '\0')
    {
        if (*ptr != '0' && *ptr != '1')
            return 0;
        numberOfbits++;
        ptr++;
    }

    ptr = b; 
	numberOfbits--;
   for (i = numberOfbits; i > 0; i--)
    {
        if (*ptr & 1)
            number += power(2, i);

        ptr++;
    }

    return number;
}