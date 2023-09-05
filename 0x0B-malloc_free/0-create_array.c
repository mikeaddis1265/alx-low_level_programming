#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)

{
    unsigned int i = 0;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		str = (char *)malloc(sizeof(char) *size);

		if (str == NULL)
		{
		return (NULL);
		}

		while (i < size)
		{
                	 str[i] = c;
		 	 i++;
		}
		return (str);
	}

}
