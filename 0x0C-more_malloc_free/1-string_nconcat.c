#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i;

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n > len2)
	{
	   n = len2;
	}
	
	p = (char *)malloc(n + len1 + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	
	for (i = 0; i < (n + len1); i++)
	{
		if (i < len1)
			p[i] = s1[i];
		else
			p[i] = s2[i - len1];
	}
	p[i] = '\0';

	return (p);
}
