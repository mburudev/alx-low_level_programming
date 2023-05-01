#include <stdlib.h>

/**
 * free_grid - frees memory allocated by alloc_grid.
 * @height: height of the grid
 * @grid: the 2D grid to be freed
 * Return: 0.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
