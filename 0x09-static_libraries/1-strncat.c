#include "main.h"
/**
 * _strncat : concatinate n number of characters
 * @dest : pointer to the destinatioin string
 * @src : pointer to the source string
 *
 *@n : specify the number of characters to be copied
 * Return : Pointer to the pointer of the first string
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	int length;
	int i;

	while (*dest)
	{
		length++;
		dest++;
	}

	for (i = 0; ((i < n) && (src[i] != '\0')); i++)
	{
		dest[i] = src[i];
	}
		dest[i] = '\0';

	return (original_dest);
}
