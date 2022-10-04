#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid created by your alloc_grid function.
 * @grid: The 2-dimensional array of integers to be freed.
 * @height: The height of grid.
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
