#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **ptrptr;
	int i, j;
	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}

	ptrptr = (int **)malloc(sizeof(int*) * height);
	if (ptrptr == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < height; i++)
	{
		ptrptr[i] = (int *)malloc(sizeof(int) * width);

		if (ptrptr[i] == NULL)
		{
			for ( j = 0; j < i; j++)
			{
				free(ptrptr[j]);
			}
		}
			free (ptrptr);
			return NULL;
		
	}
	
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			{
				ptrptr[i][j] = 0;
			}
	}
		return (ptrptr);
}	
