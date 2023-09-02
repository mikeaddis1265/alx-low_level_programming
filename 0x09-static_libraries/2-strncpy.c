#include "main.h"
/**
 * _strncpy - function that copies a string
 *
 * @dest: input char pinter variable
 *
 * @src: input char pinter variable
 *
 * @n: int type variable
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
        	 dest[i] = '\0';
	}

	return (original_dest);
}
