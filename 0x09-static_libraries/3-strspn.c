#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned i, j, bool;

	for ( i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1; /* set not found */

		for ( j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0; /* char is found */
				break;    /* exit the inner loop */
			}

		}

		if(bool == 1)
                        {
                                break; /*exit the outer loop */
                        }
	}
	return (i);
}

