#include "main.h"
#include <stdio.h>
/**
 * print_array -function prints elements of an array
 *
 * a - is integer variable pointer
 *
 * n - specify the number of elements to be printed
 */
void print_array(int *a, int n)
{
	int j;
	j = 0;

	for(; j < n - 1; j++)
	{
		printf("%d, ", a[j]);

	}
		printf("%d\n", a[n - 1]);
}

