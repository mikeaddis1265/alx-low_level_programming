#include "main.h"
#include <stdlib.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	int count = 0;
	int i;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[count] != '\0')
	{
		count++;
	}

	p = (char *)malloc((count + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	while (i < count + 1)
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}
