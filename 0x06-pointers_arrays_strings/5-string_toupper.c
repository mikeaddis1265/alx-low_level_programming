#include "main.h"
/**
 * string_toupper : funtion that chagne all letters in a string to small case
 *
 * @c : char pointer to string
 *
 * Return : pointer to the c pointer
 *
 */

char *string_toupper(char *c)
{
	char *original_c = c;

	while (*c != '\0')
	{
		if (*c >= 97 && *c <= 122)
		{
			*c = *c - 32;
		}
		c++;
	}
return (original_c);
}

