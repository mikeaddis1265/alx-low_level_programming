#include "main.h"
/**
 * _strchr - search the first occurance of a character in a string
 *
 * @s : pointr  to the string
 *
 * @c : char to be searched
 *
 * Return : the pointer to the first occ
 */

char *_strchr(char *s, char c)
{
    while (*s++)
    {
	    if (*s == c) 
		{
			return (s);
		}			
    }
    return ('\0');

}

