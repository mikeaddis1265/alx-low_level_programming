#include <stdio.h>
#include <stdlib.h>
/**
 *create_array- a function that create an array of chars.
 *
 *@size: size of the array
 *
 *@c: an input character
 *
 * Return: pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			ptr[i] = c;
			i++;
		}
			return (ptr);
	}
}
