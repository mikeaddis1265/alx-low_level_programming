#include "main.h"
/**
 * swap_int  Swaps the values of two integers.
 * @ a Pointer to the first integer.
 * @ b Pointer to the second integer.
 *  return void
 */
void swap_int(int *a, int *b)
{
	int swapper; /* variable that  holds one of the values of swapped numbers */

	swaper = *a;
	*a = *b;
	*b = swaper;
}

