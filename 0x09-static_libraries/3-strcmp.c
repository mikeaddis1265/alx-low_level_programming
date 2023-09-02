#include "main.h"
/**
 *_strcmp : function that compare two strings s1 and s2
 *
 * @s1 : pointer to the first string
 *
 * @s2 : pointr to the second string
 *
 * Return - positive num if s1 > s2 ,negative if s1 < s2 , otherwise 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
			s1++;
			s2++;
	
	}
return (*s1 - *s2);
}