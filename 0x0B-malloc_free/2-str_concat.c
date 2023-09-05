#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	int  len1 = 0;
	int  len2 = 0;
	int i;
	char *p;

	if (s1)
	{
		while (s1[len1])
		{
			len1++;
		}
	}

	if (s2)
	{
		while (s2[len2])
		{
			len2++;
		}
	}
	p = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		p[i + len1] = s2[i];
	}
	p[len1 + len2] = '\0';
	return (p);
}
