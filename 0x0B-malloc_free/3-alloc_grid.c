#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - A function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: An input integer at number of columns
 * @height: An input integer at number of rows
 * Return: pointer to a 2D array, NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
    int **pointer;
	
	if (width <= 0 || height <= 0)
    {
		return (NULL);
    }
	pointer = (int **)malloc(height * sizeof(int *));

	if (pointer == NULL)
	{
		return NULL;
	}

	for (i = 0; i < height; i++)
	{
		pointer[i] = (int *)malloc(width * sizeof(int));

		if (pointer[i] == NULL)
		{
			return NULL;
		}

		for (j = 0; j < width; j++)
		{
			pointer[i][j] = 0;
		}
	}
	return pointer;
}

