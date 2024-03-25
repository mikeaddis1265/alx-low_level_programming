#include "main.h"
/**
 * _strlen -function that counts the number of characters
 *
 * s - a pointer to the first character of the string
 *
 * Return - void
 *
 */
int _strlen(char *s)
{
	int counter = 0; /*variable holds the number of characters in the string */

	while (*s != '\0')
	{
		counter++;
		s++;
	}
return (counter);
}

