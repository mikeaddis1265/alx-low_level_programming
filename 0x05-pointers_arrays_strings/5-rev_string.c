#include "main.h"
/**
 * rev -string - function tha reverse string
 *
 * @s -char pointer variable
 *
 * Return -nothing
 */
void rev_string(char *s)
{
	int i;     /* i -is a variable store the size of the string */
	int j;     /* j -is a variable for second loop counter */
	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	
	i = i -1;

	for (; j <= (i / 2); j++)
	{
		int swap = s[j];
		s[j] = s[i-j];
		s[i-j] = swap;
	}	
}


