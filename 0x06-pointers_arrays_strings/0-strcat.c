#include "main.h"
/**
 *_strcat - function that concatinate two strings
 * dest -pointer to the first string
 * src - pointer to second string
 *
 * Return - pointer
 */

char *_strcat(char *dest, char *src)
{
	int length1 = 0;
	int length2 = 0;
    int j;

	while (*dest++)
	{
		length1++;
	}

	while (*src++)
	{
		length2++;
	}

    j = length2;
	for (; j >= 0; j--)
	{
		dest[length1 + j] = src[length2 -j];
	}
	
	return dest;
}

