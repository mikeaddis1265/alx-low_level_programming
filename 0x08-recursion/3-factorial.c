#include "main.h"
/**
 * factorial : function  to calculate a factorial of a number
 *
 * @n : number which is going to get calculate
 *
 * Return : 0  if n is 1, -1 if n is less than 0
 *
 */

int factorial(int n)
{
	if(n == 0)
	{
		return 1;
	}

	if(n < 0)
	{
		return -1;
	}

	return (n * factorial(n -1));
}
