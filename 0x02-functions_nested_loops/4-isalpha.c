#include "main.h"
/*
 *4 _islower.c -is a function to check is a character is a letter or not
 * Returns 1 if c it is a letter
 * returns o otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >=97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);

}


