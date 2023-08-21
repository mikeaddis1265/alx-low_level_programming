#include "main.h"
/**
 * swap_int  Swaps the values of two integers.
 *
 * This function takes two pointers to integers and swaps the values
 * stored at the memory locations pointed to by the pointers.
 *
 * @ a Pointer to the first integer.
 * @ b Pointer to the second integer.
 *  return void
 */
void swap_int(int *a, int *b)
{
	int swaper; /* variable that  holds one of the value of swaped numbers */

	swaper = *a;
	*a = *b;
	*b = swaper;
}

