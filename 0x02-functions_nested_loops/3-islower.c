#include "main.h"
/*
 * _:islower.c -is a function to check is a character is small lertter of not
 * Returns 1 if c is lowercass
 * returns o otherwise
 */
int _islower(int c)
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