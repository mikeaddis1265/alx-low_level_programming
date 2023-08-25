#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *p)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(p + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(p + count) == alphabet[i])
			{
				*(p + count) = rot13[i];
				break;
			}
		}
		count++;
	}

	return (p);
}
