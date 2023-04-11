#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2 dimensional grid
 * @grid: 2d grid
 * @height: height dimension of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
