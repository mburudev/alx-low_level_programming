#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: breadth
 * @height: depth.
 * Return: NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width || height == 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (int j = 0; j < width; j++)
		{
			 grid[i][j] = 0;
		}
	}
		return (grid);
}
