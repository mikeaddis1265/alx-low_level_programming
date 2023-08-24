#include "main.h"
/**
 * reverse_array : ucntion that reverse numbers in an array
 * @n : int type specify the numbers of elements in the array
 * @a : an arrary parameter
 * Return : nothing
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int mid;

	for (i = 0 ; i < (n / 2); i++)
	{
		mid = a[i];
		a[i] = a[n - i];
		a[n - i] = mid;
	}
}