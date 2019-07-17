#include "holberton.h"
#include <stdlib.h>


/**
 * free_grid - free 2d array from last problem.
 * @grid: pointer passed.
 * @height: col of grid.
 *Return: none.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; ++i)
		free(grid[i]);

	free(grid);


}
