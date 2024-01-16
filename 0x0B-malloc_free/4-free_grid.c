#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional array.
 * @grid: pointer of pointer to 2d array.
 * @height: height of array
 *
 *Return: nothing.
 *
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
			free(grid);
	}
}

