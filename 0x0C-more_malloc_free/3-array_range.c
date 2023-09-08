#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */

 int *array_range(int min, int max)
{
	int *p;
	int i;
	int total;

	if (min > max)
	{
		return (NULL);
	}

	total = (max - min) + 1;
	p = (int *)malloc(total * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total; i++)
	{
		p[i] = min;
		min++;
	}

	return (p);
}

