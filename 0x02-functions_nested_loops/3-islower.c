#include "main.h"
/*
 * _islower.c -is a function to check is a character is small lertter of not
 * Returns 1 if c is lowercass
 * returns o otherwise
 */
int _islower(int c)
	/* the function inputs and returns an integer type*/
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

