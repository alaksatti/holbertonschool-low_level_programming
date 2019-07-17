#include "holberton.h"
#include <stdio.h>



/**
 * free_grid - free 2d array from last problem.
 * @grid: pointer passed.
 * @height: col of grid.
 *Return: none.
 */

void free_grid(int **grid, int height)
{


	for (i= 0; height >= 0; --i)
		free(grid[height]);

	free(grid);


}
