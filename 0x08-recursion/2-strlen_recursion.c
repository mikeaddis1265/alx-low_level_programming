#include "main.h"
/**
 * _strlen_recursion : function that returns factorial of a given number
 *
 * @s : poiner to string
 *
 * Return : integer
*/

int _strlen_recursion(char *s)
{	

	if(*s == '\0')
	{
		return 0;
	}
	
	return (1 + _strlen_recursion(++s));

}
